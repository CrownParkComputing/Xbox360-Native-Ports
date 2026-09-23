#include "soulcalibur2_funcs.10.h"

DEFINE_REX_FUNC(sub_820E0250) {
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
	// lfs f0,60(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f0,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,28(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f0,44(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820EAA60) {
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
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r11,-28232
	ctx.r3.s64 = ctx.r11.s64 + -28232;
	// bl 0x82202540
	ctx.lr = 0x820EAA84;
	sub_82202540(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820eaac4
	if (!ctx.cr6.eq) goto loc_820EAAC4;
	// lfs f3,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82200ab8
	ctx.lr = 0x820EAAA0;
	sub_82200AB8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820eaac4
	if (!ctx.cr6.lt) goto loc_820EAAC4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16236(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16236);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
loc_820EAAC4:
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

DEFINE_REX_FUNC(sub_820EE318) {
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
	// lwz r11,392(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 392);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ee340
	if (!ctx.cr6.eq) goto loc_820EE340;
	// bl 0x820eded0
	ctx.lr = 0x820EE33C;
	sub_820EDED0(ctx, base);
	// b 0x820ee388
	goto loc_820EE388;
loc_820EE340:
	// stw r11,372(r31)
	REX_STORE_U32(r31.u32 + 372, ctx.r11.u32);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// lhz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// stw r11,380(r31)
	REX_STORE_U32(r31.u32 + 380, ctx.r11.u32);
	// addi r3,r10,-28232
	ctx.r3.s64 = ctx.r10.s64 + -28232;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x82202540
	ctx.lr = 0x820EE35C;
	sub_82202540(ctx, base);
	// lwa r11,380(r31)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r31.u32 + 380));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x820e9b08
	ctx.lr = 0x820EE378;
	sub_820E9B08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e9b00
	ctx.lr = 0x820EE388;
	sub_820E9B00(ctx, base);
loc_820EE388:
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

DEFINE_REX_FUNC(sub_820F1090) {
	REX_FUNC_PROLOGUE();
	PPCRegister r24{};
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
	// bl 0x822d4e78
	ctx.lr = 0x820F1098;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f24
	ctx.lr = 0x820F10A0;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r29,0
	r29.s64 = 0;
	// addi r31,r11,32336
	r31.s64 = ctx.r11.s64 + 32336;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r11,4892(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4892);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r4,4900(r31)
	REX_STORE_U32(r31.u32 + 4900, ctx.r4.u32);
	// beq cr6,0x820f10d8
	if (ctx.cr6.eq) goto loc_820F10D8;
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
loc_820F10D8:
	// cmplwi cr6,r4,17
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 17, ctx.xer);
	// bgt cr6,0x820f2500
	if (ctx.cr6.gt) goto loc_820F2500;
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// rlwinm r0,r4,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,16424
	ctx.r12.s64 = ctx.r12.s64 + 16424;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32241
	ctx.r12.s64 = -2112946176;
	// addi r12,r12,4360
	ctx.r12.s64 = ctx.r12.s64 + 4360;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_820F1108;
	case 1:
		goto loc_820F1158;
	case 2:
		goto loc_820F1210;
	case 3:
		goto loc_820F16A4;
	case 4:
		goto loc_820F1B58;
	case 5:
		goto loc_820F1E88;
	case 6:
		goto loc_820F1584;
	case 7:
		goto loc_820F161C;
	case 8:
		goto loc_820F1C74;
	case 9:
		goto loc_820F1E6C;
	case 10:
		goto loc_820F1D08;
	case 11:
		goto loc_820F1DF8;
	case 12:
		goto loc_820F1E6C;
	case 13:
		goto loc_820F1EBC;
	case 14:
		goto loc_820F20D8;
	case 15:
		goto loc_820F1F84;
	case 16:
		goto loc_820F2134;
	case 17:
		goto loc_820F229C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_820F1108:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// stw r29,4860(r31)
	REX_STORE_U32(r31.u32 + 4860, r29.u32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// stw r29,4864(r31)
	REX_STORE_U32(r31.u32 + 4864, r29.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r29,4868(r31)
	REX_STORE_U32(r31.u32 + 4868, r29.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r29,4872(r31)
	REX_STORE_U32(r31.u32 + 4872, r29.u32);
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// stw r29,4876(r31)
	REX_STORE_U32(r31.u32 + 4876, r29.u32);
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r29,4880(r31)
	REX_STORE_U32(r31.u32 + 4880, r29.u32);
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
	// stw r29,4884(r31)
	REX_STORE_U32(r31.u32 + 4884, r29.u32);
	// stw r29,24(r31)
	REX_STORE_U32(r31.u32 + 24, r29.u32);
	// stw r29,4888(r31)
	REX_STORE_U32(r31.u32 + 4888, r29.u32);
	// stw r29,28(r31)
	REX_STORE_U32(r31.u32 + 28, r29.u32);
	// b 0x820f2500
	goto loc_820F2500;
loc_820F1158:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r30,-32170
	r30.s64 = -2108293120;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r29,r30,-28232
	r29.s64 = r30.s64 + -28232;
	// li r5,7
	ctx.r5.s64 = 7;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820f3460
	ctx.lr = 0x820F1184;
	sub_820F3460(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r11,17036
	ctx.r5.s64 = ctx.r11.s64 + 17036;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822025e0
	ctx.lr = 0x820F1198;
	sub_822025E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820efe58
	ctx.lr = 0x820F11A8;
	sub_820EFE58(ctx, base);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lwz r11,4872(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4872);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,320
	ctx.r10.s64 = ctx.r10.s64 + 320;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r6,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r11,400(r7)
	REX_STORE_U32(ctx.r7.u32 + 400, ctx.r11.u32);
	// bl 0x820f3460
	ctx.lr = 0x820F11F0;
	sub_820F3460(ctx, base);
	// lwz r11,-28232(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -28232);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F1208;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F1208:
	// bl 0x82200af0
	ctx.lr = 0x820F120C;
	sub_82200AF0(ctx, base);
	// b 0x820f2500
	goto loc_820F2500;
loc_820F1210:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// stw r29,4872(r31)
	REX_STORE_U32(r31.u32 + 4872, r29.u32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// blt cr6,0x820f1470
	if (ctx.cr6.lt) goto loc_820F1470;
	// beq cr6,0x820f1370
	if (ctx.cr6.eq) goto loc_820F1370;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(r28.u32, 3, ctx.xer);
	// bge cr6,0x820f2500
	if (!ctx.cr6.lt) goto loc_820F2500;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,10312(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 10312);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f0,17208(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17208);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x820f1250
	if (!ctx.cr6.eq) goto loc_820F1250;
	// fsubs f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// b 0x820f1254
	goto loc_820F1254;
loc_820F1250:
	// fadds f3,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_820F1254:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// stw r29,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r29.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r29,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// addi r11,r11,-7072
	ctx.r11.s64 = ctx.r11.s64 + -7072;
	// ori r10,r10,14236
	ctx.r10.u64 = ctx.r10.u64 | 14236;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r9,r9,14232
	ctx.r9.u64 = ctx.r9.u64 | 14232;
	// lfs f13,10540(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10540);
	ctx.f13.f64 = double(temp.f32);
	// ori r8,r8,14228
	ctx.r8.u64 = ctx.r8.u64 | 14228;
	// lfsx f0,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,10536(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10536);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfsx f0,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfsx f13,r11,r8
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,10532(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10532);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fadds f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f31,1996(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lfs f0,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// li r3,3
	ctx.r3.s64 = 3;
	// lfs f5,17204(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 17204);
	ctx.f5.f64 = double(temp.f32);
	// fmr f10,f31
	ctx.f10.f64 = f31.f64;
	// lfs f4,17200(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 17200);
	ctx.f4.f64 = double(temp.f32);
	// fmr f9,f31
	ctx.f9.f64 = f31.f64;
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f2,17196(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17196);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16628(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16628);
	ctx.f1.f64 = double(temp.f32);
	// fmr f8,f31
	ctx.f8.f64 = f31.f64;
	// fmr f7,f31
	ctx.f7.f64 = f31.f64;
	// fmr f6,f31
	ctx.f6.f64 = f31.f64;
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f30,f0
	ctx.f11.f64 = double(float(f30.f64 * ctx.f0.f64));
	// bl 0x820ece00
	ctx.lr = 0x820F12F8;
	sub_820ECE00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820efe58
	ctx.lr = 0x820F1308;
	sub_820EFE58(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,4872(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4872);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lfs f0,16584(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16584);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,36(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// stfs f31,28(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// stfs f31,52(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stw r7,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// stfs f31,48(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f31,44(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f31,68(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f31,64(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f31,84(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stfs f31,80(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f31,76(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stfs f31,100(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f31,96(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// stfs f31,92(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// stfs f31,108(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// b 0x820f2500
	goto loc_820F2500;
loc_820F1370:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,10312(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 10312);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f0,17192(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17192);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x820f139c
	if (!ctx.cr6.eq) goto loc_820F139C;
	// fsubs f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820e0088
	ctx.lr = 0x820F1390;
	sub_820E0088(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,17188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17188);
	f30.f64 = double(temp.f32);
	// b 0x820f13b0
	goto loc_820F13B0;
loc_820F139C:
	// fadds f31,f13,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820e0088
	ctx.lr = 0x820F13A8;
	sub_820E0088(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,17184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17184);
	f30.f64 = double(temp.f32);
loc_820F13B0:
	// fmuls f29,f1,f30
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(ctx.f1.f64 * f30.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820e0028
	ctx.lr = 0x820F13BC;
	sub_820E0028(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// fmuls f28,f1,f30
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(ctx.f1.f64 * f30.f64));
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,-7072
	ctx.r11.s64 = ctx.r11.s64 + -7072;
	// ori r10,r10,14228
	ctx.r10.u64 = ctx.r10.u64 | 14228;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// ori r9,r9,14232
	ctx.r9.u64 = ctx.r9.u64 | 14232;
	// lfs f13,10532(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10532);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,10536(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10536);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,2000(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2000);
	f30.f64 = double(temp.f32);
	// lfsx f13,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fmadds f11,f12,f30,f29
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, f30.f64, f29.f64)));
	// ble cr6,0x820f1404
	if (!ctx.cr6.gt) goto loc_820F1404;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820F1404:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f13,10540(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10540);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r10,r10,14236
	ctx.r10.u64 = ctx.r10.u64 | 14236;
	// stw r30,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f10,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f10.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfsx f0,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// li r3,3
	ctx.r3.s64 = 3;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f4,17180(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 17180);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,17196(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 17196);
	ctx.f2.f64 = double(temp.f32);
	// stw r9,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// lfs f1,16628(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16628);
	ctx.f1.f64 = double(temp.f32);
	// fmr f9,f10
	ctx.f9.f64 = ctx.f10.f64;
	// fmr f8,f10
	ctx.f8.f64 = ctx.f10.f64;
	// fmr f7,f10
	ctx.f7.f64 = ctx.f10.f64;
	// fmr f6,f10
	ctx.f6.f64 = ctx.f10.f64;
	// fmr f5,f10
	ctx.f5.f64 = ctx.f10.f64;
	// fmadds f13,f0,f30,f28
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, f28.f64)));
	// bl 0x820ece00
	ctx.lr = 0x820F146C;
	sub_820ECE00(ctx, base);
	// b 0x820f2500
	goto loc_820F2500;
loc_820F1470:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,3
	ctx.r3.s64 = 3;
	// lfs f13,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// bne cr6,0x820f14fc
	if (!ctx.cr6.eq) goto loc_820F14FC;
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,10312(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 10312);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r30,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// lfs f0,17176(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 17176);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f3,f12,f0
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f10,17172(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 17172);
	ctx.f10.f64 = double(temp.f32);
	// lfs f4,17168(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 17168);
	ctx.f4.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fadds f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f11,17164(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17164);
	ctx.f11.f64 = double(temp.f32);
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// lfs f8,16172(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16172);
	ctx.f8.f64 = double(temp.f32);
	// fmr f9,f10
	ctx.f9.f64 = ctx.f10.f64;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// lfs f6,17160(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 17160);
	ctx.f6.f64 = double(temp.f32);
	// lfs f1,16628(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16628);
	ctx.f1.f64 = double(temp.f32);
	// fmr f5,f3
	ctx.f5.f64 = ctx.f3.f64;
	// bl 0x820ecc68
	ctx.lr = 0x820F14F8;
	sub_820ECC68(ctx, base);
	// b 0x820f2500
	goto loc_820F2500;
loc_820F14FC:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,10312(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 10312);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r30,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// lfs f0,17156(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 17156);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,17176(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 17176);
	ctx.f12.f64 = double(temp.f32);
	// fadds f3,f11,f0
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fsubs f5,f11,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f10,17152(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 17152);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,17148(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17148);
	ctx.f6.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f11,17164(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 17164);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fmr f9,f10
	ctx.f9.f64 = ctx.f10.f64;
	// lfs f8,16172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	ctx.f8.f64 = double(temp.f32);
	// fmr f2,f6
	ctx.f2.f64 = ctx.f6.f64;
	// lfs f4,17144(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 17144);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,17140(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 17140);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,16628(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16628);
	ctx.f1.f64 = double(temp.f32);
	// fmr f7,f3
	ctx.f7.f64 = ctx.f3.f64;
	// fadds f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// bl 0x820ecc68
	ctx.lr = 0x820F1580;
	sub_820ECC68(ctx, base);
	// b 0x820f2500
	goto loc_820F2500;
loc_820F1584:
	// stw r29,4872(r31)
	REX_STORE_U32(r31.u32 + 4872, r29.u32);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r27,-32170
	r27.s64 = -2108293120;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r26,r27,-28232
	r26.s64 = r27.s64 + -28232;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820f3460
	ctx.lr = 0x820F15C0;
	sub_820F3460(ctx, base);
	// lwz r11,-28232(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -28232);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F15D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82200af0
	ctx.lr = 0x820F15DC;
	sub_82200AF0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x820f2e70
	ctx.lr = 0x820F15EC;
	sub_820F2E70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820efe58
	ctx.lr = 0x820F15FC;
	sub_820EFE58(ctx, base);
	// lwz r11,4872(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4872);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r30,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r30.u32);
	// stw r28,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r28.u32);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// b 0x820f2500
	goto loc_820F2500;
loc_820F161C:
	// stw r29,4872(r31)
	REX_STORE_U32(r31.u32 + 4872, r29.u32);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r30,-32170
	r30.s64 = -2108293120;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r29,r30,-28232
	r29.s64 = r30.s64 + -28232;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820f3460
	ctx.lr = 0x820F1654;
	sub_820F3460(ctx, base);
	// lwz r11,-28232(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -28232);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F166C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82200af0
	ctx.lr = 0x820F1670;
	sub_82200AF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x820f2e70
	ctx.lr = 0x820F1680;
	sub_820F2E70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820efe58
	ctx.lr = 0x820F1690;
	sub_820EFE58(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,4872(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4872);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// bl 0x820ebbf8
	ctx.lr = 0x820F16A0;
	sub_820EBBF8(ctx, base);
	// b 0x820f2500
	goto loc_820F2500;
loc_820F16A4:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lwz r9,96(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r30,r10,-7072
	r30.s64 = ctx.r10.s64 + -7072;
	// ori r10,r8,14236
	ctx.r10.u64 = ctx.r8.u64 | 14236;
	// li r27,1
	r27.s64 = 1;
	// stw r9,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stw r27,128(r11)
	REX_STORE_U32(ctx.r11.u32 + 128, r27.u32);
	// li r26,2
	r26.s64 = 2;
	// stw r27,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, r27.u32);
	// ori r11,r9,14228
	ctx.r11.u64 = ctx.r9.u64 | 14228;
	// lfsx f12,r30,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,10532(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 10532);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r30,r11
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,10540(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 10540);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// bl 0x820e0130
	ctx.lr = 0x820F16F0;
	sub_820E0130(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lfs f13,10532(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 10532);
	ctx.f13.f64 = double(temp.f32);
	// ori r11,r11,14228
	ctx.r11.u64 = ctx.r11.u64 | 14228;
	// lfs f11,10540(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 10540);
	ctx.f11.f64 = double(temp.f32);
	// ori r10,r10,14236
	ctx.r10.u64 = ctx.r10.u64 | 14236;
	// fneg f27,f1
	f27.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lfsx f0,r30,r11
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f12,r30,r10
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fadds f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f31,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	f31.f64 = double(temp.f32);
	// fmuls f29,f0,f31
	f29.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f28,f13,f31
	f28.f64 = double(float(ctx.f13.f64 * f31.f64));
	// bne cr6,0x820f1770
	if (!ctx.cr6.eq) goto loc_820F1770;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x820f1764
	if (ctx.cr6.lt) goto loc_820F1764;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bgt cr6,0x820f1764
	if (ctx.cr6.gt) goto loc_820F1764;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821ff168
	ctx.lr = 0x820F175C;
	sub_821FF168(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// b 0x820f1770
	goto loc_820F1770;
loc_820F1764:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821ff168
	ctx.lr = 0x820F176C;
	sub_821FF168(ctx, base);
	// addi r26,r3,2
	r26.s64 = ctx.r3.s64 + 2;
loc_820F1770:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r11,34(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 34);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820f1790
	if (!ctx.cr6.eq) goto loc_820F1790;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821ff168
	ctx.lr = 0x820F178C;
	sub_821FF168(ctx, base);
	// addi r26,r3,4
	r26.s64 = ctx.r3.s64 + 4;
loc_820F1790:
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(r26.u32, 2, ctx.xer);
	// blt cr6,0x820f1a1c
	if (ctx.cr6.lt) goto loc_820F1A1C;
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(r26.u32, 4, ctx.xer);
	// blt cr6,0x820f18ec
	if (ctx.cr6.lt) goto loc_820F18EC;
	// cmplwi cr6,r26,6
	ctx.cr6.compare<uint32_t>(r26.u32, 6, ctx.xer);
	// bge cr6,0x820f2500
	if (!ctx.cr6.lt) goto loc_820F2500;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r30,-32170
	r30.s64 = -2108293120;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r28,r30,-28232
	r28.s64 = r30.s64 + -28232;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820f3460
	ctx.lr = 0x820F17D4;
	sub_820F3460(ctx, base);
	// lwz r11,-28232(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -28232);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F17EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82200af0
	ctx.lr = 0x820F17F4;
	sub_82200AF0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820f2e70
	ctx.lr = 0x820F1804;
	sub_820F2E70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f28.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// lfs f2,17136(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17136);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F1828;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,17132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17132);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200818
	ctx.lr = 0x820F1838;
	sub_82200818(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(r26.s32, 4, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f29,16644(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16644);
	f29.f64 = double(temp.f32);
	// lfs f30,16904(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16904);
	f30.f64 = double(temp.f32);
	// bne cr6,0x820f1878
	if (!ctx.cr6.eq) goto loc_820F1878;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x822006f8
	ctx.lr = 0x820F185C;
	sub_822006F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200708
	ctx.lr = 0x820F1868;
	sub_82200708(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x822006f8
	ctx.lr = 0x820F1874;
	sub_822006F8(ctx, base);
	// b 0x820f1890
	goto loc_820F1890;
loc_820F1878:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,16908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16908);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822006f8
	ctx.lr = 0x820F1884;
	sub_822006F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200708
	ctx.lr = 0x820F1890;
	sub_82200708(ctx, base);
loc_820F1890:
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// bl 0x82201938
	ctx.lr = 0x820F1898;
	sub_82201938(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// bl 0x82200700
	ctx.lr = 0x820F18A4;
	sub_82200700(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820efe58
	ctx.lr = 0x820F18B4;
	sub_820EFE58(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,4872(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4872);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lfs f0,16600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16600);
	ctx.f0.f64 = double(temp.f32);
	// stfs f30,24(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stw r27,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r27.u32);
	// stfs f28,28(r11)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r26,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, r26.u32);
	// stfs f31,32(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stw r29,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r29.u32);
	// stfs f29,48(r11)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// b 0x820f2500
	goto loc_820F2500;
loc_820F18EC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r30,-32170
	r30.s64 = -2108293120;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r28,r30,-28232
	r28.s64 = r30.s64 + -28232;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820f3460
	ctx.lr = 0x820F1918;
	sub_820F3460(ctx, base);
	// lwz r11,-28232(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -28232);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F1930;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82200af0
	ctx.lr = 0x820F1938;
	sub_82200AF0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820f2e70
	ctx.lr = 0x820F1948;
	sub_820F2E70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f28.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// lfs f2,17136(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17136);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F196C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,17128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17128);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200818
	ctx.lr = 0x820F197C;
	sub_82200818(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f30,16644(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16644);
	f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x822006f8
	ctx.lr = 0x820F1990;
	sub_822006F8(ctx, base);
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// bl 0x82201938
	ctx.lr = 0x820F1998;
	sub_82201938(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(r26.s32, 4, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,17124(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17124);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x820f19b8
	if (!ctx.cr6.eq) goto loc_820F19B8;
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// b 0x820f19bc
	goto loc_820F19BC;
loc_820F19B8:
	// fsubs f1,f29,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f29.f64 - ctx.f0.f64));
loc_820F19BC:
	// bl 0x82200700
	ctx.lr = 0x820F19C0;
	sub_82200700(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200708
	ctx.lr = 0x820F19CC;
	sub_82200708(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820efe58
	ctx.lr = 0x820F19DC;
	sub_820EFE58(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,4872(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4872);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lfs f0,16904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16600(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16600);
	ctx.f13.f64 = double(temp.f32);
	// stw r27,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r27.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stw r26,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, r26.u32);
	// stfs f29,28(r11)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// stfs f31,32(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stw r29,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r29.u32);
	// stfs f13,44(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f30,48(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// b 0x820f2500
	goto loc_820F2500;
loc_820F1A1C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r28,-32170
	r28.s64 = -2108293120;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r25,r28,-28232
	r25.s64 = r28.s64 + -28232;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f30,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f30.f64 = double(temp.f32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x820f3460
	ctx.lr = 0x820F1A48;
	sub_820F3460(ctx, base);
	// lwz r11,-28232(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -28232);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F1A60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82200af0
	ctx.lr = 0x820F1A68;
	sub_82200AF0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820f2e70
	ctx.lr = 0x820F1A78;
	sub_820F2E70(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lfs f13,6164(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 6164);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r11,r11,9860
	ctx.r11.u64 = ctx.r11.u64 | 9860;
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// lfsx f0,r30,r11
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f2,f0,f31
	ctx.f2.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F1AAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f1,2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2340);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200818
	ctx.lr = 0x820F1ABC;
	sub_82200818(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f1,17120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17120);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822006f8
	ctx.lr = 0x820F1ACC;
	sub_822006F8(ctx, base);
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// bl 0x82201938
	ctx.lr = 0x820F1AD4;
	sub_82201938(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f0,17116(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17116);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x820f1af4
	if (!ctx.cr6.eq) goto loc_820F1AF4;
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// b 0x820f1af8
	goto loc_820F1AF8;
loc_820F1AF4:
	// fsubs f1,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f31.f64 - ctx.f0.f64));
loc_820F1AF8:
	// bl 0x82200700
	ctx.lr = 0x820F1AFC;
	sub_82200700(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82200708
	ctx.lr = 0x820F1B08;
	sub_82200708(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820efe58
	ctx.lr = 0x820F1B18;
	sub_820EFE58(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,4872(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4872);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lfs f13,16904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16904);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16360(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16360);
	ctx.f0.f64 = double(temp.f32);
	// stw r27,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r27.u32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stw r26,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, r26.u32);
	// stfs f31,28(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// stfs f30,32(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stw r29,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r29.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// b 0x820f2500
	goto loc_820F2500;
loc_820F1B58:
	// lis r30,-32170
	r30.s64 = -2108293120;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r28,r30,-28232
	r28.s64 = r30.s64 + -28232;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x820f2838
	ctx.lr = 0x820F1B6C;
	sub_820F2838(ctx, base);
	// stw r29,4880(r31)
	REX_STORE_U32(r31.u32 + 4880, r29.u32);
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,4872(r31)
	REX_STORE_U32(r31.u32 + 4872, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// bl 0x82202540
	ctx.lr = 0x820F1B94;
	sub_82202540(ctx, base);
	// bl 0x820e85f8
	ctx.lr = 0x820F1B98;
	sub_820E85F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82202540
	ctx.lr = 0x820F1BA4;
	sub_82202540(ctx, base);
	// bl 0x820e85f8
	ctx.lr = 0x820F1BA8;
	sub_820E85F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820f3460
	ctx.lr = 0x820F1BCC;
	sub_820F3460(ctx, base);
	// lwz r11,-28232(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -28232);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F1BE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82200af0
	ctx.lr = 0x820F1BEC;
	sub_82200AF0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,16616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16616);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200ac8
	ctx.lr = 0x820F1BFC;
	sub_82200AC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82200ad0
	ctx.lr = 0x820F1C04;
	sub_82200AD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820efe58
	ctx.lr = 0x820F1C14;
	sub_820EFE58(ctx, base);
	// lwz r11,4872(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4872);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r29,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r29.u32);
	// bl 0x820f3460
	ctx.lr = 0x820F1C38;
	sub_820F3460(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r5,r11,17104
	ctx.r5.s64 = ctx.r11.s64 + 17104;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822025e0
	ctx.lr = 0x820F1C4C;
	sub_822025E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82202540
	ctx.lr = 0x820F1C58;
	sub_82202540(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82200ae0
	ctx.lr = 0x820F1C60;
	sub_82200AE0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2352);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200ac8
	ctx.lr = 0x820F1C70;
	sub_82200AC8(ctx, base);
	// b 0x820f2500
	goto loc_820F2500;
loc_820F1C74:
	// lwz r8,96(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// li r27,1
	r27.s64 = 1;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r27,128(r11)
	REX_STORE_U32(ctx.r11.u32 + 128, r27.u32);
	// lis r6,-32170
	ctx.r6.s64 = -2108293120;
	// stw r27,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, r27.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r28,r6,-28232
	r28.s64 = ctx.r6.s64 + -28232;
	// stw r8,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,4872(r31)
	REX_STORE_U32(r31.u32 + 4872, r29.u32);
	// lfs f31,1996(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	f31.f64 = double(temp.f32);
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// bl 0x820f3460
	ctx.lr = 0x820F1CC4;
	sub_820F3460(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82202540
	ctx.lr = 0x820F1CD0;
	sub_82202540(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x820f2e70
	ctx.lr = 0x820F1CE0;
	sub_820F2E70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820efe58
	ctx.lr = 0x820F1CF0;
	sub_820EFE58(ctx, base);
	// lwz r11,4872(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4872);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r30,168(r11)
	REX_STORE_U32(ctx.r11.u32 + 168, r30.u32);
	// stw r29,172(r11)
	REX_STORE_U32(ctx.r11.u32 + 172, r29.u32);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// b 0x820f2500
	goto loc_820F2500;
loc_820F1D08:
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// li r27,1
	r27.s64 = 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r27,128(r11)
	REX_STORE_U32(ctx.r11.u32 + 128, r27.u32);
	// lis r25,-32170
	r25.s64 = -2108293120;
	// stw r27,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r24,r25,-28232
	r24.s64 = r25.s64 + -28232;
	// stw r10,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f31,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820f3460
	ctx.lr = 0x820F1D48;
	sub_820F3460(ctx, base);
	// lwz r11,-28232(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + -28232);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F1D60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x82200af0
	ctx.lr = 0x820F1D68;
	sub_82200AF0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lfs f1,16616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16616);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200ac8
	ctx.lr = 0x820F1D78;
	sub_82200AC8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82200ad0
	ctx.lr = 0x820F1D80;
	sub_82200AD0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x820f2e70
	ctx.lr = 0x820F1D90;
	sub_820F2E70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x820efe58
	ctx.lr = 0x820F1DA0;
	sub_820EFE58(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lwz r31,4880(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4880);
	// bne cr6,0x820f1db8
	if (!ctx.cr6.eq) goto loc_820F1DB8;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x821ff168
	ctx.lr = 0x820F1DB4;
	sub_821FF168(ctx, base);
	// addi r28,r3,1
	r28.s64 = ctx.r3.s64 + 1;
loc_820F1DB8:
	// cmpwi cr6,r28,19
	ctx.cr6.compare<int32_t>(r28.s32, 19, ctx.xer);
	// ble cr6,0x820f1dc4
	if (!ctx.cr6.gt) goto loc_820F1DC4;
	// mr r28,r27
	r28.u64 = r27.u64;
loc_820F1DC4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x820f1dd4
	if (ctx.cr6.eq) goto loc_820F1DD4;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// b 0x820f1ddc
	goto loc_820F1DDC;
loc_820F1DD4:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r10,r11,-40
	ctx.r10.s64 = ctx.r11.s64 + -40;
loc_820F1DDC:
	// mulli r11,r28,52
	ctx.r11.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(52));
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r28,32(r31)
	REX_STORE_U32(r31.u32 + 32, r28.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// b 0x820f2500
	goto loc_820F2500;
loc_820F1DF8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r30,-32170
	r30.s64 = -2108293120;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r28,r30,-28232
	r28.s64 = r30.s64 + -28232;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820f3460
	ctx.lr = 0x820F1E24;
	sub_820F3460(ctx, base);
	// lwz r11,-28232(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -28232);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F1E3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82200af0
	ctx.lr = 0x820F1E40;
	sub_82200AF0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x820f2e70
	ctx.lr = 0x820F1E50;
	sub_820F2E70(ctx, base);
	// li r5,9
	ctx.r5.s64 = 9;
loc_820F1E54:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820efe58
	ctx.lr = 0x820F1E60;
	sub_820EFE58(ctx, base);
	// lwz r11,4872(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4872);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// b 0x820f2500
	goto loc_820F2500;
loc_820F1E6C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,-28232
	ctx.r3.s64 = ctx.r10.s64 + -28232;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820f2e70
	ctx.lr = 0x820F1E84;
	sub_820F2E70(ctx, base);
	// b 0x820f2500
	goto loc_820F2500;
loc_820F1E88:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r11,30(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x820f1ea8
	if (!ctx.cr6.eq) goto loc_820F1EA8;
	// li r11,17
	ctx.r11.s64 = 17;
loc_820F1EA0:
	// stw r11,4900(r31)
	REX_STORE_U32(r31.u32 + 4900, ctx.r11.u32);
	// b 0x820f2500
	goto loc_820F2500;
loc_820F1EA8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f0fb0
	ctx.lr = 0x820F1EB4;
	sub_820F0FB0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x820f1ea0
	goto loc_820F1EA0;
loc_820F1EBC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r30,r10,-28232
	r30.s64 = ctx.r10.s64 + -28232;
	// li r5,7
	ctx.r5.s64 = 7;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820f3460
	ctx.lr = 0x820F1EE8;
	sub_820F3460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x820f2e70
	ctx.lr = 0x820F1EF8;
	sub_820F2E70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,17056
	ctx.r5.s64 = ctx.r11.s64 + 17056;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822025e0
	ctx.lr = 0x820F1F0C;
	sub_822025E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820efe58
	ctx.lr = 0x820F1F1C;
	sub_820EFE58(ctx, base);
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lwz r11,4872(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4872);
	// li r27,1
	r27.s64 = 1;
	// addi r9,r9,320
	ctx.r9.s64 = ctx.r9.s64 + 320;
	// li r8,3
	ctx.r8.s64 = 3;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stfs f31,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r29,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r29.u32);
	// stfs f31,64(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stw r27,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, r27.u32);
	// stfs f31,84(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stw r27,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, r27.u32);
	// stfs f31,52(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stw r29,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, r29.u32);
	// stfs f31,48(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stw r8,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// stfs f31,44(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stw r27,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r27.u32);
	// stfs f31,68(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f31,76(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// stw r11,400(r10)
	REX_STORE_U32(ctx.r10.u32 + 400, ctx.r11.u32);
	// b 0x820f2500
	goto loc_820F2500;
loc_820F1F84:
	// lis r31,-32170
	r31.s64 = -2108293120;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r31,-28232
	r30.s64 = r31.s64 + -28232;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f2838
	ctx.lr = 0x820F1F98;
	sub_820F2838(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820f2838
	ctx.lr = 0x820F1FA4;
	sub_820F2838(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x820f2838
	ctx.lr = 0x820F1FB0;
	sub_820F2838(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f30,2332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2332);
	f30.f64 = double(temp.f32);
	// li r4,5
	ctx.r4.s64 = 5;
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820f3460
	ctx.lr = 0x820F1FDC;
	sub_820F3460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x820f3460
	ctx.lr = 0x820F1FF8;
	sub_820F3460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x820f2838
	ctx.lr = 0x820F2004;
	sub_820F2838(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,7
	ctx.r5.s64 = 7;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820f3460
	ctx.lr = 0x820F2020;
	sub_820F3460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82202540
	ctx.lr = 0x820F202C;
	sub_82202540(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x820e9af8
	ctx.lr = 0x820F2038;
	sub_820E9AF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e9af0
	ctx.lr = 0x820F2044;
	sub_820E9AF0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,17088
	ctx.r5.s64 = ctx.r11.s64 + 17088;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822025e0
	ctx.lr = 0x820F2058;
	sub_822025E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x820f2d80
	ctx.lr = 0x820F2064;
	sub_820F2D80(ctx, base);
	// lwz r11,-28232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -28232);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F207C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f2,16204(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16204);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,68(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F20A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822006f8
	ctx.lr = 0x820F20AC;
	sub_822006F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200700
	ctx.lr = 0x820F20B8;
	sub_82200700(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200708
	ctx.lr = 0x820F20C4;
	sub_82200708(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,16188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16188);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200818
	ctx.lr = 0x820F20D4;
	sub_82200818(ctx, base);
	// b 0x820f2500
	goto loc_820F2500;
loc_820F20D8:
	// stw r29,148(r11)
	REX_STORE_U32(ctx.r11.u32 + 148, r29.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r30,r10,-28232
	r30.s64 = ctx.r10.s64 + -28232;
	// li r5,7
	ctx.r5.s64 = 7;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820f3460
	ctx.lr = 0x820F2108;
	sub_820F3460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x820f2e70
	ctx.lr = 0x820F2118;
	sub_820F2E70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,17076
	ctx.r5.s64 = ctx.r11.s64 + 17076;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822025e0
	ctx.lr = 0x820F212C;
	sub_822025E0(ctx, base);
	// li r5,14
	ctx.r5.s64 = 14;
	// b 0x820f1e54
	goto loc_820F1E54;
loc_820F2134:
	// stw r29,152(r11)
	REX_STORE_U32(ctx.r11.u32 + 152, r29.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r28,-32170
	r28.s64 = -2108293120;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r27,r28,-28232
	r27.s64 = r28.s64 + -28232;
	// li r5,7
	ctx.r5.s64 = 7;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820f3460
	ctx.lr = 0x820F2164;
	sub_820F3460(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x820f2e70
	ctx.lr = 0x820F2174;
	sub_820F2E70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r5,r11,17068
	ctx.r5.s64 = ctx.r11.s64 + 17068;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822025e0
	ctx.lr = 0x820F2188;
	sub_822025E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820efe58
	ctx.lr = 0x820F2198;
	sub_820EFE58(ctx, base);
	// lwz r11,4872(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4872);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// stw r30,400(r11)
	REX_STORE_U32(ctx.r11.u32 + 400, r30.u32);
	// bl 0x820ea9c0
	ctx.lr = 0x820F21AC;
	sub_820EA9C0(ctx, base);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// lwz r11,10484(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10484);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,10488(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10488);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// lwz r11,10492(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10492);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// lwz r11,10496(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10496);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// lwz r11,10308(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10308);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// lwz r11,10312(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10312);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// lwz r11,10316(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10316);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// lwz r11,10320(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10320);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// bl 0x820f3460
	ctx.lr = 0x820F220C;
	sub_820F3460(ctx, base);
	// lwz r11,-28232(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -28232);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F2224;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82200af0
	ctx.lr = 0x820F222C;
	sub_82200AF0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,16616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16616);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200ac8
	ctx.lr = 0x820F223C;
	sub_82200AC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82200ad0
	ctx.lr = 0x820F2244;
	sub_82200AD0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// lfs f2,2332(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2332);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820f3460
	ctx.lr = 0x820F2264;
	sub_820F3460(ctx, base);
	// lwz r11,-28232(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -28232);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F227C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F2294;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x820f1208
	goto loc_820F1208;
loc_820F229C:
	// lis r30,-32170
	r30.s64 = -2108293120;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r28,r30,-28232
	r28.s64 = r30.s64 + -28232;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x820f2838
	ctx.lr = 0x820F22B0;
	sub_820F2838(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82202540
	ctx.lr = 0x820F22BC;
	sub_82202540(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x820e85f8
	ctx.lr = 0x820F22C4;
	sub_820E85F8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822009c8
	ctx.lr = 0x820F22CC;
	sub_822009C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// bl 0x822009d0
	ctx.lr = 0x820F22D8;
	sub_822009D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// bl 0x822009d8
	ctx.lr = 0x820F22E4;
	sub_822009D8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// bl 0x82200a38
	ctx.lr = 0x820F22F0;
	sub_82200A38(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	f26.f64 = ctx.f1.f64;
	// bl 0x82200a08
	ctx.lr = 0x820F22FC;
	sub_82200A08(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	f25.f64 = ctx.f1.f64;
	// bl 0x82200a10
	ctx.lr = 0x820F2308;
	sub_82200A10(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	f24.f64 = ctx.f1.f64;
	// bl 0x82200a18
	ctx.lr = 0x820F2314;
	sub_82200A18(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f23,f1
	ctx.fpscr.disableFlushMode();
	f23.f64 = ctx.f1.f64;
	// bl 0x82202540
	ctx.lr = 0x820F2324;
	sub_82202540(ctx, base);
	// bl 0x820e85f8
	ctx.lr = 0x820F2328;
	sub_820E85F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820f3460
	ctx.lr = 0x820F234C;
	sub_820F3460(ctx, base);
	// lwz r11,-28232(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -28232);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F2364;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x82200af0
	ctx.lr = 0x820F236C;
	sub_82200AF0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f30,16616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16616);
	f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82200ac8
	ctx.lr = 0x820F2380;
	sub_82200AC8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82200ad0
	ctx.lr = 0x820F2388;
	sub_82200AD0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820f3460
	ctx.lr = 0x820F23A4;
	sub_820F3460(ctx, base);
	// lwz r11,-28232(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -28232);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F23BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x82200af0
	ctx.lr = 0x820F23C4;
	sub_82200AF0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82200ac8
	ctx.lr = 0x820F23D0;
	sub_82200AC8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82200ad0
	ctx.lr = 0x820F23D8;
	sub_82200AD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820efe58
	ctx.lr = 0x820F23E8;
	sub_820EFE58(ctx, base);
	// lwz r11,4872(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4872);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r29,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r29.u32);
	// bl 0x820f3460
	ctx.lr = 0x820F240C;
	sub_820F3460(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r5,r11,17104
	ctx.r5.s64 = ctx.r11.s64 + 17104;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822025e0
	ctx.lr = 0x820F2420;
	sub_822025E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82202540
	ctx.lr = 0x820F242C;
	sub_82202540(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82200ae0
	ctx.lr = 0x820F2434;
	sub_82200AE0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2352);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200ac8
	ctx.lr = 0x820F2444;
	sub_82200AC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// lfs f2,2332(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2332);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820f3460
	ctx.lr = 0x820F2464;
	sub_820F3460(ctx, base);
	// lwz r11,-28232(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -28232);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F247C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F2494;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82200af0
	ctx.lr = 0x820F249C;
	sub_82200AF0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,17064(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17064);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200838
	ctx.lr = 0x820F24AC;
	sub_82200838(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x822006f8
	ctx.lr = 0x820F24B8;
	sub_822006F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x82200700
	ctx.lr = 0x820F24C4;
	sub_82200700(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// bl 0x82200708
	ctx.lr = 0x820F24D0;
	sub_82200708(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f26.f64;
	// bl 0x82200818
	ctx.lr = 0x820F24DC;
	sub_82200818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f25.f64;
	// bl 0x82200750
	ctx.lr = 0x820F24E8;
	sub_82200750(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f24.f64;
	// bl 0x82200758
	ctx.lr = 0x820F24F4;
	sub_82200758(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f23.f64;
	// bl 0x821a3a28
	ctx.lr = 0x820F2500;
	sub_821A3A28(ctx, base);
loc_820F2500:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f70
	ctx.lr = 0x820F250C;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8214B028) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r11,24280(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24280);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8214b050
	if (ctx.cr6.lt) goto loc_8214B050;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8214b050
	if (!ctx.cr6.lt) goto loc_8214B050;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r3,r11,24136
	ctx.r3.s64 = ctx.r11.s64 + 24136;
	// blr 
	return;
loc_8214B050:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-22736
	ctx.r3.s64 = ctx.r11.s64 + -22736;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214C788) {
	REX_FUNC_PROLOGUE();
	// lha r3,6(r3)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 6));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214C818) {
	REX_FUNC_PROLOGUE();
	// li r9,20
	ctx.r9.s64 = 20;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-19548
	ctx.r10.s64 = ctx.r10.s64 + -19548;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// sth r11,8(r3)
	REX_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r11,6(r3)
	REX_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// addi r9,r3,12
	ctx.r9.s64 = ctx.r3.s64 + 12;
	// sth r11,4(r3)
	REX_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// addi r8,r3,32
	ctx.r8.s64 = ctx.r3.s64 + 32;
	// stw r11,24296(r7)
	REX_STORE_U32(ctx.r7.u32 + 24296, ctx.r11.u32);
	// stw r11,24300(r6)
	REX_STORE_U32(ctx.r6.u32 + 24300, ctx.r11.u32);
loc_8214C85C:
	// stbx r11,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// stbx r11,r8,r10
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8214c85c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214C85C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214D1D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8214D1D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lhz r11,30(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 30);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bne cr6,0x8214d274
	if (!ctx.cr6.eq) goto loc_8214D274;
	// lis r30,-32169
	r30.s64 = -2108227584;
	// lwz r3,24288(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 24288);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214d214
	if (ctx.cr6.eq) goto loc_8214D214;
	// bl 0x821957b8
	ctx.lr = 0x8214D20C;
	sub_821957B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24288(r30)
	REX_STORE_U32(r30.u32 + 24288, ctx.r11.u32);
loc_8214D214:
	// lis r30,-32169
	r30.s64 = -2108227584;
	// lwz r3,24284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 24284);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214d230
	if (ctx.cr6.eq) goto loc_8214D230;
	// bl 0x821957b8
	ctx.lr = 0x8214D228;
	sub_821957B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24284(r30)
	REX_STORE_U32(r30.u32 + 24284, ctx.r11.u32);
loc_8214D230:
	// lwz r11,-68(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -68);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// stb r10,23(r29)
	REX_STORE_U8(r29.u32 + 23, ctx.r10.u8);
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r10,2968(r31)
	REX_STORE_U8(r31.u32 + 2968, ctx.r10.u8);
	// beq cr6,0x8214d25c
	if (ctx.cr6.eq) goto loc_8214D25C;
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// stb r11,2969(r31)
	REX_STORE_U8(r31.u32 + 2969, ctx.r11.u8);
loc_8214D25C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82191be0
	ctx.lr = 0x8214D264;
	sub_82191BE0(ctx, base);
	// bl 0x821159c8
	ctx.lr = 0x8214D268;
	sub_821159C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214d274
	if (ctx.cr0.eq) goto loc_8214D274;
	// bl 0x82115fb8
	ctx.lr = 0x8214D274;
	sub_82115FB8(ctx, base);
loc_8214D274:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821502C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82150308
	if (!ctx.cr6.eq) goto loc_82150308;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,27848(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 27848);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2352(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2352);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f13,100(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f12,104(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f11,108(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// b 0x82150330
	goto loc_82150330;
loc_82150308:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,2384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,96(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f12,108(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 108, temp.u32);
loc_82150330:
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82150364
	if (ctx.cr6.lt) goto loc_82150364;
	// beq cr6,0x8215035c
	if (ctx.cr6.eq) goto loc_8215035C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82150354
	if (ctx.cr6.lt) goto loc_82150354;
	// bne cr6,0x8215036c
	if (!ctx.cr6.eq) goto loc_8215036C;
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x82150368
	goto loc_82150368;
loc_82150354:
	// li r11,26
	ctx.r11.s64 = 26;
	// b 0x82150368
	goto loc_82150368;
loc_8215035C:
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x82150368
	goto loc_82150368;
loc_82150364:
	// li r11,28
	ctx.r11.s64 = 28;
loc_82150368:
	// stw r11,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
loc_8215036C:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,18(r3)
	REX_STORE_U16(ctx.r3.u32 + 18, ctx.r11.u16);
	// stb r10,61(r3)
	REX_STORE_U8(ctx.r3.u32 + 61, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821564C0) {
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
	ctx.lr = 0x821564C8;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f38
	ctx.lr = 0x821564D0;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f29,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f29.f64 = double(temp.f32);
	// lfs f0,-23828(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -23828);
	ctx.f0.f64 = double(temp.f32);
	// li r31,-256
	r31.s64 = -256;
	// lfs f30,-18804(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -18804);
	f30.f64 = double(temp.f32);
	// li r30,-1
	r30.s64 = -1;
	// lfs f31,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	f31.f64 = double(temp.f32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lfs f28,16036(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16036);
	f28.f64 = double(temp.f32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lfs f13,-17480(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -17480);
	ctx.f13.f64 = double(temp.f32);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f29,128(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stfs f30,136(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f28,144(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f29,160(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f28,176(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f30,184(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bl 0x821e8750
	ctx.lr = 0x82156574;
	sub_821E8750(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r9,3
	ctx.r9.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x821e8750
	ctx.lr = 0x82156598;
	sub_821E8750(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lfs f0,27552(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27552);
	ctx.f0.f64 = double(temp.f32);
	// stfs f29,128(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f29,132(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f28,144(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,148(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f29,160(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f28,176(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f30,184(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lfs f4,124(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 124);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,120(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 120);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,116(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,112(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82202c38
	ctx.lr = 0x821565F8;
	sub_82202C38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lfs f2,16232(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16232);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f1,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822028c8
	ctx.lr = 0x82156620;
	sub_822028C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,17064(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17064);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1cc0
	ctx.lr = 0x82156634;
	sub_820E1CC0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82202740
	ctx.lr = 0x8215663C;
	sub_82202740(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,255
	ctx.r8.s64 = 255;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821e8750
	ctx.lr = 0x82156664;
	sub_821E8750(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x821e8750
	ctx.lr = 0x82156688;
	sub_821E8750(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f84
	ctx.lr = 0x82156694;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8215E210) {
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
	ctx.lr = 0x8215E218;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f00
	ctx.lr = 0x8215E220;
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821afce8
	ctx.lr = 0x8215E22C;
	sub_821AFCE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8215f2e8
	if (!ctx.cr0.eq) goto loc_8215F2E8;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215f2e8
	if (ctx.cr6.eq) goto loc_8215F2E8;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8215e288
	if (!ctx.cr6.eq) goto loc_8215E288;
	// lwz r3,24316(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 24316);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,12(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215E264;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// or. r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 | ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8215e288
	if (ctx.cr0.eq) goto loc_8215E288;
	// li r6,0
	ctx.r6.s64 = 0;
	// lhz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// bl 0x82101d88
	ctx.lr = 0x8215E288;
	sub_82101D88(ctx, base);
loc_8215E288:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r5,r31,172
	ctx.r5.s64 = r31.s64 + 172;
	// lfs f0,15632(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15632);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f13,-18584(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -18584);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f12,16352(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16352);
	ctx.f12.f64 = double(temp.f32);
	// lfs f31,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	f31.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x820e1b28
	ctx.lr = 0x8215E2C8;
	sub_820E1B28(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// addi r19,r11,432
	r19.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,230
	ctx.r3.u64 = ctx.r3.u64 | 230;
	// stw r19,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r19.u32);
	// lwz r4,344(r19)
	ctx.r4.u64 = REX_LOAD_U32(r19.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x8215E2E4;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r17,r11,30080
	r17.s64 = ctx.r11.s64 + 30080;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// stw r17,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, r17.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821eb1a0
	ctx.lr = 0x8215E304;
	sub_821EB1A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f14,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f14.f64 = double(temp.f32);
	// stfs f14,196(r1)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fcmpu cr6,f0,f14
	ctx.cr6.compare(ctx.f0.f64, f14.f64);
	// ble cr6,0x8215e338
	if (!ctx.cr6.gt) goto loc_8215E338;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-23388(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23388);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8215e338
	if (!ctx.cr6.lt) goto loc_8215E338;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x8215e33c
	goto loc_8215E33C;
loc_8215E338:
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_8215E33C:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215e350
	if (!ctx.cr6.eq) goto loc_8215E350;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	f30.f64 = f31.f64;
	// b 0x8215e358
	goto loc_8215E358;
loc_8215E350:
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f30,f31,f0
	f30.f64 = double(float(f31.f64 - ctx.f0.f64));
loc_8215E358:
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r19)
	ctx.r4.u64 = REX_LOAD_U32(r19.u32 + 344);
	// ori r3,r3,230
	ctx.r3.u64 = ctx.r3.u64 | 230;
	// bl 0x820e68b8
	ctx.lr = 0x8215E368;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f4,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f1,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r9,-12952
	ctx.r5.s64 = ctx.r9.s64 + -12952;
	// stfd f4,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// lfd f24,26664(r11)
	f24.u64 = REX_LOAD_U64(ctx.r11.u32 + 26664);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stfd f24,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, f24.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f30,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f30.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
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
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f5,f24
	ctx.f5.f64 = f24.f64;
	// bl 0x821eaf80
	ctx.lr = 0x8215E3C0;
	sub_821EAF80(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r21,r11,-16872
	r21.s64 = ctx.r11.s64 + -16872;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f12,26896(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 26896);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f13,2012(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2012);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f11,20484(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20484);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,2332(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2332);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16188(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16188);
	ctx.f9.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f25,28252(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28252);
	f25.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f28,-12956(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -12956);
	f28.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f20,-12960(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12960);
	f20.f64 = double(temp.f32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lfs f21,20480(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20480);
	f21.f64 = double(temp.f32);
	// lis r30,-32255
	r30.s64 = -2113863680;
	// lfs f22,-23588(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -23588);
	f22.f64 = double(temp.f32);
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// lfs f23,-12964(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -12964);
	f23.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f29,16228(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16228);
	f29.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f26,-12968(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -12968);
	f26.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f16,-12972(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + -12972);
	f16.f64 = double(temp.f32);
	// addi r18,r9,13128
	r18.s64 = ctx.r9.s64 + 13128;
	// lfs f17,-18556(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + -18556);
	f17.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// li r27,0
	r27.s64 = 0;
	// lfs f19,26628(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 26628);
	f19.f64 = double(temp.f32);
	// li r22,0
	r22.s64 = 0;
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mr r28,r21
	r28.u64 = r21.u64;
	// stfs f11,168(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f10,160(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// stfs f9,164(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r24,r11,-12992
	r24.s64 = ctx.r11.s64 + -12992;
	// stw r18,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, r18.u32);
	// addi r26,r10,-13016
	r26.s64 = ctx.r10.s64 + -13016;
	// lfs f18,-18492(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -18492);
	f18.f64 = double(temp.f32);
	// addi r25,r8,-13040
	r25.s64 = ctx.r8.s64 + -13040;
	// addi r20,r7,24328
	r20.s64 = ctx.r7.s64 + 24328;
loc_8215E4A8:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215e8a0
	if (ctx.cr6.eq) goto loc_8215E8A0;
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215E4C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq 0x8215e88c
	if (ctx.cr0.eq) goto loc_8215E88C;
	// lwz r4,344(r19)
	ctx.r4.u64 = REX_LOAD_U32(r19.u32 + 344);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x820e68b8
	ctx.lr = 0x8215E4D4;
	sub_820E68B8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821eb1a0
	ctx.lr = 0x8215E4E8;
	sub_821EB1A0(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f14
	ctx.cr6.compare(ctx.f0.f64, f14.f64);
	// ble cr6,0x8215e510
	if (!ctx.cr6.gt) goto loc_8215E510;
	// fdivs f27,f17,f0
	f27.f64 = double(float(f17.f64 / ctx.f0.f64));
	// fcmpu cr6,f27,f31
	ctx.cr6.compare(f27.f64, f31.f64);
	// blt cr6,0x8215e504
	if (ctx.cr6.lt) goto loc_8215E504;
	// fmr f27,f31
	f27.f64 = f31.f64;
loc_8215E504:
	// fmuls f0,f27,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f27.f64 * ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x8215e514
	goto loc_8215E514;
loc_8215E510:
	// fmr f27,f31
	ctx.fpscr.disableFlushMode();
	f27.f64 = f31.f64;
loc_8215E514:
	// lha r11,8(r20)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r20.u32 + 8));
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// beq cr6,0x8215e5b0
	if (ctx.cr6.eq) goto loc_8215E5B0;
	// extsw r11,r27
	ctx.r11.s64 = r27.s32;
	// lwz r4,344(r19)
	ctx.r4.u64 = REX_LOAD_U32(r19.u32 + 344);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r30,r31,140
	r30.s64 = r31.s64 + 140;
	// std r11,240(r1)
	REX_STORE_U64(ctx.r1.u32 + 240, ctx.r11.u64);
	// lfd f0,240(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f30,f0,f16
	f30.f64 = double(float(ctx.f0.f64 * f16.f64));
	// bl 0x820e68b8
	ctx.lr = 0x8215E548;
	sub_820E68B8(ctx, base);
	// lfs f0,140(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-16192
	ctx.r7.s64 = -1061158912;
	// lfs f12,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// fadds f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 + f30.f64));
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stfd f27,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, f27.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f24,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, f24.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f24,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f24.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// fmr f4,f27
	ctx.f4.f64 = f27.f64;
	// ori r7,r7,49407
	ctx.r7.u64 = ctx.r7.u64 | 49407;
	// fmr f5,f24
	ctx.f5.f64 = f24.f64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// fmr f3,f24
	ctx.f3.f64 = f24.f64;
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// fadds f2,f12,f26
	ctx.f2.f64 = double(float(ctx.f12.f64 + f26.f64));
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x8215E5AC;
	sub_821EACB0(ctx, base);
	// b 0x8215e7fc
	goto loc_8215E7FC;
loc_8215E5B0:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r11,24316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24316);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r20.u32, ctx.xer);
	// bne cr6,0x8215e75c
	if (!ctx.cr6.eq) goto loc_8215E75C;
	// lwz r11,1856(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1856);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215e5d4
	if (ctx.cr0.eq) goto loc_8215E5D4;
	// li r29,-1
	r29.s64 = -1;
	// b 0x8215e5dc
	goto loc_8215E5DC;
loc_8215E5D4:
	// lis r29,-1
	r29.s64 = -65536;
	// ori r29,r29,255
	r29.u64 = r29.u64 | 255;
loc_8215E5DC:
	// extsw r11,r27
	ctx.r11.s64 = r27.s32;
	// lwz r4,344(r19)
	ctx.r4.u64 = REX_LOAD_U32(r19.u32 + 344);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r30,r31,140
	r30.s64 = r31.s64 + 140;
	// std r11,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r11.u64);
	// lfd f0,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f30,f0,f16
	f30.f64 = double(float(ctx.f0.f64 * f16.f64));
	// fadds f15,f30,f26
	f15.f64 = double(float(f30.f64 + f26.f64));
	// bl 0x820e68b8
	ctx.lr = 0x8215E608;
	sub_820E68B8(ctx, base);
	// stfd f15,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, f15.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// lfs f0,140(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stfd f24,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, f24.u64);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stfd f24,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f24.u64);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stfd f27,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, f27.u64);
	// fmr f5,f24
	ctx.f5.f64 = f24.f64;
	// fmr f3,f24
	ctx.f3.f64 = f24.f64;
	// fmr f4,f27
	ctx.f4.f64 = f27.f64;
	// fmr f2,f15
	ctx.f2.f64 = f15.f64;
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x8215E660;
	sub_821EACB0(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stfs f14,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lfs f0,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f15,f0
	ctx.f0.f64 = double(float(f15.f64 - ctx.f0.f64));
	// lfs f13,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f27,f15,f13
	f27.f64 = double(float(f15.f64 - ctx.f13.f64));
	// stfs f27,60(r11)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f29,64(r11)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f31,68(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stfs f14,72(r11)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// fadds f15,f0,f12
	f15.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f15,76(r11)
	temp.f32 = float(f15.f64);
	REX_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stfs f29,80(r11)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f31,84(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// lwa r11,68(r31)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r31.u32 + 68));
	// std r11,216(r1)
	REX_STORE_U64(ctx.r1.u32 + 216, ctx.r11.u64);
	// lfd f13,216(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820e0028
	ctx.lr = 0x8215E6C0;
	sub_820E0028(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// fmadds f0,f1,f23,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f23.f64, f22.f64)));
	// li r29,0
	r29.s64 = 0;
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stfs f27,92(r11)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// stfs f29,96(r11)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// stfs f31,100(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stfs f0,104(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// stfs f15,108(r11)
	temp.f32 = float(f15.f64);
	REX_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f29,112(r11)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f31,116(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stfs f25,120(r11)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// stfs f27,124(r11)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// stfs f29,128(r11)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// stfs f31,132(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stfs f25,136(r11)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r11.u32 + 136, temp.u32);
	// stfs f15,140(r11)
	temp.f32 = float(f15.f64);
	REX_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// stfs f29,144(r11)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// stfs f31,148(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 148, temp.u32);
loc_8215E718:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x820e1b28
	ctx.lr = 0x8215E730;
	sub_820E1B28(ctx, base);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmpwi cr6,r29,96
	ctx.cr6.compare<int32_t>(r29.s32, 96, ctx.xer);
	// blt cr6,0x8215e718
	if (ctx.cr6.lt) goto loc_8215E718;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r3,6
	ctx.r3.s64 = 6;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r5,r11,152
	ctx.r5.s64 = ctx.r11.s64 + 152;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// bl 0x821e7c08
	ctx.lr = 0x8215E758;
	sub_821E7C08(ctx, base);
	// b 0x8215e7fc
	goto loc_8215E7FC;
loc_8215E75C:
	// extsw r11,r27
	ctx.r11.s64 = r27.s32;
	// fsubs f0,f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f28.f64 - ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r30,r31,140
	r30.s64 = r31.s64 + 140;
	// std r11,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r11.u64);
	// lfd f0,176(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfs f14,120(r1)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmuls f30,f0,f16
	f30.f64 = double(float(ctx.f0.f64 * f16.f64));
	// fadds f0,f30,f26
	ctx.f0.f64 = double(float(f30.f64 + f26.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x820e1b28
	ctx.lr = 0x8215E7A0;
	sub_820E1B28(ctx, base);
	// lwz r4,344(r19)
	ctx.r4.u64 = REX_LOAD_U32(r19.u32 + 344);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x820e68b8
	ctx.lr = 0x8215E7AC;
	sub_820E68B8(ctx, base);
	// stfd f27,56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 56, f27.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// lfs f1,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// lis r7,-29
	ctx.r7.s64 = -1900544;
	// lfs f2,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stfd f24,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, f24.u64);
	// ori r7,r7,36095
	ctx.r7.u64 = ctx.r7.u64 | 36095;
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// fmr f4,f27
	ctx.f4.f64 = f27.f64;
	// stfd f24,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f24.u64);
	// fmr f5,f24
	ctx.f5.f64 = f24.f64;
	// fmr f3,f24
	ctx.f3.f64 = f24.f64;
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x821eacb0
	ctx.lr = 0x8215E7FC;
	sub_821EACB0(ctx, base);
loc_8215E7FC:
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(r23.s32, 2, ctx.xer);
	// bne cr6,0x8215e888
	if (!ctx.cr6.eq) goto loc_8215E888;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f30,f20
	ctx.f13.f64 = double(float(f30.f64 + f20.f64));
	// fsubs f0,f28,f0
	ctx.f0.f64 = double(float(f28.f64 - ctx.f0.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f14,120(r1)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fsubs f0,f0,f21
	ctx.f0.f64 = double(float(ctx.f0.f64 - f21.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x820e1b28
	ctx.lr = 0x8215E834;
	sub_820E1B28(ctx, base);
	// stfd f24,40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 40, f24.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// lfs f0,156(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,256(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lfs f0,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// stfs f0,264(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// fmr f3,f24
	ctx.f3.f64 = f24.f64;
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f13,f18
	ctx.f1.f64 = double(float(ctx.f13.f64 + f18.f64));
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// stfs f31,260(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// lfs f0,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f2,f0,f19
	ctx.f2.f64 = double(float(ctx.f0.f64 - f19.f64));
	// lfs f0,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// stfs f0,268(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x8215E888;
	sub_821EACB0(ctx, base);
loc_8215E888:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_8215E88C:
	// addi r28,r28,32
	r28.s64 = r28.s64 + 32;
	// addi r11,r21,224
	ctx.r11.s64 = r21.s64 + 224;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8215e4a8
	if (ctx.cr6.lt) goto loc_8215E4A8;
loc_8215E8A0:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r21,0
	r21.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215e8ec
	if (ctx.cr6.eq) goto loc_8215E8EC;
	// li r10,10
	ctx.r10.s64 = 10;
	// li r11,124
	ctx.r11.s64 = 124;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8215E8C8:
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8215e8e4
	if (ctx.cr6.eq) goto loc_8215E8E4;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,192(r10)
	REX_STORE_U32(ctx.r10.u32 + 192, ctx.r9.u32);
loc_8215E8E4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8215e8c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215E8C8;
loc_8215E8EC:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r4,24320(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24320);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r11,24316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24316);
	// bne cr6,0x8215e92c
	if (!ctx.cr6.eq) goto loc_8215E92C;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r9,r10,26096
	ctx.r9.s64 = ctx.r10.s64 + 26096;
	// lha r10,8(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 8));
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lha r11,4(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 4));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r19,r11,r9
	r19.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x8215e930
	goto loc_8215E930;
loc_8215E92C:
	// lwz r19,12(r11)
	r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_8215E930:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215f2e8
	if (ctx.cr6.eq) goto loc_8215F2E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r29,136(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,16172(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16200(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16200);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,26552(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 26552);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f11,-13044(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -13044);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f15,-13048(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -13048);
	f15.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f17,2028(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2028);
	f17.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f19,28856(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28856);
	f19.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f21,-13052(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -13052);
	f21.f64 = double(temp.f32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lfs f22,-17984(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -17984);
	f22.f64 = double(temp.f32);
	// lis r30,-32255
	r30.s64 = -2113863680;
	// lfs f20,-8488(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -8488);
	f20.f64 = double(temp.f32);
	// lfs f18,-13056(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -13056);
	f18.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f23,29404(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 29404);
	f23.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f25,-18124(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -18124);
	f25.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f26,-8492(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + -8492);
	f26.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f27,-13060(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + -13060);
	f27.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stfs f13,216(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// addi r14,r20,28
	r14.s64 = r20.s64 + 28;
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f11,184(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// li r15,124
	r15.s64 = 124;
	// stfs f15,204(r1)
	temp.f32 = float(f15.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// li r20,32
	r20.s64 = 32;
	// stfs f17,236(r1)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// addi r18,r11,-13092
	r18.s64 = ctx.r11.s64 + -13092;
	// addi r17,r10,-13116
	r17.s64 = ctx.r10.s64 + -13116;
	// addi r16,r9,-13140
	r16.s64 = ctx.r9.s64 + -13140;
	// addi r25,r8,-13164
	r25.s64 = ctx.r8.s64 + -13164;
	// addi r26,r7,-13172
	r26.s64 = ctx.r7.s64 + -13172;
	// addi r23,r6,-13184
	r23.s64 = ctx.r6.s64 + -13184;
	// addi r22,r5,-13188
	r22.s64 = ctx.r5.s64 + -13188;
loc_8215EA14:
	// li r27,0
	r27.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// ble cr6,0x8215ea78
	if (!ctx.cr6.gt) goto loc_8215EA78;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(r21.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8215ea78
	if (!ctx.cr6.lt) goto loc_8215EA78;
	// lha r10,-4(r14)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r14.u32 + -4));
	// lwz r9,140(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// lwz r4,344(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 344);
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x820e68b8
	ctx.lr = 0x8215EA4C;
	sub_820E68B8(ctx, base);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
loc_8215EA54:
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stbx r10,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x8215ea54
	if (!ctx.cr0.eq) goto loc_8215EA54;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r27,1
	r27.s64 = 1;
	// li r28,3
	r28.s64 = 3;
	// b 0x8215eb38
	goto loc_8215EB38;
loc_8215EA78:
	// lwz r11,20(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215EA84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x8215eaa4
	if (!ctx.cr0.eq) goto loc_8215EAA4;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r19,r19,32
	r19.s64 = r19.s64 + 32;
	// stw r29,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// lwz r4,24320(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24320);
	// b 0x8215f2dc
	goto loc_8215F2DC;
loc_8215EAA4:
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,0(r19)
	ctx.r3.u64 = REX_LOAD_U32(r19.u32 + 0);
	// lwz r4,344(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x8215EAB4;
	sub_820E68B8(ctx, base);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
loc_8215EABC:
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stbx r10,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x8215eabc
	if (!ctx.cr0.eq) goto loc_8215EABC;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r11,24320(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8215eb2c
	if (!ctx.cr6.gt) goto loc_8215EB2C;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r3,24316(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24316);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215EAF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8215eb18
	if (!ctx.cr6.eq) goto loc_8215EB18;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8215eb18
	if (ctx.cr6.eq) goto loc_8215EB18;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r30,1
	r30.s64 = 1;
	// b 0x8215eb20
	goto loc_8215EB20;
loc_8215EB18:
	// lis r9,-16192
	ctx.r9.s64 = -1061158912;
	// ori r9,r9,49407
	ctx.r9.u64 = ctx.r9.u64 | 49407;
loc_8215EB20:
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// b 0x8215eb34
	goto loc_8215EB34;
loc_8215EB2C:
	// lis r9,-16192
	ctx.r9.s64 = -1061158912;
	// ori r9,r9,49407
	ctx.r9.u64 = ctx.r9.u64 | 49407;
loc_8215EB34:
	// addi r19,r19,32
	r19.s64 = r19.s64 + 32;
loc_8215EB38:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8215ec14
	if (ctx.cr6.eq) goto loc_8215EC14;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8215ebb0
	if (ctx.cr6.eq) goto loc_8215EBB0;
	// subf r10,r24,r21
	ctx.r10.u64 = r21.u64 - r24.u64;
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// extsw r11,r24
	ctx.r11.s64 = r24.s32;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,400(r1)
	REX_STORE_U64(ctx.r1.u32 + 400, ctx.r11.u64);
	// lfd f12,400(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 400);
	// std r10,384(r1)
	REX_STORE_U64(ctx.r1.u32 + 384, ctx.r10.u64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f13,384(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 384);
	// lis r11,-16192
	ctx.r11.s64 = -1061158912;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// ori r11,r11,49407
	ctx.r11.u64 = ctx.r11.u64 | 49407;
	// fnmsubs f0,f0,f27,f31
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, f27.f64, -f31.f64)));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// addi r29,r11,2
	r29.s64 = ctx.r11.s64 + 2;
	// fmadds f11,f13,f0,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// fmadds f13,f13,f0,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// b 0x8215eccc
	goto loc_8215ECCC;
loc_8215EBB0:
	// lis r11,-16192
	ctx.r11.s64 = -1061158912;
	// ori r11,r11,49407
	ctx.r11.u64 = ctx.r11.u64 | 49407;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8215ebe4
	if (!ctx.cr6.eq) goto loc_8215EBE4;
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// li r29,2
	r29.s64 = 2;
	// fmuls f0,f0,f18
	ctx.f0.f64 = double(float(ctx.f0.f64 * f18.f64));
	// fmuls f0,f0,f17
	ctx.f0.f64 = double(float(ctx.f0.f64 * f17.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.f0.u64);
	// lbz r11,231(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 231);
	// stb r11,99(r1)
	REX_STORE_U8(ctx.r1.u32 + 99, ctx.r11.u8);
	// b 0x8215ebe8
	goto loc_8215EBE8;
loc_8215EBE4:
	// li r29,3
	r29.s64 = 3;
loc_8215EBE8:
	// extsw r11,r24
	ctx.r11.s64 = r24.s32;
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// subf r10,r24,r21
	ctx.r10.u64 = r21.u64 - r24.u64;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// std r11,416(r1)
	REX_STORE_U64(ctx.r1.u32 + 416, ctx.r11.u64);
	// lfd f12,416(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 416);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// std r11,352(r1)
	REX_STORE_U64(ctx.r1.u32 + 352, ctx.r11.u64);
	// fnmsubs f0,f0,f27,f31
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, f27.f64, -f31.f64)));
	// lfd f13,352(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 352);
	// b 0x8215ecb4
	goto loc_8215ECB4;
loc_8215EC14:
	// lis r11,-16192
	ctx.r11.s64 = -1061158912;
	// ori r11,r11,49407
	ctx.r11.u64 = ctx.r11.u64 | 49407;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8215ec88
	if (!ctx.cr6.eq) goto loc_8215EC88;
	// lfs f13,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// subf r11,r24,r21
	ctx.r11.u64 = r21.u64 - r24.u64;
	// fmuls f13,f13,f18
	ctx.f13.f64 = double(float(ctx.f13.f64 * f18.f64));
	// extsw r10,r24
	ctx.r10.s64 = r24.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// std r10,432(r1)
	REX_STORE_U64(ctx.r1.u32 + 432, ctx.r10.u64);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// std r11,424(r1)
	REX_STORE_U64(ctx.r1.u32 + 424, ctx.r11.u64);
	// li r29,2
	r29.s64 = 2;
	// fmuls f13,f13,f17
	ctx.f13.f64 = double(float(ctx.f13.f64 * f17.f64));
	// fnmsubs f0,f0,f27,f31
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, f27.f64, -f31.f64)));
	// fctidz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.f13.u64);
	// lfd f12,432(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 432);
	// lfd f11,424(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 424);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// frsp f12,f11
	ctx.f12.f64 = double(float(ctx.f11.f64));
	// lbz r11,231(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 231);
	// fmadds f11,f0,f12,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f13.f64)));
	// stb r11,99(r1)
	REX_STORE_U8(ctx.r1.u32 + 99, ctx.r11.u8);
	// fmadds f13,f0,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f13.f64)));
	// b 0x8215eccc
	goto loc_8215ECCC;
loc_8215EC88:
	// extsw r11,r24
	ctx.r11.s64 = r24.s32;
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// subf r10,r24,r21
	ctx.r10.u64 = r21.u64 - r24.u64;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// std r11,408(r1)
	REX_STORE_U64(ctx.r1.u32 + 408, ctx.r11.u64);
	// li r29,3
	r29.s64 = 3;
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// std r11,376(r1)
	REX_STORE_U64(ctx.r1.u32 + 376, ctx.r11.u64);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// lfd f12,408(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 408);
	// lfd f13,376(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 376);
loc_8215ECB4:
	// fcfid f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmadds f11,f0,f13,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// fmadds f13,f0,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
loc_8215ECCC:
	// fmadds f0,f11,f26,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, f26.f64, f25.f64)));
	// lfs f12,156(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f13,f16,f23
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f16.f64, f23.f64)));
	// lfs f11,160(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// fadds f28,f12,f0
	f28.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f30,f11,f13
	f30.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// beq cr6,0x8215ef8c
	if (ctx.cr6.eq) goto loc_8215EF8C;
	// lha r11,-28(r19)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r19.u32 + -28));
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bge cr6,0x8215ed6c
	if (!ctx.cr6.lt) goto loc_8215ED6C;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// beq 0x8215ed3c
	if (ctx.cr0.eq) goto loc_8215ED3C;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_8215ED0C:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8215ed0c
	if (!ctx.cr6.eq) goto loc_8215ED0C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8215ED20:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8215ed20
	if (!ctx.cr6.eq) goto loc_8215ED20;
	// b 0x8215ed6c
	goto loc_8215ED6C;
loc_8215ED3C:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_8215ED40:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8215ed40
	if (!ctx.cr6.eq) goto loc_8215ED40;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8215ED54:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8215ed54
	if (!ctx.cr6.eq) goto loc_8215ED54;
loc_8215ED6C:
	// lis r11,-16192
	ctx.r11.s64 = -1061158912;
	// ori r11,r11,49407
	ctx.r11.u64 = ctx.r11.u64 | 49407;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8215eda0
	if (ctx.cr6.eq) goto loc_8215EDA0;
	// lwz r11,232(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r11,1856(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1856);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215ed94
	if (ctx.cr0.eq) goto loc_8215ED94;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x8215ed9c
	goto loc_8215ED9C;
loc_8215ED94:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,255
	ctx.r11.u64 = ctx.r11.u64 | 255;
loc_8215ED9C:
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_8215EDA0:
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8215EDA8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8215eda8
	if (!ctx.cr6.eq) goto loc_8215EDA8;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lbz r10,-1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// cmplwi cr6,r10,150
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 150, ctx.xer);
	// bne cr6,0x8215ee04
	if (!ctx.cr6.eq) goto loc_8215EE04;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r30,-2
	ctx.r11.s64 = r30.s64 + -2;
	// stb r9,-2(r30)
	REX_STORE_U8(r30.u32 + -2, ctx.r9.u8);
	// bl 0x821eb1a0
	ctx.lr = 0x8215EDFC;
	sub_821EB1A0(ctx, base);
	// stb r20,-2(r30)
	REX_STORE_U8(r30.u32 + -2, r20.u8);
	// b 0x8215ee08
	goto loc_8215EE08;
loc_8215EE04:
	// bl 0x821eb1a0
	ctx.lr = 0x8215EE08;
	sub_821EB1A0(ctx, base);
loc_8215EE08:
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f14
	ctx.cr6.compare(ctx.f0.f64, f14.f64);
	// ble cr6,0x8215ee20
	if (!ctx.cr6.gt) goto loc_8215EE20;
	// fdivs f4,f15,f0
	ctx.f4.f64 = double(float(f15.f64 / ctx.f0.f64));
	// fcmpu cr6,f4,f31
	ctx.cr6.compare(ctx.f4.f64, f31.f64);
	// blt cr6,0x8215ee24
	if (ctx.cr6.lt) goto loc_8215EE24;
loc_8215EE20:
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
loc_8215EE24:
	// stfd f24,72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 72, f24.u64);
	// ld r10,72(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 72);
	// stfd f4,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f30,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f30.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f28,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f28.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// stfd f24,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f24.u64);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stfs f4,128(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmr f5,f24
	ctx.f5.f64 = f24.f64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fmr f3,f24
	ctx.f3.f64 = f24.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x821eacb0
	ctx.lr = 0x8215EE78;
	sub_821EACB0(ctx, base);
	// lfs f0,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// fsubs f17,f30,f0
	f17.f64 = double(float(f30.f64 - ctx.f0.f64));
	// stfs f17,60(r11)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// fsubs f15,f28,f20
	f15.f64 = double(float(f28.f64 - f20.f64));
	// lfs f0,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 - ctx.f0.f64));
	// lfs f13,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// stfs f29,64(r11)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f31,68(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f15,56(r11)
	temp.f32 = float(f15.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stfs f15,72(r11)
	temp.f32 = float(f15.f64);
	REX_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// fadds f14,f0,f13
	f14.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f14,76(r11)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stfs f29,80(r11)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f31,84(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// lwa r11,68(r31)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r31.u32 + 68));
	// std r11,392(r1)
	REX_STORE_U64(ctx.r1.u32 + 392, ctx.r11.u64);
	// lfd f13,392(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 392);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820e0028
	ctx.lr = 0x8215EEDC;
	sub_820E0028(ctx, base);
	// fmadds f0,f1,f22,f15
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f22.f64, f15.f64)));
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lfs f13,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// stfs f17,92(r11)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// stfs f29,96(r11)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// stfs f31,100(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// fadds f0,f0,f21
	ctx.f0.f64 = double(float(ctx.f0.f64 + f21.f64));
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// lwa r11,68(r31)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r31.u32 + 68));
	// std r11,360(r1)
	REX_STORE_U64(ctx.r1.u32 + 360, ctx.r11.u64);
	// lfd f0,360(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 360);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x820e0028
	ctx.lr = 0x8215EF18;
	sub_820E0028(ctx, base);
	// fmadds f0,f1,f22,f15
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f22.f64, f15.f64)));
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// fadds f13,f15,f19
	ctx.f13.f64 = double(float(f15.f64 + f19.f64));
	// li r6,2
	ctx.r6.s64 = 2;
	// li r3,6
	ctx.r3.s64 = 6;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stfs f14,108(r11)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f29,112(r11)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f31,116(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// fadds f0,f0,f21
	ctx.f0.f64 = double(float(ctx.f0.f64 + f21.f64));
	// stfs f0,104(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stfs f13,120(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// stfs f17,124(r11)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// stfs f29,128(r11)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// stfs f31,132(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stfs f13,136(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 136, temp.u32);
	// stfs f31,148(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// stfs f14,140(r11)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// stfs f29,144(r11)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r5,r11,152
	ctx.r5.s64 = ctx.r11.s64 + 152;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// bl 0x821e7c08
	ctx.lr = 0x8215EF7C;
	sub_821E7C08(ctx, base);
	// lfs f15,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 204);
	f15.f64 = double(temp.f32);
	// lfs f17,236(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 236);
	f17.f64 = double(temp.f32);
	// lfs f14,196(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	f14.f64 = double(temp.f32);
	// b 0x8215f1bc
	goto loc_8215F1BC;
loc_8215EF8C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x8215f134
	if (!ctx.cr6.eq) goto loc_8215F134;
	// lha r11,-28(r19)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r19.u32 + -28));
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bge cr6,0x8215f014
	if (!ctx.cr6.lt) goto loc_8215F014;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// beq 0x8215efe4
	if (ctx.cr0.eq) goto loc_8215EFE4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_8215EFB4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8215efb4
	if (!ctx.cr6.eq) goto loc_8215EFB4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8215EFC8:
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
	// bne cr6,0x8215efc8
	if (!ctx.cr6.eq) goto loc_8215EFC8;
	// b 0x8215f014
	goto loc_8215F014;
loc_8215EFE4:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_8215EFE8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8215efe8
	if (!ctx.cr6.eq) goto loc_8215EFE8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8215EFFC:
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
	// bne cr6,0x8215effc
	if (!ctx.cr6.eq) goto loc_8215EFFC;
loc_8215F014:
	// lwz r11,-8(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215f02c
	if (ctx.cr6.eq) goto loc_8215F02C;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8215f048
	if (ctx.cr6.lt) goto loc_8215F048;
loc_8215F02C:
	// lwz r11,-4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215f058
	if (ctx.cr6.eq) goto loc_8215F058;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lbz r11,2970(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2970);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215f058
	if (ctx.cr0.eq) goto loc_8215F058;
loc_8215F048:
	// li r11,80
	ctx.r11.s64 = 80;
	// stb r11,98(r1)
	REX_STORE_U8(ctx.r1.u32 + 98, ctx.r11.u8);
	// stb r11,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
	// stb r11,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
loc_8215F058:
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8215F060:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8215f060
	if (!ctx.cr6.eq) goto loc_8215F060;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lbz r10,-1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// cmplwi cr6,r10,150
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 150, ctx.xer);
	// bne cr6,0x8215f0bc
	if (!ctx.cr6.eq) goto loc_8215F0BC;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r30,-2
	ctx.r11.s64 = r30.s64 + -2;
	// stb r9,-2(r30)
	REX_STORE_U8(r30.u32 + -2, ctx.r9.u8);
	// bl 0x821eb1a0
	ctx.lr = 0x8215F0B4;
	sub_821EB1A0(ctx, base);
	// stb r20,-2(r30)
	REX_STORE_U8(r30.u32 + -2, r20.u8);
	// b 0x8215f0c0
	goto loc_8215F0C0;
loc_8215F0BC:
	// bl 0x821eb1a0
	ctx.lr = 0x8215F0C0;
	sub_821EB1A0(ctx, base);
loc_8215F0C0:
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f14
	ctx.cr6.compare(ctx.f0.f64, f14.f64);
	// ble cr6,0x8215f0d8
	if (!ctx.cr6.gt) goto loc_8215F0D8;
	// fdivs f4,f15,f0
	ctx.f4.f64 = double(float(f15.f64 / ctx.f0.f64));
	// fcmpu cr6,f4,f31
	ctx.cr6.compare(ctx.f4.f64, f31.f64);
	// blt cr6,0x8215f0dc
	if (ctx.cr6.lt) goto loc_8215F0DC;
loc_8215F0D8:
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
loc_8215F0DC:
	// stfd f4,64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f30,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f30.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f24,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f24.u64);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// stfd f28,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f28.u64);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// stfd f24,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, f24.u64);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// fmr f3,f24
	ctx.f3.f64 = f24.f64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// fmr f5,f24
	ctx.f5.f64 = f24.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r10,72(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 72);
	// bl 0x821eacb0
	ctx.lr = 0x8215F130;
	sub_821EACB0(ctx, base);
	// b 0x8215f1bc
	goto loc_8215F1BC;
loc_8215F134:
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// lwz r5,208(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x821eb1a0
	ctx.lr = 0x8215F148;
	sub_821EB1A0(ctx, base);
	// lfs f0,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f14
	ctx.cr6.compare(ctx.f0.f64, f14.f64);
	// ble cr6,0x8215f160
	if (!ctx.cr6.gt) goto loc_8215F160;
	// fdivs f4,f15,f0
	ctx.f4.f64 = double(float(f15.f64 / ctx.f0.f64));
	// fcmpu cr6,f4,f31
	ctx.cr6.compare(ctx.f4.f64, f31.f64);
	// blt cr6,0x8215f164
	if (ctx.cr6.lt) goto loc_8215F164;
loc_8215F160:
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
loc_8215F164:
	// stfd f28,24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 24, f28.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// stfd f24,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, f24.u64);
	// stfd f4,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// lis r8,-29
	ctx.r8.s64 = -1900544;
	// stfd f24,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f24.u64);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stfd f30,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f30.u64);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stfs f4,132(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ori r8,r8,36095
	ctx.r8.u64 = ctx.r8.u64 | 36095;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// fmr f5,f24
	ctx.f5.f64 = f24.f64;
	// fmr f3,f24
	ctx.f3.f64 = f24.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// ld r10,72(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 72);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x8215F1BC;
	sub_821EACB0(ctx, base);
loc_8215F1BC:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// bne cr6,0x8215f238
	if (!ctx.cr6.eq) goto loc_8215F238;
	// lbz r11,99(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 99);
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,216(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f2,f30,f0
	ctx.f2.f64 = double(float(f30.f64 - ctx.f0.f64));
	// fsubs f1,f28,f13
	ctx.f1.f64 = double(float(f28.f64 - ctx.f13.f64));
	// lfs f0,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,156(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// stfd f24,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f24.u64);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// std r11,368(r1)
	REX_STORE_U64(ctx.r1.u32 + 368, ctx.r11.u64);
	// stfd f2,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// fmr f3,f24
	ctx.f3.f64 = f24.f64;
	// stfs f0,344(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stfs f13,336(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f31,340(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// lfs f0,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// lfd f12,368(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 368);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,348(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// bl 0x821eacb0
	ctx.lr = 0x8215F238;
	sub_821EACB0(ctx, base);
loc_8215F238:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x8215f2ac
	if (!ctx.cr6.eq) goto loc_8215F2AC;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215f2ac
	if (ctx.cr6.eq) goto loc_8215F2AC;
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215f2ac
	if (ctx.cr6.eq) goto loc_8215F2AC;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// fsubs f0,f28,f20
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f28.f64 - f20.f64));
	// lfs f13,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lbz r10,99(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 99);
	// fsubs f13,f30,f13
	ctx.f13.f64 = double(float(f30.f64 - ctx.f13.f64));
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,6
	ctx.r8.s64 = 6;
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	// stfs f0,196(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 196, temp.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	// stfs f13,200(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 200, temp.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	// stb r10,147(r11)
	REX_STORE_U8(ctx.r11.u32 + 147, ctx.r10.u8);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	// stb r9,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, ctx.r9.u8);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	// stw r8,192(r11)
	REX_STORE_U32(ctx.r11.u32 + 192, ctx.r8.u32);
loc_8215F2AC:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r4,24320(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24320);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// ble cr6,0x8215f2cc
	if (!ctx.cr6.gt) goto loc_8215F2CC;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(r21.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8215f2cc
	if (!ctx.cr6.lt) goto loc_8215F2CC;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
loc_8215F2CC:
	// lwz r29,136(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r15,r15,4
	r15.s64 = r15.s64 + 4;
	// addi r14,r14,16
	r14.s64 = r14.s64 + 16;
loc_8215F2DC:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215ea14
	if (!ctx.cr6.eq) goto loc_8215EA14;
loc_8215F2E8:
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f4c
	ctx.lr = 0x8215F2F4;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_821A6570) {
	REX_FUNC_PROLOGUE();
	// lha r3,126(r3)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 126));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A6AE8) {
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
	// bl 0x820e22e8
	ctx.lr = 0x821A6B00;
	sub_820E22E8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,7336(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 7336);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821a6b18
	if (!ctx.cr6.lt) goto loc_821A6B18;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x821a6b28
	goto loc_821A6B28;
loc_821A6B18:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e2290
	ctx.lr = 0x821A6B24;
	sub_820E2290(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A6B28:
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

DEFINE_REX_FUNC(sub_821A75D0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e78
	ctx.lr = 0x821A75D8;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f1c
	ctx.lr = 0x821A75E0;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f22,f1
	ctx.fpscr.disableFlushMode();
	f22.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f27,f2
	f27.f64 = ctx.f2.f64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// beq cr6,0x821a7620
	if (ctx.cr6.eq) goto loc_821A7620;
	// lfs f28,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	f28.f64 = double(temp.f32);
	// lfs f29,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	f29.f64 = double(temp.f32);
	// lfs f0,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f25,f0,f28
	f25.f64 = double(float(ctx.f0.f64 - f28.f64));
	// fsubs f26,f13,f29
	f26.f64 = double(float(ctx.f13.f64 - f29.f64));
	// b 0x821a7634
	goto loc_821A7634;
loc_821A7620:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f26,f31
	ctx.fpscr.disableFlushMode();
	f26.f64 = f31.f64;
	// fmr f25,f31
	f25.f64 = f31.f64;
	// lfs f29,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f29.f64 = double(temp.f32);
	// fmr f28,f29
	f28.f64 = f29.f64;
loc_821A7634:
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// fsubs f0,f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f3.f64 - f27.f64));
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f21,f0,f13
	f21.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmr f30,f21
	f30.f64 = f21.f64;
	// ble cr6,0x821a7754
	if (!ctx.cr6.gt) goto loc_821A7754;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r26,r27,4,0,27
	r26.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// lfs f23,15944(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15944);
	f23.f64 = double(temp.f32);
	// lfs f24,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	f24.f64 = double(temp.f32);
loc_821A7678:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt cr6,0x821a7740
	if (ctx.cr6.lt) goto loc_821A7740;
	// mr r28,r25
	r28.u64 = r25.u64;
loc_821A7688:
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// mr r31,r25
	r31.u64 = r25.u64;
	// beq cr6,0x821a7698
	if (ctx.cr6.eq) goto loc_821A7698;
	// mr r31,r28
	r31.u64 = r28.u64;
loc_821A7698:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820e00c0
	ctx.lr = 0x821A76A8;
	sub_820E00C0(ctx, base);
	// lfs f10,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r30)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r30.u32 + 16, temp.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,64
	ctx.r11.s64 = r30.s64 + 64;
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f0,f27,f31
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, f27.f64, f31.f64)));
	// fmsubs f11,f13,f27,f31
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, f27.f64, -f31.f64)));
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// fmadds f0,f0,f30,f31
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, f31.f64)));
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// fmsubs f13,f13,f30,f31
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f30.f64, -f31.f64)));
	// fmuls f12,f12,f24
	ctx.f12.f64 = double(float(ctx.f12.f64 * f24.f64));
	// fmuls f11,f11,f23
	ctx.f11.f64 = double(float(ctx.f11.f64 * f23.f64));
	// fmuls f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 * f24.f64));
	// fmuls f13,f13,f23
	ctx.f13.f64 = double(float(ctx.f13.f64 * f23.f64));
	// lfs f10,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r30)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r30.u32 + 20, temp.u32);
	// lfs f10,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f12,f12,f25,f28
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f25.f64, f28.f64)));
	// stfs f10,24(r30)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r30.u32 + 24, temp.u32);
	// fmadds f11,f11,f26,f29
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, f26.f64, f29.f64)));
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// fmadds f0,f0,f25,f28
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f25.f64, f28.f64)));
	// stfs f11,4(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// fmadds f13,f13,f26,f29
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f26.f64, f29.f64)));
	// stfs f22,44(r30)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(r30.u32 + 44, temp.u32);
	// lfsux f12,r31,r26
	ea = r31.u32 + r26.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	r31.u32 = ea;
	// stfs f12,80(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 80, temp.u32);
	// lfs f12,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,84(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 84, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 88, temp.u32);
	// stfs f0,64(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 64, temp.u32);
	// stfs f13,68(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 68, temp.u32);
	// stfs f22,108(r30)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(r30.u32 + 108, temp.u32);
	// addi r30,r11,64
	r30.s64 = ctx.r11.s64 + 64;
	// ble cr6,0x821a7688
	if (!ctx.cr6.gt) goto loc_821A7688;
loc_821A7740:
	// fmr f27,f30
	ctx.fpscr.disableFlushMode();
	f27.f64 = f30.f64;
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// add r25,r25,r26
	r25.u64 = r25.u64 + r26.u64;
	// fadds f30,f21,f30
	f30.f64 = double(float(f21.f64 + f30.f64));
	// bne 0x821a7678
	if (!ctx.cr0.eq) goto loc_821A7678;
loc_821A7754:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f68
	ctx.lr = 0x821A7764;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_821B0DE8) {
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
	// addi r11,r11,9812
	ctx.r11.s64 = ctx.r11.s64 + 9812;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821B0E14;
	sub_821E2FD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b0e24
	if (ctx.cr0.eq) goto loc_821B0E24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821B0E24;
	sub_822C80A8(ctx, base);
loc_821B0E24:
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

DEFINE_REX_FUNC(sub_821B1D80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r10,33
	ctx.r10.s64 = 33;
	// addi r11,r11,-9896
	ctx.r11.s64 = ctx.r11.s64 + -9896;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821B1D98:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x821b1d98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B1D98;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B2310) {
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
	// lbz r10,14(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x821b2390
	if (ctx.cr6.eq) goto loc_821B2390;
	// lhz r11,30(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x821b2390
	if (ctx.cr6.eq) goto loc_821B2390;
	// li r3,8
	ctx.r3.s64 = 8;
	// li r11,300
	ctx.r11.s64 = 300;
loc_821B2344:
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,-29244(r10)
	REX_STORE_U32(ctx.r10.u32 + -29244, ctx.r11.u32);
	// bl 0x8212eb40
	ctx.lr = 0x821B235C;
	sub_8212EB40(ctx, base);
	// bl 0x821b2098
	ctx.lr = 0x821B2360;
	sub_821B2098(ctx, base);
	// bl 0x821365d0
	ctx.lr = 0x821B2364;
	sub_821365D0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821afef0
	ctx.lr = 0x821B236C;
	sub_821AFEF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8212ec38
	ctx.lr = 0x821B237C;
	sub_8212EC38(ctx, base);
	// bl 0x821176a8
	ctx.lr = 0x821B2380;
	sub_821176A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B2390:
	// li r3,68
	ctx.r3.s64 = 68;
	// li r11,543
	ctx.r11.s64 = 543;
	// b 0x821b2344
	goto loc_821B2344;
}

DEFINE_REX_FUNC(sub_821B5D70) {
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
	ctx.lr = 0x821B5D78;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// ori r9,r10,3696
	ctx.r9.u64 = ctx.r10.u64 | 3696;
	// addi r29,r11,-7072
	r29.s64 = ctx.r11.s64 + -7072;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,544(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 544);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r30,r11,r29
	r30.u64 = ctx.r11.u64 + r29.u64;
	// bne cr6,0x821b5e88
	if (!ctx.cr6.eq) goto loc_821B5E88;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30
	ctx.r5.s64 = 30;
	// lfs f2,16628(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16628);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2024(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2024);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212f220
	ctx.lr = 0x821B5DD0;
	sub_8212F220(ctx, base);
	// lbz r11,210(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 210);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b5e00
	if (ctx.cr0.eq) goto loc_821B5E00;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x821b25c8
	ctx.lr = 0x821B5DF0;
	sub_821B25C8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lbz r3,136(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 136);
	// bl 0x821b25c8
	ctx.lr = 0x821B5E00;
	sub_821B25C8(ctx, base);
loc_821B5E00:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f1090
	ctx.lr = 0x821B5E18;
	sub_820F1090(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// sth r28,308(r31)
	REX_STORE_U16(r31.u32 + 308, r28.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r9,5436(r30)
	REX_STORE_U32(r30.u32 + 5436, ctx.r9.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r28,-9904(r10)
	REX_STORE_U32(ctx.r10.u32 + -9904, r28.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r28,5436(r11)
	REX_STORE_U32(ctx.r11.u32 + 5436, r28.u32);
	// stw r8,5444(r30)
	REX_STORE_U32(r30.u32 + 5444, ctx.r8.u32);
	// stw r28,5448(r30)
	REX_STORE_U32(r30.u32 + 5448, r28.u32);
	// bl 0x821afef0
	ctx.lr = 0x821B5E4C;
	sub_821AFEF0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8212e440
	ctx.lr = 0x821B5E5C;
	sub_8212E440(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821c9e88
	ctx.lr = 0x821B5E70;
	sub_821C9E88(ctx, base);
	// addis r11,r29,1
	ctx.r11.s64 = r29.s64 + 65536;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c9e88
	ctx.lr = 0x821B5E88;
	sub_821C9E88(ctx, base);
loc_821B5E88:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b1fa0
	ctx.lr = 0x821B5E90;
	sub_821B1FA0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r7,14
	ctx.r7.s64 = 14;
	// addi r5,r9,10008
	ctx.r5.s64 = ctx.r9.s64 + 10008;
	// lfs f2,28076(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28076);
	ctx.f2.f64 = double(temp.f32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f31,15632(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15632);
	f31.f64 = double(temp.f32);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// stfs f31,20(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821eaf80
	ctx.lr = 0x821B5EC8;
	sub_821EAF80(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r7,14
	ctx.r7.s64 = 14;
	// addi r5,r10,9996
	ctx.r5.s64 = ctx.r10.s64 + 9996;
	// lfs f2,31168(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 31168);
	ctx.f2.f64 = double(temp.f32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// lwz r10,5444(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 5444);
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x821eaf80
	ctx.lr = 0x821B5F08;
	sub_821EAF80(ctx, base);
	// lwz r11,5444(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 5444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x821b5f50
	if (!ctx.cr6.lt) goto loc_821B5F50;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r28,5436(r30)
	REX_STORE_U32(r30.u32 + 5436, r28.u32);
	// ori r8,r8,9132
	ctx.r8.u64 = ctx.r8.u64 | 9132;
	// stw r28,5436(r29)
	REX_STORE_U32(r29.u32 + 5436, r28.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// stw r11,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// stw r11,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r11.u32);
	// stwx r28,r29,r8
	REX_STORE_U32(r29.u32 + ctx.r8.u32, r28.u32);
loc_821B5F50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821C0228) {
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
	ctx.lr = 0x821C0230;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,187(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 187);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,5780(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 5780);
	// li r26,2
	r26.s64 = 2;
	// lwz r29,5788(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 5788);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r27,0
	r27.s64 = 0;
	// beq 0x821c0390
	if (ctx.cr0.eq) goto loc_821C0390;
	// lbz r8,193(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 193);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lbz r28,195(r3)
	r28.u64 = REX_LOAD_U8(ctx.r3.u32 + 195);
	// stb r27,193(r3)
	REX_STORE_U8(ctx.r3.u32 + 193, r27.u8);
	// stb r27,195(r3)
	REX_STORE_U8(ctx.r3.u32 + 195, r27.u8);
	// beq cr6,0x821c039c
	if (ctx.cr6.eq) goto loc_821C039C;
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lha r10,54(r30)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r30.u32 + 54));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lha r9,56(r30)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r30.u32 + 56));
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821c0298
	if (!ctx.cr6.lt) goto loc_821C0298;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,590(r3)
	REX_STORE_U16(ctx.r3.u32 + 590, ctx.r11.u16);
	// b 0x821c02e4
	goto loc_821C02E4;
loc_821C0298:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x821c02a8
	if (ctx.cr6.gt) goto loc_821C02A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821c02cc
	goto loc_821C02CC;
loc_821C02A8:
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// li r11,1
	ctx.r11.s64 = 1;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821c02d8
	if (!ctx.cr6.lt) goto loc_821C02D8;
loc_821C02CC:
	// stb r11,193(r31)
	REX_STORE_U8(r31.u32 + 193, ctx.r11.u8);
	// sth r26,590(r31)
	REX_STORE_U16(r31.u32 + 590, r26.u16);
	// b 0x821c02e4
	goto loc_821C02E4;
loc_821C02D8:
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,195(r31)
	REX_STORE_U8(r31.u32 + 195, ctx.r11.u8);
	// sth r10,590(r31)
	REX_STORE_U16(r31.u32 + 590, ctx.r10.u16);
loc_821C02E4:
	// lbz r11,194(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 194);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c02fc
	if (!ctx.cr0.eq) goto loc_821C02FC;
	// lbz r11,217(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 217);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c0304
	if (ctx.cr0.eq) goto loc_821C0304;
loc_821C02FC:
	// stb r27,193(r31)
	REX_STORE_U8(r31.u32 + 193, r27.u8);
	// stb r27,195(r31)
	REX_STORE_U8(r31.u32 + 195, r27.u8);
loc_821C0304:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821c0370
	if (!ctx.cr6.eq) goto loc_821C0370;
	// lbz r11,193(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 193);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c0370
	if (ctx.cr0.eq) goto loc_821C0370;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c87e8
	ctx.lr = 0x821C0324;
	sub_821C87E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lha r11,58(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 58));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821c0370
	if (!ctx.cr6.gt) goto loc_821C0370;
	// lwz r11,872(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 872);
	// lfs f0,5472(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5472);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,5488(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5488, temp.u32);
	// stfs f0,5492(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5492, temp.u32);
	// bl 0x821ca9d0
	ctx.lr = 0x821C0370;
	sub_821CA9D0(ctx, base);
loc_821C0370:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x821c039c
	if (!ctx.cr6.eq) goto loc_821C039C;
	// lbz r11,195(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 195);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c039c
	if (ctx.cr0.eq) goto loc_821C039C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d8bf0
	ctx.lr = 0x821C038C;
	sub_821D8BF0(ctx, base);
	// b 0x821c039c
	goto loc_821C039C;
loc_821C0390:
	// sth r27,590(r31)
	REX_STORE_U16(r31.u32 + 590, r27.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8218c1a0
	ctx.lr = 0x821C039C;
	sub_8218C1A0(ctx, base);
loc_821C039C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r27,5844(r31)
	REX_STORE_U16(r31.u32 + 5844, r27.u16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// sth r11,5842(r31)
	REX_STORE_U16(r31.u32 + 5842, ctx.r11.u16);
	// sth r11,5840(r31)
	REX_STORE_U16(r31.u32 + 5840, ctx.r11.u16);
	// sth r11,5838(r31)
	REX_STORE_U16(r31.u32 + 5838, ctx.r11.u16);
	// sth r11,5836(r31)
	REX_STORE_U16(r31.u32 + 5836, ctx.r11.u16);
	// sth r11,5834(r31)
	REX_STORE_U16(r31.u32 + 5834, ctx.r11.u16);
	// sth r11,5832(r31)
	REX_STORE_U16(r31.u32 + 5832, ctx.r11.u16);
	// sth r11,5830(r31)
	REX_STORE_U16(r31.u32 + 5830, ctx.r11.u16);
	// sth r11,5828(r31)
	REX_STORE_U16(r31.u32 + 5828, ctx.r11.u16);
	// sth r11,5826(r31)
	REX_STORE_U16(r31.u32 + 5826, ctx.r11.u16);
	// sth r11,5820(r31)
	REX_STORE_U16(r31.u32 + 5820, ctx.r11.u16);
	// sth r11,5818(r31)
	REX_STORE_U16(r31.u32 + 5818, ctx.r11.u16);
	// sth r11,5824(r31)
	REX_STORE_U16(r31.u32 + 5824, ctx.r11.u16);
	// sth r11,5822(r31)
	REX_STORE_U16(r31.u32 + 5822, ctx.r11.u16);
	// beq cr6,0x821c060c
	if (ctx.cr6.eq) goto loc_821C060C;
	// lhz r11,78(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 78);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x821c060c
	if (ctx.cr6.eq) goto loc_821C060C;
	// lwz r10,872(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 872);
	// clrlwi r8,r11,17
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFF;
	// rlwinm r11,r11,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lbz r7,217(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 217);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// lbz r6,194(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 194);
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r8,8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8, ctx.xer);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// or r28,r7,r6
	r28.u64 = ctx.r7.u64 | ctx.r6.u64;
	// sth r11,5844(r31)
	REX_STORE_U16(r31.u32 + 5844, ctx.r11.u16);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lha r4,54(r30)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r30.u32 + 54));
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lha r3,56(r30)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r30.u32 + 56));
	// lwz r11,420(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 420);
	// bgt cr6,0x821c0524
	if (ctx.cr6.gt) goto loc_821C0524;
	// addi r10,r8,103
	ctx.r10.s64 = ctx.r8.s64 + 103;
	// rlwinm. r5,r9,0,26,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq 0x821c045c
	if (ctx.cr0.eq) goto loc_821C045C;
	// li r7,-4
	ctx.r7.s64 = -4;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
loc_821C045C:
	// rlwinm. r10,r9,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821c046c
	if (ctx.cr0.eq) goto loc_821C046C;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// addi r6,r6,-2
	ctx.r6.s64 = ctx.r6.s64 + -2;
loc_821C046C:
	// lha r5,0(r11)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// lha r30,2(r11)
	r30.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 2));
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// sth r8,5818(r31)
	REX_STORE_U16(r31.u32 + 5818, ctx.r8.u16);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// subfc r30,r27,r11
	ctx.xer.ca = ctx.r11.u32 >= r27.u32;
	r30.u64 = ctx.r11.u64 - r27.u64;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// rlwinm r7,r27,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0x1;
	// rlwinm r27,r11,1,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subfe r7,r27,r7
	temp.u8 = (~r27.u32 + ctx.r7.u32 < ~r27.u32) | (~r27.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~r27.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r6,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r9.u64 - ctx.r10.u64;
	// rlwinm r5,r10,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r30,r9,1,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// and r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 & ctx.r11.u64;
	// subfe r11,r30,r5
	temp.u8 = (~r30.u32 + ctx.r5.u32 < ~r30.u32) | (~r30.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~r30.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// beq cr6,0x821c04dc
	if (ctx.cr6.eq) goto loc_821C04DC;
	// lwz r11,5580(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5580);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x821c04d8
	if (ctx.cr6.lt) goto loc_821C04D8;
	// li r11,8
	ctx.r11.s64 = 8;
loc_821C04D8:
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
loc_821C04DC:
	// sth r8,5822(r31)
	REX_STORE_U16(r31.u32 + 5822, ctx.r8.u16);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x821c060c
	if (!ctx.cr6.eq) goto loc_821C060C;
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821c0504
	if (ctx.cr6.lt) goto loc_821C0504;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x821c0504
	if (ctx.cr6.gt) goto loc_821C0504;
	// sth r8,5826(r31)
	REX_STORE_U16(r31.u32 + 5826, ctx.r8.u16);
loc_821C0504:
	// cmpw cr6,r29,r4
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x821c060c
	if (ctx.cr6.lt) goto loc_821C060C;
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x821c060c
	if (ctx.cr6.gt) goto loc_821C060C;
	// sth r8,5838(r31)
	REX_STORE_U16(r31.u32 + 5838, ctx.r8.u16);
	// sth r8,5834(r31)
	REX_STORE_U16(r31.u32 + 5834, ctx.r8.u16);
	// sth r8,5830(r31)
	REX_STORE_U16(r31.u32 + 5830, ctx.r8.u16);
	// b 0x821c060c
	goto loc_821C060C;
loc_821C0524:
	// addi r10,r8,112
	ctx.r10.s64 = ctx.r8.s64 + 112;
	// rlwinm. r30,r9,0,28,28
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq 0x821c0544
	if (ctx.cr0.eq) goto loc_821C0544;
	// li r6,-4
	ctx.r6.s64 = -4;
loc_821C0544:
	// rlwinm. r11,r9,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c0554
	if (ctx.cr0.eq) goto loc_821C0554;
	// addi r6,r6,3
	ctx.r6.s64 = ctx.r6.s64 + 3;
	// li r5,-3
	ctx.r5.s64 = -3;
loc_821C0554:
	// lha r9,0(r10)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 0));
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// lha r7,2(r10)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 2));
	// add r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addis r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 65536;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm r30,r10,1,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r6,r27,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0x1;
	// add r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r8,r8,-9
	ctx.r8.s64 = ctx.r8.s64 + -9;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// subfe r6,r30,r6
	temp.u8 = (~r30.u32 + ctx.r6.u32 < ~r30.u32) | (~r30.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~r30.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfc r8,r9,r27
	ctx.xer.ca = r27.u32 >= ctx.r9.u32;
	ctx.r8.u64 = r27.u64 - ctx.r9.u64;
	// sth r11,5820(r31)
	REX_STORE_U16(r31.u32 + 5820, ctx.r11.u16);
	// rlwinm r5,r9,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r7,r7,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// and r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 & ctx.r10.u64;
	// subfe r8,r7,r5
	temp.u8 = (~ctx.r7.u32 + ctx.r5.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	// beq 0x821c05c4
	if (ctx.cr0.eq) goto loc_821C05C4;
	// lwz r9,5580(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 5580);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x821c05c0
	if (ctx.cr6.lt) goto loc_821C05C0;
	// li r11,8
	ctx.r11.s64 = 8;
loc_821C05C0:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_821C05C4:
	// sth r11,5824(r31)
	REX_STORE_U16(r31.u32 + 5824, ctx.r11.u16);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x821c060c
	if (!ctx.cr6.eq) goto loc_821C060C;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// sth r11,5842(r31)
	REX_STORE_U16(r31.u32 + 5842, ctx.r11.u16);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821c05f0
	if (ctx.cr6.lt) goto loc_821C05F0;
	// add r10,r8,r4
	ctx.r10.u64 = ctx.r8.u64 + ctx.r4.u64;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x821c05f0
	if (ctx.cr6.gt) goto loc_821C05F0;
	// sth r11,5828(r31)
	REX_STORE_U16(r31.u32 + 5828, ctx.r11.u16);
loc_821C05F0:
	// cmpw cr6,r29,r4
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x821c060c
	if (ctx.cr6.lt) goto loc_821C060C;
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x821c060c
	if (ctx.cr6.gt) goto loc_821C060C;
	// sth r11,5836(r31)
	REX_STORE_U16(r31.u32 + 5836, ctx.r11.u16);
	// sth r11,5832(r31)
	REX_STORE_U16(r31.u32 + 5832, ctx.r11.u16);
	// sth r11,5840(r31)
	REX_STORE_U16(r31.u32 + 5840, ctx.r11.u16);
loc_821C060C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821D0C68) {
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
	// lis r30,-32165
	r30.s64 = -2107965440;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r31,-32480(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + -32480);
	// addi r11,r31,80
	ctx.r11.s64 = r31.s64 + 80;
	// bl 0x821b0030
	ctx.lr = 0x821D0C90;
	sub_821B0030(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r4,10
	ctx.r4.s64 = 10;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f3,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f3.f64 = double(temp.f32);
	// lwz r11,7840(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 7840);
	// stfs f3,108(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// lfs f0,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,108
	ctx.r10.s64 = ctx.r11.s64 + 108;
	// stfs f3,112(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// stfs f3,116(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// stfs f0,120(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// bl 0x821afa50
	ctx.lr = 0x821D0CD4;
	sub_821AFA50(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lwz r3,-32480(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -32480);
	// addi r31,r11,-8934
	r31.s64 = ctx.r11.s64 + -8934;
	// addi r8,r10,13128
	ctx.r8.s64 = ctx.r10.s64 + 13128;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stb r10,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,1824(r8)
	REX_STORE_U8(ctx.r8.u32 + 1824, ctx.r11.u8);
	// addi r6,r7,13048
	ctx.r6.s64 = ctx.r7.s64 + 13048;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x821D0D18;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d0d28
	if (ctx.cr0.eq) goto loc_821D0D28;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8216dc00
	ctx.lr = 0x821D0D28;
	sub_8216DC00(ctx, base);
loc_821D0D28:
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

DEFINE_REX_FUNC(sub_821D2E58) {
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
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// ble cr6,0x821d2ec4
	if (!ctx.cr6.gt) goto loc_821D2EC4;
	// bl 0x82113660
	ctx.lr = 0x821D2E80;
	sub_82113660(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d2ec4
	if (ctx.cr0.eq) goto loc_821D2EC4;
	// bl 0x82113650
	ctx.lr = 0x821D2E8C;
	sub_82113650(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d2ea0
	if (!ctx.cr0.eq) goto loc_821D2EA0;
	// bl 0x821d1df0
	ctx.lr = 0x821D2E98;
	sub_821D1DF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821d2ec4
	if (ctx.cr0.eq) goto loc_821D2EC4;
loc_821D2EA0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f2,16788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16788);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2024(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2024);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212f220
	ctx.lr = 0x821D2EBC;
	sub_8212F220(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821dd7a0
	ctx.lr = 0x821D2EC4;
	sub_821DD7A0(ctx, base);
loc_821D2EC4:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821D58D8) {
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
	ctx.lr = 0x821D58E0;
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, f30.u64);
	// stfd f31,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r6,-1
	ctx.r6.s64 = -65536;
	// addi r31,r11,-9496
	r31.s64 = ctx.r11.s64 + -9496;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-11112
	ctx.r9.s64 = ctx.r11.s64 + -11112;
	// ori r28,r6,255
	r28.u64 = ctx.r6.u64 | 255;
	// lha r11,32(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 32));
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// srawi r6,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 31;
	// lha r8,36(r31)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(r31.u32 + 36));
	// subfc r10,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// adde r10,r7,r6
	temp.u8 = (ctx.r7.u32 + ctx.r6.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r9
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// beq cr6,0x821d597c
	if (ctx.cr6.eq) goto loc_821D597C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821d5950
	if (ctx.cr6.eq) goto loc_821D5950;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821d5998
	if (!ctx.cr6.eq) goto loc_821D5998;
	// lwz r30,76(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// b 0x821d5998
	goto loc_821D5998;
loc_821D5950:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r30,72(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lwz r11,1852(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1852);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d5970
	if (ctx.cr0.eq) goto loc_821D5970;
	// li r28,-1
	r28.s64 = -1;
	// b 0x821d5998
	goto loc_821D5998;
loc_821D5970:
	// lis r28,255
	r28.s64 = 16711680;
	// ori r28,r28,65535
	r28.u64 = r28.u64 | 65535;
	// b 0x821d5998
	goto loc_821D5998;
loc_821D597C:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lwz r11,1852(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1852);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d5998
	if (ctx.cr0.eq) goto loc_821D5998;
	// lis r28,255
	r28.s64 = 16711680;
	// ori r28,r28,255
	r28.u64 = r28.u64 | 255;
loc_821D5998:
	// bl 0x821d91c8
	ctx.lr = 0x821D599C;
	sub_821D91C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d5cbc
	if (!ctx.cr0.eq) goto loc_821D5CBC;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
	// lwz r4,344(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821D59B8;
	sub_820E68B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x820e6998
	ctx.lr = 0x821D59C4;
	sub_820E6998(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lfs f31,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fmr f12,f31
	ctx.f12.f64 = f31.f64;
	// beq cr6,0x821d5a40
	if (ctx.cr6.eq) goto loc_821D5A40;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821d5a08
	if (!ctx.cr0.eq) goto loc_821D5A08;
	// addi r3,r30,84
	ctx.r3.s64 = r30.s64 + 84;
	// bl 0x821d6398
	ctx.lr = 0x821D59F4;
	sub_821D6398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d5a08
	if (!ctx.cr0.eq) goto loc_821D5A08;
	// li r3,14
	ctx.r3.s64 = 14;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8212bc38
	ctx.lr = 0x821D5A08;
	sub_8212BC38(ctx, base);
loc_821D5A08:
	// lha r11,34(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 34));
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x821d5a18
	if (!ctx.cr6.gt) goto loc_821D5A18;
	// li r11,6
	ctx.r11.s64 = 6;
loc_821D5A18:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,2340(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2340);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28900(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28900);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f12,f12,f0,f13
	ctx.f12.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f13.f64)));
loc_821D5A40:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// extsw r10,r27
	ctx.r10.s64 = r27.s32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f1,4040(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 4040);
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// lfs f0,16788(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16788);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,13448(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 13448);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r11,13440
	ctx.r3.s64 = ctx.r11.s64 + 13440;
	// fnmsubs f0,f11,f0,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f0.f64, -ctx.f13.f64)));
	// fadds f30,f0,f12
	f30.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// bl 0x821eacb0
	ctx.lr = 0x821D5A8C;
	sub_821EACB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,26820(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26820);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e6950
	ctx.lr = 0x821D5A98;
	sub_820E6950(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lfs f0,2008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,15632(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15632);
	ctx.f1.f64 = double(temp.f32);
	// fadds f2,f30,f0
	ctx.f2.f64 = double(float(f30.f64 + ctx.f0.f64));
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
	// bl 0x820e6e20
	ctx.lr = 0x821D5AC4;
	sub_820E6E20(ctx, base);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stfs f31,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// stfs f31,228(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// stfs f31,232(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f31,236(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// lfs f0,16628(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16628);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r30,r1,256
	r30.s64 = ctx.r1.s64 + 256;
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r28,r1,256
	r28.s64 = ctx.r1.s64 + 256;
	// lwz r29,4(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r26,r1,304
	r26.s64 = ctx.r1.s64 + 304;
	// lwz r27,8(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r25,r1,288
	r25.s64 = ctx.r1.s64 + 288;
	// lwz r24,0(r9)
	r24.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r3,4(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r23,8(r9)
	r23.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r22,0(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// stw r4,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r4.u32);
	// stw r31,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r31.u32);
	// stw r29,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, r29.u32);
	// stw r27,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, r27.u32);
	// stw r24,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r24.u32);
	// stw r3,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r3.u32);
	// stw r23,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, r23.u32);
	// stw r22,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, r22.u32);
	// stw r10,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// stw r9,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r9.u32);
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stfs f31,256(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f31,260(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f31,264(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f0,268(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r7,8(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lis r31,-32256
	r31.s64 = -2113929216;
	// lwz r30,4(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lwz r27,8(r28)
	r27.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lis r24,-32255
	r24.s64 = -2113863680;
	// lwz r22,0(r10)
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lis r23,-32255
	r23.s64 = -2113863680;
	// lwz r20,4(r10)
	r20.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lis r21,-32255
	r21.s64 = -2113863680;
	// lwz r19,8(r10)
	r19.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r18,r1,272
	r18.s64 = ctx.r1.s64 + 272;
	// lwz r28,12(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 12);
	// lfs f13,28548(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 28548);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lfs f0,-8492(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -8492);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f7,f1,f13
	ctx.f7.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lfs f13,29340(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 29340);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f30,f0
	ctx.f8.f64 = double(float(f30.f64 - ctx.f0.f64));
	// lfs f0,1992(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,29404(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 29404);
	ctx.f12.f64 = double(temp.f32);
	// stw r5,12(r26)
	REX_STORE_U32(r26.u32 + 12, ctx.r5.u32);
	// lfs f11,-12964(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + -12964);
	ctx.f11.f64 = double(temp.f32);
	// stw r3,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r3.u32);
	// lfs f10,13436(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 13436);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// lfs f9,13432(r21)
	temp.u32 = REX_LOAD_U32(r21.u32 + 13432);
	ctx.f9.f64 = double(temp.f32);
	// stw r9,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r9.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r7,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r7.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r30,4(r25)
	REX_STORE_U32(r25.u32 + 4, r30.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r27,8(r25)
	REX_STORE_U32(r25.u32 + 8, r27.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r28,12(r25)
	REX_STORE_U32(r25.u32 + 12, r28.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r22,0(r18)
	REX_STORE_U32(r18.u32 + 0, r22.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r20,4(r18)
	REX_STORE_U32(r18.u32 + 4, r20.u32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stw r19,8(r18)
	REX_STORE_U32(r18.u32 + 8, r19.u32);
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stw r10,12(r18)
	REX_STORE_U32(r18.u32 + 12, ctx.r10.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f7,148(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f10,160(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f8,164(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f10,176(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f7,180(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f9,192(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f8,196(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f13,200(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f9,208(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f7,212(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f13,216(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// bl 0x821e7c08
	ctx.lr = 0x821D5CBC;
	sub_821E7C08(ctx, base);
loc_821D5CBC:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_821E7B28) {
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
	ctx.lr = 0x821E7B30;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// bne cr6,0x821e7b58
	if (!ctx.cr6.eq) goto loc_821E7B58;
loc_821E7B58:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r30,r11,-32032
	r30.s64 = ctx.r11.s64 + -32032;
	// addi r3,r30,332
	ctx.r3.s64 = r30.s64 + 332;
	// bl 0x821f1818
	ctx.lr = 0x821E7B6C;
	sub_821F1818(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// addi r4,r3,72
	ctx.r4.s64 = ctx.r3.s64 + 72;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r30,332
	ctx.r3.s64 = r30.s64 + 332;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 + ctx.f0.f64));
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stw r29,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, r29.u32);
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, r28.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,56(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f13,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x821f1840
	ctx.lr = 0x821E7BF8;
	sub_821F1840(ctx, base);
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

DEFINE_REX_FUNC(sub_821EB728) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// stfs f1,-272(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + -272, temp.u32);
	// lfs f0,1836(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1836);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f0,-268(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + -268, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EC008) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,1700
	ctx.r3.s64 = ctx.r3.s64 + 1700;
	// bl 0x82202338
	ctx.lr = 0x821EC02C;
	sub_82202338(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821eb7f8
	ctx.lr = 0x821EC034;
	sub_821EB7F8(ctx, base);
	// lbz r11,1540(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1540);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821ec194
	if (ctx.cr0.eq) goto loc_821EC194;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,1823(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1823);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821ec188
	if (!ctx.cr0.eq) goto loc_821EC188;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f0,1548(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 1548);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4968(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4968, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-32032
	ctx.r9.s64 = ctx.r11.s64 + -32032;
	// lwz r8,4464(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4464);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r4,1652(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1652);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f0,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 24);
	// addi r30,r31,4464
	r30.s64 = r31.s64 + 4464;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f13,1996(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r8,28(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f12,1992(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1992);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16908(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16908);
	ctx.f11.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f10,15624(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15624);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f9,4972(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 4972, temp.u32);
	// lhz r11,26(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 26);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f0,4976(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4976, temp.u32);
	// lhz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 24);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4980(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4980, temp.u32);
	// lhz r11,26(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 26);
	// stfs f13,4988(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4988, temp.u32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfs f12,4992(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 4992, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4984(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4984, temp.u32);
	// lhz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 24);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4996(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4996, temp.u32);
	// lhz r11,26(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 26);
	// stfs f11,5004(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 5004, temp.u32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfs f10,5008(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 5008, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,5000(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5000, temp.u32);
	// bctrl 
	ctx.lr = 0x821EC154;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4464(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4464);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r31,4960
	ctx.r4.s64 = r31.s64 + 4960;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EC16C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4464(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4464);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1644(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1644);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EC188;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EC188:
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lwz r3,508(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 508);
	// bl 0x821fb120
	ctx.lr = 0x821EC194;
	sub_821FB120(ctx, base);
loc_821EC194:
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

DEFINE_REX_FUNC(sub_821F2C50) {
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
	ctx.lr = 0x821F2C58;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r10,r10,432
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(432));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a4628
	ctx.lr = 0x821F2C9C;
	sub_822A4628(ctx, base);
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// beq cr6,0x821f2cb4
	if (ctx.cr6.eq) goto loc_821F2CB4;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(r29.s32, 6, ctx.xer);
	// beq cr6,0x821f2cb4
	if (ctx.cr6.eq) goto loc_821F2CB4;
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(r29.s32, 5, ctx.xer);
	// bne cr6,0x821f2cc0
	if (!ctx.cr6.eq) goto loc_821F2CC0;
loc_821F2CB4:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821f2d60
	if (ctx.cr6.lt) goto loc_821F2D60;
loc_821F2CC0:
	// stw r29,48(r31)
	REX_STORE_U32(r31.u32 + 48, r29.u32);
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(r28.u32, 3, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// ble cr6,0x821f2cd8
	if (!ctx.cr6.gt) goto loc_821F2CD8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F2CD8:
	// bl 0x822eef30
	ctx.lr = 0x821F2CDC;
	sub_822EEF30(ctx, base);
	// stb r26,101(r31)
	REX_STORE_U8(r31.u32 + 101, r26.u8);
	// lbz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// stb r11,102(r31)
	REX_STORE_U8(r31.u32 + 102, ctx.r11.u8);
	// beq cr6,0x821f2cfc
	if (ctx.cr6.eq) goto loc_821F2CFC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a3e58
	ctx.lr = 0x821F2CFC;
	sub_822A3E58(ctx, base);
loc_821F2CFC:
	// lwz r29,44(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,20(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822a3e30
	ctx.lr = 0x821F2D10;
	sub_822A3E30(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x821f2d20
	if (!ctx.cr6.eq) goto loc_821F2D20;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821f2d30
	goto loc_821F2D30;
loc_821F2D20:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f3f40
	ctx.lr = 0x821F2D2C;
	sub_821F3F40(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_821F2D30:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a3e78
	ctx.lr = 0x821F2D3C;
	sub_822A3E78(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x822a3e30
	ctx.lr = 0x821F2D50;
	sub_822A3E30(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822a1098
	ctx.lr = 0x821F2D60;
	sub_822A1098(ctx, base);
loc_821F2D60:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_821F8C30) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x821f8c48
	if (ctx.cr6.gt) goto loc_821F8C48;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,31036(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 31036);
	ctx.f1.f64 = double(temp.f32);
loc_821F8C48:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,3380
	ctx.r11.s64 = ctx.r11.s64 + 3380;
	// stfs f1,76(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F97A0) {
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
	// lfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822d6d28
	ctx.lr = 0x821F97BC;
	sub_822D6D28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821f97f8
	if (!ctx.cr0.eq) goto loc_821F97F8;
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d6d28
	ctx.lr = 0x821F97CC;
	sub_822D6D28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821f97f8
	if (!ctx.cr0.eq) goto loc_821F97F8;
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d6d28
	ctx.lr = 0x821F97DC;
	sub_822D6D28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821f97f8
	if (!ctx.cr0.eq) goto loc_821F97F8;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d6d28
	ctx.lr = 0x821F97EC;
	sub_822D6D28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x821f97fc
	if (ctx.cr0.eq) goto loc_821F97FC;
loc_821F97F8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821F97FC:
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

DEFINE_REX_FUNC(sub_821FAC38) {
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
	ctx.lr = 0x821FAC40;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 8);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lbz r11,52(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 52);
	// li r29,0
	r29.s64 = 0;
	// oris r28,r10,32768
	r28.u64 = ctx.r10.u64 | 2147483648;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// andc r10,r5,r28
	ctx.r10.u64 = ctx.r5.u64 & ~r28.u64;
	// clrlwi r30,r10,28
	r30.u64 = ctx.r10.u32 & 0xF;
	// beq cr6,0x821fac78
	if (ctx.cr6.eq) goto loc_821FAC78;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x821fac78
	if (ctx.cr6.eq) goto loc_821FAC78;
	// stb r29,53(r4)
	REX_STORE_U8(ctx.r4.u32 + 53, r29.u8);
	// b 0x821fac84
	goto loc_821FAC84;
loc_821FAC78:
	// lwz r11,88(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 88);
	// subfic r11,r11,255
	ctx.xer.ca = ctx.r11.u32 <= 255;
	ctx.r11.u64 = static_cast<uint64_t>(255) - ctx.r11.u64;
	// stb r11,53(r4)
	REX_STORE_U8(ctx.r4.u32 + 53, ctx.r11.u8);
loc_821FAC84:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x821fadb4
	if (ctx.cr6.eq) goto loc_821FADB4;
	// mr r31,r29
	r31.u64 = r29.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// li r5,1
	ctx.r5.s64 = 1;
loc_821FAC9C:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821fad58
	if (ctx.cr0.eq) goto loc_821FAD58;
	// lwz r3,72(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fad58
	if (ctx.cr6.eq) goto loc_821FAD58;
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// slw r9,r5,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r7.u8 & 0x3F));
	// or r31,r9,r31
	r31.u64 = ctx.r9.u64 | r31.u64;
	// stw r10,72(r8)
	REX_STORE_U32(ctx.r8.u32 + 72, ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821facd0
	if (ctx.cr6.eq) goto loc_821FACD0;
	// stw r29,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, r29.u32);
loc_821FACD0:
	// lwz r9,52(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fad24
	if (ctx.cr6.eq) goto loc_821FAD24;
loc_821FACE0:
	// lwz r27,48(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r27,52(r27)
	r27.u64 = REX_LOAD_U32(r27.u32 + 52);
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x821fad00
	if (!ctx.cr6.gt) goto loc_821FAD00;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821face0
	if (!ctx.cr6.eq) goto loc_821FACE0;
loc_821FAD00:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821fad24
	if (ctx.cr6.eq) goto loc_821FAD24;
	// stw r3,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fad18
	if (ctx.cr6.eq) goto loc_821FAD18;
	// stw r3,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
loc_821FAD18:
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x821fad3c
	goto loc_821FAD3C;
loc_821FAD24:
	// stw r3,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r29,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r29.u32);
	// beq cr6,0x821fad3c
	if (ctx.cr6.eq) goto loc_821FAD3C;
	// stw r3,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
loc_821FAD3C:
	// stw r4,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// stb r7,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r7.u8);
	// stb r5,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r5.u8);
	// bl 0x821fabe8
	ctx.lr = 0x821FAD4C;
	sub_821FABE8(ctx, base);
	// lwz r11,80(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r8)
	REX_STORE_U32(ctx.r8.u32 + 80, ctx.r11.u32);
loc_821FAD58:
	// rlwinm. r30,r30,31,1,31
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x821fac9c
	if (!ctx.cr0.eq) goto loc_821FAC9C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821fadb4
	if (ctx.cr6.eq) goto loc_821FADB4;
	// lhz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 8);
	// clrlwi. r10,r28,16
	ctx.r10.u64 = r28.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | r31.u64;
	// sth r11,8(r4)
	REX_STORE_U16(ctx.r4.u32 + 8, ctx.r11.u16);
	// bne 0x821fadac
	if (!ctx.cr0.eq) goto loc_821FADAC;
	// lwz r11,64(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fad94
	if (ctx.cr6.eq) goto loc_821FAD94;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_821FAD94:
	// lwz r11,64(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 64);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,84(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r4,64(r8)
	REX_STORE_U32(ctx.r8.u32 + 64, ctx.r4.u32);
	// stw r11,84(r8)
	REX_STORE_U32(ctx.r8.u32 + 84, ctx.r11.u32);
loc_821FADAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821fadb8
	goto loc_821FADB8;
loc_821FADB4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821FADB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822025D0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x82202200
	sub_82202200(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822028C8) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x822d4f34
	ctx.lr = 0x822028DC;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f28,f2
	f28.f64 = ctx.f2.f64;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// fmr f27,f4
	f27.f64 = ctx.f4.f64;
	// blt cr6,0x8220291c
	if (ctx.cr6.lt) goto loc_8220291C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,16264(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82204b00
	ctx.lr = 0x82202910;
	sub_82204B00(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8220291C:
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f31,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lfs f30,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f30.f64 = double(temp.f32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// blt cr6,0x822029bc
	if (ctx.cr6.lt) goto loc_822029BC;
	// beq cr6,0x822029a8
	if (ctx.cr6.eq) goto loc_822029A8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82202998
	if (ctx.cr6.lt) goto loc_82202998;
	// beq cr6,0x82202984
	if (ctx.cr6.eq) goto loc_82202984;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x82202978
	if (ctx.cr6.lt) goto loc_82202978;
	// bne cr6,0x822029c8
	if (!ctx.cr6.eq) goto loc_822029C8;
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 - ctx.f0.f64));
	// stfs f30,4(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// b 0x822029c4
	goto loc_822029C4;
loc_82202978:
	// stfs f31,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f30,4(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// b 0x822029b4
	goto loc_822029B4;
loc_82202984:
	// fsubs f0,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 - ctx.f0.f64));
	// stfs f31,8(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f30,0(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// b 0x822029c8
	goto loc_822029C8;
loc_82202998:
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f30,0(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// b 0x822029c8
	goto loc_822029C8;
loc_822029A8:
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 - ctx.f0.f64));
	// stfs f30,8(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
loc_822029B4:
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// b 0x822029c8
	goto loc_822029C8;
loc_822029BC:
	// stfs f30,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
loc_822029C4:
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
loc_822029C8:
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x82204ae0
	ctx.lr = 0x822029D8;
	sub_82204AE0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f1,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f31.f64 - ctx.f1.f64));
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r11,21248
	ctx.r5.s64 = ctx.r11.s64 + 21248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e20b0
	ctx.lr = 0x822029F0;
	sub_820E20B0(ctx, base);
	// fcmpu cr6,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f30.f64);
	// bge cr6,0x822029fc
	if (!ctx.cr6.lt) goto loc_822029FC;
	// fmr f29,f30
	f29.f64 = f30.f64;
loc_822029FC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e1cf8
	ctx.lr = 0x82202A0C;
	sub_820E1CF8(ctx, base);
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x82204ae0
	ctx.lr = 0x82202A1C;
	sub_82204AE0(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lfs f1,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x82204ae0
	ctx.lr = 0x82202A30;
	sub_82204AE0(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f1,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x82204ae0
	ctx.lr = 0x82202A44;
	sub_82204AE0(ctx, base);
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// lfs f3,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82204ae0
	ctx.lr = 0x82202A5C;
	sub_82204AE0(ctx, base);
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x822d4f80
	ctx.lr = 0x82202A70;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220A618) {
	REX_FUNC_PROLOGUE();
	// b 0x8220a828
	sub_8220A828(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8220A910) {
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
	// bl 0x824d42dc
	ctx.lr = 0x8220A920;
	__imp__XexUnloadImage(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8220a934
	if (!ctx.cr0.lt) goto loc_8220A934;
	// bl 0x8220c390
	ctx.lr = 0x8220A92C;
	sub_8220C390(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8220a938
	goto loc_8220A938;
loc_8220A934:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8220A938:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220BE80) {
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
	// bl 0x824d435c
	ctx.lr = 0x8220BE94;
	__imp__NtSuspendThread(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8220bea8
	if (!ctx.cr0.lt) goto loc_8220BEA8;
	// bl 0x8220c390
	ctx.lr = 0x8220BEA0;
	sub_8220C390(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8220beac
	goto loc_8220BEAC;
loc_8220BEA8:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8220BEAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220D670) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220d6c0
	if (ctx.cr0.eq) goto loc_8220D6C0;
	// bl 0x824d419c
	ctx.lr = 0x8220D69C;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8220d6c0
	if (ctx.cr6.eq) goto loc_8220D6C0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,5204
	ctx.r6.s64 = 5204;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x824d43dc
	ctx.lr = 0x8220D6C0;
	__imp__KeBugCheckEx(ctx, base);
loc_8220D6C0:
	// lbz r11,-11(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + -11);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8220d6d4
	if (!ctx.cr0.eq) goto loc_8220D6D4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8220d700
	goto loc_8220D700;
loc_8220D6D4:
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220d6f0
	if (ctx.cr0.eq) goto loc_8220D6F0;
	// lhz r11,-16(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + -16);
	// lwz r10,-24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + -24);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// b 0x8220d700
	goto loc_8220D700;
loc_8220D6F0:
	// lhz r11,-16(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + -16);
	// lbz r10,-10(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + -10);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_8220D700:
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

DEFINE_REX_FUNC(sub_82210888) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,10606(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 10606);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,16372(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16372);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210AC8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,18,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210BE0) {
	REX_FUNC_PROLOGUE();
	// lbz r3,10498(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 10498);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210C60) {
	REX_FUNC_PROLOGUE();
	// lbz r3,10493(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 10493);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210E58) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwinm r3,r11,17,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211128) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r11,0,16,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
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

DEFINE_REX_FUNC(sub_822113B0) {
	REX_FUNC_PROLOGUE();
	// lhz r11,10544(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 10544);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822116D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10620(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 10620, temp.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// rldicr r12,r12,48,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 48) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82212068) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,3230
	ctx.r11.s64 = ctx.r4.s64 + 3230;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822120c8
	if (ctx.cr6.eq) goto loc_822120C8;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// rlwinm r11,r11,30,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xF;
	// mulli r10,r10,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x8221209c
	if (ctx.cr6.gt) goto loc_8221209C;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8221209C:
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwimi r9,r11,2,26,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFC3);
	// rldicr r11,r7,63,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stw r9,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// clrldi r10,r8,32
	ctx.r10.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// srd r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
loc_822120C8:
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,12356(r11)
	REX_STORE_U8(ctx.r11.u32 + 12356, ctx.r5.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82214A48) {
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
	ctx.lr = 0x82214A50;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mullw r31,r5,r6
	r31.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// not r26,r11
	r26.u64 = ~ctx.r11.u64;
loc_82214A68:
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// and r28,r11,r26
	r28.u64 = ctx.r11.u64 & r26.u64;
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(r28.u32, r31.u32, ctx.xer);
	// ble cr6,0x82214a88
	if (!ctx.cr6.gt) goto loc_82214A88;
	// mr r28,r31
	r28.u64 = r31.u64;
loc_82214A88:
	// rlwinm r29,r28,2,0,29
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82214A98;
	sub_822D4FA0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// subf. r31,r28,r31
	r31.u64 = r31.u64 - r28.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// add r27,r29,r27
	r27.u64 = r29.u64 + r27.u64;
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// beq 0x82214abc
	if (ctx.cr0.eq) goto loc_82214ABC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82214938
	ctx.lr = 0x82214AB8;
	sub_82214938(ctx, base);
	// b 0x82214a68
	goto loc_82214A68;
loc_82214ABC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82216020) {
	REX_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x82215c10
	sub_82215C10(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822167B8) {
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
	ctx.lr = 0x822167C0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,2598
	ctx.r11.s64 = ctx.r4.s64 + 2598;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stwx r10,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822167fc
	if (!ctx.cr6.gt) goto loc_822167FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x822167FC;
	sub_82215008(ctx, base);
loc_822167FC:
	// addi r11,r29,8198
	ctx.r11.s64 = r29.s64 + 8198;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r11,11036(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// beq cr6,0x82216828
	if (ctx.cr6.eq) goto loc_82216828;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// b 0x82216878
	goto loc_82216878;
loc_82216828:
	// lwz r11,11040(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11040);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82216878
	if (ctx.cr0.eq) goto loc_82216878;
	// lwz r11,13932(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13932);
	// lwz r3,13928(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 13928);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82216850
	if (ctx.cr6.lt) goto loc_82216850;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822158d0
	ctx.lr = 0x82216850;
	sub_822158D0(ctx, base);
loc_82216850:
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// rlwimi r11,r30,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// ld r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stw r9,13928(r31)
	REX_STORE_U32(r31.u32 + 13928, ctx.r9.u32);
loc_82216878:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822168a4
	if (!ctx.cr6.eq) goto loc_822168A4;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// rlwinm r9,r11,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r5,r10,0,6,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3FFFFFC;
	// rlwinm r11,r9,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r9,3
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// b 0x8221692c
	goto loc_8221692C;
loc_822168A4:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82216940
	if (!ctx.cr6.eq) goto loc_82216940;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// lwz r29,48(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 48);
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r27,r11,0,0,19
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r30,r29,0,0,19
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x82222148
	ctx.lr = 0x822168F8;
	sub_82222148(ctx, base);
	// rlwinm r11,r27,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 12) & 0xFFF;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r10,r27,3
	ctx.r10.u64 = r27.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82215db8
	ctx.lr = 0x82216918;
	sub_82215DB8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82216940
	if (ctx.cr6.eq) goto loc_82216940;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
loc_8221692C:
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82215db8
	ctx.lr = 0x82216940;
	sub_82215DB8(ctx, base);
loc_82216940:
	// lwz r11,13904(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13904);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// stw r11,13904(r31)
	REX_STORE_U32(r31.u32 + 13904, ctx.r11.u32);
	// ble cr6,0x82216964
	if (!ctx.cr6.gt) goto loc_82216964;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x82216964;
	sub_82215008(ctx, base);
loc_82216964:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// li r10,6
	ctx.r10.s64 = 6;
	// ori r11,r11,17920
	ctx.r11.u64 = ctx.r11.u64 | 17920;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r11,13904(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13904);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// bne cr6,0x822169d4
	if (!ctx.cr6.eq) goto loc_822169D4;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// beq cr6,0x822169cc
	if (ctx.cr6.eq) goto loc_822169CC;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822169a4
	if (!ctx.cr6.gt) goto loc_822169A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x822169A4;
	sub_82215008(ctx, base);
loc_822169A4:
	// li r11,1480
	ctx.r11.s64 = 1480;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(r28.u32, 2, ctx.xer);
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// beq cr6,0x822169dc
	if (ctx.cr6.eq) goto loc_822169DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82216338
	ctx.lr = 0x822169C8;
	sub_82216338(ctx, base);
	// b 0x822169dc
	goto loc_822169DC;
loc_822169CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822169dc
	if (ctx.cr6.eq) goto loc_822169DC;
loc_822169D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822161e0
	ctx.lr = 0x822169DC;
	sub_822161E0(ctx, base);
loc_822169DC:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822169f4
	if (!ctx.cr6.gt) goto loc_822169F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x822169F4;
	sub_82215008(ctx, base);
loc_822169F4:
	// lwz r11,13904(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13904);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82216a10
	if (!ctx.cr6.eq) goto loc_82216A10;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82216a14
	if (ctx.cr6.eq) goto loc_82216A14;
loc_82216A10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82216A14:
	// stw r11,13908(r31)
	REX_STORE_U32(r31.u32 + 13908, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82222708) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82222710;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82222630
	ctx.lr = 0x8222273C;
	sub_82222630(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82222784
	if (ctx.cr6.eq) goto loc_82222784;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,27512
	ctx.r11.s64 = ctx.r11.s64 + 27512;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r10,1,25,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x7E;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mullw r11,r7,r9
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// lbzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// b 0x82222788
	goto loc_82222788;
loc_82222784:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_82222788:
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82223BA8) {
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
	ctx.lr = 0x82223BB0;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,1488
	ctx.r3.s64 = 1488;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223BC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,29624
	ctx.r5.s64 = ctx.r11.s64 + 29624;
	// addi r4,r10,29604
	ctx.r4.s64 = ctx.r10.s64 + 29604;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r28,0
	r28.s64 = 0;
	// bl 0x82223b20
	ctx.lr = 0x82223BEC;
	sub_82223B20(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// li r26,11
	r26.s64 = 11;
	// addi r27,r11,6248
	r27.s64 = ctx.r11.s64 + 6248;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r27,4
	r30.s64 = r27.s64 + 4;
	// addi r25,r11,29600
	r25.s64 = ctx.r11.s64 + 29600;
loc_82223C04:
	// lwz r11,-4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -4);
	// and. r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82223c34
	if (ctx.cr0.eq) goto loc_82223C34;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82223c24
	if (ctx.cr6.eq) goto loc_82223C24;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82223b20
	ctx.lr = 0x82223C24;
	sub_82223B20(ctx, base);
loc_82223C24:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82223b20
	ctx.lr = 0x82223C30;
	sub_82223B20(ctx, base);
	// li r28,1
	r28.s64 = 1;
loc_82223C34:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x82223c04
	if (!ctx.cr0.eq) goto loc_82223C04;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x82223c58
	if (!ctx.cr6.eq) goto loc_82223C58;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,29580
	ctx.r4.s64 = ctx.r11.s64 + 29580;
	// bl 0x82223b20
	ctx.lr = 0x82223C58;
	sub_82223B20(ctx, base);
loc_82223C58:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,29576
	ctx.r4.s64 = ctx.r11.s64 + 29576;
	// bl 0x82223b20
	ctx.lr = 0x82223C68;
	sub_82223B20(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,3857
	ctx.r3.s64 = 3857;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223C7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823cd320
	ctx.lr = 0x82223C84;
	sub_823CD320(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r3,3858
	ctx.r3.s64 = 3858;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223C94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r28,r11,29556
	r28.s64 = ctx.r11.s64 + 29556;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r10,29536
	ctx.r5.s64 = ctx.r10.s64 + 29536;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82223b20
	ctx.lr = 0x82223CB4;
	sub_82223B20(ctx, base);
	// addi r11,r27,88
	ctx.r11.s64 = r27.s64 + 88;
	// li r29,30
	r29.s64 = 30;
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
loc_82223CC0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223CD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwzu r5,8(r30)
	ea = 8 + r30.u32;
	ctx.r5.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82223b20
	ctx.lr = 0x82223CE4;
	sub_82223B20(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82223cc0
	if (!ctx.cr0.eq) goto loc_82223CC0;
	// addi r11,r27,328
	ctx.r11.s64 = r27.s64 + 328;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r30,r11,16
	r30.s64 = ctx.r11.s64 + 16;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r23,5
	r23.s64 = 5;
	// addi r26,r11,29524
	r26.s64 = ctx.r11.s64 + 29524;
	// addi r27,r10,29528
	r27.s64 = ctx.r10.s64 + 29528;
	// addi r25,r9,29512
	r25.s64 = ctx.r9.s64 + 29512;
	// addi r24,r8,2076
	r24.s64 = ctx.r8.s64 + 2076;
loc_82223D18:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82223b20
	ctx.lr = 0x82223D24;
	sub_82223B20(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82223dfc
	if (!ctx.cr6.gt) goto loc_82223DFC;
loc_82223D34:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824d44ec
	ctx.lr = 0x82223D48;
	__imp__sprintf(ctx, base);
	// mr r28,r29
	r28.u64 = r29.u64;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
loc_82223D50:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82223d60
	if (!ctx.cr6.lt) goto loc_82223D60;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_82223D60:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82223de0
	if (!ctx.cr6.lt) goto loc_82223DE0;
	// lwz r11,-4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,-8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + -8);
	// slw r11,r28,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r11.u8 & 0x3F));
	// or r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 | ctx.r9.u64;
	// lwz r3,-16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82223D88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823cd320
	ctx.lr = 0x82223D90;
	sub_823CD320(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,-12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223DA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82223DAC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82223dac
	if (!ctx.cr6.eq) goto loc_82223DAC;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x824d44ec
	ctx.lr = 0x82223DD8;
	__imp__sprintf(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x82223d50
	goto loc_82223D50;
loc_82223DE0:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82223b20
	ctx.lr = 0x82223DF0;
	sub_82223B20(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82223d34
	if (ctx.cr6.lt) goto loc_82223D34;
loc_82223DFC:
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// bne 0x82223d18
	if (!ctx.cr0.eq) goto loc_82223D18;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_8222E160) {
	REX_FUNC_PROLOGUE();
	// mulli r11,r4,36
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(36));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,24476
	ctx.r11.s64 = ctx.r11.s64 + 24476;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8222e1c8
	if (ctx.cr6.eq) goto loc_8222E1C8;
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8222E184:
	// and r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 & ctx.r10.u64;
	// mulli r9,r9,28
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(28));
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r9,24(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// rlwinm. r9,r9,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8222e1c8
	if (ctx.cr0.eq) goto loc_8222E1C8;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8222e1b8
	if (!ctx.cr6.eq) goto loc_8222E1B8;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8222E1B8:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8222e184
	if (!ctx.cr6.eq) goto loc_8222E184;
loc_8222E1C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82230AF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82230b08
	if (ctx.cr0.eq) goto loc_82230B08;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82230b4c
	goto loc_82230B4C;
loc_82230B08:
	// rlwinm r11,r10,9,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FF;
	// cmplwi cr6,r11,113
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 113, ctx.xer);
	// blt cr6,0x82230b28
	if (ctx.cr6.lt) goto loc_82230B28;
	// rlwinm r11,r10,0,5,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7800000;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82230b4c
	goto loc_82230B4C;
loc_82230B28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r9,r10,9
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFF;
	// subfic r11,r11,113
	ctx.xer.ca = ctx.r11.u32 <= 113;
	ctx.r11.u64 = static_cast<uint64_t>(113) - ctx.r11.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
loc_82230B4C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwimi r3,r11,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82233FD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82233FE0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x824d477c
	ctx.lr = 0x82233FF4;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82234068
	if (!ctx.cr0.eq) goto loc_82234068;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// ori r4,r4,20
	ctx.r4.u64 = ctx.r4.u64 | 20;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x824d3ecc
	ctx.lr = 0x8223402C;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8223403c
	if (!ctx.cr0.lt) goto loc_8223403C;
	// li r31,1627
	r31.s64 = 1627;
	// b 0x82234060
	goto loc_82234060;
loc_8223403C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8223405c
	if (!ctx.cr6.eq) goto loc_8223405C;
	// bl 0x8220a878
	ctx.lr = 0x82234048;
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
	// b 0x82234060
	goto loc_82234060;
loc_8223405C:
	// li r31,997
	r31.s64 = 997;
loc_82234060:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824d431c
	ctx.lr = 0x82234068;
	__imp__ObDereferenceObject(ctx, base);
loc_82234068:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82235158) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82235160;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// bl 0x822d4fa0
	ctx.lr = 0x82235178;
	sub_822D4FA0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r9,r30,44
	ctx.r9.s64 = r30.s64 + 44;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82235194
	if (ctx.cr0.eq) goto loc_82235194;
	// lis r29,-32768
	r29.s64 = -2147483648;
	// ori r29,r29,16389
	r29.u64 = r29.u64 | 16389;
	// b 0x82235210
	goto loc_82235210;
loc_82235194:
	// lhz r8,38(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 38);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x822351a8
	if (ctx.cr0.eq) goto loc_822351A8;
	// stw r9,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r9.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_822351A8:
	// lhz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 40);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lhz r6,42(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 42);
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// subf r7,r11,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r11.u64;
	// lhz r5,26(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 26);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lhz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 24);
	// lhz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 32);
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r9,-44
	ctx.r10.s64 = ctx.r9.s64 + -44;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// mullw r9,r5,r6
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r10,r4,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// stw r10,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r10.u32);
loc_82235210:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82237428) {
	REX_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82237438
	if (!ctx.cr6.eq) goto loc_82237438;
	// b 0x82237110
	sub_82237110(ctx, base);
	return;
loc_82237438:
	// b 0x82236f50
	sub_82236F50(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822378B8) {
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
	ctx.lr = 0x822378C0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r29,0
	r29.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822378ec
	if (!ctx.cr6.eq) goto loc_822378EC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x82237950
	goto loc_82237950;
loc_822378EC:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r31,r11,2
	r31.s64 = ctx.r11.s64 + 2;
	// divwu. r27,r10,r31
	r27.u64 = uint32_t(r31.u32 ? ctx.r10.u32 / r31.u32 : 0);
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// twllei r31,0
	if (r31.s32 == 0 || r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// beq 0x82237950
	if (ctx.cr0.eq) goto loc_82237950;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
loc_82237914:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,76(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 76);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8223c2d0
	ctx.lr = 0x82237924;
	sub_8223C2D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82237950
	if (ctx.cr0.lt) goto loc_82237950;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82237950
	if (ctx.cr6.eq) goto loc_82237950;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r28,r28,r31
	r28.u64 = r28.u64 + r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// blt cr6,0x82237914
	if (ctx.cr6.lt) goto loc_82237914;
loc_82237950:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82239340) {
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
	ctx.lr = 0x82239348;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,244
	r29.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// bl 0x824d438c
	ctx.lr = 0x82239368;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,21
	ctx.r11.s64 = r30.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82239388
	if (!ctx.cr6.eq) goto loc_82239388;
	// lis r27,-32761
	r27.s64 = -2147024896;
	// ori r27,r27,87
	r27.u64 = r27.u64 | 87;
	// b 0x82239390
	goto loc_82239390;
loc_82239388:
	// lfs f0,196(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
loc_82239390:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d437c
	ctx.lr = 0x82239398;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8223B1D0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bne cr6,0x8223b1e4
	if (!ctx.cr6.eq) goto loc_8223B1E4;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8223b1f0
	goto loc_8223B1F0;
loc_8223B1E4:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
loc_8223B1F0:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x8223b680
	sub_8223B680(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8223B8C8) {
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
	ctx.lr = 0x8223B8D0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// ori r4,r4,32774
	ctx.r4.u64 = ctx.r4.u64 | 32774;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// li r25,0
	r25.s64 = 0;
	// bl 0x823cd118
	ctx.lr = 0x8223B8FC;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8223b990
	if (ctx.cr0.eq) goto loc_8223B990;
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// mullw r26,r29,r30
	r26.s64 = int64_t(r29.s32) * int64_t(r30.s32);
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x823cd118
	ctx.lr = 0x8223B91C;
	sub_823CD118(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mullw r3,r28,r30
	ctx.r3.s64 = int64_t(r28.s32) * int64_t(r30.s32);
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x823cd118
	ctx.lr = 0x8223B930;
	sub_823CD118(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223b990
	if (ctx.cr6.eq) goto loc_8223B990;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223b990
	if (ctx.cr6.eq) goto loc_8223B990;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8223b9a4
	if (ctx.cr6.eq) goto loc_8223B9A4;
	// subf r8,r27,r29
	ctx.r8.u64 = r29.u64 - r27.u64;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_8223B95C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// bdnz 0x8223b95c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223B95C;
	// b 0x8223b9a4
	goto loc_8223B9A4;
loc_8223B990:
	// lis r25,-32761
	r25.s64 = -2147024896;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
	// bl 0x8223b780
	ctx.lr = 0x8223B9A0;
	sub_8223B780(ctx, base);
	// li r31,0
	r31.s64 = 0;
loc_8223B9A4:
	// stw r31,0(r24)
	REX_STORE_U32(r24.u32 + 0, r31.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82241358) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,-4288(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82241380
	if (!ctx.cr6.eq) goto loc_82241380;
	// bl 0x822412a8
	ctx.lr = 0x82241380;
	sub_822412A8(ctx, base);
loc_82241380:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,332(r31)
	REX_STORE_U32(r31.u32 + 332, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82243C60) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82244178
	if (ctx.cr6.lt) goto loc_82244178;
	// beq cr6,0x8224414c
	if (ctx.cr6.eq) goto loc_8224414C;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x82244128
	if (ctx.cr6.lt) goto loc_82244128;
	// beq cr6,0x82243c80
	if (ctx.cr6.eq) goto loc_82243C80;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_82243C80:
	// li r11,50
	ctx.r11.s64 = 50;
	// cmplwi cr6,r4,20800
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 20800, ctx.xer);
	// divwu r9,r4,r11
	ctx.r9.u64 = uint32_t(ctx.r11.u32 ? ctx.r4.u32 / ctx.r11.u32 : 0);
	// bgt cr6,0x82243ef0
	if (ctx.cr6.gt) goto loc_82243EF0;
	// beq cr6,0x82243ee4
	if (ctx.cr6.eq) goto loc_82243EE4;
	// cmplwi cr6,r4,14800
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 14800, ctx.xer);
	// bgt cr6,0x82243dc8
	if (ctx.cr6.gt) goto loc_82243DC8;
	// beq cr6,0x82243dbc
	if (ctx.cr6.eq) goto loc_82243DBC;
	// cmplwi cr6,r4,12000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 12000, ctx.xer);
	// bgt cr6,0x82243d44
	if (ctx.cr6.gt) goto loc_82243D44;
	// beq cr6,0x82243d38
	if (ctx.cr6.eq) goto loc_82243D38;
	// cmplwi cr6,r4,8800
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8800, ctx.xer);
	// beq cr6,0x82243d2c
	if (ctx.cr6.eq) goto loc_82243D2C;
	// cmplwi cr6,r4,9600
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 9600, ctx.xer);
	// beq cr6,0x82243d20
	if (ctx.cr6.eq) goto loc_82243D20;
	// cmplwi cr6,r4,10000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10000, ctx.xer);
	// beq cr6,0x82243d14
	if (ctx.cr6.eq) goto loc_82243D14;
	// cmplwi cr6,r4,10400
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10400, ctx.xer);
	// beq cr6,0x82243d08
	if (ctx.cr6.eq) goto loc_82243D08;
	// cmplwi cr6,r4,10800
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10800, ctx.xer);
	// beq cr6,0x82243cfc
	if (ctx.cr6.eq) goto loc_82243CFC;
	// cmplwi cr6,r4,11200
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 11200, ctx.xer);
	// beq cr6,0x82243cf0
	if (ctx.cr6.eq) goto loc_82243CF0;
	// cmplwi cr6,r4,11600
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 11600, ctx.xer);
	// bne cr6,0x82244170
	if (!ctx.cr6.eq) goto loc_82244170;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82244188
	goto loc_82244188;
loc_82243CF0:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x82244188
	goto loc_82244188;
loc_82243CFC:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x82244188
	goto loc_82244188;
loc_82243D08:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82244188
	goto loc_82244188;
loc_82243D14:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82244188
	goto loc_82244188;
loc_82243D20:
	// li r10,12
	ctx.r10.s64 = 12;
loc_82243D24:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82244188
	goto loc_82244188;
loc_82243D2C:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,59
	ctx.r11.s64 = 59;
	// b 0x82244188
	goto loc_82244188;
loc_82243D38:
	// li r10,12
	ctx.r10.s64 = 12;
loc_82243D3C:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82244188
	goto loc_82244188;
loc_82243D44:
	// cmplwi cr6,r4,12400
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 12400, ctx.xer);
	// beq cr6,0x82243db0
	if (ctx.cr6.eq) goto loc_82243DB0;
	// cmplwi cr6,r4,12800
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 12800, ctx.xer);
	// beq cr6,0x82243da4
	if (ctx.cr6.eq) goto loc_82243DA4;
	// cmplwi cr6,r4,13200
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 13200, ctx.xer);
	// beq cr6,0x82243d98
	if (ctx.cr6.eq) goto loc_82243D98;
	// cmplwi cr6,r4,13600
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 13600, ctx.xer);
	// beq cr6,0x82243d8c
	if (ctx.cr6.eq) goto loc_82243D8C;
	// cmplwi cr6,r4,14000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 14000, ctx.xer);
	// beq cr6,0x82243d80
	if (ctx.cr6.eq) goto loc_82243D80;
	// cmplwi cr6,r4,14400
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 14400, ctx.xer);
	// bne cr6,0x82244170
	if (!ctx.cr6.eq) goto loc_82244170;
	// li r10,16
	ctx.r10.s64 = 16;
loc_82243D78:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82244188
	goto loc_82244188;
loc_82243D80:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,21
	ctx.r11.s64 = 21;
	// b 0x82244188
	goto loc_82244188;
loc_82243D8C:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,20
	ctx.r11.s64 = 20;
	// b 0x82244188
	goto loc_82244188;
loc_82243D98:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,19
	ctx.r11.s64 = 19;
	// b 0x82244188
	goto loc_82244188;
loc_82243DA4:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x82244188
	goto loc_82244188;
loc_82243DB0:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x82244188
	goto loc_82244188;
loc_82243DBC:
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x82244188
	goto loc_82244188;
loc_82243DC8:
	// cmplwi cr6,r4,18000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 18000, ctx.xer);
	// bgt cr6,0x82243e6c
	if (ctx.cr6.gt) goto loc_82243E6C;
	// beq cr6,0x82243e60
	if (ctx.cr6.eq) goto loc_82243E60;
	// cmplwi cr6,r4,15200
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 15200, ctx.xer);
	// beq cr6,0x82243e54
	if (ctx.cr6.eq) goto loc_82243E54;
	// cmplwi cr6,r4,15600
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 15600, ctx.xer);
	// beq cr6,0x82243e48
	if (ctx.cr6.eq) goto loc_82243E48;
	// cmplwi cr6,r4,16000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16000, ctx.xer);
	// beq cr6,0x82243e3c
	if (ctx.cr6.eq) goto loc_82243E3C;
	// cmplwi cr6,r4,16400
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16400, ctx.xer);
	// beq cr6,0x82243e30
	if (ctx.cr6.eq) goto loc_82243E30;
	// cmplwi cr6,r4,16800
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16800, ctx.xer);
	// beq cr6,0x82243e24
	if (ctx.cr6.eq) goto loc_82243E24;
	// cmplwi cr6,r4,17200
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 17200, ctx.xer);
	// beq cr6,0x82243e18
	if (ctx.cr6.eq) goto loc_82243E18;
	// cmplwi cr6,r4,17600
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 17600, ctx.xer);
	// bne cr6,0x82244170
	if (!ctx.cr6.eq) goto loc_82244170;
	// li r10,18
	ctx.r10.s64 = 18;
	// li r11,28
	ctx.r11.s64 = 28;
	// b 0x82244188
	goto loc_82244188;
loc_82243E18:
	// li r10,18
	ctx.r10.s64 = 18;
	// li r11,27
	ctx.r11.s64 = 27;
	// b 0x82244188
	goto loc_82244188;
loc_82243E24:
	// li r10,18
	ctx.r10.s64 = 18;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82244188
	goto loc_82244188;
loc_82243E30:
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,26
	ctx.r11.s64 = 26;
	// b 0x82244188
	goto loc_82244188;
loc_82243E3C:
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,25
	ctx.r11.s64 = 25;
	// b 0x82244188
	goto loc_82244188;
loc_82243E48:
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x82244188
	goto loc_82244188;
loc_82243E54:
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,23
	ctx.r11.s64 = 23;
	// b 0x82244188
	goto loc_82244188;
loc_82243E60:
	// li r10,18
	ctx.r10.s64 = 18;
	// li r11,29
	ctx.r11.s64 = 29;
	// b 0x82244188
	goto loc_82244188;
loc_82243E6C:
	// cmplwi cr6,r4,18400
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 18400, ctx.xer);
	// beq cr6,0x82243ed8
	if (ctx.cr6.eq) goto loc_82243ED8;
	// cmplwi cr6,r4,18800
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 18800, ctx.xer);
	// beq cr6,0x82243ecc
	if (ctx.cr6.eq) goto loc_82243ECC;
	// cmplwi cr6,r4,19200
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 19200, ctx.xer);
	// beq cr6,0x82243ec0
	if (ctx.cr6.eq) goto loc_82243EC0;
	// cmplwi cr6,r4,19600
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 19600, ctx.xer);
	// beq cr6,0x82243eb4
	if (ctx.cr6.eq) goto loc_82243EB4;
	// cmplwi cr6,r4,20000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 20000, ctx.xer);
	// beq cr6,0x82243ea8
	if (ctx.cr6.eq) goto loc_82243EA8;
	// cmplwi cr6,r4,20400
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 20400, ctx.xer);
	// bne cr6,0x82244170
	if (!ctx.cr6.eq) goto loc_82244170;
	// li r10,20
	ctx.r10.s64 = 20;
	// li r11,34
	ctx.r11.s64 = 34;
	// b 0x82244188
	goto loc_82244188;
loc_82243EA8:
	// li r10,20
	ctx.r10.s64 = 20;
	// li r11,33
	ctx.r11.s64 = 33;
	// b 0x82244188
	goto loc_82244188;
loc_82243EB4:
	// li r10,20
	ctx.r10.s64 = 20;
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x82244188
	goto loc_82244188;
loc_82243EC0:
	// li r10,20
	ctx.r10.s64 = 20;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82244188
	goto loc_82244188;
loc_82243ECC:
	// li r10,18
	ctx.r10.s64 = 18;
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x82244188
	goto loc_82244188;
loc_82243ED8:
	// li r10,18
	ctx.r10.s64 = 18;
	// li r11,30
	ctx.r11.s64 = 30;
	// b 0x82244188
	goto loc_82244188;
loc_82243EE4:
	// li r10,20
	ctx.r10.s64 = 20;
	// li r11,35
	ctx.r11.s64 = 35;
	// b 0x82244188
	goto loc_82244188;
loc_82243EF0:
	// cmplwi cr6,r4,26800
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 26800, ctx.xer);
	// bgt cr6,0x82244024
	if (ctx.cr6.gt) goto loc_82244024;
	// beq cr6,0x82244018
	if (ctx.cr6.eq) goto loc_82244018;
	// cmplwi cr6,r4,24000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 24000, ctx.xer);
	// bgt cr6,0x82243fa0
	if (ctx.cr6.gt) goto loc_82243FA0;
	// beq cr6,0x82243f94
	if (ctx.cr6.eq) goto loc_82243F94;
	// cmplwi cr6,r4,21200
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 21200, ctx.xer);
	// beq cr6,0x82243f88
	if (ctx.cr6.eq) goto loc_82243F88;
	// cmplwi cr6,r4,21600
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 21600, ctx.xer);
	// beq cr6,0x82243f7c
	if (ctx.cr6.eq) goto loc_82243F7C;
	// cmplwi cr6,r4,22000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 22000, ctx.xer);
	// beq cr6,0x82243f70
	if (ctx.cr6.eq) goto loc_82243F70;
	// cmplwi cr6,r4,22400
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 22400, ctx.xer);
	// beq cr6,0x82243f64
	if (ctx.cr6.eq) goto loc_82243F64;
	// cmplwi cr6,r4,22800
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 22800, ctx.xer);
	// beq cr6,0x82243f58
	if (ctx.cr6.eq) goto loc_82243F58;
	// cmplwi cr6,r4,23200
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 23200, ctx.xer);
	// beq cr6,0x82243f4c
	if (ctx.cr6.eq) goto loc_82243F4C;
	// cmplwi cr6,r4,23600
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 23600, ctx.xer);
	// bne cr6,0x82244170
	if (!ctx.cr6.eq) goto loc_82244170;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r11,41
	ctx.r11.s64 = 41;
	// b 0x82244188
	goto loc_82244188;
loc_82243F4C:
	// li r10,22
	ctx.r10.s64 = 22;
	// li r11,40
	ctx.r11.s64 = 40;
	// b 0x82244188
	goto loc_82244188;
loc_82243F58:
	// li r10,22
	ctx.r10.s64 = 22;
	// li r11,39
	ctx.r11.s64 = 39;
	// b 0x82244188
	goto loc_82244188;
loc_82243F64:
	// li r10,22
	ctx.r10.s64 = 22;
	// li r11,38
	ctx.r11.s64 = 38;
	// b 0x82244188
	goto loc_82244188;
loc_82243F70:
	// li r10,22
	ctx.r10.s64 = 22;
	// li r11,37
	ctx.r11.s64 = 37;
	// b 0x82244188
	goto loc_82244188;
loc_82243F7C:
	// li r10,22
	ctx.r10.s64 = 22;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82244188
	goto loc_82244188;
loc_82243F88:
	// li r10,20
	ctx.r10.s64 = 20;
	// li r11,36
	ctx.r11.s64 = 36;
	// b 0x82244188
	goto loc_82244188;
loc_82243F94:
	// li r10,24
	ctx.r10.s64 = 24;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82244188
	goto loc_82244188;
loc_82243FA0:
	// cmplwi cr6,r4,24400
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 24400, ctx.xer);
	// beq cr6,0x8224400c
	if (ctx.cr6.eq) goto loc_8224400C;
	// cmplwi cr6,r4,24800
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 24800, ctx.xer);
	// beq cr6,0x82244000
	if (ctx.cr6.eq) goto loc_82244000;
	// cmplwi cr6,r4,25200
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 25200, ctx.xer);
	// beq cr6,0x82243ff4
	if (ctx.cr6.eq) goto loc_82243FF4;
	// cmplwi cr6,r4,25600
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 25600, ctx.xer);
	// beq cr6,0x82243fe8
	if (ctx.cr6.eq) goto loc_82243FE8;
	// cmplwi cr6,r4,26000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 26000, ctx.xer);
	// beq cr6,0x82243fdc
	if (ctx.cr6.eq) goto loc_82243FDC;
	// cmplwi cr6,r4,26400
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 26400, ctx.xer);
	// bne cr6,0x82244170
	if (!ctx.cr6.eq) goto loc_82244170;
	// li r10,26
	ctx.r10.s64 = 26;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82244188
	goto loc_82244188;
loc_82243FDC:
	// li r10,24
	ctx.r10.s64 = 24;
	// li r11,46
	ctx.r11.s64 = 46;
	// b 0x82244188
	goto loc_82244188;
loc_82243FE8:
	// li r10,24
	ctx.r10.s64 = 24;
	// li r11,45
	ctx.r11.s64 = 45;
	// b 0x82244188
	goto loc_82244188;
loc_82243FF4:
	// li r10,24
	ctx.r10.s64 = 24;
	// li r11,44
	ctx.r11.s64 = 44;
	// b 0x82244188
	goto loc_82244188;
loc_82244000:
	// li r10,24
	ctx.r10.s64 = 24;
	// li r11,43
	ctx.r11.s64 = 43;
	// b 0x82244188
	goto loc_82244188;
loc_8224400C:
	// li r10,24
	ctx.r10.s64 = 24;
	// li r11,42
	ctx.r11.s64 = 42;
	// b 0x82244188
	goto loc_82244188;
loc_82244018:
	// li r10,26
	ctx.r10.s64 = 26;
	// li r11,47
	ctx.r11.s64 = 47;
	// b 0x82244188
	goto loc_82244188;
loc_82244024:
	// cmplwi cr6,r4,29600
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 29600, ctx.xer);
	// bgt cr6,0x822440b0
	if (ctx.cr6.gt) goto loc_822440B0;
	// beq cr6,0x822440a4
	if (ctx.cr6.eq) goto loc_822440A4;
	// cmplwi cr6,r4,27200
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 27200, ctx.xer);
	// beq cr6,0x82244098
	if (ctx.cr6.eq) goto loc_82244098;
	// cmplwi cr6,r4,27600
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 27600, ctx.xer);
	// beq cr6,0x8224408c
	if (ctx.cr6.eq) goto loc_8224408C;
	// cmplwi cr6,r4,28000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 28000, ctx.xer);
	// beq cr6,0x82244084
	if (ctx.cr6.eq) goto loc_82244084;
	// cmplwi cr6,r4,28400
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 28400, ctx.xer);
	// beq cr6,0x82244078
	if (ctx.cr6.eq) goto loc_82244078;
	// cmplwi cr6,r4,28800
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 28800, ctx.xer);
	// beq cr6,0x8224406c
	if (ctx.cr6.eq) goto loc_8224406C;
	// cmplwi cr6,r4,29200
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 29200, ctx.xer);
	// bne cr6,0x82244170
	if (!ctx.cr6.eq) goto loc_82244170;
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,52
	ctx.r11.s64 = 52;
	// b 0x82244188
	goto loc_82244188;
loc_8224406C:
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82244188
	goto loc_82244188;
loc_82244078:
	// li r10,26
	ctx.r10.s64 = 26;
	// li r11,51
	ctx.r11.s64 = 51;
	// b 0x82244188
	goto loc_82244188;
loc_82244084:
	// li r10,26
	ctx.r10.s64 = 26;
	// b 0x82244188
	goto loc_82244188;
loc_8224408C:
	// li r10,26
	ctx.r10.s64 = 26;
	// li r11,49
	ctx.r11.s64 = 49;
	// b 0x82244188
	goto loc_82244188;
loc_82244098:
	// li r10,26
	ctx.r10.s64 = 26;
	// li r11,48
	ctx.r11.s64 = 48;
	// b 0x82244188
	goto loc_82244188;
loc_822440A4:
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,53
	ctx.r11.s64 = 53;
	// b 0x82244188
	goto loc_82244188;
loc_822440B0:
	// cmplwi cr6,r4,30000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 30000, ctx.xer);
	// beq cr6,0x8224411c
	if (ctx.cr6.eq) goto loc_8224411C;
	// cmplwi cr6,r4,30400
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 30400, ctx.xer);
	// beq cr6,0x82244110
	if (ctx.cr6.eq) goto loc_82244110;
	// cmplwi cr6,r4,30800
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 30800, ctx.xer);
	// beq cr6,0x82244104
	if (ctx.cr6.eq) goto loc_82244104;
	// cmplwi cr6,r4,31200
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 31200, ctx.xer);
	// beq cr6,0x822440f8
	if (ctx.cr6.eq) goto loc_822440F8;
	// cmplwi cr6,r4,31600
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 31600, ctx.xer);
	// beq cr6,0x822440ec
	if (ctx.cr6.eq) goto loc_822440EC;
	// cmplwi cr6,r4,32000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32000, ctx.xer);
	// bne cr6,0x82244170
	if (!ctx.cr6.eq) goto loc_82244170;
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,58
	ctx.r11.s64 = 58;
	// b 0x82244188
	goto loc_82244188;
loc_822440EC:
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,57
	ctx.r11.s64 = 57;
	// b 0x82244188
	goto loc_82244188;
loc_822440F8:
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82244188
	goto loc_82244188;
loc_82244104:
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,56
	ctx.r11.s64 = 56;
	// b 0x82244188
	goto loc_82244188;
loc_82244110:
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,55
	ctx.r11.s64 = 55;
	// b 0x82244188
	goto loc_82244188;
loc_8224411C:
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,54
	ctx.r11.s64 = 54;
	// b 0x82244188
	goto loc_82244188;
loc_82244128:
	// li r11,50
	ctx.r11.s64 = 50;
	// li r10,28
	ctx.r10.s64 = 28;
	// divwu r9,r4,r11
	ctx.r9.u64 = uint32_t(ctx.r11.u32 ? ctx.r4.u32 / ctx.r11.u32 : 0);
	// cmplwi cr6,r4,24000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 24000, ctx.xer);
	// beq cr6,0x82243d24
	if (ctx.cr6.eq) goto loc_82243D24;
	// cmplwi cr6,r4,32000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32000, ctx.xer);
	// beq cr6,0x82243d3c
	if (ctx.cr6.eq) goto loc_82243D3C;
	// cmplwi cr6,r4,48000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 48000, ctx.xer);
	// b 0x8224416c
	goto loc_8224416C;
loc_8224414C:
	// li r11,50
	ctx.r11.s64 = 50;
	// li r10,14
	ctx.r10.s64 = 14;
	// divwu r9,r4,r11
	ctx.r9.u64 = uint32_t(ctx.r11.u32 ? ctx.r4.u32 / ctx.r11.u32 : 0);
	// cmplwi cr6,r4,16000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16000, ctx.xer);
	// beq cr6,0x82243d24
	if (ctx.cr6.eq) goto loc_82243D24;
	// cmplwi cr6,r4,24000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 24000, ctx.xer);
	// beq cr6,0x82243d3c
	if (ctx.cr6.eq) goto loc_82243D3C;
	// cmplwi cr6,r4,32000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32000, ctx.xer);
loc_8224416C:
	// beq cr6,0x82243d78
	if (ctx.cr6.eq) goto loc_82243D78;
loc_82244170:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82244178:
	// li r9,50
	ctx.r9.s64 = 50;
	// li r10,14
	ctx.r10.s64 = 14;
	// li r11,0
	ctx.r11.s64 = 0;
	// divwu r9,r4,r9
	ctx.r9.u64 = uint32_t(ctx.r9.u32 ? ctx.r4.u32 / ctx.r9.u32 : 0);
loc_82244188:
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822526D8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-5264
	ctx.r3.s64 = ctx.r11.s64 + -5264;
	// b 0x82251550
	sub_82251550(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82252908) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-5196
	ctx.r3.s64 = ctx.r11.s64 + -5196;
	// b 0x82251550
	sub_82251550(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822529D0) {
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
	// addi r10,r10,-5148
	ctx.r10.s64 = ctx.r10.s64 + -5148;
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
	// addi r9,r9,-5900
	ctx.r9.s64 = ctx.r9.s64 + -5900;
	// std r31,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r8,-7432
	ctx.r8.s64 = ctx.r8.s64 + -7432;
	// addi r11,r7,-7288
	ctx.r11.s64 = ctx.r7.s64 + -7288;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r10,r6,27768
	ctx.r10.s64 = ctx.r6.s64 + 27768;
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
	// bl 0x82248890
	ctx.lr = 0x82252A44;
	sub_82248890(ctx, base);
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23648
	ctx.r4.s64 = ctx.r11.s64 + 23648;
	// bl 0x822512d8
	ctx.lr = 0x82252A5C;
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

DEFINE_REX_FUNC(sub_82255450) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822554d4
	if (ctx.cr6.eq) goto loc_822554D4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255b50
	ctx.lr = 0x82255478;
	sub_82255B50(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82255494
	if (ctx.cr6.eq) goto loc_82255494;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82255b50
	ctx.lr = 0x82255490;
	sub_82255B50(ctx, base);
	// add r31,r3,r31
	r31.u64 = ctx.r3.u64 + r31.u64;
loc_82255494:
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822554a8
	if (ctx.cr6.eq) goto loc_822554A8;
	// bl 0x82255b50
	ctx.lr = 0x822554A4;
	sub_82255B50(ctx, base);
	// add r31,r3,r31
	r31.u64 = ctx.r3.u64 + r31.u64;
loc_822554A8:
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822554bc
	if (ctx.cr6.eq) goto loc_822554BC;
	// bl 0x82255b50
	ctx.lr = 0x822554B8;
	sub_82255B50(ctx, base);
	// add r31,r3,r31
	r31.u64 = ctx.r3.u64 + r31.u64;
loc_822554BC:
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822554d0
	if (ctx.cr6.eq) goto loc_822554D0;
	// bl 0x82255b50
	ctx.lr = 0x822554CC;
	sub_82255B50(ctx, base);
	// add r31,r3,r31
	r31.u64 = ctx.r3.u64 + r31.u64;
loc_822554D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822554D4:
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

DEFINE_REX_FUNC(sub_82256DA0) {
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
	ctx.lr = 0x82256DC0;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82256dd4
	if (!ctx.cr0.eq) goto loc_82256DD4;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x82256ddc
	goto loc_82256DDC;
loc_82256DD4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822602b8
	ctx.lr = 0x82256DDC;
	sub_822602B8(ctx, base);
loc_82256DDC:
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

DEFINE_REX_FUNC(sub_822579D0) {
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
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8225da70
	ctx.lr = 0x822579F8;
	sub_8225DA70(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x82257A04;
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

DEFINE_REX_FUNC(sub_82259DA0) {
	REX_FUNC_PROLOGUE();
	// b 0x822596e0
	sub_822596E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82259F70) {
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
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r31,r11,29760
	r31.s64 = ctx.r11.s64 + 29760;
	// lwz r9,-2144(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -2144);
	// lwz r11,29780(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 29780);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bne 0x82259fd8
	if (!ctx.cr0.eq) goto loc_82259FD8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,29780(r10)
	REX_STORE_U32(ctx.r10.u32 + 29780, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8227ad38
	ctx.lr = 0x82259FCC;
	sub_8227AD38(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15728
	ctx.r3.s64 = ctx.r11.s64 + 15728;
	// bl 0x822d5848
	ctx.lr = 0x82259FD8;
	sub_822D5848(ctx, base);
loc_82259FD8:
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x822d7b58
	ctx.lr = 0x82259FE0;
	sub_822D7B58(ctx, base);
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

DEFINE_REX_FUNC(sub_8225CD40) {
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
	// beq cr6,0x8225cd84
	if (ctx.cr6.eq) goto loc_8225CD84;
	// bl 0x822463a8
	ctx.lr = 0x8225CD64;
	sub_822463A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225cd84
	if (ctx.cr0.eq) goto loc_8225CD84;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82257030
	ctx.lr = 0x8225CD78;
	sub_82257030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x8225cd88
	if (!ctx.cr0.eq) goto loc_8225CD88;
loc_8225CD84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225CD88:
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

DEFINE_REX_FUNC(sub_8225D8F8) {
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
	// blt cr6,0x8225d960
	if (ctx.cr6.lt) goto loc_8225D960;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8225d960
	if (!ctx.cr6.lt) goto loc_8225D960;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8225d94c
	if (ctx.cr6.eq) goto loc_8225D94C;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// addi r5,r11,-4
	ctx.r5.s64 = ctx.r11.s64 + -4;
	// bl 0x822d6840
	ctx.lr = 0x8225D94C;
	sub_822D6840(ctx, base);
loc_8225D94C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x8225d964
	goto loc_8225D964;
loc_8225D960:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225D964:
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

DEFINE_REX_FUNC(sub_8225EDD0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
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
	// bl 0x8225e540
	ctx.lr = 0x8225EE00;
	sub_8225E540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822469c0
	ctx.lr = 0x8225EE08;
	sub_822469C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8224da00
	ctx.lr = 0x8225EE10;
	sub_8224DA00(ctx, base);
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

DEFINE_REX_FUNC(sub_82260668) {
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
	ctx.lr = 0x82260670;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r3,228(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822606b0
	if (ctx.cr6.eq) goto loc_822606B0;
	// lwz r11,240(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 240);
	// rlwinm r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// beq cr6,0x822606b0
	if (ctx.cr6.eq) goto loc_822606B0;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x822778b0
	ctx.lr = 0x822606B0;
	sub_822778B0(ctx, base);
loc_822606B0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x82260758
	if (ctx.cr6.eq) goto loc_82260758;
	// lwz r11,240(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 240);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// beq cr6,0x82260758
	if (ctx.cr6.eq) goto loc_82260758;
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x82260758
	if (ctx.cr6.eq) goto loc_82260758;
	// lwz r31,24(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82260728
	if (ctx.cr6.eq) goto loc_82260728;
	// lis r24,-32163
	r24.s64 = -2107834368;
loc_822606E4:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r26,23560(r24)
	r26.u64 = REX_LOAD_U32(r24.u32 + 23560);
	// bl 0x822469c0
	ctx.lr = 0x822606F0;
	sub_822469C0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x822468a0
	ctx.lr = 0x822606F8;
	sub_822468A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8226071c
	if (!ctx.cr0.eq) goto loc_8226071C;
	// li r8,1
	ctx.r8.s64 = 1;
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
	// bl 0x82260668
	ctx.lr = 0x8226071C;
	sub_82260668(ctx, base);
loc_8226071C:
	// lwz r31,32(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x822606e4
	if (!ctx.cr6.eq) goto loc_822606E4;
loc_82260728:
	// lwz r31,44(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 44);
	// b 0x82260750
	goto loc_82260750;
loc_82260730:
	// li r8,1
	ctx.r8.s64 = 1;
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
	// bl 0x82260668
	ctx.lr = 0x8226074C;
	sub_82260668(ctx, base);
	// lwz r31,32(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 32);
loc_82260750:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82260730
	if (!ctx.cr6.eq) goto loc_82260730;
loc_82260758:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82266C88) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// bl 0x82256bc0
	ctx.lr = 0x82266CB4;
	sub_82256BC0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82291450
	ctx.lr = 0x82266CC4;
	sub_82291450(ctx, base);
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82291450
	ctx.lr = 0x82266CD4;
	sub_82291450(ctx, base);
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82291450
	ctx.lr = 0x82266CE4;
	sub_82291450(ctx, base);
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82291450
	ctx.lr = 0x82266CF4;
	sub_82291450(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x822d7b58
	ctx.lr = 0x82266CFC;
	sub_822D7B58(ctx, base);
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

DEFINE_REX_FUNC(sub_82268D58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82268D60;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,168(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// bl 0x8225b210
	ctx.lr = 0x82268D8C;
	sub_8225B210(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82268df8
	if (ctx.cr0.lt) goto loc_82268DF8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82268b98
	ctx.lr = 0x82268DA4;
	sub_82268B98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82268df8
	if (ctx.cr0.lt) goto loc_82268DF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8225e9f8
	ctx.lr = 0x82268DB8;
	sub_8225E9F8(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82268dcc
	if (ctx.cr6.eq) goto loc_82268DCC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82268DCC:
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822469c0
	ctx.lr = 0x82268DD4;
	sub_822469C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82256880
	ctx.lr = 0x82268DDC;
	sub_82256880(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82268df8
	if (ctx.cr0.lt) goto loc_82268DF8;
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_82268DF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8226CBA0) {
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
	ctx.lr = 0x8226CBA8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r31,8(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x824d49fc
	ctx.lr = 0x8226CBC8;
	__imp___vscwprintf(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8226cc34
	if (ctx.cr0.lt) goto loc_8226CC34;
	// add r27,r3,r31
	r27.u64 = ctx.r3.u64 + r31.u64;
	// addi r4,r27,1
	ctx.r4.s64 = r27.s64 + 1;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r31.u32, ctx.xer);
	// ble cr6,0x8226cc34
	if (!ctx.cr6.gt) goto loc_8226CC34;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x8226cc34
	if (!ctx.cr6.gt) goto loc_8226CC34;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8226cc34
	if (!ctx.cr6.lt) goto loc_8226CC34;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82267310
	ctx.lr = 0x8226CC00;
	sub_82267310(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8226cc34
	if (ctx.cr0.lt) goto loc_8226CC34;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824d49ec
	ctx.lr = 0x8226CC20;
	__imp__vswprintf(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8226cc34
	if (ctx.cr0.lt) goto loc_8226CC34;
	// stw r27,8(r30)
	REX_STORE_U32(r30.u32 + 8, r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8226cc38
	goto loc_8226CC38;
loc_8226CC34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226CC38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8226EE20) {
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
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x8226ee60
	if (!ctx.cr6.eq) goto loc_8226EE60;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8226ee68
	if (!ctx.cr6.eq) goto loc_8226EE68;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x8226eec0
	goto loc_8226EEC0;
loc_8226EE60:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8226ee70
	if (ctx.cr6.eq) goto loc_8226EE70;
loc_8226EE68:
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
loc_8226EE70:
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// bl 0x82256440
	ctx.lr = 0x8226EE78;
	sub_82256440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8226eea0
	if (ctx.cr6.eq) goto loc_8226EEA0;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// rlwimi r4,r10,13,26,27
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x30) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwimi r4,r10,13,18,18
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x2000) | (ctx.r4.u64 & 0xFFFFFFFFFFFFDFFF);
	// b 0x8226eeb0
	goto loc_8226EEB0;
loc_8226EEA0:
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwimi r4,r10,4,26,27
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x30) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwimi r4,r10,4,18,18
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x2000) | (ctx.r4.u64 & 0xFFFFFFFFFFFFDFFF);
loc_8226EEB0:
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
	// bl 0x822563e8
	ctx.lr = 0x8226EEB8;
	sub_822563E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226b6f8
	ctx.lr = 0x8226EEC0;
	sub_8226B6F8(ctx, base);
loc_8226EEC0:
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

DEFINE_REX_FUNC(sub_82275298) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822752A0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,2015
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2015, ctx.xer);
	// bgt cr6,0x822757dc
	if (ctx.cr6.gt) goto loc_822757DC;
	// beq cr6,0x8227574c
	if (ctx.cr6.eq) goto loc_8227574C;
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// bgt cr6,0x8227563c
	if (ctx.cr6.gt) goto loc_8227563C;
	// beq cr6,0x822755b8
	if (ctx.cr6.eq) goto loc_822755B8;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x82275584
	if (ctx.cr6.eq) goto loc_82275584;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x82275500
	if (ctx.cr6.eq) goto loc_82275500;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// beq cr6,0x82275494
	if (ctx.cr6.eq) goto loc_82275494;
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// beq cr6,0x822753d4
	if (ctx.cr6.eq) goto loc_822753D4;
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x82275b34
	if (!ctx.cr6.eq) goto loc_82275B34;
	// lwz r3,16(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lhz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82275488
	if (!ctx.cr0.eq) goto loc_82275488;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82275b34
	if (ctx.cr6.eq) goto loc_82275B34;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82255e88
	ctx.lr = 0x82275314;
	sub_82255E88(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82275384
	if (ctx.cr6.eq) goto loc_82275384;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x82275b34
	if (!ctx.cr6.eq) goto loc_82275B34;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82275488
	if (!ctx.cr6.gt) goto loc_82275488;
	// lfs f0,156(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// divwu r11,r11,r10
	ctx.r11.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,164(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
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
	// blt cr6,0x822753cc
	if (ctx.cr6.lt) goto loc_822753CC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x822753cc
	goto loc_822753CC;
loc_82275384:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82275488
	if (!ctx.cr6.lt) goto loc_82275488;
	// lfs f0,156(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// divwu r10,r10,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_822753CC:
	// stfs f0,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// b 0x82275488
	goto loc_82275488;
loc_822753D4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r29,16(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822462c8
	ctx.lr = 0x822753E4;
	sub_822462C8(ctx, base);
	// lhz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82275488
	if (!ctx.cr0.eq) goto loc_82275488;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82275b34
	if (ctx.cr6.eq) goto loc_82275B34;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82255e88
	ctx.lr = 0x82275408;
	sub_82255E88(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82275474
	if (ctx.cr6.eq) goto loc_82275474;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82275464
	if (ctx.cr6.eq) goto loc_82275464;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82275454
	if (ctx.cr6.eq) goto loc_82275454;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82275444
	if (ctx.cr6.eq) goto loc_82275444;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x82275b34
	if (!ctx.cr6.eq) goto loc_82275B34;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226f8f8
	ctx.lr = 0x82275440;
	sub_8226F8F8(ctx, base);
	// b 0x82275488
	goto loc_82275488;
loc_82275444:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226f4e8
	ctx.lr = 0x82275450;
	sub_8226F4E8(ctx, base);
	// b 0x82275480
	goto loc_82275480;
loc_82275454:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226f308
	ctx.lr = 0x82275460;
	sub_8226F308(ctx, base);
	// b 0x82275480
	goto loc_82275480;
loc_82275464:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226f7a8
	ctx.lr = 0x82275470;
	sub_8226F7A8(ctx, base);
	// b 0x82275480
	goto loc_82275480;
loc_82275474:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226f6c8
	ctx.lr = 0x82275480;
	sub_8226F6C8(ctx, base);
loc_82275480:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82275b34
	if (ctx.cr0.lt) goto loc_82275B34;
loc_82275488:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// b 0x82275b34
	goto loc_82275B34;
loc_82275494:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822586e0
	ctx.lr = 0x822754A8;
	sub_822586E0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822754ec
	if (!ctx.cr6.eq) goto loc_822754EC;
	// li r4,41
	ctx.r4.s64 = 41;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8225da70
	ctx.lr = 0x822754C0;
	sub_8225DA70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x822754C8;
	sub_822469C0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8224da00
	ctx.lr = 0x822754D0;
	sub_8224DA00(ctx, base);
	// li r4,41
	ctx.r4.s64 = 41;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8225da70
	ctx.lr = 0x822754DC;
	sub_8225DA70(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// bl 0x822469c0
	ctx.lr = 0x822754E4;
	sub_822469C0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8224da00
	ctx.lr = 0x822754EC;
	sub_8224DA00(ctx, base);
loc_822754EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822651e0
	ctx.lr = 0x822754F4;
	sub_822651E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226ba30
	ctx.lr = 0x822754FC;
	sub_8226BA30(ctx, base);
	// b 0x82275b34
	goto loc_82275B34;
loc_82275500:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bne cr6,0x82275b34
	if (!ctx.cr6.eq) goto loc_82275B34;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82275534
	if (!ctx.cr6.eq) goto loc_82275534;
	// stb r10,16(r31)
	REX_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// b 0x82275578
	goto loc_82275578;
loc_82275534:
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8227554c
	if (!ctx.cr6.eq) goto loc_8227554C;
	// stb r10,32(r31)
	REX_STORE_U8(r31.u32 + 32, ctx.r10.u8);
	// b 0x82275578
	goto loc_82275578;
loc_8227554C:
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82275564
	if (!ctx.cr6.eq) goto loc_82275564;
	// stb r10,48(r31)
	REX_STORE_U8(r31.u32 + 48, ctx.r10.u8);
	// b 0x82275578
	goto loc_82275578;
loc_82275564:
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82275b34
	if (!ctx.cr6.eq) goto loc_82275B34;
	// stb r10,64(r31)
	REX_STORE_U8(r31.u32 + 64, ctx.r10.u8);
loc_82275578:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822650b0
	ctx.lr = 0x82275580;
	sub_822650B0(ctx, base);
	// b 0x82275b34
	goto loc_82275B34;
loc_82275584:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822462c8
	ctx.lr = 0x82275590;
	sub_822462C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8224da00
	ctx.lr = 0x8227559C;
	sub_8224DA00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822651e0
	ctx.lr = 0x822755A4;
	sub_822651E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226ba30
	ctx.lr = 0x822755AC;
	sub_8226BA30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226b6f8
	ctx.lr = 0x822755B4;
	sub_8226B6F8(ctx, base);
	// b 0x82275488
	goto loc_82275488;
loc_822755B8:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lhz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// beq cr6,0x82275630
	if (ctx.cr6.eq) goto loc_82275630;
	// cmplwi cr6,r4,9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 9, ctx.xer);
	// beq cr6,0x82275488
	if (ctx.cr6.eq) goto loc_82275488;
	// cmplwi cr6,r4,13
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 13, ctx.xer);
	// beq cr6,0x82275488
	if (ctx.cr6.eq) goto loc_82275488;
	// cmplwi cr6,r4,27
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 27, ctx.xer);
	// beq cr6,0x82275488
	if (ctx.cr6.eq) goto loc_82275488;
	// cmplwi cr6,r4,32
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32, ctx.xer);
	// blt cr6,0x82275488
	if (ctx.cr6.lt) goto loc_82275488;
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82275624
	if (ctx.cr6.eq) goto loc_82275624;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
loc_822755FC:
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82275614
	if (ctx.cr6.lt) goto loc_82275614;
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82275624
	if (!ctx.cr6.gt) goto loc_82275624;
loc_82275614:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822755fc
	if (!ctx.cr6.eq) goto loc_822755FC;
	// b 0x82275488
	goto loc_82275488;
loc_82275624:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82275240
	ctx.lr = 0x8227562C;
	sub_82275240(ctx, base);
	// b 0x82275488
	goto loc_82275488;
loc_82275630:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822751d0
	ctx.lr = 0x82275638;
	sub_822751D0(ctx, base);
	// b 0x82275488
	goto loc_82275488;
loc_8227563C:
	// cmplwi cr6,r11,39
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 39, ctx.xer);
	// beq cr6,0x82275728
	if (ctx.cr6.eq) goto loc_82275728;
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// beq cr6,0x822756e0
	if (ctx.cr6.eq) goto loc_822756E0;
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// beq cr6,0x822756ac
	if (ctx.cr6.eq) goto loc_822756AC;
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// beq cr6,0x8227568c
	if (ctx.cr6.eq) goto loc_8227568C;
	// cmplwi cr6,r11,2006
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2006, ctx.xer);
	// bne cr6,0x82275b34
	if (!ctx.cr6.eq) goto loc_82275B34;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822462c8
	ctx.lr = 0x82275670;
	sub_822462C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8224da00
	ctx.lr = 0x8227567C;
	sub_8224DA00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// bl 0x8224da00
	ctx.lr = 0x82275688;
	sub_8224DA00(ctx, base);
	// b 0x82275488
	goto loc_82275488;
loc_8227568C:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82275100
	ctx.lr = 0x822756A8;
	sub_82275100(ctx, base);
	// b 0x82275b44
	goto loc_82275B44;
loc_822756AC:
	// lwz r29,16(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82275b3c
	if (ctx.cr6.eq) goto loc_82275B3C;
	// bl 0x822d6a10
	ctx.lr = 0x822756C8;
	sub_822D6A10(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x82274fa8
	ctx.lr = 0x822756DC;
	sub_82274FA8(ctx, base);
	// b 0x82275b44
	goto loc_82275B44;
loc_822756E0:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r9,124(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82275b3c
	if (!ctx.cr6.lt) goto loc_82275B3C;
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// rlwinm r9,r9,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x8227571c
	if (!ctx.cr6.eq) goto loc_8227571C;
	// lwz r9,120(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 120);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x82275720
	goto loc_82275720;
loc_8227571C:
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
loc_82275720:
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x82275b34
	goto loc_82275B34;
loc_82275728:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lis r10,-21829
	ctx.r10.s64 = -1430585344;
	// ori r10,r10,52445
	ctx.r10.u64 = ctx.r10.u64 | 52445;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82275b34
	if (!ctx.cr6.eq) goto loc_82275B34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226bd68
	ctx.lr = 0x82275748;
	sub_8226BD68(ctx, base);
	// b 0x82275488
	goto loc_82275488;
loc_8227574C:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// beq cr6,0x822757d4
	if (ctx.cr6.eq) goto loc_822757D4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82275774
	if (ctx.cr6.eq) goto loc_82275774;
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 140);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82275774:
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lfs f0,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r9,112(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 112);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 148);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x822757c0
	if (ctx.cr6.eq) goto loc_822757C0;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r10,r10,0,18,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_822757C0:
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 76);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// b 0x82275488
	goto loc_82275488;
loc_822757D4:
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x82275488
	goto loc_82275488;
loc_822757DC:
	// cmplwi cr6,r11,2030
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2030, ctx.xer);
	// bgt cr6,0x82275974
	if (ctx.cr6.gt) goto loc_82275974;
	// beq cr6,0x82275954
	if (ctx.cr6.eq) goto loc_82275954;
	// cmplwi cr6,r11,2016
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2016, ctx.xer);
	// beq cr6,0x82275940
	if (ctx.cr6.eq) goto loc_82275940;
	// cmplwi cr6,r11,2022
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2022, ctx.xer);
	// beq cr6,0x8227589c
	if (ctx.cr6.eq) goto loc_8227589C;
	// cmplwi cr6,r11,2026
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2026, ctx.xer);
	// beq cr6,0x8227587c
	if (ctx.cr6.eq) goto loc_8227587C;
	// cmplwi cr6,r11,2027
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2027, ctx.xer);
	// beq cr6,0x82275860
	if (ctx.cr6.eq) goto loc_82275860;
	// cmplwi cr6,r11,2029
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2029, ctx.xer);
	// bne cr6,0x82275b34
	if (!ctx.cr6.eq) goto loc_82275B34;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// beq cr6,0x82275844
	if (ctx.cr6.eq) goto loc_82275844;
	// lfs f0,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82275854
	goto loc_82275854;
loc_82275844:
	// lfs f0,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82275854:
	// divwu r11,r9,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r9.u32 / ctx.r11.u32 : 0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82275b34
	goto loc_82275B34;
loc_82275860:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82270c70
	ctx.lr = 0x82275878;
	sub_82270C70(ctx, base);
	// b 0x82275b44
	goto loc_82275B44;
loc_8227587C:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// b 0x82275b34
	goto loc_82275B34;
loc_8227589C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822758e8
	if (!ctx.cr6.lt) goto loc_822758E8;
	// lfs f0,156(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// divwu r10,r10,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// b 0x82275938
	goto loc_82275938;
loc_822758E8:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82275b34
	if (!ctx.cr6.gt) goto loc_82275B34;
	// lfs f0,156(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lfs f0,164(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// divwu r11,r11,r10
	ctx.r11.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
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
	// blt cr6,0x82275938
	if (ctx.cr6.lt) goto loc_82275938;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82275938:
	// stfs f0,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// b 0x82275b34
	goto loc_82275B34;
loc_82275940:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8226f8f8
	ctx.lr = 0x82275950;
	sub_8226F8F8(ctx, base);
	// b 0x82275480
	goto loc_82275480;
loc_82275954:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8226f138
	ctx.lr = 0x82275970;
	sub_8226F138(ctx, base);
	// b 0x82275b44
	goto loc_82275B44;
loc_82275974:
	// cmplwi cr6,r11,2031
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2031, ctx.xer);
	// beq cr6,0x82275a5c
	if (ctx.cr6.eq) goto loc_82275A5C;
	// cmplwi cr6,r11,2034
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2034, ctx.xer);
	// beq cr6,0x82275a14
	if (ctx.cr6.eq) goto loc_82275A14;
	// cmplwi cr6,r11,2035
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2035, ctx.xer);
	// beq cr6,0x822759a8
	if (ctx.cr6.eq) goto loc_822759A8;
	// cmplwi cr6,r11,2061
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2061, ctx.xer);
	// bne cr6,0x82275b34
	if (!ctx.cr6.eq) goto loc_82275B34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226ba30
	ctx.lr = 0x8227599C;
	sub_8226BA30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226b6f8
	ctx.lr = 0x822759A4;
	sub_8226B6F8(ctx, base);
	// b 0x82275b34
	goto loc_82275B34;
loc_822759A8:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r29,16(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82275b3c
	if (!ctx.cr6.eq) goto loc_82275B3C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82275b3c
	if (!ctx.cr6.gt) goto loc_82275B3C;
	// lfs f13,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82275b3c
	if (!ctx.cr6.gt) goto loc_82275B3C;
	// lfs f13,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82275b3c
	if (ctx.cr6.lt) goto loc_82275B3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x8226eed8
	ctx.lr = 0x822759F8;
	sub_8226EED8(ctx, base);
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// lfs f0,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 172, temp.u32);
	// lfs f0,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
	// b 0x82275b34
	goto loc_82275B34;
loc_82275A14:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82275b3c
	if (!ctx.cr6.eq) goto loc_82275B3C;
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 148);
	// rlwinm r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lfs f0,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f0,172(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,176(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f0,168(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// b 0x82275b34
	goto loc_82275B34;
loc_82275A5C:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82275a7c
	if (!ctx.cr6.eq) goto loc_82275A7C;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// b 0x82275afc
	goto loc_82275AFC;
loc_82275A7C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82275b04
	if (!ctx.cr6.eq) goto loc_82275B04;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lfs f0,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x82275ad4
	if (ctx.cr6.eq) goto loc_82275AD4;
	// lfs f0,156(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82275ae4
	goto loc_82275AE4;
loc_82275AD4:
	// lfs f0,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82275AE4:
	// divwu r11,r8,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r8.u32 / ctx.r11.u32 : 0);
	// lwz r8,124(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 124);
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82275afc
	if (!ctx.cr6.lt) goto loc_82275AFC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82275AFC:
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// b 0x82275b34
	goto loc_82275B34;
loc_82275B04:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82275b3c
	if (!ctx.cr6.eq) goto loc_82275B3C;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lfs f0,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// li r10,4
	ctx.r10.s64 = 4;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.f0.u32);
loc_82275B34:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82275b44
	goto loc_82275B44;
loc_82275B3C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82275B44:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82295B18) {
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
	ctx.lr = 0x82295B20;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82295bc4
	if (ctx.cr6.eq) goto loc_82295BC4;
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82295bc4
	if (ctx.cr0.eq) goto loc_82295BC4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82295bc4
	if (ctx.cr6.eq) goto loc_82295BC4;
	// li r27,0
	r27.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r27.u32);
	// stw r27,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, r27.u32);
	// stw r27,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, r27.u32);
	// bl 0x8229a710
	ctx.lr = 0x82295B60;
	sub_8229A710(ctx, base);
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822773b0
	ctx.lr = 0x82295B74;
	sub_822773B0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8229a710
	ctx.lr = 0x82295B7C;
	sub_8229A710(ctx, base);
	// lis r11,-32720
	ctx.r11.s64 = -2144337920;
	// ori r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 | 19;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82295ba0
	if (!ctx.cr6.eq) goto loc_82295BA0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822773b0
	ctx.lr = 0x82295B9C;
	sub_822773B0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82295BA0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x82295bbc
	if (ctx.cr6.lt) goto loc_82295BBC;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82276818
	ctx.lr = 0x82295BB0;
	sub_82276818(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x82295bcc
	goto loc_82295BCC;
loc_82295BBC:
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x82295bcc
	goto loc_82295BCC;
loc_82295BC4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
loc_82295BCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8229B950) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8229B958;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,40(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229B980;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8229b990
	if (!ctx.cr0.eq) goto loc_8229B990;
loc_8229B988:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8229ba4c
	goto loc_8229BA4C;
loc_8229B990:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// li r5,1440
	ctx.r5.s64 = 1440;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229B9A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// bne 0x8229b9cc
	if (!ctx.cr0.eq) goto loc_8229B9CC;
loc_8229B9B4:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229B9C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8229b988
	goto loc_8229B988;
loc_8229B9CC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// twllei r29,0
	if (r29.s32 == 0 || r29.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r11,r29
	ctx.r11.u64 = uint32_t(r29.u32 ? ctx.r11.u32 / r29.u32 : 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8229b9e8
	if (!ctx.cr6.lt) goto loc_8229B9E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8229ba00
	goto loc_8229BA00;
loc_8229B9E8:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229BA00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229BA00:
	// stw r3,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229ba24
	if (!ctx.cr6.eq) goto loc_8229BA24;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229BA20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8229b9b4
	goto loc_8229B9B4;
loc_8229BA24:
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + r29.u64;
	// stw r28,56(r31)
	REX_STORE_U32(r31.u32 + 56, r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824013a8
	ctx.lr = 0x8229BA48;
	sub_824013A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8229BA4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8229EB18) {
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
	// stw r4,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229F480) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8229f320
	ctx.lr = 0x8229F4A0;
	sub_8229F320(ctx, base);
	// lwz r4,32(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8229f4b4
	if (!ctx.cr6.eq) goto loc_8229F4B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8229f4c0
	goto loc_8229F4C0;
loc_8229F4B4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8229f3d8
	ctx.lr = 0x8229F4C0;
	sub_8229F3D8(ctx, base);
loc_8229F4C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229FD78) {
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
	ctx.lr = 0x8229FD80;
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
	// ble 0x8229fdd4
	if (!ctx.cr0.gt) goto loc_8229FDD4;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r3
	r29.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8229FDA8:
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
	// bl 0x8229fb08
	ctx.lr = 0x8229FDCC;
	sub_8229FB08(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bgt cr6,0x8229fda8
	if (ctx.cr6.gt) goto loc_8229FDA8;
loc_8229FDD4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822A1528) {
	REX_FUNC_PROLOGUE();
	// lwz r11,416(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 416);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 228);
	// stw r4,416(r3)
	REX_STORE_U32(ctx.r3.u32 + 416, ctx.r4.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x82210958
	sub_82210958(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822A2130) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822A2138;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,2956(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 2956);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822a2164
	if (ctx.cr6.eq) goto loc_822A2164;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822a94b8
	ctx.lr = 0x822A2158;
	sub_822A94B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822A2160;
	sub_822C80A8(ctx, base);
	// stw r29,2956(r31)
	REX_STORE_U32(r31.u32 + 2956, r29.u32);
loc_822A2164:
	// lwz r3,144(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a2188
	if (ctx.cr6.eq) goto loc_822A2188;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A2184;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,144(r31)
	REX_STORE_U32(r31.u32 + 144, r29.u32);
loc_822A2188:
	// lwz r3,156(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a21ac
	if (ctx.cr6.eq) goto loc_822A21AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A21A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,156(r31)
	REX_STORE_U32(r31.u32 + 156, r29.u32);
loc_822A21AC:
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a21d0
	if (ctx.cr6.eq) goto loc_822A21D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A21CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,148(r31)
	REX_STORE_U32(r31.u32 + 148, r29.u32);
loc_822A21D0:
	// lwz r3,160(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a21f4
	if (ctx.cr6.eq) goto loc_822A21F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A21F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,160(r31)
	REX_STORE_U32(r31.u32 + 160, r29.u32);
loc_822A21F4:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r4,r31,168
	ctx.r4.s64 = r31.s64 + 168;
	// lwz r3,31464(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 31464);
	// bl 0x822a0ea8
	ctx.lr = 0x822A2204;
	sub_822A0EA8(ctx, base);
	// lwz r3,164(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a2218
	if (ctx.cr6.eq) goto loc_822A2218;
	// bl 0x82216cc8
	ctx.lr = 0x822A2214;
	sub_82216CC8(ctx, base);
	// stw r29,164(r31)
	REX_STORE_U32(r31.u32 + 164, r29.u32);
loc_822A2218:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a2234
	if (ctx.cr6.eq) goto loc_822A2234;
	// bl 0x822152c0
	ctx.lr = 0x822A2228;
	sub_822152C0(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x8221a848
	ctx.lr = 0x822A2230;
	sub_8221A848(ctx, base);
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
loc_822A2234:
	// lwz r4,216(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822a2254
	if (ctx.cr6.eq) goto loc_822A2254;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r5,212(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r3,31492(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// bl 0x822a98f0
	ctx.lr = 0x822A2250;
	sub_822A98F0(ctx, base);
	// stw r29,216(r31)
	REX_STORE_U32(r31.u32 + 216, r29.u32);
loc_822A2254:
	// addi r30,r31,192
	r30.s64 = r31.s64 + 192;
	// stw r29,184(r31)
	REX_STORE_U32(r31.u32 + 184, r29.u32);
	// li r31,2
	r31.s64 = 2;
loc_822A2260:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a2284
	if (ctx.cr6.eq) goto loc_822A2284;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A2280;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
loc_822A2284:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x822a2260
	if (!ctx.cr0.eq) goto loc_822A2260;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822A98E0) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x823cd118
	sub_823CD118(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822A9958) {
	REX_FUNC_PROLOGUE();
	// lwz r10,312(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// addi r11,r3,312
	ctx.r11.s64 = ctx.r3.s64 + 312;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,316(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,320(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r11,324(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 324);
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A9BF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1428(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1428);
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f1,1152(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 1152, temp.u32);
	// ori r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 6;
	// stw r11,1428(r3)
	REX_STORE_U32(ctx.r3.u32 + 1428, ctx.r11.u32);
	// lwz r11,31464(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 31464);
	// stb r10,1537(r11)
	REX_STORE_U8(ctx.r11.u32 + 1537, ctx.r10.u8);
	// stb r10,1538(r11)
	REX_STORE_U8(ctx.r11.u32 + 1538, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A9E68) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,80
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(80));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f1,1656(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1656);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822AA1E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,80
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(80));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfs f1,1656(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 1656, temp.u32);
	// b 0x822a9e78
	sub_822A9E78(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822AA798) {
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
	// mulli r11,r4,80
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(80));
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,1616
	ctx.r4.s64 = ctx.r11.s64 + 1616;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stfs f0,1616(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 1616, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1620(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 1620, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1624(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 1624, temp.u32);
	// bl 0x821f6bf0
	ctx.lr = 0x822AA7D8;
	sub_821F6BF0(ctx, base);
	// lwz r10,1428(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1428);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// stw r10,1428(r31)
	REX_STORE_U32(r31.u32 + 1428, ctx.r10.u32);
	// lwz r3,31464(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 31464);
	// bl 0x8229a710
	ctx.lr = 0x822AA7F0;
	sub_8229A710(ctx, base);
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

DEFINE_REX_FUNC(sub_822AC2A0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822ACA98) {
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
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822acb3c
	if (!ctx.cr6.lt) goto loc_822ACB3C;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// lwz r8,31516(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 31516);
loc_822ACACC:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,0(r8)
	r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r30,0(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,-4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r31
	r30.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// lwzx r9,r9,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lfs f0,188(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822acb08
	if (ctx.cr6.gt) goto loc_822ACB08;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822ACB08:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822acb14
	if (ctx.cr0.eq) goto loc_822ACB14;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_822ACB14:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r4,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stwx r9,r31,r3
	REX_STORE_U32(r31.u32 + ctx.r3.u32, ctx.r9.u32);
	// blt cr6,0x822acacc
	if (ctx.cr6.lt) goto loc_822ACACC;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
loc_822ACB3C:
	// bne cr6,0x822acb58
	if (!ctx.cr6.eq) goto loc_822ACB58;
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
loc_822ACB58:
	// bl 0x822ac440
	ctx.lr = 0x822ACB5C;
	sub_822AC440(ctx, base);
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

DEFINE_REX_FUNC(sub_822B10A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// ori r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 16384;
	// lwz r11,536(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 536);
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// b 0x822b10f0
	goto loc_822B10F0;
loc_822B10D4:
	// lwz r10,540(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 540);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x822b10ec
	if (!ctx.cr6.eq) goto loc_822B10EC;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_822B10EC:
	// lwz r11,532(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 532);
loc_822B10F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b10d4
	if (!ctx.cr6.eq) goto loc_822B10D4;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,528(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b1118
	if (ctx.cr6.eq) goto loc_822B1118;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x822b111c
	goto loc_822B111C;
loc_822B1118:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822B111C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,468(r11)
	REX_STORE_U8(ctx.r11.u32 + 468, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B40E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// b 0x822b413c
	goto loc_822B413C;
loc_822B40F4:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f0,124(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f13,124(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x822b4120
	if (ctx.cr6.lt) goto loc_822B4120;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822B4120:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822b4148
	if (ctx.cr0.eq) goto loc_822B4148;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// srawi r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	// stwx r10,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
loc_822B413C:
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x822b40f4
	if (ctx.cr6.lt) goto loc_822B40F4;
loc_822B4148:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B8538) {
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r11,257(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 257);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822b859c
	if (ctx.cr0.eq) goto loc_822B859C;
	// bl 0x822a99c0
	ctx.lr = 0x822B8568;
	sub_822A99C0(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,68(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// lwzx r3,r10,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// lbz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x822b8380
	ctx.lr = 0x822B859C;
	sub_822B8380(ctx, base);
loc_822B859C:
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

DEFINE_REX_FUNC(sub_822B95CC) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B9618) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,23604
	ctx.r11.s64 = ctx.r11.s64 + 23604;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x822c5aa0
	sub_822C5AA0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822B9990) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822c5ac0
	ctx.lr = 0x822B99AC;
	sub_822C5AC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822b99c0
	if (!ctx.cr0.eq) goto loc_822B99C0;
	// lbz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822b9a28
	if (ctx.cr0.eq) goto loc_822B9A28;
loc_822B99C0:
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lhz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 80);
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r11,376
	ctx.r7.s64 = ctx.r11.s64 + 376;
	// rotlwi r9,r11,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,31492(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 31492);
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// srd r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r11.u8 & 0x7F));
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stfsx f0,r7,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// lfs f0,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6020(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 6020, temp.u32);
	// lfs f0,44(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6024(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 6024, temp.u32);
	// lfs f0,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6028(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 6028, temp.u32);
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// stb r6,72(r31)
	REX_STORE_U8(r31.u32 + 72, ctx.r6.u8);
loc_822B9A28:
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

DEFINE_REX_FUNC(sub_822BC808) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822BC810;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lfs f13,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f0,1996(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
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
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// beq cr6,0x822bc884
	if (ctx.cr6.eq) goto loc_822BC884;
	// addi r11,r8,48
	ctx.r11.s64 = ctx.r8.s64 + 48;
	// b 0x822bc8a4
	goto loc_822BC8A4;
loc_822BC884:
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bc898
	if (ctx.cr6.eq) goto loc_822BC898;
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
	// b 0x822bc8a0
	goto loc_822BC8A0;
loc_822BC898:
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r11,r11,-3168
	ctx.r11.s64 = ctx.r11.s64 + -3168;
loc_822BC8A0:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
loc_822BC8A4:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f11,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822bbef0
	ctx.lr = 0x822BC8D4;
	sub_822BBEF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,0(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bctrl 
	ctx.lr = 0x822BC91C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bc964
	if (ctx.cr0.eq) goto loc_822BC964;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f11,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f10,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f11,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f10,12(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// b 0x822bc968
	goto loc_822BC968;
loc_822BC964:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822BC968:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822C6068) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x822a9c78
	ctx.lr = 0x822C6090;
	sub_822A9C78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,28(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822C60D0;
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

DEFINE_REX_FUNC(sub_822C6E80) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x822aadc8
	ctx.lr = 0x822C6E9C;
	sub_822AADC8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x822c6eb8
	if (ctx.cr0.eq) goto loc_822C6EB8;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x822c6ecc
	goto loc_822C6ECC;
loc_822C6EB8:
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lwz r9,52(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r11,31464(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 31464);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r4,r11,336
	ctx.r4.s64 = ctx.r11.s64 + 336;
loc_822C6ECC:
	// bctrl 
	ctx.lr = 0x822C6ED0;
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

DEFINE_REX_FUNC(sub_822C8970) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// stb r11,68(r31)
	REX_STORE_U8(r31.u32 + 68, ctx.r11.u8);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// bl 0x822095c0
	ctx.lr = 0x822C89E4;
	sub_822095C0(ctx, base);
	// stw r3,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_822C9BC8) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r30,r3,80
	r30.s64 = ctx.r3.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C9BF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lbz r31,76(r31)
	r31.u64 = REX_LOAD_U8(r31.u32 + 76);
	// bctrl 
	ctx.lr = 0x822C9C10;
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

DEFINE_REX_FUNC(sub_822CB5F0) {
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
	// bl 0x822cb390
	ctx.lr = 0x822CB60C;
	sub_822CB390(ctx, base);
	// lbz r11,293(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 293);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822cb65c
	if (ctx.cr0.eq) goto loc_822CB65C;
	// lwz r3,168(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 168);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cb63c
	if (ctx.cr6.eq) goto loc_822CB63C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CB638;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,168(r31)
	REX_STORE_U32(r31.u32 + 168, r30.u32);
loc_822CB63C:
	// lwz r3,164(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cb65c
	if (ctx.cr6.eq) goto loc_822CB65C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CB658;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,164(r31)
	REX_STORE_U32(r31.u32 + 164, r30.u32);
loc_822CB65C:
	// stw r30,180(r31)
	REX_STORE_U32(r31.u32 + 180, r30.u32);
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// stb r30,292(r31)
	REX_STORE_U8(r31.u32 + 292, r30.u8);
	// bl 0x822c8908
	ctx.lr = 0x822CB66C;
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

DEFINE_REX_FUNC(sub_822CD700) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822CD708;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,1080(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 1080);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cd720
	if (ctx.cr6.eq) goto loc_822CD720;
	// bl 0x822ce220
	ctx.lr = 0x822CD720;
	sub_822CE220(ctx, base);
loc_822CD720:
	// lwz r30,1080(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 1080);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822cd744
	if (ctx.cr6.eq) goto loc_822CD744;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ce390
	ctx.lr = 0x822CD738;
	sub_822CE390(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822CD740;
	sub_822C80A8(ctx, base);
	// stw r29,1080(r31)
	REX_STORE_U32(r31.u32 + 1080, r29.u32);
loc_822CD744:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cd764
	if (ctx.cr6.eq) goto loc_822CD764;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CD760;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
loc_822CD764:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cd788
	if (ctx.cr6.eq) goto loc_822CD788;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CD780;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stb r29,1084(r31)
	REX_STORE_U8(r31.u32 + 1084, r29.u8);
loc_822CD788:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822CF850) {
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
	ctx.lr = 0x822CF858;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822ce528
	ctx.lr = 0x822CF864;
	sub_822CE528(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,26268
	ctx.r11.s64 = ctx.r11.s64 + 26268;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// bl 0x822c88c0
	ctx.lr = 0x822CF8A0;
	sub_822C88C0(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// stb r30,176(r31)
	REX_STORE_U8(r31.u32 + 176, r30.u8);
	// addi r11,r11,-5592
	ctx.r11.s64 = ctx.r11.s64 + -5592;
	// lis r9,-32211
	ctx.r9.s64 = -2110980096;
	// lis r8,-32211
	ctx.r8.s64 = -2110980096;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// addi r10,r10,-5592
	ctx.r10.s64 = ctx.r10.s64 + -5592;
	// addi r9,r9,-4048
	ctx.r9.s64 = ctx.r9.s64 + -4048;
	// addi r11,r8,-4648
	ctx.r11.s64 = ctx.r8.s64 + -4648;
	// stw r10,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// lis r7,-32211
	ctx.r7.s64 = -2110980096;
	// stw r9,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r9.u32);
	// lis r6,-32211
	ctx.r6.s64 = -2110980096;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// lis r5,-32211
	ctx.r5.s64 = -2110980096;
	// addi r10,r7,-3664
	ctx.r10.s64 = ctx.r7.s64 + -3664;
	// addi r9,r6,-3328
	ctx.r9.s64 = ctx.r6.s64 + -3328;
	// addi r11,r5,-3176
	ctx.r11.s64 = ctx.r5.s64 + -3176;
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// lis r3,-32211
	ctx.r3.s64 = -2110980096;
	// stw r9,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r9.u32);
	// lis r4,-32211
	ctx.r4.s64 = -2110980096;
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// lis r30,-32211
	r30.s64 = -2110980096;
	// addi r9,r3,-2840
	ctx.r9.s64 = ctx.r3.s64 + -2840;
	// addi r10,r4,-3024
	ctx.r10.s64 = ctx.r4.s64 + -3024;
	// addi r11,r30,-2688
	ctx.r11.s64 = r30.s64 + -2688;
	// stw r9,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r9.u32);
	// lis r29,-32211
	r29.s64 = -2110980096;
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// lis r28,-32211
	r28.s64 = -2110980096;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// lis r27,-32211
	r27.s64 = -2110980096;
	// addi r10,r29,-2528
	ctx.r10.s64 = r29.s64 + -2528;
	// addi r9,r28,-2288
	ctx.r9.s64 = r28.s64 + -2288;
	// addi r11,r27,-2248
	ctx.r11.s64 = r27.s64 + -2248;
	// stw r10,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822D28E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822D28E8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x822d2688
	ctx.lr = 0x822D28F8;
	sub_822D2688(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822d2908
	if (!ctx.cr0.eq) goto loc_822D2908;
loc_822D2900:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d2948
	goto loc_822D2948;
loc_822D2908:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d2688
	ctx.lr = 0x822D2910;
	sub_822D2688(ctx, base);
	// lhz r29,2(r3)
	r29.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d2688
	ctx.lr = 0x822D291C;
	sub_822D2688(ctx, base);
	// lhz r11,14(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 14);
	// mr. r10,r29
	ctx.r10.u64 = r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d2900
	if (ctx.cr0.eq) goto loc_822D2900;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x822d2934
	if (!ctx.cr6.eq) goto loc_822D2934;
	// li r11,2
	ctx.r11.s64 = 2;
loc_822D2934:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x822d2940
	if (!ctx.cr6.eq) goto loc_822D2940;
	// li r11,4
	ctx.r11.s64 = 4;
loc_822D2940:
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r3,r11,r30
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
loc_822D2948:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822D4430) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,26388
	ctx.r3.s64 = ctx.r11.s64 + 26388;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D49E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r11,r11,-2560
	ctx.r11.s64 = ctx.r11.s64 + -2560;
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fmul f5,f0,f1
	ctx.f5.f64 = ctx.f0.f64 * ctx.f1.f64;
	// lfd f13,40(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// lfd f12,48(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// lfd f10,64(r11)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// lfd f11,72(r11)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// lfd f9,96(r11)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 96);
	// lfd f8,88(r11)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + 88);
	// lfd f7,56(r11)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// lfd f6,80(r11)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r11.u32 + 80);
	// lfs f0,108(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fctid f5,f5
	ctx.f5.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f5.f64));
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// fnmsub f13,f13,f5,f1
	ctx.f13.f64 = -std::fma(ctx.f13.f64, ctx.f5.f64, -ctx.f1.f64);
	// fctiwz f4,f5
	ctx.f4.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f4.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// addic. r10,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r10.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fnmsub f13,f12,f5,f13
	ctx.f13.f64 = -std::fma(ctx.f12.f64, ctx.f5.f64, -ctx.f13.f64);
	// fmul f12,f13,f13
	ctx.f12.f64 = ctx.f13.f64 * ctx.f13.f64;
	// fmadd f11,f11,f12,f10
	ctx.f11.f64 = std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f10.f64);
	// fmadd f10,f9,f12,f8
	ctx.f10.f64 = std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f8.f64);
	// fmadd f11,f11,f12,f7
	ctx.f11.f64 = std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f7.f64);
	// fmadd f12,f10,f12,f6
	ctx.f12.f64 = std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f6.f64);
	// fmul f13,f11,f13
	ctx.f13.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fsub f12,f12,f13
	ctx.f12.f64 = ctx.f12.f64 - ctx.f13.f64;
	// fdiv f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 / ctx.f12.f64;
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// beq 0x822d4aa0
	if (ctx.cr0.eq) goto loc_822D4AA0;
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r8,-16(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + -16);
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r9,-16(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + -16);
	// andi. r8,r8,32783
	ctx.r8.u64 = ctx.r8.u64 & 32783;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// rlwinm r9,r9,28,21,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x7FF;
	// addi r9,r9,-1022
	ctx.r9.s64 = ctx.r9.s64 + -1022;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,1022
	ctx.r10.s64 = ctx.r10.s64 + 1022;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// sth r10,-16(r1)
	REX_STORE_U16(ctx.r1.u32 + -16, ctx.r10.u16);
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
loc_822D4AA0:
	// lfd f13,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// fsub f11,f1,f13
	ctx.f11.f64 = ctx.f1.f64 - ctx.f13.f64;
	// lfd f13,8(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lfd f12,16(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// fsub f10,f13,f1
	ctx.f10.f64 = ctx.f13.f64 - ctx.f1.f64;
	// lfs f13,104(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f11,f12,f0
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fsel f1,f10,f13,f0
	ctx.f1.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D82D8) {
	REX_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x822d8058
	sub_822D8058(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D8548) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x822d84a0
	sub_822D84A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savevmx_16) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__savevmx_110) {
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

DEFINE_REX_FUNC(__restvmx_19) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_92) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_822DCB18) {
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
	// lis r31,-32161
	r31.s64 = -2107703296;
	// lwz r3,-11324(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -11324);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822dcb44
	if (!ctx.cr6.eq) goto loc_822DCB44;
	// li r3,512
	ctx.r3.s64 = 512;
	// b 0x822dcb50
	goto loc_822DCB50;
loc_822DCB44:
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bge cr6,0x822dcb54
	if (!ctx.cr6.lt) goto loc_822DCB54;
	// li r3,20
	ctx.r3.s64 = 20;
loc_822DCB50:
	// stw r3,-11324(r31)
	REX_STORE_U32(r31.u32 + -11324, ctx.r3.u32);
loc_822DCB54:
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822dba28
	ctx.lr = 0x822DCB5C;
	sub_822DBA28(ctx, base);
	// lis r30,-32161
	r30.s64 = -2107703296;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,-11328(r30)
	REX_STORE_U32(r30.u32 + -11328, ctx.r3.u32);
	// bne 0x822dcb94
	if (!ctx.cr0.eq) goto loc_822DCB94;
	// li r11,20
	ctx.r11.s64 = 20;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r11,-11324(r31)
	REX_STORE_U32(r31.u32 + -11324, ctx.r11.u32);
	// bl 0x822dba28
	ctx.lr = 0x822DCB80;
	sub_822DBA28(ctx, base);
	// stw r3,-11328(r30)
	REX_STORE_U32(r30.u32 + -11328, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822dcb94
	if (!ctx.cr0.eq) goto loc_822DCB94;
	// li r3,26
	ctx.r3.s64 = 26;
	// b 0x822dcc24
	goto loc_822DCC24;
loc_822DCB94:
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r8,r11,-1136
	ctx.r8.s64 = ctx.r11.s64 + -1136;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// b 0x822dcbb4
	goto loc_822DCBB4;
loc_822DCBB0:
	// lwz r3,-11328(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -11328);
loc_822DCBB4:
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822dcbb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DCBB0;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r8,16
	ctx.r9.s64 = ctx.r8.s64 + 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// addi r8,r10,-11584
	ctx.r8.s64 = ctx.r10.s64 + -11584;
loc_822DCBDC:
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r7,r7,72
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x822dcc0c
	if (ctx.cr6.eq) goto loc_822DCC0C;
	// cmpwi cr6,r10,-2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -2, ctx.xer);
	// beq cr6,0x822dcc0c
	if (ctx.cr6.eq) goto loc_822DCC0C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822dcc14
	if (!ctx.cr6.eq) goto loc_822DCC14;
loc_822DCC0C:
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_822DCC14:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// bdnz 0x822dcbdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DCBDC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822DCC24:
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

DEFINE_REX_FUNC(sub_822E6140) {
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
	ctx.lr = 0x822E6148;
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r3.u32);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x822e6178
	if (!ctx.cr6.eq) goto loc_822E6178;
	// bl 0x822db6c0
	ctx.lr = 0x822E6164;
	sub_822DB6C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822e6250
	goto loc_822E6250;
loc_822E6178:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt cr6,0x822e6190
	if (ctx.cr6.lt) goto loc_822E6190;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r11,-11596(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11596);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e61a8
	if (ctx.cr6.lt) goto loc_822E61A8;
loc_822E6190:
	// bl 0x822db6c0
	ctx.lr = 0x822E6194;
	sub_822DB6C0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822E61A0;
	sub_822D6910(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822e6250
	goto loc_822E6250;
loc_822E61A8:
	// srawi r11,r27,5
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1F) != 0);
	ctx.r11.s64 = r27.s32 >> 5;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r10,-11584
	r29.s64 = ctx.r10.s64 + -11584;
	// clrlwi r11,r27,27
	ctx.r11.u64 = r27.u32 & 0x1F;
	// mulli r30,r11,72
	r30.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r11,r28,r29
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e6190
	if (ctx.cr0.eq) goto loc_822E6190;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e5be0
	ctx.lr = 0x822E61DC;
	sub_822E5BE0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r28,r29
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e622c
	if (ctx.cr0.eq) goto loc_822E622C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e5b20
	ctx.lr = 0x822E61FC;
	sub_822E5B20(ctx, base);
	// bl 0x823ce2b8
	ctx.lr = 0x822E6200;
	sub_823CE2B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822e6214
	if (!ctx.cr0.eq) goto loc_822E6214;
	// bl 0x822098c8
	ctx.lr = 0x822E620C;
	sub_822098C8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x822e6218
	goto loc_822E6218;
loc_822E6214:
	// li r30,0
	r30.s64 = 0;
loc_822E6218:
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x822e6240
	if (ctx.cr6.eq) goto loc_822E6240;
	// bl 0x822db6f8
	ctx.lr = 0x822E6228;
	sub_822DB6F8(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
loc_822E622C:
	// bl 0x822db6c0
	ctx.lr = 0x822E6230;
	sub_822DB6C0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
loc_822E6240:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = r31.s64 + 144;
	// bl 0x822e6278
	ctx.lr = 0x822E624C;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_822E6278(ctx, base);
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
loc_822E6250:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822EB340) {
	REX_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32791
	ctx.r4.u64 = ctx.r4.u64 | 32791;
	// b 0x823cd118
	sub_823CD118(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822EB908) {
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
	ctx.lr = 0x822EB910;
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EB934;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r8,76(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822EB948;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,52(r29)
	REX_STORE_U32(r29.u32 + 52, r30.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r29,672
	r28.s64 = r29.s64 + 672;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f2ae8
	ctx.lr = 0x822EB960;
	sub_822F2AE8(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r27,0
	r27.s64 = 0;
	// bne cr6,0x822eb9d8
	if (!ctx.cr6.eq) goto loc_822EB9D8;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r29,592(r11)
	REX_STORE_U32(ctx.r11.u32 + 592, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r27,88(r31)
	REX_STORE_U32(r31.u32 + 88, r27.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EB990;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822eb9c8
	if (ctx.cr6.eq) goto loc_822EB9C8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EB9B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,0
	ctx.r9.s64 = ctx.r3.s64 + 0;
	// lwz r8,88(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 & ctx.r8.u64;
	// stw r4,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r4.u32);
loc_822EB9C8:
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x822f2b78
	ctx.lr = 0x822EB9D4;
	sub_822F2B78(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
loc_822EB9D8:
	// addi r11,r31,100
	ctx.r11.s64 = r31.s64 + 100;
	// stw r27,96(r31)
	REX_STORE_U32(r31.u32 + 96, r27.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
	// stw r27,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r27.u32);
	// stw r27,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r27.u32);
	// stw r27,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r27.u32);
	// bne cr6,0x822ebac0
	if (!ctx.cr6.eq) goto loc_822EBAC0;
	// lwz r11,660(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 660);
	// addi r9,r31,96
	ctx.r9.s64 = r31.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822f2ba8
	ctx.lr = 0x822EBA24;
	sub_822F2BA8(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ebac0
	if (!ctx.cr6.eq) goto loc_822EBAC0;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// ble cr6,0x822ebac0
	if (!ctx.cr6.gt) goto loc_822EBAC0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f2850
	ctx.lr = 0x822EBA44;
	sub_822F2850(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ebac0
	if (!ctx.cr6.eq) goto loc_822EBAC0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EBA68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,676(r29)
	REX_STORE_U32(r29.u32 + 676, r27.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r27,664(r29)
	REX_STORE_U32(r29.u32 + 664, r27.u32);
	// stw r27,668(r29)
	REX_STORE_U32(r29.u32 + 668, r27.u32);
	// stw r27,0(r28)
	REX_STORE_U32(r28.u32 + 0, r27.u32);
	// bl 0x822f2ae8
	ctx.lr = 0x822EBA80;
	sub_822F2AE8(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ebac0
	if (!ctx.cr6.eq) goto loc_822EBAC0;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r9,r31,96
	ctx.r9.s64 = r31.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,63
	ctx.r7.s64 = 63;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,592(r11)
	REX_STORE_U32(ctx.r11.u32 + 592, r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,660(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 660);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x822f2ba8
	ctx.lr = 0x822EBABC;
	sub_822F2BA8(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
loc_822EBAC0:
	// sth r27,80(r31)
	REX_STORE_U16(r31.u32 + 80, r27.u16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ebbbc
	if (!ctx.cr6.eq) goto loc_822EBBBC;
	// lwz r11,124(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 124);
	// addi r30,r29,124
	r30.s64 = r29.s64 + 124;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EBAE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r9,124(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 124);
	// lwz r8,40(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822EBB00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 100);
	// bl 0x822e8d40
	ctx.lr = 0x822EBB0C;
	sub_822E8D40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x822e8d48
	ctx.lr = 0x822EBB18;
	sub_822E8D48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 108);
	// bl 0x822e8ea8
	ctx.lr = 0x822EBB24;
	sub_822E8EA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r7,108(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r6,96(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 96);
	// mullw r4,r7,r6
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// bl 0x822e8d50
	ctx.lr = 0x822EBB38;
	sub_822E8D50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,124(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 124);
	// lwz r11,44(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EBB50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e8d58
	ctx.lr = 0x822EBB5C;
	sub_822E8D58(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e8eb8
	ctx.lr = 0x822EBB6C;
	sub_822E8EB8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e8eb0
	ctx.lr = 0x822EBB78;
	sub_822E8EB0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x822f2800
	ctx.lr = 0x822EBB84;
	sub_822F2800(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ebbbc
	if (!ctx.cr6.eq) goto loc_822EBBBC;
	// lhz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ebba4
	if (!ctx.cr6.eq) goto loc_822EBBA4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
loc_822EBBA4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ebbbc
	if (!ctx.cr6.eq) goto loc_822EBBBC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x822f2828
	ctx.lr = 0x822EBBB8;
	sub_822F2828(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
loc_822EBBBC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ebbec
	if (ctx.cr6.eq) goto loc_822EBBEC;
	// cmplwi cr6,r3,11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 11, ctx.xer);
	// ble cr6,0x822ebbe0
	if (!ctx.cr6.gt) goto loc_822EBBE0;
	// cmplwi cr6,r3,14
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 14, ctx.xer);
	// bgt cr6,0x822ebbe0
	if (ctx.cr6.gt) goto loc_822EBBE0;
	// lis r11,-16371
	ctx.r11.s64 = -1072889856;
	// ori r11,r11,10416
	ctx.r11.u64 = ctx.r11.u64 | 10416;
	// b 0x822ebbf0
	goto loc_822EBBF0;
loc_822EBBE0:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// b 0x822ebbf0
	goto loc_822EBBF0;
loc_822EBBEC:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_822EBBF0:
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x822ebc10
	goto loc_822EBC10;
loc_822EBC10:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822F8FE8) {
	REX_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
loc_822F8FF4:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822f9020
	if (ctx.cr6.eq) goto loc_822F9020;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,127
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 127, ctx.xer);
	// blt cr6,0x822f8ff4
	if (ctx.cr6.lt) goto loc_822F8FF4;
loc_822F9020:
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// blt cr6,0x822f9034
	if (ctx.cr6.lt) goto loc_822F9034;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,181
	ctx.r3.u64 = ctx.r3.u64 | 181;
	// blr 
	return;
loc_822F9034:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FB3C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822FB3C8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,20(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r31,r3,20
	r31.s64 = ctx.r3.s64 + 20;
	// li r29,0
	r29.s64 = 0;
	// addi r4,r30,68
	ctx.r4.s64 = r30.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822fb338
	ctx.lr = 0x822FB3E4;
	sub_822FB338(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fb408
	if (ctx.cr6.eq) goto loc_822FB408;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,64(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 64);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822f94e8
	ctx.lr = 0x822FB400;
	sub_822F94E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_822FB408:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822FF4C0) {
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
	ctx.lr = 0x822FF4C8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r27,0(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 0);
	// beq cr6,0x822ff4f0
	if (ctx.cr6.eq) goto loc_822FF4F0;
	// bl 0x823143d0
	ctx.lr = 0x822FF4EC;
	sub_823143D0(ctx, base);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_822FF4F0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x822ff56c
	if (ctx.cr6.eq) goto loc_822FF56C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822ff56c
	if (ctx.cr6.eq) goto loc_822FF56C;
	// lhz r11,34(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ff56c
	if (ctx.cr6.eq) goto loc_822FF56C;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_822FF510:
	// mulli r11,r30,1776
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(1776));
	// add. r31,r11,r28
	r31.u64 = ctx.r11.u64 + r28.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822ff554
	if (ctx.cr0.eq) goto loc_822FF554;
	// lwz r11,424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ff540
	if (ctx.cr6.eq) goto loc_822FF540;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ff540
	if (ctx.cr6.eq) goto loc_822FF540;
	// bl 0x823143d0
	ctx.lr = 0x822FF538;
	sub_823143D0(ctx, base);
	// lwz r11,424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 424);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
loc_822FF540:
	// lwz r3,424(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ff554
	if (ctx.cr6.eq) goto loc_822FF554;
	// bl 0x823143d0
	ctx.lr = 0x822FF550;
	sub_823143D0(ctx, base);
	// stw r29,424(r31)
	REX_STORE_U32(r31.u32 + 424, r29.u32);
loc_822FF554:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// lhz r10,34(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822ff510
	if (ctx.cr6.lt) goto loc_822FF510;
loc_822FF56C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82303D60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
loc_82303D6C:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x82303e50
	if (ctx.cr6.lt) goto loc_82303E50;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// subf r9,r3,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r3.u64;
loc_82303D8C:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82303db8
	if (!ctx.cr6.gt) goto loc_82303DB8;
	// lwz r31,-12(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + -12);
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lwzx r30,r9,r11
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,-12(r10)
	REX_STORE_U32(ctx.r10.u32 + -12, r30.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stwx r31,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, r31.u32);
loc_82303DB8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82303de4
	if (!ctx.cr6.gt) goto loc_82303DE4;
	// lwzx r31,r9,r11
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r30,-4(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stwx r30,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, r30.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r31,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, r31.u32);
loc_82303DE4:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82303e10
	if (!ctx.cr6.gt) goto loc_82303E10;
	// lwz r31,-4(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r30,0(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, r30.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r31.u32);
loc_82303E10:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82303e3c
	if (!ctx.cr6.gt) goto loc_82303E3C;
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r30,4(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r30,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
loc_82303E3C:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82303d8c
	if (ctx.cr6.lt) goto loc_82303D8C;
loc_82303E50:
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82303eac
	if (!ctx.cr6.lt) goto loc_82303EAC;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r7,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r7.u64;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// subf r9,r3,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r3.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82303E74:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82303ea0
	if (!ctx.cr6.gt) goto loc_82303EA0;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stwx r7,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
loc_82303EA0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82303e74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82303E74;
loc_82303EAC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82303d6c
	if (!ctx.cr6.eq) goto loc_82303D6C;
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8230C1B8) {
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
	ctx.lr = 0x8230C1C0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// lwz r31,28(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32688
	ctx.r10.s64 = -2142240768;
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// li r26,15
	r26.s64 = 15;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// ori r27,r10,22
	r27.u64 = ctx.r10.u64 | 22;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// li r23,24
	r23.s64 = 24;
	// stb r28,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// li r22,16
	r22.s64 = 16;
	// addi r25,r11,23496
	r25.s64 = ctx.r11.s64 + 23496;
loc_8230C204:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x8230c4bc
	if (ctx.cr6.eq) goto loc_8230C4BC;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x8230c418
	if (ctx.cr6.eq) goto loc_8230C418;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x8230c204
	if (!ctx.cr6.eq) goto loc_8230C204;
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lwz r6,88(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// lwz r5,92(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// mr r30,r28
	r30.u64 = r28.u64;
	// ld r4,104(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 104);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// addi r8,r25,16
	ctx.r8.s64 = r25.s64 + 16;
	// stw r6,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// rotlwi r29,r4,0
	r29.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r5,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r5.u32);
	// stw r3,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r3.u32);
loc_8230C260:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8230c280
	if (!ctx.cr0.eq) goto loc_8230C280;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8230c260
	if (!ctx.cr6.eq) goto loc_8230C260;
loc_8230C280:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8230c3dc
	if (!ctx.cr6.eq) goto loc_8230C3DC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x822f9928
	ctx.lr = 0x8230C29C;
	sub_822F9928(ctx, base);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r27.u32, ctx.xer);
	// beq cr6,0x8230c2fc
	if (ctx.cr6.eq) goto loc_8230C2FC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230c50c
	if (ctx.cr6.lt) goto loc_8230C50C;
loc_8230C2AC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230c50c
	if (ctx.cr6.lt) goto loc_8230C50C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8230c2d8
	if (!ctx.cr6.eq) goto loc_8230C2D8;
	// lhz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 44);
	// lhz r9,152(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 152);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8230c2f8
	if (ctx.cr6.eq) goto loc_8230C2F8;
loc_8230C2D8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x822f9990
	ctx.lr = 0x8230C2EC;
	sub_822F9990(ctx, base);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r27.u32, ctx.xer);
	// bne cr6,0x8230c2ac
	if (!ctx.cr6.eq) goto loc_8230C2AC;
	// b 0x8230c2fc
	goto loc_8230C2FC;
loc_8230C2F8:
	// lbz r30,0(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
loc_8230C2FC:
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// bl 0x822f99f8
	ctx.lr = 0x8230C308;
	sub_822F99F8(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230c350
	if (!ctx.cr6.eq) goto loc_8230C350;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r29,-24
	r30.s64 = r29.s64 + -24;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230C330;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230c50c
	if (ctx.cr6.lt) goto loc_8230C50C;
	// ld r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// stw r26,80(r31)
	REX_STORE_U32(r31.u32 + 80, r26.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// b 0x8230c204
	goto loc_8230C204;
loc_8230C350:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230c3a8
	if (!ctx.cr6.eq) goto loc_8230C3A8;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f9490
	ctx.lr = 0x8230C374;
	sub_822F9490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230c50c
	if (ctx.cr6.lt) goto loc_8230C50C;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r28.u32);
	// stw r28,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r28.u32);
	// stw r28,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r28.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r8,72(r9)
	REX_STORE_U32(ctx.r9.u32 + 72, ctx.r8.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8230C3A8:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,72(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8230bf58
	ctx.lr = 0x8230C3BC;
	sub_8230BF58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230c50c
	if (ctx.cr6.lt) goto loc_8230C50C;
	// lhz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 152);
	// stw r26,80(r31)
	REX_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,152(r31)
	REX_STORE_U16(r31.u32 + 152, ctx.r10.u16);
	// b 0x8230c204
	goto loc_8230C204;
loc_8230C3DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r29,-24
	r30.s64 = r29.s64 + -24;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230C3F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230c50c
	if (ctx.cr6.lt) goto loc_8230C50C;
	// ld r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// stw r26,80(r31)
	REX_STORE_U32(r31.u32 + 80, r26.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// b 0x8230c204
	goto loc_8230C204;
loc_8230C418:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// stw r23,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230C434;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230c50c
	if (ctx.cr6.lt) goto loc_8230C50C;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82307c58
	ctx.lr = 0x8230C454;
	sub_82307C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230c50c
	if (ctx.cr6.lt) goto loc_8230C50C;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82307a88
	ctx.lr = 0x8230C474;
	sub_82307A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230c50c
	if (ctx.cr6.lt) goto loc_8230C50C;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// ld r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// addi r9,r31,84
	ctx.r9.s64 = r31.s64 + 84;
	// cmpldi cr6,r11,24
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 24, ctx.xer);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// std r11,104(r31)
	REX_STORE_U64(r31.u32 + 104, ctx.r11.u64);
	// stw r8,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r8.u32);
	// stw r7,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r7.u32);
	// stw r6,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r6.u32);
	// stw r5,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r5.u32);
	// blt cr6,0x8230c504
	if (ctx.cr6.lt) goto loc_8230C504;
	// stw r22,80(r31)
	REX_STORE_U32(r31.u32 + 80, r22.u32);
	// b 0x8230c204
	goto loc_8230C204;
loc_8230C4BC:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 24);
	// ld r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 8);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x8230c4f8
	if (ctx.cr6.eq) goto loc_8230C4F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230C4F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230c50c
	if (ctx.cr6.lt) goto loc_8230C50C;
loc_8230C4F8:
	// std r30,8(r31)
	REX_STORE_U64(r31.u32 + 8, r30.u64);
	// stw r26,80(r31)
	REX_STORE_U32(r31.u32 + 80, r26.u32);
	// b 0x8230c204
	goto loc_8230C204;
loc_8230C504:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
loc_8230C50C:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r30,r11,1
	r30.u64 = ctx.r11.u64 | 1;
loc_8230C514:
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// bne cr6,0x8230c54c
	if (!ctx.cr6.eq) goto loc_8230C54C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// ld r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 16);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230C534;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230c514
	if (ctx.cr6.lt) goto loc_8230C514;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
loc_8230C54C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82315A58) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// stw r11,48(r5)
	REX_STORE_U32(ctx.r5.u32 + 48, ctx.r11.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r9,40(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82315A88:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82315aa8
	if (!ctx.cr6.eq) goto loc_82315AA8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82315a88
	if (ctx.cr6.lt) goto loc_82315A88;
	// blr 
	return;
loc_82315AA8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,48(r5)
	REX_STORE_U32(ctx.r5.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823177F8) {
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
	ctx.lr = 0x82317800;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,348(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82317970
	if (ctx.cr6.eq) goto loc_82317970;
	// lwz r10,244(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82317870
	if (!ctx.cr6.gt) goto loc_82317870;
loc_82317824:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82317864
	if (!ctx.cr6.gt) goto loc_82317864;
	// rlwinm r28,r27,2,0,29
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,0
	r30.s64 = 0;
loc_82317838:
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r10,r28,r11
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// lwzx r3,r10,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// bl 0x822d5870
	ctx.lr = 0x82317850;
	sub_822D5870(ctx, base);
	// lwz r10,244(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 244);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82317838
	if (ctx.cr6.lt) goto loc_82317838;
loc_82317864:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82317824
	if (ctx.cr6.lt) goto loc_82317824;
loc_82317870:
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82317970
	if (!ctx.cr6.gt) goto loc_82317970;
	// li r29,0
	r29.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82317888:
	// lwz r9,340(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 340);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,344(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 344);
	// add r11,r26,r11
	ctx.r11.u64 = r26.u64 + ctx.r11.u64;
	// lwzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r29.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8231795c
	if (!ctx.cr6.gt) goto loc_8231795C;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// slw r27,r3,r25
	r27.u64 = r25.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r25.u8 & 0x3F));
loc_823178AC:
	// lwz r8,0(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// mullw r8,r9,r27
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r27.s32);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r5,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r5.s64 = temp.s64;
	// ble cr6,0x82317944
	if (!ctx.cr6.gt) goto loc_82317944;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
loc_823178DC:
	// lwz r10,344(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 344);
	// slw r8,r3,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rotlw r7,r3,r11
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, ctx.r11.u8 & 0x1F);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r24,0(r9)
	r24.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mullw r8,r8,r24
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r24.s32);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82317918
	if (!ctx.cr6.lt) goto loc_82317918;
loc_82317904:
	// lwzu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82317904
	if (ctx.cr6.lt) goto loc_82317904;
loc_82317918:
	// lwz r9,348(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 348);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r6,116
	ctx.r6.s64 = ctx.r6.s64 + 116;
	// lwzx r7,r29,r9
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + ctx.r9.u32);
	// lwzx r10,r7,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stbx r8,r10,r30
	REX_STORE_U8(ctx.r10.u32 + r30.u32, ctx.r8.u8);
	// lwz r10,244(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 244);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823178dc
	if (ctx.cr6.lt) goto loc_823178DC;
loc_82317944:
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 340);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwzx r9,r11,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823178ac
	if (ctx.cr6.lt) goto loc_823178AC;
loc_8231795C:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,116
	r26.s64 = r26.s64 + 116;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82317888
	if (ctx.cr6.lt) goto loc_82317888;
loc_82317970:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82323888) {
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
	ctx.lr = 0x82323890;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// mr r30,r26
	r30.u64 = r26.u64;
	// lwz r11,60(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x823238c4
	if (ctx.cr6.gt) goto loc_823238C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r26,150(r31)
	REX_STORE_U16(r31.u32 + 150, r26.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_823238C4:
	// lhz r11,580(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 580);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8232390c
	if (!ctx.cr6.eq) goto loc_8232390C;
	// lwz r11,584(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 584);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,320(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 320);
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// sth r26,150(r31)
	REX_STORE_U16(r31.u32 + 150, r26.u16);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mulli r11,r8,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(1776));
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r26,180(r31)
	REX_STORE_U8(r31.u32 + 180, r26.u8);
	// bl 0x82316ff0
	ctx.lr = 0x823238FC;
	sub_82316FF0(ctx, base);
	// stfs f1,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_8232390C:
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 150);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82323944
	if (!ctx.cr6.eq) goto loc_82323944;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8232392C;
	sub_82319780(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82323a58
	if (ctx.cr6.lt) goto loc_82323A58;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// sth r26,150(r31)
	REX_STORE_U16(r31.u32 + 150, r26.u16);
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
loc_82323944:
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 150);
	// lhz r10,580(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 580);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82323a58
	if (!ctx.cr6.lt) goto loc_82323A58;
	// addi r27,r31,224
	r27.s64 = r31.s64 + 224;
	// li r25,1
	r25.s64 = 1;
loc_82323964:
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 150);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,584(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 584);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// lwz r10,320(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 320);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lhzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r11,r5,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8246e538
	ctx.lr = 0x82323998;
	sub_8246E538(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82323a58
	if (ctx.cr6.lt) goto loc_82323A58;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82319780
	ctx.lr = 0x823239B8;
	sub_82319780(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82323a58
	if (ctx.cr6.lt) goto loc_82323A58;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823239dc
	if (!ctx.cr6.eq) goto loc_823239DC;
	// stb r26,180(r29)
	REX_STORE_U8(r29.u32 + 180, r26.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82323a20
	goto loc_82323A20;
loc_823239DC:
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x823239f4
	if (!ctx.cr6.eq) goto loc_823239F4;
	// stb r25,180(r29)
	REX_STORE_U8(r29.u32 + 180, r25.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82323a20
	goto loc_82323A20;
loc_823239F4:
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82319780
	ctx.lr = 0x82323A04;
	sub_82319780(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82323a58
	if (ctx.cr6.lt) goto loc_82323A58;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// stb r3,180(r29)
	REX_STORE_U8(r29.u32 + 180, ctx.r3.u8);
loc_82323A20:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82316ff0
	ctx.lr = 0x82323A28;
	sub_82316FF0(ctx, base);
	// stfs f1,196(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r29.u32 + 196, temp.u32);
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 150);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,150(r31)
	REX_STORE_U16(r31.u32 + 150, ctx.r9.u16);
	// lhz r8,580(r28)
	ctx.r8.u64 = REX_LOAD_U16(r28.u32 + 580);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82323964
	if (ctx.cr6.lt) goto loc_82323964;
loc_82323A58:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8232A498) {
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
	ctx.lr = 0x8232A4A0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232a598
	if (ctx.cr6.eq) goto loc_8232A598;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8232A4C4:
	// lwz r8,320(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mulli r7,r30,1776
	ctx.r7.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(1776));
	// lhz r11,210(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 210);
	// lhz r9,34(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 34);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// rlwinm r7,r30,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r5,56(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 56);
	// lhz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lwzx r4,r7,r28
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + r28.u32);
	// sth r27,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, r27.u16);
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// lwz r3,356(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 356);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lwzx r10,r7,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8232a584
	if (!ctx.cr6.lt) goto loc_8232A584;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// blt cr6,0x8232a52c
	if (ctx.cr6.lt) goto loc_8232A52C;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
loc_8232A52C:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8232a5e0
	if (ctx.cr6.gt) goto loc_8232A5E0;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// cmpwi cr6,r11,61
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 61, ctx.xer);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8232a580
	if (ctx.cr6.eq) goto loc_8232A580;
	// cmpwi cr6,r11,78
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 78, ctx.xer);
	// beq cr6,0x8232a578
	if (ctx.cr6.eq) goto loc_8232A578;
	// cmpwi cr6,r11,94
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 94, ctx.xer);
	// beq cr6,0x8232a570
	if (ctx.cr6.eq) goto loc_8232A570;
	// bl 0x8232a1c8
	ctx.lr = 0x8232A56C;
	sub_8232A1C8(ctx, base);
	// b 0x8232a584
	goto loc_8232A584;
loc_8232A570:
	// bl 0x8232a2a0
	ctx.lr = 0x8232A574;
	sub_8232A2A0(ctx, base);
	// b 0x8232a584
	goto loc_8232A584;
loc_8232A578:
	// bl 0x8232a350
	ctx.lr = 0x8232A57C;
	sub_8232A350(ctx, base);
	// b 0x8232a584
	goto loc_8232A584;
loc_8232A580:
	// bl 0x8232a400
	ctx.lr = 0x8232A584;
	sub_8232A400(ctx, base);
loc_8232A584:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r30,r11
	r30.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8232a4c4
	if (ctx.cr6.lt) goto loc_8232A4C4;
loc_8232A598:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// lhz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U16(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232a5c4
	if (ctx.cr6.eq) goto loc_8232A5C4;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8232A5B0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8232a5b0
	if (ctx.cr6.lt) goto loc_8232A5B0;
loc_8232A5C4:
	// lhz r10,210(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 210);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r11,210(r31)
	REX_STORE_U16(r31.u32 + 210, ctx.r11.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
loc_8232A5E0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823319D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823319E0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// stw r4,21940(r3)
	REX_STORE_U32(ctx.r3.u32 + 21940, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bne cr6,0x82331a68
	if (!ctx.cr6.eq) goto loc_82331A68;
	// lwz r11,21944(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21944);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// lwz r3,21944(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 21944);
	// lwz r9,21980(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 21980);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,21948(r31)
	REX_STORE_U32(r31.u32 + 21948, ctx.r10.u32);
	// bl 0x822d5870
	ctx.lr = 0x82331A20;
	sub_822D5870(ctx, base);
	// lwz r8,21980(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 21980);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,21956(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 21956);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x82331A34;
	sub_822D5870(ctx, base);
	// lwz r7,21980(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 21980);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,21972(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 21972);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x82331A48;
	sub_822D5870(ctx, base);
	// lwz r6,21972(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 21972);
	// stw r29,21976(r31)
	REX_STORE_U32(r31.u32 + 21976, r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,21960(r31)
	REX_STORE_U32(r31.u32 + 21960, r29.u32);
	// stw r29,21964(r31)
	REX_STORE_U32(r31.u32 + 21964, r29.u32);
	// stw r6,21968(r31)
	REX_STORE_U32(r31.u32 + 21968, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_82331A68:
	// lwz r10,188(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 188);
	// lwz r11,21948(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21948);
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82331a88
	if (ctx.cr6.lt) goto loc_82331A88;
loc_82331A7C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_82331A88:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,21944(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21944);
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,-4(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82331aac
	if (ctx.cr6.gt) goto loc_82331AAC;
	// lwz r11,21980(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21980);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82331AAC:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,21980(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21980);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82331c00
	if (ctx.cr6.lt) goto loc_82331C00;
	// lwz r30,21948(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 21948);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// ble cr6,0x82331b34
	if (!ctx.cr6.gt) goto loc_82331B34;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// ble cr6,0x82331b0c
	if (!ctx.cr6.gt) goto loc_82331B0C;
	// lwz r8,21944(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 21944);
	// li r11,8
	ctx.r11.s64 = 8;
	// rotlwi r29,r30,0
	r29.u64 = __builtin_rotateleft32(r30.u32, 0);
loc_82331AE8:
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r28,r11,r8
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// lwz r4,-4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r4,r28
	ctx.r4.u64 = r28.u64 - ctx.r4.u64;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// blt cr6,0x82331ae8
	if (ctx.cr6.lt) goto loc_82331AE8;
loc_82331B0C:
	// lwz r10,21944(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21944);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r30,-2
	ctx.r8.s64 = r30.s64 + -2;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// divwu r11,r9,r8
	ctx.r11.u64 = uint32_t(ctx.r8.u32 ? ctx.r9.u32 / ctx.r8.u32 : 0);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r10,-4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x82331bd0
	goto loc_82331BD0;
loc_82331B34:
	// bne cr6,0x82331b4c
	if (!ctx.cr6.eq) goto loc_82331B4C;
	// lwz r11,21944(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21944);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// b 0x82331bd0
	goto loc_82331BD0;
loc_82331B4C:
	// lwz r11,21984(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21984);
	// lwz r10,21992(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21992);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82331b9c
	if (!ctx.cr6.gt) goto loc_82331B9C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x82331b9c
	if (!ctx.cr6.gt) goto loc_82331B9C;
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 92);
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,21944(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 21944);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// srawi r30,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	r30.s64 = ctx.r9.s32 >> 4;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(r30.s32) * int64_t(ctx.r10.s32);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r4,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r4.u32 / ctx.r11.u32 : 0);
	// lwz r10,-4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// b 0x82331bc8
	goto loc_82331BC8;
loc_82331B9C:
	// lwz r9,21988(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 21988);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x82331bd0
	if (!ctx.cr6.gt) goto loc_82331BD0;
	// lwz r10,21944(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21944);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,92(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 92);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 4;
	// divwu r11,r11,r9
	ctx.r11.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// lwz r10,-4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
loc_82331BC8:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_82331BD0:
	// lwz r11,21980(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21980);
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82331c00
	if (!ctx.cr6.gt) goto loc_82331C00;
	// lwz r10,21948(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21948);
	// lwz r9,21944(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 21944);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r8,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x82331a7c
	if (!ctx.cr6.gt) goto loc_82331A7C;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82331C00:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,21972(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 21972);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r11,21948(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21948);
	// lwz r10,21944(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21944);
	// beq cr6,0x82331c4c
	if (ctx.cr6.eq) goto loc_82331C4C;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r5,21956(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 21956);
	// lwz r11,21948(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21948);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u32);
	// b 0x82331c68
	goto loc_82331C68;
loc_82331C4C:
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r5,21948(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 21948);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,21956(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 21956);
	// stwx r6,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.r6.u32);
loc_82331C68:
	// lwz r10,21948(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21948);
	// lwz r11,21984(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21984);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,21948(r31)
	REX_STORE_U32(r31.u32 + 21948, ctx.r10.u32);
	// stw r9,21984(r31)
	REX_STORE_U32(r31.u32 + 21984, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82347DA8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82347e88
	if (ctx.cr6.eq) goto loc_82347E88;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r10,r4,-112
	ctx.r10.s64 = ctx.r4.s64 + -112;
	// beq cr6,0x82347e08
	if (ctx.cr6.eq) goto loc_82347E08;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r9,-29416
	ctx.r8.s64 = ctx.r9.s64 + -29416;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lwzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// addi r8,r9,-29360
	ctx.r8.s64 = ctx.r9.s64 + -29360;
	// stw r7,3428(r11)
	REX_STORE_U32(ctx.r11.u32 + 3428, ctx.r7.u32);
loc_82347DE0:
	// lwzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r10,r8,-28976
	ctx.r10.s64 = ctx.r8.s64 + -28976;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,3424(r11)
	REX_STORE_U32(ctx.r11.u32 + 3424, ctx.r7.u32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r5,-4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + -4);
	// stw r5,14840(r11)
	REX_STORE_U32(ctx.r11.u32 + 14840, ctx.r5.u32);
	// b 0x82347e68
	goto loc_82347E68;
loc_82347E08:
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lwz r8,3428(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 3428);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r7,-29416
	ctx.r5.s64 = ctx.r7.s64 + -29416;
	// lwzx r4,r9,r5
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82347e28
	if (ctx.cr6.eq) goto loc_82347E28;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82347E28:
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lwz r10,3424(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3424);
	// addi r7,r8,-29360
	ctx.r7.s64 = ctx.r8.s64 + -29360;
loc_82347E34:
	// lwzx r5,r9,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82347e44
	if (ctx.cr6.eq) goto loc_82347E44;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82347E44:
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lwz r7,14840(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 14840);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r8,-28976
	ctx.r10.s64 = ctx.r8.s64 + -28976;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r4,-4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + -4);
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82347e68
	if (ctx.cr6.eq) goto loc_82347E68;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82347E68:
	// lwz r10,14836(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14836);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,14836(r11)
	REX_STORE_U32(ctx.r11.u32 + 14836, ctx.r10.u32);
	// blr 
	return;
loc_82347E88:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82347eb0
	if (ctx.cr6.eq) goto loc_82347EB0;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r9,-29472
	ctx.r8.s64 = ctx.r9.s64 + -29472;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lwzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// addi r8,r9,-29444
	ctx.r8.s64 = ctx.r9.s64 + -29444;
	// stw r7,3428(r11)
	REX_STORE_U32(ctx.r11.u32 + 3428, ctx.r7.u32);
	// b 0x82347de0
	goto loc_82347DE0;
loc_82347EB0:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r8,3428(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 3428);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,-29472
	ctx.r7.s64 = ctx.r10.s64 + -29472;
	// lwzx r5,r9,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82347ed0
	if (ctx.cr6.eq) goto loc_82347ED0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82347ED0:
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lwz r10,3424(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3424);
	// addi r7,r8,-29444
	ctx.r7.s64 = ctx.r8.s64 + -29444;
	// b 0x82347e34
	goto loc_82347E34;
}

DEFINE_REX_FUNC(sub_82352938) {
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
	ctx.lr = 0x82352940;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r17,364(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r18,356(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// lwz r11,396(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// mr r16,r7
	r16.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// stw r17,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r17.u32);
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// stw r18,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r18.u32);
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// stw r17,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r17.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823529b4
	if (ctx.cr6.eq) goto loc_823529B4;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,10,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3;
	// addi r10,r11,735
	ctx.r10.s64 = ctx.r11.s64 + 735;
	// addi r9,r11,738
	ctx.r9.s64 = ctx.r11.s64 + 738;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r3
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// lwzx r5,r7,r3
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// stw r5,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// b 0x823529c4
	goto loc_823529C4;
loc_823529B4:
	// lwz r11,2916(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2916);
	// lwz r10,2928(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2928);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_823529C4:
	// li r21,0
	r21.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r29,r21
	r29.u64 = r21.u64;
	// lis r20,2
	r20.s64 = 131072;
	// addi r23,r11,-22200
	r23.s64 = ctx.r11.s64 + -22200;
	// addi r27,r10,-22080
	r27.s64 = ctx.r10.s64 + -22080;
	// addi r25,r9,26304
	r25.s64 = ctx.r9.s64 + 26304;
loc_823529E8:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82352a10
	if (ctx.cr6.lt) goto loc_82352A10;
	// li r6,119
	ctx.r6.s64 = 119;
	// lwz r7,300(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 300);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,2096(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 2096);
	// bl 0x823a82c0
	ctx.lr = 0x82352A0C;
	sub_823A82C0(ctx, base);
	// b 0x82352a38
	goto loc_82352A38;
loc_82352A10:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x82352a2c
	if (!ctx.cr6.eq) goto loc_82352A2C;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r6,7
	ctx.r6.s64 = 7;
	// bl 0x8234e9d0
	ctx.lr = 0x82352A28;
	sub_8234E9D0(ctx, base);
	// b 0x82352a38
	goto loc_82352A38;
loc_82352A2C:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r6,11
	ctx.r6.s64 = 11;
	// bl 0x8234fef8
	ctx.lr = 0x82352A38;
	sub_8234FEF8(ctx, base);
loc_82352A38:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82352e30
	if (!ctx.cr6.eq) goto loc_82352E30;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8239a100
	ctx.lr = 0x82352A68;
	sub_8239A100(ctx, base);
	// lwz r9,15536(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lhz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// beq cr6,0x82352aa8
	if (ctx.cr6.eq) goto loc_82352AA8;
	// lwz r11,1764(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1764);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r7.u16);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r5,1764(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1764);
	// lwz r4,300(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 300);
	// mullw r3,r4,r7
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// stw r3,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// b 0x82352af8
	goto loc_82352AF8;
loc_82352AA8:
	// lwz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 300);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lwz r7,1764(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1764);
	// rlwinm r8,r11,2,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFC;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwzx r5,r8,r23
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + r23.u32);
	// mullw r4,r5,r6
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// add r3,r4,r20
	ctx.r3.u64 = ctx.r4.u64 + r20.u64;
	// srawi r9,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 18;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sth r9,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r9.u16);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r7,300(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 300);
	// mullw r6,r9,r7
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sth r5,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r5.u16);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,1764(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1764);
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
loc_82352AF8:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lwz r7,204(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82399c38
	ctx.lr = 0x82352B24;
	sub_82399C38(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82352e30
	if (!ctx.cr6.eq) goto loc_82352E30;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(r29.u32, 1, ctx.xer);
	// li r11,8
	ctx.r11.s64 = 8;
	// bne cr6,0x82352b40
	if (!ctx.cr6.eq) goto loc_82352B40;
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
loc_82352B40:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// addi r26,r26,24
	r26.s64 = r26.s64 + 24;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(r29.u32, 4, ctx.xer);
	// blt cr6,0x823529e8
	if (ctx.cr6.lt) goto loc_823529E8;
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// addi r28,r10,26560
	r28.s64 = ctx.r10.s64 + 26560;
	// addi r27,r9,-17984
	r27.s64 = ctx.r9.s64 + -17984;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// blt cr6,0x82352b90
	if (ctx.cr6.lt) goto loc_82352B90;
	// li r6,119
	ctx.r6.s64 = 119;
	// lwz r7,304(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 304);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,2100(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 2100);
	// bl 0x823a82c0
	ctx.lr = 0x82352B8C;
	sub_823A82C0(ctx, base);
	// b 0x82352bb8
	goto loc_82352BB8;
loc_82352B90:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x82352bac
	if (!ctx.cr6.eq) goto loc_82352BAC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x8234e9d0
	ctx.lr = 0x82352BA8;
	sub_8234E9D0(ctx, base);
	// b 0x82352bb8
	goto loc_82352BB8;
loc_82352BAC:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x8234fef8
	ctx.lr = 0x82352BB8;
	sub_8234FEF8(ctx, base);
loc_82352BB8:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82352e30
	if (!ctx.cr6.eq) goto loc_82352E30;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239a100
	ctx.lr = 0x82352BE0;
	sub_8239A100(ctx, base);
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82352c20
	if (ctx.cr6.eq) goto loc_82352C20;
	// lwz r9,1764(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1764);
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sth r6,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r6.u16);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r3,304(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 304);
	// lwz r4,1764(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1764);
	// mullw r11,r6,r3
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x82352c74
	goto loc_82352C74;
loc_82352C20:
	// lwz r11,304(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 304);
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r8,r11,2,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFC;
	// lwz r7,1764(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1764);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lwzx r5,r8,r23
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + r23.u32);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mullw r4,r5,r6
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// add r3,r4,r20
	ctx.r3.u64 = ctx.r4.u64 + r20.u64;
	// srawi r11,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 18;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sth r9,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r9.u16);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r7,304(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 304);
	// mullw r6,r9,r7
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sth r5,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r5.u16);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,1764(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1764);
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
loc_82352C74:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 208);
	// li r8,4
	ctx.r8.s64 = 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82352cb0
	if (ctx.cr6.eq) goto loc_82352CB0;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82399c38
	ctx.lr = 0x82352CAC;
	sub_82399C38(ctx, base);
	// b 0x82352cc0
	goto loc_82352CC0;
loc_82352CB0:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// bl 0x82399c38
	ctx.lr = 0x82352CC0;
	sub_82399C38(ctx, base);
loc_82352CC0:
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82352e30
	if (!ctx.cr6.eq) goto loc_82352E30;
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// addi r29,r26,24
	r29.s64 = r26.s64 + 24;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// blt cr6,0x82352cfc
	if (ctx.cr6.lt) goto loc_82352CFC;
	// li r6,119
	ctx.r6.s64 = 119;
	// lwz r7,304(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 304);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,2100(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 2100);
	// bl 0x823a82c0
	ctx.lr = 0x82352CF8;
	sub_823A82C0(ctx, base);
	// b 0x82352d24
	goto loc_82352D24;
loc_82352CFC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x82352d18
	if (!ctx.cr6.eq) goto loc_82352D18;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x8234e9d0
	ctx.lr = 0x82352D14;
	sub_8234E9D0(ctx, base);
	// b 0x82352d24
	goto loc_82352D24;
loc_82352D18:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x8234fef8
	ctx.lr = 0x82352D24;
	sub_8234FEF8(ctx, base);
loc_82352D24:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82352e30
	if (!ctx.cr6.eq) goto loc_82352E30;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239a100
	ctx.lr = 0x82352D4C;
	sub_8239A100(ctx, base);
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82352d8c
	if (ctx.cr6.eq) goto loc_82352D8C;
	// lwz r9,1764(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1764);
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sth r6,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r6.u16);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r3,1764(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1764);
	// lwz r4,304(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 304);
	// mullw r11,r6,r4
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82352de0
	goto loc_82352DE0;
loc_82352D8C:
	// lwz r11,304(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 304);
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r8,r11,2,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFC;
	// lwz r7,1764(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1764);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lwzx r5,r8,r23
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + r23.u32);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mullw r4,r5,r6
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// add r3,r4,r20
	ctx.r3.u64 = ctx.r4.u64 + r20.u64;
	// srawi r11,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 18;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sth r9,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r9.u16);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r7,304(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 304);
	// mullw r6,r9,r7
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sth r5,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r5.u16);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,1764(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1764);
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
loc_82352DE0:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 208);
	// li r8,5
	ctx.r8.s64 = 5;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82352e20
	if (ctx.cr6.eq) goto loc_82352E20;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// bl 0x82399c38
	ctx.lr = 0x82352E18;
	sub_82399C38(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822d4ea8
	return;
loc_82352E20:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// bl 0x82399c38
	ctx.lr = 0x82352E30;
	sub_82399C38(ctx, base);
loc_82352E30:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822d4ea8
	return;
}

DEFINE_REX_FUNC(sub_823642B8) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e64
	ctx.lr = 0x823642C0;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r20,0
	r20.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r23,1
	r23.s64 = 1;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
loc_823642E4:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne cr6,0x8236432c
	if (!ctx.cr6.eq) goto loc_8236432C;
	// lhz r8,-4(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + -4);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8236446c
	if (ctx.cr6.eq) goto loc_8236446C;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r20,r24
	r20.u64 = r24.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,14(r10)
	REX_STORE_U16(ctx.r10.u32 + 14, ctx.r7.u16);
	// sth r7,12(r10)
	REX_STORE_U16(ctx.r10.u32 + 12, ctx.r7.u16);
	// sth r7,10(r10)
	REX_STORE_U16(ctx.r10.u32 + 10, ctx.r7.u16);
	// sth r7,8(r10)
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r7.u16);
	// sth r7,6(r10)
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r7.u16);
	// sth r7,4(r10)
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r7.u16);
	// sth r7,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r7.u16);
	// sth r7,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// b 0x8236446c
	goto loc_8236446C;
loc_8236432C:
	// lhz r6,2(r9)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// mr r20,r24
	r20.u64 = r24.u64;
	// lhz r5,6(r9)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + 6);
	// lhz r8,-2(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + -2);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhz r7,10(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 10);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhz r31,-4(r9)
	r31.u64 = REX_LOAD_U16(ctx.r9.u32 + -4);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lhz r27,0(r9)
	r27.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// add r30,r5,r6
	r30.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lhz r26,8(r9)
	r26.u64 = REX_LOAD_U16(ctx.r9.u32 + 8);
	// add r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lhz r25,4(r9)
	r25.u64 = REX_LOAD_U16(ctx.r9.u32 + 4);
	// mulli r5,r5,799
	ctx.r5.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(799));
	// mulli r29,r30,2408
	r29.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(2408));
	// mulli r7,r7,3406
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(3406));
	// mulli r4,r4,565
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(565));
	// mulli r6,r6,4017
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(4017));
	// mulli r8,r8,2276
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(2276));
	// subf r30,r5,r29
	r30.u64 = r29.u64 - ctx.r5.u64;
	// subf r28,r7,r4
	r28.u64 = ctx.r4.u64 - ctx.r7.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subf r29,r6,r29
	r29.u64 = r29.u64 - ctx.r6.u64;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// subf r7,r30,r8
	ctx.r7.u64 = ctx.r8.u64 - r30.u64;
	// subf r4,r29,r28
	ctx.r4.u64 = r28.u64 - r29.u64;
	// extsh r5,r26
	ctx.r5.s64 = r26.s16;
	// extsh r6,r27
	ctx.r6.s64 = r27.s16;
	// rlwinm r31,r31,11,0,20
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 11) & 0xFFFFF800;
	// add r26,r4,r7
	r26.u64 = ctx.r4.u64 + ctx.r7.u64;
	// subf r22,r4,r7
	r22.u64 = ctx.r7.u64 - ctx.r4.u64;
	// add r27,r5,r6
	r27.u64 = ctx.r5.u64 + ctx.r6.u64;
	// extsh r4,r25
	ctx.r4.s64 = r25.s16;
	// addi r7,r31,128
	ctx.r7.s64 = r31.s64 + 128;
	// mulli r31,r27,1108
	r31.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(1108));
	// mulli r6,r6,1568
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1568));
	// rlwinm r4,r4,11,0,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 11) & 0xFFFFF800;
	// mulli r21,r5,3784
	r21.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(3784));
	// add r5,r6,r31
	ctx.r5.u64 = ctx.r6.u64 + r31.u64;
	// mulli r26,r26,181
	r26.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(181));
	// add r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 + ctx.r4.u64;
	// mulli r25,r22,181
	r25.s64 = static_cast<int64_t>(r22.u64 * static_cast<uint64_t>(181));
	// subf r27,r4,r7
	r27.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r21,r31
	ctx.r7.u64 = r31.u64 - r21.u64;
	// addi r4,r26,128
	ctx.r4.s64 = r26.s64 + 128;
	// subf r26,r5,r6
	r26.u64 = ctx.r6.u64 - ctx.r5.u64;
	// addi r31,r25,128
	r31.s64 = r25.s64 + 128;
	// add r8,r30,r8
	ctx.r8.u64 = r30.u64 + ctx.r8.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r5,r27,r7
	ctx.r5.u64 = r27.u64 + ctx.r7.u64;
	// subf r30,r7,r27
	r30.u64 = r27.u64 - ctx.r7.u64;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// add r7,r28,r29
	ctx.r7.u64 = r28.u64 + r29.u64;
	// srawi r31,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	r31.s64 = r31.s32 >> 8;
	// add r29,r8,r6
	r29.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r28,r4,r5
	r28.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r27,r30,r31
	r27.u64 = r30.u64 + r31.u64;
	// add r25,r26,r7
	r25.u64 = r26.u64 + ctx.r7.u64;
	// srawi r29,r29,8
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xFF) != 0);
	r29.s64 = r29.s32 >> 8;
	// srawi r28,r28,8
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0xFF) != 0);
	r28.s64 = r28.s32 >> 8;
	// subf r7,r7,r26
	ctx.r7.u64 = r26.u64 - ctx.r7.u64;
	// sth r29,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, r29.u16);
	// srawi r27,r27,8
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xFF) != 0);
	r27.s64 = r27.s32 >> 8;
	// sth r28,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, r28.u16);
	// subf r31,r31,r30
	r31.u64 = r30.u64 - r31.u64;
	// srawi r30,r25,8
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0xFF) != 0);
	r30.s64 = r25.s32 >> 8;
	// sth r27,4(r10)
	REX_STORE_U16(ctx.r10.u32 + 4, r27.u16);
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r30,6(r10)
	REX_STORE_U16(ctx.r10.u32 + 6, r30.u16);
	// subf r4,r8,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r8.u64;
	// sth r7,8(r10)
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r7.u16);
	// srawi r31,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	r31.s64 = r31.s32 >> 8;
	// srawi r8,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 8;
	// srawi r7,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 8;
	// sth r31,10(r10)
	REX_STORE_U16(ctx.r10.u32 + 10, r31.u16);
	// sth r8,12(r10)
	REX_STORE_U16(ctx.r10.u32 + 12, ctx.r8.u16);
	// sth r7,14(r10)
	REX_STORE_U16(ctx.r10.u32 + 14, ctx.r7.u16);
loc_8236446C:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// rotlwi r23,r23,1
	r23.u64 = __builtin_rotateleft32(r23.u32, 1);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x823642e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823642E4;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// subf r26,r11,r10
	r26.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// subf r25,r11,r9
	r25.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r10,r3,r8
	ctx.r10.u64 = ctx.r3.u64 + ctx.r8.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r24,r11,r8
	r24.u64 = ctx.r8.u64 - ctx.r11.u64;
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// subf r23,r11,r9
	r23.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64;
	// subf r9,r11,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r22,r11,r7
	r22.u64 = ctx.r7.u64 - ctx.r11.u64;
loc_823644C0:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x82364508
	if (!ctx.cr6.eq) goto loc_82364508;
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82364668
	if (ctx.cr6.eq) goto loc_82364668;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// srawi r7,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 6;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sthx r6,r22,r11
	REX_STORE_U16(r22.u32 + ctx.r11.u32, ctx.r6.u16);
	// sthx r6,r9,r11
	REX_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u16);
	// sthx r6,r23,r11
	REX_STORE_U16(r23.u32 + ctx.r11.u32, ctx.r6.u16);
	// sthx r6,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u16);
	// sthx r6,r24,r11
	REX_STORE_U16(r24.u32 + ctx.r11.u32, ctx.r6.u16);
	// sthx r6,r25,r11
	REX_STORE_U16(r25.u32 + ctx.r11.u32, ctx.r6.u16);
	// sthx r6,r26,r11
	REX_STORE_U16(r26.u32 + ctx.r11.u32, ctx.r6.u16);
	// sth r6,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// b 0x82364668
	goto loc_82364668;
loc_82364508:
	// lhzx r8,r26,r11
	ctx.r8.u64 = REX_LOAD_U16(r26.u32 + ctx.r11.u32);
	// lhzx r6,r22,r11
	ctx.r6.u64 = REX_LOAD_U16(r22.u32 + ctx.r11.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhzx r5,r23,r11
	ctx.r5.u64 = REX_LOAD_U16(r23.u32 + ctx.r11.u32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhzx r3,r24,r11
	ctx.r3.u64 = REX_LOAD_U16(r24.u32 + ctx.r11.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// lhzx r30,r25,r11
	r30.u64 = REX_LOAD_U16(r25.u32 + ctx.r11.u32);
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lhzx r31,r9,r11
	r31.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// lhz r29,0(r11)
	r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mulli r8,r8,565
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(565));
	// lhzx r21,r10,r11
	r21.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// mulli r28,r6,3406
	r28.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(3406));
	// mulli r7,r7,2276
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(2276));
	// mulli r6,r3,2408
	ctx.r6.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(2408));
	// subf r28,r28,r8
	r28.u64 = ctx.r8.u64 - r28.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r8,r6,4
	ctx.r8.s64 = ctx.r6.s64 + 4;
	// mulli r6,r4,799
	ctx.r6.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(799));
	// mulli r5,r5,4017
	ctx.r5.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(4017));
	// extsh r3,r30
	ctx.r3.s64 = r30.s16;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// subf r4,r6,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r6.u64;
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// add r30,r31,r3
	r30.u64 = r31.u64 + ctx.r3.u64;
	// srawi r6,r28,3
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7) != 0);
	ctx.r6.s64 = r28.s32 >> 3;
	// srawi r5,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 3;
	// srawi r4,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 3;
	// mulli r8,r30,1108
	ctx.r8.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(1108));
	// extsh r30,r29
	r30.s64 = r29.s16;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// mulli r31,r31,3784
	r31.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(3784));
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// mulli r3,r3,1568
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(1568));
	// subf r28,r5,r7
	r28.u64 = ctx.r7.u64 - ctx.r5.u64;
	// subf r27,r4,r6
	r27.u64 = ctx.r6.u64 - ctx.r4.u64;
	// extsh r21,r21
	r21.s64 = r21.s16;
	// subf r31,r31,r8
	r31.u64 = ctx.r8.u64 - r31.u64;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// rlwinm r29,r30,8,0,23
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// add r19,r27,r28
	r19.u64 = r27.u64 + r28.u64;
	// rlwinm r30,r21,8,0,23
	r30.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r3,r31,3
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7) != 0);
	ctx.r3.s64 = r31.s32 >> 3;
	// srawi r31,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r31.s64 = ctx.r8.s32 >> 3;
	// subf r28,r27,r28
	r28.u64 = r28.u64 - r27.u64;
	// add r8,r29,r30
	ctx.r8.u64 = r29.u64 + r30.u64;
	// mulli r21,r19,181
	r21.s64 = static_cast<int64_t>(r19.u64 * static_cast<uint64_t>(181));
	// subf r30,r30,r29
	r30.u64 = r29.u64 - r30.u64;
	// subf r29,r31,r8
	r29.u64 = ctx.r8.u64 - r31.u64;
	// mulli r28,r28,181
	r28.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(181));
	// addi r27,r21,128
	r27.s64 = r21.s64 + 128;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// srawi r4,r27,8
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xFF) != 0);
	ctx.r4.s64 = r27.s32 >> 8;
	// addi r28,r28,128
	r28.s64 = r28.s64 + 128;
	// add r27,r7,r8
	r27.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r31,r3,r30
	r31.u64 = r30.u64 - ctx.r3.u64;
	// add r5,r30,r3
	ctx.r5.u64 = r30.u64 + ctx.r3.u64;
	// srawi r3,r28,8
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0xFF) != 0);
	ctx.r3.s64 = r28.s32 >> 8;
	// srawi r28,r27,14
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3FFF) != 0);
	r28.s64 = r27.s32 >> 14;
	// add r30,r4,r5
	r30.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r27,r31,r3
	r27.u64 = r31.u64 + ctx.r3.u64;
	// sth r28,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r28.u16);
	// add r28,r29,r6
	r28.u64 = r29.u64 + ctx.r6.u64;
	// srawi r30,r30,14
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3FFF) != 0);
	r30.s64 = r30.s32 >> 14;
	// subf r6,r6,r29
	ctx.r6.u64 = r29.u64 - ctx.r6.u64;
	// subf r3,r3,r31
	ctx.r3.u64 = r31.u64 - ctx.r3.u64;
	// sthx r30,r26,r11
	REX_STORE_U16(r26.u32 + ctx.r11.u32, r30.u16);
	// srawi r27,r27,14
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3FFF) != 0);
	r27.s64 = r27.s32 >> 14;
	// srawi r31,r28,14
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3FFF) != 0);
	r31.s64 = r28.s32 >> 14;
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// srawi r6,r6,14
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 14;
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// srawi r7,r3,14
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 14;
	// srawi r5,r5,14
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 14;
	// sthx r27,r25,r11
	REX_STORE_U16(r25.u32 + ctx.r11.u32, r27.u16);
	// srawi r4,r8,14
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 14;
	// sthx r31,r24,r11
	REX_STORE_U16(r24.u32 + ctx.r11.u32, r31.u16);
	// sthx r6,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u16);
	// sthx r7,r23,r11
	REX_STORE_U16(r23.u32 + ctx.r11.u32, ctx.r7.u16);
	// sthx r5,r9,r11
	REX_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u16);
	// sthx r4,r22,r11
	REX_STORE_U16(r22.u32 + ctx.r11.u32, ctx.r4.u16);
loc_82364668:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x823644c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823644C0;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_823756C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// li r8,16
	ctx.r8.s64 = 16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// li r5,48
	ctx.r5.s64 = 48;
	// srawi r10,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 1;
	// li r3,64
	ctx.r3.s64 = 64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,80
	ctx.r6.s64 = 80;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r31,96
	r31.s64 = 96;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,112
	ctx.r10.s64 = 112;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v13,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// stvx128 v13,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r5
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r3
	ea = (ctx.r4.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r31
	ea = (ctx.r4.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823780F8) {
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
	ctx.lr = 0x82378100;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r3,404(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// add r30,r5,r8
	r30.u64 = ctx.r5.u64 + ctx.r8.u64;
	// stw r10,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r10.u32);
	// neg r31,r3
	r31.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// lwz r10,428(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lwz r19,420(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// clrlwi r26,r31,29
	r26.u64 = r31.u32 & 0x7;
	// lwz r11,5304(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 5304);
	// add r29,r8,r3
	r29.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r28,r30,r3
	r28.u64 = r30.u64 + ctx.r3.u64;
	// rlwinm r27,r11,1,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r21,r11,r8
	r21.u64 = ctx.r8.u64 - ctx.r11.u64;
	// add r8,r27,r26
	ctx.r8.u64 = r27.u64 + r26.u64;
	// subf r24,r11,r30
	r24.u64 = r30.u64 - ctx.r11.u64;
	// add r18,r8,r3
	r18.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r8,r29,-1
	ctx.r8.s64 = r29.s64 + -1;
	// srawi r17,r18,2
	ctx.xer.ca = (r18.s32 < 0) & ((r18.u32 & 0x3) != 0);
	r17.s64 = r18.s32 >> 2;
	// subfic r3,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r3.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// li r31,16
	r31.s64 = 16;
	// subfe r10,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r28,-1
	ctx.r3.s64 = r28.s64 + -1;
	// rlwinm r29,r10,0,28,30
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE;
	// mr r20,r21
	r20.u64 = r21.u64;
	// rlwinm r29,r29,0,30,28
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// mr r27,r24
	r27.u64 = r24.u64;
	// addi r10,r29,10
	ctx.r10.s64 = r29.s64 + 10;
	// subf r25,r11,r18
	r25.u64 = r18.u64 - ctx.r11.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82378278
	if (!ctx.cr6.lt) goto loc_82378278;
	// subf r23,r5,r4
	r23.u64 = ctx.r4.u64 - ctx.r5.u64;
	// subf r22,r24,r21
	r22.u64 = r21.u64 - r24.u64;
	// subf r28,r6,r7
	r28.u64 = ctx.r7.u64 - ctx.r6.u64;
loc_82378190:
	// lbz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lbzx r4,r23,r30
	ctx.r4.u64 = REX_LOAD_U8(r23.u32 + r30.u32);
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
	// lbz r16,0(r30)
	r16.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r15,r1,112
	r15.s64 = ctx.r1.s64 + 112;
	// addi r14,r1,96
	r14.s64 = ctx.r1.s64 + 96;
	// lbz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r6,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// lvx128 v11,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// lvx128 v10,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r16,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r16.u32);
	// lvx128 v9,r0,r15
	ea = (r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltb v12,v12,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_set1_epi8(char(0xC))));
	// vspltb v13,v9,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_set1_epi8(char(0xC))));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// vspltb v0,v10,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_set1_epi8(char(0xC))));
	// addi r29,r1,144
	r29.s64 = ctx.r1.s64 + 144;
	// vspltb v11,v11,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_set1_epi8(char(0xC))));
	// add r6,r25,r27
	ctx.r6.u64 = r25.u64 + r27.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stvx128 v12,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r22,r6
	ctx.r5.u64 = r22.u64 + ctx.r6.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r14
	ea = (r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble cr6,0x82378238
	if (!ctx.cr6.gt) goto loc_82378238;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// addi r29,r3,1
	r29.s64 = ctx.r3.s64 + 1;
loc_82378220:
	// lbz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// stbx r10,r4,r11
	REX_STORE_U8(ctx.r4.u32 + ctx.r11.u32, ctx.r10.u8);
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// stbx r10,r29,r11
	REX_STORE_U8(r29.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82378220
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82378220;
loc_82378238:
	// stvlx v0,0,r20
	ea = r20.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stvrx v0,r20,r31
	ea = r20.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// add r30,r30,r19
	r30.u64 = r30.u64 + r19.u64;
	// stvlx v13,0,r27
	ea = r27.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// add r8,r8,r19
	ctx.r8.u64 = ctx.r8.u64 + r19.u64;
	// stvrx v13,r27,r31
	ea = r27.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// add r3,r3,r19
	ctx.r3.u64 = ctx.r3.u64 + r19.u64;
	// stvlx v12,0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// add r20,r20,r19
	r20.u64 = r20.u64 + r19.u64;
	// stvrx v12,r5,r31
	ea = ctx.r5.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v12.u8[i]);
	// add r27,r27,r19
	r27.u64 = r27.u64 + r19.u64;
	// stvlx v11,0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvrx v11,r6,r31
	ea = ctx.r6.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v11.u8[i]);
	// bne 0x82378190
	if (!ctx.cr0.eq) goto loc_82378190;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82378278:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8237834c
	if (ctx.cr6.eq) goto loc_8237834C;
	// mullw r11,r10,r19
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(r19.s32);
	// addi r8,r17,-4
	ctx.r8.s64 = r17.s64 + -4;
	// subf r9,r11,r21
	ctx.r9.u64 = r21.u64 - ctx.r11.u64;
	// rlwinm r22,r17,2,0,27
	r22.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0xFFFFFFF0;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8237834c
	if (!ctx.cr6.gt) goto loc_8237834C;
	// subf r9,r21,r9
	ctx.r9.u64 = ctx.r9.u64 - r21.u64;
	// add r29,r11,r24
	r29.u64 = ctx.r11.u64 + r24.u64;
	// add r28,r11,r21
	r28.u64 = ctx.r11.u64 + r21.u64;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
loc_823782AC:
	// add r25,r28,r9
	r25.u64 = r28.u64 + ctx.r9.u64;
	// add r23,r29,r9
	r23.u64 = r29.u64 + ctx.r9.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82378318
	if (!ctx.cr6.gt) goto loc_82378318;
	// addi r11,r22,-1
	ctx.r11.s64 = r22.s64 + -1;
	// subf r8,r24,r21
	ctx.r8.u64 = r21.u64 - r24.u64;
	// rlwinm r6,r11,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// addi r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 1;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r30,r31
	r30.u64 = r31.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823782DC:
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lvlx128 v63,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r30,r11
	temp.u32 = r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lvlx128 v61,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// vor128 v60,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvrx128 v59,r31,r5
	temp.u32 = r31.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v58,v63,v59
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// stvlx128 v58,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvrx128 v58,r4,r31
	ea = ctx.r4.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v58.u8[i]);
	// stvlx128 v60,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v60,r3,r31
	ea = ctx.r3.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// bdnz 0x823782dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823782DC;
loc_82378318:
	// lvlx128 v57,r0,r28
	temp.u32 = r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// lvrx128 v56,r31,r28
	temp.u32 = r31.u32 + r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r9,r9,r19
	ctx.r9.u64 = ctx.r9.u64 + r19.u64;
	// lvlx128 v55,r0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v54,v57,v56
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// lvrx128 v53,r31,r29
	temp.u32 = r31.u32 + r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v52,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// stvlx128 v54,r0,r25
	ea = r25.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvrx128 v54,r25,r31
	ea = r25.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v54.u8[i]);
	// stvlx128 v52,r0,r23
	ea = r23.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvrx128 v52,r23,r31
	ea = r23.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v52.u8[i]);
	// bne 0x823782ac
	if (!ctx.cr0.eq) goto loc_823782AC;
loc_8237834C:
	// lwz r11,396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82378474
	if (ctx.cr6.eq) goto loc_82378474;
	// lwz r11,428(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// addi r9,r17,-4
	ctx.r9.s64 = r17.s64 + -4;
	// subf r24,r19,r20
	r24.u64 = r20.u64 - r19.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r28,r19,r27
	r28.u64 = r27.u64 - r19.u64;
	// rlwinm r23,r17,2,0,27
	r23.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0xFFFFFFF0;
	// rlwinm r29,r9,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r11,r7
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// beq cr6,0x82378384
	if (ctx.cr6.eq) goto loc_82378384;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x82378388
	goto loc_82378388;
loc_82378384:
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
loc_82378388:
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822091c8
	ctx.lr = 0x8237839C;
	sub_822091C8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822091c8
	ctx.lr = 0x823783AC;
	sub_822091C8(ctx, base);
	// add r11,r20,r19
	ctx.r11.u64 = r20.u64 + r19.u64;
	// add r9,r27,r19
	ctx.r9.u64 = r27.u64 + r19.u64;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// ble cr6,0x82378474
	if (!ctx.cr6.gt) goto loc_82378474;
	// add r25,r29,r24
	r25.u64 = r29.u64 + r24.u64;
	// subf r10,r28,r11
	ctx.r10.u64 = ctx.r11.u64 - r28.u64;
	// subf r9,r28,r9
	ctx.r9.u64 = ctx.r9.u64 - r28.u64;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
loc_823783D0:
	// add r27,r10,r29
	r27.u64 = ctx.r10.u64 + r29.u64;
	// add r26,r9,r29
	r26.u64 = ctx.r9.u64 + r29.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x8237843c
	if (!ctx.cr6.gt) goto loc_8237843C;
	// addi r8,r23,-1
	ctx.r8.s64 = r23.s64 + -1;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// rlwinm r7,r8,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// subf r8,r28,r24
	ctx.r8.u64 = r24.u64 - r28.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82378400:
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lvlx128 v51,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v50,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lvlx128 v49,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// vor128 v48,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// lvrx128 v47,r4,r7
	temp.u32 = ctx.r4.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v46,v51,v47
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// stvlx128 v46,r10,r11
	ea = ctx.r10.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// stvrx128 v46,r6,r31
	ea = ctx.r6.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v46.u8[i]);
	// stvlx128 v48,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v48,r5,r31
	ea = ctx.r5.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v48.u8[i]);
	// bdnz 0x82378400
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82378400;
loc_8237843C:
	// lvlx128 v45,r0,r25
	temp.u32 = r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lvrx128 v44,r31,r25
	temp.u32 = r31.u32 + r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + r19.u64;
	// lvlx128 v43,r0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v42,v45,v44
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// lvrx128 v41,r31,r29
	temp.u32 = r31.u32 + r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r9,r9,r19
	ctx.r9.u64 = ctx.r9.u64 + r19.u64;
	// vor128 v40,v43,v41
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8)));
	// stvlx128 v42,r0,r27
	ea = r27.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v42.u8[15 - i]);
	// stvrx128 v42,r27,r31
	ea = r27.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v42.u8[i]);
	// stvlx128 v40,r0,r26
	ea = r26.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// stvrx128 v40,r26,r31
	ea = r26.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v40.u8[i]);
	// bne 0x823783d0
	if (!ctx.cr0.eq) goto loc_823783D0;
loc_82378474:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8238DC48) {
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
	ctx.lr = 0x8238DC50;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8238dc70
	if (ctx.cr6.lt) goto loc_8238DC70;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
loc_8238DC70:
	// srawi r28,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	r28.s64 = ctx.r6.s32 >> 3;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r26,r11,r6
	r26.u64 = ctx.r6.u64 - ctx.r11.u64;
	// ble cr6,0x8238dcdc
	if (!ctx.cr6.gt) goto loc_8238DCDC;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
loc_8238DC88:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8238dcc4
	if (!ctx.cr6.gt) goto loc_8238DCC4;
	// subf r10,r31,r30
	ctx.r10.u64 = r30.u64 - r31.u64;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
loc_8238DCA4:
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// bdnz 0x8238dca4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238DCA4;
loc_8238DCC4:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8238DCCC;
	sub_822D4FA0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// add r30,r30,r25
	r30.u64 = r30.u64 + r25.u64;
	// bne 0x8238dc88
	if (!ctx.cr0.eq) goto loc_8238DC88;
loc_8238DCDC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8238F5C8) {
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
	ctx.lr = 0x8238F5D0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// li r26,0
	r26.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r30,9
	r30.s64 = 9;
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bge cr6,0x8238f654
	if (!ctx.cr6.lt) goto loc_8238F654;
loc_8238F5FC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238f654
	if (ctx.cr6.eq) goto loc_8238F654;
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
	// bge 0x8238f644
	if (!ctx.cr0.lt) goto loc_8238F644;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8238F644;
	sub_823380C8(ctx, base);
loc_8238F644:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8238f5fc
	if (ctx.cr6.gt) goto loc_8238F5FC;
loc_8238F654:
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
	// bge 0x8238f68c
	if (!ctx.cr0.lt) goto loc_8238F68C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8238F68C;
	sub_823380C8(ctx, base);
loc_8238F68C:
	// lwz r11,20680(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20680);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238f6cc
	if (ctx.cr6.eq) goto loc_8238F6CC;
	// lwz r11,20684(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238f6cc
	if (ctx.cr6.eq) goto loc_8238F6CC;
	// lwz r11,21704(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21704);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8238f6cc
	if (!ctx.cr6.eq) goto loc_8238F6CC;
	// lwz r11,140(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 140);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8238f6d4
	if (ctx.cr6.eq) goto loc_8238F6D4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_8238F6CC:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// bne cr6,0x8238f9ac
	if (!ctx.cr6.eq) goto loc_8238F9AC;
loc_8238F6D4:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r28,1
	r28.s64 = 1;
	// mr r29,r26
	r29.u64 = r26.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8238f74c
	if (!ctx.cr6.lt) goto loc_8238F74C;
loc_8238F6F4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238f74c
	if (ctx.cr6.eq) goto loc_8238F74C;
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
	// bge 0x8238f73c
	if (!ctx.cr0.lt) goto loc_8238F73C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8238F73C;
	sub_823380C8(ctx, base);
loc_8238F73C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8238f6f4
	if (ctx.cr6.gt) goto loc_8238F6F4;
loc_8238F74C:
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
	// bge 0x8238f784
	if (!ctx.cr0.lt) goto loc_8238F784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8238F784;
	sub_823380C8(ctx, base);
loc_8238F784:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8238f798
	if (!ctx.cr6.eq) goto loc_8238F798;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_8238F798:
	// lwz r11,21864(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238f918
	if (ctx.cr6.eq) goto loc_8238F918;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r28
	r30.u64 = r28.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8238f818
	if (!ctx.cr6.lt) goto loc_8238F818;
loc_8238F7C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238f818
	if (ctx.cr6.eq) goto loc_8238F818;
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
	// bge 0x8238f808
	if (!ctx.cr0.lt) goto loc_8238F808;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8238F808;
	sub_823380C8(ctx, base);
loc_8238F808:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8238f7c0
	if (ctx.cr6.gt) goto loc_8238F7C0;
loc_8238F818:
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
	// bge 0x8238f850
	if (!ctx.cr0.lt) goto loc_8238F850;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8238F850;
	sub_823380C8(ctx, base);
loc_8238F850:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8238f918
	if (ctx.cr6.eq) goto loc_8238F918;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r28
	r30.u64 = r28.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8238f8cc
	if (!ctx.cr6.lt) goto loc_8238F8CC;
loc_8238F874:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238f8cc
	if (ctx.cr6.eq) goto loc_8238F8CC;
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
	// bge 0x8238f8bc
	if (!ctx.cr0.lt) goto loc_8238F8BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8238F8BC;
	sub_823380C8(ctx, base);
loc_8238F8BC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8238f874
	if (ctx.cr6.gt) goto loc_8238F874;
loc_8238F8CC:
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
	// bge 0x8238f904
	if (!ctx.cr0.lt) goto loc_8238F904;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8238F904;
	sub_823380C8(ctx, base);
loc_8238F904:
	// addi r11,r30,0
	ctx.r11.s64 = r30.s64 + 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8238f91c
	goto loc_8238F91C;
loc_8238F918:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_8238F91C:
	// lwz r10,22140(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 22140);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8238f9ac
	if (!ctx.cr6.eq) goto loc_8238F9AC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bne cr6,0x8238f95c
	if (!ctx.cr6.eq) goto loc_8238F95C;
	// stw r26,20680(r27)
	REX_STORE_U32(r27.u32 + 20680, r26.u32);
	// stw r26,20688(r27)
	REX_STORE_U32(r27.u32 + 20688, r26.u32);
	// bl 0x8234a508
	ctx.lr = 0x8238F944;
	sub_8234A508(ctx, base);
	// lwz r11,288(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 288);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8238f9a0
	if (!ctx.cr6.eq) goto loc_8238F9A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_8238F95C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r28,20680(r27)
	REX_STORE_U32(r27.u32 + 20680, r28.u32);
	// bne cr6,0x8238f988
	if (!ctx.cr6.eq) goto loc_8238F988;
	// stw r26,20688(r27)
	REX_STORE_U32(r27.u32 + 20688, r26.u32);
	// bl 0x8236eed0
	ctx.lr = 0x8238F970;
	sub_8236EED0(ctx, base);
	// lwz r11,288(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 288);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8238f9a0
	if (!ctx.cr6.eq) goto loc_8238F9A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_8238F988:
	// stw r28,20684(r27)
	REX_STORE_U32(r27.u32 + 20684, r28.u32);
	// bl 0x82371b90
	ctx.lr = 0x8238F990;
	sub_82371B90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f9b0
	if (!ctx.cr6.eq) goto loc_8238F9B0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823a8930
	ctx.lr = 0x8238F9A0;
	sub_823A8930(ctx, base);
loc_8238F9A0:
	// lwz r11,288(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 288);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8238f9b0
	if (!ctx.cr6.eq) goto loc_8238F9B0;
loc_8238F9AC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8238F9B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_823996F0) {
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
	ctx.lr = 0x823996F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// blt cr6,0x82399714
	if (ctx.cr6.lt) goto loc_82399714;
	// li r27,1024
	r27.s64 = 1024;
loc_82399714:
	// neg r11,r30
	ctx.r11.s64 = static_cast<int64_t>(-r30.u64);
	// clrlwi r28,r11,25
	r28.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r5,r28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r28.u32, ctx.xer);
	// bge cr6,0x82399728
	if (!ctx.cr6.lt) goto loc_82399728;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
loc_82399728:
	// subf r29,r28,r5
	r29.u64 = ctx.r5.u64 - r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8239974c
	if (ctx.cr6.eq) goto loc_8239974C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d5428
	ctx.lr = 0x82399744;
	sub_822D5428(ctx, base);
	// add r31,r28,r31
	r31.u64 = r28.u64 + r31.u64;
	// add r30,r28,r30
	r30.u64 = r28.u64 + r30.u64;
loc_8239974C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82399774
	if (ctx.cr6.eq) goto loc_82399774;
	// addi r10,r27,-1
	ctx.r10.s64 = r27.s64 + -1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82399768:
	// dcbt r11,r31
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x82399768
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82399768;
loc_82399774:
	// cmplwi cr6,r29,512
	ctx.cr6.compare<uint32_t>(r29.u32, 512, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// blt cr6,0x82399784
	if (ctx.cr6.lt) goto loc_82399784;
	// li r11,512
	ctx.r11.s64 = 512;
loc_82399784:
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823997b0
	if (ctx.cr6.eq) goto loc_823997B0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823997A4:
	// dcbzl r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x823997a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823997A4;
loc_823997B0:
	// clrlwi r11,r31,28
	ctx.r11.u64 = r31.u32 & 0xF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82399890
	if (!ctx.cr6.eq) goto loc_82399890;
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(r29.u32, 128, ctx.xer);
	// blt cr6,0x82399858
	if (ctx.cr6.lt) goto loc_82399858;
	// rlwinm r11,r29,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 25) & 0x1FFFFFF;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r8,64
	ctx.r8.s64 = 64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r9,80
	ctx.r9.s64 = 80;
	// li r10,96
	ctx.r10.s64 = 96;
	// li r11,112
	ctx.r11.s64 = 112;
loc_823997E8:
	// cmplwi cr6,r29,1024
	ctx.cr6.compare<uint32_t>(r29.u32, 1024, ctx.xer);
	// ble cr6,0x823997f8
	if (!ctx.cr6.gt) goto loc_823997F8;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// dcbt r4,r31
loc_823997F8:
	// cmplwi cr6,r29,640
	ctx.cr6.compare<uint32_t>(r29.u32, 640, ctx.xer);
	// ble cr6,0x82399808
	if (!ctx.cr6.gt) goto loc_82399808;
	// li r4,512
	ctx.r4.s64 = 512;
	// dcbzl r4,r30
	ea = (ctx.r4.u32 + r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
loc_82399808:
	// lvx128 v63,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r29,-128
	r29.s64 = r29.s64 + -128;
	// lvx128 v62,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r31,r6
	ea = (r31.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r31,r7
	ea = (r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r31,128
	r31.s64 = r31.s64 + 128;
	// stvx128 v63,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r30,r5
	ea = (r30.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r30,r6
	ea = (r30.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r30,r7
	ea = (r30.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r30,r8
	ea = (r30.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r30,r9
	ea = (r30.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// bdnz 0x823997e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823997E8;
loc_82399858:
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(r29.u32, 16, ctx.xer);
	// blt cr6,0x823999a0
	if (ctx.cr6.lt) goto loc_823999A0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r5,r29,0,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r28,r29,28,4,31
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x822d5428
	ctx.lr = 0x82399874;
	sub_822D5428(ctx, base);
	// rlwinm r11,r29,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFF0;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
loc_82399880:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,-16
	r29.s64 = r29.s64 + -16;
	// bne 0x82399880
	if (!ctx.cr0.eq) goto loc_82399880;
	// b 0x823999a0
	goto loc_823999A0;
loc_82399890:
	// li r5,16
	ctx.r5.s64 = 16;
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(r29.u32, 128, ctx.xer);
	// blt cr6,0x82399970
	if (ctx.cr6.lt) goto loc_82399970;
	// rlwinm r11,r29,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 25) & 0x1FFFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r8,64
	ctx.r8.s64 = 64;
	// li r9,80
	ctx.r9.s64 = 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r10,96
	ctx.r10.s64 = 96;
	// li r11,112
	ctx.r11.s64 = 112;
	// li r4,128
	ctx.r4.s64 = 128;
loc_823998C0:
	// cmplwi cr6,r29,1024
	ctx.cr6.compare<uint32_t>(r29.u32, 1024, ctx.xer);
	// ble cr6,0x823998d0
	if (!ctx.cr6.gt) goto loc_823998D0;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// dcbt r3,r31
loc_823998D0:
	// cmplwi cr6,r29,640
	ctx.cr6.compare<uint32_t>(r29.u32, 640, ctx.xer);
	// ble cr6,0x823998e0
	if (!ctx.cr6.gt) goto loc_823998E0;
	// li r3,512
	ctx.r3.s64 = 512;
	// dcbzl r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
loc_823998E0:
	// lvlx128 v55,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r29,-128
	r29.s64 = r29.s64 + -128;
	// lvrx128 v54,r5,r31
	temp.u32 = ctx.r5.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v53,r6,r31
	temp.u32 = ctx.r6.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v52,v55,v54
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// lvlx128 v51,r5,r31
	temp.u32 = ctx.r5.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v50,r7,r31
	temp.u32 = ctx.r7.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v49,v51,v53
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvlx128 v48,r6,r31
	temp.u32 = ctx.r6.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v47,r8,r31
	temp.u32 = ctx.r8.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v46,v48,v50
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// lvlx128 v45,r7,r31
	temp.u32 = ctx.r7.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v44,r9,r31
	temp.u32 = ctx.r9.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v43,v45,v47
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v42,r8,r31
	temp.u32 = ctx.r8.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v41,r10,r31
	temp.u32 = ctx.r10.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v40,v42,v44
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// lvlx128 v39,r9,r31
	temp.u32 = ctx.r9.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v38,r11,r31
	temp.u32 = ctx.r11.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v37,v39,v41
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8)));
	// lvlx128 v36,r10,r31
	temp.u32 = ctx.r10.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v35,r4,r31
	temp.u32 = ctx.r4.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v34,v36,v38
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// lvlx128 v33,r11,r31
	temp.u32 = ctx.r11.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r31,128
	r31.s64 = r31.s64 + 128;
	// vor128 v32,v33,v35
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// stvx128 v52,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v49,r30,r5
	ea = (r30.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v46,r30,r6
	ea = (r30.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v43,r30,r7
	ea = (r30.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v40,r30,r8
	ea = (r30.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v37,r30,r9
	ea = (r30.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v34,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v32,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// bdnz 0x823998c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823998C0;
loc_82399970:
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(r29.u32, 16, ctx.xer);
	// blt cr6,0x823999a0
	if (ctx.cr6.lt) goto loc_823999A0;
	// rlwinm r11,r29,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 28) & 0xFFFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82399980:
	// lvrx128 v63,r5,r31
	temp.u32 = ctx.r5.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r29,r29,-16
	r29.s64 = r29.s64 + -16;
	// lvlx128 v62,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// vor128 v61,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvx128 v61,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// bdnz 0x82399980
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82399980;
loc_823999A0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823999b8
	if (ctx.cr6.eq) goto loc_823999B8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d5428
	ctx.lr = 0x823999B8;
	sub_822D5428(ctx, base);
loc_823999B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823B0D08) {
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
	ctx.lr = 0x823B0D10;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// lwz r31,32(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,52(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r7,64(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r30,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r30.s64 = r31.s32 >> 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r6,r10,r4
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// rlwinm r3,r9,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r9,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// addi r10,r3,-7
	ctx.r10.s64 = ctx.r3.s64 + -7;
	// divw r29,r11,r31
	r29.u64 = uint32_t((r31.s32 && !(ctx.r11.s32 == INT32_MIN && r31.s32 == -1)) ? ctx.r11.s32 / r31.s32 : 0);
	// rlwinm r28,r10,6,0,25
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rotlwi r10,r28,1
	ctx.r10.u64 = __builtin_rotateleft32(r28.u32, 1);
	// rlwinm r27,r29,1,0,30
	r27.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r26,r11,-1
	r26.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r29,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0x1;
	// divw r11,r28,r27
	ctx.r11.u64 = uint32_t((r27.s32 && !(r28.s32 == INT32_MIN && r27.s32 == -1)) ? r28.s32 / r27.s32 : 0);
	// andc r28,r27,r10
	r28.u64 = r27.u64 & ~ctx.r10.u64;
	// twllei r31,0
	if (r31.s32 == 0 || r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r31,r31,r26
	r31.u64 = r31.u64 & ~r26.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// mullw r10,r3,r4
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// twllei r27,0
	if (r27.s32 == 0 || r27.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r27,r11,-1
	r27.s64 = ctx.r11.s64 + -1;
	// twlgei r28,-1
	if (r28.s32 == -1 || r28.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r31,-1
	if (r31.s32 == -1 || r31.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// addze r25,r30
	temp.s64 = r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r30.u32;
	r25.s64 = temp.s64;
	// and r28,r9,r29
	r28.u64 = ctx.r9.u64 & r29.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// bge cr6,0x823b0fb8
	if (!ctx.cr6.lt) goto loc_823B0FB8;
	// subf r26,r4,r5
	r26.u64 = ctx.r5.u64 - ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_823B0DA4:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x823b0e78
	if (!ctx.cr6.gt) goto loc_823B0E78;
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addi r31,r10,5
	r31.s64 = ctx.r10.s64 + 5;
	// addi r30,r10,3
	r30.s64 = ctx.r10.s64 + 3;
	// addi r29,r10,7
	r29.s64 = ctx.r10.s64 + 7;
loc_823B0DC8:
	// srawi r8,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 6;
	// clrlwi r5,r9,25
	ctx.r5.u64 = ctx.r9.u32 & 0x7F;
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// subfic r6,r5,128
	ctx.xer.ca = ctx.r5.u32 <= 128;
	ctx.r6.u64 = static_cast<uint64_t>(128) - ctx.r5.u64;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// clrlwi r24,r9,25
	r24.u64 = ctx.r9.u32 & 0x7F;
	// lbzx r23,r8,r10
	r23.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// clrlwi r22,r9,24
	r22.u64 = ctx.r9.u32 & 0xFF;
	// lbzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// mullw r6,r23,r6
	ctx.r6.s64 = int64_t(r23.s32) * int64_t(ctx.r6.s32);
	// mullw r8,r8,r5
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// srawi r6,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 7;
	// srawi r8,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 6;
	// stb r6,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// subfic r6,r24,128
	ctx.xer.ca = r24.u32 <= 128;
	ctx.r6.u64 = static_cast<uint64_t>(128) - r24.u64;
	// rlwinm r5,r8,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r23,r8,0,0,29
	r23.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// lbzx r8,r7,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// mullw r8,r8,r24
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r24.s32);
	// lbzx r5,r5,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// mullw r6,r5,r6
	ctx.r6.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// srawi r6,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 7;
	// subfic r8,r22,256
	ctx.xer.ca = r22.u32 <= 256;
	ctx.r8.u64 = static_cast<uint64_t>(256) - r22.u64;
	// stb r6,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r6.u8);
	// lbzx r5,r31,r23
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + r23.u32);
	// lbzx r6,r4,r23
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + r23.u32);
	// mullw r6,r6,r8
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// mullw r5,r5,r22
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r22.s32);
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// stb r5,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r5.u8);
	// lbzx r6,r29,r23
	ctx.r6.u64 = REX_LOAD_U8(r29.u32 + r23.u32);
	// lbzx r5,r30,r23
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + r23.u32);
	// mullw r8,r5,r8
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// mullw r6,r6,r22
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(r22.s32);
	// add r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 + ctx.r8.u64;
	// srawi r8,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 8;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// stb r6,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823b0dc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B0DC8;
loc_823B0E78:
	// cmpw cr6,r27,r25
	ctx.cr6.compare<int32_t>(r27.s32, r25.s32, ctx.xer);
	// bge cr6,0x823b0fac
	if (!ctx.cr6.lt) goto loc_823B0FAC;
	// subf r8,r27,r25
	ctx.r8.u64 = r25.u64 - r27.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823B0E88:
	// srawi r8,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 6;
	// clrlwi r6,r9,25
	ctx.r6.u64 = ctx.r9.u32 & 0x7F;
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r8,2
	ctx.r7.s64 = ctx.r8.s64 + 2;
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x823b0ea4
	if (!ctx.cr6.gt) goto loc_823B0EA4;
	// addi r8,r3,-1
	ctx.r8.s64 = ctx.r3.s64 + -1;
loc_823B0EA4:
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x823b0eb0
	if (!ctx.cr6.gt) goto loc_823B0EB0;
	// addi r7,r3,-1
	ctx.r7.s64 = ctx.r3.s64 + -1;
loc_823B0EB0:
	// lbzx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// subfic r5,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r5.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// lbzx r4,r8,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// add r8,r9,r28
	ctx.r8.u64 = ctx.r9.u64 + r28.u64;
	// mullw r9,r7,r6
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// mullw r7,r4,r5
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// clrlwi r7,r8,25
	ctx.r7.u64 = ctx.r8.u32 & 0x7F;
	// srawi r5,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 7;
	// srawi r6,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 6;
	// stb r5,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r5.u8);
	// rlwinm r9,r6,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x823b0ef0
	if (!ctx.cr6.gt) goto loc_823B0EF0;
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
loc_823B0EF0:
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x823b0efc
	if (!ctx.cr6.gt) goto loc_823B0EFC;
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
loc_823B0EFC:
	// lbzx r4,r9,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// subfic r31,r7,128
	ctx.xer.ca = ctx.r7.u32 <= 128;
	r31.u64 = static_cast<uint64_t>(128) - ctx.r7.u64;
	// lbzx r5,r5,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// rlwinm r9,r6,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFC;
	// mullw r6,r4,r31
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(r31.s32);
	// mullw r7,r5,r7
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// add r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// srawi r5,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 7;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stb r5,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r5.u8);
	// addi r31,r9,3
	r31.s64 = ctx.r9.s64 + 3;
	// addi r5,r9,5
	ctx.r5.s64 = ctx.r9.s64 + 5;
	// addi r4,r9,7
	ctx.r4.s64 = ctx.r9.s64 + 7;
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x823b0f40
	if (!ctx.cr6.gt) goto loc_823B0F40;
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
loc_823B0F40:
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x823b0f4c
	if (!ctx.cr6.gt) goto loc_823B0F4C;
	// addi r31,r3,-1
	r31.s64 = ctx.r3.s64 + -1;
loc_823B0F4C:
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x823b0f58
	if (!ctx.cr6.gt) goto loc_823B0F58;
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
loc_823B0F58:
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x823b0f64
	if (!ctx.cr6.gt) goto loc_823B0F64;
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
loc_823B0F64:
	// lbzx r30,r6,r10
	r30.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// subfic r6,r7,256
	ctx.xer.ca = ctx.r7.u32 <= 256;
	ctx.r6.u64 = static_cast<uint64_t>(256) - ctx.r7.u64;
	// lbzx r5,r5,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// add r9,r8,r28
	ctx.r9.u64 = ctx.r8.u64 + r28.u64;
	// mullw r8,r30,r6
	ctx.r8.s64 = int64_t(r30.s32) * int64_t(ctx.r6.s32);
	// mullw r5,r5,r7
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// srawi r5,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 8;
	// stb r5,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r5.u8);
	// lbzx r5,r4,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// mullw r7,r5,r7
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// lbzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + ctx.r10.u32);
	// mullw r8,r4,r6
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r7,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// stbu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x823b0e88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B0E88;
loc_823B0FAC:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// bne 0x823b0da4
	if (!ctx.cr0.eq) goto loc_823B0DA4;
loc_823B0FB8:
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_823C06F0) {
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
	ctx.lr = 0x823C06F8;
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	// lis r31,0
	r31.s64 = 0;
	// addze r30,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r30.s64 = temp.s64;
	// srawi r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// rlwinm r8,r8,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// ori r31,r31,32768
	r31.u64 = r31.u64 | 32768;
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + r30.u64;
	// subf r27,r31,r8
	r27.u64 = ctx.r8.u64 - r31.u64;
	// subf r29,r31,r7
	r29.u64 = ctx.r7.u64 - r31.u64;
	// mr r28,r31
	r28.u64 = r31.u64;
	// cmpw cr6,r27,r31
	ctx.cr6.compare<int32_t>(r27.s32, r31.s32, ctx.xer);
	// ble cr6,0x823c07b8
	if (!ctx.cr6.gt) goto loc_823C07B8;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_823C0738:
	// sraw r11,r28,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r28.s32 < 0) & (((r28.s32 >> temp.u32) << temp.u32) != r28.s32);
	ctx.r11.s64 = r28.s32 >> temp.u32;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(r29.s32, r31.s32, ctx.xer);
	// ble cr6,0x823c07a8
	if (!ctx.cr6.gt) goto loc_823C07A8;
	// addi r30,r3,-4
	r30.s64 = ctx.r3.s64 + -4;
loc_823C0754:
	// sraw r26,r11,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	r26.s64 = ctx.r11.s32 >> temp.u32;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r26,r26,r8
	r26.u64 = REX_LOAD_U8(r26.u32 + ctx.r8.u32);
	// sraw r25,r11,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	r25.s64 = ctx.r11.s32 >> temp.u32;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r25,r25,r8
	r25.u64 = REX_LOAD_U8(r25.u32 + ctx.r8.u32);
	// sraw r24,r11,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	r24.s64 = ctx.r11.s32 >> temp.u32;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r24,r24,r8
	r24.u64 = REX_LOAD_U8(r24.u32 + ctx.r8.u32);
	// rotlwi r25,r25,8
	r25.u64 = __builtin_rotateleft32(r25.u32, 8);
	// sraw r23,r11,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	r23.s64 = ctx.r11.s32 >> temp.u32;
	// or r26,r25,r26
	r26.u64 = r25.u64 | r26.u64;
	// lbzx r23,r23,r8
	r23.u64 = REX_LOAD_U8(r23.u32 + ctx.r8.u32);
	// rotlwi r25,r24,16
	r25.u64 = __builtin_rotateleft32(r24.u32, 16);
	// rotlwi r24,r23,24
	r24.u64 = __builtin_rotateleft32(r23.u32, 24);
	// or r26,r25,r26
	r26.u64 = r25.u64 | r26.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// or r26,r24,r26
	r26.u64 = r24.u64 | r26.u64;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// stwu r26,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r26.u32);
	r30.u32 = ea;
	// blt cr6,0x823c0754
	if (ctx.cr6.lt) goto loc_823C0754;
loc_823C07A8:
	// add r28,r28,r10
	r28.u64 = r28.u64 + ctx.r10.u64;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(r28.s32, r27.s32, ctx.xer);
	// blt cr6,0x823c0738
	if (ctx.cr6.lt) goto loc_823C0738;
loc_823C07B8:
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_823C2A80) {
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
	ctx.lr = 0x823C2A88;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,300(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r9,r9,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x823c2ab0
	if (ctx.cr6.eq) goto loc_823C2AB0;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
loc_823C2AB0:
	// lwz r22,292(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// srawi r26,r23,1
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x1) != 0);
	r26.s64 = r23.s32 >> 1;
	// srawi. r9,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// srawi r7,r22,1
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x1) != 0);
	ctx.r7.s64 = r22.s32 >> 1;
	// rlwinm r27,r11,1,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r7,1,0,30
	r24.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// ble 0x823c2b28
	if (!ctx.cr0.gt) goto loc_823C2B28;
	// lwz r30,316(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// li r31,0
	r31.s64 = 0;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
loc_823C2AD8:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x823c2b18
	if (!ctx.cr6.gt) goto loc_823C2B18;
	// add r29,r31,r6
	r29.u64 = r31.u64 + ctx.r6.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// addi r28,r30,1
	r28.s64 = r30.s64 + 1;
	// add r7,r31,r11
	ctx.r7.u64 = r31.u64 + ctx.r11.u64;
loc_823C2AF8:
	// lbzx r20,r7,r5
	r20.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// lbzx r19,r29,r11
	r19.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r7,r31,r11
	ctx.r7.u64 = r31.u64 + ctx.r11.u64;
	// stbx r20,r30,r9
	REX_STORE_U8(r30.u32 + ctx.r9.u32, r20.u8);
	// stbx r19,r28,r9
	REX_STORE_U8(r28.u32 + ctx.r9.u32, r19.u8);
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// bdnz 0x823c2af8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C2AF8;
loc_823C2B18:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// add r31,r31,r10
	r31.u64 = r31.u64 + ctx.r10.u64;
	// add r30,r30,r24
	r30.u64 = r30.u64 + r24.u64;
	// bne 0x823c2ad8
	if (!ctx.cr0.eq) goto loc_823C2AD8;
loc_823C2B28:
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x823c2b5c
	if (!ctx.cr6.gt) goto loc_823C2B5C;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
loc_823C2B3C:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822091c8
	ctx.lr = 0x823C2B4C;
	sub_822091C8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r31,r31,r22
	r31.u64 = r31.u64 + r22.u64;
	// add r30,r30,r21
	r30.u64 = r30.u64 + r21.u64;
	// bne 0x823c2b3c
	if (!ctx.cr0.eq) goto loc_823C2B3C;
loc_823C2B5C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_823C4B28) {
	REX_FUNC_PROLOGUE();
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// li r7,255
	ctx.r7.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823C4B3C:
	// lhz r10,-4(r8)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + -4);
	// lbz r9,-2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmplwi cr6,r6,255
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 255, ctx.xer);
	// ble cr6,0x823c4b68
	if (!ctx.cr6.gt) goto loc_823C4B68;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// and r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 & ctx.r7.u64;
loc_823C4B68:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// stb r9,-2(r11)
	REX_STORE_U8(ctx.r11.u32 + -2, ctx.r9.u8);
	// lhz r9,-2(r8)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + -2);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// ble cr6,0x823c4b9c
	if (!ctx.cr6.gt) goto loc_823C4B9C;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// and r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 & ctx.r7.u64;
loc_823C4B9C:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,-1(r11)
	REX_STORE_U8(ctx.r11.u32 + -1, ctx.r9.u8);
	// lhz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// ble cr6,0x823c4bd0
	if (!ctx.cr6.gt) goto loc_823C4BD0;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// and r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 & ctx.r7.u64;
loc_823C4BD0:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lhz r9,2(r8)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + 2);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// ble cr6,0x823c4c04
	if (!ctx.cr6.gt) goto loc_823C4C04;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// and r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 & ctx.r7.u64;
loc_823C4C04:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bdnz 0x823c4b3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C4B3C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CB0E0) {
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
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,27
	ctx.r4.u64 = ctx.r4.u64 | 27;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x824d479c
	ctx.lr = 0x823CB110;
	__imp__XMsgInProcessCall(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823cb120
	if (ctx.cr0.lt) goto loc_823CB120;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823cb138
	goto loc_823CB138;
loc_823CB120:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823cb138
	if (ctx.cr6.eq) goto loc_823CB138;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_823CB138:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CB900) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e88
	ctx.lr = 0x823CB908;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f30
	ctx.lr = 0x823CB910;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f28,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f28.f64 = double(temp.f32);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// fmr f27,f28
	f27.f64 = f28.f64;
	// fmr f26,f28
	f26.f64 = f28.f64;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// bne cr6,0x823cb99c
	if (!ctx.cr6.eq) goto loc_823CB99C;
	// clrlwi r10,r6,31
	ctx.r10.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823cb968
	if (ctx.cr6.eq) goto loc_823CB968;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f28,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f28.f64 = double(temp.f32);
loc_823CB968:
	// rlwinm r9,r30,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823cb980
	if (ctx.cr6.eq) goto loc_823CB980;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f27,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f27.f64 = double(temp.f32);
loc_823CB980:
	// rlwinm r9,r30,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823cbbe4
	if (ctx.cr6.eq) goto loc_823CBBE4;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f26,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f26.f64 = double(temp.f32);
	// b 0x823cbbe4
	goto loc_823CBBE4;
loc_823CB99C:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,1980(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1980);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x823cbb9c
	if (ctx.cr6.eq) goto loc_823CBB9C;
	// lwz r9,36(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 36);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f0,21056(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 21056);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823cbb9c
	if (!ctx.cr6.gt) goto loc_823CBB9C;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,28
	ctx.r4.s64 = r31.s64 + 28;
	// addi r3,r10,24
	ctx.r3.s64 = ctx.r10.s64 + 24;
	// bl 0x823cd088
	ctx.lr = 0x823CB9E4;
	sub_823CD088(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823cd060
	ctx.lr = 0x823CB9F0;
	sub_823CD060(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,36(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 36);
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
	ctx.lr = 0x823CBA20;
	sub_822D4D68(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// blt cr6,0x823cba84
	if (ctx.cr6.lt) goto loc_823CBA84;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823cba48
	if (ctx.cr6.eq) goto loc_823CBA48;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f28,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f28.f64 = double(temp.f32);
loc_823CBA48:
	// rlwinm r11,r30,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cba64
	if (ctx.cr6.eq) goto loc_823CBA64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f27,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f27.f64 = double(temp.f32);
loc_823CBA64:
	// rlwinm r9,r30,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823cbbe4
	if (ctx.cr6.eq) goto loc_823CBBE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f26,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f26.f64 = double(temp.f32);
	// b 0x823cbbe4
	goto loc_823CBBE4;
loc_823CBA84:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
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
	ctx.lr = 0x823CBA9C;
	sub_822D4D68(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bgt cr6,0x823cbb00
	if (ctx.cr6.gt) goto loc_823CBB00;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823cbac4
	if (ctx.cr6.eq) goto loc_823CBAC4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f28,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f28.f64 = double(temp.f32);
loc_823CBAC4:
	// rlwinm r11,r30,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cbae0
	if (ctx.cr6.eq) goto loc_823CBAE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f27,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f27.f64 = double(temp.f32);
loc_823CBAE0:
	// rlwinm r9,r30,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823cbbe4
	if (ctx.cr6.eq) goto loc_823CBBE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,28(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f26,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f26.f64 = double(temp.f32);
	// b 0x823cbbe4
	goto loc_823CBBE4;
loc_823CBB00:
	// fsubs f13,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 - f30.f64));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fsubs f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 - f30.f64));
	// fdivs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// beq cr6,0x823cbb38
	if (ctx.cr6.eq) goto loc_823CBB38;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lfs f12,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f28,f11,f0,f13
	f28.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f13.f64)));
loc_823CBB38:
	// rlwinm r11,r30,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cbb68
	if (ctx.cr6.eq) goto loc_823CBB68;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
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
	// fmadds f27,f11,f0,f13
	f27.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f13.f64)));
loc_823CBB68:
	// rlwinm r9,r30,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823cbbe4
	if (ctx.cr6.eq) goto loc_823CBBE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r7,28(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
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
	// b 0x823cbbe4
	goto loc_823CBBE4;
loc_823CBB9C:
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823cbbb4
	if (ctx.cr6.eq) goto loc_823CBBB4;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f28,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f28.f64 = double(temp.f32);
loc_823CBBB4:
	// rlwinm r9,r30,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823cbbcc
	if (ctx.cr6.eq) goto loc_823CBBCC;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f27,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f27.f64 = double(temp.f32);
loc_823CBBCC:
	// rlwinm r9,r30,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823cbbe4
	if (ctx.cr6.eq) goto loc_823CBBE4;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f26,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f26.f64 = double(temp.f32);
loc_823CBBE4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823cbc20
	if (ctx.cr6.eq) goto loc_823CBC20;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 * f28.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x823cbc20
	if (ctx.cr6.eq) goto loc_823CBC20;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 * f28.f64));
	// stfsx f13,r10,r11
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
loc_823CBC20:
	// rlwinm r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cbc48
	if (ctx.cr6.eq) goto loc_823CBC48;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 * f27.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r10.u32);
loc_823CBC48:
	// rlwinm r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cbc70
	if (ctx.cr6.eq) goto loc_823CBC70;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 * f27.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,20(r29)
	REX_STORE_U32(r29.u32 + 20, ctx.r10.u32);
loc_823CBC70:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823cbc94
	if (ctx.cr6.eq) goto loc_823CBC94;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f26
	ctx.f13.f64 = double(float(ctx.f0.f64 * f26.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,24(r29)
	REX_STORE_U32(r29.u32 + 24, ctx.r10.u32);
loc_823CBC94:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f7c
	ctx.lr = 0x823CBCA0;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823D8130) {
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
	// beq cr6,0x823d8158
	if (ctx.cr6.eq) goto loc_823D8158;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x823cd250
	ctx.lr = 0x823D8158;
	sub_823CD250(ctx, base);
loc_823D8158:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d816c
	if (ctx.cr6.eq) goto loc_823D816C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x823cd250
	ctx.lr = 0x823D816C;
	sub_823CD250(ctx, base);
loc_823D816C:
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

DEFINE_REX_FUNC(sub_823D8180) {
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
	ctx.lr = 0x823D8188;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// rlwinm. r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823d8300
	if (!ctx.cr0.eq) goto loc_823D8300;
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823d8300
	if (!ctx.cr6.eq) goto loc_823D8300;
	// lwz r11,104(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// lwz r8,104(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823d8300
	if (!ctx.cr6.eq) goto loc_823D8300;
	// lwz r11,108(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 108);
	// lwz r8,108(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823d8300
	if (!ctx.cr6.eq) goto loc_823D8300;
	// lwz r11,112(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 112);
	// lwz r8,112(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823d8300
	if (!ctx.cr6.eq) goto loc_823D8300;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r8,16(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823d8300
	if (!ctx.cr6.eq) goto loc_823D8300;
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823d820c
	if (!ctx.cr6.eq) goto loc_823D820C;
	// bl 0x823d7758
	ctx.lr = 0x823D8208;
	sub_823D7758(ctx, base);
	// b 0x823d8308
	goto loc_823D8308;
loc_823D820C:
	// lwz r11,28(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d8254
	if (ctx.cr6.eq) goto loc_823D8254;
	// lwz r11,56(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 56);
	// lwz r10,56(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823d8254
	if (ctx.cr6.eq) goto loc_823D8254;
	// addi r7,r11,1024
	ctx.r7.s64 = ctx.r11.s64 + 1024;
loc_823D822C:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x823d824c
	if (!ctx.cr0.eq) goto loc_823D824C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x823d822c
	if (!ctx.cr6.eq) goto loc_823D822C;
loc_823D824C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x823d8300
	if (!ctx.cr0.eq) goto loc_823D8300;
loc_823D8254:
	// li r26,0
	r26.s64 = 0;
	// stw r26,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, r26.u32);
	// mr r27,r26
	r27.u64 = r26.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r26,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r26.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r11,112(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823d82f8
	if (!ctx.cr6.gt) goto loc_823D82F8;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r9,108(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
loc_823D8280:
	// lwz r6,4(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r31,r26
	r31.u64 = r26.u64;
	// lwz r8,100(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r7,32(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r8,r8,r27
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r27.s32);
	// lwz r4,100(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 100);
	// lwz r5,32(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 32);
	// mullw r6,r4,r27
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(r27.s32);
	// add r30,r6,r5
	r30.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r29,r8,r7
	r29.u64 = ctx.r8.u64 + ctx.r7.u64;
	// beq cr6,0x823d82e8
	if (ctx.cr6.eq) goto loc_823D82E8;
loc_823D82B0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,116(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 116);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823D82C0;
	sub_822D4FA0(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r7,96(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r8,96(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r9,108(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// add r30,r7,r30
	r30.u64 = ctx.r7.u64 + r30.u64;
	// add r29,r8,r29
	r29.u64 = ctx.r8.u64 + r29.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823d82b0
	if (ctx.cr6.lt) goto loc_823D82B0;
loc_823D82E8:
	// lwz r8,112(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823d8280
	if (ctx.cr6.lt) goto loc_823D8280;
loc_823D82F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823d8308
	goto loc_823D8308;
loc_823D8300:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_823D8308:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_823DE1F0) {
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
	ctx.lr = 0x823DE1F8;
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
	// beq cr6,0x823de230
	if (ctx.cr6.eq) goto loc_823DE230;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x823DE22C;
	sub_82413040(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_823DE230:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823de24c
	if (ctx.cr6.eq) goto loc_823DE24C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc0b0
	ctx.lr = 0x823DE248;
	sub_823DC0B0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_823DE24C:
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
	// bne 0x823de2b8
	if (!ctx.cr0.eq) goto loc_823DE2B8;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x823de2c0
	goto loc_823DE2C0;
loc_823DE2B8:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_823DE2C0:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823de2d8
	if (ctx.cr6.eq) goto loc_823DE2D8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x823DE2D8;
	sub_823DC658(ctx, base);
loc_823DE2D8:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823de5a0
	if (!ctx.cr6.gt) goto loc_823DE5A0;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// rlwinm r25,r30,1,0,30
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r30,r25,r28
	r30.u64 = r28.u64 - r25.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lfd f10,-9120(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + -9120);
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f11,16288(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16288);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-7224(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -7224);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,17176(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17176);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r27,8
	r29.s64 = r27.s64 + 8;
	// lfs f0,-30112(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -30112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,29356(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 29356);
	ctx.f6.f64 = double(temp.f32);
loc_823DE33C:
	// add r11,r29,r10
	ctx.r11.u64 = r29.u64 + ctx.r10.u64;
	// lfsx f9,r29,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f9,f29
	ctx.f9.f64 = double(float(ctx.f9.f64 + f29.f64));
	// rlwinm r7,r26,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xC;
	// lwz r6,92(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f8,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 + f31.f64));
	// fadds f7,f7,f30
	ctx.f7.f64 = double(float(ctx.f7.f64 + f30.f64));
	// lfsx f5,r7,r24
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fadds f4,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// fadds f3,f8,f5
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// fadds f5,f7,f5
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// fctiwz f4,f4
	ctx.f4.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f4,f3
	ctx.f4.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// fctiwz f5,f5
	ctx.f5.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f5,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f5.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x823de4ec
	if (ctx.cr6.eq) goto loc_823DE4EC;
	// extsw r28,r6
	r28.s64 = ctx.r6.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r7,r4
	ctx.r7.s64 = ctx.r4.s32;
	// std r28,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r28.u64);
	// extsw r28,r5
	r28.s64 = ctx.r5.s32;
	// std r7,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f5,96(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r28,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r28.u64);
	// lfd f2,112(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// lfd f4,104(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lfs f3,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// frsp f5,f2
	ctx.f5.f64 = double(float(ctx.f2.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fsubs f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// frsp f5,f4
	ctx.f5.f64 = double(float(ctx.f4.f64));
	// fmadds f4,f8,f13,f3
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f3.f64)));
	// stfs f4,16(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fsubs f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// fmul f4,f7,f10
	ctx.f4.f64 = ctx.f7.f64 * ctx.f10.f64;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// fmul f5,f8,f10
	ctx.f5.f64 = ctx.f8.f64 * ctx.f10.f64;
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// frsp f30,f4
	f30.f64 = double(float(ctx.f4.f64));
	// lfs f4,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f4,f8,f12,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f4.f64)));
	// stfs f4,16(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f4,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f8,f8,f11,f4
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f4.f64)));
	// stfs f8,16(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f8,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f7,f13,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f8.f64)));
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f8,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f7,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f8,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f7,f11,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f7.f64, ctx.f11.f64, ctx.f8.f64)));
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f9,f13,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f8.f64)));
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// frsp f31,f5
	f31.f64 = double(float(ctx.f5.f64));
	// fmadds f8,f9,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmul f5,f9,f10
	ctx.f5.f64 = ctx.f9.f64 * ctx.f10.f64;
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f9,f9,f11,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f8.f64)));
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// frsp f29,f5
	f29.f64 = double(float(ctx.f5.f64));
loc_823DE4EC:
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x823de4fc
	if (ctx.cr6.lt) goto loc_823DE4FC;
	// li r11,15
	ctx.r11.s64 = 15;
loc_823DE4FC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823de514
	if (!ctx.cr6.gt) goto loc_823DE514;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// blt cr6,0x823de518
	if (ctx.cr6.lt) goto loc_823DE518;
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x823de518
	goto loc_823DE518;
loc_823DE514:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823DE518:
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x823de528
	if (ctx.cr6.lt) goto loc_823DE528;
	// li r11,15
	ctx.r11.s64 = 15;
loc_823DE528:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823de540
	if (!ctx.cr6.gt) goto loc_823DE540;
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// blt cr6,0x823de544
	if (ctx.cr6.lt) goto loc_823DE544;
	// li r5,15
	ctx.r5.s64 = 15;
	// b 0x823de544
	goto loc_823DE544;
loc_823DE540:
	// li r5,0
	ctx.r5.s64 = 0;
loc_823DE544:
	// cmpwi cr6,r6,15
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 15, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x823de554
	if (ctx.cr6.lt) goto loc_823DE554;
	// li r11,15
	ctx.r11.s64 = 15;
loc_823DE554:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823de56c
	if (!ctx.cr6.gt) goto loc_823DE56C;
	// cmpwi cr6,r6,15
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 15, ctx.xer);
	// blt cr6,0x823de570
	if (ctx.cr6.lt) goto loc_823DE570;
	// li r6,15
	ctx.r6.s64 = 15;
	// b 0x823de570
	goto loc_823DE570;
loc_823DE56C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_823DE570:
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// sthux r11,r30,r25
	ea = r30.u32 + r25.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	r30.u32 = ea;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823de33c
	if (ctx.cr6.lt) goto loc_823DE33C;
loc_823DE5A0:
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

DEFINE_REX_FUNC(sub_823E5750) {
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
	// lwz r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// li r6,1
	ctx.r6.s64 = 1;
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823e5238
	ctx.lr = 0x823E5784;
	sub_823E5238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823e57e4
	if (ctx.cr0.lt) goto loc_823E57E4;
	// lwz r10,132(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 132);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 104);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// rlwinm r5,r9,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823E57B4;
	sub_822D4FA0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e57cc
	if (ctx.cr6.eq) goto loc_823E57CC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413d40
	ctx.lr = 0x823E57CC;
	sub_82413D40(ctx, base);
loc_823E57CC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e57e4
	if (ctx.cr6.eq) goto loc_823E57E4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc3f0
	ctx.lr = 0x823E57E4;
	sub_823DC3F0(ctx, base);
loc_823E57E4:
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

DEFINE_REX_FUNC(sub_823E78F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823E7900;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823e7950
	if (!ctx.cr6.gt) goto loc_823E7950;
	// li r30,0
	r30.s64 = 0;
loc_823E7920:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bl 0x823e7700
	ctx.lr = 0x823E7934;
	sub_823E7700(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823e7954
	if (ctx.cr0.lt) goto loc_823E7954;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823e7920
	if (ctx.cr6.lt) goto loc_823E7920;
loc_823E7950:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E7954:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823E81E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823E81E8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E8208;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r5,r29,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x822d4fa0
	ctx.lr = 0x823E821C;
	sub_822D4FA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823EB100) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823EB108;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// not r31,r5
	r31.u64 = ~ctx.r5.u64;
	// b 0x823eb12c
	goto loc_823EB12C;
loc_823EB120:
	// lwz r31,36(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823eb150
	if (ctx.cr6.eq) goto loc_823EB150;
loc_823EB12C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ea028
	ctx.lr = 0x823EB144;
	sub_823EA028(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823eb120
	if (!ctx.cr0.lt) goto loc_823EB120;
	// b 0x823eb154
	goto loc_823EB154;
loc_823EB150:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EB154:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823EC7D0) {
	REX_FUNC_PROLOGUE();
	// b 0x823f6278
	sub_823F6278(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823ECD60) {
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
	// cmpwi cr6,r11,204
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 204, ctx.xer);
	// beq cr6,0x823ecda4
	if (ctx.cr6.eq) goto loc_823ECDA4;
	// lwz r11,424(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 424);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823ECD94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,204
	ctx.r8.s64 = 204;
	// stw r9,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r9.u32);
	// stw r8,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r8.u32);
loc_823ECDA4:
	// lwz r11,424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 424);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823ecde4
	if (ctx.cr6.eq) goto loc_823ECDE4;
	// li r30,48
	r30.s64 = 48;
loc_823ECDB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r30.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823ECDD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,424(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 424);
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x823ecdb8
	if (!ctx.cr6.eq) goto loc_823ECDB8;
loc_823ECDE4:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,205
	ctx.r8.s64 = ctx.r11.s64 + 205;
	// stw r8,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r8.u32);
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

DEFINE_REX_FUNC(sub_823EF510) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r5,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r5.u32);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// sth r6,20(r4)
	REX_STORE_U16(ctx.r4.u32 + 20, ctx.r6.u16);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EF590) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823ef5ac
	if (ctx.cr6.eq) goto loc_823EF5AC;
	// stw r5,48(r4)
	REX_STORE_U32(ctx.r4.u32 + 48, ctx.r5.u32);
loc_823EF5AC:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823ef5e0
	if (ctx.cr6.eq) goto loc_823EF5E0;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r4,52
	ctx.r10.s64 = ctx.r4.s64 + 52;
	// addi r9,r7,-2
	ctx.r9.s64 = ctx.r7.s64 + -2;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823EF5C8:
	// lhzu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x823ef5c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EF5C8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x823ef5e0
	if (!ctx.cr6.eq) goto loc_823EF5E0;
	// li r6,1
	ctx.r6.s64 = 1;
loc_823EF5E0:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// sth r6,22(r4)
	REX_STORE_U16(ctx.r4.u32 + 22, ctx.r6.u16);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F05E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfd f0,26664(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 26664);
	// fmsub f13,f1,f2,f0
	ctx.f13.f64 = std::fma(ctx.f1.f64, ctx.f2.f64, -ctx.f0.f64);
	// lfd f0,15328(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 15328);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823f060c
	if (!ctx.cr6.gt) goto loc_823F060C;
	// lwz r11,1376(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,1376(r3)
	REX_STORE_U32(ctx.r3.u32 + 1376, ctx.r11.u32);
loc_823F060C:
	// frsp f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f2.f64));
	// stfs f0,1584(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 1584, temp.u32);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,1588(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 1588, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F22D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823f22fc
	if (!ctx.cr6.lt) goto loc_823F22FC;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// b 0x823f2310
	goto loc_823F2310;
loc_823F22FC:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x823f230c
	if (!ctx.cr6.gt) goto loc_823F230C;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// b 0x823f2310
	goto loc_823F2310;
loc_823F230C:
	// fmr f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f0.f64;
loc_823F2310:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823f2324
	if (!ctx.cr6.lt) goto loc_823F2324;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// b 0x823f2338
	goto loc_823F2338;
loc_823F2324:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x823f2334
	if (!ctx.cr6.gt) goto loc_823F2334;
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// b 0x823f2338
	goto loc_823F2338;
loc_823F2334:
	// fmr f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f0.f64;
loc_823F2338:
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823f234c
	if (!ctx.cr6.lt) goto loc_823F234C;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// b 0x823f2358
	goto loc_823F2358;
loc_823F234C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x823f2358
	if (ctx.cr6.gt) goto loc_823F2358;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_823F2358:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,25732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 25732);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f11,f13,f0
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f0.f64)));
	// lfs f13,32280(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32280);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f10,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f0.f64)));
	// fctiwz f13,f11
	ctx.f13.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// fctiwz f13,f12
	ctx.f13.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F5810) {
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
	ctx.lr = 0x823F5818;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,8(r4)
	r26.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// mullw r28,r10,r26
	r28.s64 = int64_t(ctx.r10.s32) * int64_t(r26.s32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823f58e4
	if (!ctx.cr6.gt) goto loc_823F58E4;
loc_823F5844:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823f5858
	if (!ctx.cr6.lt) goto loc_823F5858;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823F5858:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823f5874
	if (ctx.cr6.lt) goto loc_823F5874;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823F5874:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823f5888
	if (ctx.cr6.lt) goto loc_823F5888;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823F5888:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823f58e4
	if (!ctx.cr6.gt) goto loc_823F58E4;
	// mullw r29,r11,r26
	r29.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// beq cr6,0x823f58c0
	if (ctx.cr6.eq) goto loc_823F58C0;
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// b 0x823f58c4
	goto loc_823F58C4;
loc_823F58C0:
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
loc_823F58C4:
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823F58CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r28,r29,r28
	r28.u64 = r29.u64 + r28.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// add r30,r30,r10
	r30.u64 = r30.u64 + ctx.r10.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823f5844
	if (ctx.cr6.lt) goto loc_823F5844;
loc_823F58E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_823F854C) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F87B0) {
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
	ctx.lr = 0x823F87B8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823f8ae4
	if (ctx.cr6.eq) goto loc_823F8AE4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f8ae4
	if (ctx.cr6.eq) goto loc_823F8AE4;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r10,11(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 11);
	// addi r9,r9,2416
	ctx.r9.s64 = ctx.r9.s64 + 2416;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lwzx r25,r8,r9
	r25.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// mullw r27,r11,r25
	r27.s64 = int64_t(ctx.r11.s32) * int64_t(r25.s32);
	// beq cr6,0x823f8a0c
	if (ctx.cr6.eq) goto loc_823F8A0C;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x823f8940
	if (ctx.cr6.eq) goto loc_823F8940;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x823f887c
	if (ctx.cr6.eq) goto loc_823F887C;
	// rlwinm r31,r10,29,3,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r9,r27,-1
	ctx.r9.s64 = r27.s64 + -1;
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// mullw r9,r9,r31
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r31.s32);
	// add r30,r10,r4
	r30.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r26,r9,r4
	r26.u64 = ctx.r9.u64 + ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f8acc
	if (ctx.cr6.eq) goto loc_823F8ACC;
loc_823F882C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d4fa0
	ctx.lr = 0x823F883C;
	sub_822D4FA0(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x823f8864
	if (!ctx.cr6.gt) goto loc_823F8864;
	// mr r28,r25
	r28.u64 = r25.u64;
loc_823F8848:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823F8858;
	sub_822D4FA0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// subf r26,r31,r26
	r26.u64 = r26.u64 - r31.u64;
	// bne 0x823f8848
	if (!ctx.cr0.eq) goto loc_823F8848;
loc_823F8864:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// subf r30,r31,r30
	r30.u64 = r30.u64 - r31.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823f882c
	if (ctx.cr6.lt) goto loc_823F882C;
	// b 0x823f8acc
	goto loc_823F8ACC;
loc_823F887C:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r8,r27,-1
	ctx.r8.s64 = r27.s64 + -1;
	// addi r7,r27,-1
	ctx.r7.s64 = r27.s64 + -1;
	// rlwinm r6,r9,2,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x4;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r8,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r5,r7,2,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x4;
	// subfic r8,r6,4
	ctx.xer.ca = ctx.r6.u32 <= 4;
	ctx.r8.u64 = static_cast<uint64_t>(4) - ctx.r6.u64;
	// add r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subfic r10,r5,4
	ctx.xer.ca = ctx.r5.u32 <= 4;
	ctx.r10.u64 = static_cast<uint64_t>(4) - ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f8acc
	if (ctx.cr6.eq) goto loc_823F8ACC;
loc_823F88B8:
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// srw r11,r11,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// ble cr6,0x823f8914
	if (!ctx.cr6.gt) goto loc_823F8914;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
loc_823F88D8:
	// subfic r4,r10,4
	ctx.xer.ca = ctx.r10.u32 <= 4;
	ctx.r4.u64 = static_cast<uint64_t>(4) - ctx.r10.u64;
	// lbz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// li r3,3855
	ctx.r3.s64 = 3855;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// sraw r4,r3,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r4.s64 = ctx.r3.s32 >> temp.u32;
	// and r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 & ctx.r5.u64;
	// slw r4,r11,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stb r5,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r5.u8);
	// bne cr6,0x823f890c
	if (!ctx.cr6.eq) goto loc_823F890C;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x823f8910
	goto loc_823F8910;
loc_823F890C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_823F8910:
	// bdnz 0x823f88d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F88D8;
loc_823F8914:
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// bne cr6,0x823f8928
	if (!ctx.cr6.eq) goto loc_823F8928;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// b 0x823f892c
	goto loc_823F892C;
loc_823F8928:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
loc_823F892C:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823f88b8
	if (ctx.cr6.lt) goto loc_823F88B8;
	// b 0x823f8acc
	goto loc_823F8ACC;
loc_823F8940:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r9,r27,-1
	ctx.r9.s64 = r27.s64 + -1;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// clrlwi r6,r9,30
	ctx.r6.u64 = ctx.r9.u32 & 0x3;
	// addi r7,r27,-1
	ctx.r7.s64 = r27.s64 + -1;
	// subfic r5,r10,3
	ctx.xer.ca = ctx.r10.u32 <= 3;
	ctx.r5.u64 = static_cast<uint64_t>(3) - ctx.r10.u64;
	// rlwinm r10,r8,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r7,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// subfic r6,r6,3
	ctx.xer.ca = ctx.r6.u32 <= 3;
	ctx.r6.u64 = static_cast<uint64_t>(3) - ctx.r6.u64;
	// add r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f8acc
	if (ctx.cr6.eq) goto loc_823F8ACC;
loc_823F8984:
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// srw r11,r11,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// ble cr6,0x823f89e0
	if (!ctx.cr6.gt) goto loc_823F89E0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
loc_823F89A4:
	// subfic r4,r10,6
	ctx.xer.ca = ctx.r10.u32 <= 6;
	ctx.r4.u64 = static_cast<uint64_t>(6) - ctx.r10.u64;
	// lbz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// li r3,16191
	ctx.r3.s64 = 16191;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// sraw r4,r3,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r4.s64 = ctx.r3.s32 >> temp.u32;
	// and r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 & ctx.r5.u64;
	// slw r4,r11,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stb r5,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// bne cr6,0x823f89d8
	if (!ctx.cr6.eq) goto loc_823F89D8;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// b 0x823f89dc
	goto loc_823F89DC;
loc_823F89D8:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_823F89DC:
	// bdnz 0x823f89a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F89A4;
loc_823F89E0:
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bne cr6,0x823f89f4
	if (!ctx.cr6.eq) goto loc_823F89F4;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// b 0x823f89f8
	goto loc_823F89F8;
loc_823F89F4:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
loc_823F89F8:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823f8984
	if (ctx.cr6.lt) goto loc_823F8984;
	// b 0x823f8acc
	goto loc_823F8ACC;
loc_823F8A0C:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r8,r27,-1
	ctx.r8.s64 = r27.s64 + -1;
	// addi r7,r27,-1
	ctx.r7.s64 = r27.s64 + -1;
	// clrlwi r6,r9,29
	ctx.r6.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r9,r8,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r5,r7,29
	ctx.r5.u64 = ctx.r7.u32 & 0x7;
	// subfic r8,r6,7
	ctx.xer.ca = ctx.r6.u32 <= 7;
	ctx.r8.u64 = static_cast<uint64_t>(7) - ctx.r6.u64;
	// add r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subfic r10,r5,7
	ctx.xer.ca = ctx.r5.u32 <= 7;
	ctx.r10.u64 = static_cast<uint64_t>(7) - ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f8acc
	if (ctx.cr6.eq) goto loc_823F8ACC;
loc_823F8A48:
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// srw r11,r11,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// ble cr6,0x823f8aa4
	if (!ctx.cr6.gt) goto loc_823F8AA4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
loc_823F8A68:
	// subfic r4,r10,7
	ctx.xer.ca = ctx.r10.u32 <= 7;
	ctx.r4.u64 = static_cast<uint64_t>(7) - ctx.r10.u64;
	// lbz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// li r3,32639
	ctx.r3.s64 = 32639;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// sraw r4,r3,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r4.s64 = ctx.r3.s32 >> temp.u32;
	// and r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 & ctx.r5.u64;
	// slw r4,r11,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stb r5,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r5.u8);
	// bne cr6,0x823f8a9c
	if (!ctx.cr6.eq) goto loc_823F8A9C;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x823f8aa0
	goto loc_823F8AA0;
loc_823F8A9C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_823F8AA0:
	// bdnz 0x823f8a68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F8A68;
loc_823F8AA4:
	// cmpwi cr6,r8,7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 7, ctx.xer);
	// bne cr6,0x823f8ab8
	if (!ctx.cr6.eq) goto loc_823F8AB8;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// b 0x823f8abc
	goto loc_823F8ABC;
loc_823F8AB8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_823F8ABC:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823f8a48
	if (ctx.cr6.lt) goto loc_823F8A48;
loc_823F8ACC:
	// lbz r11,11(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 11);
	// stw r27,0(r24)
	REX_STORE_U32(r24.u32 + 0, r27.u32);
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r27.s32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,4(r24)
	REX_STORE_U32(r24.u32 + 4, ctx.r11.u32);
loc_823F8AE4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82405940) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r5,4
	ctx.r5.s64 = 262144;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82409e00
	ctx.lr = 0x82405970;
	sub_82409E00(ctx, base);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82409e00
	ctx.lr = 0x82405984;
	sub_82409E00(ctx, base);
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_824059B4:
	// rlwinm r8,r11,31,1,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,2,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFF0;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r5,r11,2,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// clrlwi r31,r7,28
	r31.u64 = ctx.r7.u32 & 0xF;
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r7,r7,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// stvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r31,r5,r4
	REX_STORE_U32(ctx.r5.u32 + ctx.r4.u32, r31.u32);
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwx r7,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u32);
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bdnz 0x824059b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824059B4;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,16336
	ctx.r10.s64 = ctx.r10.s64 + 16336;
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82405A1C:
	// lvx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcuxwfp128 v62,v62,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v62.f32, rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// stvx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v62,v62,v63
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82405a1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82405A1C;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82405A48:
	// rlwinm r9,r11,2,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFF0;
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// rlwinm r6,r11,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lvx128 v62,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v62,r6,r5
	temp.u32 = ctx.r6.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v63,v62,1,1
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 147), 1));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82405a48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82405A48;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

DEFINE_REX_FUNC(sub_8240EF70) {
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
	ctx.lr = 0x8240EF78;
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f29.u64);
	// stfd f30,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// ble cr6,0x8240f048
	if (!ctx.cr6.gt) goto loc_8240F048;
loc_8240EFB8:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8240f03c
	if (!ctx.cr6.gt) goto loc_8240F03C;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8240EFCC:
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r11,r23
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x8240efe8
	if (!ctx.cr6.lt) goto loc_8240EFE8;
	// stfsx f0,r11,r23
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + r23.u32, temp.u32);
	// b 0x8240eff4
	goto loc_8240EFF4;
loc_8240EFE8:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x8240eff4
	if (!ctx.cr6.gt) goto loc_8240EFF4;
	// stfsx f13,r11,r23
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + r23.u32, temp.u32);
loc_8240EFF4:
	// lfsx f12,r11,r22
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x8240f008
	if (!ctx.cr6.lt) goto loc_8240F008;
	// stfsx f0,r11,r22
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + r22.u32, temp.u32);
	// b 0x8240f014
	goto loc_8240F014;
loc_8240F008:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x8240f014
	if (!ctx.cr6.gt) goto loc_8240F014;
	// stfsx f13,r11,r22
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + r22.u32, temp.u32);
loc_8240F014:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfsx f12,r11,r23
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lfsx f11,r11,r22
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f8,f12,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fadds f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfsx f12,r11,r5
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, temp.u32);
	// stfsx f11,r11,r4
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, temp.u32);
	// bdnz 0x8240efcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240EFCC;
loc_8240F03C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8240efb8
	if (ctx.cr6.lt) goto loc_8240EFB8;
loc_8240F048:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f0.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f9,16288(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16288);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f7,f7,f9
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// ble cr6,0x8240f0c4
	if (!ctx.cr6.gt) goto loc_8240F0C4;
loc_8240F070:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8240f0b8
	if (!ctx.cr6.gt) goto loc_8240F0B8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8240F084:
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f9,r8,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f6,r8,r4
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fsubs f6,f6,f7
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fmadds f11,f9,f9,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f11.f64)));
	// fmadds f10,f6,f6,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f6.f64, ctx.f6.f64, ctx.f10.f64)));
	// fmadds f12,f6,f9,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, ctx.f9.f64, ctx.f12.f64)));
	// bdnz 0x8240f084
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240F084;
loc_8240F0B8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8240f070
	if (ctx.cr6.lt) goto loc_8240F070;
loc_8240F0C4:
	// fsubs f9,f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f5,f12
	ctx.f5.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,16228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16228);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-30032(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -30032);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f6.f64 = double(temp.f32);
	// fdivs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 / ctx.f12.f64));
	// fcmpu cr6,f5,f10
	ctx.cr6.compare(ctx.f5.f64, ctx.f10.f64);
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f11.f64)));
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsqrts f9,f11
	ctx.f9.f64 = double(float(sqrt(ctx.f11.f64)));
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fmuls f10,f12,f6
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f9,f11,f6
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmadds f12,f10,f10,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f13.f64)));
	// fmadds f11,f9,f9,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f13.f64)));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fdivs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// fmuls f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// bge cr6,0x8240f140
	if (!ctx.cr6.lt) goto loc_8240F140;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
loc_8240F140:
	// fmuls f5,f12,f8
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// fmuls f4,f11,f8
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmadds f5,f10,f7,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f10.f64, ctx.f7.f64, ctx.f5.f64)));
	// fmadds f4,f9,f7,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f9.f64, ctx.f7.f64, ctx.f4.f64)));
	// ble cr6,0x8240f1fc
	if (!ctx.cr6.gt) goto loc_8240F1FC;
loc_8240F160:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8240f1e4
	if (!ctx.cr6.gt) goto loc_8240F1E4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8240F174:
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f3,r8,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f10
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// lfsx f1,r8,r4
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f31,f3,f9
	f31.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// fmadds f2,f1,f12,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f1.f64, ctx.f12.f64, ctx.f2.f64)));
	// fmadds f31,f1,f11,f31
	f31.f64 = double(float(std::fma(ctx.f1.f64, ctx.f11.f64, f31.f64)));
	// fsubs f2,f2,f5
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// fsubs f31,f31,f4
	f31.f64 = double(float(f31.f64 - ctx.f4.f64));
	// fmadds f30,f2,f12,f8
	f30.f64 = double(float(std::fma(ctx.f2.f64, ctx.f12.f64, ctx.f8.f64)));
	// fmadds f29,f31,f11,f8
	f29.f64 = double(float(std::fma(f31.f64, ctx.f11.f64, ctx.f8.f64)));
	// fmadds f2,f2,f10,f7
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f10.f64, ctx.f7.f64)));
	// fmadds f31,f31,f9,f7
	f31.f64 = double(float(std::fma(f31.f64, ctx.f9.f64, ctx.f7.f64)));
	// fsubs f30,f30,f1
	f30.f64 = double(float(f30.f64 - ctx.f1.f64));
	// fsubs f1,f29,f1
	ctx.f1.f64 = double(float(f29.f64 - ctx.f1.f64));
	// fsubs f2,f2,f3
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fsubs f3,f31,f3
	ctx.f3.f64 = double(float(f31.f64 - ctx.f3.f64));
	// fmuls f31,f30,f30
	f31.f64 = double(float(f30.f64 * f30.f64));
	// fmuls f1,f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmadds f2,f2,f2,f31
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f2.f64, f31.f64)));
	// fmadds f3,f3,f3,f1
	ctx.f3.f64 = double(float(std::fma(ctx.f3.f64, ctx.f3.f64, ctx.f1.f64)));
	// fadds f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// fadds f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// bdnz 0x8240f174
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240F174;
loc_8240F1E4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8240f160
	if (ctx.cr6.lt) goto loc_8240F160;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8240f1fc
	if (!ctx.cr6.gt) goto loc_8240F1FC;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
loc_8240F1FC:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8240f208
	if (!ctx.cr6.gt) goto loc_8240F208;
	// fmr f10,f9
	ctx.f10.f64 = ctx.f9.f64;
loc_8240F208:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8240f214
	if (!ctx.cr6.gt) goto loc_8240F214;
	// fmr f5,f4
	ctx.f5.f64 = ctx.f4.f64;
loc_8240F214:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8240f274
	if (!ctx.cr6.gt) goto loc_8240F274;
loc_8240F220:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8240f268
	if (!ctx.cr6.gt) goto loc_8240F268;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8240F234:
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f0,r8,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfsx f13,r8,r4
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f0.f64)));
	// fsubs f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// stfsx f0,r8,r3
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, temp.u32);
	// bdnz 0x8240f234
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240F234;
loc_8240F268:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8240f220
	if (ctx.cr6.lt) goto loc_8240F220;
loc_8240F274:
	// lfs f0,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// ble cr6,0x8240f2d8
	if (!ctx.cr6.gt) goto loc_8240F2D8;
loc_8240F288:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8240f2cc
	if (!ctx.cr6.gt) goto loc_8240F2CC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8240F29C:
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f5,r8,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f5.f64 = double(temp.f32);
	// fcmpu cr6,f5,f13
	ctx.cr6.compare(ctx.f5.f64, ctx.f13.f64);
	// bge cr6,0x8240f2b8
	if (!ctx.cr6.lt) goto loc_8240F2B8;
	// fmr f13,f5
	ctx.f13.f64 = ctx.f5.f64;
loc_8240F2B8:
	// fcmpu cr6,f5,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// ble cr6,0x8240f2c4
	if (!ctx.cr6.gt) goto loc_8240F2C4;
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
loc_8240F2C4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8240f29c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240F29C;
loc_8240F2CC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8240f288
	if (ctx.cr6.lt) goto loc_8240F288;
loc_8240F2D8:
	// fmadds f11,f13,f12,f8
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f8.f64)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmadds f12,f0,f12,f8
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f8.f64)));
	// fmadds f9,f0,f10,f7
	ctx.f9.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f7.f64)));
	// fmadds f13,f13,f10,f7
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f7.f64)));
	// lfs f0,2028(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2028);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f11,f0,f6
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f6.f64)));
	// fmadds f12,f12,f0,f6
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f6.f64)));
	// fmadds f10,f9,f0,f6
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f6.f64)));
	// fmadds f0,f13,f0,f6
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f6.f64)));
	// fctiwz f13,f11
	ctx.f13.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f13,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// fctiwz f13,f12
	ctx.f13.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// fctiwz f12,f10
	ctx.f12.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f13,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bge cr6,0x8240f340
	if (!ctx.cr6.lt) goto loc_8240F340;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8240f34c
	goto loc_8240F34C;
loc_8240F340:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x8240f34c
	if (!ctx.cr6.gt) goto loc_8240F34C;
	// li r11,255
	ctx.r11.s64 = 255;
loc_8240F34C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x8240f35c
	if (!ctx.cr6.lt) goto loc_8240F35C;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8240f368
	goto loc_8240F368;
loc_8240F35C:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x8240f368
	if (!ctx.cr6.gt) goto loc_8240F368;
	// li r8,255
	ctx.r8.s64 = 255;
loc_8240F368:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8240f378
	if (!ctx.cr6.lt) goto loc_8240F378;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8240f384
	goto loc_8240F384;
loc_8240F378:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x8240f384
	if (!ctx.cr6.gt) goto loc_8240F384;
	// li r10,255
	ctx.r10.s64 = 255;
loc_8240F384:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x8240f394
	if (!ctx.cr6.lt) goto loc_8240F394;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8240f3a0
	goto loc_8240F3A0;
loc_8240F394:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8240f3a0
	if (!ctx.cr6.gt) goto loc_8240F3A0;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8240F3A0:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8240f3e4
	if (ctx.cr6.lt) goto loc_8240F3E4;
	// bne cr6,0x8240f3fc
	if (!ctx.cr6.eq) goto loc_8240F3FC;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8240f3e4
	if (ctx.cr6.lt) goto loc_8240F3E4;
	// bne cr6,0x8240f3fc
	if (!ctx.cr6.eq) goto loc_8240F3FC;
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// bge cr6,0x8240f3c8
	if (!ctx.cr6.lt) goto loc_8240F3C8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x8240f3cc
	goto loc_8240F3CC;
loc_8240F3C8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8240F3CC:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// bge cr6,0x8240f3dc
	if (!ctx.cr6.lt) goto loc_8240F3DC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x8240f3fc
	goto loc_8240F3FC;
loc_8240F3DC:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// b 0x8240f3fc
	goto loc_8240F3FC;
loc_8240F3E4:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_8240F3FC:
	// clrlwi r30,r11,24
	r30.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r28,r10,24
	r28.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r31,r8,24
	r31.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r29,r9,24
	r29.u64 = ctx.r9.u32 & 0xFF;
	// mulli r10,r30,88
	ctx.r10.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(88));
	// mulli r11,r28,168
	ctx.r11.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(168));
	// mulli r8,r31,88
	ctx.r8.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(88));
	// mulli r9,r29,168
	ctx.r9.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(168));
	// mulli r6,r30,168
	ctx.r6.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(168));
	// mulli r7,r28,88
	ctx.r7.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(88));
	// mulli r4,r31,168
	ctx.r4.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(168));
	// mulli r5,r29,88
	ctx.r5.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(88));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r27,r29,257
	r27.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(257));
	// sth r11,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
	// sth r10,106(r1)
	REX_STORE_U16(ctx.r1.u32 + 106, ctx.r10.u16);
	// sth r27,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, r27.u16);
	// mulli r3,r28,257
	ctx.r3.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(257));
	// sth r3,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r3.u16);
	// mulli r26,r30,257
	r26.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(257));
	// sth r26,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, r26.u16);
	// mulli r25,r31,257
	r25.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(257));
	// sth r25,102(r1)
	REX_STORE_U16(ctx.r1.u32 + 102, r25.u16);
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// sth r9,108(r1)
	REX_STORE_U16(ctx.r1.u32 + 108, ctx.r9.u16);
	// li r27,0
	r27.s64 = 0;
	// sth r8,110(r1)
	REX_STORE_U16(ctx.r1.u32 + 110, ctx.r8.u16);
loc_8240F470:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r26,0
	r26.s64 = 0;
	// add r25,r27,r11
	r25.u64 = r27.u64 + ctx.r11.u64;
loc_8240F47C:
	// add r11,r27,r26
	ctx.r11.u64 = r27.u64 + r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f2,r11,r22
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f1,r11,r23
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8240eaf0
	ctx.lr = 0x8240F494;
	sub_8240EAF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stbx r11,r25,r26
	REX_STORE_U8(r25.u32 + r26.u32, ctx.r11.u8);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(r26.s32, 4, ctx.xer);
	// blt cr6,0x8240f47c
	if (ctx.cr6.lt) goto loc_8240F47C;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpwi cr6,r27,16
	ctx.cr6.compare<int32_t>(r27.s32, 16, ctx.xer);
	// blt cr6,0x8240f470
	if (ctx.cr6.lt) goto loc_8240F470;
	// lbz r9,87(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r7,91(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r11,83(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lbz r5,95(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 95);
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lbz r8,86(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 86);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lbz r6,90(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 90);
	// rotlwi r5,r5,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lbz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lbz r4,94(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 94);
	// or r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 | ctx.r6.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// or r6,r5,r4
	ctx.r6.u64 = ctx.r5.u64 | ctx.r4.u64;
	// lbz r27,85(r1)
	r27.u64 = REX_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r26,89(r1)
	r26.u64 = REX_LOAD_U8(ctx.r1.u32 + 89);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r10,93(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 93);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// or r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 | ctx.r3.u64;
	// lbz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// or r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 | r27.u64;
	// lbz r25,92(r1)
	r25.u64 = REX_LOAD_U8(ctx.r1.u32 + 92);
	// or r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 | r26.u64;
	// stb r28,1(r24)
	REX_STORE_U8(r24.u32 + 1, r28.u8);
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// stb r29,0(r24)
	REX_STORE_U8(r24.u32 + 0, r29.u8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r30,3(r24)
	REX_STORE_U8(r24.u32 + 3, r30.u8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r31,2(r24)
	REX_STORE_U8(r24.u32 + 2, r31.u8);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// or r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 | ctx.r4.u64;
	// stb r11,5(r24)
	REX_STORE_U8(r24.u32 + 5, ctx.r11.u8);
	// or r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 | r25.u64;
	// stb r9,4(r24)
	REX_STORE_U8(r24.u32 + 4, ctx.r9.u8);
	// stb r8,7(r24)
	REX_STORE_U8(r24.u32 + 7, ctx.r8.u8);
	// stb r10,6(r24)
	REX_STORE_U8(r24.u32 + 6, ctx.r10.u8);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
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

DEFINE_REX_FUNC(sub_82425F40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// beq cr6,0x82425f74
	if (ctx.cr6.eq) goto loc_82425F74;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,-88
	ctx.r10.s64 = ctx.r1.s64 + -88;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82425F6C:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82425f6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82425F6C;
loc_82425F74:
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r7,r4,12
	ctx.r7.s64 = ctx.r4.s64 + 12;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32249
	ctx.r3.s64 = -2113470464;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r31,-32255
	r31.s64 = -2113863680;
	// lis r30,-32256
	r30.s64 = -2113929216;
	// lfs f8,-7224(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -7224);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,17176(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 17176);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r1,-76
	ctx.r8.s64 = ctx.r1.s64 + -76;
	// lfs f10,22428(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 22428);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,16288(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16288);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,-30112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + -30112);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,2000(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 2000);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,29356(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 29356);
	ctx.f13.f64 = double(temp.f32);
loc_82425FBC:
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82425fd0
	if (ctx.cr6.eq) goto loc_82425FD0;
	// lfs f6,-4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
loc_82425FD0:
	// fmadds f6,f0,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// rlwinm r11,r9,31,1,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r4,r10,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// fctiwz f6,f6
	ctx.f6.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f6,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.f6.u64);
	// lwz r10,-92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// rlwinm r3,r10,28,0,3
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF0000000;
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// stwx r4,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r4.u32);
	// beq cr6,0x8242606c
	if (ctx.cr6.eq) goto loc_8242606C;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// std r10,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.r10.u64);
	// lfd f6,-88(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// fnmsubs f0,f6,f11,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f11.f64, -ctx.f0.f64)));
	// beq cr6,0x82426030
	if (ctx.cr6.eq) goto loc_82426030;
	// lfs f6,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f6,f0,f10,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f6.f64)));
	// stfs f6,0(r8)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_82426030:
	// cmplwi cr6,r9,12
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12, ctx.xer);
	// bge cr6,0x8242606c
	if (!ctx.cr6.lt) goto loc_8242606C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242604c
	if (ctx.cr6.eq) goto loc_8242604C;
	// lfs f6,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f6,f0,f9,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f6.f64)));
	// stfs f6,8(r8)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
loc_8242604C:
	// lfs f6,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// fmadds f6,f0,f8,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, ctx.f6.f64)));
	// stfs f6,12(r8)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// beq cr6,0x8242606c
	if (ctx.cr6.eq) goto loc_8242606C;
	// lfs f6,16(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f0,f0,f7,f6
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f7.f64, ctx.f6.f64)));
	// stfs f0,16(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 16, temp.u32);
loc_8242606C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82425fbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82425FBC;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// stw r11,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8242BE80) {
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
	ctx.lr = 0x8242BE88;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// li r28,0
	r28.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_8242BEA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x8242bc70
	ctx.lr = 0x8242BEB0;
	sub_8242BC70(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne 0x8242becc
	if (!ctx.cr0.eq) goto loc_8242BECC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8242bea4
	if (ctx.cr6.lt) goto loc_8242BEA4;
loc_8242BECC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8242bfa0
	if (!ctx.cr6.eq) goto loc_8242BFA0;
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x823cd118
	ctx.lr = 0x8242BEE4;
	sub_823CD118(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8242bfa0
	if (ctx.cr0.eq) goto loc_8242BFA0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8242bc08
	ctx.lr = 0x8242BF00;
	sub_8242BC08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// blt 0x8242bf98
	if (ctx.cr0.lt) goto loc_8242BF98;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823cd118
	ctx.lr = 0x8242BF1C;
	sub_823CD118(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8242bf80
	if (ctx.cr0.eq) goto loc_8242BF80;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d4fa0
	ctx.lr = 0x8242BF38;
	sub_822D4FA0(ctx, base);
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x823cd250
	ctx.lr = 0x8242BF44;
	sub_823CD250(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r28,0
	r28.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x8242bf64
	if (!ctx.cr6.lt) goto loc_8242BF64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8242BF64:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8242bc70
	ctx.lr = 0x8242BF6C;
	sub_8242BC70(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x8242bfa0
	goto loc_8242BFA0;
loc_8242BF80:
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x823cd250
	ctx.lr = 0x8242BF8C;
	sub_823CD250(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_8242BF98:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823cd250
	ctx.lr = 0x8242BFA0;
	sub_823CD250(ctx, base);
loc_8242BFA0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8242bfb8
	if (ctx.cr6.eq) goto loc_8242BFB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
loc_8242BFB8:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82434458) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// clrlwi r6,r4,16
	ctx.r6.u64 = ctx.r4.u32 & 0xFFFF;
	// li r11,128
	ctx.r11.s64 = 128;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r11,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8243aaa0
	ctx.lr = 0x824344A0;
	sub_8243AAA0(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824344CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

DEFINE_REX_FUNC(sub_82435160) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82435168;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,88(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x8242c6e0
	ctx.lr = 0x8243517C;
	sub_8242C6E0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r30,r11,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x824351a0
	if (ctx.cr0.eq) goto loc_824351A0;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824351A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824351A0:
	// lwz r3,184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 184);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824351C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x824351e0
	if (ctx.cr6.eq) goto loc_824351E0;
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
	ctx.lr = 0x824351E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824351E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82435E70) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82435d70
	sub_82435D70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82435FC0) {
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
	ctx.lr = 0x82435FC8;
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82435ff4
	if (!ctx.cr6.eq) goto loc_82435FF4;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r31,r11,596
	r31.s64 = ctx.r11.s64 + 596;
loc_82435FF4:
	// rlwinm. r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82436000
	if (ctx.cr0.eq) goto loc_82436000;
	// ori r29,r29,2
	r29.u64 = r29.u64 | 2;
loc_82436000:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm. r23,r29,0,30,30
	r23.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// lfs f31,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// beq 0x82436014
	if (ctx.cr0.eq) goto loc_82436014;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
loc_82436014:
	// stfs f1,240(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 240, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8243a6c0
	ctx.lr = 0x82436024;
	sub_8243A6C0(ctx, base);
	// stw r3,248(r30)
	REX_STORE_U32(r30.u32 + 248, ctx.r3.u32);
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r11,252(r30)
	REX_STORE_U32(r30.u32 + 252, ctx.r11.u32);
	// bl 0x8243a300
	ctx.lr = 0x82436038;
	sub_8243A300(ctx, base);
	// sth r3,256(r30)
	REX_STORE_U16(r30.u32 + 256, ctx.r3.u16);
	// lhz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 12);
	// stw r11,244(r30)
	REX_STORE_U32(r30.u32 + 244, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82436058
	if (!ctx.cr6.eq) goto loc_82436058;
	// lwz r28,108(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 108);
	// b 0x82436064
	goto loc_82436064;
loc_82436058:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r28,108(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
loc_82436064:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82436094
	if (!ctx.cr6.eq) goto loc_82436094;
	// lwz r28,252(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 252);
	// li r11,375
	ctx.r11.s64 = 375;
	// divwu r11,r28,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? r28.u32 / ctx.r11.u32 : 0);
	// mulli r11,r11,375
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(375));
	// subf. r11,r11,r28
	ctx.r11.u64 = r28.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82436094
	if (ctx.cr0.eq) goto loc_82436094;
	// subf r28,r11,r28
	r28.u64 = r28.u64 - ctx.r11.u64;
	// cmplwi cr6,r28,32000
	ctx.cr6.compare<uint32_t>(r28.u32, 32000, ctx.xer);
	// bge cr6,0x82436094
	if (!ctx.cr6.lt) goto loc_82436094;
	// addi r28,r28,375
	r28.s64 = r28.s64 + 375;
loc_82436094:
	// lhz r11,2(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 2);
	// addi r27,r30,4
	r27.s64 = r30.s64 + 4;
	// stw r28,112(r30)
	REX_STORE_U32(r30.u32 + 112, r28.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stw r28,108(r30)
	REX_STORE_U32(r30.u32 + 108, r28.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// bl 0x82444d90
	ctx.lr = 0x824360BC;
	sub_82444D90(ctx, base);
	// li r25,0
	r25.s64 = 0;
	// lis r11,4919
	ctx.r11.s64 = 322371584;
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r25,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// ori r22,r11,61441
	r22.u64 = ctx.r11.u64 | 61441;
	// blt 0x824362f0
	if (ctx.cr0.lt) goto loc_824362F0;
	// lhz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x824360f0
	if (!ctx.cr6.eq) goto loc_824360F0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8242f460
	ctx.lr = 0x824360EC;
	sub_8242F460(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_824360F0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x824362f0
	if (ctx.cr6.lt) goto loc_824362F0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r29,1
	r29.s64 = 1;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// addi r26,r11,-6500
	r26.s64 = ctx.r11.s64 + -6500;
	// beq cr6,0x82436118
	if (ctx.cr6.eq) goto loc_82436118;
	// lwz r11,252(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 252);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// beq cr6,0x824361a0
	if (ctx.cr6.eq) goto loc_824361A0;
loc_82436118:
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8242f220
	ctx.lr = 0x82436120;
	sub_8242F220(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824362f0
	if (ctx.cr0.lt) goto loc_824362F0;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bne cr6,0x8243614c
	if (!ctx.cr6.eq) goto loc_8243614C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,240(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,16632(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16632);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_8243614C:
	// stw r25,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r25.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243616C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82436188;
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
	ctx.lr = 0x8243619C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,260(r30)
	REX_STORE_U32(r30.u32 + 260, r29.u32);
loc_824361A0:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82436228
	if (!ctx.cr6.eq) goto loc_82436228;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82436228
	if (!ctx.cr6.eq) goto loc_82436228;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8242f3d0
	ctx.lr = 0x824361C0;
	sub_8242F3D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824362f0
	if (ctx.cr0.lt) goto loc_824362F0;
	// stw r29,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// stw r25,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r25.u32);
	// stw r25,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824361F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82436210;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82436224;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,264(r30)
	REX_STORE_U32(r30.u32 + 264, r29.u32);
loc_82436228:
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// addi r4,r30,184
	ctx.r4.s64 = r30.s64 + 184;
	// lwz r9,160(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 160);
	// addi r10,r30,180
	ctx.r10.s64 = r30.s64 + 180;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,180(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243626C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x824362f0
	if (ctx.cr0.eq) goto loc_824362F0;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x824362f0
	if (ctx.cr6.eq) goto loc_824362F0;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16385
	ctx.r11.u64 = ctx.r11.u64 | 16385;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x824362f0
	if (ctx.cr6.eq) goto loc_824362F0;
	// srawi r11,r31,16
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = r31.s32 >> 16;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmpwi cr6,r11,2198
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2198, ctx.xer);
	// beq cr6,0x824362f0
	if (ctx.cr6.eq) goto loc_824362F0;
	// lis r11,-30600
	ctx.r11.s64 = -2005401600;
	// ori r11,r11,120
	ctx.r11.u64 = ctx.r11.u64 | 120;
	// subf. r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824362e8
	if (ctx.cr0.eq) goto loc_824362E8;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x824362e8
	if (ctx.cr6.eq) goto loc_824362E8;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// ori r10,r10,65417
	ctx.r10.u64 = ctx.r10.u64 | 65417;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824362e8
	if (ctx.cr6.eq) goto loc_824362E8;
	// lis r10,30
	ctx.r10.s64 = 1966080;
	// ori r10,r10,65417
	ctx.r10.u64 = ctx.r10.u64 | 65417;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824362f0
	if (!ctx.cr6.eq) goto loc_824362F0;
	// lis r31,-30570
	r31.s64 = -2003435520;
	// ori r31,r31,3
	r31.u64 = r31.u64 | 3;
	// b 0x824362f0
	goto loc_824362F0;
loc_824362E8:
	// lis r31,-30570
	r31.s64 = -2003435520;
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
loc_824362F0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8242c468
	ctx.lr = 0x824362F8;
	sub_8242C468(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8242c468
	ctx.lr = 0x82436300;
	sub_8242C468(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x82436390
	if (ctx.cr6.lt) goto loc_82436390;
	// lwz r11,264(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82436334
	if (ctx.cr6.eq) goto loc_82436334;
	// lwz r3,184(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 184);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82436330;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82436334:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x82436390
	if (ctx.cr6.lt) goto loc_82436390;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82436350;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82436390
	if (ctx.cr0.lt) goto loc_82436390;
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,180(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82436374;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82436390
	if (ctx.cr0.lt) goto loc_82436390;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r30,228
	ctx.r3.s64 = r30.s64 + 228;
	// bl 0x82437738
	ctx.lr = 0x8243638C;
	sub_82437738(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82436390:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_824433D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x824433D8;
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
	ctx.lr = 0x82443400;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// li r7,12
	ctx.r7.s64 = 12;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82443424;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244343C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_824454D8) {
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
	// beq cr6,0x82445514
	if (ctx.cr6.eq) goto loc_82445514;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8229a710
	ctx.lr = 0x82445504;
	sub_8229A710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824452e0
	ctx.lr = 0x8244550C;
	sub_824452E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82460ee8
	ctx.lr = 0x82445514;
	sub_82460EE8(ctx, base);
loc_82445514:
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

DEFINE_REX_FUNC(sub_8244A1E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8244A1F0;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8244a318
	if (ctx.cr6.eq) goto loc_8244A318;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8244a318
	if (ctx.cr6.lt) goto loc_8244A318;
	// lwz r11,472(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8244a318
	if (!ctx.cr6.eq) goto loc_8244A318;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82320728
	ctx.lr = 0x8244A228;
	sub_82320728(ctx, base);
	// lwz r10,488(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 488);
	// lwz r9,484(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 484);
	// li r29,3
	r29.s64 = 3;
	// li r28,1
	r28.s64 = 1;
	// lwz r11,336(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 336);
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r10,452(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 452);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// blt cr6,0x8244a268
	if (ctx.cr6.lt) goto loc_8244A268;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_8244A268:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lhz r9,110(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 110);
	// stw r9,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// bl 0x82320670
	ctx.lr = 0x8244A288;
	sub_82320670(ctx, base);
	// lwz r8,624(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 624);
	// lwz r7,496(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 496);
	// lwz r6,492(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 492);
	// stw r28,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r28.u32);
	// stw r29,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// stw r8,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// stw r7,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// stw r6,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// stw r29,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r29.u32);
	// stw r28,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, r28.u32);
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244a2d0
	if (ctx.cr6.eq) goto loc_8244A2D0;
	// bl 0x82469ce0
	ctx.lr = 0x8244A2C0;
	sub_82469CE0(ctx, base);
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// bl 0x82460ee8
	ctx.lr = 0x8244A2C8;
	sub_82460EE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,568(r31)
	REX_STORE_U32(r31.u32 + 568, ctx.r11.u32);
loc_8244A2D0:
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x82460ed8
	ctx.lr = 0x8244A2D8;
	sub_82460ED8(ctx, base);
	// stw r3,568(r31)
	REX_STORE_U32(r31.u32 + 568, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8244a2f4
	if (!ctx.cr6.eq) goto loc_8244A2F4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822d4ed8
	return;
loc_8244A2F4:
	// bl 0x82320770
	ctx.lr = 0x8244A2F8;
	sub_82320770(ctx, base);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246a340
	ctx.lr = 0x8244A30C;
	sub_8246A340(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8244a318
	if (ctx.cr6.lt) goto loc_8244A318;
	// stw r28,472(r30)
	REX_STORE_U32(r30.u32 + 472, r28.u32);
loc_8244A318:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82451D48) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,27816
	ctx.r3.s64 = ctx.r11.s64 + 27816;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824520A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r6,12(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,24(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfs f10,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,-16(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// lfs f11,-16(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f13,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r8,5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 5, ctx.xer);
	// fsubs f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// bgt cr6,0x824522ac
	if (ctx.cr6.gt) goto loc_824522AC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x824521a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_824521A0;
	// bdzf 4*cr6+eq,0x82452158
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82452158;
	// bdzf 4*cr6+eq,0x824521e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_824521E8;
	// bdzf 4*cr6+eq,0x82452234
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82452234;
	// bne cr6,0x82452274
	if (!ctx.cr6.eq) goto loc_82452274;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824522ac
	if (ctx.cr6.eq) goto loc_824522AC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
loc_82452124:
	// lfsx f10,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fnmsubs f8,f11,f13,f9
	ctx.f8.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f13.f64, -ctx.f9.f64)));
	// fmadds f13,f8,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// dcbt r0,r10
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82452124
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82452124;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
loc_82452158:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824522ac
	if (ctx.cr6.eq) goto loc_824522AC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
loc_8245216C:
	// lfsx f10,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fnmsubs f8,f11,f13,f9
	ctx.f8.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f13.f64, -ctx.f9.f64)));
	// fmadds f13,f8,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f13.f64)));
	// dcbt r0,r10
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// bdnz 0x8245216c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8245216C;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
loc_824521A0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824522ac
	if (ctx.cr6.eq) goto loc_824522AC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
loc_824521B4:
	// lfsx f10,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fnmsubs f8,f11,f13,f9
	ctx.f8.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f13.f64, -ctx.f9.f64)));
	// fmadds f13,f8,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f13.f64)));
	// dcbt r0,r10
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// bdnz 0x824521b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824521B4;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
loc_824521E8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824522ac
	if (ctx.cr6.eq) goto loc_824522AC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
loc_824521FC:
	// lfsx f10,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fnmsubs f8,f11,f13,f9
	ctx.f8.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f13.f64, -ctx.f9.f64)));
	// fmadds f13,f8,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// dcbt r0,r10
	// fadds f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// bdnz 0x824521fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824521FC;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
loc_82452234:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824522ac
	if (ctx.cr6.eq) goto loc_824522AC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
loc_82452248:
	// fmuls f0,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfsx f11,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f11,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f0.f64)));
	// dcbt r0,r10
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82452248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82452248;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
loc_82452274:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824522ac
	if (ctx.cr6.eq) goto loc_824522AC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
loc_82452288:
	// fmuls f0,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfsx f11,r9,r11
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f11,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f0.f64)));
	// dcbt r0,r10
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82452288
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82452288;
loc_824522AC:
	// stfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245CFC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8245CFD0;
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x824d440c
	ctx.lr = 0x8245CFF0;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8245d010
	goto loc_8245D010;
loc_8245D010:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82460380
	ctx.lr = 0x8245D01C;
	sub_82460380(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r3.u32);
	// beq 0x8245d080
	if (ctx.cr0.eq) goto loc_8245D080;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8245d080
	if (ctx.cr6.eq) goto loc_8245D080;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82460380
	ctx.lr = 0x8245D03C;
	sub_82460380(ctx, base);
	// stw r3,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8245d080
	if (ctx.cr0.eq) goto loc_8245D080;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8245d080
	if (ctx.cr6.eq) goto loc_8245D080;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82460380
	ctx.lr = 0x8245D05C;
	sub_82460380(ctx, base);
	// stw r3,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8245d080
	if (ctx.cr0.eq) goto loc_8245D080;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8245d080
	if (ctx.cr6.eq) goto loc_8245D080;
	// li r28,0
	r28.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// b 0x8245d0e8
	goto loc_8245D0E8;
loc_8245D080:
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8245d0ac
	if (ctx.cr6.eq) goto loc_8245D0AC;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8245d0ac
	if (ctx.cr6.eq) goto loc_8245D0AC;
	// bl 0x8245cf68
	ctx.lr = 0x8245D0A0;
	sub_8245CF68(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// stw r29,12(r30)
	REX_STORE_U32(r30.u32 + 12, r29.u32);
	// b 0x8245d0b0
	goto loc_8245D0B0;
loc_8245D0AC:
	// li r29,0
	r29.s64 = 0;
loc_8245D0B0:
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8245d0cc
	if (ctx.cr6.eq) goto loc_8245D0CC;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8245d0cc
	if (ctx.cr6.eq) goto loc_8245D0CC;
	// bl 0x8245cf68
	ctx.lr = 0x8245D0C8;
	sub_8245CF68(ctx, base);
	// stw r29,16(r30)
	REX_STORE_U32(r30.u32 + 16, r29.u32);
loc_8245D0CC:
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8245d0e8
	if (ctx.cr6.eq) goto loc_8245D0E8;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8245d0e8
	if (ctx.cr6.eq) goto loc_8245D0E8;
	// bl 0x8245cf68
	ctx.lr = 0x8245D0E4;
	sub_8245CF68(ctx, base);
	// stw r29,20(r30)
	REX_STORE_U32(r30.u32 + 20, r29.u32);
loc_8245D0E8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8245EF50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8245EF58;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
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
	ctx.lr = 0x8245EF78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8245ef98
	if (!ctx.cr6.eq) goto loc_8245EF98;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 148);
	// bl 0x824756b8
	ctx.lr = 0x8245EF90;
	sub_824756B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8245f004
	goto loc_8245F004;
loc_8245EF98:
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
	ctx.lr = 0x8245EFB4;
	sub_8242C3B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8245efc8
	if (!ctx.cr0.eq) goto loc_8245EFC8;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x8245f004
	goto loc_8245F004;
loc_8245EFC8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r9,r30,4
	ctx.r9.s64 = r30.s64 + 4;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// bl 0x8245f9d8
	ctx.lr = 0x8245EFF4;
	sub_8245F9D8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x8245f004
	if (!ctx.cr0.lt) goto loc_8245F004;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x8245F004;
	sub_82473600(ctx, base);
loc_8245F004:
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245F018;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82460450) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82460458
	sub_82460458(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824606C0) {
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
	// beq cr6,0x82460724
	if (ctx.cr6.eq) goto loc_82460724;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82460724
	if (ctx.cr6.eq) goto loc_82460724;
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
loc_824606EC:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r9
	ea = ctx.r9.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x824606ec
	if (!ctx.cr0.eq) goto loc_824606EC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8246071c
	if (!ctx.cr6.eq) goto loc_8246071C;
	// li r11,15
	ctx.r11.s64 = 15;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bl 0x82473600
	ctx.lr = 0x8246071C;
	sub_82473600(ctx, base);
loc_8246071C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82460724:
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

DEFINE_REX_FUNC(sub_82464090) {
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
	ctx.lr = 0x82464098;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r30,148(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lfs f0,2000(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r31,r11,r7
	r31.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r8,r30
	ctx.r4.u64 = ctx.r8.u64 + r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// add r24,r7,r30
	r24.u64 = ctx.r7.u64 + r30.u64;
	// add r27,r6,r30
	r27.u64 = ctx.r6.u64 + r30.u64;
	// add r26,r5,r30
	r26.u64 = ctx.r5.u64 + r30.u64;
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + r30.u64;
	// add r31,r11,r30
	r31.u64 = ctx.r11.u64 + r30.u64;
	// blt cr6,0x8246417c
	if (ctx.cr6.lt) goto loc_8246417C;
	// addi r7,r29,-3
	ctx.r7.s64 = r29.s64 + -3;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// subf r6,r4,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r4.u64;
loc_8246411C:
	// lfs f13,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f12,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f10,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// lfs f8,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f7,-4(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f6,r6,r11
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f3,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f9,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsu f13,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x8246411c
	if (ctx.cr6.lt) goto loc_8246411C;
loc_8246417C:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// bge cr6,0x824641b4
	if (!ctx.cr6.lt) goto loc_824641B4;
	// subf r9,r10,r29
	ctx.r9.u64 = r29.u64 - ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r4,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82464198:
	// lfsx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82464198
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82464198;
loc_824641B4:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8247a308
	ctx.lr = 0x824641C8;
	sub_8247A308(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824642f8
	if (ctx.cr6.lt) goto loc_824642F8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r28,24
	ctx.r3.s64 = r28.s64 + 24;
	// bl 0x8247a5f8
	ctx.lr = 0x824641E4;
	sub_8247A5F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824642f8
	if (ctx.cr6.lt) goto loc_824642F8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r28,44
	ctx.r3.s64 = r28.s64 + 44;
	// bl 0x8247a5f8
	ctx.lr = 0x82464200;
	sub_8247A5F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824642f8
	if (ctx.cr6.lt) goto loc_824642F8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,64
	ctx.r3.s64 = r28.s64 + 64;
	// bl 0x8247a5f8
	ctx.lr = 0x8246421C;
	sub_8247A5F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824642f8
	if (ctx.cr6.lt) goto loc_824642F8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r28,84
	ctx.r3.s64 = r28.s64 + 84;
	// bl 0x8247a5f8
	ctx.lr = 0x82464238;
	sub_8247A5F8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824642f4
	if (ctx.cr6.lt) goto loc_824642F4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824642dc
	if (!ctx.cr6.gt) goto loc_824642DC;
	// subf r27,r31,r27
	r27.u64 = r27.u64 - r31.u64;
	// subf r26,r31,r26
	r26.u64 = r26.u64 - r31.u64;
	// subf r30,r31,r30
	r30.u64 = r30.u64 - r31.u64;
	// subf r29,r31,r24
	r29.u64 = r24.u64 - r31.u64;
loc_82464264:
	// lfsx f0,r31,r26
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + r26.u32);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfsx f13,r31,r27
	temp.u32 = REX_LOAD_U32(r31.u32 + r27.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r31,r30
	temp.u32 = REX_LOAD_U32(r31.u32 + r30.u32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfsx f8,r31,r30
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + r30.u32, temp.u32);
	// lfs f7,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f6,r31,r26
	temp.u32 = REX_LOAD_U32(r31.u32 + r26.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f5,r31,r29
	temp.u32 = REX_LOAD_U32(r31.u32 + r29.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r31,r27
	temp.u32 = REX_LOAD_U32(r31.u32 + r27.u32);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fsubs f2,f3,f7
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f7.f64));
	// fadds f2,f2,f6
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfsx f2,r31,r29
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r31.u32 + r29.u32, temp.u32);
	// lfsx f1,r31,r30
	temp.u32 = REX_LOAD_U32(r31.u32 + r30.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82463f88
	ctx.lr = 0x824642B0;
	sub_82463F88(ctx, base);
	// lfsx f0,r31,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfsx f13,r31,r30
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + r30.u32, temp.u32);
	// lfsx f12,r31,r29
	temp.u32 = REX_LOAD_U32(r31.u32 + r29.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfsx f11,r31,r29
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + r29.u32, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82464264
	if (ctx.cr6.lt) goto loc_82464264;
loc_824642DC:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// beq cr6,0x824642f8
	if (ctx.cr6.eq) goto loc_824642F8;
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
loc_824642F4:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_824642F8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82471ED8) {
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
	ctx.lr = 0x82471EE0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82472154
	if (ctx.cr6.eq) goto loc_82472154;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82472154
	if (ctx.cr6.eq) goto loc_82472154;
	// rlwinm r27,r4,29,3,31
	r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8247214c
	if (ctx.cr6.eq) goto loc_8247214C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// clrlwi r23,r7,16
	r23.u64 = ctx.r7.u32 & 0xFFFF;
	// li r24,1
	r24.s64 = 1;
	// li r25,128
	r25.s64 = 128;
	// lfd f0,-6048(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -6048);
	// addi r26,r11,-1840
	r26.s64 = ctx.r11.s64 + -1840;
loc_82471F1C:
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(r27.u32, r23.u32, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// blt cr6,0x82471f2c
	if (ctx.cr6.lt) goto loc_82471F2C;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82471F2C:
	// stb r24,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, r24.u8);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stbu r24,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U8(ea, r24.u8);
	ctx.r5.u32 = ea;
	// subf r27,r11,r27
	r27.u64 = r27.u64 - ctx.r11.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// sthu r25,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U16(ea, r25.u16);
	ctx.r5.u32 = ea;
	// sthu r25,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, r25.u16);
	ctx.r5.u32 = ea;
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfsu f13,4(r3)
	ea = 4 + ctx.r3.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r3.u32 = ea;
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f10,f13,f0
	ctx.f10.f64 = ctx.f13.f64 * ctx.f0.f64;
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// fctiwz f9,f11
	ctx.f9.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f9,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f9.u64);
	// lwz r9,-108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// fctiwz f8,f10
	ctx.f8.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f8,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f8.u64);
	// lwz r4,-108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// beq 0x82471fb8
	if (ctx.cr0.eq) goto loc_82471FB8;
	// lfs f12,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lfsu f13,4(r3)
	ea = 4 + ctx.r3.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r3.u32 = ea;
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f10,f13,f0
	ctx.f10.f64 = ctx.f13.f64 * ctx.f0.f64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// fctiwz f9,f11
	ctx.f9.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f9,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f9.u64);
	// fctiwz f8,f10
	ctx.f8.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f8,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f8.u64);
	// lwz r29,-108(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// lwz r7,-100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// b 0x82471fc0
	goto loc_82471FC0;
loc_82471FB8:
	// li r29,0
	r29.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82471FC0:
	// sth r29,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r29.u16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sthu r7,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r11.u32 = ea;
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// sthu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r4.u16);
	ctx.r11.u32 = ea;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// beq cr6,0x82472144
	if (ctx.cr6.eq) goto loc_82472144;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82471FE0:
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	// twllei r31,0
	if (r31.s32 == 0 || r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f11.u64);
	// lwz r10,-100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r30,r9,r31
	r30.u64 = uint32_t((r31.s32 && !(ctx.r9.s32 == INT32_MIN && r31.s32 == -1)) ? ctx.r9.s32 / r31.s32 : 0);
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(r30.s32, 7, ctx.xer);
	// andc r10,r31,r3
	ctx.r10.u64 = r31.u64 & ~ctx.r3.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x8247202c
	if (!ctx.cr6.gt) goto loc_8247202C;
	// li r30,7
	r30.s64 = 7;
	// b 0x82472038
	goto loc_82472038;
loc_8247202C:
	// cmpwi cr6,r30,-8
	ctx.cr6.compare<int32_t>(r30.s32, -8, ctx.xer);
	// bge cr6,0x82472038
	if (!ctx.cr6.lt) goto loc_82472038;
	// li r30,-8
	r30.s64 = -8;
loc_82472038:
	// mullw r10,r30,r31
	ctx.r10.s64 = int64_t(r30.s32) * int64_t(r31.s32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,32767
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32767, ctx.xer);
	// ble cr6,0x82472050
	if (!ctx.cr6.gt) goto loc_82472050;
	// li r9,32767
	ctx.r9.s64 = 32767;
	// b 0x8247205c
	goto loc_8247205C;
loc_82472050:
	// cmpwi cr6,r9,-32768
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -32768, ctx.xer);
	// bge cr6,0x8247205c
	if (!ctx.cr6.lt) goto loc_8247205C;
	// li r9,-32768
	ctx.r9.s64 = -32768;
loc_8247205C:
	// rlwinm r11,r30,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x3C;
	// lwzx r10,r11,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// mullw r3,r10,r31
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x82472078
	if (!ctx.cr6.lt) goto loc_82472078;
	// li r11,16
	ctx.r11.s64 = 16;
loc_82472078:
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// addi r3,r8,4
	ctx.r3.s64 = ctx.r8.s64 + 4;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f11.u64);
	// lwz r9,-100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// rotlwi r9,r8,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r11,r8,r6
	ctx.r11.u64 = uint32_t((ctx.r6.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r8.s32 / ctx.r6.s32 : 0);
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// andc r9,r6,r4
	ctx.r9.u64 = ctx.r6.u64 & ~ctx.r4.u64;
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x824720d0
	if (!ctx.cr6.gt) goto loc_824720D0;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x824720dc
	goto loc_824720DC;
loc_824720D0:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x824720dc
	if (!ctx.cr6.lt) goto loc_824720DC;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_824720DC:
	// mullw r9,r11,r6
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x824720f4
	if (!ctx.cr6.gt) goto loc_824720F4;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x82472100
	goto loc_82472100;
loc_824720F4:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x82472100
	if (!ctx.cr6.lt) goto loc_82472100;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_82472100:
	// rlwinm r8,r11,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// lwzx r4,r8,r26
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + r26.u32);
	// mullw r11,r4,r6
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x82472120
	if (!ctx.cr6.lt) goto loc_82472120;
	// li r11,16
	ctx.r11.s64 = 16;
loc_82472120:
	// rlwinm r8,r30,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stb r11,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bdnz 0x82471fe0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82471FE0;
loc_82472144:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x82471f1c
	if (!ctx.cr6.eq) goto loc_82471F1C;
loc_8247214C:
	// subf r3,r22,r5
	ctx.r3.u64 = ctx.r5.u64 - r22.u64;
	// b 0x822d4ec0
	return;
loc_82472154:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_8247C5E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
loc_8247C5F8:
	// lhzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sth r9,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// beq 0x8247c614
	if (ctx.cr0.eq) goto loc_8247C614;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x8247c5f8
	if (!ctx.cr0.eq) goto loc_8247C5F8;
loc_8247C614:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addic. r10,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8247C638:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8247c638
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247C638;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8247D604) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
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
	ctx.lr = 0x8247D624;
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

DEFINE_REX_FUNC(sub_8247DA50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8247DA58;
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r5,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x822d5870
	ctx.lr = 0x8247DA98;
	sub_822D5870(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8247dab8
	if (!ctx.cr6.eq) goto loc_8247DAB8;
loc_8247DAA0:
	// bl 0x822db6c0
	ctx.lr = 0x8247DAA4;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x8247DAB0;
	sub_822D6910(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8247db48
	goto loc_8247DB48;
loc_8247DAB8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8247dac8
	if (ctx.cr6.eq) goto loc_8247DAC8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8247daa0
	if (ctx.cr6.eq) goto loc_8247DAA0;
loc_8247DAC8:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// addi r9,r1,216
	ctx.r9.s64 = ctx.r1.s64 + 216;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bgt cr6,0x8247daec
	if (ctx.cr6.gt) goto loc_8247DAEC;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
loc_8247DAEC:
	// li r11,66
	ctx.r11.s64 = 66;
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822dab20
	ctx.lr = 0x8247DB10;
	sub_822DAB20(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8247db44
	if (ctx.cr6.eq) goto loc_8247DB44;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// blt 0x8247db38
	if (ctx.cr0.lt) goto loc_8247DB38;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stb r28,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r28.u8);
	// b 0x8247db44
	goto loc_8247DB44;
loc_8247DB38:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822da948
	ctx.lr = 0x8247DB44;
	sub_822DA948(ctx, base);
loc_8247DB44:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8247DB48:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82489920) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82489928;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// bl 0x823751f8
	ctx.lr = 0x8248994C;
	sub_823751F8(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,512
	ctx.r3.s64 = r31.s64 + 512;
	// bl 0x82375048
	ctx.lr = 0x82489964;
	sub_82375048(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8248A7B8) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v64{};
	PPCVRegister v65{};
	PPCVRegister v66{};
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
	// stvx128 v127,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v126,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v125,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v124,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v124.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v123,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v123.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v122,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v122.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v121,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v121.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v120,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v120.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v119,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v119.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v118,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v118.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v117,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v117.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v116,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v116.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v115,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v115.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v114,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v114.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v113,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v113.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v112,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v112.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v111,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v111.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v110,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v110.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v109,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v109.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v108,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v108.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v107,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v107.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v106,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v106.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v105,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v105.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v104,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v104.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v103,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v103.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v102,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v102.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v101,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v101.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v100,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v100.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v99,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v99.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v98,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v98.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v97,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v97.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v96,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v96.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v95,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v95.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v94,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v94.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v93,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v93.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v92,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v92.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v91,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v91.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v90,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v90.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v89,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v89.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v88,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v88.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v87,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v87.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v86,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v86.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v85,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v85.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v84,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v84.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v83,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v83.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v82,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v82.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v81,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v81.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v80,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v80.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v79,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v79.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v78,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v78.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v77,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v77.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v76,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v76.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v75,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v75.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v74,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v74.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v73,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v73.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v72,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v72.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v71,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v71.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v70,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v70.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v69,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v69.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v68,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v68.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v67,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v67.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v66,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v66.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v65,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v65.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v64,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v64.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v63,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v62,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v61,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v60,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v59,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v58,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v57,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v56,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v55,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v54,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v53,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v52,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v51,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v50,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v49,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v48,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v47,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v46,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v45,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v44,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v43,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v42,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v41,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v40,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v39,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v38,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v37,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v36,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v35,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v34,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v33,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v32,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v64,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v64.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v65,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v65.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v66,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v66.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v67,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v67.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v68,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v68.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v69,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v69.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v70,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v70.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v71,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v71.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v72,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v72.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824AD900) {
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
	ctx.lr = 0x824AD908;
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
	// bne cr6,0x824adabc
	if (!ctx.cr6.eq) goto loc_824ADABC;
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
	// ble cr6,0x824adc90
	if (!ctx.cr6.gt) goto loc_824ADC90;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_824AD9D4:
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
	// blt cr6,0x824ad9d4
	if (ctx.cr6.lt) goto loc_824AD9D4;
	// b 0x824adc90
	goto loc_824ADC90;
loc_824ADABC:
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
	// ble cr6,0x824adc90
	if (!ctx.cr6.gt) goto loc_824ADC90;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
loc_824ADB40:
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
	// blt cr6,0x824adb40
	if (ctx.cr6.lt) goto loc_824ADB40;
loc_824ADC90:
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
	// bne cr6,0x824add40
	if (!ctx.cr6.eq) goto loc_824ADD40;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824ade28
	if (!ctx.cr6.gt) goto loc_824ADE28;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_824ADCC4:
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
	// vsldoi128 v9,v10,v41,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 14));
	// vsldoi128 v8,v10,v41,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 12));
	// vsldoi128 v10,v10,v41,6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 10));
	// vsubshs v4,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vslh v3,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
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
	// vslh v30,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v8,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v28,v1,v3
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v25,v31,v9
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v24,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v23,v29,v30
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v22,v25,v28
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vsubshs v21,v10,v24
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vadduhm v20,v22,v23
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v19,v21,v4
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v18,v20,v26
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v17,v18,v19
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vsrah v16,v17,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v40,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vor v5,v5,v16
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// stvewx128 v40,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x824adcc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824ADCC4;
	// b 0x824ade28
	goto loc_824ADE28;
loc_824ADD40:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824ade28
	if (!ctx.cr6.gt) goto loc_824ADE28;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_824ADD58:
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
	// vsldoi v8,v9,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 14));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v6,v10,v39,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 14));
	// vsubshs v31,v0,v3
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi v4,v9,v10,4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 12));
	// vsldoi128 v3,v10,v39,4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 12));
	// vsubshs v30,v0,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v9,v9,v10,6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 10));
	// vslh v28,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v10,v10,v39,6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 10));
	// vslh v25,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v25,v29
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v18,v24,v8
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v15,v23,v28
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vslh v21,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v4,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v3,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v14,v22,v6
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v6,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vadduhm v4,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v1,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v29,v14,v15
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vslh v8,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v4,v6
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v23,v29,v1
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vsubshs v28,v9,v8
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v24,v10,v3
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vadduhm v21,v25,v26
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v19,v23,v26
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v22,v28,v30
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v20,v24,v31
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v18,v21,v22
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v17,v19,v20
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
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
	// bdnz 0x824add58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824ADD58;
loc_824ADE28:
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

