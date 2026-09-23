#include "soulcalibur2_funcs.41.h"

DEFINE_REX_FUNC(sub_820E1C50) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f12,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f11,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f10,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f5,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,-4(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// fmsubs f0,f13,f0,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, -ctx.f9.f64)));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmsubs f0,f8,f11,f7
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, -ctx.f7.f64)));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fmsubs f0,f10,f12,f6
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, -ctx.f6.f64)));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
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

DEFINE_REX_FUNC(sub_820E8088) {
	REX_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,508(r3)
	REX_STORE_U32(ctx.r3.u32 + 508, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E8220) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,420(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 420, temp.u32);
	// stfs f1,424(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 424, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E8638) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// beq cr6,0x820e8648
	if (ctx.cr6.eq) goto loc_820E8648;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820E8648:
	// stw r11,492(r3)
	REX_STORE_U32(ctx.r3.u32 + 492, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820EA928) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r11,30(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x820ea95c
	if (!ctx.cr6.eq) goto loc_820EA95C;
	// bl 0x82135998
	ctx.lr = 0x820EA954;
	sub_82135998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820ea9ac
	if (!ctx.cr0.eq) goto loc_820EA9AC;
loc_820EA95C:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// lfs f0,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r8.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
loc_820EA9AC:
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

DEFINE_REX_FUNC(sub_820EF2F8) {
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
	ctx.lr = 0x820EF300;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f34
	ctx.lr = 0x820EF308;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32170
	r29.s64 = -2108293120;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r30,r11,-32480
	r30.s64 = ctx.r11.s64 + -32480;
	// lwz r3,-28236(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -28236);
	// lwz r31,12(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EF334;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-28236(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -28236);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EF354;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// addi r26,r11,432
	r26.s64 = ctx.r11.s64 + 432;
	// addi r11,r10,32336
	ctx.r11.s64 = ctx.r10.s64 + 32336;
	// li r23,0
	r23.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r24,r23
	r24.u64 = r23.u64;
	// lwz r27,220(r26)
	r27.u64 = REX_LOAD_U32(r26.u32 + 220);
	// lwz r11,4900(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4900);
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq 0x820ef390
	if (ctx.cr0.eq) goto loc_820EF390;
	// lhz r10,88(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 88);
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// bne cr6,0x820ef390
	if (!ctx.cr6.eq) goto loc_820EF390;
	// li r24,1
	r24.s64 = 1;
loc_820EF390:
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x820ef3a8
	if (ctx.cr6.eq) goto loc_820EF3A8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// b 0x820ef824
	goto loc_820EF824;
loc_820EF3A8:
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r30,r11,-28296
	r30.s64 = ctx.r11.s64 + -28296;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820ef3cc
	if (!ctx.cr6.eq) goto loc_820EF3CC;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820ef444
	if (ctx.cr6.eq) goto loc_820EF444;
loc_820EF3CC:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820ef420
	if (ctx.cr6.lt) goto loc_820EF420;
	// beq cr6,0x820ef408
	if (ctx.cr6.eq) goto loc_820EF408;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x820ef430
	if (!ctx.cr6.lt) goto loc_820EF430;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,-28236(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -28236);
	// bl 0x820f2f68
	ctx.lr = 0x820EF3EC;
	sub_820F2F68(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_820EF3F4:
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EF404;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820ef42c
	goto loc_820EF42C;
loc_820EF408:
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,-28236(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -28236);
	// bl 0x820f2f68
	ctx.lr = 0x820EF414;
	sub_820F2F68(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x820ef3f4
	goto loc_820EF3F4;
loc_820EF420:
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,-28236(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -28236);
	// bl 0x820f2f68
	ctx.lr = 0x820EF42C;
	sub_820F2F68(ctx, base);
loc_820EF42C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
loc_820EF430:
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// stw r23,4(r30)
	REX_STORE_U32(r30.u32 + 4, r23.u32);
	// stw r23,48(r31)
	REX_STORE_U32(r31.u32 + 48, r23.u32);
	// stw r23,52(r31)
	REX_STORE_U32(r31.u32 + 52, r23.u32);
loc_820EF444:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// lfs f27,16204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16204);
	f27.f64 = double(temp.f32);
	// lfs f28,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f28.f64 = double(temp.f32);
	// beq cr6,0x820ef494
	if (ctx.cr6.eq) goto loc_820EF494;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x820ef484
	if (ctx.cr6.eq) goto loc_820EF484;
	// lwz r11,10140(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 10140);
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// addi r10,r11,20220
	ctx.r10.s64 = ctx.r11.s64 + 20220;
	// lfs f0,20268(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20268);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,20272(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20272);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,20276(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20276);
	ctx.f9.f64 = double(temp.f32);
	// b 0x820ef4a0
	goto loc_820EF4A0;
loc_820EF484:
	// lfs f0,10532(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 10532);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,10536(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 10536);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,10540(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 10540);
	ctx.f9.f64 = double(temp.f32);
	// b 0x820ef4a0
	goto loc_820EF4A0;
loc_820EF494:
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f28.f64;
	// fmr f11,f27
	ctx.f11.f64 = f27.f64;
	// fmr f9,f28
	ctx.f9.f64 = f28.f64;
loc_820EF4A0:
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,2360(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2360);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,16308(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16308);
	ctx.f10.f64 = double(temp.f32);
	// fabs f8,f0
	ctx.f8.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f8,f12
	ctx.cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// ble cr6,0x820ef4cc
	if (!ctx.cr6.gt) goto loc_820EF4CC;
	// fmadds f0,f0,f10,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f13.f64)));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
loc_820EF4CC:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x820ef4e8
	if (!ctx.cr6.gt) goto loc_820EF4E8;
	// fmadds f0,f13,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f0.f64)));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
loc_820EF4E8:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x820ef504
	if (!ctx.cr6.gt) goto loc_820EF504;
	// fmadds f0,f13,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f0.f64)));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
loc_820EF504:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822009c8
	ctx.lr = 0x820EF50C;
	sub_822009C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16588(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16588);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x820ef520
	if (ctx.cr6.gt) goto loc_820EF520;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_820EF520:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16932(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16932);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x820ef534
	if (ctx.cr6.lt) goto loc_820EF534;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_820EF534:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822006f8
	ctx.lr = 0x820EF53C;
	sub_822006F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2352(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2352);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820ef554
	if (ctx.cr6.gt) goto loc_820EF554;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820EF554:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// lfs f29,16172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	f29.f64 = double(temp.f32);
	// bne cr6,0x820ef578
	if (!ctx.cr6.eq) goto loc_820EF578;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// blt cr6,0x820ef574
	if (ctx.cr6.lt) goto loc_820EF574;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
loc_820EF574:
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
loc_820EF578:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f31,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f31.f64 = double(temp.f32);
	// lfs f30,16188(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16188);
	f30.f64 = double(temp.f32);
	// bl 0x82200a38
	ctx.lr = 0x820EF590;
	sub_82200A38(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// bge cr6,0x820ef59c
	if (!ctx.cr6.lt) goto loc_820EF59C;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
loc_820EF59C:
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// ble cr6,0x820ef5a8
	if (!ctx.cr6.gt) goto loc_820EF5A8;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
loc_820EF5A8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200800
	ctx.lr = 0x820EF5B4;
	sub_82200800(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82200808
	ctx.lr = 0x820EF5C0;
	sub_82200808(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f3,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EF5E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r26,84
	ctx.r3.s64 = r26.s64 + 84;
	// bl 0x821d6398
	ctx.lr = 0x820EF5E8;
	sub_821D6398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820ef758
	if (!ctx.cr0.eq) goto loc_820EF758;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820edb00
	ctx.lr = 0x820EF5F8;
	sub_820EDB00(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820ef6f8
	if (ctx.cr6.eq) goto loc_820EF6F8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820ef72c
	if (!ctx.cr6.eq) goto loc_820EF72C;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x820ee448
	ctx.lr = 0x820EF628;
	sub_820EE448(ctx, base);
	// lwz r11,-28236(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -28236);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EF644;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,2392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	f30.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f31,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x820ef668
	if (!ctx.cr6.gt) goto loc_820EF668;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_820EF668:
	// stfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 16, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x82200838
	ctx.lr = 0x820EF678;
	sub_82200838(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// bge cr6,0x820ef690
	if (!ctx.cr6.lt) goto loc_820EF690;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200838
	ctx.lr = 0x820EF690;
	sub_82200838(ctx, base);
loc_820EF690:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x820ef6bc
	if (!ctx.cr6.eq) goto loc_820EF6BC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82200a10
	ctx.lr = 0x820EF6A0;
	sub_82200A10(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16928(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16928);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820ef6b4
	if (!ctx.cr6.lt) goto loc_820EF6B4;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_820EF6B4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82200758
	ctx.lr = 0x820EF6BC;
	sub_82200758(ctx, base);
loc_820EF6BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f1,16300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16300);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200808
	ctx.lr = 0x820EF6CC;
	sub_82200808(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// bl 0x82200800
	ctx.lr = 0x820EF6D8;
	sub_82200800(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f1,16372(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16372);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200968
	ctx.lr = 0x820EF6E8;
	sub_82200968(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x822009a8
	ctx.lr = 0x820EF6F4;
	sub_822009A8(ctx, base);
	// b 0x820ef72c
	goto loc_820EF72C;
loc_820EF6F8:
	// lwz r11,-28236(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -28236);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EF714;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EF72C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820EF72C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r23,48(r31)
	REX_STORE_U32(r31.u32 + 48, r23.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// b 0x820ef818
	goto loc_820EF818;
loc_820EF758:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820ef7cc
	if (ctx.cr6.eq) goto loc_820EF7CC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820ef80c
	if (!ctx.cr6.eq) goto loc_820EF80C;
	// lwz r11,-28236(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -28236);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EF788;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x82200838
	ctx.lr = 0x820EF794;
	sub_82200838(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f28.f64;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x82200958
	ctx.lr = 0x820EF7A8;
	sub_82200958(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f28.f64;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x82200998
	ctx.lr = 0x820EF7BC;
	sub_82200998(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x822007f8
	ctx.lr = 0x820EF7C8;
	sub_822007F8(ctx, base);
	// b 0x820ef80c
	goto loc_820EF80C;
loc_820EF7CC:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x82200838
	ctx.lr = 0x820EF7D8;
	sub_82200838(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f28.f64;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x82200958
	ctx.lr = 0x820EF7EC;
	sub_82200958(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f28.f64;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x82200998
	ctx.lr = 0x820EF800;
	sub_82200998(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x82200818
	ctx.lr = 0x820EF80C;
	sub_82200818(ctx, base);
loc_820EF80C:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
loc_820EF818:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
loc_820EF824:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f80
	ctx.lr = 0x820EF830;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_8210EE78) {
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
	ctx.lr = 0x8210EE80;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,1
	r30.s64 = 1;
	// addi r11,r11,28736
	ctx.r11.s64 = ctx.r11.s64 + 28736;
	// stw r30,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r30.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// bl 0x820e4bb0
	ctx.lr = 0x8210EEB8;
	sub_820E4BB0(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// addic. r11,r31,112
	ctx.xer.ca = r31.u32 > 4294967183;
	ctx.r11.s64 = r31.s64 + 112;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r30,88(r31)
	REX_STORE_U16(r31.u32 + 88, r30.u16);
	// stw r3,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r30,90(r31)
	REX_STORE_U8(r31.u32 + 90, r30.u8);
	// std r10,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r10.u64);
	// beq 0x8210eee0
	if (ctx.cr0.eq) goto loc_8210EEE0;
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// b 0x8210eee4
	goto loc_8210EEE4;
loc_8210EEE0:
	// stw r7,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r7.u32);
loc_8210EEE4:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,-18800
	ctx.r11.s64 = ctx.r11.s64 + -18800;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// beq cr6,0x8210ef00
	if (ctx.cr6.eq) goto loc_8210EF00;
	// stw r3,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// stb r25,104(r31)
	REX_STORE_U8(r31.u32 + 104, r25.u8);
loc_8210EF00:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r30,105(r31)
	REX_STORE_U8(r31.u32 + 105, r30.u8);
	// stb r7,107(r31)
	REX_STORE_U8(r31.u32 + 107, ctx.r7.u8);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stb r11,106(r31)
	REX_STORE_U8(r31.u32 + 106, ctx.r11.u8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r7,109(r31)
	REX_STORE_U8(r31.u32 + 109, ctx.r7.u8);
	// lfs f12,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lfs f5,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f5,116(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f4,f5
	ctx.f4.f64 = ctx.f5.f64;
	// stfs f5,124(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x8210ded0
	ctx.lr = 0x8210EF6C;
	sub_8210DED0(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm. r11,r26,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// lfs f0,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
	// lfs f0,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lfs f0,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// bne 0x8210efac
	if (!ctx.cr0.eq) goto loc_8210EFAC;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lbz r10,74(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 74);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stb r10,74(r11)
	REX_STORE_U8(ctx.r11.u32 + 74, ctx.r10.u8);
loc_8210EFAC:
	// not r11,r26
	ctx.r11.u64 = ~r26.u64;
	// not r10,r26
	ctx.r10.u64 = ~r26.u64;
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stb r11,221(r31)
	REX_STORE_U8(r31.u32 + 221, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,220(r31)
	REX_STORE_U8(r31.u32 + 220, ctx.r10.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_821140C0) {
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
	ctx.lr = 0x821140C8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r10,184(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r3,184
	r29.s64 = ctx.r3.s64 + 184;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r28,-32480(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bne cr6,0x82114290
	if (!ctx.cr6.eq) goto loc_82114290;
	// lwz r11,192(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82114290
	if (!ctx.cr6.eq) goto loc_82114290;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r3,156(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// sth r11,182(r31)
	REX_STORE_U16(r31.u32 + 182, ctx.r11.u16);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r5,r10,15387
	ctx.r5.s64 = ctx.r10.s64 + 15387;
	// stw r11,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821af9d8
	ctx.lr = 0x8211411C;
	sub_821AF9D8(ctx, base);
	// stw r3,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r3.u32);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r4,168(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 168);
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
	// lwz r5,344(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 344);
	// bl 0x821103c0
	ctx.lr = 0x82114138;
	sub_821103C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,196(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 196);
	// bl 0x82112330
	ctx.lr = 0x82114144;
	sub_82112330(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r4,168(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lwz r5,344(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 344);
	// bl 0x821103c0
	ctx.lr = 0x82114154;
	sub_821103C0(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82112330
	ctx.lr = 0x82114164;
	sub_82112330(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// lwz r4,168(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lwz r5,344(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 344);
	// bl 0x821103c0
	ctx.lr = 0x82114174;
	sub_821103C0(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x82112330
	ctx.lr = 0x82114184;
	sub_82112330(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// lwz r4,168(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lwz r5,344(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 344);
	// bl 0x821103c0
	ctx.lr = 0x82114194;
	sub_821103C0(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// bl 0x82112330
	ctx.lr = 0x821141A4;
	sub_82112330(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x8212eb40
	ctx.lr = 0x821141B8;
	sub_8212EB40(ctx, base);
	// lwz r3,144(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 144);
	// addi r30,r31,200
	r30.s64 = r31.s64 + 200;
	// bl 0x820e4bb0
	ctx.lr = 0x821141C4;
	sub_820E4BB0(ctx, base);
	// stw r3,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r3.u32);
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
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821f7d50
	ctx.lr = 0x821141EC;
	sub_821F7D50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f3,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f3.f64 = double(temp.f32);
	// beq 0x82114268
	if (ctx.cr0.eq) goto loc_82114268;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,196(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r7,172(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lis r5,-32176
	ctx.r5.s64 = -2108686336;
	// stfs f3,100(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f3,108(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, r29.u32);
	// lfs f0,16036(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16036);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r5,-5488
	ctx.r10.s64 = ctx.r5.s64 + -5488;
	// addi r6,r6,29656
	ctx.r6.s64 = ctx.r6.s64 + 29656;
	// lfs f13,16032(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16032);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f13,112(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stw r6,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r7,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r7.u32);
	// stw r9,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r9.u32);
	// stw r30,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, r30.u32);
	// stw r11,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// b 0x8211426c
	goto loc_8211426C;
loc_82114268:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8211426C:
	// stw r10,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r10.u32);
	// li r4,60
	ctx.r4.s64 = 60;
	// li r3,2
	ctx.r3.s64 = 2;
	// fmr f2,f3
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x821afa50
	ctx.lr = 0x82114284;
	sub_821AFA50(ctx, base);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,23956(r10)
	REX_STORE_U8(ctx.r10.u32 + 23956, ctx.r11.u8);
loc_82114290:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821197D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821197D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82208828
	ctx.lr = 0x821197F0;
	sub_82208828(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x821f0998
	ctx.lr = 0x82119808;
	sub_821F0998(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8211AA68) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lfs f2,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f2.f64 = double(temp.f32);
	// bge cr6,0x8211aac4
	if (!ctx.cr6.lt) goto loc_8211AAC4;
	// bl 0x82204b00
	ctx.lr = 0x8211AA98;
	sub_82204B00(ctx, base);
	// lhz r11,1552(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 1552);
	// rotlwi r11,r11,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r3,r11,496
	ctx.r3.s64 = ctx.r11.s64 + 496;
	// lfs f0,504(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 504);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8211aab8
	goto loc_8211AAB8;
loc_8211AAB0:
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
loc_8211AAB8:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8211aab0
	if (ctx.cr6.lt) goto loc_8211AAB0;
	// b 0x8211aae4
	goto loc_8211AAE4;
loc_8211AAC4:
	// bl 0x82204b00
	ctx.lr = 0x8211AAC8;
	sub_82204B00(ctx, base);
	// lfs f0,572(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 572);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,560
	ctx.r3.s64 = r31.s64 + 560;
	// b 0x8211aadc
	goto loc_8211AADC;
loc_8211AAD4:
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
loc_8211AADC:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8211aad4
	if (ctx.cr6.gt) goto loc_8211AAD4;
loc_8211AAE4:
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

DEFINE_REX_FUNC(sub_8211D2B0) {
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
	ctx.lr = 0x8211D2B8;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f20
	ctx.lr = 0x8211D2C0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f27,f3
	f27.f64 = ctx.f3.f64;
	// addi r31,r3,136
	r31.s64 = ctx.r3.s64 + 136;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f30,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f30.f64 = double(temp.f32);
	// lfs f29,16188(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16188);
	f29.f64 = double(temp.f32);
	// bne cr6,0x8211d2fc
	if (!ctx.cr6.eq) goto loc_8211D2FC;
	// stfs f29,116(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f30,120(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// stfs f29,124(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// stfs f30,128(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// b 0x8211d320
	goto loc_8211D320;
loc_8211D2FC:
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r11,r31,116
	ctx.r11.s64 = r31.s64 + 116;
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// lwz r11,12(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
loc_8211D320:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f30,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// lfs f31,26932(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26932);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f2,f31
	ctx.cr6.compare(ctx.f2.f64, f31.f64);
	// ble cr6,0x8211d350
	if (!ctx.cr6.gt) goto loc_8211D350;
	// bl 0x821fee88
	ctx.lr = 0x8211D338;
	sub_821FEE88(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16260);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// b 0x8211d354
	goto loc_8211D354;
loc_8211D350:
	// stfs f2,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
loc_8211D354:
	// fcmpu cr6,f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f27.f64, f31.f64);
	// ble cr6,0x8211d368
	if (!ctx.cr6.gt) goto loc_8211D368;
	// bl 0x821fee88
	ctx.lr = 0x8211D360;
	sub_821FEE88(ctx, base);
	// stfs f1,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// b 0x8211d36c
	goto loc_8211D36C;
loc_8211D368:
	// stfs f27,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
loc_8211D36C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f24,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f24.f64 = double(temp.f32);
	// fcmpu cr6,f28,f24
	ctx.cr6.compare(f28.f64, f24.f64);
	// bge cr6,0x8211d394
	if (!ctx.cr6.lt) goto loc_8211D394;
	// bl 0x821feec8
	ctx.lr = 0x8211D380;
	sub_821FEEC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,16780(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16780);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28548(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28548);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f28,f1,f0,f13
	f28.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
loc_8211D394:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f29,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f28,88(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,16228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16228);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fmuls f27,f28,f0
	f27.f64 = double(float(f28.f64 * ctx.f0.f64));
	// lfs f0,16308(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16308);
	ctx.f0.f64 = double(temp.f32);
	// lfs f22,16172(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16172);
	f22.f64 = double(temp.f32);
	// addi r28,r11,-4
	r28.s64 = ctx.r11.s64 + -4;
	// lfs f13,-30700(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -30700);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f28,f0,f22
	ctx.f0.f64 = double(float(std::fma(f28.f64, ctx.f0.f64, f22.f64)));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,2392(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2392);
	f31.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r31,-4
	r30.s64 = r31.s64 + -4;
	// li r29,2
	r29.s64 = 2;
	// lfs f23,-30704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30704);
	f23.f64 = double(temp.f32);
	// lfs f25,26528(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26528);
	f25.f64 = double(temp.f32);
	// fadds f13,f27,f13
	ctx.f13.f64 = double(float(f27.f64 + ctx.f13.f64));
	// fmuls f26,f0,f31
	f26.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f29,f13,f31
	f29.f64 = double(float(ctx.f13.f64 * f31.f64));
loc_8211D3FC:
	// bl 0x821fef70
	ctx.lr = 0x8211D400;
	sub_821FEF70(ctx, base);
	// lfsu f0,4(r28)
	ctx.fpscr.disableFlushMode();
	ea = 4 + r28.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	r28.u32 = ea;
	// fmuls f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * f25.f64));
	// stfs f1,4(r30)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// stfs f29,12(r30)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// fmr f2,f24
	ctx.f2.f64 = f24.f64;
	// stfsu f26,16(r30)
	ea = 16 + r30.u32;
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ea, temp.u32);
	r30.u32 = ea;
	// fmuls f1,f29,f23
	ctx.f1.f64 = double(float(f29.f64 * f23.f64));
	// bl 0x82204ae0
	ctx.lr = 0x8211D428;
	sub_82204AE0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// bne 0x8211d3fc
	if (!ctx.cr0.eq) goto loc_8211D3FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,32280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32280);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f27,f0
	ctx.f12.f64 = double(float(f27.f64 + ctx.f0.f64));
	// lfs f13,2384(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2384);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2008(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f28,f13,f0
	ctx.f0.f64 = double(float(std::fma(f28.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmuls f29,f12,f31
	f29.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fmuls f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x821feec8
	ctx.lr = 0x8211D460;
	sub_821FEEC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f29,40(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f31,44(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f2,f24
	ctx.f2.f64 = f24.f64;
	// lfs f0,28428(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28428);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f0,-30708(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30708);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f29,f0
	ctx.f1.f64 = double(float(f29.f64 * ctx.f0.f64));
	// bl 0x82204ae0
	ctx.lr = 0x8211D490;
	sub_82204AE0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r30,r31,44
	r30.s64 = r31.s64 + 44;
	// addi r28,r11,-4
	r28.s64 = ctx.r11.s64 + -4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,-30716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30716);
	f31.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r29,2
	r29.s64 = 2;
	// lfs f28,-30552(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30552);
	f28.f64 = double(temp.f32);
	// lfs f29,-30692(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30692);
	f29.f64 = double(temp.f32);
loc_8211D4B8:
	// bl 0x821fee08
	ctx.lr = 0x8211D4BC;
	sub_821FEE08(ctx, base);
	// lfsu f0,4(r28)
	ctx.fpscr.disableFlushMode();
	ea = 4 + r28.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	r28.u32 = ea;
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// stfs f1,4(r30)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// stfs f31,12(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// fmr f2,f24
	ctx.f2.f64 = f24.f64;
	// stfsu f28,16(r30)
	ea = 16 + r30.u32;
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ea, temp.u32);
	r30.u32 = ea;
	// fmuls f1,f31,f23
	ctx.f1.f64 = double(float(f31.f64 * f23.f64));
	// bl 0x82204ae0
	ctx.lr = 0x8211D4E4;
	sub_82204AE0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bne 0x8211d4b8
	if (!ctx.cr0.eq) goto loc_8211D4B8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f22,104(r31)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-30668(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30668);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,31944(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 31944);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f13,100(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 108, temp.u32);
	// stfs f12,92(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f6c
	ctx.lr = 0x8211D528;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82128688) {
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
	ctx.lr = 0x82128690;
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r31,r11,7808
	r31.s64 = ctx.r11.s64 + 7808;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f13,2344(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2344);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r8,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// lfs f0,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-30080(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -30080);
	ctx.f12.f64 = double(temp.f32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stfs f1,7808(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 7808, temp.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f1,16(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f2,24(r31)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f31,-31156(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -31156);
	f31.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82128730
	if (ctx.cr6.lt) goto loc_82128730;
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bgt cr6,0x82128730
	if (ctx.cr6.gt) goto loc_82128730;
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82128734
	goto loc_82128734;
loc_82128730:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82128734:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x821288f0
	if (ctx.cr6.lt) goto loc_821288F0;
	// lha r11,28(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 28));
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821288f0
	if (!ctx.cr6.lt) goto loc_821288F0;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rotlwi r11,r7,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 6);
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
loc_82128770:
	// rlwinm r7,r11,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x821287a0
	if (!ctx.cr6.lt) goto loc_821287A0;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82128770
	if (!ctx.cr6.eq) goto loc_82128770;
	// b 0x821288f0
	goto loc_821288F0;
loc_821287A0:
	// lfs f0,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// blt cr6,0x821287c8
	if (ctx.cr6.lt) goto loc_821287C8;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82128770
	if (!ctx.cr6.eq) goto loc_82128770;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_821287C8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821288f0
	if (ctx.cr6.lt) goto loc_821288F0;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r28,r11,8
	r28.s64 = ctx.r11.s64 + 8;
	// lhz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x821288f0
	if (ctx.cr6.eq) goto loc_821288F0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f30,-30084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30084);
	f30.f64 = double(temp.f32);
loc_821287F0:
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82128568
	ctx.lr = 0x8212880C;
	sub_82128568(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821288d4
	if (ctx.cr0.eq) goto loc_821288D4;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82128880
	if (!ctx.cr6.eq) goto loc_82128880;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(r26.s32, 3, ctx.xer);
	// blt cr6,0x821288d4
	if (ctx.cr6.lt) goto loc_821288D4;
	// beq cr6,0x82128844
	if (ctx.cr6.eq) goto loc_82128844;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(r26.s32, 4, ctx.xer);
	// beq cr6,0x82128850
	if (ctx.cr6.eq) goto loc_82128850;
	// cmpwi cr6,r26,5
	ctx.cr6.compare<int32_t>(r26.s32, 5, ctx.xer);
	// beq cr6,0x82128860
	if (ctx.cr6.eq) goto loc_82128860;
	// b 0x821288d4
	goto loc_821288D4;
loc_82128844:
	// rlwinm r10,r11,0,16,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r10,61440
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 61440, ctx.xer);
	// bne cr6,0x82128870
	if (!ctx.cr6.eq) goto loc_82128870;
loc_82128850:
	// rlwinm r10,r11,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	// lis r9,3840
	ctx.r9.s64 = 251658240;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82128870
	if (!ctx.cr6.eq) goto loc_82128870;
loc_82128860:
	// rlwinm r11,r11,0,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// lis r10,-4096
	ctx.r10.s64 = -268435456;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821288d4
	if (ctx.cr6.eq) goto loc_821288D4;
loc_82128870:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,0(r27)
	REX_STORE_U32(r27.u32 + 0, r30.u32);
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821288f4
	goto loc_821288F4;
loc_82128880:
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x821288ac
	if (!ctx.cr6.lt) goto loc_821288AC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82129618
	ctx.lr = 0x821288A8;
	sub_82129618(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
loc_821288AC:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// rlwinm r11,r11,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// beq cr6,0x821288c4
	if (ctx.cr6.eq) goto loc_821288C4;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x821288d4
	if (ctx.cr6.eq) goto loc_821288D4;
loc_821288C4:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// beq cr6,0x821288e8
	if (ctx.cr6.eq) goto loc_821288E8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821288e8
	if (!ctx.cr6.eq) goto loc_821288E8;
loc_821288D4:
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x821287f0
	if (!ctx.cr6.eq) goto loc_821287F0;
	// b 0x821288f0
	goto loc_821288F0;
loc_821288E8:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f0.f64;
	// stw r30,0(r27)
	REX_STORE_U32(r27.u32 + 0, r30.u32);
loc_821288F0:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_821288F4:
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

DEFINE_REX_FUNC(sub_82130E40) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r10,64
	ctx.r10.s64 = 64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r11,85
	ctx.r11.s64 = 5570560;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lfs f0,1992(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// ori r11,r11,8440
	ctx.r11.u64 = ctx.r11.u64 | 8440;
	// addi r10,r10,-8304
	ctx.r10.s64 = ctx.r10.s64 + -8304;
loc_82130E68:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82130e88
	if (ctx.cr6.eq) goto loc_82130E88;
	// lwz r8,48(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82130e88
	if (ctx.cr6.eq) goto loc_82130E88;
	// li r6,12
	ctx.r6.s64 = 12;
	// stb r6,36(r8)
	REX_STORE_U8(ctx.r8.u32 + 36, ctx.r6.u8);
loc_82130E88:
	// lwz r8,48(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// lis r6,85
	ctx.r6.s64 = 5570560;
	// ori r6,r6,8696
	ctx.r6.u64 = ctx.r6.u64 | 8696;
	// stwx r7,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
	// lwz r8,48(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stbx r7,r8,r6
	REX_STORE_U8(ctx.r8.u32 + ctx.r6.u32, ctx.r7.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,48(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stfs f0,320(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 320, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82130e68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82130E68;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821331E8) {
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
	// b 0x8213321c
	goto loc_8213321C;
loc_82133210:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r8,r8,24
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(24));
loc_8213321C:
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r8,9(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 9);
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// bne cr6,0x82133210
	if (!ctx.cr6.eq) goto loc_82133210;
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8213324c
	if (!ctx.cr6.lt) goto loc_8213324C;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mulli r10,r10,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lha r3,16(r11)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 16));
	// rlwinm. r11,r3,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_8213324C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821345E0) {
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
	ctx.lr = 0x821345E8;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f0c
	ctx.lr = 0x821345F0;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f28,f2
	f28.f64 = ctx.f2.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lfs f19,32100(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32100);
	f19.f64 = double(temp.f32);
	// mr r14,r7
	r14.u64 = ctx.r7.u64;
	// fadds f0,f1,f19
	ctx.f0.f64 = double(float(ctx.f1.f64 + f19.f64));
	// lfs f18,28452(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28452);
	f18.f64 = double(temp.f32);
	// lfs f30,28300(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28300);
	f30.f64 = double(temp.f32);
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// li r16,0
	r16.s64 = 0;
	// li r15,0
	r15.s64 = 0;
	// fsubs f17,f0,f18
	f17.f64 = double(float(ctx.f0.f64 - f18.f64));
	// bl 0x821343f0
	ctx.lr = 0x82134638;
	sub_821343F0(ctx, base);
	// lhz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 8);
	// addi r30,r25,8
	r30.s64 = r25.s64 + 8;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x8213465c
	if (ctx.cr6.eq) goto loc_8213465C;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8213464C:
	// lhau r10,12(r11)
	ea = 12 + ctx.r11.u32;
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r11.u32 = ea;
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8213464c
	if (!ctx.cr6.eq) goto loc_8213464C;
loc_8213465C:
	// rlwinm. r11,r31,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821346a0
	if (ctx.cr0.eq) goto loc_821346A0;
	// lwz r11,488(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 488);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821346a0
	if (!ctx.cr6.gt) goto loc_821346A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,18
	ctx.r3.s64 = 18;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x82134680;
	sub_8212BC38(ctx, base);
	// lwz r11,488(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 488);
	// lwz r10,492(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 492);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,488(r25)
	REX_STORE_U32(r25.u32 + 488, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821346f0
	if (!ctx.cr6.lt) goto loc_821346F0;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// b 0x821346ec
	goto loc_821346EC;
loc_821346A0:
	// rlwinm. r11,r31,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821346f0
	if (ctx.cr0.eq) goto loc_821346F0;
	// lwz r11,488(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 488);
	// addi r10,r16,-1
	ctx.r10.s64 = r16.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821346f0
	if (!ctx.cr6.lt) goto loc_821346F0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,18
	ctx.r3.s64 = 18;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x821346C8;
	sub_8212BC38(ctx, base);
	// lwz r11,488(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 488);
	// lwz r10,492(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 492);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,488(r25)
	REX_STORE_U32(r25.u32 + 488, ctx.r11.u32);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x821346f0
	if (!ctx.cr6.gt) goto loc_821346F0;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
loc_821346EC:
	// stw r11,492(r25)
	REX_STORE_U32(r25.u32 + 492, ctx.r11.u32);
loc_821346F0:
	// li r18,0
	r18.s64 = 0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// ble cr6,0x82134a5c
	if (!ctx.cr6.gt) goto loc_82134A5C;
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
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f20,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f20.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f21,28548(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28548);
	f21.f64 = double(temp.f32);
	// lfs f22,29356(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 29356);
	f22.f64 = double(temp.f32);
	// lis r23,85
	r23.s64 = 5570560;
	// lfs f26,-8496(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -8496);
	f26.f64 = double(temp.f32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f25,26840(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 26840);
	f25.f64 = double(temp.f32);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lfs f23,-24904(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -24904);
	f23.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f24,2008(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 2008);
	f24.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32166
	ctx.r6.s64 = -2108030976;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// mr r26,r30
	r26.u64 = r30.u64;
	// ori r23,r23,9016
	r23.u64 = r23.u64 | 9016;
	// li r17,-1
	r17.s64 = -1;
	// addi r19,r11,13128
	r19.s64 = ctx.r11.s64 + 13128;
	// addi r28,r10,-8304
	r28.s64 = ctx.r10.s64 + -8304;
	// addi r21,r9,-24912
	r21.s64 = ctx.r9.s64 + -24912;
	// addi r22,r8,21804
	r22.s64 = ctx.r8.s64 + 21804;
	// addi r27,r7,-24972
	r27.s64 = ctx.r7.s64 + -24972;
	// addi r29,r6,432
	r29.s64 = ctx.r6.s64 + 432;
	// addi r20,r5,26976
	r20.s64 = ctx.r5.s64 + 26976;
loc_8213477C:
	// lha r3,0(r26)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r26.u32 + 0));
	// bl 0x821dd490
	ctx.lr = 0x82134784;
	sub_821DD490(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x821347ac
	if (!ctx.cr6.eq) goto loc_821347AC;
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// lwzx r11,r23,r11
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821347ac
	if (ctx.cr6.eq) goto loc_821347AC;
	// li r10,-10
	ctx.r10.s64 = -10;
	// stw r10,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
loc_821347AC:
	// lwz r11,492(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 492);
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82134a48
	if (ctx.cr6.lt) goto loc_82134A48;
	// cmpwi cr6,r15,8
	ctx.cr6.compare<int32_t>(r15.s32, 8, ctx.xer);
	// bge cr6,0x82134a48
	if (!ctx.cr6.lt) goto loc_82134A48;
	// li r4,0
	ctx.r4.s64 = 0;
	// lha r3,0(r26)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r26.u32 + 0));
	// bl 0x821dce30
	ctx.lr = 0x821347CC;
	sub_821DCE30(ctx, base);
	// lwz r11,488(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 488);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// mr r31,r17
	r31.u64 = r17.u64;
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r11.s32, ctx.xer);
	// subfe r24,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	r24.u64 = ~ctx.r10.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bne cr6,0x82134824
	if (!ctx.cr6.eq) goto loc_82134824;
	// fadds f0,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 + f28.f64));
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// fmr f5,f25
	ctx.f5.f64 = f25.f64;
	// fmr f4,f19
	ctx.f4.f64 = f19.f64;
	// fmr f3,f23
	ctx.f3.f64 = f23.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// fsubs f2,f0,f24
	ctx.f2.f64 = double(float(ctx.f0.f64 - f24.f64));
	// bl 0x82102518
	ctx.lr = 0x82134808;
	sub_82102518(ctx, base);
	// lwz r11,1856(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 1856);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82134820
	if (ctx.cr0.eq) goto loc_82134820;
	// lis r31,-1
	r31.s64 = -65536;
	// ori r31,r31,255
	r31.u64 = r31.u64 | 255;
	// b 0x82134824
	goto loc_82134824;
loc_82134820:
	// mr r31,r17
	r31.u64 = r17.u64;
loc_82134824:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmpw cr6,r14,r11
	ctx.cr6.compare<int32_t>(r14.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82134838
	if (ctx.cr6.lt) goto loc_82134838;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x82134840
	if (ctx.cr6.eq) goto loc_82134840;
loc_82134838:
	// lis r31,-26215
	r31.s64 = -1718026240;
	// ori r31,r31,39423
	r31.u64 = r31.u64 | 39423;
loc_82134840:
	// bl 0x8212fe30
	ctx.lr = 0x82134844;
	sub_8212FE30(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821eacb0
	ctx.lr = 0x82134850;
	sub_821EACB0(ctx, base);
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82134984
	if (ctx.cr6.eq) goto loc_82134984;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82134938
	if (ctx.cr6.eq) goto loc_82134938;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x821348a0
	if (ctx.cr6.eq) goto loc_821348A0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fadds f31,f30,f28
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f30.f64 + f28.f64));
	// bl 0x821dd548
	ctx.lr = 0x82134878;
	sub_821DD548(ctx, base);
	// fadds f1,f29,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f29.f64 + f26.f64));
	// stfs f31,28(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x820e6d50
	ctx.lr = 0x8213489C;
	sub_820E6D50(ctx, base);
	// b 0x821349cc
	goto loc_821349CC;
loc_821348A0:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lha r3,0(r26)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r26.u32 + 0));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821dcf00
	ctx.lr = 0x821348B0;
	sub_821DCF00(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,344(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 344);
	// fadds f31,f30,f28
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f30.f64 + f28.f64));
	// addis r3,r11,1280
	ctx.r3.s64 = ctx.r11.s64 + 83886080;
	// fadds f27,f29,f26
	f27.f64 = double(float(f29.f64 + f26.f64));
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// bl 0x820e68b8
	ctx.lr = 0x821348CC;
	sub_820E68B8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dd548
	ctx.lr = 0x821348D8;
	sub_821DD548(ctx, base);
	// stfs f31,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// stfs f27,20(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x820e6d50
	ctx.lr = 0x82134900;
	sub_820E6D50(ctx, base);
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// lwzx r10,r23,r11
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8213491c
	if (ctx.cr6.eq) goto loc_8213491C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,68(r10)
	REX_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
loc_8213491C:
	// fadds f0,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 + f28.f64));
	// lwzx r3,r23,r11
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + ctx.r11.u32);
	// fmr f3,f20
	ctx.f3.f64 = f20.f64;
	// fsubs f1,f27,f21
	ctx.f1.f64 = double(float(f27.f64 - f21.f64));
	// fadds f2,f0,f22
	ctx.f2.f64 = double(float(ctx.f0.f64 + f22.f64));
	// bl 0x82130ec0
	ctx.lr = 0x82134934;
	sub_82130EC0(ctx, base);
	// b 0x821349cc
	goto loc_821349CC;
loc_82134938:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fadds f31,f30,f28
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f30.f64 + f28.f64));
	// bl 0x821dd548
	ctx.lr = 0x82134944;
	sub_821DD548(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// lwz r4,344(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 344);
	// ori r3,r3,97
	ctx.r3.u64 = ctx.r3.u64 | 97;
	// bl 0x820e68b8
	ctx.lr = 0x82134958;
	sub_820E68B8(ctx, base);
	// fadds f1,f29,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f29.f64 + f26.f64));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// stfs f31,28(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6d50
	ctx.lr = 0x82134980;
	sub_820E6D50(ctx, base);
	// b 0x821349cc
	goto loc_821349CC;
loc_82134984:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fadds f31,f30,f28
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f30.f64 + f28.f64));
	// bl 0x821dd548
	ctx.lr = 0x82134990;
	sub_821DD548(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 344);
	// ori r3,r3,39
	ctx.r3.u64 = ctx.r3.u64 | 39;
	// bl 0x820e68b8
	ctx.lr = 0x821349A4;
	sub_820E68B8(ctx, base);
	// fadds f1,f29,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f29.f64 + f26.f64));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// stfs f31,28(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6d50
	ctx.lr = 0x821349CC;
	sub_820E6D50(ctx, base);
loc_821349CC:
	// lwz r4,344(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 344);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// bne cr6,0x82134a14
	if (!ctx.cr6.eq) goto loc_82134A14;
	// ori r3,r3,59
	ctx.r3.u64 = ctx.r3.u64 | 59;
	// lwz r31,4(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 4);
	// bl 0x820e68b8
	ctx.lr = 0x821349E8;
	sub_820E68B8(ctx, base);
	// stfs f31,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// stfs f17,20(r1)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f17
	ctx.f1.f64 = f17.f64;
	// bl 0x820e6ee0
	ctx.lr = 0x82134A10;
	sub_820E6EE0(ctx, base);
	// b 0x82134a40
	goto loc_82134A40;
loc_82134A14:
	// ori r3,r3,60
	ctx.r3.u64 = ctx.r3.u64 | 60;
	// bl 0x820e68b8
	ctx.lr = 0x82134A1C;
	sub_820E68B8(ctx, base);
	// stfs f17,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// stfs f31,28(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f17
	ctx.f1.f64 = f17.f64;
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6ee0
	ctx.lr = 0x82134A40;
	sub_820E6EE0(ctx, base);
loc_82134A40:
	// fadds f30,f30,f25
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(f30.f64 + f25.f64));
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
loc_82134A48:
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// addi r26,r26,12
	r26.s64 = r26.s64 + 12;
	// cmpw cr6,r18,r16
	ctx.cr6.compare<int32_t>(r18.s32, r16.s32, ctx.xer);
	// blt cr6,0x8213477c
	if (ctx.cr6.lt) goto loc_8213477C;
loc_82134A5C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,492(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 492);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,15632(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15632);
	f31.f64 = double(temp.f32);
	// ble cr6,0x82134a88
	if (!ctx.cr6.gt) goto loc_82134A88;
	// fadds f0,f29,f31
	ctx.f0.f64 = double(float(f29.f64 + f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f2,28312(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28312);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f0,f18
	ctx.f1.f64 = double(float(ctx.f0.f64 - f18.f64));
	// bl 0x82130b98
	ctx.lr = 0x82134A88;
	sub_82130B98(ctx, base);
loc_82134A88:
	// lwz r11,492(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 492);
	// subf r11,r11,r16
	ctx.r11.u64 = r16.u64 - ctx.r11.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x82134ab0
	if (!ctx.cr6.gt) goto loc_82134AB0;
	// fadds f0,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f29.f64 + f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f2,28252(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28252);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f0,f18
	ctx.f1.f64 = double(float(ctx.f0.f64 - f18.f64));
	// bl 0x82130b98
	ctx.lr = 0x82134AB0;
	sub_82130B98(ctx, base);
loc_82134AB0:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f58
	ctx.lr = 0x82134ABC;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_821516A0) {
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
	// lbz r11,188(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 188);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82151718
	if (ctx.cr0.eq) goto loc_82151718;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821e78c8
	ctx.lr = 0x821516C8;
	sub_821E78C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r9,2
	ctx.r9.s64 = 2;
	// lfs f0,26552(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26552);
	ctx.f0.f64 = double(temp.f32);
	// li r8,255
	ctx.r8.s64 = 255;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f5,20480(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20480);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f13,1992(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,-18452(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -18452);
	ctx.f3.f64 = double(temp.f32);
	// fmr f4,f5
	ctx.f4.f64 = ctx.f5.f64;
	// fadds f2,f12,f13
	ctx.f2.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bl 0x821e8688
	ctx.lr = 0x82151710;
	sub_821E8688(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821e78c8
	ctx.lr = 0x82151718;
	sub_821E78C8(ctx, base);
loc_82151718:
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

DEFINE_REX_FUNC(sub_82157680) {
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
	// lbz r11,285(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 285);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821576a8
	if (!ctx.cr0.eq) goto loc_821576A8;
	// rlwinm. r11,r4,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82157790
	if (!ctx.cr0.eq) goto loc_82157790;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82157798
	goto loc_82157798;
loc_821576A8:
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm. r11,r4,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821576d0
	if (ctx.cr0.eq) goto loc_821576D0;
	// lhz r11,286(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 286);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,286(r3)
	REX_STORE_U16(ctx.r3.u32 + 286, ctx.r11.u16);
	// bge 0x82157794
	if (!ctx.cr0.lt) goto loc_82157794;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8215777c
	goto loc_8215777C;
loc_821576D0:
	// rlwinm. r11,r4,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82157784
	if (ctx.cr0.eq) goto loc_82157784;
	// lhz r11,286(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 286);
	// lha r10,288(r3)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 288));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// sth r11,286(r3)
	REX_STORE_U16(ctx.r3.u32 + 286, ctx.r11.u16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82157778
	if (!ctx.cr6.lt) goto loc_82157778;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfs f0,1996(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82157774
	if (!ctx.cr6.lt) goto loc_82157774;
	// lha r10,308(r3)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 308));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lha r7,288(r3)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 288));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,116(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 116);
	// lfs f13,26632(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 26632);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,26840(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26840);
	ctx.f12.f64 = double(temp.f32);
loc_82157730:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r10,r10,103
	ctx.r10.s64 = ctx.r10.s64 + 103;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lbz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,182
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 182, ctx.xer);
	// bne cr6,0x82157754
	if (!ctx.cr6.eq) goto loc_82157754;
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82157758
	goto loc_82157758;
loc_82157754:
	// fadds f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
loc_82157758:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82157730
	if (ctx.cr6.lt) goto loc_82157730;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,26924(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26924);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82157794
	if (!ctx.cr6.lt) goto loc_82157794;
loc_82157774:
	// lhz r11,286(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 286);
loc_82157778:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8215777C:
	// sth r11,286(r3)
	REX_STORE_U16(ctx.r3.u32 + 286, ctx.r11.u16);
	// b 0x82157794
	goto loc_82157794;
loc_82157784:
	// andi. r11,r4,16992
	ctx.r11.u64 = ctx.r4.u64 & 16992;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82157794
	if (ctx.cr0.eq) goto loc_82157794;
loc_82157790:
	// bl 0x82151590
	ctx.lr = 0x82157794;
	sub_82151590(ctx, base);
loc_82157794:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82157798:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215D088) {
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
	ctx.lr = 0x8215D090;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,22(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 22);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8215d148
	if (ctx.cr6.lt) goto loc_8215D148;
	// beq cr6,0x8215d0cc
	if (ctx.cr6.eq) goto loc_8215D0CC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8215d0bc
	if (ctx.cr6.lt) goto loc_8215D0BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215d158
	goto loc_8215D158;
loc_8215D0BC:
	// addi r6,r31,112
	ctx.r6.s64 = r31.s64 + 112;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// b 0x8215d130
	goto loc_8215D130;
loc_8215D0CC:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,24312(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24312);
	// xori r30,r11,1
	r30.u64 = ctx.r11.u64 ^ 1;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r30,2
	ctx.r9.s64 = r30.s64 + 2;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r28,r11,80
	r28.s64 = ctx.r11.s64 + 80;
	// add r29,r9,r31
	r29.u64 = ctx.r9.u64 + r31.u64;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x8215c750
	ctx.lr = 0x8215D10C;
	sub_8215C750(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215d11c
	if (ctx.cr0.eq) goto loc_8215D11C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8215d158
	goto loc_8215D158;
loc_8215D11C:
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r6,r11,80
	ctx.r6.s64 = ctx.r11.s64 + 80;
loc_8215D130:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215c750
	ctx.lr = 0x8215D138;
	sub_8215C750(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8215d158
	goto loc_8215D158;
loc_8215D148:
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// lfs f1,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215cb30
	ctx.lr = 0x8215D158;
	sub_8215CB30(ctx, base);
loc_8215D158:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821613C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lbz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// ble cr6,0x82161480
	if (!ctx.cr6.gt) goto loc_82161480;
	// li r31,1
	r31.s64 = 1;
loc_821613EC:
	// subfic r5,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r5.u64 = static_cast<uint64_t>(8) - ctx.r11.u64;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82161440
	if (!ctx.cr6.lt) goto loc_82161440;
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// slw r5,r31,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r5.u8 & 0x3F));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r4,r7,-8
	ctx.r4.s64 = ctx.r7.s64 + -8;
	// and r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 & ctx.r6.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// slw r5,r6,r4
	ctx.r5.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r4.u8 & 0x3F));
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lbz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// addic. r4,r7,-8
	ctx.xer.ca = ctx.r7.u32 > 7;
	ctx.r4.s64 = ctx.r7.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// bgt 0x821613ec
	if (ctx.cr0.gt) goto loc_821613EC;
	// b 0x82161480
	goto loc_82161480;
loc_82161440:
	// subf r8,r4,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r4.u64;
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// slw r8,r31,r4
	ctx.r8.u64 = ctx.r4.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r4.u8 & 0x3F));
	// srw r7,r7,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// and r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ctx.r8.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x82161480
	if (ctx.cr6.lt) goto loc_82161480;
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
loc_82161480:
	// subfic r10,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r10.u64 = static_cast<uint64_t>(32) - ctx.r10.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// slw r11,r9,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// sraw r3,r11,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r3.s64 = ctx.r11.s32 >> temp.u32;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82167A18) {
	REX_FUNC_PROLOGUE();
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r8,r9,24536
	ctx.r8.s64 = ctx.r9.s64 + 24536;
	// li r10,3
	ctx.r10.s64 = 3;
	// sth r10,24536(r9)
	REX_STORE_U16(ctx.r9.u32 + 24536, ctx.r10.u16);
	// sth r11,2(r8)
	REX_STORE_U16(ctx.r8.u32 + 2, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821692C0) {
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
	// lwz r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8216932c
	if (!ctx.cr6.eq) goto loc_8216932C;
	// lha r10,22(r3)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 22));
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// beq cr6,0x82169300
	if (ctx.cr6.eq) goto loc_82169300;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x820e1df8
	ctx.lr = 0x821692FC;
	sub_820E1DF8(ctx, base);
	// b 0x82169324
	goto loc_82169324;
loc_82169300:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82169324:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82169354
	goto loc_82169354;
loc_8216932C:
	// lwz r9,92(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// addi r8,r10,92
	ctx.r8.s64 = ctx.r10.s64 + 92;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,96(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 96);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,100(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 100);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r10,104(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82169354:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216B600) {
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,24584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24584);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8216b6e0
	if (!ctx.cr6.eq) goto loc_8216B6E0;
	// lfs f1,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r3,108
	ctx.r5.s64 = ctx.r3.s64 + 108;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1cc0
	ctx.lr = 0x8216B634;
	sub_820E1CC0(ctx, base);
	// lbz r11,62(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 62);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8216b6a4
	if (ctx.cr0.eq) goto loc_8216B6A4;
	// addi r5,r31,76
	ctx.r5.s64 = r31.s64 + 76;
	// addi r4,r31,92
	ctx.r4.s64 = r31.s64 + 92;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1ba8
	ctx.lr = 0x8216B650;
	sub_820E1BA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x820e2290
	ctx.lr = 0x8216B658;
	sub_820E2290(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,24588
	ctx.r3.s64 = ctx.r11.s64 + 24588;
	// bl 0x820e1c28
	ctx.lr = 0x8216B668;
	sub_820E1C28(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8216b680
	if (!ctx.cr6.gt) goto loc_8216B680;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8216B680:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// fsubs f1,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,24604
	ctx.r5.s64 = ctx.r11.s64 + 24604;
	// bl 0x820e1cc0
	ctx.lr = 0x8216B694;
	sub_820E1CC0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1b28
	ctx.lr = 0x8216B6A4;
	sub_820E1B28(ctx, base);
loc_8216B6A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x820e1b28
	ctx.lr = 0x8216B6D0;
	sub_820E1B28(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,76
	ctx.r4.s64 = r31.s64 + 76;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x820e1b28
	ctx.lr = 0x8216B6E0;
	sub_820E1B28(ctx, base);
loc_8216B6E0:
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

DEFINE_REX_FUNC(sub_8216D9B8) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8216ca30
	ctx.lr = 0x8216D9D0;
	sub_8216CA30(ctx, base);
	// lbz r11,91(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 91);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8216da40
	if (!ctx.cr0.eq) goto loc_8216DA40;
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// bl 0x82208d30
	ctx.lr = 0x8216D9E4;
	sub_82208D30(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8216da08
	if (ctx.cr0.eq) goto loc_8216DA08;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8448
	ctx.r4.s64 = ctx.r11.s64 + -8448;
	// bl 0x822d55f8
	ctx.lr = 0x8216D9FC;
	sub_822D55F8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// b 0x8216da5c
	goto loc_8216DA5C;
loc_8216DA08:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,91(r31)
	REX_STORE_U8(r31.u32 + 91, ctx.r11.u8);
	// b 0x8216da5c
	goto loc_8216DA5C;
loc_8216DA14:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x8216da40
	if (!ctx.cr6.eq) goto loc_8216DA40;
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
	// stb r11,91(r31)
	REX_STORE_U8(r31.u32 + 91, ctx.r11.u8);
	// bne 0x8216da40
	if (!ctx.cr0.eq) goto loc_8216DA40;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_8216DA40:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,100(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824d3eac
	ctx.lr = 0x8216DA54;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8216da14
	if (!ctx.cr0.eq) goto loc_8216DA14;
loc_8216DA5C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82170200) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stb r11,208(r3)
	REX_STORE_U8(ctx.r3.u32 + 208, ctx.r11.u8);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82170214:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82170214
	if (!ctx.cr6.eq) goto loc_82170214;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,208(r3)
	REX_STORE_U8(ctx.r3.u32 + 208, ctx.r11.u8);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
loc_82170248:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb. r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82170248
	if (!ctx.cr0.eq) goto loc_82170248;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82170C48) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e80
	ctx.lr = 0x82170C50;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f24
	ctx.lr = 0x82170C58;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8217118c
	if (ctx.cr6.lt) goto loc_8217118C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lfs f29,-7308(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -7308);
	f29.f64 = double(temp.f32);
	// lfs f30,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f30.f64 = double(temp.f32);
	// lfs f31,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	f31.f64 = double(temp.f32);
	// beq cr6,0x82170d18
	if (ctx.cr6.eq) goto loc_82170D18;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82170e1c
	if (ctx.cr6.lt) goto loc_82170E1C;
	// beq cr6,0x82171178
	if (ctx.cr6.eq) goto loc_82171178;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x82170cd4
	if (ctx.cr6.lt) goto loc_82170CD4;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x821712f0
	if (!ctx.cr6.eq) goto loc_821712F0;
	// lwz r3,120(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// bl 0x8245e260
	ctx.lr = 0x82170CB4;
	sub_8245E260(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x821712f0
	if (ctx.cr6.eq) goto loc_821712F0;
	// lwz r3,120(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 120);
	// bl 0x8245e260
	ctx.lr = 0x82170CC4;
	sub_8245E260(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x821712f0
	if (ctx.cr6.eq) goto loc_821712F0;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// b 0x821712ec
	goto loc_821712EC;
loc_82170CD4:
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r6,r31,128
	ctx.r6.s64 = r31.s64 + 128;
	// addi r3,r11,-13224
	ctx.r3.s64 = ctx.r11.s64 + -13224;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x8219a0b8
	ctx.lr = 0x82170CEC;
	sub_8219A0B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82170cf8
	if (ctx.cr0.eq) goto loc_82170CF8;
	// bl 0x8219a048
	ctx.lr = 0x82170CF8;
	sub_8219A048(ctx, base);
loc_82170CF8:
	// bl 0x821affa8
	ctx.lr = 0x82170CFC;
	sub_821AFFA8(ctx, base);
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r30,1
	r30.s64 = 1;
	// stw r30,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r30,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, r30.u16);
	// b 0x821712f0
	goto loc_821712F0;
loc_82170D18:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r6,116(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f31,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f30,168(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// lfs f0,-7312(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -7312);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32175
	ctx.r5.s64 = -2108620800;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-7316(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -7316);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-7320(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -7320);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r5,27976
	r30.s64 = ctx.r5.s64 + 27976;
	// lfs f11,-24544(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -24544);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r11,-7328
	ctx.r4.s64 = ctx.r11.s64 + -7328;
	// lfs f10,-8492(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -8492);
	ctx.f10.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// bl 0x821761e0
	ctx.lr = 0x82170D98;
	sub_821761E0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r3,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// lfs f0,31160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 31160);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-7332(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -7332);
	ctx.f13.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r6,r11,-7336
	ctx.r6.s64 = ctx.r11.s64 + -7336;
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f29,152(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x82170DE0;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82170e0c
	if (ctx.cr0.eq) goto loc_82170E0C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r7,116(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r8,r31,92
	ctx.r8.s64 = r31.s64 + 92;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f2,2332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2332);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,29480(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 29480);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82170b80
	ctx.lr = 0x82170E08;
	sub_82170B80(ctx, base);
	// b 0x82170e10
	goto loc_82170E10;
loc_82170E0C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82170E10:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_82170E1C:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r27,4(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r29,12(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// andi. r11,r27,16480
	ctx.r11.u64 = r27.u64 & 16480;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82171148
	if (!ctx.cr0.eq) goto loc_82171148;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,1888(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1888);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82171148
	if (ctx.cr6.eq) goto loc_82171148;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// rlwinm. r10,r29,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r28,r26
	r28.u64 = r26.u64;
	// addi r30,r11,-13224
	r30.s64 = ctx.r11.s64 + -13224;
	// beq 0x82170e88
	if (ctx.cr0.eq) goto loc_82170E88;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,1320
	ctx.r3.s64 = r30.s64 + 1320;
	// bl 0x82199e58
	ctx.lr = 0x82170E68;
	sub_82199E58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82170e88
	if (ctx.cr0.eq) goto loc_82170E88;
	// li r3,17
	ctx.r3.s64 = 17;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x8212bc38
	ctx.lr = 0x82170E7C;
	sub_8212BC38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,1320
	ctx.r3.s64 = r30.s64 + 1320;
	// bl 0x82199cf0
	ctx.lr = 0x82170E88;
	sub_82199CF0(ctx, base);
loc_82170E88:
	// rlwinm. r11,r29,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82170ebc
	if (ctx.cr0.eq) goto loc_82170EBC;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r30,1320
	ctx.r3.s64 = r30.s64 + 1320;
	// bl 0x82199e58
	ctx.lr = 0x82170E9C;
	sub_82199E58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82170ebc
	if (ctx.cr0.eq) goto loc_82170EBC;
	// li r3,17
	ctx.r3.s64 = 17;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x8212bc38
	ctx.lr = 0x82170EB0;
	sub_8212BC38(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r30,1320
	ctx.r3.s64 = r30.s64 + 1320;
	// bl 0x82199cf0
	ctx.lr = 0x82170EBC;
	sub_82199CF0(ctx, base);
loc_82170EBC:
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r30,1320
	ctx.r3.s64 = r30.s64 + 1320;
	// bl 0x82199e58
	ctx.lr = 0x82170EC8;
	sub_82199E58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82170ed4
	if (ctx.cr0.eq) goto loc_82170ED4;
	// li r28,1
	r28.s64 = 1;
loc_82170ED4:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,1320
	ctx.r3.s64 = r30.s64 + 1320;
	// bl 0x82199e58
	ctx.lr = 0x82170EE0;
	sub_82199E58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82170eec
	if (ctx.cr0.eq) goto loc_82170EEC;
	// ori r28,r28,2
	r28.u64 = r28.u64 | 2;
loc_82170EEC:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// rlwinm. r10,r27,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r28,200(r11)
	REX_STORE_U32(ctx.r11.u32 + 200, r28.u32);
	// beq 0x82170f10
	if (ctx.cr0.eq) goto loc_82170F10;
	// li r3,18
	ctx.r3.s64 = 18;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x8212bc38
	ctx.lr = 0x82170F08;
	sub_8212BC38(ctx, base);
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82199f28
	ctx.lr = 0x82170F10;
	sub_82199F28(ctx, base);
loc_82170F10:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,31920
	ctx.r11.s64 = ctx.r11.s64 + 31920;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lfs f3,16228(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16228);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,60(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// lwz r29,7840(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 7840);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x82204ae0
	ctx.lr = 0x82170F3C;
	sub_82204AE0(ctx, base);
	// stfs f1,88(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r29.u32 + 88, temp.u32);
	// lwz r10,1352(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1352);
	// lfs f0,92(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1324(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1324);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb2c0
	ctx.lr = 0x82170F64;
	sub_821EB2C0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r11,-23820
	ctx.r3.s64 = ctx.r11.s64 + -23820;
	// bl 0x821eacb0
	ctx.lr = 0x82170F74;
	sub_821EACB0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,33
	ctx.r3.u64 = ctx.r3.u64 | 33;
	// lwz r4,344(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 344);
	// lwz r31,124(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 124);
	// bl 0x820e68b8
	ctx.lr = 0x82170F90;
	sub_820E68B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r4,344(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 344);
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// ori r3,r3,30
	ctx.r3.u64 = ctx.r3.u64 | 30;
	// bl 0x820e68b8
	ctx.lr = 0x82170FA4;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lfs f12,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f11,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lfs f10,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r10,-7352
	ctx.r5.s64 = ctx.r10.s64 + -7352;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f2,f13,f0,f12
	ctx.f2.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// fmadds f1,f11,f0,f10
	ctx.f1.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f10.f64)));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x821eaf80
	ctx.lr = 0x82170FE8;
	sub_821EAF80(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f29,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r31,-1
	r31.s64 = -1;
	// lfs f0,28240(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28240);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f13,-7356(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -7356);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f2,2008(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2008);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-17476(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -17476);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821e8898
	ctx.lr = 0x8217102C;
	sub_821E8898(ctx, base);
	// lis r11,-256
	ctx.r11.s64 = -16777216;
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// stw r31,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, r31.u32);
	// ori r11,r11,255
	ctx.r11.u64 = ctx.r11.u64 | 255;
	// ori r10,r10,255
	ctx.r10.u64 = ctx.r10.u64 | 255;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r11,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stw r10,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// mr r30,r26
	r30.u64 = r26.u64;
	// ori r11,r9,65535
	ctx.r11.u64 = ctx.r9.u64 | 65535;
	// stw r11,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f25,-24452(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24452);
	f25.f64 = double(temp.f32);
	// lfs f26,16896(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16896);
	f26.f64 = double(temp.f32);
	// addi r31,r1,192
	r31.s64 = ctx.r1.s64 + 192;
	// lfs f30,-7360(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -7360);
	f30.f64 = double(temp.f32);
	// lfs f27,16372(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16372);
	f27.f64 = double(temp.f32);
	// lfs f23,-7364(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -7364);
	f23.f64 = double(temp.f32);
	// lfs f24,-12964(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -12964);
	f24.f64 = double(temp.f32);
loc_8217108C:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lwz r27,0(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r28,r26
	r28.u64 = r26.u64;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r29,8
	r29.s64 = 8;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f28,f0,f24,f23
	f28.f64 = double(float(std::fma(ctx.f0.f64, f24.f64, f23.f64)));
loc_821710B0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82202838
	ctx.lr = 0x821710BC;
	sub_82202838(ctx, base);
	// extsw r11,r29
	ctx.r11.s64 = r29.s32;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f27
	ctx.f1.f64 = double(float(ctx.f0.f64 * f27.f64));
	// bl 0x820e1cc0
	ctx.lr = 0x821710E0;
	sub_820E1CC0(ctx, base);
	// extsw r11,r28
	ctx.r11.s64 = r28.s32;
	// stfs f28,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f29,216(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfs f31,220(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f0,f0,f30,f26
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, f26.f64)));
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// bl 0x82202740
	ctx.lr = 0x82171110;
	sub_82202740(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// bl 0x821e8898
	ctx.lr = 0x82171128;
	sub_821E8898(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// bgt 0x821710b0
	if (ctx.cr0.gt) goto loc_821710B0;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x8217108c
	if (ctx.cr6.lt) goto loc_8217108C;
	// b 0x821712f0
	goto loc_821712F0;
loc_82171148:
	// lwz r3,120(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 120);
	// bl 0x82101d68
	ctx.lr = 0x82171150;
	sub_82101D68(ctx, base);
	// lwz r3,124(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 124);
	// bl 0x82101d68
	ctx.lr = 0x82171158;
	sub_82101D68(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r3,15
	ctx.r3.s64 = 15;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// stb r11,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r11.u8);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// stb r11,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r11.u8);
	// bl 0x8212bc38
	ctx.lr = 0x82171178;
	sub_8212BC38(ctx, base);
loc_82171178:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// b 0x821712f0
	goto loc_821712F0;
loc_8217118C:
	// bl 0x821aff90
	ctx.lr = 0x82171190;
	sub_821AFF90(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// li r26,0
	r26.s64 = 0;
	// addi r11,r11,-4224
	ctx.r11.s64 = ctx.r11.s64 + -4224;
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f31,16228(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16228);
	f31.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f30,16264(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16264);
	f30.f64 = double(temp.f32);
	// li r30,1
	r30.s64 = 1;
	// lfs f29,-23928(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23928);
	f29.f64 = double(temp.f32);
	// lfs f28,-7368(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -7368);
	f28.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f5,-7372(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -7372);
	ctx.f5.f64 = double(temp.f32);
	// fmr f7,f31
	ctx.f7.f64 = f31.f64;
	// lfs f27,-30168(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30168);
	f27.f64 = double(temp.f32);
	// fmr f6,f30
	ctx.f6.f64 = f30.f64;
	// lfs f2,20496(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20496);
	ctx.f2.f64 = double(temp.f32);
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x82104548
	ctx.lr = 0x82171204;
	sub_82104548(ctx, base);
	// stw r3,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb2c0
	ctx.lr = 0x82171210;
	sub_821EB2C0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-7380
	ctx.r3.s64 = ctx.r11.s64 + -7380;
	// bl 0x821eacb0
	ctx.lr = 0x8217121C;
	sub_821EACB0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// addi r29,r11,432
	r29.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,33
	ctx.r3.u64 = ctx.r3.u64 | 33;
	// lwz r4,344(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82171234;
	sub_820E68B8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r4,344(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 344);
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// ori r3,r3,30
	ctx.r3.u64 = ctx.r3.u64 | 30;
	// bl 0x820e68b8
	ctx.lr = 0x82171248;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,-7352
	ctx.r5.s64 = ctx.r11.s64 + -7352;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bl 0x821eb1a0
	ctx.lr = 0x82171264;
	sub_821EB1A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f7,f31
	ctx.f7.f64 = f31.f64;
	// fmr f6,f30
	ctx.f6.f64 = f30.f64;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// lfs f0,-8492(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8492);
	ctx.f0.f64 = double(temp.f32);
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
	// fadds f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f2,-24056(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24056);
	ctx.f2.f64 = double(temp.f32);
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x82104548
	ctx.lr = 0x821712AC;
	sub_82104548(ctx, base);
	// stw r3,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r3.u32);
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r6,r31,128
	ctx.r6.s64 = r31.s64 + 128;
	// addi r3,r11,-13224
	ctx.r3.s64 = ctx.r11.s64 + -13224;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x8219a078
	ctx.lr = 0x821712C8;
	sub_8219A078(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,26552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26552);
	ctx.f0.f64 = double(temp.f32);
	// li r3,14
	ctx.r3.s64 = 14;
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// lfs f1,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x821712E4;
	sub_8212BC38(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
loc_821712EC:
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_821712F0:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f70
	ctx.lr = 0x821712FC;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82186C50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82186C58;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,60(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// b 0x82186c7c
	goto loc_82186C7C;
loc_82186C6C:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82186c84
	if (ctx.cr6.eq) goto loc_82186C84;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82186C7C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82186c6c
	if (!ctx.cr6.eq) goto loc_82186C6C;
loc_82186C84:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82186cd8
	if (ctx.cr6.eq) goto loc_82186CD8;
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82186cb0
	if (ctx.cr6.eq) goto loc_82186CB0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82184510
	ctx.lr = 0x82186CA0;
	sub_82184510(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c80a8
	ctx.lr = 0x82186CA8;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82186CB0:
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d6840
	ctx.lr = 0x82186CCC;
	sub_822D6840(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,64(r30)
	REX_STORE_U32(r30.u32 + 64, ctx.r11.u32);
loc_82186CD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821886A0) {
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
	// lbz r11,129(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 129);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821886c4
	if (ctx.cr0.eq) goto loc_821886C4;
	// bl 0x82236a48
	ctx.lr = 0x821886C0;
	sub_82236A48(ctx, base);
	// b 0x821886c8
	goto loc_821886C8;
loc_821886C4:
	// bl 0x82208d20
	ctx.lr = 0x821886C8;
	sub_82208D20(ctx, base);
loc_821886C8:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821892F8) {
	REX_FUNC_PROLOGUE();
	// mulli r11,r4,3
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(3));
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mulli r10,r10,14424
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(14424));
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r10,980(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 980);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82189384
	if (ctx.cr6.eq) goto loc_82189384;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82189384
	if (ctx.cr6.eq) goto loc_82189384;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82189378
	if (!ctx.cr6.eq) goto loc_82189378;
	// mulli r11,r11,14424
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(14424));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,15404(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 15404);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82189370
	if (!ctx.cr6.gt) goto loc_82189370;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82189354:
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82189368
	if (ctx.cr6.eq) goto loc_82189368;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82189368:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bdnz 0x82189354
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82189354;
loc_82189370:
	// stw r8,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// b 0x8218938c
	goto loc_8218938C;
loc_82189378:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82189388
	goto loc_82189388;
loc_82189384:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82189388:
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_8218938C:
	// addi r3,r7,960
	ctx.r3.s64 = ctx.r7.s64 + 960;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218C2A8) {
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
	ctx.lr = 0x8218C2B0;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f30
	ctx.lr = 0x8218C2B8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lhz r29,624(r3)
	r29.u64 = REX_LOAD_U16(ctx.r3.u32 + 624);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// addi r11,r10,30448
	ctx.r11.s64 = ctx.r10.s64 + 30448;
	// mulli r10,r8,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(20));
	// lfs f31,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8218c380
	if (ctx.cr6.eq) goto loc_8218C380;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218c32c
	if (ctx.cr6.eq) goto loc_8218C32C;
	// lwz r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// rlwinm r9,r9,0,13,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// beq cr6,0x8218c328
	if (ctx.cr6.eq) goto loc_8218C328;
	// lwz r11,112(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r11,112(r10)
	REX_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
loc_8218C328:
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
loc_8218C32C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218c364
	if (ctx.cr6.eq) goto loc_8218C364;
	// lwz r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// rlwinm r9,r9,0,13,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// beq cr6,0x8218c360
	if (ctx.cr6.eq) goto loc_8218C360;
	// lwz r11,112(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r11,112(r10)
	REX_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
loc_8218C360:
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
loc_8218C364:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218c378
	if (ctx.cr6.eq) goto loc_8218C378;
	// bl 0x8218fa58
	ctx.lr = 0x8218C374;
	sub_8218FA58(ctx, base);
	// stw r27,16(r31)
	REX_STORE_U32(r31.u32 + 16, r27.u32);
loc_8218C378:
	// stfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_8218C380:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f29,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	f29.f64 = double(temp.f32);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// lfs f26,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f26.f64 = double(temp.f32);
	// fadds f27,f29,f26
	f27.f64 = double(float(f29.f64 + f26.f64));
	// beq cr6,0x8218ca3c
	if (ctx.cr6.eq) goto loc_8218CA3C;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// beq cr6,0x8218c70c
	if (ctx.cr6.eq) goto loc_8218C70C;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(r29.s32, 3, ctx.xer);
	// beq cr6,0x8218c5b8
	if (ctx.cr6.eq) goto loc_8218C5B8;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// beq cr6,0x8218c4e4
	if (ctx.cr6.eq) goto loc_8218C4E4;
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(r29.s32, 5, ctx.xer);
	// beq cr6,0x8218c438
	if (ctx.cr6.eq) goto loc_8218C438;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(r29.s32, 6, ctx.xer);
	// bne cr6,0x8218ca9c
	if (!ctx.cr6.eq) goto loc_8218CA9C;
	// lhz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 88);
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// beq cr6,0x8218ca9c
	if (ctx.cr6.eq) goto loc_8218CA9C;
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(f29.f64, f31.f64);
	// bgt cr6,0x8218ca9c
	if (ctx.cr6.gt) goto loc_8218CA9C;
	// fcmpu cr6,f27,f31
	ctx.cr6.compare(f27.f64, f31.f64);
	// ble cr6,0x8218ca9c
	if (!ctx.cr6.gt) goto loc_8218CA9C;
	// lis r6,24
	ctx.r6.s64 = 1572864;
	// lha r11,92(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 92));
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,-17112
	ctx.r8.s64 = ctx.r10.s64 + -17112;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lhax r11,r11,r8
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32));
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f2,16272(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16272);
	ctx.f2.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f1,-8492(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -8492);
	ctx.f1.f64 = double(temp.f32);
	// li r7,56
	ctx.r7.s64 = 56;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8219f6e0
	ctx.lr = 0x8218C434;
	sub_8219F6E0(ctx, base);
	// b 0x8218ca98
	goto loc_8218CA98;
loc_8218C438:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f31.f64);
	// bgt cr6,0x8218ca9c
	if (ctx.cr6.gt) goto loc_8218CA9C;
	// fcmpu cr6,f27,f31
	ctx.cr6.compare(f27.f64, f31.f64);
	// ble cr6,0x8218ca9c
	if (!ctx.cr6.gt) goto loc_8218CA9C;
	// lhz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 88);
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// beq cr6,0x8218c4b0
	if (ctx.cr6.eq) goto loc_8218C4B0;
	// lis r6,24
	ctx.r6.s64 = 1572864;
	// lha r11,92(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 92));
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,-17112
	ctx.r8.s64 = ctx.r10.s64 + -17112;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lhax r11,r11,r8
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32));
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f2,16272(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16272);
	ctx.f2.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f1,-8492(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -8492);
	ctx.f1.f64 = double(temp.f32);
	// li r7,72
	ctx.r7.s64 = 72;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8219f6e0
	ctx.lr = 0x8218C4AC;
	sub_8219F6E0(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
loc_8218C4B0:
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218ea18
	ctx.lr = 0x8218C4C8;
	sub_8218EA18(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a78c8
	ctx.lr = 0x8218C4DC;
	sub_821A78C8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// b 0x8218c58c
	goto loc_8218C58C;
loc_8218C4E4:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f31.f64);
	// bgt cr6,0x8218ca9c
	if (ctx.cr6.gt) goto loc_8218CA9C;
	// fcmpu cr6,f27,f31
	ctx.cr6.compare(f27.f64, f31.f64);
	// ble cr6,0x8218ca9c
	if (!ctx.cr6.gt) goto loc_8218CA9C;
	// lhz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 88);
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// beq cr6,0x8218c55c
	if (ctx.cr6.eq) goto loc_8218C55C;
	// lis r11,24
	ctx.r11.s64 = 1572864;
	// lha r10,92(r30)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r30.u32 + 92));
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,-17112
	ctx.r9.s64 = ctx.r9.s64 + -17112;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lhax r11,r11,r9
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32));
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f2,16272(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16272);
	ctx.f2.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,-8492(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -8492);
	ctx.f1.f64 = double(temp.f32);
	// li r7,120
	ctx.r7.s64 = 120;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8219f6e0
	ctx.lr = 0x8218C558;
	sub_8219F6E0(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
loc_8218C55C:
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218ea18
	ctx.lr = 0x8218C574;
	sub_8218EA18(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a78c8
	ctx.lr = 0x8218C588;
	sub_821A78C8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_8218C58C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,-5
	ctx.r6.s64 = -5;
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// lfs f1,16264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f1.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218fe60
	ctx.lr = 0x8218C5B0;
	sub_8218FE60(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// b 0x8218ca9c
	goto loc_8218CA9C;
loc_8218C5B8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f31.f64);
	// lfs f30,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	f30.f64 = double(temp.f32);
	// bgt cr6,0x8218c61c
	if (ctx.cr6.gt) goto loc_8218C61C;
	// fcmpu cr6,f27,f31
	ctx.cr6.compare(f27.f64, f31.f64);
	// ble cr6,0x8218c61c
	if (!ctx.cr6.gt) goto loc_8218C61C;
	// li r11,7
	ctx.r11.s64 = 7;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// lfs f2,16628(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16628);
	ctx.f2.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x8219f6e0
	ctx.lr = 0x8218C618;
	sub_8219F6E0(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
loc_8218C61C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f30.f64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r28,24
	r28.s64 = 1572864;
	// lfs f28,16272(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16272);
	f28.f64 = double(temp.f32);
	// lfs f31,-8492(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8492);
	f31.f64 = double(temp.f32);
	// bgt cr6,0x8218c680
	if (ctx.cr6.gt) goto loc_8218C680;
	// fcmpu cr6,f27,f30
	ctx.cr6.compare(f27.f64, f30.f64);
	// ble cr6,0x8218c680
	if (!ctx.cr6.gt) goto loc_8218C680;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// li r11,44
	ctx.r11.s64 = 44;
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8219f6e0
	ctx.lr = 0x8218C67C;
	sub_8219F6E0(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_8218C680:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16200);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(f29.f64, ctx.f0.f64);
	// bgt cr6,0x8218ca9c
	if (ctx.cr6.gt) goto loc_8218CA9C;
	// fcmpu cr6,f27,f0
	ctx.cr6.compare(f27.f64, ctx.f0.f64);
	// ble cr6,0x8218ca9c
	if (!ctx.cr6.gt) goto loc_8218CA9C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218c6d0
	if (ctx.cr6.eq) goto loc_8218C6D0;
	// lwz r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// rlwinm r9,r9,0,13,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// beq cr6,0x8218c6d0
	if (ctx.cr6.eq) goto loc_8218C6D0;
	// lwz r11,112(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r11,112(r10)
	REX_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
loc_8218C6D0:
	// li r11,43
	ctx.r11.s64 = 43;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f28.f64;
	// li r7,56
	ctx.r7.s64 = 56;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8219f6e0
	ctx.lr = 0x8218C708;
	sub_8219F6E0(ctx, base);
	// b 0x8218ca34
	goto loc_8218CA34;
loc_8218C70C:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f31.f64);
	// bgt cr6,0x8218c76c
	if (ctx.cr6.gt) goto loc_8218C76C;
	// fcmpu cr6,f27,f31
	ctx.cr6.compare(f27.f64, f31.f64);
	// ble cr6,0x8218c76c
	if (!ctx.cr6.gt) goto loc_8218C76C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ori r7,r9,256
	ctx.r7.u64 = ctx.r9.u64 | 256;
	// li r5,7
	ctx.r5.s64 = 7;
	// lfs f1,2008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	ctx.f1.f64 = double(temp.f32);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lfs f2,16628(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16628);
	ctx.f2.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x8219f6e0
	ctx.lr = 0x8218C768;
	sub_8219F6E0(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
loc_8218C76C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r28,24
	r28.s64 = 1572864;
	// lfs f0,16172(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,16272(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16272);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(f29.f64, ctx.f0.f64);
	// lfs f31,-8492(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -8492);
	f31.f64 = double(temp.f32);
	// bgt cr6,0x8218c80c
	if (ctx.cr6.gt) goto loc_8218C80C;
	// fcmpu cr6,f27,f0
	ctx.cr6.compare(f27.f64, ctx.f0.f64);
	// ble cr6,0x8218c80c
	if (!ctx.cr6.gt) goto loc_8218C80C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218c7d0
	if (ctx.cr6.eq) goto loc_8218C7D0;
	// lwz r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// rlwinm r9,r9,0,13,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// beq cr6,0x8218c7d0
	if (ctx.cr6.eq) goto loc_8218C7D0;
	// lwz r11,112(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r11,112(r10)
	REX_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
loc_8218C7D0:
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// li r11,48
	ctx.r11.s64 = 48;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// li r7,72
	ctx.r7.s64 = 72;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8219f6e0
	ctx.lr = 0x8218C808;
	sub_8219F6E0(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
loc_8218C80C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-12892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12892);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(f29.f64, ctx.f0.f64);
	// bgt cr6,0x8218c898
	if (ctx.cr6.gt) goto loc_8218C898;
	// fcmpu cr6,f27,f0
	ctx.cr6.compare(f27.f64, ctx.f0.f64);
	// ble cr6,0x8218c898
	if (!ctx.cr6.gt) goto loc_8218C898;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218c85c
	if (ctx.cr6.eq) goto loc_8218C85C;
	// lwz r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// rlwinm r9,r9,0,13,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// beq cr6,0x8218c85c
	if (ctx.cr6.eq) goto loc_8218C85C;
	// lwz r11,112(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r11,112(r10)
	REX_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
loc_8218C85C:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// li r7,72
	ctx.r7.s64 = 72;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8219f6e0
	ctx.lr = 0x8218C894;
	sub_8219F6E0(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
loc_8218C898:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-30184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(f29.f64, ctx.f0.f64);
	// bgt cr6,0x8218c920
	if (ctx.cr6.gt) goto loc_8218C920;
	// fcmpu cr6,f27,f0
	ctx.cr6.compare(f27.f64, ctx.f0.f64);
	// ble cr6,0x8218c920
	if (!ctx.cr6.gt) goto loc_8218C920;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218c8e8
	if (ctx.cr6.eq) goto loc_8218C8E8;
	// lwz r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// rlwinm r9,r9,0,13,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// beq cr6,0x8218c8e8
	if (ctx.cr6.eq) goto loc_8218C8E8;
	// lwz r11,112(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r11,112(r10)
	REX_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
loc_8218C8E8:
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// li r7,72
	ctx.r7.s64 = 72;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8219f6e0
	ctx.lr = 0x8218C91C;
	sub_8219F6E0(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
loc_8218C920:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,28552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28552);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(f29.f64, ctx.f0.f64);
	// bgt cr6,0x8218c9ac
	if (ctx.cr6.gt) goto loc_8218C9AC;
	// fcmpu cr6,f27,f0
	ctx.cr6.compare(f27.f64, ctx.f0.f64);
	// ble cr6,0x8218c9ac
	if (!ctx.cr6.gt) goto loc_8218C9AC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218c970
	if (ctx.cr6.eq) goto loc_8218C970;
	// lwz r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// rlwinm r9,r9,0,13,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// beq cr6,0x8218c970
	if (ctx.cr6.eq) goto loc_8218C970;
	// lwz r11,112(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r11,112(r10)
	REX_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
loc_8218C970:
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// li r7,72
	ctx.r7.s64 = 72;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8219f6e0
	ctx.lr = 0x8218C9A8;
	sub_8219F6E0(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
loc_8218C9AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,26820(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26820);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(f29.f64, ctx.f0.f64);
	// bgt cr6,0x8218ca9c
	if (ctx.cr6.gt) goto loc_8218CA9C;
	// fcmpu cr6,f27,f0
	ctx.cr6.compare(f27.f64, ctx.f0.f64);
	// ble cr6,0x8218ca9c
	if (!ctx.cr6.gt) goto loc_8218CA9C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218c9fc
	if (ctx.cr6.eq) goto loc_8218C9FC;
	// lwz r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// rlwinm r9,r9,0,13,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// beq cr6,0x8218c9fc
	if (ctx.cr6.eq) goto loc_8218C9FC;
	// lwz r11,112(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r11,112(r10)
	REX_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
loc_8218C9FC:
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// li r11,41
	ctx.r11.s64 = 41;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// li r7,72
	ctx.r7.s64 = 72;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8219f6e0
	ctx.lr = 0x8218CA34;
	sub_8219F6E0(ctx, base);
loc_8218CA34:
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// b 0x8218ca9c
	goto loc_8218CA9C;
loc_8218CA3C:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f31.f64);
	// bgt cr6,0x8218ca9c
	if (ctx.cr6.gt) goto loc_8218CA9C;
	// fcmpu cr6,f27,f31
	ctx.cr6.compare(f27.f64, f31.f64);
	// ble cr6,0x8218ca9c
	if (!ctx.cr6.gt) goto loc_8218CA9C;
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ori r6,r9,256
	ctx.r6.u64 = ctx.r9.u64 | 256;
	// li r7,7
	ctx.r7.s64 = 7;
	// lfs f1,2008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	ctx.f1.f64 = double(temp.f32);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f2,16628(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16628);
	ctx.f2.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x8219f6e0
	ctx.lr = 0x8218CA98;
	sub_8219F6E0(ctx, base);
loc_8218CA98:
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
loc_8218CA9C:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 + f26.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f7c
	ctx.lr = 0x8218CAB4;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821AAA70) {
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
	// bl 0x821aa8d8
	ctx.lr = 0x821AAA88;
	sub_821AA8D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
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

DEFINE_REX_FUNC(sub_821AE308) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r30,r11,-10032
	r30.s64 = ctx.r11.s64 + -10032;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d5870
	ctx.lr = 0x821AE334;
	sub_822D5870(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r11,-10096
	ctx.r3.s64 = ctx.r11.s64 + -10096;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x821AE348;
	sub_822D5870(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lha r4,100(r11)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 100));
	// lha r3,88(r11)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 88));
	// bl 0x82152228
	ctx.lr = 0x821AE360;
	sub_82152228(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821ae374
	if (!ctx.cr6.eq) goto loc_821AE374;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82152228
	ctx.lr = 0x821AE374;
	sub_82152228(ctx, base);
loc_821AE374:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r6,448(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 448);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f0,8728(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8728);
	ctx.f0.f64 = double(temp.f32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lfs f13,8724(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8724);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f12,8252(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8252);
	ctx.f12.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f3,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f3.f64 = double(temp.f32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stfs f3,124(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f2,-24904(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -24904);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x821ab148
	ctx.lr = 0x821AE3CC;
	sub_821AB148(ctx, base);
	// lbz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 14);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x821ae404
	if (!ctx.cr6.eq) goto loc_821AE404;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821e2138
	ctx.lr = 0x821AE3E4;
	sub_821E2138(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// bl 0x821e34e0
	ctx.lr = 0x821AE3F0;
	sub_821E34E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,8716
	ctx.r11.s64 = ctx.r11.s64 + 8716;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821AE404;
	sub_821E2FD0(ctx, base);
loc_821AE404:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-10104(r10)
	REX_STORE_U8(ctx.r10.u32 + -10104, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

DEFINE_REX_FUNC(sub_821B3150) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// mulli r10,r3,248
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(248));
	// addi r11,r11,-25704
	ctx.r11.s64 = ctx.r11.s64 + -25704;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B3890) {
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
	// lha r5,0(r4)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(ctx.r4.u32 + 0));
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f31,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821c1760
	ctx.lr = 0x821B38D8;
	sub_821C1760(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lha r5,2(r30)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r30.u32 + 2));
	// li r8,-1
	ctx.r8.s64 = -1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c1760
	ctx.lr = 0x821B38FC;
	sub_821C1760(ctx, base);
	// lhz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 2);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// addi r11,r31,8120
	ctx.r11.s64 = r31.s64 + 8120;
	// bne cr6,0x821b3910
	if (!ctx.cr6.eq) goto loc_821B3910;
	// addi r11,r31,7224
	ctx.r11.s64 = r31.s64 + 7224;
loc_821B3910:
	// stw r11,10008(r31)
	REX_STORE_U32(r31.u32 + 10008, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821BB738) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e74
	ctx.lr = 0x821BB740;
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f29.u64);
	// stfd f30,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82187b58
	ctx.lr = 0x821BB754;
	sub_82187B58(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x821bb8b4
	if (ctx.cr6.lt) goto loc_821BB8B4;
	// beq cr6,0x821bc094
	if (ctx.cr6.eq) goto loc_821BC094;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x821bb7e8
	if (ctx.cr6.lt) goto loc_821BB7E8;
	// bne cr6,0x821bb8b8
	if (!ctx.cr6.eq) goto loc_821BB8B8;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lwz r10,-9804(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -9804);
	// lbz r10,76(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 76);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821bb7e0
	if (ctx.cr0.eq) goto loc_821BB7E0;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,424(r31)
	REX_STORE_U16(r31.u32 + 424, ctx.r11.u16);
	// li r9,-1
	ctx.r9.s64 = -1;
	// sth r10,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r10.u16);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8212b388
	ctx.lr = 0x821BB7C4;
	sub_8212B388(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,31868
	ctx.r11.s64 = ctx.r11.s64 + 31868;
	// lwa r3,48(r11)
	ctx.r3.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 48));
	// bl 0x821ff148
	ctx.lr = 0x821BB7D4;
	sub_821FF148(ctx, base);
	// bl 0x8218def8
	ctx.lr = 0x821BB7D8;
	sub_8218DEF8(ctx, base);
	// bl 0x8218df68
	ctx.lr = 0x821BB7DC;
	sub_8218DF68(ctx, base);
	// bl 0x821e0c20
	ctx.lr = 0x821BB7E0;
	sub_821E0C20(ctx, base);
loc_821BB7E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821bb8b8
	goto loc_821BB8B8;
loc_821BB7E8:
	// lhz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821bb804
	if (!ctx.cr0.eq) goto loc_821BB804;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// li r27,1
	r27.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bb808
	if (ctx.cr6.eq) goto loc_821BB808;
loc_821BB804:
	// li r27,0
	r27.s64 = 0;
loc_821BB808:
	// lha r11,30(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 30));
	// li r24,1
	r24.s64 = 1;
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x821bb870
	if (ctx.cr6.eq) goto loc_821BB870;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x821bb83c
	if (ctx.cr6.eq) goto loc_821BB83C;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x821bb870
	if (ctx.cr6.eq) goto loc_821BB870;
	// bl 0x821b0d38
	ctx.lr = 0x821BB830;
	sub_821B0D38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821bb878
	if (ctx.cr0.eq) goto loc_821BB878;
	// b 0x821bb874
	goto loc_821BB874;
loc_821BB83C:
	// bl 0x821d56d0
	ctx.lr = 0x821BB840;
	sub_821D56D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821bb85c
	if (ctx.cr0.eq) goto loc_821BB85C;
	// bl 0x821d56d0
	ctx.lr = 0x821BB84C;
	sub_821D56D0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x821bb85c
	if (ctx.cr6.eq) goto loc_821BB85C;
	// li r24,0
	r24.s64 = 0;
	// li r29,0
	r29.s64 = 0;
loc_821BB85C:
	// bl 0x82136518
	ctx.lr = 0x821BB860;
	sub_82136518(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821bb878
	if (ctx.cr0.eq) goto loc_821BB878;
	// li r29,0
	r29.s64 = 0;
	// b 0x821bb878
	goto loc_821BB878;
loc_821BB870:
	// li r29,0
	r29.s64 = 0;
loc_821BB874:
	// li r24,0
	r24.s64 = 0;
loc_821BB878:
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r8,2548(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 2548);
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r11.u32);
	// stw r9,508(r31)
	REX_STORE_U32(r31.u32 + 508, ctx.r9.u32);
	// bne cr6,0x821bb8cc
	if (!ctx.cr6.eq) goto loc_821BB8CC;
loc_821BB8AC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_821BB8B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BB8B8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822d4ec4
	return;
loc_821BB8CC:
	// lis r30,-32168
	r30.s64 = -2108162048;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x821bb8f8
	if (!ctx.cr6.eq) goto loc_821BB8F8;
	// lwz r11,-9816(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -9816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bb8f8
	if (ctx.cr6.eq) goto loc_821BB8F8;
	// bl 0x82115f98
	ctx.lr = 0x821BB8E8;
	sub_82115F98(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821b1868
	ctx.lr = 0x821BB8F0;
	sub_821B1868(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-9816(r30)
	REX_STORE_U32(r30.u32 + -9816, ctx.r11.u32);
loc_821BB8F8:
	// bl 0x821da008
	ctx.lr = 0x821BB8FC;
	sub_821DA008(ctx, base);
	// bl 0x821afce8
	ctx.lr = 0x821BB900;
	sub_821AFCE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821bb8ac
	if (!ctx.cr0.eq) goto loc_821BB8AC;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r28,r11,-7072
	r28.s64 = ctx.r11.s64 + -7072;
	// lwz r11,116(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bb930
	if (ctx.cr6.eq) goto loc_821BB930;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821c2f08
	ctx.lr = 0x821BB928;
	sub_821C2F08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821bb97c
	if (ctx.cr0.eq) goto loc_821BB97C;
loc_821BB930:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3812
	ctx.r11.u64 = ctx.r11.u64 | 3812;
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bb95c
	if (ctx.cr6.eq) goto loc_821BB95C;
	// addis r11,r28,1
	ctx.r11.s64 = r28.s64 + 65536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c2f08
	ctx.lr = 0x821BB954;
	sub_821C2F08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821bb97c
	if (ctx.cr0.eq) goto loc_821BB97C;
loc_821BB95C:
	// lwz r11,116(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bb99c
	if (!ctx.cr6.eq) goto loc_821BB99C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3812
	ctx.r11.u64 = ctx.r11.u64 | 3812;
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bb99c
	if (!ctx.cr6.eq) goto loc_821BB99C;
loc_821BB97C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x821b1708
	ctx.lr = 0x821BB98C;
	sub_821B1708(ctx, base);
	// addis r11,r28,1
	ctx.r11.s64 = r28.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821b1708
	ctx.lr = 0x821BB998;
	sub_821B1708(ctx, base);
	// b 0x821bb8b4
	goto loc_821BB8B4;
loc_821BB99C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x821bb9f0
	if (ctx.cr6.eq) goto loc_821BB9F0;
	// lwz r11,116(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bb9c4
	if (ctx.cr6.eq) goto loc_821BB9C4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821c9e88
	ctx.lr = 0x821BB9C4;
	sub_821C9E88(ctx, base);
loc_821BB9C4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3812
	ctx.r11.u64 = ctx.r11.u64 | 3812;
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bb9f0
	if (ctx.cr6.eq) goto loc_821BB9F0;
	// addis r11,r28,1
	ctx.r11.s64 = r28.s64 + 65536;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c9e88
	ctx.lr = 0x821BB9F0;
	sub_821C9E88(ctx, base);
loc_821BB9F0:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r25,-32170
	r25.s64 = -2108293120;
	// lfs f29,28452(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28452);
	f29.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f31,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	f31.f64 = double(temp.f32);
	// addi r23,r10,320
	r23.s64 = ctx.r10.s64 + 320;
	// lfs f30,2024(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2024);
	f30.f64 = double(temp.f32);
	// bne cr6,0x821bbab8
	if (!ctx.cr6.eq) goto loc_821BBAB8;
	// lwz r11,-9816(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -9816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bba58
	if (ctx.cr6.eq) goto loc_821BBA58;
	// bl 0x82115f98
	ctx.lr = 0x821BBA30;
	sub_82115F98(ctx, base);
	// li r4,60
	ctx.r4.s64 = 60;
	// li r3,2
	ctx.r3.s64 = 2;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821afa50
	ctx.lr = 0x821BBA48;
	sub_821AFA50(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821b1868
	ctx.lr = 0x821BBA50;
	sub_821B1868(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-9816(r30)
	REX_STORE_U32(r30.u32 + -9816, ctx.r11.u32);
loc_821BBA58:
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,13128
	ctx.r9.s64 = ctx.r10.s64 + 13128;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// li r4,400
	ctx.r4.s64 = 400;
	// addi r8,r8,-7176
	ctx.r8.s64 = ctx.r8.s64 + -7176;
	// stb r11,1824(r9)
	REX_STORE_U8(ctx.r9.u32 + 1824, ctx.r11.u8);
	// stb r10,1813(r9)
	REX_STORE_U8(ctx.r9.u32 + 1813, ctx.r10.u8);
	// lwz r3,28(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// bl 0x821ec2e0
	ctx.lr = 0x821BBA84;
	sub_821EC2E0(ctx, base);
	// bl 0x821b1c98
	ctx.lr = 0x821BBA88;
	sub_821B1C98(ctx, base);
	// bl 0x8211e6c0
	ctx.lr = 0x821BBA8C;
	sub_8211E6C0(ctx, base);
	// lwz r4,4(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 4);
	// lwz r3,29428(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 29428);
	// bl 0x8211f470
	ctx.lr = 0x821BBA98;
	sub_8211F470(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f29.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfs f1,16308(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16308);
	ctx.f1.f64 = double(temp.f32);
	// lwz r30,29428(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 29428);
	// bl 0x82204ae0
	ctx.lr = 0x821BBAB0;
	sub_82204AE0(ctx, base);
	// stfs f1,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 84, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_821BBAB8:
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bbb78
	if (ctx.cr0.eq) goto loc_821BBB78;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821bbb58
	if (ctx.cr6.eq) goto loc_821BBB58;
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// beq cr6,0x821bbb20
	if (ctx.cr6.eq) goto loc_821BBB20;
	// cmpwi cr6,r11,78
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 78, ctx.xer);
	// bne cr6,0x821bbd5c
	if (!ctx.cr6.eq) goto loc_821BBD5C;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x821bbd5c
	if (ctx.cr6.eq) goto loc_821BBD5C;
	// lwz r11,116(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bbaf8
	if (ctx.cr6.eq) goto loc_821BBAF8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8218ed80
	ctx.lr = 0x821BBAF8;
	sub_8218ED80(ctx, base);
loc_821BBAF8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3812
	ctx.r11.u64 = ctx.r11.u64 | 3812;
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bbd5c
	if (ctx.cr6.eq) goto loc_821BBD5C;
	// addis r11,r28,1
	ctx.r11.s64 = r28.s64 + 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x8218ed80
	ctx.lr = 0x821BBB1C;
	sub_8218ED80(ctx, base);
	// b 0x821bbd5c
	goto loc_821BBD5C;
loc_821BBB20:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x821bbd5c
	if (ctx.cr6.eq) goto loc_821BBD5C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x821bbd5c
	if (ctx.cr6.eq) goto loc_821BBD5C;
	// lbz r11,18(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 18);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821bbb48
	if (ctx.cr0.eq) goto loc_821BBB48;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x821bbb4c
	goto loc_821BBB4C;
loc_821BBB48:
	// lwz r3,216(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 216);
loc_821BBB4C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8212c2d8
	ctx.lr = 0x821BBB54;
	sub_8212C2D8(ctx, base);
	// b 0x821bbd5c
	goto loc_821BBD5C;
loc_821BBB58:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x821bbd5c
	if (ctx.cr6.eq) goto loc_821BBD5C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x821bbd5c
	if (ctx.cr6.eq) goto loc_821BBD5C;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8212bd08
	ctx.lr = 0x821BBB74;
	sub_8212BD08(ctx, base);
	// b 0x821bbd5c
	goto loc_821BBD5C;
loc_821BBB78:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x820f1090
	ctx.lr = 0x821BBB90;
	sub_820F1090(ctx, base);
	// lis r30,-32170
	r30.s64 = -2108293120;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r29,r30,-28232
	r29.s64 = r30.s64 + -28232;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// lfs f2,-8492(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8492);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820f3460
	ctx.lr = 0x821BBBB8;
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
	ctx.lr = 0x821BBBD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820f2e70
	ctx.lr = 0x821BBBE4;
	sub_820F2E70(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f2,10180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10180);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BBC08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822006f8
	ctx.lr = 0x821BBC14;
	sub_822006F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200700
	ctx.lr = 0x821BBC20;
	sub_82200700(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200708
	ctx.lr = 0x821BBC2C;
	sub_82200708(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,16336(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16336);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200818
	ctx.lr = 0x821BBC3C;
	sub_82200818(ctx, base);
	// li r4,60
	ctx.r4.s64 = 60;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// li r3,2
	ctx.r3.s64 = 2;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821afa50
	ctx.lr = 0x821BBC54;
	sub_821AFA50(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821e0098
	ctx.lr = 0x821BBC5C;
	sub_821E0098(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r28
	r30.u64 = r28.u64;
	// li r29,0
	r29.s64 = 0;
	// lis r26,-32168
	r26.s64 = -2108162048;
	// addi r27,r11,9964
	r27.s64 = ctx.r11.s64 + 9964;
loc_821BBC70:
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bbd40
	if (ctx.cr6.eq) goto loc_821BBD40;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c9e88
	ctx.lr = 0x821BBC90;
	sub_821C9E88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b1708
	ctx.lr = 0x821BBC98;
	sub_821B1708(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821be318
	ctx.lr = 0x821BBCAC;
	sub_821BE318(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821be318
	ctx.lr = 0x821BBCC0;
	sub_821BE318(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821cd298
	ctx.lr = 0x821BBCC8;
	sub_821CD298(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8212bf38
	ctx.lr = 0x821BBCD8;
	sub_8212BF38(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-9580(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + -9580);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821af9d8
	ctx.lr = 0x821BBCEC;
	sub_821AF9D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821be7c8
	ctx.lr = 0x821BBCF8;
	sub_821BE7C8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c1760
	ctx.lr = 0x821BBD1C;
	sub_821C1760(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c1760
	ctx.lr = 0x821BBD40;
	sub_821C1760(ctx, base);
loc_821BBD40:
	// addis r11,r28,2
	ctx.r11.s64 = r28.s64 + 131072;
	// addis r30,r30,1
	r30.s64 = r30.s64 + 65536;
	// addi r11,r11,7392
	ctx.r11.s64 = ctx.r11.s64 + 7392;
	// addi r30,r30,3696
	r30.s64 = r30.s64 + 3696;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821bbc70
	if (ctx.cr6.lt) goto loc_821BBC70;
loc_821BBD5C:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bb8b4
	if (!ctx.cr6.eq) goto loc_821BB8B4;
	// bl 0x821e0c10
	ctx.lr = 0x821BBD6C;
	sub_821E0C10(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bge cr6,0x821bbd80
	if (!ctx.cr6.lt) goto loc_821BBD80;
	// bl 0x821e0c10
	ctx.lr = 0x821BBD78;
	sub_821E0C10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821bb8b4
	if (!ctx.cr0.eq) goto loc_821BB8B4;
loc_821BBD80:
	// bl 0x821d17e8
	ctx.lr = 0x821BBD84;
	sub_821D17E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f29.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfs f1,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// lwz r30,29428(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 29428);
	// bl 0x82204ae0
	ctx.lr = 0x821BBD9C;
	sub_82204AE0(ctx, base);
	// stfs f1,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 84, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lha r30,28(r31)
	r30.s64 = int16_t(REX_LOAD_U16(r31.u32 + 28));
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821c9e88
	ctx.lr = 0x821BBDB8;
	sub_821C9E88(ctx, base);
	// addis r11,r28,1
	ctx.r11.s64 = r28.s64 + 65536;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c9e88
	ctx.lr = 0x821BBDD0;
	sub_821C9E88(ctx, base);
	// bl 0x8229a710
	ctx.lr = 0x821BBDD4;
	sub_8229A710(ctx, base);
	// bl 0x8212e308
	ctx.lr = 0x821BBDD8;
	sub_8212E308(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x821bbe3c
	if (ctx.cr6.eq) goto loc_821BBE3C;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// beq cr6,0x821bbe3c
	if (ctx.cr6.eq) goto loc_821BBE3C;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r9.u32);
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// stw r11,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r11.u32);
	// bl 0x821159c8
	ctx.lr = 0x821BBE0C;
	sub_821159C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821bbe2c
	if (!ctx.cr0.eq) goto loc_821BBE2C;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// lfs f1,16788(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16788);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,828(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 828);
	// bl 0x821eb660
	ctx.lr = 0x821BBE2C;
	sub_821EB660(ctx, base);
loc_821BBE2C:
	// lwz r11,516(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 516);
	// sth r11,32(r31)
	REX_STORE_U16(r31.u32 + 32, ctx.r11.u16);
	// bl 0x821b9e40
	ctx.lr = 0x821BBE38;
	sub_821B9E40(ctx, base);
	// b 0x821bbf34
	goto loc_821BBF34;
loc_821BBE3C:
	// lha r11,30(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 30));
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x821bbed0
	if (ctx.cr6.eq) goto loc_821BBED0;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x821bbeac
	if (ctx.cr6.eq) goto loc_821BBEAC;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x821bbe9c
	if (ctx.cr6.eq) goto loc_821BBE9C;
	// bl 0x821d8198
	ctx.lr = 0x821BBE5C;
	sub_821D8198(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// stw r9,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r9.u32);
	// stw r11,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r11.u32);
	// bne 0x821bbe88
	if (!ctx.cr0.eq) goto loc_821BBE88;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// b 0x821bbf20
	goto loc_821BBF20;
loc_821BBE88:
	// li r10,10
	ctx.r10.s64 = 10;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// bl 0x821d7d78
	ctx.lr = 0x821BBE98;
	sub_821D7D78(ctx, base);
	// b 0x821bbf34
	goto loc_821BBF34;
loc_821BBE9C:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// li r10,23
	ctx.r10.s64 = 23;
	// b 0x821bbeb8
	goto loc_821BBEB8;
loc_821BBEAC:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// li r10,22
	ctx.r10.s64 = 22;
loc_821BBEB8:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// stw r9,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r9.u32);
	// stw r11,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r11.u32);
	// b 0x821bbf34
	goto loc_821BBF34;
loc_821BBED0:
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r9.u32);
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// stw r11,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r11.u32);
	// bl 0x821159c8
	ctx.lr = 0x821BBEF4;
	sub_821159C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821bbf14
	if (!ctx.cr0.eq) goto loc_821BBF14;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// lfs f1,16788(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16788);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,828(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 828);
	// bl 0x821eb660
	ctx.lr = 0x821BBF14;
	sub_821EB660(ctx, base);
loc_821BBF14:
	// lwz r11,516(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 516);
	// sth r11,32(r31)
	REX_STORE_U16(r31.u32 + 32, ctx.r11.u16);
	// bl 0x821b9e40
	ctx.lr = 0x821BBF20;
	sub_821B9E40(ctx, base);
loc_821BBF20:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8212e800
	ctx.lr = 0x821BBF30;
	sub_8212E800(ctx, base);
	// bl 0x821dfe08
	ctx.lr = 0x821BBF34;
	sub_821DFE08(ctx, base);
loc_821BBF34:
	// lhz r11,30(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 30);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bne cr6,0x821bbfe0
	if (!ctx.cr6.eq) goto loc_821BBFE0;
	// lbz r11,2968(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2968);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821bbfe0
	if (!ctx.cr0.eq) goto loc_821BBFE0;
	// lis r30,-32168
	r30.s64 = -2108162048;
	// lwz r3,-9804(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -9804);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bbf78
	if (ctx.cr6.eq) goto loc_821BBF78;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BBF70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-9804(r30)
	REX_STORE_U32(r30.u32 + -9804, ctx.r11.u32);
loc_821BBF78:
	// lis r30,-32168
	r30.s64 = -2108162048;
	// lwz r11,-9800(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -9800);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bbfc0
	if (ctx.cr6.eq) goto loc_821BBFC0;
	// lwz r10,-8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821bbfb4
	if (ctx.cr6.eq) goto loc_821BBFB4;
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
	ctx.lr = 0x821BBFB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821bbfb8
	goto loc_821BBFB8;
loc_821BBFB4:
	// bl 0x822c80a8
	ctx.lr = 0x821BBFB8;
	sub_822C80A8(ctx, base);
loc_821BBFB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-9800(r30)
	REX_STORE_U32(r30.u32 + -9800, ctx.r11.u32);
loc_821BBFC0:
	// bl 0x821b3d58
	ctx.lr = 0x821BBFC4;
	sub_821B3D58(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// sth r10,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r10.u16);
	// sth r11,424(r31)
	REX_STORE_U16(r31.u32 + 424, ctx.r11.u16);
	// b 0x821bb8b4
	goto loc_821BB8B4;
loc_821BBFE0:
	// lis r27,-32168
	r27.s64 = -2108162048;
	// lwz r11,-9800(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -9800);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bc028
	if (ctx.cr6.eq) goto loc_821BC028;
	// lwz r10,-8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821bc01c
	if (ctx.cr6.eq) goto loc_821BC01C;
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
	ctx.lr = 0x821BC018;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821bc020
	goto loc_821BC020;
loc_821BC01C:
	// bl 0x822c80a8
	ctx.lr = 0x821BC020;
	sub_822C80A8(ctx, base);
loc_821BC020:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-9800(r27)
	REX_STORE_U32(r27.u32 + -9800, ctx.r11.u32);
loc_821BC028:
	// li r3,2184
	ctx.r3.s64 = 2184;
	// bl 0x822c80d0
	ctx.lr = 0x821BC030;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bc068
	if (ctx.cr0.eq) goto loc_821BC068;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r28,r3,8
	r28.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r30,3
	r30.s64 = 3;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_821BC04C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821821a8
	ctx.lr = 0x821BC054;
	sub_821821A8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,544
	r29.s64 = r29.s64 + 544;
	// bge 0x821bc04c
	if (!ctx.cr0.lt) goto loc_821BC04C;
	// stw r28,-9800(r27)
	REX_STORE_U32(r27.u32 + -9800, r28.u32);
	// b 0x821bc070
	goto loc_821BC070;
loc_821BC068:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-9800(r27)
	REX_STORE_U32(r27.u32 + -9800, ctx.r11.u32);
loc_821BC070:
	// li r10,-1
	ctx.r10.s64 = -1;
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 4);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r10.u16);
	// sth r11,424(r31)
	REX_STORE_U16(r31.u32 + 424, ctx.r11.u16);
	// bl 0x8212b388
	ctx.lr = 0x821BC090;
	sub_8212B388(ctx, base);
	// b 0x821bb8b4
	goto loc_821BB8B4;
loc_821BC094:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821bc0bc
	if (!ctx.cr6.eq) goto loc_821BC0BC;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-7072
	ctx.r9.s64 = ctx.r11.s64 + -7072;
	// ori r8,r10,20928
	ctx.r8.u64 = ctx.r10.u64 | 20928;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,17232(r9)
	REX_STORE_U32(ctx.r9.u32 + 17232, ctx.r11.u32);
	// stwx r10,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
loc_821BC0BC:
	// lhz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 144);
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x821bc104
	if (ctx.cr6.eq) goto loc_821BC104;
	// lhz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821bc104
	if (!ctx.cr0.eq) goto loc_821BC104;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lwz r11,1092(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1092);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bc104
	if (ctx.cr0.eq) goto loc_821BC104;
	// lhz r11,430(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 430);
	// li r10,0
	ctx.r10.s64 = 0;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,430(r31)
	REX_STORE_U16(r31.u32 + 430, ctx.r11.u16);
	// b 0x821bc10c
	goto loc_821BC10C;
loc_821BC104:
	// lhz r11,430(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 430);
	// lwz r10,-28244(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -28244);
loc_821BC10C:
	// extsh. r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,-28244(r9)
	REX_STORE_U32(ctx.r9.u32 + -28244, ctx.r11.u32);
	// bne 0x821bb8b8
	if (!ctx.cr0.eq) goto loc_821BB8B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-28244(r9)
	REX_STORE_U32(ctx.r9.u32 + -28244, ctx.r11.u32);
	// b 0x821bb8b8
	goto loc_821BB8B8;
}

DEFINE_REX_FUNC(sub_821DD7A0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x821DD7C8;
	sub_821D6210(ctx, base);
	// li r4,30
	ctx.r4.s64 = 30;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x821d45b0
	ctx.lr = 0x821DD7D4;
	sub_821D45B0(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// stw r31,-5716(r11)
	REX_STORE_U32(ctx.r11.u32 + -5716, r31.u32);
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

DEFINE_REX_FUNC(sub_821DF100) {
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r9,140
	ctx.r9.s64 = 140;
	// lwz r31,-32480(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821df134
	if (!ctx.cr6.eq) goto loc_821DF134;
	// li r9,220
	ctx.r9.s64 = 220;
loc_821DF134:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// lfs f31,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lfs f30,15632(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15632);
	f30.f64 = double(temp.f32);
	// bge cr6,0x821df180
	if (!ctx.cr6.lt) goto loc_821DF180;
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
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
	// lfs f0,-30104(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820e0028
	ctx.lr = 0x821DF178;
	sub_820E0028(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f30.f64));
	// b 0x821df1f8
	goto loc_821DF1F8;
loc_821DF180:
	// addi r10,r9,9
	ctx.r10.s64 = ctx.r9.s64 + 9;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821df194
	if (!ctx.cr6.lt) goto loc_821DF194;
	// stfs f31,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// b 0x821df208
	goto loc_821DF208;
loc_821DF194:
	// bne cr6,0x821df1b4
	if (!ctx.cr6.eq) goto loc_821DF1B4;
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,92(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x821df208
	if (!ctx.cr6.eq) goto loc_821DF208;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// b 0x821df208
	goto loc_821DF208;
loc_821DF1B4:
	// addi r10,r9,20
	ctx.r10.s64 = ctx.r9.s64 + 20;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821df200
	if (!ctx.cr6.lt) goto loc_821DF200;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,16600(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16600);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820e0028
	ctx.lr = 0x821DF1EC;
	sub_820E0028(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-6852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6852);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_821DF1F8:
	// stfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// b 0x821df208
	goto loc_821DF208;
loc_821DF200:
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,40(r31)
	REX_STORE_U16(r31.u32 + 40, ctx.r11.u16);
loc_821DF208:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821df298
	if (ctx.cr6.eq) goto loc_821DF298;
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x821df2a4
	if (!ctx.cr6.eq) goto loc_821DF2A4;
	// lfs f0,92(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x821df2a4
	if (ctx.cr6.gt) goto loc_821DF2A4;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,146
	ctx.r3.u64 = ctx.r3.u64 | 146;
	// lwz r4,344(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821DF244;
	sub_820E68B8(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lwz r11,1852(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1852);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821df288
	if (ctx.cr0.eq) goto loc_821DF288;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f30,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// addi r5,r10,9936
	ctx.r5.s64 = ctx.r10.s64 + 9936;
	// lfs f2,15252(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15252);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x821DF288;
	sub_821EAF80(ctx, base);
loc_821DF288:
	// bl 0x821aff50
	ctx.lr = 0x821DF28C;
	sub_821AFF50(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821df2a4
	if (ctx.cr0.eq) goto loc_821DF2A4;
loc_821DF298:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
loc_821DF2A4:
	// lfs f2,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lfs f1,92(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821dec08
	ctx.lr = 0x821DF2B4;
	sub_821DEC08(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821df2d0
	if (ctx.cr6.eq) goto loc_821DF2D0;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
loc_821DF2D0:
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

DEFINE_REX_FUNC(sub_821E6E70) {
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
	ctx.lr = 0x821E6E78;
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f29.u64);
	// stfd f30,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// stw r4,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r4.u32);
	// li r27,0
	r27.s64 = 0;
	// addi r11,r11,13776
	ctx.r11.s64 = ctx.r11.s64 + 13776;
	// sth r27,16(r3)
	REX_STORE_U16(ctx.r3.u32 + 16, r27.u16);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r10,-8304
	ctx.r10.s64 = ctx.r10.s64 + -8304;
	// addi r5,r11,29368
	ctx.r5.s64 = ctx.r11.s64 + 29368;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,324(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 324);
	// bl 0x821af9d8
	ctx.lr = 0x821E6EC4;
	sub_821AF9D8(ctx, base);
	// bl 0x820e4bb0
	ctx.lr = 0x821E6EC8;
	sub_820E4BB0(ctx, base);
	// lis r29,-32166
	r29.s64 = -2108030976;
	// stw r3,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r3.u32);
	// lwz r30,6368(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 6368);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x821e6ef4
	if (ctx.cr6.eq) goto loc_821E6EF4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e48c0
	ctx.lr = 0x821E6EE4;
	sub_820E48C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821E6EEC;
	sub_822C80A8(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// stw r27,6368(r29)
	REX_STORE_U32(r29.u32 + 6368, r27.u32);
loc_821E6EF4:
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 240);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,16412
	ctx.r6.s64 = ctx.r10.s64 + 16412;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,6368(r29)
	REX_STORE_U32(r29.u32 + 6368, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821366d8
	ctx.lr = 0x821E6F20;
	sub_821366D8(ctx, base);
	// stw r3,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e7194
	if (ctx.cr0.eq) goto loc_821E7194;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,240(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 240);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r27,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r27.u32);
	// li r8,781
	ctx.r8.s64 = 781;
	// stb r27,104(r3)
	REX_STORE_U8(ctx.r3.u32 + 104, r27.u8);
	// li r7,2
	ctx.r7.s64 = 2;
	// stb r11,105(r3)
	REX_STORE_U8(ctx.r3.u32 + 105, ctx.r11.u8);
	// sth r8,16(r3)
	REX_STORE_U16(ctx.r3.u32 + 16, ctx.r8.u16);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f29,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f29.f64 = double(temp.f32);
	// stb r7,90(r3)
	REX_STORE_U8(ctx.r3.u32 + 90, ctx.r7.u8);
	// stw r9,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r9.u32);
	// stfs f29,92(r3)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stb r11,106(r3)
	REX_STORE_U8(ctx.r3.u32 + 106, ctx.r11.u8);
	// addi r6,r8,16400
	ctx.r6.s64 = ctx.r8.s64 + 16400;
	// li r9,0
	ctx.r9.s64 = 0;
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
	ctx.lr = 0x821E6F88;
	sub_821366D8(ctx, base);
	// stw r3,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e7194
	if (ctx.cr0.eq) goto loc_821E7194;
	// lwz r4,240(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 240);
	// bl 0x821e4ed0
	ctx.lr = 0x821E6F9C;
	sub_821E4ED0(ctx, base);
	// addi r26,r31,248
	r26.s64 = r31.s64 + 248;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// addi r28,r11,16392
	r28.s64 = ctx.r11.s64 + 16392;
loc_821E6FB0:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r9,0
	ctx.r9.s64 = 0;
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
	ctx.lr = 0x821E6FD0;
	sub_821366D8(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e7194
	if (ctx.cr0.eq) goto loc_821E7194;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,240(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 240);
	// bl 0x821e5f28
	ctx.lr = 0x821E6FE8;
	sub_821E5F28(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// blt cr6,0x821e6fb0
	if (ctx.cr6.lt) goto loc_821E6FB0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r27
	r30.u64 = r27.u64;
	// addi r29,r31,324
	r29.s64 = r31.s64 + 324;
	// addi r28,r11,16384
	r28.s64 = ctx.r11.s64 + 16384;
loc_821E7008:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821366d8
	ctx.lr = 0x821E7028;
	sub_821366D8(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e7194
	if (ctx.cr0.eq) goto loc_821E7194;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,240(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 240);
	// bl 0x821e4a48
	ctx.lr = 0x821E7040;
	sub_821E4A48(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// blt cr6,0x821e7008
	if (ctx.cr6.lt) goto loc_821E7008;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,16376
	ctx.r6.s64 = ctx.r11.s64 + 16376;
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
	ctx.lr = 0x821E7074;
	sub_821366D8(ctx, base);
	// stw r3,332(r31)
	REX_STORE_U32(r31.u32 + 332, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e7194
	if (ctx.cr0.eq) goto loc_821E7194;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r6,240(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 240);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,13428(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 13428);
	f31.f64 = double(temp.f32);
	// lfs f30,28900(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28900);
	f30.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821e5360
	ctx.lr = 0x821E70A0;
	sub_821E5360(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,31920
	ctx.r11.s64 = ctx.r11.s64 + 31920;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f12,44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// std r27,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r27.u64);
	// lfs f11,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r27,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, r27.u64);
	// lfs f13,26932(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 26932);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,29244(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 29244);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,15632(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 15632);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fadds f5,f0,f13
	ctx.f5.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f0,f9
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// lfs f0,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f13,f8
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fadds f3,f0,f30
	ctx.f3.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fadds f4,f13,f31
	ctx.f4.f64 = double(float(ctx.f13.f64 + f31.f64));
	// bl 0x821e69c8
	ctx.lr = 0x821E7120;
	sub_821E69C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821e3680
	ctx.lr = 0x821E7134;
	sub_821E3680(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821e6c10
	ctx.lr = 0x821E7140;
	sub_821E6C10(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e6c10
	ctx.lr = 0x821E7150;
	sub_821E6C10(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e5d80
	ctx.lr = 0x821E7160;
	sub_821E5D80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e5d80
	ctx.lr = 0x821E7170;
	sub_821E5D80(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// lwz r3,84(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x821e3858
	ctx.lr = 0x821E7184;
	sub_821E3858(ctx, base);
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// lwz r3,84(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x821e3858
	ctx.lr = 0x821E7194;
	sub_821E3858(ctx, base);
loc_821E7194:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

DEFINE_REX_FUNC(sub_821F27F8) {
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
	ctx.lr = 0x821F2800;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f2868
	if (ctx.cr0.eq) goto loc_821F2868;
	// lwz r10,-16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -16);
	// addi r29,r3,-16
	r29.s64 = ctx.r3.s64 + -16;
	// mulli r11,r10,432
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(432));
	// addic. r30,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	r30.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// blt 0x821f2850
	if (ctx.cr0.lt) goto loc_821F2850;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,18352
	r28.s64 = ctx.r11.s64 + 18352;
loc_821F2834:
	// stwu r28,-432(r31)
	ea = -432 + r31.u32;
	REX_STORE_U32(ea, r28.u32);
	r31.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a44a0
	ctx.lr = 0x821F2840;
	sub_822A44A0(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x822a3f98
	ctx.lr = 0x821F2848;
	sub_822A3F98(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x821f2834
	if (!ctx.cr0.lt) goto loc_821F2834;
loc_821F2850:
	// clrlwi. r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f2860
	if (ctx.cr0.eq) goto loc_821F2860;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821F2860;
	sub_822C80A8(ctx, base);
loc_821F2860:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x821f2898
	goto loc_821F2898;
loc_821F2868:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,18352
	ctx.r11.s64 = ctx.r11.s64 + 18352;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a44a0
	ctx.lr = 0x821F287C;
	sub_822A44A0(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x822a3f98
	ctx.lr = 0x821F2884;
	sub_822A3F98(ctx, base);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f2894
	if (ctx.cr0.eq) goto loc_821F2894;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821F2894;
	sub_822C80A8(ctx, base);
loc_821F2894:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_821F2898:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821F7770) {
	REX_FUNC_PROLOGUE();
	// b 0x82206008
	sub_82206008(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F7808) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r10,-32480(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// addi r11,r10,80
	ctx.r11.s64 = ctx.r10.s64 + 80;
	// lwz r9,120(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 120);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x821f7828
	if (!ctx.cr6.eq) goto loc_821F7828;
	// sth r7,40(r10)
	REX_STORE_U16(ctx.r10.u32 + 40, ctx.r7.u16);
loc_821F7828:
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821f7858
	if (!ctx.cr6.eq) goto loc_821F7858;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
loc_821F7858:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f787c
	if (ctx.cr6.eq) goto loc_821F787C;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_821F787C:
	// li r9,0
	ctx.r9.s64 = 0;
	// std r9,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r9.u64);
	// stw r9,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// sth r7,40(r10)
	REX_STORE_U16(ctx.r10.u32 + 40, ctx.r7.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F9678) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r7,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x821f9290
	ctx.lr = 0x821F96A8;
	sub_821F9290(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F9D70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,132
	ctx.r9.s64 = ctx.r11.s64 + 132;
	// stb r10,10(r3)
	REX_STORE_U8(ctx.r3.u32 + 10, ctx.r10.u8);
	// lfs f0,84(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwa r10,-12(r1)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -12));
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f13,84(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f13,104(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwa r10,-12(r1)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -12));
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f0,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwa r10,-12(r1)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -12));
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f0,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f0,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lwz r10,132(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// stw r10,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
	// lwz r10,136(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// stw r10,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r10.u32);
	// lwz r10,140(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// stw r10,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r10.u32);
	// lwz r10,144(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// stw r10,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, ctx.r10.u32);
	// lwz r10,196(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 196);
	// stw r10,196(r3)
	REX_STORE_U32(ctx.r3.u32 + 196, ctx.r10.u32);
	// lwz r10,200(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// stw r10,200(r3)
	REX_STORE_U32(ctx.r3.u32 + 200, ctx.r10.u32);
	// lwz r10,204(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// stw r10,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r10.u32);
	// lwz r11,208(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// stw r11,208(r3)
	REX_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FF840) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x821f0ea8
	sub_821F0EA8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822006F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200720) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822007A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,228(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200818) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822008B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822009C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200A50) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,380(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 380);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822016F8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82201720
	if (ctx.cr6.eq) goto loc_82201720;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82201720
	if (ctx.cr6.eq) goto loc_82201720;
	// bl 0x822010b0
	ctx.lr = 0x82201720;
	sub_822010B0(ctx, base);
loc_82201720:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822002f0
	ctx.lr = 0x8220172C;
	sub_822002F0(ctx, base);
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

DEFINE_REX_FUNC(sub_82203110) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,15152
	ctx.r10.s64 = ctx.r10.s64 + 15152;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// lbz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 96);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82203558) {
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
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lhz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 24);
	// sth r11,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r11.u16);
	// lfs f1,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d4c58
	ctx.lr = 0x822035AC;
	sub_822D4C58(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,196(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r9,204(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lfs f0,21344(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lha r11,86(r1)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 86));
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lha r11,26(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 26));
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822061E0) {
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
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822062cc
	if (ctx.cr6.lt) goto loc_822062CC;
	// bne cr6,0x8220638c
	if (!ctx.cr6.eq) goto loc_8220638C;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220638c
	if (ctx.cr6.eq) goto loc_8220638C;
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,132(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r3,136(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// bne cr6,0x82206234
	if (!ctx.cr6.eq) goto loc_82206234;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,2047
	ctx.r11.s64 = ctx.r11.s64 + 2047;
	// rlwinm r4,r11,0,0,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF800;
	// b 0x82206238
	goto loc_82206238;
loc_82206234:
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
loc_82206238:
	// bl 0x82206080
	ctx.lr = 0x8220623C;
	sub_82206080(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822062b8
	if (!ctx.cr6.eq) goto loc_822062B8;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r10,124(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 124);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r10,132(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 132);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r10,2047
	ctx.r9.s64 = ctx.r10.s64 + 2047;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,0,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF800;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x822062b8
	if (!ctx.cr6.lt) goto loc_822062B8;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822062B8:
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,36(r31)
	REX_STORE_U8(r31.u32 + 36, ctx.r11.u8);
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// b 0x8220638c
	goto loc_8220638C;
loc_822062CC:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220638c
	if (ctx.cr6.eq) goto loc_8220638C;
	// lwz r4,128(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822062f0
	if (!ctx.cr6.eq) goto loc_822062F0;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// b 0x82206300
	goto loc_82206300;
loc_822062F0:
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x822d4fa0
	ctx.lr = 0x822062F8;
	sub_822D4FA0(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// li r4,32
	ctx.r4.s64 = 32;
loc_82206300:
	// bl 0x82206080
	ctx.lr = 0x82206304;
	sub_82206080(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lis r10,27502
	ctx.r10.s64 = 1802371072;
	// ori r10,r10,27759
	ctx.r10.u64 = ctx.r10.u64 | 27759;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8220638c
	if (!ctx.cr6.eq) goto loc_8220638C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r11.u32);
	// bne cr6,0x82206378
	if (!ctx.cr6.eq) goto loc_82206378;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,116(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 116);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r11,2047
	ctx.r10.s64 = ctx.r11.s64 + 2047;
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r10,r10,0,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF800;
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r9.u32);
	// subfc r10,r8,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r8.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r11.u32);
	// b 0x82206380
	goto loc_82206380;
loc_82206378:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
loc_82206380:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822060d0
	ctx.lr = 0x8220638C;
	sub_822060D0(ctx, base);
loc_8220638C:
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

DEFINE_REX_FUNC(sub_822101C0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwimi r4,r11,0,0,28
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8) | (ctx.r4.u64 & 0xFFFFFFFF00000007);
	// stw r4,10568(r3)
	REX_STORE_U32(ctx.r3.u32 + 10568, ctx.r4.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822104F8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12280(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12280);
	// rlwinm r3,r11,11,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822106B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,10500(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10500);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2028(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2028);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210958) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,4,25,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0x70) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r11,10548(r3)
	REX_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210BA8) {
	REX_FUNC_PROLOGUE();
	// stb r4,10499(r3)
	REX_STORE_U8(ctx.r3.u32 + 10499, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210E38) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwimi r11,r4,15,16,16
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 15) & 0x8000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r11,10568(r3)
	REX_STORE_U32(ctx.r3.u32 + 10568, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211258) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r11,0,16,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
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

DEFINE_REX_FUNC(sub_822117D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwimi r11,r4,4,27,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0x10) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFEF);
	// stw r11,10556(r3)
	REX_STORE_U32(ctx.r3.u32 + 10556, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211EA8) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r9,r10,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82211ec8
	if (!ctx.cr0.eq) goto loc_82211EC8;
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82211f04
	if (ctx.cr0.eq) goto loc_82211F04;
loc_82211EC8:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,27432
	ctx.r10.s64 = ctx.r10.s64 + 27432;
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// li r6,1
	ctx.r6.s64 = 1;
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rldicr r6,r6,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// srd r8,r6,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// rlwimi r9,r10,25,4,6
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0xE000000) | (ctx.r9.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
loc_82211F04:
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,10864(r11)
	REX_STORE_U8(ctx.r11.u32 + 10864, ctx.r5.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82214938) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82214940;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r29,16384
	r29.s64 = 1073741824;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214978
	if (ctx.cr6.eq) goto loc_82214978;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r9,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r9,3
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r29,r10
	ctx.r10.u64 = ctx.r10.u64 - r29.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82214978:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm r4,r11,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x82213e40
	ctx.lr = 0x8221498C;
	sub_82213E40(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x822149a8
	if (!ctx.cr0.eq) goto loc_822149A8;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r31,17136(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 17136);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x82214a20
	goto loc_82214A20;
loc_822149A8:
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
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
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822149f4
	if (ctx.cr6.eq) goto loc_822149F4;
	// rlwinm r10,r31,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r31,3
	ctx.r9.u64 = r31.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r29,r10
	ctx.r10.u64 = ctx.r10.u64 - r29.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822149f8
	goto loc_822149F8;
loc_822149F4:
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
loc_822149F8:
	// rlwinm r10,r31,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 12) & 0xFFF;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// clrlwi r9,r31,3
	ctx.r9.u64 = r31.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r3,r29,r10
	ctx.r3.u64 = ctx.r10.u64 - r29.u64;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x8221c548
	ctx.lr = 0x82214A20;
	sub_8221C548(ctx, base);
loc_82214A20:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r3,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8221A278) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8221A280;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221a2a0
	if (ctx.cr6.eq) goto loc_8221A2A0;
	// bl 0x82213cf8
	ctx.lr = 0x8221A2A0;
	sub_82213CF8(ctx, base);
loc_8221A2A0:
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r5,480
	ctx.r5.s64 = 480;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8221A2B4;
	sub_822D4FA0(ctx, base);
	// addi r4,r31,480
	ctx.r4.s64 = r31.s64 + 480;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221c548
	ctx.lr = 0x8221A2C4;
	sub_8221C548(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8221a2d8
	if (ctx.cr6.eq) goto loc_8221A2D8;
	// lis r11,10922
	ctx.r11.s64 = 715784192;
	// ori r11,r11,43690
	ctx.r11.u64 = ctx.r11.u64 | 43690;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_8221A2D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8221AF28) {
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
	ctx.lr = 0x8221AF30;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x824d419c
	ctx.lr = 0x8221AF3C;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8221af50
	if (!ctx.cr6.eq) goto loc_8221AF50;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1496(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1496);
	// b 0x8221af58
	goto loc_8221AF58;
loc_8221AF50:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1500(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1500);
loc_8221AF58:
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r26,r31,17120
	r26.s64 = r31.s64 + 17120;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824d447c
	ctx.lr = 0x8221AF68;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r10,16972(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16972);
	// lwz r11,21964(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21964);
	// rlwinm r29,r30,24,28,31
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 24) & 0xF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r27,r30,24
	r27.u64 = r30.u32 & 0xFF;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r10,16972(r31)
	REX_STORE_U32(r31.u32 + 16972, ctx.r10.u32);
	// rlwinm r30,r30,0,0,19
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// bne cr6,0x8221af98
	if (!ctx.cr6.eq) goto loc_8221AF98;
	// li r28,60
	r28.s64 = 60;
loc_8221AF98:
	// mftb r11
	ctx.r11.u64 = REX_QUERY_TIMEBASE();
	// lwz r10,16956(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16956);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r24,r10,r11
	r24.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bl 0x824d451c
	ctx.lr = 0x8221AFAC;
	__imp__KeQueryPerformanceFrequency(ctx, base);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// mulli r10,r24,100
	ctx.r10.s64 = static_cast<int64_t>(r24.u64 * static_cast<uint64_t>(100));
	// divwu r11,r11,r28
	ctx.r11.u64 = uint32_t(r28.u32 ? ctx.r11.u32 / r28.u32 : 0);
	// twllei r28,0
	if (r28.s32 == 0 || r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r10,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,100
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 100, ctx.xer);
	// ble cr6,0x8221afd4
	if (!ctx.cr6.gt) goto loc_8221AFD4;
	// li r7,100
	ctx.r7.s64 = 100;
loc_8221AFD4:
	// lwz r8,16960(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16960);
	// lwz r10,16952(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16952);
	// add r11,r8,r29
	ctx.r11.u64 = ctx.r8.u64 + r29.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8221b000
	if (ctx.cr6.gt) goto loc_8221B000;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8221b000
	if (ctx.cr6.eq) goto loc_8221B000;
	// cmplw cr6,r7,r27
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r27.u32, ctx.xer);
	// ble cr6,0x8221b000
	if (!ctx.cr6.gt) goto loc_8221B000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8221B000:
	// lwz r9,16944(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16944);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8221b040
	if (ctx.cr6.eq) goto loc_8221B040;
	// lwz r6,16972(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16972);
	// addic r5,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r5.s64 = r30.s64 + -1;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subfe r11,r5,r30
	temp.u8 = (~ctx.r5.u32 + r30.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x8221B03C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_8221B040:
	// lwz r10,16952(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16952);
	// stw r11,16960(r31)
	REX_STORE_U32(r31.u32 + 16960, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8221b084
	if (ctx.cr6.eq) goto loc_8221B084;
	// lwz r10,16972(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16972);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8221b084
	if (ctx.cr6.eq) goto loc_8221B084;
	// lwz r10,17112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 17112);
	// rlwinm r10,r10,3,25,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x78;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// addi r9,r10,16980
	ctx.r9.s64 = ctx.r10.s64 + 16980;
	// stw r11,16984(r10)
	REX_STORE_U32(ctx.r10.u32 + 16984, ctx.r11.u32);
	// stw r30,16980(r10)
	REX_STORE_U32(ctx.r10.u32 + 16980, r30.u32);
	// lwz r11,17112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 17112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,17112(r31)
	REX_STORE_U32(r31.u32 + 17112, ctx.r11.u32);
	// b 0x8221b0c0
	goto loc_8221B0C0;
loc_8221B084:
	// lwz r11,16976(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16976);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16976(r31)
	REX_STORE_U32(r31.u32 + 16976, ctx.r11.u32);
	// beq cr6,0x8221b0ac
	if (ctx.cr6.eq) goto loc_8221B0AC;
	// lis r11,32712
	ctx.r11.s64 = 2143813632;
	// stw r30,24848(r11)
	REX_MM_STORE_U32(ctx.r11.u32 + 24848, r30.u32);
	// eieio 
	// sync 
	// b 0x8221b0b8
	goto loc_8221B0B8;
loc_8221B0AC:
	// lwz r11,11028(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11028);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	REX_MM_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8221B0B8:
	// mftb r11
	ctx.r11.u64 = REX_QUERY_TIMEBASE();
	// stw r11,23788(r31)
	REX_STORE_U32(r31.u32 + 23788, ctx.r11.u32);
loc_8221B0C0:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824d446c
	ctx.lr = 0x8221B0CC;
	__imp__KfReleaseSpinLock(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82223010) {
	REX_FUNC_PROLOGUE();
	// b 0x82222798
	sub_82222798(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82223270) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822232a8
	if (ctx.cr0.eq) goto loc_822232A8;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r4,r11,4,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// bl 0x82221f48
	ctx.lr = 0x822232A4;
	sub_82221F48(ctx, base);
	// b 0x822232ec
	goto loc_822232EC;
loc_822232A8:
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r11,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r11,29,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lhz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 24);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_822232EC:
	// li r11,4
	ctx.r11.s64 = 4;
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

DEFINE_REX_FUNC(sub_82225368) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82225390
	if (ctx.cr6.eq) goto loc_82225390;
	// bl 0x822152c0
	ctx.lr = 0x82225390;
	sub_822152C0(ctx, base);
loc_82225390:
	// lwz r3,22048(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 22048);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822253ac
	if (ctx.cr6.eq) goto loc_822253AC;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x823cd250
	ctx.lr = 0x822253A8;
	sub_823CD250(ctx, base);
	// stw r30,22048(r31)
	REX_STORE_U32(r31.u32 + 22048, r30.u32);
loc_822253AC:
	// lwz r3,22044(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 22044);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822253c8
	if (ctx.cr6.eq) goto loc_822253C8;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// bl 0x823cd250
	ctx.lr = 0x822253C0;
	sub_823CD250(ctx, base);
	// stw r30,22044(r31)
	REX_STORE_U32(r31.u32 + 22044, r30.u32);
	// stw r30,22052(r31)
	REX_STORE_U32(r31.u32 + 22052, r30.u32);
loc_822253C8:
	// stw r30,22056(r31)
	REX_STORE_U32(r31.u32 + 22056, r30.u32);
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

DEFINE_REX_FUNC(sub_822276D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822276D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x82227210
	ctx.lr = 0x822276F4;
	sub_82227210(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82227710
	if (ctx.cr0.eq) goto loc_82227710;
	// mullw r5,r30,r29
	ctx.r5.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82227708;
	sub_822D4FA0(ctx, base);
	// lwz r11,13844(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13844);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
loc_82227710:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82228B58) {
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
	ctx.lr = 0x82228B60;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// rlwinm r31,r4,0,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// subf r10,r31,r4
	ctx.r10.u64 = ctx.r4.u64 - r31.u64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// rlwinm r28,r10,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// subf r11,r9,r30
	ctx.r11.u64 = r30.u64 - ctx.r9.u64;
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// subf r27,r28,r11
	r27.u64 = ctx.r11.u64 - r28.u64;
	// bl 0x82215248
	ctx.lr = 0x82228BA4;
	sub_82215248(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82228c28
	if (ctx.cr0.eq) goto loc_82228C28;
	// addi r11,r31,4096
	ctx.r11.s64 = r31.s64 + 4096;
	// addi r10,r30,-1
	ctx.r10.s64 = r30.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// beq cr6,0x82228be8
	if (ctx.cr6.eq) goto loc_82228BE8;
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x822d5870
	ctx.lr = 0x82228BE4;
	sub_822D5870(ctx, base);
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
loc_82228BE8:
	// rlwinm r30,r29,4,0,27
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x822d4fa0
	ctx.lr = 0x82228BFC;
	sub_822D4FA0(ctx, base);
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82228c20
	if (ctx.cr6.eq) goto loc_82228C20;
	// rlwinm r30,r27,2,0,29
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x822d5870
	ctx.lr = 0x82228C1C;
	sub_822D5870(ctx, base);
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
loc_82228C20:
	// stw r31,48(r25)
	REX_STORE_U32(r25.u32 + 48, r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82228C28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8222D758) {
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
	ctx.lr = 0x8222D760;
	// stwu r1,-2464(r1)
	ea = -2464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8222bc18
	ctx.lr = 0x8222D77C;
	sub_8222BC18(ctx, base);
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,21960(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21960);
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lwz r8,21952(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 21952);
	// lwz r6,136(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r5,140(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// subf r9,r9,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r9.u64;
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// beq cr6,0x8222d7dc
	if (ctx.cr6.eq) goto loc_8222D7DC;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8222d7c0
	if (ctx.cr6.lt) goto loc_8222D7C0;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8222d7c0
	if (ctx.cr6.gt) goto loc_8222D7C0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8222D7C0:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8222d7dc
	if (ctx.cr6.lt) goto loc_8222D7DC;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8222d7dc
	if (ctx.cr6.gt) goto loc_8222D7DC;
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
loc_8222D7DC:
	// lwz r8,152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r6,21956(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 21956);
	// rlwimi r30,r29,16,0,15
	r30.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF0000) | (r30.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r3,168(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// rlwinm r28,r10,16,0,15
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// rlwimi r5,r9,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r10,r1,172
	ctx.r10.s64 = ctx.r1.s64 + 172;
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// rlwimi r4,r7,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// subf r6,r8,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r8.u64;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// clrlwi r29,r8,16
	r29.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// rlwinm r8,r6,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// addi r11,r1,992
	ctx.r11.s64 = ctx.r1.s64 + 992;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// or r7,r29,r28
	ctx.r7.u64 = r29.u64 | r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r27,r30
	r27.u64 = r30.u64;
	// bl 0x8222d1c8
	ctx.lr = 0x8222D858;
	sub_8222D1C8(ctx, base);
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// li r4,800
	ctx.r4.s64 = 800;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x824d43cc
	ctx.lr = 0x8222D868;
	__imp__RtlFillMemoryUlong(ctx, base);
	// li r4,220
	ctx.r4.s64 = 220;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215248
	ctx.lr = 0x8222D874;
	sub_82215248(ctx, base);
	// lwz r9,132(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,200
	ctx.r7.s64 = 200;
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// lwz r8,140(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// subf r6,r11,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// subf r4,r9,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r7,r1,992
	ctx.r7.s64 = ctx.r1.s64 + 992;
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// rlwimi r4,r6,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// addi r6,r1,172
	ctx.r6.s64 = ctx.r1.s64 + 172;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// rlwimi r25,r11,16,0,15
	r25.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (r25.u64 & 0xFFFFFFFF0000FFFF);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// or r6,r29,r28
	ctx.r6.u64 = r29.u64 | r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824d468c
	ctx.lr = 0x8222D8DC;
	__imp__VdInitializeScalerCommandBuffer(ctx, base);
	// rlwinm r29,r3,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x822d4fa0
	ctx.lr = 0x8222D8F0;
	sub_822D4FA0(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = r29.u64 + r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x82215008
	ctx.lr = 0x8222D900;
	sub_82215008(ctx, base);
	// addi r1,r1,2464
	ctx.r1.s64 = ctx.r1.s64 + 2464;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82234FC0) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82236630
	ctx.lr = 0x82234FDC;
	sub_82236630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82235298) {
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
	ctx.lr = 0x822352A0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,16
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16, ctx.xer);
	// bge cr6,0x8223541c
	if (!ctx.cr6.lt) goto loc_8223541C;
	// li r27,1
	r27.s64 = 1;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// bl 0x82236630
	ctx.lr = 0x822352C8;
	sub_82236630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82235424
	if (ctx.cr0.lt) goto loc_82235424;
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8223541c
	if (ctx.cr6.lt) goto loc_8223541C;
	// beq cr6,0x822352ec
	if (ctx.cr6.eq) goto loc_822352EC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8223541c
	if (!ctx.cr6.lt) goto loc_8223541C;
loc_822352EC:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82236600
	ctx.lr = 0x822352F8;
	sub_82236600(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82235424
	if (ctx.cr0.lt) goto loc_82235424;
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82235328
	if (ctx.cr0.eq) goto loc_82235328;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,83
	ctx.r4.s64 = ctx.r1.s64 + 83;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82236630
	ctx.lr = 0x82235320;
	sub_82236630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82235424
	if (ctx.cr0.lt) goto loc_82235424;
loc_82235328:
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82235348
	if (ctx.cr0.eq) goto loc_82235348;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82236600
	ctx.lr = 0x82235340;
	sub_82236600(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82235424
	if (ctx.cr0.lt) goto loc_82235424;
loc_82235348:
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// li r28,2
	r28.s64 = 2;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82235394
	if (ctx.cr0.eq) goto loc_82235394;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82236630
	ctx.lr = 0x8223536C;
	sub_82236630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82235424
	if (ctx.cr0.lt) goto loc_82235424;
	// lbz r11,86(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 86);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82235394
	if (ctx.cr0.eq) goto loc_82235394;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82236600
	ctx.lr = 0x8223538C;
	sub_82236600(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82235424
	if (ctx.cr0.lt) goto loc_82235424;
loc_82235394:
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x822353c0
	if (!ctx.cr6.eq) goto loc_822353C0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82235078
	ctx.lr = 0x822353B4;
	sub_82235078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82235424
	if (ctx.cr0.lt) goto loc_82235424;
	// b 0x822353cc
	goto loc_822353CC;
loc_822353C0:
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
loc_822353CC:
	// li r29,0
	r29.s64 = 0;
loc_822353D0:
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x822354b4
	if (!ctx.cr6.eq) goto loc_822354B4;
	// lbz r11,89(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 89);
	// clrlwi r10,r29,16
	ctx.r10.u64 = r29.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223542c
	if (ctx.cr6.lt) goto loc_8223542C;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82236630
	ctx.lr = 0x82235404;
	sub_82236630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82235424
	if (ctx.cr0.lt) goto loc_82235424;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
loc_82235418:
	// beq cr6,0x82235508
	if (ctx.cr6.eq) goto loc_82235508;
loc_8223541C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82235424:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed0
	return;
loc_8223542C:
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// bl 0x822365a8
	ctx.lr = 0x82235434;
	sub_822365A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82235424
	if (ctx.cr0.lt) goto loc_82235424;
	// lbz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82235470
	if (ctx.cr0.eq) goto loc_82235470;
loc_8223544C:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82236600
	ctx.lr = 0x82235458;
	sub_82236600(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82235424
	if (ctx.cr0.lt) goto loc_82235424;
	// lbz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223544c
	if (ctx.cr6.lt) goto loc_8223544C;
loc_82235470:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82236600
	ctx.lr = 0x8223547C;
	sub_82236600(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82235424
	if (ctx.cr0.lt) goto loc_82235424;
	// lhz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82236680
	ctx.lr = 0x8223549C;
	sub_82236680(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82235424
	if (ctx.cr0.lt) goto loc_82235424;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// b 0x82235508
	goto loc_82235508;
loc_822354B4:
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x82236630
	ctx.lr = 0x822354C8;
	sub_82236630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82235424
	if (ctx.cr0.lt) goto loc_82235424;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r11,r10,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82235538
	if (ctx.cr6.lt) goto loc_82235538;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82235418
	if (!ctx.cr6.lt) goto loc_82235418;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822361f0
	ctx.lr = 0x822354F4;
	sub_822361F0(ctx, base);
	// addi r4,r26,1
	ctx.r4.s64 = r26.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82235298
	ctx.lr = 0x82235500;
	sub_82235298(ctx, base);
loc_82235500:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82235424
	if (ctx.cr0.lt) goto loc_82235424;
loc_82235508:
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82235524
	if (!ctx.cr6.eq) goto loc_82235524;
	// clrlwi r11,r29,16
	ctx.r11.u64 = r29.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r29,r11,16
	r29.u64 = ctx.r11.u32 & 0xFFFF;
loc_82235524:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x822353d0
	if (!ctx.cr6.eq) goto loc_822353D0;
	// b 0x82235424
	goto loc_82235424;
loc_82235538:
	// rlwinm. r11,r10,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223555c
	if (ctx.cr0.eq) goto loc_8223555C;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,83
	ctx.r4.s64 = ctx.r1.s64 + 83;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82236630
	ctx.lr = 0x82235554;
	sub_82236630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82235424
	if (ctx.cr0.lt) goto loc_82235424;
loc_8223555C:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223557c
	if (ctx.cr0.eq) goto loc_8223557C;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82236600
	ctx.lr = 0x82235574;
	sub_82236600(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82235424
	if (ctx.cr0.lt) goto loc_82235424;
loc_8223557C:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822355c4
	if (ctx.cr0.eq) goto loc_822355C4;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82236630
	ctx.lr = 0x8223559C;
	sub_82236630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82235424
	if (ctx.cr0.lt) goto loc_82235424;
	// lbz r11,86(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 86);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822355c4
	if (ctx.cr0.eq) goto loc_822355C4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82236600
	ctx.lr = 0x822355BC;
	sub_82236600(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82235424
	if (ctx.cr0.lt) goto loc_82235424;
loc_822355C4:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82235508
	if (ctx.cr0.eq) goto loc_82235508;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82234ff0
	ctx.lr = 0x822355DC;
	sub_82234FF0(ctx, base);
	// b 0x82235500
	goto loc_82235500;
}

DEFINE_REX_FUNC(sub_822457E8) {
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
	ctx.lr = 0x822457F0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r31,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82245818;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82245864
	if (ctx.cr6.eq) goto loc_82245864;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82245864
	if (ctx.cr6.eq) goto loc_82245864;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82245864
	if (ctx.cr6.eq) goto loc_82245864;
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
loc_8224583C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822d7938
	ctx.lr = 0x82245848;
	sub_822D7938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82245874
	if (ctx.cr0.eq) goto loc_82245874;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8224583c
	if (ctx.cr6.lt) goto loc_8224583C;
loc_82245864:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,7
	ctx.r3.u64 = ctx.r3.u64 | 7;
loc_8224586C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
loc_82245874:
	// mulli r11,r31,48
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(48));
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// b 0x8224586c
	goto loc_8224586C;
}

DEFINE_REX_FUNC(sub_822467A0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822467b4
	if (!ctx.cr6.eq) goto loc_822467B4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_822467B4:
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// beq cr6,0x82246818
	if (ctx.cr6.eq) goto loc_82246818;
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
	// bge cr6,0x82246818
	if (!ctx.cr6.lt) goto loc_82246818;
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
	// bne cr6,0x82246818
	if (!ctx.cr6.eq) goto loc_82246818;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r9,r3,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82246818
	if (!ctx.cr6.eq) goto loc_82246818;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82246818:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82246830
	if (!ctx.cr6.eq) goto loc_82246830;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// blr 
	return;
loc_82246830:
	// lwz r11,24(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r8,32(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
loc_82246838:
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82246854
	if (ctx.cr6.lt) goto loc_82246854;
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8224686c
	if (ctx.cr6.lt) goto loc_8224686C;
loc_82246854:
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82246890
	if (ctx.cr6.eq) goto loc_82246890;
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r8,32(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// b 0x82246838
	goto loc_82246838;
loc_8224686C:
	// subf r9,r10,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r10.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// li r3,0
	ctx.r3.s64 = 0;
	// mulli r11,r9,48
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(48));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82246890:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,7
	ctx.r3.u64 = ctx.r3.u64 | 7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822486D8) {
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
	ctx.lr = 0x822486F0;
	sub_82246220(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8224871c
	if (ctx.cr0.lt) goto loc_8224871C;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82248710
	if (ctx.cr6.eq) goto loc_82248710;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8224871c
	goto loc_8224871C;
loc_82248710:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x8226ef40
	ctx.lr = 0x8224871C;
	sub_8226EF40(ctx, base);
loc_8224871C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822494D0) {
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
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82290510
	ctx.lr = 0x822494F4;
	sub_82290510(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stw r11,184(r30)
	REX_STORE_U32(r30.u32 + 184, ctx.r11.u32);
	// beq cr6,0x82249510
	if (ctx.cr6.eq) goto loc_82249510;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82249510:
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

DEFINE_REX_FUNC(sub_8224AC90) {
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
	ctx.lr = 0x8224ACB4;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224acf0
	if (ctx.cr0.eq) goto loc_8224ACF0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r9,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// b 0x8224acf4
	goto loc_8224ACF4;
loc_8224ACF0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8224ACF4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8224ad08
	if (!ctx.cr6.eq) goto loc_8224AD08;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8224ad14
	goto loc_8224AD14;
loc_8224AD08:
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_8224AD14:
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

DEFINE_REX_FUNC(sub_8224CD60) {
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r31,r11,26324
	r31.s64 = ctx.r11.s64 + 26324;
	// lwz r11,26344(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 26344);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8224cda8
	if (!ctx.cr0.eq) goto loc_8224CDA8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,26344(r10)
	REX_STORE_U32(ctx.r10.u32 + 26344, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8227ad18
	ctx.lr = 0x8224CD9C;
	sub_8227AD18(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15432
	ctx.r3.s64 = ctx.r11.s64 + 15432;
	// bl 0x822d5848
	ctx.lr = 0x8224CDA8;
	sub_822D5848(ctx, base);
loc_8224CDA8:
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

DEFINE_REX_FUNC(sub_8224E520) {
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
	// li r3,176
	ctx.r3.s64 = 176;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82255b48
	ctx.lr = 0x8224E544;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224e558
	if (ctx.cr0.eq) goto loc_8224E558;
	// bl 0x822493b8
	ctx.lr = 0x8224E550;
	sub_822493B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8224e55c
	goto loc_8224E55C;
loc_8224E558:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8224E55C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8224e570
	if (!ctx.cr6.eq) goto loc_8224E570;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8224e57c
	goto loc_8224E57C;
loc_8224E570:
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_8224E57C:
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

DEFINE_REX_FUNC(sub_82251550) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82251558;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82251574
	if (!ctx.cr6.eq) goto loc_82251574;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82251634
	goto loc_82251634;
loc_82251574:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224d830
	ctx.lr = 0x8225157C;
	sub_8224D830(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82251590
	if (!ctx.cr0.eq) goto loc_82251590;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// b 0x82251634
	goto loc_82251634;
loc_82251590:
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822515a8
	if (ctx.cr6.eq) goto loc_822515A8;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,36
	ctx.r3.u64 = ctx.r3.u64 | 36;
	// b 0x82251634
	goto loc_82251634;
loc_822515A8:
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822515d4
	if (ctx.cr6.eq) goto loc_822515D4;
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
loc_822515B8:
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
	// bne 0x822515b8
	if (!ctx.cr0.eq) goto loc_822515B8;
loc_822515D4:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r30,r11,23712
	r30.s64 = ctx.r11.s64 + 23712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d438c
	ctx.lr = 0x822515E4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r31,r11,24432
	r31.s64 = ctx.r11.s64 + 24432;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82246cb0
	ctx.lr = 0x822515F8;
	sub_82246CB0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82251608
	if (ctx.cr0.eq) goto loc_82251608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224b0b0
	ctx.lr = 0x82251608;
	sub_8224B0B0(ctx, base);
loc_82251608:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d437c
	ctx.lr = 0x82251610;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x82255b70
	ctx.lr = 0x82251618;
	sub_82255B70(ctx, base);
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// bl 0x82255b70
	ctx.lr = 0x82251620;
	sub_82255B70(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82255b70
	ctx.lr = 0x82251628;
	sub_82255B70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82255b70
	ctx.lr = 0x82251630;
	sub_82255B70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82251634:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82254670) {
	REX_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82254568
	sub_82254568(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82254868) {
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
	// addi r10,r10,-5444
	ctx.r10.s64 = ctx.r10.s64 + -5444;
	// std r31,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r31.u64);
	// addi r9,r9,-5632
	ctx.r9.s64 = ctx.r9.s64 + -5632;
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
	ctx.lr = 0x822548B0;
	sub_82246CA8(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,12968
	ctx.r11.s64 = ctx.r11.s64 + 12968;
	// addi r10,r10,-21528
	ctx.r10.s64 = ctx.r10.s64 + -21528;
	// addi r9,r9,27632
	ctx.r9.s64 = ctx.r9.s64 + 27632;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x8224fb50
	ctx.lr = 0x822548E0;
	sub_8224FB50(ctx, base);
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23608
	ctx.r4.s64 = ctx.r11.s64 + 23608;
	// bl 0x822512d8
	ctx.lr = 0x822548F8;
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

DEFINE_REX_FUNC(sub_822567B0) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r3,-6968(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -6968);
	// bl 0x824d49dc
	ctx.lr = 0x822567C8;
	__imp__KeTlsGetValue(ctx, base);
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

DEFINE_REX_FUNC(sub_82257220) {
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
	ctx.lr = 0x82257240;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82257254
	if (!ctx.cr0.eq) goto loc_82257254;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x8225725c
	goto loc_8225725C;
loc_82257254:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82260538
	ctx.lr = 0x8225725C;
	sub_82260538(ctx, base);
loc_8225725C:
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

DEFINE_REX_FUNC(sub_822582F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822582F8;
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
	// beq 0x82258350
	if (ctx.cr0.eq) goto loc_82258350;
	// lwz r10,-4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	r29.s64 = ctx.r3.s64 + -4;
	// mulli r11,r10,68
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(68));
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// blt 0x82258338
	if (ctx.cr0.lt) goto loc_82258338;
loc_82258324:
	// addi r30,r30,-68
	r30.s64 = r30.s64 + -68;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82278050
	ctx.lr = 0x82258330;
	sub_82278050(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x82258324
	if (!ctx.cr0.lt) goto loc_82258324;
loc_82258338:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82258348
	if (ctx.cr0.eq) goto loc_82258348;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82255b70
	ctx.lr = 0x82258348;
	sub_82255B70(ctx, base);
loc_82258348:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8225836c
	goto loc_8225836C;
loc_82258350:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82278050
	ctx.lr = 0x82258358;
	sub_82278050(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82258368
	if (ctx.cr0.eq) goto loc_82258368;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255b70
	ctx.lr = 0x82258368;
	sub_82255B70(ctx, base);
loc_82258368:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8225836C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8225BBE8) {
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
	ctx.lr = 0x8225BBF0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// bl 0x82259018
	ctx.lr = 0x8225BC04;
	sub_82259018(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r25,r11,29536
	r25.s64 = ctx.r11.s64 + 29536;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824d438c
	ctx.lr = 0x8225BC18;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8225bc60
	if (!ctx.cr6.eq) goto loc_8225BC60;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r31,r11,29652
	r31.s64 = ctx.r11.s64 + 29652;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255620
	ctx.lr = 0x8225BC34;
	sub_82255620(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225bd90
	if (ctx.cr0.eq) goto loc_8225BD90;
	// lwz r30,12(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8225bc58
	if (ctx.cr6.eq) goto loc_8225BC58;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227c510
	ctx.lr = 0x8225BC50;
	sub_8227C510(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255b70
	ctx.lr = 0x8225BC58;
	sub_82255B70(ctx, base);
loc_8225BC58:
	// stw r26,12(r31)
	REX_STORE_U32(r31.u32 + 12, r26.u32);
	// b 0x8225bd98
	goto loc_8225BD98;
loc_8225BC60:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r29,r11,29620
	r29.s64 = ctx.r11.s64 + 29620;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822555b8
	ctx.lr = 0x8225BC74;
	sub_822555B8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8225bd08
	if (!ctx.cr6.eq) goto loc_8225BD08;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8225bd98
	if (ctx.cr6.eq) goto loc_8225BD98;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82255b48
	ctx.lr = 0x8225BC8C;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225bcac
	if (ctx.cr0.eq) goto loc_8225BCAC;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// stw r28,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// stw r28,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// stw r28,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r28.u32);
	// b 0x8225bcb0
	goto loc_8225BCB0;
loc_8225BCAC:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8225BCB0:
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8225bd90
	if (ctx.cr6.eq) goto loc_8225BD90;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255620
	ctx.lr = 0x8225BCC8;
	sub_82255620(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225bcec
	if (ctx.cr0.eq) goto loc_8225BCEC;
	// stw r26,12(r30)
	REX_STORE_U32(r30.u32 + 12, r26.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x822558b0
	ctx.lr = 0x8225BCE4;
	sub_822558B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225bd98
	if (!ctx.cr0.eq) goto loc_8225BD98;
loc_8225BCEC:
	// lis r28,-32761
	r28.s64 = -2147024896;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
	// bl 0x8225a4e8
	ctx.lr = 0x8225BCFC;
	sub_8225A4E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255b70
	ctx.lr = 0x8225BD04;
	sub_82255B70(ctx, base);
	// b 0x8225bd98
	goto loc_8225BD98;
loc_8225BD08:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bne cr6,0x8225bd58
	if (!ctx.cr6.eq) goto loc_8225BD58;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8225bd34
	if (ctx.cr6.eq) goto loc_8225BD34;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8225a4e8
	ctx.lr = 0x8225BD2C;
	sub_8225A4E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255b70
	ctx.lr = 0x8225BD34;
	sub_82255B70(ctx, base);
loc_8225BD34:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x822555b8
	ctx.lr = 0x8225BD40;
	sub_822555B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8225bd98
	if (ctx.cr6.eq) goto loc_8225BD98;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82276d08
	ctx.lr = 0x8225BD54;
	sub_82276D08(ctx, base);
	// b 0x8225bd98
	goto loc_8225BD98;
loc_8225BD58:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255620
	ctx.lr = 0x8225BD64;
	sub_82255620(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225bd90
	if (ctx.cr0.eq) goto loc_8225BD90;
	// lwz r31,12(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8225bd88
	if (ctx.cr6.eq) goto loc_8225BD88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227c510
	ctx.lr = 0x8225BD80;
	sub_8227C510(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8225BD88;
	sub_82255B70(ctx, base);
loc_8225BD88:
	// stw r26,12(r30)
	REX_STORE_U32(r30.u32 + 12, r26.u32);
	// b 0x8225bd98
	goto loc_8225BD98;
loc_8225BD90:
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
loc_8225BD98:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824d437c
	ctx.lr = 0x8225BDA0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82264958) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x82264990
	if (!ctx.cr6.eq) goto loc_82264990;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82264990:
	// bl 0x8225e988
	ctx.lr = 0x82264994;
	sub_8225E988(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822649a4
	if (ctx.cr6.eq) goto loc_822649A4;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
loc_822649A4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822649b4
	if (ctx.cr6.eq) goto loc_822649B4;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
loc_822649B4:
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

DEFINE_REX_FUNC(sub_82265E68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82265E70;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// beq cr6,0x82265ecc
	if (ctx.cr6.eq) goto loc_82265ECC;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82257318
	ctx.lr = 0x82265EB4;
	sub_82257318(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x82265ecc
	if (!ctx.cr0.lt) goto loc_82265ECC;
	// lwz r3,164(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x822d7b58
	ctx.lr = 0x82265EC4;
	sub_822D7B58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82265fa8
	goto loc_82265FA8;
loc_82265ECC:
	// li r4,2033
	ctx.r4.s64 = 2033;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8225da70
	ctx.lr = 0x82265ED8;
	sub_8225DA70(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82265f0c
	if (ctx.cr6.eq) goto loc_82265F0C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82265f00
	if (ctx.cr0.eq) goto loc_82265F00;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8225e9f8
	ctx.lr = 0x82265F00;
	sub_8225E9F8(ctx, base);
loc_82265F00:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8224da00
	ctx.lr = 0x82265F0C;
	sub_8224DA00(ctx, base);
loc_82265F0C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,664
	ctx.r4.s64 = ctx.r10.s64 + 664;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x824d4a0c
	ctx.lr = 0x82265F24;
	__imp__swprintf(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82256ea0
	ctx.lr = 0x82265F3C;
	sub_82256EA0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82265f9c
	if (ctx.cr6.eq) goto loc_82265F9C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8225e9f8
	ctx.lr = 0x82265F50;
	sub_8225E9F8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82265f84
	if (ctx.cr6.eq) goto loc_82265F84;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82258638
	ctx.lr = 0x82265F60;
	sub_82258638(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82265f74
	if (ctx.cr0.eq) goto loc_82265F74;
	// bl 0x822560a0
	ctx.lr = 0x82265F6C;
	sub_822560A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82265f78
	goto loc_82265F78;
loc_82265F74:
	// li r4,255
	ctx.r4.s64 = 255;
loc_82265F78:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8225ae58
	ctx.lr = 0x82265F84;
	sub_8225AE58(ctx, base);
loc_82265F84:
	// li r4,2032
	ctx.r4.s64 = 2032;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8225da70
	ctx.lr = 0x82265F90;
	sub_8225DA70(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8224da00
	ctx.lr = 0x82265F9C;
	sub_8224DA00(ctx, base);
loc_82265F9C:
	// lwz r3,164(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x822d7b58
	ctx.lr = 0x82265FA4;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82265FA8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8226CA60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8226CA68;
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
	// bne cr6,0x8226cad0
	if (!ctx.cr6.eq) goto loc_8226CAD0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8226ca94
	if (!ctx.cr6.eq) goto loc_8226CA94;
	// li r30,1
	r30.s64 = 1;
	// b 0x8226caac
	goto loc_8226CAAC;
loc_8226CA94:
	// rlwinm. r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x8226cac0
	if (!ctx.cr0.gt) goto loc_8226CAC0;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8226cac0
	if (!ctx.cr6.lt) goto loc_8226CAC0;
loc_8226CAAC:
	// rlwinm r4,r30,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82255b88
	ctx.lr = 0x8226CAB8;
	sub_82255B88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8226cac8
	if (!ctx.cr0.eq) goto loc_8226CAC8;
loc_8226CAC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226cb04
	goto loc_8226CB04;
loc_8226CAC8:
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_8226CAD0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226caf4
	if (ctx.cr0.eq) goto loc_8226CAF4;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8226CAF4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_8226CB04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8226F308) {
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
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226f4c4
	if (ctx.cr6.eq) goto loc_8226F4C4;
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8226f4c4
	if (!ctx.cr6.eq) goto loc_8226F4C4;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8226f4c4
	if (!ctx.cr6.eq) goto loc_8226F4C4;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8225ee88
	ctx.lr = 0x8226F354;
	sub_8225EE88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8226f4c4
	if (ctx.cr0.eq) goto loc_8226F4C4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,16808(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16808);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,2388(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2388);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8226f384
	if (!ctx.cr6.gt) goto loc_8226F384;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8226f388
	if (ctx.cr6.lt) goto loc_8226F388;
loc_8226F384:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8226F388:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226f4b8
	if (!ctx.cr0.eq) goto loc_8226F4B8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8226f3f8
	if (!ctx.cr6.eq) goto loc_8226F3F8;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f12,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f12.f64 = double(temp.f32);
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// lfs f13,2024(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2024);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,168(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// fsubs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fsel f0,f0,f0,f12
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8226f3e4
	if (!ctx.cr6.gt) goto loc_8226F3E4;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8226f3e8
	if (ctx.cr6.lt) goto loc_8226F3E8;
loc_8226F3E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8226F3E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8226f488
	goto loc_8226F488;
loc_8226F3F8:
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8226f448
	if (!ctx.cr6.eq) goto loc_8226F448;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8226f47c
	if (ctx.cr6.lt) goto loc_8226F47C;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lfs f0,172(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// b 0x8226f47c
	goto loc_8226F47C;
loc_8226F448:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lfs f13,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f12,168(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// fsel f0,f13,f13,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
loc_8226F47C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225d3e0
	ctx.lr = 0x8226F484;
	sub_8225D3E0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
loc_8226F488:
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822650b0
	ctx.lr = 0x8226F498;
	sub_822650B0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822650b0
	ctx.lr = 0x8226F4AC;
	sub_822650B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226b6f8
	ctx.lr = 0x8226F4B4;
	sub_8226B6F8(ctx, base);
	// b 0x8226f4cc
	goto loc_8226F4CC;
loc_8226F4B8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,25
	ctx.r3.u64 = ctx.r3.u64 | 25;
	// b 0x8226f4cc
	goto loc_8226F4CC;
loc_8226F4C4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_8226F4CC:
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

DEFINE_REX_FUNC(sub_82278C50) {
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
	// bl 0x82255b48
	ctx.lr = 0x82278C74;
	sub_82255B48(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82278c8c
	if (!ctx.cr0.eq) goto loc_82278C8C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82278c94
	goto loc_82278C94;
loc_82278C8C:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82278C94:
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

DEFINE_REX_FUNC(sub_8227A808) {
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
	// li r4,2036
	ctx.r4.s64 = 2036;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8225da70
	ctx.lr = 0x8227A824;
	sub_8225DA70(ctx, base);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x822469c0
	ctx.lr = 0x8227A82C;
	sub_822469C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8224da00
	ctx.lr = 0x8227A834;
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

DEFINE_REX_FUNC(sub_8227AD18) {
	REX_FUNC_PROLOGUE();
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8227AE40) {
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
	ctx.lr = 0x8227AE60;
	sub_8227AD60(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
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

DEFINE_REX_FUNC(sub_8227BBB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8227BBB8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// addi r31,r3,-4
	r31.s64 = ctx.r3.s64 + -4;
	// stw r29,544(r3)
	REX_STORE_U32(ctx.r3.u32 + 544, r29.u32);
	// li r30,128
	r30.s64 = 128;
loc_8227BBCC:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227bbdc
	if (ctx.cr6.eq) goto loc_8227BBDC;
	// bl 0x82255b70
	ctx.lr = 0x8227BBDC;
	sub_82255B70(ctx, base);
loc_8227BBDC:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stwu r29,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, r29.u32);
	r31.u32 = ea;
	// bne 0x8227bbcc
	if (!ctx.cr0.eq) goto loc_8227BBCC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8227CB68) {
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
	// li r30,0
	r30.s64 = 0;
	// addi r31,r11,30172
	r31.s64 = ctx.r11.s64 + 30172;
	// lwz r11,30172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 30172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227cc0c
	if (!ctx.cr6.eq) goto loc_8227CC0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8242f1c8
	ctx.lr = 0x8227CBA4;
	sub_8242F1C8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8227cbe8
	if (ctx.cr0.lt) goto loc_8227CBE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227CBE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x8227cc0c
	if (!ctx.cr0.lt) goto loc_8227CC0C;
loc_8227CBE8:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227cc0c
	if (ctx.cr6.eq) goto loc_8227CC0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227CC04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8227CC0C:
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

DEFINE_REX_FUNC(sub_8227E800) {
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
	ctx.lr = 0x8227E828;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,30196(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 30196);
	// bl 0x8227e450
	ctx.lr = 0x8227E838;
	sub_8227E450(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8227e848
	if (ctx.cr0.eq) goto loc_8227E848;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_8227E848:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d437c
	ctx.lr = 0x8227E850;
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

DEFINE_REX_FUNC(sub_8227F690) {
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_8227F6A0:
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
	// bne 0x8227f6a0
	if (!ctx.cr0.eq) goto loc_8227F6A0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8227f6e8
	if (!ctx.cr6.eq) goto loc_8227F6E8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227f6e0
	if (ctx.cr6.eq) goto loc_8227F6E0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,1572
	ctx.r11.s64 = ctx.r11.s64 + 1572;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82255b70
	ctx.lr = 0x8227F6E0;
	sub_82255B70(ctx, base);
loc_8227F6E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8227f6ec
	goto loc_8227F6EC;
loc_8227F6E8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8227F6EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82281410) {
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
	ctx.lr = 0x82281418;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82281440
	if (ctx.cr6.eq) goto loc_82281440;
	// bl 0x82255450
	ctx.lr = 0x82281434;
	sub_82255450(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822552c0
	ctx.lr = 0x8228143C;
	sub_822552C0(ctx, base);
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
loc_82281440:
	// lbz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82281470
	if (ctx.cr0.eq) goto loc_82281470;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r3,30504(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 30504);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82281468;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,36(r31)
	REX_STORE_U32(r31.u32 + 36, r27.u32);
	// stb r27,40(r31)
	REX_STORE_U8(r31.u32 + 40, r27.u8);
loc_82281470:
	// lhz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 68);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r28,r27
	r28.u64 = r27.u64;
	// addi r26,r11,30560
	r26.s64 = ctx.r11.s64 + 30560;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82281548
	if (ctx.cr0.eq) goto loc_82281548;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8228148C:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82281534
	if (ctx.cr6.eq) goto loc_82281534;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822814e8
	if (ctx.cr6.eq) goto loc_822814E8;
	// lwz r11,400(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 400);
loc_822814B0:
	// lwz r29,20(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x822814d4
	if (!ctx.cr6.lt) goto loc_822814D4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r26
	REX_STORE_U32(ctx.r11.u32 + r26.u32, ctx.r3.u32);
	// lwz r11,400(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,400(r26)
	REX_STORE_U32(r26.u32 + 400, ctx.r11.u32);
	// b 0x822814dc
	goto loc_822814DC;
loc_822814D4:
	// bl 0x82255b70
	ctx.lr = 0x822814D8;
	sub_82255B70(ctx, base);
	// lwz r11,400(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 400);
loc_822814DC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x822814b0
	if (!ctx.cr6.eq) goto loc_822814B0;
loc_822814E8:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82281520
	if (ctx.cr6.eq) goto loc_82281520;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82281514;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
loc_82281520:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x82255b70
	ctx.lr = 0x8228152C;
	sub_82255B70(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// stwx r27,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r27.u32);
loc_82281534:
	// lhz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 68);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8228148c
	if (ctx.cr6.lt) goto loc_8228148C;
loc_82281548:
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// bl 0x82255b50
	ctx.lr = 0x82281550;
	sub_82255B50(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// bl 0x82255b70
	ctx.lr = 0x82281558;
	sub_82255B70(ctx, base);
	// stw r27,64(r31)
	REX_STORE_U32(r31.u32 + 64, r27.u32);
	// addi r29,r31,76
	r29.s64 = r31.s64 + 76;
	// sth r27,68(r31)
	REX_STORE_U16(r31.u32 + 68, r27.u16);
	// li r28,32
	r28.s64 = 32;
loc_82281568:
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8228158c
	if (ctx.cr6.eq) goto loc_8228158C;
loc_82281574:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r30,72(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// bl 0x8227ff40
	ctx.lr = 0x82281580;
	sub_8227FF40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82281574
	if (!ctx.cr6.eq) goto loc_82281574;
loc_8228158C:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x82281568
	if (!ctx.cr0.eq) goto loc_82281568;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822815c8
	if (ctx.cr6.eq) goto loc_822815C8;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_822815A8:
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
	// bne 0x822815a8
	if (!ctx.cr0.eq) goto loc_822815A8;
	// stw r27,28(r31)
	REX_STORE_U32(r31.u32 + 28, r27.u32);
loc_822815C8:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822815e8
	if (ctx.cr6.eq) goto loc_822815E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822815E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,60(r31)
	REX_STORE_U32(r31.u32 + 60, r27.u32);
loc_822815E8:
	// stb r27,20(r31)
	REX_STORE_U8(r31.u32 + 20, r27.u8);
	// stw r27,12(r31)
	REX_STORE_U32(r31.u32 + 12, r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82289520) {
	REX_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82289798) {
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
	// addi r11,r11,7948
	ctx.r11.s64 = ctx.r11.s64 + 7948;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82287b80
	ctx.lr = 0x822897C4;
	sub_82287B80(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,7232
	ctx.r11.s64 = ctx.r11.s64 + 7232;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x822897e0
	if (ctx.cr0.eq) goto loc_822897E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x822897E0;
	sub_82255B70(ctx, base);
loc_822897E0:
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

DEFINE_REX_FUNC(sub_8228B1D0) {
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
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8228b218
	if (ctx.cr0.eq) goto loc_8228B218;
loc_8228B1F8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822d8550
	ctx.lr = 0x8228B200;
	sub_822D8550(ctx, base);
	// lhzu r11,2(r31)
	ea = 2 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r31.u32 = ea;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mulli r9,r30,33
	ctx.r9.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(33));
	// mr. r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bne 0x8228b1f8
	if (!ctx.cr0.eq) goto loc_8228B1F8;
loc_8228B218:
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

DEFINE_REX_FUNC(sub_8228CA60) {
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
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8228caac
	if (ctx.cr0.eq) goto loc_8228CAAC;
loc_8228CA88:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x822d8550
	ctx.lr = 0x8228CA94;
	sub_822D8550(ctx, base);
	// lbzu r11,1(r31)
	ea = 1 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mulli r9,r30,33
	ctx.r9.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(33));
	// extsb. r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bne 0x8228ca88
	if (!ctx.cr0.eq) goto loc_8228CA88;
loc_8228CAAC:
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

DEFINE_REX_FUNC(sub_8228F988) {
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
	// addi r11,r11,9760
	ctx.r11.s64 = ctx.r11.s64 + 9760;
	// li r30,0
	r30.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228f9c4
	if (ctx.cr6.eq) goto loc_8228F9C4;
	// bl 0x82216cc8
	ctx.lr = 0x8228F9C0;
	sub_82216CC8(ctx, base);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
loc_8228F9C4:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228f9d8
	if (ctx.cr6.eq) goto loc_8228F9D8;
	// bl 0x82216cc8
	ctx.lr = 0x8228F9D4;
	sub_82216CC8(ctx, base);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
loc_8228F9D8:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8228fa0c
	if (ctx.cr6.eq) goto loc_8228FA0C;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,31424
	ctx.r3.s64 = ctx.r11.s64 + 31424;
	// bl 0x8228e9b8
	ctx.lr = 0x8228F9F8;
	sub_8228E9B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228fa08
	if (!ctx.cr0.eq) goto loc_8228FA08;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x82216cc8
	ctx.lr = 0x8228FA08;
	sub_82216CC8(ctx, base);
loc_8228FA08:
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
loc_8228FA0C:
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

DEFINE_REX_FUNC(sub_82291BE0) {
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
	ctx.lr = 0x82291BE8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82291c40
	if (ctx.cr6.eq) goto loc_82291C40;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82295758
	ctx.lr = 0x82291C20;
	sub_82295758(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82291c2c
	if (ctx.cr0.eq) goto loc_82291C2C;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82291C2C:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82291c40
	if (ctx.cr6.eq) goto loc_82291C40;
	// lwz r5,48(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 48);
	// b 0x82291c44
	goto loc_82291C44;
loc_82291C40:
	// lwz r5,44(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 44);
loc_82291C44:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82291818
	ctx.lr = 0x82291C54;
	sub_82291818(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82291c70
	if (ctx.cr6.eq) goto loc_82291C70;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82291c90
	goto loc_82291C90;
loc_82291C70:
	// lwa r11,80(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 80));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,16372(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16372);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82291C90:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82293BB0) {
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
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// stw r11,644(r1)
	REX_STORE_U32(ctx.r1.u32 + 644, ctx.r11.u32);
	// beq cr6,0x82293c60
	if (ctx.cr6.eq) goto loc_82293C60;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82293c60
	if (ctx.cr6.eq) goto loc_82293C60;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82293c60
	if (ctx.cr6.eq) goto loc_82293C60;
	// li r8,20
	ctx.r8.s64 = 20;
	// addi r7,r1,624
	ctx.r7.s64 = ctx.r1.s64 + 624;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x824d4a4c
	ctx.lr = 0x82293C04;
	__imp__XeCryptRotSumSha(ctx, base);
	// li r11,272
	ctx.r11.s64 = 272;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,57
	ctx.r3.s64 = 57;
	// bl 0x824d4a3c
	ctx.lr = 0x82293C1C;
	__imp__XeKeysGetKey(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82293c34
	if (!ctx.cr0.lt) goto loc_82293C34;
	// lwz r3,644(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 644);
	// bl 0x822d7b58
	ctx.lr = 0x82293C2C;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82293c6c
	goto loc_82293C6C;
loc_82293C34:
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82293C44;
	sub_822D4FA0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,13196
	ctx.r5.s64 = ctx.r11.s64 + 13196;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x824d4a2c
	ctx.lr = 0x82293C5C;
	__imp__XeCryptBnQwBeSigVerify(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82293C60:
	// lwz r3,644(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 644);
	// bl 0x822d7b58
	ctx.lr = 0x82293C68;
	sub_822D7B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82293C6C:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
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

DEFINE_REX_FUNC(sub_82297990) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stb r11,20(r3)
	REX_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stb r11,21(r3)
	REX_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82298268) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82295a78
	ctx.lr = 0x82298294;
	sub_82295A78(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8229A1C0) {
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
	ctx.lr = 0x8229A1C8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229a564
	if (ctx.cr6.eq) goto loc_8229A564;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229a564
	if (ctx.cr6.eq) goto loc_8229A564;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8229a564
	if (ctx.cr6.eq) goto loc_8229A564;
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
	// bgt cr6,0x8229a564
	if (ctx.cr6.gt) goto loc_8229A564;
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
loc_8229A240:
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// rlwinm r0,r7,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,14112
	ctx.r12.s64 = ctx.r12.s64 + 14112;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32214
	ctx.r12.s64 = -2111176704;
	// addi r12,r12,-23960
	ctx.r12.s64 = ctx.r12.s64 + -23960;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r7.u32) {
	case 0:
		goto loc_8229A268;
	case 1:
		goto loc_8229A2F0;
	case 2:
		goto loc_8229A580;
	case 3:
		goto loc_8229A5D0;
	case 4:
		goto loc_8229A628;
	case 5:
		goto loc_8229A67C;
	case 6:
		goto loc_8229A6DC;
	case 7:
		goto loc_8229A368;
	case 8:
		goto loc_8229A3E8;
	case 9:
		goto loc_8229A438;
	case 10:
		goto loc_8229A490;
	case 11:
		goto loc_8229A4E8;
	case 12:
		goto loc_8229A700;
	case 13:
		goto loc_8229A708;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8229A268:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229a570
	if (ctx.cr6.eq) goto loc_8229A570;
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
	// beq cr6,0x8229a2c4
	if (ctx.cr6.eq) goto loc_8229A2C4;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// stw r23,24(r31)
	REX_STORE_U32(r31.u32 + 24, r23.u32);
	// b 0x8229a54c
	goto loc_8229A54C;
loc_8229A2C4:
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
	// ble cr6,0x8229a2e8
	if (!ctx.cr6.gt) goto loc_8229A2E8;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// stw r24,24(r31)
	REX_STORE_U32(r31.u32 + 24, r24.u32);
	// b 0x8229a54c
	goto loc_8229A54C;
loc_8229A2E8:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8229A2F0:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8229a570
	if (ctx.cr6.eq) goto loc_8229A570;
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
	// beq 0x8229a354
	if (ctx.cr0.eq) goto loc_8229A354;
	// stw r28,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r28.u32);
	// stw r25,24(r31)
	REX_STORE_U32(r31.u32 + 24, r25.u32);
	// b 0x8229a54c
	goto loc_8229A54C;
loc_8229A354:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8229a578
	if (!ctx.cr0.eq) goto loc_8229A578;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8229a554
	goto loc_8229A554;
loc_8229A368:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8229ba58
	ctx.lr = 0x8229A37C;
	sub_8229BA58(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -3, ctx.xer);
	// bne cr6,0x8229a39c
	if (!ctx.cr6.eq) goto loc_8229A39C;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r22,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r22.u32);
	// b 0x8229a554
	goto loc_8229A554;
loc_8229A39C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8229a3a8
	if (!ctx.cr6.eq) goto loc_8229A3A8;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8229A3A8:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x8229a570
	if (!ctx.cr6.eq) goto loc_8229A570;
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
	ctx.lr = 0x8229A3C8;
	sub_824013A8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8229a3e0
	if (ctx.cr6.eq) goto loc_8229A3E0;
	// stw r21,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r21.u32);
	// b 0x8229a554
	goto loc_8229A554;
loc_8229A3E0:
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8229A3E8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229a570
	if (ctx.cr6.eq) goto loc_8229A570;
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
loc_8229A438:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229a570
	if (ctx.cr6.eq) goto loc_8229A570;
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
loc_8229A490:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229a570
	if (ctx.cr6.eq) goto loc_8229A570;
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
loc_8229A4E8:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8229a570
	if (ctx.cr6.eq) goto loc_8229A570;
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
	// beq cr6,0x8229a6fc
	if (ctx.cr6.eq) goto loc_8229A6FC;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// stw r26,24(r31)
	REX_STORE_U32(r31.u32 + 24, r26.u32);
loc_8229A54C:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
loc_8229A554:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,13
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 13, ctx.xer);
	// ble cr6,0x8229a240
	if (!ctx.cr6.gt) goto loc_8229A240;
loc_8229A564:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_8229A568:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
loc_8229A570:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8229a568
	goto loc_8229A568;
loc_8229A578:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8229A580:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229a570
	if (ctx.cr6.eq) goto loc_8229A570;
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
loc_8229A5D0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229a570
	if (ctx.cr6.eq) goto loc_8229A570;
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
loc_8229A628:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229a570
	if (ctx.cr6.eq) goto loc_8229A570;
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
loc_8229A67C:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8229a570
	if (ctx.cr6.eq) goto loc_8229A570;
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
	// b 0x8229a568
	goto loc_8229A568;
loc_8229A6DC:
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
	// b 0x8229a564
	goto loc_8229A564;
loc_8229A6FC:
	// stw r21,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r21.u32);
loc_8229A700:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8229a568
	goto loc_8229A568;
loc_8229A708:
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x8229a568
	goto loc_8229A568;
}

DEFINE_REX_FUNC(sub_822AE778) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822AE780;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,92
	ctx.r3.s64 = 92;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x822c80d0
	ctx.lr = 0x822AE79C;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ae7b4
	if (ctx.cr0.eq) goto loc_822AE7B4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822bdff8
	ctx.lr = 0x822AE7AC;
	sub_822BDFF8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x822ae7bc
	goto loc_822AE7BC;
loc_822AE7B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_822AE7BC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x822ad9c0
	ctx.lr = 0x822AE7C8;
	sub_822AD9C0(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822be038
	ctx.lr = 0x822AE7E0;
	sub_822BE038(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822B1338) {
	REX_FUNC_PROLOGUE();
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// beq 0x822b134c
	if (ctx.cr0.eq) goto loc_822B134C;
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// b 0x822b1350
	goto loc_822B1350;
loc_822B134C:
	// rlwinm r11,r11,0,15,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
loc_822B1350:
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B25E0) {
	REX_FUNC_PROLOGUE();
	// lbz r11,328(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 328);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822b263c
	if (ctx.cr0.eq) goto loc_822B263C;
	// lwz r11,332(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 332);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822b263c
	if (!ctx.cr6.gt) goto loc_822B263C;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,336(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 336);
loc_822B2608:
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,144(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 144);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x822b2630
	if (ctx.cr6.eq) goto loc_822B2630;
	// lwz r7,332(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 332);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822b2608
	if (ctx.cr6.lt) goto loc_822B2608;
	// b 0x822b263c
	goto loc_822B263C;
loc_822B2630:
	// mulli r11,r9,160
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(160));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_822B263C:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r10,312(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 312);
	// std r10,104(r11)
	REX_STORE_U64(ctx.r11.u32 + 104, ctx.r10.u64);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// ld r10,320(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 320);
	// std r10,112(r11)
	REX_STORE_U64(ctx.r11.u32 + 112, ctx.r10.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B5A40) {
	REX_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b5a80
	if (ctx.cr6.eq) goto loc_822B5A80;
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b5a80
	if (ctx.cr6.eq) goto loc_822B5A80;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822b5a80
	if (!ctx.cr6.lt) goto loc_822B5A80;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
loc_822B5A80:
	// lwz r11,200(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B7BC0) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e68
	ctx.lr = 0x822B7BC8;
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822d6450
	ctx.lr = 0x822B7BE8;
	sub_822D6450(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r23,0
	r23.s64 = 0;
	// li r24,1
	r24.s64 = 1;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// bne cr6,0x822b7c0c
	if (!ctx.cr6.eq) goto loc_822B7C0C;
	// stw r24,32(r30)
	REX_STORE_U32(r30.u32 + 32, r24.u32);
	// stb r24,224(r30)
	REX_STORE_U8(r30.u32 + 224, r24.u8);
	// b 0x822b7c10
	goto loc_822B7C10;
loc_822B7C0C:
	// stb r23,224(r30)
	REX_STORE_U8(r30.u32 + 224, r23.u8);
loc_822B7C10:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addi r26,r30,40
	r26.s64 = r30.s64 + 40;
	// lwz r10,112(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 112);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// lwz r4,176(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 176);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r27,r11,r31
	r27.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x822ad068
	ctx.lr = 0x822B7C34;
	sub_822AD068(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822b7c6c
	if (ctx.cr6.lt) goto loc_822B7C6C;
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822b7c5c
	goto loc_822B7C5C;
loc_822B7C4C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x822b7c64
	if (ctx.cr6.eq) goto loc_822B7C64;
	// lwz r4,12(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
loc_822B7C5C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822b7c4c
	if (!ctx.cr6.eq) goto loc_822B7C4C;
loc_822B7C64:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b75a8
	ctx.lr = 0x822B7C6C;
	sub_822B75A8(ctx, base);
loc_822B7C6C:
	// lwz r10,176(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x822b7ce0
	if (!ctx.cr6.gt) goto loc_822B7CE0;
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// mr r29,r23
	r29.u64 = r23.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// beq cr6,0x822b7ce0
	if (ctx.cr6.eq) goto loc_822B7CE0;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_822B7C90:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822b7ccc
	if (ctx.cr6.eq) goto loc_822B7CCC;
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822b7cbc
	goto loc_822B7CBC;
loc_822B7CAC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x822b7cc4
	if (ctx.cr6.eq) goto loc_822B7CC4;
	// lwz r4,12(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
loc_822B7CBC:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822b7cac
	if (!ctx.cr6.eq) goto loc_822B7CAC;
loc_822B7CC4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b75a8
	ctx.lr = 0x822B7CCC;
	sub_822B75A8(ctx, base);
loc_822B7CCC:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822b7c90
	if (ctx.cr6.lt) goto loc_822B7C90;
loc_822B7CE0:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// addi r3,r30,200
	ctx.r3.s64 = r30.s64 + 200;
	// lwz r4,104(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 104);
	// add r28,r11,r27
	r28.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x822ad068
	ctx.lr = 0x822B7CF4;
	sub_822AD068(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mr r29,r23
	r29.u64 = r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822b7d48
	if (!ctx.cr6.gt) goto loc_822B7D48;
loc_822B7D04:
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822b7d24
	goto loc_822B7D24;
loc_822B7D14:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x822b7d2c
	if (ctx.cr6.eq) goto loc_822B7D2C;
	// lwz r4,12(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
loc_822B7D24:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822b7d14
	if (!ctx.cr6.eq) goto loc_822B7D14;
loc_822B7D2C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b7858
	ctx.lr = 0x822B7D34;
	sub_822B7858(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822b7d04
	if (ctx.cr6.lt) goto loc_822B7D04;
loc_822B7D48:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822b7e38
	if (!ctx.cr6.gt) goto loc_822B7E38;
	// lwz r9,112(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 112);
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// add r29,r10,r27
	r29.u64 = ctx.r10.u64 + r27.u64;
	// lwz r10,32(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822b7e1c
	if (!ctx.cr6.eq) goto loc_822B7E1C;
	// li r6,9
	ctx.r6.s64 = 9;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822b8668
	ctx.lr = 0x822B7D84;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b7da4
	if (ctx.cr0.eq) goto loc_822B7DA4;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b3f20
	ctx.lr = 0x822B7DA0;
	sub_822B3F20(ctx, base);
	// b 0x822b7e38
	goto loc_822B7E38;
loc_822B7DA4:
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822b8668
	ctx.lr = 0x822B7DB8;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b7dd8
	if (ctx.cr0.eq) goto loc_822B7DD8;
	// lwz r3,112(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 112);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,36(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x822c4dc0
	ctx.lr = 0x822B7DD4;
	sub_822C4DC0(ctx, base);
	// b 0x822b7e38
	goto loc_822B7E38;
loc_822B7DD8:
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822b8668
	ctx.lr = 0x822B7DEC;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x822b7e08
	if (ctx.cr0.eq) goto loc_822B7E08;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822b42a0
	ctx.lr = 0x822B7E04;
	sub_822B42A0(ctx, base);
	// b 0x822b7e38
	goto loc_822B7E38;
loc_822B7E08:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x822b3c20
	ctx.lr = 0x822B7E18;
	sub_822B3C20(ctx, base);
	// b 0x822b7e38
	goto loc_822B7E38;
loc_822B7E1C:
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b7e38
	if (ctx.cr0.eq) goto loc_822B7E38;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b4618
	ctx.lr = 0x822B7E38;
	sub_822B4618(ctx, base);
loc_822B7E38:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822b7ec8
	if (!ctx.cr6.gt) goto loc_822B7EC8;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,196(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r3,112(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 112);
	// add r29,r11,r27
	r29.u64 = ctx.r11.u64 + r27.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x822b7ebc
	if (!ctx.cr6.eq) goto loc_822B7EBC;
	// bl 0x822c4e90
	ctx.lr = 0x822B7E64;
	sub_822C4E90(ctx, base);
	// lwz r9,112(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 112);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// lwz r9,136(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 136);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x822b7eb0
	if (!ctx.cr6.gt) goto loc_822B7EB0;
loc_822B7E7C:
	// lbzx r9,r29,r11
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// bne cr6,0x822b7e90
	if (!ctx.cr6.eq) goto loc_822B7E90;
	// li r9,32767
	ctx.r9.s64 = 32767;
	// b 0x822b7e94
	goto loc_822B7E94;
loc_822B7E90:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
loc_822B7E94:
	// sth r9,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,112(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lwz r9,136(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 136);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822b7e7c
	if (ctx.cr6.lt) goto loc_822B7E7C;
loc_822B7EB0:
	// lwz r3,112(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 112);
	// bl 0x822c4f30
	ctx.lr = 0x822B7EB8;
	sub_822C4F30(ctx, base);
	// b 0x822b7ec8
	goto loc_822B7EC8;
loc_822B7EBC:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r5,136(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// bl 0x822c4f50
	ctx.lr = 0x822B7EC8;
	sub_822C4F50(ctx, base);
loc_822B7EC8:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r3,r30,120
	ctx.r3.s64 = r30.s64 + 120;
	// lwz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r29,r11,r27
	r29.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x822ad068
	ctx.lr = 0x822B7EDC;
	sub_822AD068(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mr r28,r23
	r28.u64 = r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822b7f90
	if (!ctx.cr6.gt) goto loc_822B7F90;
loc_822B7EEC:
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822b8668
	ctx.lr = 0x822B7F00;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b7f18
	if (ctx.cr0.eq) goto loc_822B7F18;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b74c8
	ctx.lr = 0x822B7F14;
	sub_822B74C8(ctx, base);
	// b 0x822b7f6c
	goto loc_822B7F6C;
loc_822B7F18:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822b8668
	ctx.lr = 0x822B7F2C;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r22,8(r29)
	r22.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r21,4(r29)
	r21.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// beq 0x822b7f4c
	if (ctx.cr0.eq) goto loc_822B7F4C;
	// lwz r20,12(r29)
	r20.u64 = REX_LOAD_U32(r29.u32 + 12);
	// b 0x822b7f50
	goto loc_822B7F50;
loc_822B7F4C:
	// lwz r20,60(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 60);
loc_822B7F50:
	// bl 0x822ac200
	ctx.lr = 0x822B7F54;
	sub_822AC200(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b7308
	ctx.lr = 0x822B7F6C;
	sub_822B7308(ctx, base);
loc_822B7F6C:
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// divwu r11,r11,r10
	ctx.r11.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// blt cr6,0x822b7eec
	if (ctx.cr6.lt) goto loc_822B7EEC;
loc_822B7F90:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// li r5,32
	ctx.r5.s64 = 32;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lfs f31,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
	// stb r11,144(r30)
	REX_STORE_U8(r30.u32 + 144, ctx.r11.u8);
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,145(r30)
	REX_STORE_U8(r30.u32 + 145, ctx.r11.u8);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,147(r30)
	REX_STORE_U8(r30.u32 + 147, ctx.r11.u8);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,148(r30)
	REX_STORE_U8(r30.u32 + 148, ctx.r11.u8);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,149(r30)
	REX_STORE_U8(r30.u32 + 149, ctx.r11.u8);
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,150(r30)
	REX_STORE_U8(r30.u32 + 150, ctx.r11.u8);
	// stfs f31,172(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 172, temp.u32);
	// stfs f31,156(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// bl 0x822d4fa0
	ctx.lr = 0x822B8014;
	sub_822D4FA0(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r11,160(r30)
	REX_STORE_U32(r30.u32 + 160, ctx.r11.u32);
	// bl 0x822b8668
	ctx.lr = 0x822B8030;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b8048
	if (ctx.cr0.eq) goto loc_822B8048;
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,159(r30)
	REX_STORE_U8(r30.u32 + 159, ctx.r11.u8);
loc_822B8048:
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822b8668
	ctx.lr = 0x822B805C;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b8074
	if (ctx.cr0.eq) goto loc_822B8074;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,151(r30)
	REX_STORE_U8(r30.u32 + 151, ctx.r11.u8);
loc_822B8074:
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822b8668
	ctx.lr = 0x822B8088;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b80a4
	if (ctx.cr0.eq) goto loc_822B80A4;
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,166(r30)
	REX_STORE_U8(r30.u32 + 166, ctx.r11.u8);
	// b 0x822b80a8
	goto loc_822B80A8;
loc_822B80A4:
	// stb r24,166(r30)
	REX_STORE_U8(r30.u32 + 166, r24.u8);
loc_822B80A8:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// li r6,7
	ctx.r6.s64 = 7;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r11,220(r30)
	REX_STORE_U32(r30.u32 + 220, ctx.r11.u32);
	// bl 0x822b8668
	ctx.lr = 0x822B80D0;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// beq 0x822b80e4
	if (ctx.cr0.eq) goto loc_822B80E4;
	// stb r24,176(r11)
	REX_STORE_U8(ctx.r11.u32 + 176, r24.u8);
	// b 0x822b80e8
	goto loc_822B80E8;
loc_822B80E4:
	// stb r23,176(r11)
	REX_STORE_U8(ctx.r11.u32 + 176, r23.u8);
loc_822B80E8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822b8668
	ctx.lr = 0x822B80FC;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b8164
	if (ctx.cr0.eq) goto loc_822B8164;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822b8164
	if (ctx.cr6.eq) goto loc_822B8164;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r3,112(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 112);
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x822b8618
	ctx.lr = 0x822B8120;
	sub_822B8618(ctx, base);
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// lwz r11,264(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x822b8164
	if (!ctx.cr6.gt) goto loc_822B8164;
	// addi r8,r9,-4
	ctx.r8.s64 = ctx.r9.s64 + -4;
loc_822B8144:
	// lwzu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stwx r7,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822b8144
	if (ctx.cr6.lt) goto loc_822B8144;
loc_822B8164:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822b8668
	ctx.lr = 0x822B8178;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b8190
	if (ctx.cr0.eq) goto loc_822B8190;
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,165(r30)
	REX_STORE_U8(r30.u32 + 165, ctx.r11.u8);
loc_822B8190:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822b8668
	ctx.lr = 0x822B81A4;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b81c0
	if (ctx.cr0.eq) goto loc_822B81C0;
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r10,112(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,177(r10)
	REX_STORE_U8(ctx.r10.u32 + 177, ctx.r11.u8);
loc_822B81C0:
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822b8668
	ctx.lr = 0x822B81D4;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b81fc
	if (ctx.cr0.eq) goto loc_822B81FC;
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,153(r30)
	REX_STORE_U8(r30.u32 + 153, ctx.r11.u8);
	// lwz r11,248(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 248);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,152(r30)
	REX_STORE_U8(r30.u32 + 152, ctx.r11.u8);
loc_822B81FC:
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822b8668
	ctx.lr = 0x822B8210;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b8288
	if (ctx.cr0.eq) goto loc_822B8288;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,236(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// lfs f11,240(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f10,220(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 220);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// lfs f9,224(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 224);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,228(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 228);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x821f3f40
	ctx.lr = 0x822B8288;
	sub_821F3F40(ctx, base);
loc_822B8288:
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822b8668
	ctx.lr = 0x822B829C;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b82b4
	if (ctx.cr0.eq) goto loc_822B82B4;
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,164(r30)
	REX_STORE_U8(r30.u32 + 164, ctx.r11.u8);
loc_822B82B4:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822b8668
	ctx.lr = 0x822B82C8;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// lbz r11,260(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 260);
	// beq 0x822b830c
	if (ctx.cr0.eq) goto loc_822B830C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822b836c
	if (ctx.cr0.eq) goto loc_822B836C;
	// mr r29,r23
	r29.u64 = r23.u64;
	// addi r31,r31,252
	r31.s64 = r31.s64 + 252;
loc_822B82E8:
	// lwzu r11,4(r31)
	ea = 4 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// clrlwi r4,r29,24
	ctx.r4.u64 = r29.u32 & 0xFF;
	// lwz r3,112(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 112);
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x822b85f0
	ctx.lr = 0x822B82FC;
	sub_822B85F0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(r29.u32, 4, ctx.xer);
	// blt cr6,0x822b82e8
	if (ctx.cr6.lt) goto loc_822B82E8;
	// b 0x822b836c
	goto loc_822B836C;
loc_822B830C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x822b8348
	if (!ctx.cr6.gt) goto loc_822B8348;
	// mr r31,r23
	r31.u64 = r23.u64;
loc_822B8318:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,112(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 112);
	// clrlwi r4,r31,24
	ctx.r4.u64 = r31.u32 & 0xFF;
	// bl 0x822b85f0
	ctx.lr = 0x822B8328;
	sub_822B85F0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(r31.u32, 3, ctx.xer);
	// blt cr6,0x822b8318
	if (ctx.cr6.lt) goto loc_822B8318;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,112(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 112);
	// clrlwi r4,r31,24
	ctx.r4.u64 = r31.u32 & 0xFF;
	// bl 0x822b85f0
	ctx.lr = 0x822B8344;
	sub_822B85F0(ctx, base);
	// b 0x822b836c
	goto loc_822B836C;
loc_822B8348:
	// bne cr6,0x822b836c
	if (!ctx.cr6.eq) goto loc_822B836C;
	// mr r31,r23
	r31.u64 = r23.u64;
loc_822B8350:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,112(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 112);
	// clrlwi r4,r31,24
	ctx.r4.u64 = r31.u32 & 0xFF;
	// bl 0x822b85f0
	ctx.lr = 0x822B8360;
	sub_822B85F0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// blt cr6,0x822b8350
	if (ctx.cr6.lt) goto loc_822B8350;
loc_822B836C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b39d0
	ctx.lr = 0x822B8374;
	sub_822B39D0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_822D638C) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r24,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r24.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,204(r31)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// b 0x822d63c4
	goto loc_822D63C4;
loc_822D63C4:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x822d63d4
	if (ctx.cr6.eq) goto loc_822D63D4;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822dbb00
	ctx.lr = 0x822D63D4;
	sub_822DBB00(ctx, base);
loc_822D63D4:
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r24,-16(r1)
	ctx.r24.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D7AF8) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
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
	// addi r3,r10,-11128
	ctx.r3.s64 = ctx.r10.s64 + -11128;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822d7a38
	ctx.lr = 0x822D7B48;
	sub_822D7A38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_31) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v31{};
	uint32_t ea{};
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx v31,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_68) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_124) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_822D8FF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-96
	r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822d6ff8
	ctx.lr = 0x822D9010;
	sub_822D6FF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r3,88(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D9028;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x823cdc10
	ctx.lr = 0x822D902C;
	sub_823CDC10(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x822d6400
	ctx.lr = 0x822D9034;
	sub_822D6400(ctx, base);
	// addi r1,r31,96
	ctx.r1.s64 = r31.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D9828) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822D9830;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-4096
	ctx.r11.s64 = -4096;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x822d98cc
	if (ctx.cr6.gt) goto loc_822D98CC;
	// lis r28,-32162
	r28.s64 = -2107768832;
loc_822D9848:
	// bl 0x8220fda0
	ctx.lr = 0x822D984C;
	sub_8220FDA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822d9868
	if (!ctx.cr0.eq) goto loc_822D9868;
	// bl 0x822db888
	ctx.lr = 0x822D9858;
	sub_822DB888(ctx, base);
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x822db858
	ctx.lr = 0x822D9860;
	sub_822DB858(ctx, base);
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x822d6170
	ctx.lr = 0x822D9868;
	sub_822D6170(ctx, base);
loc_822D9868:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// mr r31,r30
	r31.u64 = r30.u64;
	// bne cr6,0x822d9878
	if (!ctx.cr6.eq) goto loc_822D9878;
	// li r31,1
	r31.s64 = 1;
loc_822D9878:
	// bl 0x8220fda0
	ctx.lr = 0x822D987C;
	sub_8220FDA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8220e3f8
	ctx.lr = 0x822D9888;
	sub_8220E3F8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x822d98c4
	if (!ctx.cr0.eq) goto loc_822D98C4;
	// lwz r11,-30528(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -30528);
	// li r31,12
	r31.s64 = 12;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d98b4
	if (ctx.cr6.eq) goto loc_822D98B4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822dbec0
	ctx.lr = 0x822D98A8;
	sub_822DBEC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822d9848
	if (!ctx.cr0.eq) goto loc_822D9848;
	// b 0x822d98bc
	goto loc_822D98BC;
loc_822D98B4:
	// bl 0x822db6c0
	ctx.lr = 0x822D98B8;
	sub_822DB6C0(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_822D98BC:
	// bl 0x822db6c0
	ctx.lr = 0x822D98C0;
	sub_822DB6C0(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_822D98C4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x822d98e8
	goto loc_822D98E8;
loc_822D98CC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822dbec0
	ctx.lr = 0x822D98D4;
	sub_822DBEC0(ctx, base);
	// bl 0x822db6c0
	ctx.lr = 0x822D98D8;
	sub_822DB6C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822D98E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822DCA78) {
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
	// rlwinm r3,r11,0,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DE6F8) {
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
	// std r3,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,32376
	ctx.r3.s64 = ctx.r11.s64 + 32376;
	// bl 0x824d4a7c
	ctx.lr = 0x822DE714;
	__imp__RtlCaptureContext(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// addi r10,r10,32288
	ctx.r10.s64 = ctx.r10.s64 + 32288;
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,1033
	ctx.r10.u64 = ctx.r10.u64 | 1033;
	// stw r10,32288(r11)
	REX_STORE_U32(ctx.r11.u32 + 32288, ctx.r10.u32);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r11,r11,32288
	ctx.r11.s64 = ctx.r11.s64 + 32288;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r11,-2140(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2140);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,32368(r11)
	REX_STORE_U32(ctx.r11.u32 + 32368, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822dcaf8
	ctx.lr = 0x822DE770;
	sub_822DCAF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8220bec0
	ctx.lr = 0x822DE778;
	sub_8220BEC0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,31044
	ctx.r3.s64 = ctx.r11.s64 + 31044;
	// bl 0x8220bf90
	ctx.lr = 0x822DE784;
	sub_8220BF90(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,32368(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32368);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822de79c
	if (!ctx.cr6.eq) goto loc_822DE79C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822dcaf8
	ctx.lr = 0x822DE79C;
	sub_822DCAF8(ctx, base);
loc_822DE79C:
	// li r3,242
	ctx.r3.s64 = 242;
	// bl 0x824d45bc
	ctx.lr = 0x822DE7A4;
	__imp__KeBugCheck(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E2000) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r29,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r29.u64);
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
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r28,80(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r29,r11,-11328
	ctx.r29.s64 = ctx.r11.s64 + -11328;
	// b 0x822e2048
	goto loc_822E2048;
loc_822E2048:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x822dcd80
	ctx.lr = 0x822E205C;
	sub_822DCD80(ctx, base);
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lwz r27,164(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r28,80(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r29,r10,-11328
	ctx.r29.s64 = ctx.r10.s64 + -11328;
	// addi r10,r11,-11324
	ctx.r10.s64 = ctx.r11.s64 + -11324;
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E6D58) {
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
	// bl 0x822e5ce0
	ctx.lr = 0x822E6D78;
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

DEFINE_REX_FUNC(sub_822E87F8) {
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
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e88a0
	if (ctx.cr6.eq) goto loc_822E88A0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822126f0
	ctx.lr = 0x822E882C;
	sub_822126F0(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x822125d0
	ctx.lr = 0x822E884C;
	sub_822125D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,120
	ctx.r5.s64 = 120;
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82217228
	ctx.lr = 0x822E8860;
	sub_82217228(ctx, base);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x822d4fa0
	ctx.lr = 0x822E886C;
	sub_822D4FA0(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// bl 0x82216020
	ctx.lr = 0x822E8874;
	sub_82216020(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822125d0
	ctx.lr = 0x822E8890;
	sub_822125D0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822e88a0
	if (ctx.cr6.eq) goto loc_822E88A0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82216cc8
	ctx.lr = 0x822E88A0;
	sub_82216CC8(ctx, base);
loc_822E88A0:
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

DEFINE_REX_FUNC(sub_822EAF70) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EB178) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822EB180;
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EB1A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r8,76(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822EB1BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,52(r30)
	REX_STORE_U32(r30.u32 + 52, r29.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f1248
	ctx.lr = 0x822EB1D0;
	sub_822F1248(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// stw r3,520(r30)
	REX_STORE_U32(r30.u32 + 520, ctx.r3.u32);
	// ori r8,r11,65535
	ctx.r8.u64 = ctx.r11.u64 | 65535;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 & ctx.r8.u64;
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x822eb20c
	goto loc_822EB20C;
loc_822EB20C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822eb21c
	if (ctx.cr6.lt) goto loc_822EB21C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ead40
	ctx.lr = 0x822EB21C;
	sub_822EAD40(ctx, base);
loc_822EB21C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822ED1F0) {
	REX_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32819
	ctx.r4.u64 = ctx.r4.u64 | 32819;
	// b 0x823cd118
	sub_823CD118(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822ED348) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822ED364;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_822ED750) {
	REX_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EDAD8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822edb54
	if (ctx.cr6.eq) goto loc_822EDB54;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,44(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r8,40(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r7,36(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// lwz r6,32(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
loc_822EDB1C:
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bctrl 
	ctx.lr = 0x822EDB2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822EDB2C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822edb3c
	if (ctx.cr6.lt) goto loc_822EDB3C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,120(r30)
	REX_STORE_U32(r30.u32 + 120, ctx.r11.u32);
loc_822EDB3C:
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
loc_822EDB54:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822edb80
	if (ctx.cr6.eq) goto loc_822EDB80;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// b 0x822edb1c
	goto loc_822EDB1C;
loc_822EDB80:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822edbc0
	if (ctx.cr6.eq) goto loc_822EDBC0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r8,36(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// ld r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U64(r31.u32 + 24);
	// ld r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U64(r31.u32 + 16);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EDBBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822edb2c
	goto loc_822EDB2C;
loc_822EDBC0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x822edb3c
	goto loc_822EDB3C;
}

DEFINE_REX_FUNC(sub_822F4390) {
	REX_FUNC_PROLOGUE();
	// stw r4,444(r3)
	REX_STORE_U32(ctx.r3.u32 + 444, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F4400) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,284
	ctx.r3.s64 = ctx.r3.s64 + 284;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F45B8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r10,r10,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(60));
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,60(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822F47D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822f481c
	if (ctx.cr6.lt) goto loc_822F481C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r3,68
	ctx.r8.s64 = ctx.r3.s64 + 68;
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
loc_822F47FC:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822f47fc
	if (!ctx.cr0.eq) goto loc_822F47FC;
	// blr 
	return;
loc_822F481C:
	// addi r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 + 68;
loc_822F4820:
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
	// bne 0x822f4820
	if (!ctx.cr0.eq) goto loc_822F4820;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F7EC8) {
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
	ctx.lr = 0x822F7ED0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,256(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F7EE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822f840c
	if (!ctx.cr6.eq) goto loc_822F840C;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// li r26,0
	r26.s64 = 0;
	// ori r27,r11,10
	r27.u64 = ctx.r11.u64 | 10;
loc_822F7F00:
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F7F20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822f8384
	if (ctx.cr6.eq) goto loc_822F8384;
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F7F4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F7F60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r7,24360
	ctx.r5.s64 = ctx.r7.s64 + 24360;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F7F84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
loc_822F7F90:
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_822F7F94:
	// bctrl 
	ctx.lr = 0x822F7F98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,256(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F7FAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f806c
	if (ctx.cr6.eq) goto loc_822F806C;
	// rlwinm r11,r3,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f8214
	if (!ctx.cr6.eq) goto loc_822F8214;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f806c
	if (ctx.cr6.eq) goto loc_822F806C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,244(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F7FE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x822f8058
	if (ctx.cr6.eq) goto loc_822F8058;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,264(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F8000;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F8014;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,84(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 84);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822F802C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,20(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x822F8040;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,264(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F8058;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F8058:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,172(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x822f7f94
	goto loc_822F7F94;
loc_822F806C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,264(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F8084;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F8098;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822f46d8
	ctx.lr = 0x822F80A0;
	sub_822F46D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f81f0
	if (ctx.cr6.eq) goto loc_822F81F0;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822f46f0
	ctx.lr = 0x822F80B0;
	sub_822F46F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F80C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f826c
	if (ctx.cr6.eq) goto loc_822F826C;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r11,-8
	r29.s64 = ctx.r11.s64 + -8;
	// lwz r9,56(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822F80EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r30,244
	r28.s64 = r30.s64 + 244;
loc_822F80F0:
	// mfmsr r7
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r7.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r8,0,r28
	ea = r28.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r28
	ea = r28.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822f80f0
	if (!ctx.cr0.eq) goto loc_822F80F0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,56(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 56);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x822F8124;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F813C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,80(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F8154;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f818c
	if (ctx.cr6.lt) goto loc_822F818C;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822f47d8
	ctx.lr = 0x822F8164;
	sub_822F47D8(ctx, base);
loc_822F8164:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F8174:
	// bctrl 
	ctx.lr = 0x822F8178;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x822f7f94
	goto loc_822F7F94;
loc_822F818C:
	// cmpw cr6,r3,r27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r27.s32, ctx.xer);
	// bne cr6,0x822f8164
	if (!ctx.cr6.eq) goto loc_822F8164;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F81AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F81AC:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r9,0,r28
	ea = r28.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r28
	ea = r28.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822f81ac
	if (!ctx.cr0.eq) goto loc_822F81AC;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,20(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822F81DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,172(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 172);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// b 0x822f8174
	goto loc_822F8174;
loc_822F81F0:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F8204;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,172(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 172);
	// b 0x822f7f90
	goto loc_822F7F90;
loc_822F8214:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,264(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F822C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F8240;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,84(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 84);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822F8258;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,20(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// b 0x822f8290
	goto loc_822F8290;
loc_822F826C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F8280;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_822F8290:
	// bctrl 
	ctx.lr = 0x822F8294;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,244(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F82A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x822f8308
	if (ctx.cr6.eq) goto loc_822F8308;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,264(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F82C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F82DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,84(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 84);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822F82F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,20(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x822F8308;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F8308:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F831C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,60(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F8330;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,20(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822F8344;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f8364
	if (ctx.cr6.eq) goto loc_822F8364;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F8360;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
loc_822F8364:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f8384
	if (ctx.cr6.eq) goto loc_822F8384;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F8380;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
loc_822F8384:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,180(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F8398;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,256(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 256);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F83AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r7,r3,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x822f840c
	if (!ctx.cr6.eq) goto loc_822F840C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,264(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F83D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,220(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 220);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F83E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,272(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 272);
	// bl 0x8220be80
	ctx.lr = 0x822F83EC;
	sub_8220BE80(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,256(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 256);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822F8400;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r5,r3,0,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x822f7f00
	if (ctx.cr6.eq) goto loc_822F7F00;
loc_822F840C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,264(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F8424;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,220(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 220);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F8438;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82311068) {
	REX_FUNC_PROLOGUE();
	// b 0x82310d28
	sub_82310D28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823113E8) {
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
	ctx.lr = 0x823113F0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r29,44(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82311f78
	ctx.lr = 0x82311430;
	sub_82311F78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231162c
	if (ctx.cr6.lt) goto loc_8231162C;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82311454
	if (!ctx.cr6.eq) goto loc_82311454;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed0
	return;
loc_82311454:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82311624
	if (ctx.cr6.eq) goto loc_82311624;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82312638
	ctx.lr = 0x82311474;
	sub_82312638(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231162c
	if (ctx.cr6.lt) goto loc_8231162C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r26,1
	r26.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82311580
	if (!ctx.cr6.eq) goto loc_82311580;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823114d0
	if (ctx.cr6.eq) goto loc_823114D0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 16);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82310ec8
	ctx.lr = 0x823114AC;
	sub_82310EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231162c
	if (ctx.cr6.lt) goto loc_8231162C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823114d0
	if (ctx.cr6.eq) goto loc_823114D0;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_823114D0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82310ec8
	ctx.lr = 0x823114E4;
	sub_82310EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231162c
	if (ctx.cr6.lt) goto loc_8231162C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82311580
	if (!ctx.cr6.eq) goto loc_82311580;
	// std r4,48(r29)
	REX_STORE_U64(r29.u32 + 48, ctx.r4.u64);
	// stw r26,56(r29)
	REX_STORE_U32(r29.u32 + 56, r26.u32);
	// lwz r11,76(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 76);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82311514;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231162c
	if (ctx.cr6.lt) goto loc_8231162C;
	// lwz r11,76(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 76);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82311534;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231162c
	if (ctx.cr6.lt) goto loc_8231162C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,40(r29)
	REX_STORE_U64(r29.u32 + 40, ctx.r11.u64);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82310d28
	ctx.lr = 0x8231155C;
	sub_82310D28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231162c
	if (ctx.cr6.lt) goto loc_8231162C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82310ec8
	ctx.lr = 0x82311578;
	sub_82310EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231162c
	if (ctx.cr6.lt) goto loc_8231162C;
loc_82311580:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// ld r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// subf r6,r10,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// cmpld cr6,r6,r7
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r7.u64, ctx.xer);
	// bge cr6,0x823115c8
	if (!ctx.cr6.lt) goto loc_823115C8;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_823115C8:
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r7.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// subf r7,r10,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r7,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// ld r4,8(r5)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r11,r11,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// stw r26,8(r31)
	REX_STORE_U32(r31.u32 + 8, r26.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// bne cr6,0x8231162c
	if (!ctx.cr6.eq) goto loc_8231162C;
loc_82311624:
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
loc_8231162C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_823195E0) {
	REX_FUNC_PROLOGUE();
	// xoris r10,r10,43894
	ctx.r10.u64 = ctx.r10.u64 ^ 2876637184;
	// xori r10,r10,14558
	ctx.r10.u64 = ctx.r10.u64 ^ 14558;
	// b 0x82465670
	sub_82465670(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82319BA0) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,224
	ctx.r3.s64 = ctx.r3.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x82319BC4;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82319bd4
	if (ctx.cr6.lt) goto loc_82319BD4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,16(r31)
	REX_STORE_U16(r31.u32 + 16, ctx.r11.u16);
loc_82319BD4:
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

DEFINE_REX_FUNC(sub_8231EAF0) {
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
	ctx.lr = 0x8231EAF8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,584(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 584);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r7,424(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 424);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r9,56(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 56);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,72(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// lhz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r5,12(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// lwz r8,320(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mulli r10,r4,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// lhz r7,0(r5)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r4,118(r6)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + 118);
	// add r29,r10,r9
	r29.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r30,r4
	r30.s64 = ctx.r4.s16;
	// beq cr6,0x8231eb60
	if (ctx.cr6.eq) goto loc_8231EB60;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x8231eb68
	if (ctx.cr6.eq) goto loc_8231EB68;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_8231EB60:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,72(r28)
	REX_STORE_U32(r28.u32 + 72, ctx.r11.u32);
loc_8231EB68:
	// lbz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 200);
	// lhz r10,110(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 110);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8231eb8c
	if (ctx.cr6.lt) goto loc_8231EB8C;
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_8231EB8C:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r30.s32, ctx.xer);
	// bge cr6,0x8231ec30
	if (!ctx.cr6.lt) goto loc_8231EC30;
	// addi r26,r28,224
	r26.s64 = r28.s64 + 224;
	// li r27,1
	r27.s64 = 1;
loc_8231EBA4:
	// lbz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 200);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r10,110(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 110);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// subf r4,r9,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r9.u64;
	// bl 0x82319780
	ctx.lr = 0x8231EBC0;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231ec38
	if (ctx.cr6.lt) goto loc_8231EC38;
	// lbz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 200);
	// lhz r10,110(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 110);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// slw r10,r27,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r8.u8 & 0x3F));
	// and r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8231ebfc
	if (ctx.cr6.eq) goto loc_8231EBFC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// orc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ~ctx.r10.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8231EBFC:
	// lhz r10,202(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 202);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r29
	REX_STORE_U32(ctx.r8.u32 + r29.u32, ctx.r11.u32);
	// lhz r7,202(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 202);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r5,202(r31)
	REX_STORE_U16(r31.u32 + 202, ctx.r5.u16);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// blt cr6,0x8231eba4
	if (ctx.cr6.lt) goto loc_8231EBA4;
loc_8231EC30:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,72(r28)
	REX_STORE_U32(r28.u32 + 72, ctx.r11.u32);
loc_8231EC38:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_823251D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,588(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 588);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,20696
	ctx.r8.s64 = ctx.r10.s64 + 20696;
	// stw r9,516(r3)
	REX_STORE_U32(ctx.r3.u32 + 516, ctx.r9.u32);
	// stw r8,484(r11)
	REX_STORE_U32(ctx.r11.u32 + 484, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82325520) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e5c
	ctx.lr = 0x82325528;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// li r17,0
	r17.s64 = 0;
	// lwz r30,24(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lwz r24,0(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// lwz r28,260(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// addi r31,r3,224
	r31.s64 = ctx.r3.s64 + 224;
	// lwz r29,264(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 264);
	// li r26,23
	r26.s64 = 23;
	// lwz r25,256(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// mr r20,r17
	r20.u64 = r17.u64;
	// lwz r27,252(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// lwz r23,272(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// lwz r22,268(r3)
	r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// bgt cr6,0x82325c24
	if (ctx.cr6.gt) goto loc_82325C24;
	// li r18,1
	r18.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823255e8
	if (ctx.cr6.eq) goto loc_823255E8;
	// bdz 0x82325c24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82325C24;
	// bdz 0x82325c24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82325C24;
	// bdz 0x82325c24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82325C24;
	// bdz 0x82325598
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82325598;
	// bdz 0x82325964
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82325964;
	// b 0x82325b4c
	goto loc_82325B4C;
loc_82325598:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82319780
	ctx.lr = 0x823255A8;
	sub_82319780(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82325c24
	if (ctx.cr6.lt) goto loc_82325C24;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82322750
	ctx.lr = 0x823255C8;
	sub_82322750(ctx, base);
	// stw r17,56(r21)
	REX_STORE_U32(r21.u32 + 56, r17.u32);
	// li r26,23
	r26.s64 = 23;
	// lwz r28,36(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r29,40(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r25,32(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r27,28(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r23,48(r31)
	r23.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r22,44(r31)
	r22.u64 = REX_LOAD_U32(r31.u32 + 44);
loc_823255E8:
	// cmplwi cr6,r29,23
	ctx.cr6.compare<uint32_t>(r29.u32, 23, ctx.xer);
	// bge cr6,0x8232570c
	if (!ctx.cr6.lt) goto loc_8232570C;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82325628
	if (ctx.cr6.eq) goto loc_82325628;
	// subfic r11,r29,32
	ctx.xer.ca = r29.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - r29.u64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// blt cr6,0x82325608
	if (ctx.cr6.lt) goto loc_82325608;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82325608:
	// subf r23,r11,r23
	r23.u64 = r23.u64 - ctx.r11.u64;
	// slw r9,r28,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r11.u8 & 0x3F));
	// slw r10,r18,r23
	ctx.r10.u64 = r23.u8 & 0x20 ? 0 : (r18.u32 << (r23.u8 & 0x3F));
	// srw r8,r22,r23
	ctx.r8.u64 = r23.u8 & 0x20 ? 0 : (r22.u32 >> (r23.u8 & 0x3F));
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// or r28,r9,r8
	r28.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r22,r7,r22
	r22.u64 = ctx.r7.u64 & r22.u64;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
loc_82325628:
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r9,r11,-22768
	ctx.r9.s64 = ctx.r11.s64 + -22768;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82325670
	if (!ctx.cr6.eq) goto loc_82325670;
	// cmplwi cr6,r29,24
	ctx.cr6.compare<uint32_t>(r29.u32, 24, ctx.xer);
	// bgt cr6,0x823256ac
	if (ctx.cr6.gt) goto loc_823256AC;
loc_82325644:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x823256ac
	if (ctx.cr6.eq) goto loc_823256AC;
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 0);
	// rlwinm r10,r28,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 8) & 0xFFFFFF00;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// or r28,r10,r11
	r28.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// cmplwi cr6,r29,24
	ctx.cr6.compare<uint32_t>(r29.u32, 24, ctx.xer);
	// ble cr6,0x82325644
	if (!ctx.cr6.gt) goto loc_82325644;
	// b 0x823256ac
	goto loc_823256AC;
loc_82325670:
	// cmplwi cr6,r29,24
	ctx.cr6.compare<uint32_t>(r29.u32, 24, ctx.xer);
	// bgt cr6,0x823256ac
	if (ctx.cr6.gt) goto loc_823256AC;
loc_82325678:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x823256ac
	if (ctx.cr6.eq) goto loc_823256AC;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lbz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U8(r27.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82325690;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// rlwimi r3,r28,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// cmplwi cr6,r29,24
	ctx.cr6.compare<uint32_t>(r29.u32, 24, ctx.xer);
	// ble cr6,0x82325678
	if (!ctx.cr6.gt) goto loc_82325678;
loc_823256AC:
	// cmplwi cr6,r29,23
	ctx.cr6.compare<uint32_t>(r29.u32, 23, ctx.xer);
	// bge cr6,0x8232570c
	if (!ctx.cr6.lt) goto loc_8232570C;
	// stw r28,36(r31)
	REX_STORE_U32(r31.u32 + 36, r28.u32);
	// li r5,23
	ctx.r5.s64 = 23;
	// stw r29,40(r31)
	REX_STORE_U32(r31.u32 + 40, r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r25,32(r31)
	REX_STORE_U32(r31.u32 + 32, r25.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r27,28(r31)
	REX_STORE_U32(r31.u32 + 28, r27.u32);
	// stw r23,48(r31)
	REX_STORE_U32(r31.u32 + 48, r23.u32);
	// stw r22,44(r31)
	REX_STORE_U32(r31.u32 + 44, r22.u32);
	// bl 0x823195f0
	ctx.lr = 0x823256DC;
	sub_823195F0(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82325c24
	if (ctx.cr6.lt) goto loc_82325C24;
	// lwz r29,40(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r28,36(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r25,32(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r29,23
	ctx.cr6.compare<uint32_t>(r29.u32, 23, ctx.xer);
	// lwz r27,28(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r23,48(r31)
	r23.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r22,44(r31)
	r22.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bge cr6,0x8232570c
	if (!ctx.cr6.lt) goto loc_8232570C;
	// mr r26,r29
	r26.u64 = r29.u64;
loc_8232570C:
	// subf r11,r26,r29
	ctx.r11.u64 = r29.u64 - r26.u64;
	// subfic r10,r26,32
	ctx.xer.ca = r26.u32 <= 32;
	ctx.r10.u64 = static_cast<uint64_t>(32) - r26.u64;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// srw r7,r28,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (r28.u32 >> (ctx.r8.u8 & 0x3F));
	// slw r8,r7,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r6,r8,3,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x6;
	// lhzux r11,r30,r6
	ea = r30.u32 + ctx.r6.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// rlwinm r5,r11,0,0,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823258d8
	if (!ctx.cr6.eq) goto loc_823258D8;
	// rlwinm r9,r8,4,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x3;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823258d8
	if (!ctx.cr6.eq) goto loc_823258D8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823258d8
	if (!ctx.cr6.eq) goto loc_823258D8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823258d8
	if (!ctx.cr6.eq) goto loc_823258D8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823258d8
	if (!ctx.cr6.eq) goto loc_823258D8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823258d8
	if (!ctx.cr6.eq) goto loc_823258D8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823258d8
	if (!ctx.cr6.eq) goto loc_823258D8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823258d8
	if (!ctx.cr6.eq) goto loc_823258D8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823258d8
	if (!ctx.cr6.eq) goto loc_823258D8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823258d8
	if (!ctx.cr6.eq) goto loc_823258D8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823258d8
	if (!ctx.cr6.eq) goto loc_823258D8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823258d8
	if (!ctx.cr6.eq) goto loc_823258D8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823258d8
	if (!ctx.cr6.eq) goto loc_823258D8;
	// rlwinm r10,r10,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r10
	ea = r30.u32 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// rlwinm r9,r11,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823258d8
	if (!ctx.cr6.eq) goto loc_823258D8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r10,r30
	r30.u64 = ctx.r10.u64 + r30.u64;
loc_823258D8:
	// rlwinm r4,r11,22,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1F;
	// clrlwi r26,r11,22
	r26.u64 = ctx.r11.u32 & 0x3FF;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmplwi cr6,r26,1020
	ctx.cr6.compare<uint32_t>(r26.u32, 1020, ctx.xer);
	// blt cr6,0x823258fc
	if (ctx.cr6.lt) goto loc_823258FC;
	// clrlwi r11,r26,30
	ctx.r11.u64 = r26.u32 & 0x3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r26,r10,r30
	r26.u64 = REX_LOAD_U16(ctx.r10.u32 + r30.u32);
loc_823258FC:
	// slw r30,r8,r4
	r30.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r4.u8 & 0x3F));
	// stw r28,36(r31)
	REX_STORE_U32(r31.u32 + 36, r28.u32);
	// stw r29,40(r31)
	REX_STORE_U32(r31.u32 + 40, r29.u32);
	// cmplw cr6,r29,r4
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r4.u32, ctx.xer);
	// stw r25,32(r31)
	REX_STORE_U32(r31.u32 + 32, r25.u32);
	// stw r27,28(r31)
	REX_STORE_U32(r31.u32 + 28, r27.u32);
	// stw r23,48(r31)
	REX_STORE_U32(r31.u32 + 48, r23.u32);
	// stw r22,44(r31)
	REX_STORE_U32(r31.u32 + 44, r22.u32);
	// bge cr6,0x8232593c
	if (!ctx.cr6.lt) goto loc_8232593C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82319a70
	ctx.lr = 0x82325928;
	sub_82319A70(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82325c24
	if (ctx.cr6.lt) goto loc_82325C24;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// b 0x82325940
	goto loc_82325940;
loc_8232593C:
	// subf r11,r4,r29
	ctx.r11.u64 = r29.u64 - ctx.r4.u64;
loc_82325940:
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x823259a4
	if (!ctx.cr6.eq) goto loc_823259A4;
	// lwz r11,60(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,56(r21)
	REX_STORE_U32(r21.u32 + 56, ctx.r11.u32);
	// ble cr6,0x82325964
	if (!ctx.cr6.gt) goto loc_82325964;
	// stw r17,24(r24)
	REX_STORE_U32(r24.u32 + 24, r17.u32);
loc_82325964:
	// lwz r11,60(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82325a40
	if (ctx.cr6.gt) goto loc_82325A40;
	// lwz r11,52(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 52);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82319780
	ctx.lr = 0x82325984;
	sub_82319780(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82325c24
	if (ctx.cr6.lt) goto loc_82325C24;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,20(r24)
	REX_STORE_U32(r24.u32 + 20, ctx.r11.u32);
	// stw r10,56(r21)
	REX_STORE_U32(r21.u32 + 56, ctx.r10.u32);
	// b 0x82325b4c
	goto loc_82325B4C;
loc_823259A4:
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(r26.u32, 1, ctx.xer);
	// bne cr6,0x823259d8
	if (!ctx.cr6.eq) goto loc_823259D8;
	// stw r17,20(r24)
	REX_STORE_U32(r24.u32 + 20, r17.u32);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lhz r11,202(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 202);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lwz r9,36(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 36);
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// stw r6,16(r24)
	REX_STORE_U32(r24.u32 + 16, ctx.r6.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eac
	return;
loc_823259D8:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82325a00
	if (!ctx.cr6.lt) goto loc_82325A00;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82319a70
	ctx.lr = 0x823259EC;
	sub_82319A70(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82325c24
	if (ctx.cr6.lt) goto loc_82325C24;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// b 0x82325a04
	goto loc_82325A04;
loc_82325A00:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82325A04:
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// addi r10,r26,-2
	ctx.r10.s64 = r26.s64 + -2;
	// rlwinm r11,r30,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0x1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lwz r9,28(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 28);
	// lhzx r5,r9,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// stw r5,16(r24)
	REX_STORE_U32(r24.u32 + 16, ctx.r5.u32);
	// lwz r4,32(r19)
	ctx.r4.u64 = REX_LOAD_U32(r19.u32 + 32);
	// lhzx r3,r4,r8
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// stw r7,24(r24)
	REX_STORE_U32(r24.u32 + 24, ctx.r7.u32);
	// stw r3,20(r24)
	REX_STORE_U32(r24.u32 + 20, ctx.r3.u32);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eac
	return;
loc_82325A40:
	// lwz r11,24(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82325afc
	if (!ctx.cr6.eq) goto loc_82325AFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r17
	r30.u64 = r17.u64;
	// bl 0x823253a8
	ctx.lr = 0x82325A60;
	sub_823253A8(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82325c24
	if (ctx.cr6.lt) goto loc_82325C24;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r17,20(r24)
	REX_STORE_U32(r24.u32 + 20, r17.u32);
	// stw r11,24(r24)
	REX_STORE_U32(r24.u32 + 24, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82325ae4
	if (ctx.cr6.eq) goto loc_82325AE4;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,24(r24)
	REX_STORE_U32(r24.u32 + 24, ctx.r11.u32);
	// mr r30,r18
	r30.u64 = r18.u64;
	// stw r10,20(r24)
	REX_STORE_U32(r24.u32 + 20, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r8,r9,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82325ae4
	if (ctx.cr6.eq) goto loc_82325AE4;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
loc_82325AB0:
	// lwz r11,24(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 24);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r9,20(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 20);
	// slw r10,r18,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r11.u8 & 0x3F));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,24(r24)
	REX_STORE_U32(r24.u32 + 24, ctx.r9.u32);
	// stw r10,20(r24)
	REX_STORE_U32(r24.u32 + 20, ctx.r10.u32);
	// srw r7,r8,r30
	ctx.r7.u64 = r30.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (r30.u8 & 0x3F));
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82325ab0
	if (!ctx.cr6.eq) goto loc_82325AB0;
loc_82325AE4:
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82319a70
	ctx.lr = 0x82325AF0;
	sub_82319A70(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82325c24
	if (ctx.cr6.lt) goto loc_82325C24;
loc_82325AFC:
	// lwz r11,24(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82319780
	ctx.lr = 0x82325B10;
	sub_82319780(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82325c24
	if (ctx.cr6.lt) goto loc_82325C24;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r10,20(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 20);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,20(r24)
	REX_STORE_U32(r24.u32 + 20, ctx.r8.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// stw r6,24(r24)
	REX_STORE_U32(r24.u32 + 24, ctx.r6.u32);
	// stw r9,56(r21)
	REX_STORE_U32(r21.u32 + 56, ctx.r9.u32);
loc_82325B4C:
	// lwz r11,60(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82325bd8
	if (ctx.cr6.gt) goto loc_82325BD8;
	// lwz r11,248(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 248);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82319780
	ctx.lr = 0x82325B70;
	sub_82319780(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82325c24
	if (ctx.cr6.lt) goto loc_82325C24;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,0(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 0);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r11,248(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 248);
	// stw r8,24(r24)
	REX_STORE_U32(r24.u32 + 24, ctx.r8.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// subfic r5,r6,32
	ctx.xer.ca = ctx.r6.u32 <= 32;
	ctx.r5.u64 = static_cast<uint64_t>(32) - ctx.r6.u64;
	// srw r4,r10,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// clrlwi r4,r5,1
	ctx.r4.u64 = ctx.r5.u32 & 0x7FFFFFFF;
	// stw r4,16(r24)
	REX_STORE_U32(r24.u32 + 16, ctx.r4.u32);
	// stw r17,56(r21)
	REX_STORE_U32(r21.u32 + 56, r17.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eac
	return;
loc_82325BD8:
	// lhz r11,312(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 312);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x82324640
	ctx.lr = 0x82325BEC;
	sub_82324640(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82325c24
	if (ctx.cr6.lt) goto loc_82325C24;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r9,16(r24)
	REX_STORE_U32(r24.u32 + 16, ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82325c20
	if (!ctx.cr6.eq) goto loc_82325C20;
	// lhz r11,314(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 314);
	// lwz r10,20(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 20);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,20(r24)
	REX_STORE_U32(r24.u32 + 20, ctx.r10.u32);
loc_82325C20:
	// stw r17,56(r21)
	REX_STORE_U32(r21.u32 + 56, r17.u32);
loc_82325C24:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eac
	return;
}

DEFINE_REX_FUNC(sub_82358DA0) {
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
	// fmr f0,f3
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f3.f64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// beq cr6,0x82358ee8
	if (ctx.cr6.eq) goto loc_82358EE8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82358ee8
	if (ctx.cr6.eq) goto loc_82358EE8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82358ee8
	if (ctx.cr6.eq) goto loc_82358EE8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82358ee8
	if (ctx.cr6.eq) goto loc_82358EE8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82358ee8
	if (ctx.cr6.eq) goto loc_82358EE8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82358ee8
	if (ctx.cr6.eq) goto loc_82358EE8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82358ee8
	if (ctx.cr6.eq) goto loc_82358EE8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r7,15416(r3)
	REX_STORE_U32(ctx.r3.u32 + 15416, ctx.r7.u32);
	// stw r8,15420(r3)
	REX_STORE_U32(ctx.r3.u32 + 15420, ctx.r8.u32);
	// stw r9,15424(r3)
	REX_STORE_U32(ctx.r3.u32 + 15424, ctx.r9.u32);
	// stw r4,15404(r3)
	REX_STORE_U32(ctx.r3.u32 + 15404, ctx.r4.u32);
	// stw r5,15408(r3)
	REX_STORE_U32(ctx.r3.u32 + 15408, ctx.r5.u32);
	// lfd f13,31912(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 31912);
	// stw r6,15412(r3)
	REX_STORE_U32(ctx.r3.u32 + 15412, ctx.r6.u32);
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// bne cr6,0x82358ebc
	if (!ctx.cr6.eq) goto loc_82358EBC;
	// fcmpu cr6,f4,f13
	ctx.cr6.compare(ctx.f4.f64, ctx.f13.f64);
	// bne cr6,0x82358ebc
	if (!ctx.cr6.eq) goto loc_82358EBC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f1,f5
	ctx.cr6.compare(ctx.f1.f64, ctx.f5.f64);
	// lfd f13,26664(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 26664);
	// bne cr6,0x82358e78
	if (!ctx.cr6.eq) goto loc_82358E78;
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bne cr6,0x82358e78
	if (!ctx.cr6.eq) goto loc_82358E78;
	// fcmpu cr6,f7,f13
	ctx.cr6.compare(ctx.f7.f64, ctx.f13.f64);
	// fmr f2,f6
	ctx.f2.f64 = ctx.f6.f64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bne cr6,0x82358e5c
	if (!ctx.cr6.eq) goto loc_82358E5C;
	// bl 0x82353288
	ctx.lr = 0x82358E48;
	sub_82353288(ctx, base);
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
loc_82358E5C:
	// fmr f3,f7
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f7.f64;
	// bl 0x82353f98
	ctx.lr = 0x82358E64;
	sub_82353F98(ctx, base);
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
loc_82358E78:
	// fcmpu cr6,f7,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f7.f64, ctx.f13.f64);
	// fmr f4,f6
	ctx.f4.f64 = ctx.f6.f64;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// bne cr6,0x82358ea0
	if (!ctx.cr6.eq) goto loc_82358EA0;
	// bl 0x82355a20
	ctx.lr = 0x82358E8C;
	sub_82355A20(ctx, base);
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
loc_82358EA0:
	// fmr f5,f7
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f7.f64;
	// bl 0x82356d58
	ctx.lr = 0x82358EA8;
	sub_82356D58(ctx, base);
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
loc_82358EBC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f5,f3
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f3.f64;
	// fmr f3,f0
	ctx.f3.f64 = ctx.f0.f64;
	// lfd f13,26664(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 26664);
	// fcmpu cr6,f7,f13
	ctx.cr6.compare(ctx.f7.f64, ctx.f13.f64);
	// bl 0x82358928
	ctx.lr = 0x82358ED4;
	sub_82358928(ctx, base);
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
loc_82358EE8:
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
}

DEFINE_REX_FUNC(sub_8235CCE0) {
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
	ctx.lr = 0x8235CCE8;
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
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bgt cr6,0x8235cda8
	if (ctx.cr6.gt) goto loc_8235CDA8;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8235d8e0
	if (!ctx.cr6.gt) goto loc_8235D8E0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// lfd f0,4000(r8)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 4000);
	// fsubs f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fadd f10,f1,f0
	ctx.f10.f64 = ctx.f1.f64 + ctx.f0.f64;
	// fadd f9,f12,f0
	ctx.f9.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fadd f8,f11,f0
	ctx.f8.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fctiwz f7,f10
	ctx.f7.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f6,f9
	ctx.f6.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// fctiwz f5,f8
	ctx.f5.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f5,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f5.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_8235CD70:
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r8,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stwx r9,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stwx r7,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stwx r9,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8235cd70
	if (ctx.cr6.lt) goto loc_8235CD70;
	// b 0x8235d8e0
	goto loc_8235D8E0;
loc_8235CDA8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16896);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// blt cr6,0x8235ce28
	if (ctx.cr6.lt) goto loc_8235CE28;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8235d8e0
	if (!ctx.cr6.gt) goto loc_8235D8E0;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfd f0,4000(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 4000);
	// fadd f0,f31,f0
	ctx.f0.f64 = f31.f64 + ctx.f0.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_8235CDE4:
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r7,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stwx r9,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r5,28(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r8,-1
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// stwx r4,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r4.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stwx r9,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8235cde4
	if (ctx.cr6.lt) goto loc_8235CDE4;
	// b 0x8235d8e0
	goto loc_8235D8E0;
loc_8235CE28:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,-28656(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -28656);
	// fmul f1,f3,f0
	ctx.f1.f64 = ctx.f3.f64 * ctx.f0.f64;
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f29,f9,f10
	f29.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// bl 0x822d8d78
	ctx.lr = 0x8235CE6C;
	sub_822D8D78(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// fcmpu cr6,f10,f29
	ctx.cr6.compare(ctx.f10.f64, f29.f64);
	// lfd f8,88(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fneg f12,f6
	ctx.f12.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// bge cr6,0x8235ce9c
	if (!ctx.cr6.lt) goto loc_8235CE9C;
	// fmuls f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// b 0x8235ceb8
	goto loc_8235CEB8;
loc_8235CE9C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fneg f0,f11
	ctx.f0.u64 = ctx.f11.u64 ^ 0x8000000000000000;
loc_8235CEB8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f11,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(f30.f64 - ctx.f0.f64));
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lfd f0,4000(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 4000);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// fadd f13,f31,f0
	ctx.f13.f64 = f31.f64 + ctx.f0.f64;
	// lfd f8,80(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// fctiwz f9,f13
	ctx.f9.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// frsp f13,f7
	ctx.f13.f64 = double(float(ctx.f7.f64));
	// fcmpu cr6,f30,f13
	ctx.cr6.compare(f30.f64, ctx.f13.f64);
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f6,88(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fadds f12,f4,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// bgt cr6,0x8235cf10
	if (ctx.cr6.gt) goto loc_8235CF10;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
loc_8235CF10:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r3,4
	ctx.r3.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,-4
	ctx.r4.s64 = -4;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x8235d014
	if (ctx.cr6.lt) goto loc_8235D014;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8235CF3C:
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r29,r10,1
	r29.s64 = ctx.r10.s64 + 1;
	// extsw r30,r30
	r30.s64 = r30.s32;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r30,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r30.u64);
	// extsw r30,r29
	r30.s64 = r29.s32;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r30,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r30.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// lfd f5,96(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// lfd f3,104(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// frsp f13,f6
	ctx.f13.f64 = double(float(ctx.f6.f64));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// frsp f9,f4
	ctx.f9.f64 = double(float(ctx.f4.f64));
	// fsubs f6,f13,f30
	ctx.f6.f64 = double(float(ctx.f13.f64 - f30.f64));
	// frsp f8,f2
	ctx.f8.f64 = double(float(ctx.f2.f64));
	// fsubs f1,f7,f30
	ctx.f1.f64 = double(float(ctx.f7.f64 - f30.f64));
	// fsubs f5,f9,f30
	ctx.f5.f64 = double(float(ctx.f9.f64 - f30.f64));
	// fmadds f2,f6,f10,f31
	ctx.f2.f64 = double(float(std::fma(ctx.f6.f64, ctx.f10.f64, f31.f64)));
	// fsubs f4,f8,f30
	ctx.f4.f64 = double(float(ctx.f8.f64 - f30.f64));
	// fmadds f7,f1,f10,f31
	ctx.f7.f64 = double(float(std::fma(ctx.f1.f64, ctx.f10.f64, f31.f64)));
	// fmadds f1,f5,f10,f31
	ctx.f1.f64 = double(float(std::fma(ctx.f5.f64, ctx.f10.f64, f31.f64)));
	// fadd f8,f2,f0
	ctx.f8.f64 = ctx.f2.f64 + ctx.f0.f64;
	// fmadds f13,f4,f10,f31
	ctx.f13.f64 = double(float(std::fma(ctx.f4.f64, ctx.f10.f64, f31.f64)));
	// fadd f3,f7,f0
	ctx.f3.f64 = ctx.f7.f64 + ctx.f0.f64;
	// fadd f7,f1,f0
	ctx.f7.f64 = ctx.f1.f64 + ctx.f0.f64;
	// fctiwz f5,f8
	ctx.f5.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f5,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.f5.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// fadd f6,f13,f0
	ctx.f6.f64 = ctx.f13.f64 + ctx.f0.f64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// fctiwz f4,f7
	ctx.f4.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfiwx f4,r7,r3
	REX_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.f4.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// fctiwz f9,f3
	ctx.f9.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// fctiwz f3,f6
	ctx.f3.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f3,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.f3.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stfiwx f9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.f9.u32);
	// blt cr6,0x8235cf3c
	if (ctx.cr6.lt) goto loc_8235CF3C;
loc_8235D014:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235d060
	if (!ctx.cr6.lt) goto loc_8235D060;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8235D028:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fsubs f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 - f30.f64));
	// fmadds f6,f7,f10,f31
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f10.f64, f31.f64)));
	// fadd f5,f6,f0
	ctx.f5.f64 = ctx.f6.f64 + ctx.f0.f64;
	// fctiwz f4,f5
	ctx.f4.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfiwx f4,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.f4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8235d028
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235D028;
loc_8235D060:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// frsp f13,f9
	ctx.f13.f64 = double(float(ctx.f9.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bgt cr6,0x8235d084
	if (ctx.cr6.gt) goto loc_8235D084;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
loc_8235D084:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235d130
	if (!ctx.cr6.lt) goto loc_8235D130;
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8235d0f8
	if (ctx.cr6.lt) goto loc_8235D0F8;
	// fadd f13,f12,f0
	ctx.f13.f64 = ctx.f12.f64 + ctx.f0.f64;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fctiwz f9,f13
	ctx.f9.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f9.u64);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8235D0BC:
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stwx r9,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r9,-4(r7)
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r9.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stwx r9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// blt cr6,0x8235d0bc
	if (ctx.cr6.lt) goto loc_8235D0BC;
loc_8235D0F8:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235d130
	if (!ctx.cr6.lt) goto loc_8235D130;
	// fadd f13,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f12.f64 + ctx.f0.f64;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8235D120:
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8235d120
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235D120;
loc_8235D130:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lfs f9,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f9.f64 = double(temp.f32);
	// bge cr6,0x8235d178
	if (!ctx.cr6.lt) goto loc_8235D178;
	// fadds f13,f31,f9
	ctx.f13.f64 = double(float(f31.f64 + ctx.f9.f64));
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fadd f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f8,f12
	ctx.f8.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f8.u64);
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8235D15C:
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8235d15c
	if (ctx.cr6.lt) goto loc_8235D15C;
loc_8235D178:
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f30,f13
	ctx.cr6.compare(f30.f64, ctx.f13.f64);
	// bgt cr6,0x8235d198
	if (ctx.cr6.gt) goto loc_8235D198;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
loc_8235D198:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x8235d204
	if (ctx.cr6.lt) goto loc_8235D204;
	// fadd f13,f31,f0
	ctx.f13.f64 = f31.f64 + ctx.f0.f64;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r10,0
	ctx.r10.s64 = 0;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8235D1C8:
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stwx r9,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r9,-4(r7)
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r9.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stwx r9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// blt cr6,0x8235d1c8
	if (ctx.cr6.lt) goto loc_8235D1C8;
loc_8235D204:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235d23c
	if (!ctx.cr6.lt) goto loc_8235D23C;
	// fadd f13,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64 + ctx.f0.f64;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8235D22C:
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8235d22c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235D22C;
loc_8235D23C:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bgt cr6,0x8235d260
	if (ctx.cr6.gt) goto loc_8235D260;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
loc_8235D260:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235d3b8
	if (!ctx.cr6.lt) goto loc_8235D3B8;
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8235d368
	if (ctx.cr6.lt) goto loc_8235D368;
	// fdivs f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8235D290:
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// std r8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// addi r29,r10,1
	r29.s64 = ctx.r10.s64 + 1;
	// extsw r30,r30
	r30.s64 = r30.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r30,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r30.u64);
	// extsw r30,r29
	r30.s64 = r29.s32;
	// std r8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f8,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r30,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, r30.u64);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// lfd f12,104(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// frsp f1,f6
	ctx.f1.f64 = double(float(ctx.f6.f64));
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfd f7,88(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// lfd f4,80(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// fsubs f7,f1,f30
	ctx.f7.f64 = double(float(ctx.f1.f64 - f30.f64));
	// frsp f2,f11
	ctx.f2.f64 = double(float(ctx.f11.f64));
	// frsp f12,f5
	ctx.f12.f64 = double(float(ctx.f5.f64));
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// fnmsubs f3,f7,f13,f31
	ctx.f3.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f13.f64, -f31.f64)));
	// fsubs f8,f2,f30
	ctx.f8.f64 = double(float(ctx.f2.f64 - f30.f64));
	// fsubs f6,f12,f30
	ctx.f6.f64 = double(float(ctx.f12.f64 - f30.f64));
	// fsubs f5,f11,f30
	ctx.f5.f64 = double(float(ctx.f11.f64 - f30.f64));
	// fadd f11,f3,f0
	ctx.f11.f64 = ctx.f3.f64 + ctx.f0.f64;
	// fnmsubs f4,f8,f13,f31
	ctx.f4.f64 = double(float(-std::fma(ctx.f8.f64, ctx.f13.f64, -f31.f64)));
	// fnmsubs f2,f6,f13,f31
	ctx.f2.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f13.f64, -f31.f64)));
	// fnmsubs f1,f5,f13,f31
	ctx.f1.f64 = double(float(-std::fma(ctx.f5.f64, ctx.f13.f64, -f31.f64)));
	// fadd f12,f4,f0
	ctx.f12.f64 = ctx.f4.f64 + ctx.f0.f64;
	// fadd f8,f2,f0
	ctx.f8.f64 = ctx.f2.f64 + ctx.f0.f64;
	// fadd f7,f1,f0
	ctx.f7.f64 = ctx.f1.f64 + ctx.f0.f64;
	// fctiwz f4,f11
	ctx.f4.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// fctiwz f6,f12
	ctx.f6.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f6,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.f6.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// fctiwz f5,f8
	ctx.f5.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f5,r7,r3
	REX_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.f5.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stfiwx f4,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.f4.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// fctiwz f3,f7
	ctx.f3.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stfiwx f3,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.f3.u32);
	// blt cr6,0x8235d290
	if (ctx.cr6.lt) goto loc_8235D290;
loc_8235D368:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235d3b8
	if (!ctx.cr6.lt) goto loc_8235D3B8;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// fdivs f13,f9,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8235D380:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f12,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// fsubs f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 - f30.f64));
	// fnmsubs f6,f7,f13,f31
	ctx.f6.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f13.f64, -f31.f64)));
	// fadd f5,f6,f0
	ctx.f5.f64 = ctx.f6.f64 + ctx.f0.f64;
	// fctiwz f4,f5
	ctx.f4.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfiwx f4,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.f4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8235d380
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235D380;
loc_8235D3B8:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8235d3f4
	if (!ctx.cr6.lt) goto loc_8235D3F4;
	// fadd f13,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64 + ctx.f0.f64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8235D3D8:
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8235d3d8
	if (ctx.cr6.lt) goto loc_8235D3D8;
loc_8235D3F4:
	// fcmpu cr6,f10,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, f29.f64);
	// bge cr6,0x8235d418
	if (!ctx.cr6.lt) goto loc_8235D418;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// b 0x8235d430
	goto loc_8235D430;
loc_8235D418:
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
loc_8235D430:
	// fadd f12,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = f31.f64 + ctx.f0.f64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// fmuls f11,f13,f10
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// fctiwz f8,f12
	ctx.f8.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f8.u64);
	// fsubs f12,f30,f11
	ctx.f12.f64 = double(float(f30.f64 - ctx.f11.f64));
	// lfd f6,88(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f7,96(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// frsp f13,f4
	ctx.f13.f64 = double(float(ctx.f4.f64));
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// lfd f2,104(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fadds f11,f11,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// bgt cr6,0x8235d498
	if (ctx.cr6.gt) goto loc_8235D498;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_8235D498:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x8235d508
	if (ctx.cr6.lt) goto loc_8235D508;
	// fsubs f13,f31,f9
	ctx.f13.f64 = double(float(f31.f64 - ctx.f9.f64));
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r10,0
	ctx.r10.s64 = 0;
	// fadd f8,f13,f0
	ctx.f8.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f7.u64);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8235D4CC:
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stwx r9,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r9,-4(r7)
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r9.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stwx r9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// blt cr6,0x8235d4cc
	if (ctx.cr6.lt) goto loc_8235D4CC;
loc_8235D508:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235d544
	if (!ctx.cr6.lt) goto loc_8235D544;
	// fsubs f13,f31,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 - ctx.f9.f64));
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fadd f8,f13,f0
	ctx.f8.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f7.u64);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8235D534:
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8235d534
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235D534;
loc_8235D544:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// frsp f13,f8
	ctx.f13.f64 = double(float(ctx.f8.f64));
	// fcmpu cr6,f30,f13
	ctx.cr6.compare(f30.f64, ctx.f13.f64);
	// bgt cr6,0x8235d568
	if (ctx.cr6.gt) goto loc_8235D568;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
loc_8235D568:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235d614
	if (!ctx.cr6.lt) goto loc_8235D614;
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8235d5dc
	if (ctx.cr6.lt) goto loc_8235D5DC;
	// fadd f13,f11,f0
	ctx.f13.f64 = ctx.f11.f64 + ctx.f0.f64;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fctiwz f8,f13
	ctx.f8.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f8.u64);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8235D5A0:
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stwx r9,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r9,-4(r7)
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r9.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stwx r9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// blt cr6,0x8235d5a0
	if (ctx.cr6.lt) goto loc_8235D5A0;
loc_8235D5DC:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235d614
	if (!ctx.cr6.lt) goto loc_8235D614;
	// fadd f13,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f11.f64 + ctx.f0.f64;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8235D604:
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8235d604
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235D604;
loc_8235D614:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8235d664
	if (!ctx.cr6.lt) goto loc_8235D664;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8235D624:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// fsubs f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 - f30.f64));
	// fmadds f6,f7,f10,f31
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f10.f64, f31.f64)));
	// fadd f5,f6,f0
	ctx.f5.f64 = ctx.f6.f64 + ctx.f0.f64;
	// fctiwz f4,f5
	ctx.f4.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfiwx f4,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.f4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8235d624
	if (ctx.cr6.lt) goto loc_8235D624;
loc_8235D664:
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f13,f11
	ctx.f13.f64 = double(float(ctx.f11.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x8235d684
	if (ctx.cr6.gt) goto loc_8235D684;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_8235D684:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x8235d6f0
	if (ctx.cr6.lt) goto loc_8235D6F0;
	// fadd f13,f31,f0
	ctx.f13.f64 = f31.f64 + ctx.f0.f64;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r10,0
	ctx.r10.s64 = 0;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8235D6B4:
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stwx r9,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r9,-4(r7)
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r9.u32);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stwx r9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// blt cr6,0x8235d6b4
	if (ctx.cr6.lt) goto loc_8235D6B4;
loc_8235D6F0:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235d728
	if (!ctx.cr6.lt) goto loc_8235D728;
	// fadd f13,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64 + ctx.f0.f64;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8235D718:
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8235d718
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235D718;
loc_8235D728:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f30,f13
	ctx.cr6.compare(f30.f64, ctx.f13.f64);
	// bgt cr6,0x8235d74c
	if (ctx.cr6.gt) goto loc_8235D74C;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
loc_8235D74C:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235d8a4
	if (!ctx.cr6.lt) goto loc_8235D8A4;
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8235d854
	if (ctx.cr6.lt) goto loc_8235D854;
	// fdivs f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8235D77C:
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// std r8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// addi r29,r10,1
	r29.s64 = ctx.r10.s64 + 1;
	// extsw r30,r30
	r30.s64 = r30.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r30,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r30.u64);
	// extsw r30,r29
	r30.s64 = r29.s32;
	// std r8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// std r30,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, r30.u64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lfd f12,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfd f7,88(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// lfd f8,96(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f4,80(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f11
	ctx.f2.f64 = double(float(ctx.f11.f64));
	// frsp f12,f5
	ctx.f12.f64 = double(float(ctx.f5.f64));
	// frsp f1,f6
	ctx.f1.f64 = double(float(ctx.f6.f64));
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// fsubs f8,f2,f30
	ctx.f8.f64 = double(float(ctx.f2.f64 - f30.f64));
	// fsubs f6,f12,f30
	ctx.f6.f64 = double(float(ctx.f12.f64 - f30.f64));
	// fsubs f7,f1,f30
	ctx.f7.f64 = double(float(ctx.f1.f64 - f30.f64));
	// fsubs f5,f11,f30
	ctx.f5.f64 = double(float(ctx.f11.f64 - f30.f64));
	// fnmsubs f4,f8,f13,f31
	ctx.f4.f64 = double(float(-std::fma(ctx.f8.f64, ctx.f13.f64, -f31.f64)));
	// fnmsubs f2,f6,f13,f31
	ctx.f2.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f13.f64, -f31.f64)));
	// fnmsubs f3,f7,f13,f31
	ctx.f3.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f13.f64, -f31.f64)));
	// fnmsubs f1,f5,f13,f31
	ctx.f1.f64 = double(float(-std::fma(ctx.f5.f64, ctx.f13.f64, -f31.f64)));
	// fadd f12,f4,f0
	ctx.f12.f64 = ctx.f4.f64 + ctx.f0.f64;
	// fadd f8,f2,f0
	ctx.f8.f64 = ctx.f2.f64 + ctx.f0.f64;
	// fadd f11,f3,f0
	ctx.f11.f64 = ctx.f3.f64 + ctx.f0.f64;
	// fadd f7,f1,f0
	ctx.f7.f64 = ctx.f1.f64 + ctx.f0.f64;
	// fctiwz f6,f12
	ctx.f6.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f6,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.f6.u32);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// fctiwz f5,f8
	ctx.f5.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f5,r7,r3
	REX_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.f5.u32);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// fctiwz f4,f11
	ctx.f4.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfiwx f4,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.f4.u32);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// fctiwz f3,f7
	ctx.f3.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stfiwx f3,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.f3.u32);
	// blt cr6,0x8235d77c
	if (ctx.cr6.lt) goto loc_8235D77C;
loc_8235D854:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235d8a4
	if (!ctx.cr6.lt) goto loc_8235D8A4;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// fdivs f13,f9,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8235D86C:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f12,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f9,f10,f30
	ctx.f9.f64 = double(float(ctx.f10.f64 - f30.f64));
	// fnmsubs f8,f9,f13,f31
	ctx.f8.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f13.f64, -f31.f64)));
	// fadd f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 + ctx.f0.f64;
	// fctiwz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfiwx f6,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.f6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8235d86c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235D86C;
loc_8235D8A4:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8235d8e0
	if (!ctx.cr6.lt) goto loc_8235D8E0;
	// fadd f0,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64 + ctx.f0.f64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8235D8C4:
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8235d8c4
	if (ctx.cr6.lt) goto loc_8235D8C4;
loc_8235D8E0:
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_8238FF78) {
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
	ctx.lr = 0x8238FF80;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// bl 0x8238fe48
	ctx.lr = 0x8238FFB0;
	sub_8238FE48(ctx, base);
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8238ffc8
	if (!ctx.cr6.eq) goto loc_8238FFC8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x823900f4
	goto loc_823900F4;
loc_8238FFC8:
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
	// extsh r30,r6
	r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x823900b4
	if (ctx.cr6.lt) goto loc_823900B4;
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
	// bge cr6,0x823900ac
	if (!ctx.cr6.lt) goto loc_823900AC;
loc_82390014:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82390040
	if (ctx.cr6.lt) goto loc_82390040;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x82390030;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82390014
	if (ctx.cr6.eq) goto loc_82390014;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x823900f4
	goto loc_823900F4;
loc_82390040:
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
loc_823900AC:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x823900f4
	goto loc_823900F4;
loc_823900B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x823900BC;
	sub_82337F50(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	r29.u64 = ctx.r11.u64 | 32768;
loc_823900C4:
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
	ctx.lr = 0x823900DC;
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
	// blt cr6,0x823900c4
	if (ctx.cr6.lt) goto loc_823900C4;
loc_823900F4:
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82390110
	if (ctx.cr6.eq) goto loc_82390110;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_82390110:
	// cmpwi cr6,r30,1099
	ctx.cr6.compare<int32_t>(r30.s32, 1099, ctx.xer);
	// beq cr6,0x82390128
	if (ctx.cr6.eq) goto loc_82390128;
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lbzx r28,r30,r27
	r28.u64 = REX_LOAD_U8(r30.u32 + r27.u32);
	// lbzx r30,r30,r11
	r30.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// b 0x82390280
	goto loc_82390280;
loc_82390128:
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
	// bge cr6,0x82390198
	if (!ctx.cr6.lt) goto loc_82390198;
loc_82390140:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390198
	if (ctx.cr6.eq) goto loc_82390198;
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
	// bge 0x82390188
	if (!ctx.cr0.lt) goto loc_82390188;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82390188;
	sub_823380C8(ctx, base);
loc_82390188:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82390140
	if (ctx.cr6.gt) goto loc_82390140;
loc_82390198:
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
	// bge 0x823901d0
	if (!ctx.cr0.lt) goto loc_823901D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823901D0;
	sub_823380C8(ctx, base);
loc_823901D0:
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// mr r28,r30
	r28.u64 = r30.u64;
	// li r30,6
	r30.s64 = 6;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x82390248
	if (!ctx.cr6.lt) goto loc_82390248;
loc_823901F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390248
	if (ctx.cr6.eq) goto loc_82390248;
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
	// bge 0x82390238
	if (!ctx.cr0.lt) goto loc_82390238;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82390238;
	sub_823380C8(ctx, base);
loc_82390238:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823901f0
	if (ctx.cr6.gt) goto loc_823901F0;
loc_82390248:
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
	// bge 0x82390280
	if (!ctx.cr0.lt) goto loc_82390280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82390280;
	sub_823380C8(ctx, base);
loc_82390280:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,244(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 244);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823902a8
	if (!ctx.cr6.gt) goto loc_823902A8;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// stb r11,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r11.u8);
	// b 0x823902c4
	goto loc_823902C4;
loc_823902A8:
	// lwz r10,240(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 240);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823902c0
	if (!ctx.cr6.lt) goto loc_823902C0;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stb r11,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r11.u8);
	// b 0x823902c4
	goto loc_823902C4;
loc_823902C0:
	// stb r11,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r11.u8);
loc_823902C4:
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lwz r10,244(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 244);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823902ec
	if (!ctx.cr6.gt) goto loc_823902EC;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// stb r11,1(r25)
	REX_STORE_U8(r25.u32 + 1, ctx.r11.u8);
	// b 0x82390308
	goto loc_82390308;
loc_823902EC:
	// lwz r10,240(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 240);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82390304
	if (!ctx.cr6.lt) goto loc_82390304;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stb r11,1(r25)
	REX_STORE_U8(r25.u32 + 1, ctx.r11.u8);
	// b 0x82390308
	goto loc_82390308;
loc_82390304:
	// stb r11,1(r25)
	REX_STORE_U8(r25.u32 + 1, ctx.r11.u8);
loc_82390308:
	// lwz r11,456(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 456);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r10,336(r26)
	REX_STORE_U32(r26.u32 + 336, ctx.r10.u32);
	// bne cr6,0x823903ec
	if (!ctx.cr6.eq) goto loc_823903EC;
	// lbz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8239033c
	if (!ctx.cr6.eq) goto loc_8239033C;
	// lbz r11,1(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 1);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823903ec
	if (ctx.cr6.eq) goto loc_823903EC;
loc_8239033C:
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge cr6,0x823903b0
	if (!ctx.cr6.lt) goto loc_823903B0;
loc_82390358:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823903b0
	if (ctx.cr6.eq) goto loc_823903B0;
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
	// bge 0x823903a0
	if (!ctx.cr0.lt) goto loc_823903A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823903A0;
	sub_823380C8(ctx, base);
loc_823903A0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82390358
	if (ctx.cr6.gt) goto loc_82390358;
loc_823903B0:
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
	// bge 0x823903e8
	if (!ctx.cr0.lt) goto loc_823903E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823903E8;
	sub_823380C8(ctx, base);
loc_823903E8:
	// stw r30,336(r26)
	REX_STORE_U32(r26.u32 + 336, r30.u32);
loc_823903EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8239B148) {
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
	ctx.lr = 0x8239B150;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// lwz r8,324(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r7,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// lwz r11,20404(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20404);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// srawi r29,r23,1
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x1) != 0);
	r29.s64 = r23.s32 >> 1;
	// srawi r5,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// lwz r30,208(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r10,20400(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20400);
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// lbz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// mullw r30,r5,r30
	r30.s64 = int64_t(ctx.r5.s32) * int64_t(r30.s32);
	// lwz r5,332(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 332);
	// lwz r26,3796(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 3796);
	// lwz r28,6608(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 6608);
	// lwz r27,3792(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 3792);
	// lwz r19,340(r31)
	r19.u64 = REX_LOAD_U32(r31.u32 + 340);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r24,1772(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// add r20,r7,r10
	r20.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mr r17,r6
	r17.u64 = ctx.r6.u64;
	// lwz r6,204(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 204);
	// rotlwi r7,r9,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// srawi r3,r21,1
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1) != 0);
	ctx.r3.s64 = r21.s32 >> 1;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// lwz r4,3788(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3788);
	// add r16,r9,r7
	r16.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mullw r5,r20,r6
	ctx.r5.s64 = int64_t(r20.s32) * int64_t(ctx.r6.s32);
	// add r9,r30,r3
	ctx.r9.u64 = r30.u64 + ctx.r3.u64;
	// add r7,r5,r4
	ctx.r7.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r5,r16,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r7,r29
	ctx.r9.u64 = ctx.r7.u64 + r29.u64;
	// not r3,r22
	ctx.r3.u64 = ~r22.u64;
	// lwz r22,84(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// not r4,r23
	ctx.r4.u64 = ~r23.u64;
	// not r7,r21
	ctx.r7.u64 = ~r21.u64;
	// not r8,r8
	ctx.r8.u64 = ~ctx.r8.u64;
	// add r30,r26,r11
	r30.u64 = r26.u64 + ctx.r11.u64;
	// add r23,r5,r28
	r23.u64 = ctx.r5.u64 + r28.u64;
	// add r28,r9,r10
	r28.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// clrlwi r21,r4,31
	r21.u64 = ctx.r4.u32 & 0x1;
	// clrlwi r20,r3,31
	r20.u64 = ctx.r3.u32 & 0x1;
	// clrlwi r15,r7,31
	r15.u64 = ctx.r7.u32 & 0x1;
	// clrlwi r14,r8,31
	r14.u64 = ctx.r8.u32 & 0x1;
	// add r16,r27,r11
	r16.u64 = r27.u64 + ctx.r11.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x8239b230
	if (ctx.cr6.eq) goto loc_8239B230;
	// lbz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U8(r18.u32 + 0);
	// clrlwi r19,r11,29
	r19.u64 = ctx.r11.u32 & 0x7;
loc_8239B230:
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239b254
	if (ctx.cr6.eq) goto loc_8239B254;
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// rlwinm r11,r11,10,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3;
	// addi r10,r11,735
	ctx.r10.s64 = ctx.r11.s64 + 735;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r22,r11,r31
	r22.u64 = ctx.r11.u64 + r31.u64;
	// b 0x8239b258
	goto loc_8239B258;
loc_8239B254:
	// addi r22,r31,2916
	r22.s64 = r31.s64 + 2916;
loc_8239B258:
	// lbz r11,19(r18)
	ctx.r11.u64 = REX_LOAD_U8(r18.u32 + 19);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239b598
	if (ctx.cr6.eq) goto loc_8239B598;
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239b2e8
	if (ctx.cr6.eq) goto loc_8239B2E8;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239b29c
	if (!ctx.cr0.lt) goto loc_8239B29C;
	// bl 0x823380c8
	ctx.lr = 0x8239B29C;
	sub_823380C8(ctx, base);
loc_8239B29C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8239b2ac
	if (!ctx.cr6.eq) goto loc_8239B2AC;
	// li r19,0
	r19.s64 = 0;
	// b 0x8239b2f0
	goto loc_8239B2F0;
loc_8239B2AC:
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239b2d4
	if (!ctx.cr0.lt) goto loc_8239B2D4;
	// bl 0x823380c8
	ctx.lr = 0x8239B2D4;
	sub_823380C8(ctx, base);
loc_8239B2D4:
	// cntlzw r11,r30
	ctx.r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r19,r11,1
	r19.s64 = ctx.r11.s64 + 1;
	// b 0x8239b338
	goto loc_8239B338;
loc_8239B2E8:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x8239b338
	if (!ctx.cr6.eq) goto loc_8239B338;
loc_8239B2F0:
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r24,1772(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r5,1836(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1836);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239B314;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3200);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r6,1944(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1944);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239B338;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239B338:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(r19.s32, 1, ctx.xer);
	// bne cr6,0x8239b450
	if (!ctx.cr6.eq) goto loc_8239B450;
	// lwz r24,1768(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822d5870
	ctx.lr = 0x8239B358;
	sub_822D5870(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239b380
	if (!ctx.cr0.lt) goto loc_8239B380;
	// bl 0x823380c8
	ctx.lr = 0x8239B380;
	sub_823380C8(ctx, base);
loc_8239B380:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8239b40c
	if (ctx.cr6.eq) goto loc_8239B40C;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239b3b0
	if (!ctx.cr0.lt) goto loc_8239B3B0;
	// bl 0x823380c8
	ctx.lr = 0x8239B3B0;
	sub_823380C8(ctx, base);
loc_8239B3B0:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r10,3192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
	// bctrl 
	ctx.lr = 0x8239B3E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3204);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239B404;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8239b450
	if (ctx.cr6.eq) goto loc_8239B450;
loc_8239B40C:
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239B42C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3204);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239B450;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239B450:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(r19.s32, 2, ctx.xer);
	// bne cr6,0x8239b568
	if (!ctx.cr6.eq) goto loc_8239B568;
	// lwz r24,1768(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822d5870
	ctx.lr = 0x8239B470;
	sub_822D5870(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239b498
	if (!ctx.cr0.lt) goto loc_8239B498;
	// bl 0x823380c8
	ctx.lr = 0x8239B498;
	sub_823380C8(ctx, base);
loc_8239B498:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8239b524
	if (ctx.cr6.eq) goto loc_8239B524;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239b4c8
	if (!ctx.cr0.lt) goto loc_8239B4C8;
	// bl 0x823380c8
	ctx.lr = 0x8239B4C8;
	sub_823380C8(ctx, base);
loc_8239B4C8:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r10,3192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r5,1860(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1860);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
	// bctrl 
	ctx.lr = 0x8239B4F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3208);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239B51C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8239b568
	if (ctx.cr6.eq) goto loc_8239B568;
loc_8239B524:
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,1860(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1860);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239B544;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3208);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239B568;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239B568:
	// lwz r11,3116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3116);
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// lwz r7,204(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r10,336(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 336);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239B594;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8239b5bc
	goto loc_8239B5BC;
loc_8239B598:
	// lwz r11,3120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3120);
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// lwz r9,336(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 336);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239B5BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239B5BC:
	// lbz r11,18(r18)
	ctx.r11.u64 = REX_LOAD_U8(r18.u32 + 18);
	// addi r27,r25,8
	r27.s64 = r25.s64 + 8;
	// addi r26,r28,8
	r26.s64 = r28.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239b904
	if (ctx.cr6.eq) goto loc_8239B904;
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239b654
	if (ctx.cr6.eq) goto loc_8239B654;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239b608
	if (!ctx.cr0.lt) goto loc_8239B608;
	// bl 0x823380c8
	ctx.lr = 0x8239B608;
	sub_823380C8(ctx, base);
loc_8239B608:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8239b618
	if (!ctx.cr6.eq) goto loc_8239B618;
	// li r19,0
	r19.s64 = 0;
	// b 0x8239b65c
	goto loc_8239B65C;
loc_8239B618:
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239b640
	if (!ctx.cr0.lt) goto loc_8239B640;
	// bl 0x823380c8
	ctx.lr = 0x8239B640;
	sub_823380C8(ctx, base);
loc_8239B640:
	// cntlzw r11,r30
	ctx.r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r19,r11,1
	r19.s64 = ctx.r11.s64 + 1;
	// b 0x8239b6a4
	goto loc_8239B6A4;
loc_8239B654:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x8239b6a4
	if (!ctx.cr6.eq) goto loc_8239B6A4;
loc_8239B65C:
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r24,1772(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r5,1836(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1836);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239B680;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3200);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r6,1944(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1944);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239B6A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239B6A4:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(r19.s32, 1, ctx.xer);
	// bne cr6,0x8239b7bc
	if (!ctx.cr6.eq) goto loc_8239B7BC;
	// lwz r24,1768(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822d5870
	ctx.lr = 0x8239B6C4;
	sub_822D5870(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239b6ec
	if (!ctx.cr0.lt) goto loc_8239B6EC;
	// bl 0x823380c8
	ctx.lr = 0x8239B6EC;
	sub_823380C8(ctx, base);
loc_8239B6EC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8239b778
	if (ctx.cr6.eq) goto loc_8239B778;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239b71c
	if (!ctx.cr0.lt) goto loc_8239B71C;
	// bl 0x823380c8
	ctx.lr = 0x8239B71C;
	sub_823380C8(ctx, base);
loc_8239B71C:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r10,3192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
	// bctrl 
	ctx.lr = 0x8239B74C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3204);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239B770;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8239b7bc
	if (ctx.cr6.eq) goto loc_8239B7BC;
loc_8239B778:
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239B798;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3204);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239B7BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239B7BC:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(r19.s32, 2, ctx.xer);
	// bne cr6,0x8239b8d4
	if (!ctx.cr6.eq) goto loc_8239B8D4;
	// lwz r24,1768(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822d5870
	ctx.lr = 0x8239B7DC;
	sub_822D5870(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239b804
	if (!ctx.cr0.lt) goto loc_8239B804;
	// bl 0x823380c8
	ctx.lr = 0x8239B804;
	sub_823380C8(ctx, base);
loc_8239B804:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8239b890
	if (ctx.cr6.eq) goto loc_8239B890;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239b834
	if (!ctx.cr0.lt) goto loc_8239B834;
	// bl 0x823380c8
	ctx.lr = 0x8239B834;
	sub_823380C8(ctx, base);
loc_8239B834:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r10,3192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r5,1860(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1860);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
	// bctrl 
	ctx.lr = 0x8239B864;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3208);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239B888;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8239b8d4
	if (ctx.cr6.eq) goto loc_8239B8D4;
loc_8239B890:
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,1860(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1860);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239B8B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3208);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239B8D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239B8D4:
	// lwz r11,3116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3116);
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// lwz r10,336(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 336);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r7,204(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239B900;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8239b92c
	goto loc_8239B92C;
loc_8239B904:
	// lwz r11,3120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3120);
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// lwz r9,336(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 336);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r6,204(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239B92C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239B92C:
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// lbz r10,17(r18)
	ctx.r10.u64 = REX_LOAD_U8(r18.u32 + 17);
	// add r28,r11,r27
	r28.u64 = ctx.r11.u64 + r27.u64;
	// add r27,r11,r26
	r27.u64 = ctx.r11.u64 + r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239bc78
	if (ctx.cr6.eq) goto loc_8239BC78;
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239b9c8
	if (ctx.cr6.eq) goto loc_8239B9C8;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239b97c
	if (!ctx.cr0.lt) goto loc_8239B97C;
	// bl 0x823380c8
	ctx.lr = 0x8239B97C;
	sub_823380C8(ctx, base);
loc_8239B97C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8239b98c
	if (!ctx.cr6.eq) goto loc_8239B98C;
	// li r19,0
	r19.s64 = 0;
	// b 0x8239b9d0
	goto loc_8239B9D0;
loc_8239B98C:
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239b9b4
	if (!ctx.cr0.lt) goto loc_8239B9B4;
	// bl 0x823380c8
	ctx.lr = 0x8239B9B4;
	sub_823380C8(ctx, base);
loc_8239B9B4:
	// cntlzw r11,r30
	ctx.r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r19,r11,1
	r19.s64 = ctx.r11.s64 + 1;
	// b 0x8239ba18
	goto loc_8239BA18;
loc_8239B9C8:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x8239ba18
	if (!ctx.cr6.eq) goto loc_8239BA18;
loc_8239B9D0:
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r24,1772(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r5,1836(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1836);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239B9F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3200);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r6,1944(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1944);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239BA18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239BA18:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(r19.s32, 1, ctx.xer);
	// bne cr6,0x8239bb30
	if (!ctx.cr6.eq) goto loc_8239BB30;
	// lwz r24,1768(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822d5870
	ctx.lr = 0x8239BA38;
	sub_822D5870(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239ba60
	if (!ctx.cr0.lt) goto loc_8239BA60;
	// bl 0x823380c8
	ctx.lr = 0x8239BA60;
	sub_823380C8(ctx, base);
loc_8239BA60:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8239baec
	if (ctx.cr6.eq) goto loc_8239BAEC;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239ba90
	if (!ctx.cr0.lt) goto loc_8239BA90;
	// bl 0x823380c8
	ctx.lr = 0x8239BA90;
	sub_823380C8(ctx, base);
loc_8239BA90:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r10,3192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
	// bctrl 
	ctx.lr = 0x8239BAC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3204);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239BAE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8239bb30
	if (ctx.cr6.eq) goto loc_8239BB30;
loc_8239BAEC:
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239BB0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3204);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239BB30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239BB30:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(r19.s32, 2, ctx.xer);
	// bne cr6,0x8239bc48
	if (!ctx.cr6.eq) goto loc_8239BC48;
	// lwz r24,1768(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822d5870
	ctx.lr = 0x8239BB50;
	sub_822D5870(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239bb78
	if (!ctx.cr0.lt) goto loc_8239BB78;
	// bl 0x823380c8
	ctx.lr = 0x8239BB78;
	sub_823380C8(ctx, base);
loc_8239BB78:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8239bc04
	if (ctx.cr6.eq) goto loc_8239BC04;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239bba8
	if (!ctx.cr0.lt) goto loc_8239BBA8;
	// bl 0x823380c8
	ctx.lr = 0x8239BBA8;
	sub_823380C8(ctx, base);
loc_8239BBA8:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r10,3192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r5,1860(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1860);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
	// bctrl 
	ctx.lr = 0x8239BBD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3208);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239BBFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8239bc48
	if (ctx.cr6.eq) goto loc_8239BC48;
loc_8239BC04:
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,1860(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1860);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239BC24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3208);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239BC48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239BC48:
	// lwz r11,3116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3116);
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// lwz r10,336(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 336);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r7,204(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239BC74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8239bca0
	goto loc_8239BCA0;
loc_8239BC78:
	// lwz r11,3120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3120);
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// lwz r9,336(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 336);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r6,204(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239BCA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239BCA0:
	// lbz r11,16(r18)
	ctx.r11.u64 = REX_LOAD_U8(r18.u32 + 16);
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239bfe8
	if (ctx.cr6.eq) goto loc_8239BFE8;
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239bd38
	if (ctx.cr6.eq) goto loc_8239BD38;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239bcec
	if (!ctx.cr0.lt) goto loc_8239BCEC;
	// bl 0x823380c8
	ctx.lr = 0x8239BCEC;
	sub_823380C8(ctx, base);
loc_8239BCEC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8239bcfc
	if (!ctx.cr6.eq) goto loc_8239BCFC;
	// li r19,0
	r19.s64 = 0;
	// b 0x8239bd40
	goto loc_8239BD40;
loc_8239BCFC:
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239bd24
	if (!ctx.cr0.lt) goto loc_8239BD24;
	// bl 0x823380c8
	ctx.lr = 0x8239BD24;
	sub_823380C8(ctx, base);
loc_8239BD24:
	// cntlzw r11,r30
	ctx.r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r19,r11,1
	r19.s64 = ctx.r11.s64 + 1;
	// b 0x8239bd88
	goto loc_8239BD88;
loc_8239BD38:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x8239bd88
	if (!ctx.cr6.eq) goto loc_8239BD88;
loc_8239BD40:
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r24,1772(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r5,1836(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1836);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239BD64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3200);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r6,1944(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1944);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239BD88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239BD88:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(r19.s32, 1, ctx.xer);
	// bne cr6,0x8239bea0
	if (!ctx.cr6.eq) goto loc_8239BEA0;
	// lwz r24,1768(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822d5870
	ctx.lr = 0x8239BDA8;
	sub_822D5870(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239bdd0
	if (!ctx.cr0.lt) goto loc_8239BDD0;
	// bl 0x823380c8
	ctx.lr = 0x8239BDD0;
	sub_823380C8(ctx, base);
loc_8239BDD0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8239be5c
	if (ctx.cr6.eq) goto loc_8239BE5C;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239be00
	if (!ctx.cr0.lt) goto loc_8239BE00;
	// bl 0x823380c8
	ctx.lr = 0x8239BE00;
	sub_823380C8(ctx, base);
loc_8239BE00:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r10,3192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
	// bctrl 
	ctx.lr = 0x8239BE30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3204);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239BE54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8239bea0
	if (ctx.cr6.eq) goto loc_8239BEA0;
loc_8239BE5C:
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239BE7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3204);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239BEA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239BEA0:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(r19.s32, 2, ctx.xer);
	// bne cr6,0x8239bfb8
	if (!ctx.cr6.eq) goto loc_8239BFB8;
	// lwz r24,1768(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822d5870
	ctx.lr = 0x8239BEC0;
	sub_822D5870(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239bee8
	if (!ctx.cr0.lt) goto loc_8239BEE8;
	// bl 0x823380c8
	ctx.lr = 0x8239BEE8;
	sub_823380C8(ctx, base);
loc_8239BEE8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8239bf74
	if (ctx.cr6.eq) goto loc_8239BF74;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239bf18
	if (!ctx.cr0.lt) goto loc_8239BF18;
	// bl 0x823380c8
	ctx.lr = 0x8239BF18;
	sub_823380C8(ctx, base);
loc_8239BF18:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r10,3192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r5,1860(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1860);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
	// bctrl 
	ctx.lr = 0x8239BF48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3208);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239BF6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8239bfb8
	if (ctx.cr6.eq) goto loc_8239BFB8;
loc_8239BF74:
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,1860(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1860);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239BF94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3208);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239BFB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239BFB8:
	// lwz r11,3116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3116);
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// lwz r10,336(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 336);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r7,204(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239BFE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8239c010
	goto loc_8239C010;
loc_8239BFE8:
	// lwz r11,3120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3120);
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// lwz r9,336(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 336);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r6,204(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239C010;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239C010:
	// lbz r11,15(r18)
	ctx.r11.u64 = REX_LOAD_U8(r18.u32 + 15);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239c350
	if (ctx.cr6.eq) goto loc_8239C350;
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239c0a0
	if (ctx.cr6.eq) goto loc_8239C0A0;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239c054
	if (!ctx.cr0.lt) goto loc_8239C054;
	// bl 0x823380c8
	ctx.lr = 0x8239C054;
	sub_823380C8(ctx, base);
loc_8239C054:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8239c064
	if (!ctx.cr6.eq) goto loc_8239C064;
	// li r19,0
	r19.s64 = 0;
	// b 0x8239c0a8
	goto loc_8239C0A8;
loc_8239C064:
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239c08c
	if (!ctx.cr0.lt) goto loc_8239C08C;
	// bl 0x823380c8
	ctx.lr = 0x8239C08C;
	sub_823380C8(ctx, base);
loc_8239C08C:
	// cntlzw r11,r30
	ctx.r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r19,r11,1
	r19.s64 = ctx.r11.s64 + 1;
	// b 0x8239c0f0
	goto loc_8239C0F0;
loc_8239C0A0:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x8239c0f0
	if (!ctx.cr6.eq) goto loc_8239C0F0;
loc_8239C0A8:
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r24,1772(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r5,1836(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1836);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239C0CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3200);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r6,1944(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1944);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239C0F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239C0F0:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(r19.s32, 1, ctx.xer);
	// bne cr6,0x8239c208
	if (!ctx.cr6.eq) goto loc_8239C208;
	// lwz r24,1768(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822d5870
	ctx.lr = 0x8239C110;
	sub_822D5870(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239c138
	if (!ctx.cr0.lt) goto loc_8239C138;
	// bl 0x823380c8
	ctx.lr = 0x8239C138;
	sub_823380C8(ctx, base);
loc_8239C138:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8239c1c4
	if (ctx.cr6.eq) goto loc_8239C1C4;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239c168
	if (!ctx.cr0.lt) goto loc_8239C168;
	// bl 0x823380c8
	ctx.lr = 0x8239C168;
	sub_823380C8(ctx, base);
loc_8239C168:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r10,3192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
	// bctrl 
	ctx.lr = 0x8239C198;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3204);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239C1BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8239c208
	if (ctx.cr6.eq) goto loc_8239C208;
loc_8239C1C4:
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239C1E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3204);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239C208;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239C208:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(r19.s32, 2, ctx.xer);
	// bne cr6,0x8239c320
	if (!ctx.cr6.eq) goto loc_8239C320;
	// lwz r24,1768(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822d5870
	ctx.lr = 0x8239C228;
	sub_822D5870(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239c250
	if (!ctx.cr0.lt) goto loc_8239C250;
	// bl 0x823380c8
	ctx.lr = 0x8239C250;
	sub_823380C8(ctx, base);
loc_8239C250:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8239c2dc
	if (ctx.cr6.eq) goto loc_8239C2DC;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239c280
	if (!ctx.cr0.lt) goto loc_8239C280;
	// bl 0x823380c8
	ctx.lr = 0x8239C280;
	sub_823380C8(ctx, base);
loc_8239C280:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r10,3192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r5,1860(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1860);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
	// bctrl 
	ctx.lr = 0x8239C2B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3208);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239C2D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8239c320
	if (ctx.cr6.eq) goto loc_8239C320;
loc_8239C2DC:
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,1860(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1860);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239C2FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3208);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239C320;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239C320:
	// lwz r11,3144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3144);
	// mr r9,r14
	ctx.r9.u64 = r14.u64;
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// lwz r10,336(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 336);
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239C34C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8239c378
	goto loc_8239C378;
loc_8239C350:
	// lwz r11,3140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3140);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// lwz r9,336(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 336);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239C378;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239C378:
	// lbz r11,14(r18)
	ctx.r11.u64 = REX_LOAD_U8(r18.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239c6c0
	if (ctx.cr6.eq) goto loc_8239C6C0;
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239c408
	if (ctx.cr6.eq) goto loc_8239C408;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239c3bc
	if (!ctx.cr0.lt) goto loc_8239C3BC;
	// bl 0x823380c8
	ctx.lr = 0x8239C3BC;
	sub_823380C8(ctx, base);
loc_8239C3BC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8239c3cc
	if (!ctx.cr6.eq) goto loc_8239C3CC;
	// li r19,0
	r19.s64 = 0;
	// b 0x8239c410
	goto loc_8239C410;
loc_8239C3CC:
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239c3f4
	if (!ctx.cr0.lt) goto loc_8239C3F4;
	// bl 0x823380c8
	ctx.lr = 0x8239C3F4;
	sub_823380C8(ctx, base);
loc_8239C3F4:
	// cntlzw r11,r30
	ctx.r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r19,r11,1
	r19.s64 = ctx.r11.s64 + 1;
	// b 0x8239c458
	goto loc_8239C458;
loc_8239C408:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x8239c458
	if (!ctx.cr6.eq) goto loc_8239C458;
loc_8239C410:
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r24,1772(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r5,1836(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1836);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239C434;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3200);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r6,1944(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1944);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239C458;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239C458:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(r19.s32, 1, ctx.xer);
	// bne cr6,0x8239c570
	if (!ctx.cr6.eq) goto loc_8239C570;
	// lwz r24,1768(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822d5870
	ctx.lr = 0x8239C478;
	sub_822D5870(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239c4a0
	if (!ctx.cr0.lt) goto loc_8239C4A0;
	// bl 0x823380c8
	ctx.lr = 0x8239C4A0;
	sub_823380C8(ctx, base);
loc_8239C4A0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8239c52c
	if (ctx.cr6.eq) goto loc_8239C52C;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239c4d0
	if (!ctx.cr0.lt) goto loc_8239C4D0;
	// bl 0x823380c8
	ctx.lr = 0x8239C4D0;
	sub_823380C8(ctx, base);
loc_8239C4D0:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r10,3192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
	// bctrl 
	ctx.lr = 0x8239C500;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3204);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239C524;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8239c570
	if (ctx.cr6.eq) goto loc_8239C570;
loc_8239C52C:
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239C54C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3204);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239C570;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239C570:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(r19.s32, 2, ctx.xer);
	// bne cr6,0x8239c688
	if (!ctx.cr6.eq) goto loc_8239C688;
	// lwz r24,1768(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822d5870
	ctx.lr = 0x8239C590;
	sub_822D5870(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239c5b8
	if (!ctx.cr0.lt) goto loc_8239C5B8;
	// bl 0x823380c8
	ctx.lr = 0x8239C5B8;
	sub_823380C8(ctx, base);
loc_8239C5B8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8239c644
	if (ctx.cr6.eq) goto loc_8239C644;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8239c5e8
	if (!ctx.cr0.lt) goto loc_8239C5E8;
	// bl 0x823380c8
	ctx.lr = 0x8239C5E8;
	sub_823380C8(ctx, base);
loc_8239C5E8:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r10,3192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r5,1860(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1860);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
	// bctrl 
	ctx.lr = 0x8239C618;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3208);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239C63C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8239c688
	if (ctx.cr6.eq) goto loc_8239C688;
loc_8239C644:
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,1860(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1860);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239C664;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c6ec
	if (!ctx.cr6.eq) goto loc_8239C6EC;
	// lwz r11,3208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3208);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239C688;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239C688:
	// lwz r11,3144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3144);
	// mr r9,r14
	ctx.r9.u64 = r14.u64;
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// lwz r10,336(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 336);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r4,292(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239C6B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
loc_8239C6C0:
	// lwz r11,3140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3140);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// lwz r9,336(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 336);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r4,292(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239C6E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8239C6EC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823E5690) {
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
	ctx.lr = 0x823E5698;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e56c4
	if (ctx.cr6.eq) goto loc_823E56C4;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x823E56C0;
	sub_82413040(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_823E56C4:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e56e0
	if (ctx.cr6.eq) goto loc_823E56E0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc0b0
	ctx.lr = 0x823E56DC;
	sub_823DC0B0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_823E56E0:
	// lwz r9,156(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,104(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + r28.u64;
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + r29.u64;
	// subfe r6,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r11.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x823e5238
	ctx.lr = 0x823E570C;
	sub_823E5238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823e5744
	if (ctx.cr0.lt) goto loc_823E5744;
	// lwz r10,132(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 132);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823E573C;
	sub_822D4FA0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r11.u32);
loc_823E5744:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823E7BA0) {
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
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82226530
	ctx.lr = 0x823E7BB4;
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

DEFINE_REX_FUNC(sub_823E7F40) {
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
	// beq cr6,0x823e7f88
	if (ctx.cr6.eq) goto loc_823E7F88;
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
loc_823E7F68:
	// lfsx f13,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x823e7f7c
	if (!ctx.cr6.eq) goto loc_823E7F7C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823E7F7C:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823e7f68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E7F68;
loc_823E7F88:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82226590
	ctx.lr = 0x823E7F90;
	sub_82226590(ctx, base);
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

DEFINE_REX_FUNC(sub_823EAE78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823EAE80;
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
	// b 0x823eaea4
	goto loc_823EAEA4;
loc_823EAE98:
	// lwz r31,36(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823eaec8
	if (ctx.cr6.eq) goto loc_823EAEC8;
loc_823EAEA4:
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
	// bl 0x823e8d70
	ctx.lr = 0x823EAEBC;
	sub_823E8D70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823eae98
	if (!ctx.cr0.lt) goto loc_823EAE98;
	// b 0x823eaecc
	goto loc_823EAECC;
loc_823EAEC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EAECC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823EC430) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823ec2c8
	ctx.lr = 0x823EC450;
	sub_823EC2C8(ctx, base);
	// lwz r11,1344(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ec46c
	if (ctx.cr6.eq) goto loc_823EC46C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x823EC46C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823EC46C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8247c9b0
	ctx.lr = 0x823EC478;
	ppc_longjmp(ctx.r3.u32, ctx.r4.s32);
}

DEFINE_REX_FUNC(sub_823EE9E0) {
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
	ctx.lr = 0x823EE9E8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,24(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823eea2c
	if (!ctx.cr6.eq) goto loc_823EEA2C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EEA10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823eea24
	if (!ctx.cr6.eq) goto loc_823EEA24;
loc_823EEA18:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_823EEA24:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_823EEA2C:
	// lbz r28,0(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x823eea5c
	if (!ctx.cr0.eq) goto loc_823EEA5C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EEA4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823eea18
	if (ctx.cr6.eq) goto loc_823EEA18;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_823EEA5C:
	// lbz r30,0(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r27,r10,-1
	r27.s64 = ctx.r10.s64 + -1;
	// addi r26,r11,1
	r26.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r28,255
	ctx.cr6.compare<int32_t>(r28.s32, 255, ctx.xer);
	// bne cr6,0x823eea78
	if (!ctx.cr6.eq) goto loc_823EEA78;
	// cmpwi cr6,r30,216
	ctx.cr6.compare<int32_t>(r30.s32, 216, ctx.xer);
	// beq cr6,0x823eeaa8
	if (ctx.cr6.eq) goto loc_823EEAA8;
loc_823EEA78:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r10,53
	ctx.r10.s64 = 53;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r28,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, r28.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r30,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, r30.u32);
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823EEAA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823EEAA8:
	// stw r30,420(r29)
	REX_STORE_U32(r29.u32 + 420, r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_823F01F8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f0210
	if (ctx.cr6.eq) goto loc_823F0210;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823f0210
	if (ctx.cr6.eq) goto loc_823F0210;
	// lbz r3,29(r4)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + 29);
	// blr 
	return;
loc_823F0210:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F0430) {
	REX_FUNC_PROLOGUE();
	// lwz r11,1376(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// sth r10,1566(r3)
	REX_STORE_U16(ctx.r3.u32 + 1566, ctx.r10.u16);
	// stw r11,1376(r3)
	REX_STORE_U32(ctx.r3.u32 + 1376, ctx.r11.u32);
	// lwz r11,1372(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1372);
	// bne cr6,0x823f0458
	if (!ctx.cr6.eq) goto loc_823F0458;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// b 0x823f045c
	goto loc_823F045C;
loc_823F0458:
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
loc_823F045C:
	// stw r11,1372(r3)
	REX_STORE_U32(ctx.r3.u32 + 1372, ctx.r11.u32);
	// lbz r11,1558(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1558);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x823f0474
	if (!ctx.cr6.eq) goto loc_823F0474;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,1563(r3)
	REX_STORE_U8(ctx.r3.u32 + 1563, ctx.r10.u8);
loc_823F0474:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lbz r11,1559(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1559);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,1563(r3)
	REX_STORE_U8(ctx.r3.u32 + 1563, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F23B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bne cr6,0x823f23e4
	if (!ctx.cr6.eq) goto loc_823F23E4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r8,r11,22344
	ctx.r8.s64 = ctx.r11.s64 + 22344;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r11,22320
	r30.s64 = ctx.r11.s64 + 22320;
	// b 0x823f23f4
	goto loc_823F23F4;
loc_823F23E4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r8,r11,22288
	ctx.r8.s64 = ctx.r11.s64 + 22288;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r11,22256
	r30.s64 = ctx.r11.s64 + 22256;
loc_823F23F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// lfs f31,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// li r11,16
	ctx.r11.s64 = 16;
	// lfs f5,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f5.f64 = double(temp.f32);
	// fmr f10,f31
	ctx.f10.f64 = f31.f64;
	// fmr f7,f5
	ctx.f7.f64 = ctx.f5.f64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne cr6,0x823f2448
	if (!ctx.cr6.eq) goto loc_823F2448;
loc_823F2420:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x823f2430
	if (!ctx.cr6.lt) goto loc_823F2430;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_823F2430:
	// fcmpu cr6,f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// ble cr6,0x823f243c
	if (!ctx.cr6.gt) goto loc_823F243C;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
loc_823F243C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823f2420
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F2420;
	// b 0x823f2488
	goto loc_823F2488;
loc_823F2448:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x823f2460
	if (!ctx.cr6.lt) goto loc_823F2460;
	// fcmpu cr6,f0,f5
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// ble cr6,0x823f2460
	if (!ctx.cr6.gt) goto loc_823F2460;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_823F2460:
	// fcmpu cr6,f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// ble cr6,0x823f2474
	if (!ctx.cr6.gt) goto loc_823F2474;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x823f2474
	if (!ctx.cr6.lt) goto loc_823F2474;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
loc_823F2474:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823f2448
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F2448;
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// bne cr6,0x823f2488
	if (!ctx.cr6.eq) goto loc_823F2488;
	// fmr f7,f31
	ctx.f7.f64 = f31.f64;
loc_823F2488:
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrldi r11,r7,32
	ctx.r11.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.r11.u64);
	// lfd f0,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,32340(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32340);
	ctx.f2.f64 = double(temp.f32);
	// li r31,0
	r31.s64 = 0;
	// lfs f4,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f4.f64 = double(temp.f32);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// lfs f3,16224(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16224);
	ctx.f3.f64 = double(temp.f32);
loc_823F24BC:
	// fsubs f0,f7,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// fcmpu cr6,f0,f3
	ctx.cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// blt cr6,0x823f2628
	if (ctx.cr6.lt) goto loc_823F2628;
	// fdivs f6,f1,f0
	ctx.f6.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823f2504
	if (ctx.cr6.eq) goto loc_823F2504;
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// subf r10,r8,r30
	ctx.r10.u64 = r30.u64 - ctx.r8.u64;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
loc_823F24E8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfsx f13,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f7,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, ctx.f0.f64)));
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823f24e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F24E8;
loc_823F2504:
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bne cr6,0x823f2514
	if (!ctx.cr6.eq) goto loc_823F2514;
	// stfs f5,-40(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// stfs f31,-36(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + -36, temp.u32);
loc_823F2514:
	// li r11,16
	ctx.r11.s64 = 16;
	// fmr f9,f5
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f5.f64;
	// fmr f8,f5
	ctx.f8.f64 = ctx.f5.f64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// fmr f12,f5
	ctx.f12.f64 = ctx.f5.f64;
	// fmr f11,f5
	ctx.f11.f64 = ctx.f5.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823F2530:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fmuls f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fcmpu cr6,f13,f5
	ctx.cr6.compare(ctx.f13.f64, ctx.f5.f64);
	// bgt cr6,0x823f2560
	if (ctx.cr6.gt) goto loc_823F2560;
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bne cr6,0x823f2558
	if (!ctx.cr6.eq) goto loc_823F2558;
	// fmuls f13,f10,f4
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823f25c8
	if (!ctx.cr6.gt) goto loc_823F25C8;
loc_823F2558:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823f2598
	goto loc_823F2598;
loc_823F2560:
	// fcmpu cr6,f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// blt cr6,0x823f2588
	if (ctx.cr6.lt) goto loc_823F2588;
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bne cr6,0x823f2580
	if (!ctx.cr6.eq) goto loc_823F2580;
	// fadds f13,f7,f31
	ctx.f13.f64 = double(float(ctx.f7.f64 + f31.f64));
	// fmuls f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823f25c8
	if (!ctx.cr6.lt) goto loc_823F25C8;
loc_823F2580:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x823f2598
	goto loc_823F2598;
loc_823F2588:
	// fadds f13,f13,f4
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f13.u64);
	// lwz r11,-76(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
loc_823F2598:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x823f25c8
	if (!ctx.cr6.lt) goto loc_823F25C8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// lfsx f13,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f30,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	f30.f64 = double(temp.f32);
	// fmadds f12,f13,f13,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f12.f64)));
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 - ctx.f0.f64));
	// lfsx f30,r11,r30
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	f30.f64 = double(temp.f32);
	// fmadds f11,f30,f30,f11
	ctx.f11.f64 = double(float(std::fma(f30.f64, f30.f64, ctx.f11.f64)));
	// fmadds f9,f13,f0,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f9.f64)));
	// fmadds f8,f30,f0,f8
	ctx.f8.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, ctx.f8.f64)));
loc_823F25C8:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823f2530
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F2530;
	// fcmpu cr6,f12,f5
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f5.f64);
	// ble cr6,0x823f25e0
	if (!ctx.cr6.gt) goto loc_823F25E0;
	// fdivs f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f12.f64));
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
loc_823F25E0:
	// fcmpu cr6,f11,f5
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f5.f64);
	// ble cr6,0x823f25f0
	if (!ctx.cr6.gt) goto loc_823F25F0;
	// fdivs f0,f8,f11
	ctx.f0.f64 = double(float(ctx.f8.f64 / ctx.f11.f64));
	// fsubs f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
loc_823F25F0:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x823f2604
	if (!ctx.cr6.gt) goto loc_823F2604;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// fmr f10,f7
	ctx.f10.f64 = ctx.f7.f64;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
loc_823F2604:
	// fmuls f0,f9,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bge cr6,0x823f261c
	if (!ctx.cr6.lt) goto loc_823F261C;
	// fmuls f0,f8,f8
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// blt cr6,0x823f2628
	if (ctx.cr6.lt) goto loc_823F2628;
loc_823F261C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(r31.u32, 8, ctx.xer);
	// blt cr6,0x823f24bc
	if (ctx.cr6.lt) goto loc_823F24BC;
loc_823F2628:
	// fcmpu cr6,f10,f5
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f5.f64);
	// bge cr6,0x823f2638
	if (!ctx.cr6.lt) goto loc_823F2638;
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
	// b 0x823f264c
	goto loc_823F264C;
loc_823F2638:
	// fcmpu cr6,f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, f31.f64);
	// ble cr6,0x823f2648
	if (!ctx.cr6.gt) goto loc_823F2648;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
	// b 0x823f264c
	goto loc_823F264C;
loc_823F2648:
	// fmr f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64;
loc_823F264C:
	// stfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fcmpu cr6,f7,f5
	ctx.cr6.compare(ctx.f7.f64, ctx.f5.f64);
	// bge cr6,0x823f2660
	if (!ctx.cr6.lt) goto loc_823F2660;
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
	// b 0x823f2674
	goto loc_823F2674;
loc_823F2660:
	// fcmpu cr6,f7,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f7.f64, f31.f64);
	// ble cr6,0x823f2670
	if (!ctx.cr6.gt) goto loc_823F2670;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
	// b 0x823f2674
	goto loc_823F2674;
loc_823F2670:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
loc_823F2674:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfd f30,-32(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823FC9B0) {
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
	ctx.lr = 0x823FC9B8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,280(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 280);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r24,448(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r21,416(r3)
	r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 416);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823fc9fc
	if (ctx.cr6.eq) goto loc_823FC9FC;
	// lwz r11,40(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823fc9fc
	if (!ctx.cr6.eq) goto loc_823FC9FC;
	// bl 0x823fc908
	ctx.lr = 0x823FC9E8;
	sub_823FC908(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823fc9fc
	if (!ctx.cr6.eq) goto loc_823FC9FC;
loc_823FC9F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4eb8
	return;
loc_823FC9FC:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823fcbe8
	if (!ctx.cr6.eq) goto loc_823FCBE8;
	// lwz r8,24(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 24);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r20,r24,20
	r20.s64 = r24.s64 + 20;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r9,r20,-4
	ctx.r9.s64 = r20.s64 + -4;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r4,12(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 12);
	// lwz r5,16(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 16);
loc_823FCA3C:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823fca3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FCA3C;
	// lwz r11,360(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 360);
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823fcbac
	if (!ctx.cr6.gt) goto loc_823FCBAC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r29,r31
	r29.u64 = r31.u64;
	// addi r28,r30,364
	r28.s64 = r30.s64 + 364;
	// li r22,1
	r22.s64 = 1;
	// addi r23,r11,4328
	r23.s64 = ctx.r11.s64 + 4328;
loc_823FCA6C:
	// lwz r27,0(r28)
	r27.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// lwz r25,0(r29)
	r25.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r11,r27,84
	ctx.r11.s64 = r27.s64 + 84;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// addi r8,r11,11
	ctx.r8.s64 = ctx.r11.s64 + 11;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r7,r24
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	// bge cr6,0x823fcac4
	if (!ctx.cr6.lt) goto loc_823FCAC4;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823fbf88
	ctx.lr = 0x823FCAA4;
	sub_823FBF88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fc9f0
	if (ctx.cr6.eq) goto loc_823FC9F0;
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bge cr6,0x823fcac4
	if (!ctx.cr6.lt) goto loc_823FCAC4;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// b 0x823fcaf8
	goto loc_823FCAF8;
loc_823FCAC4:
	// addi r11,r5,-8
	ctx.r11.s64 = ctx.r5.s64 + -8;
	// sraw r10,r4,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r10.s64 = ctx.r4.s32 >> temp.u32;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823fcaf4
	if (ctx.cr6.eq) goto loc_823FCAF4;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// subf r5,r10,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r10.u64;
	// lbz r31,1168(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 1168);
	// b 0x823fcb18
	goto loc_823FCB18;
loc_823FCAF4:
	// li r7,9
	ctx.r7.s64 = 9;
loc_823FCAF8:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823fc0f0
	ctx.lr = 0x823FCB04;
	sub_823FC0F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823fc9f0
	if (ctx.cr6.lt) goto loc_823FC9F0;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_823FCB18:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x823fcb74
	if (ctx.cr6.eq) goto loc_823FCB74;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r31.s32, ctx.xer);
	// bge cr6,0x823fcb44
	if (!ctx.cr6.lt) goto loc_823FCB44;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823fbf88
	ctx.lr = 0x823FCB34;
	sub_823FBF88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fc9f0
	if (ctx.cr6.eq) goto loc_823FC9F0;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_823FCB44:
	// subf r5,r31,r5
	ctx.r5.u64 = ctx.r5.u64 - r31.u64;
	// slw r10,r22,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (r22.u32 << (r31.u8 & 0x3F));
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sraw r9,r4,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r9.s64 = ctx.r4.s32 >> temp.u32;
	// lwzx r8,r11,r23
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// and r31,r10,r9
	r31.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x823fcb74
	if (!ctx.cr6.lt) goto loc_823FCB74;
	// addi r10,r23,64
	ctx.r10.s64 = r23.s64 + 64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
loc_823FCB74:
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// slw r8,r11,r21
	ctx.r8.u64 = r21.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r21.u8 & 0x3F));
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,0(r25)
	REX_STORE_U16(r25.u32 + 0, ctx.r7.u16);
	// lwz r6,360(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 360);
	// cmpw cr6,r26,r6
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823fca6c
	if (ctx.cr6.lt) goto loc_823FCA6C;
loc_823FCBAC:
	// lwz r8,24(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 24);
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r9,r20,-4
	ctx.r9.s64 = r20.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 24);
	// stw r6,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stw r4,12(r24)
	REX_STORE_U32(r24.u32 + 12, ctx.r4.u32);
	// stw r5,16(r24)
	REX_STORE_U32(r24.u32 + 16, ctx.r5.u32);
loc_823FCBDC:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823fcbdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FCBDC;
loc_823FCBE8:
	// lwz r11,40(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,40(r24)
	REX_STORE_U32(r24.u32 + 40, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_82405E10) {
	REX_FUNC_PROLOGUE();
	// b 0x82405a98
	sub_82405A98(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82405E18) {
	REX_FUNC_PROLOGUE();
	// b 0x824057e8
	sub_824057E8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82405E20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,16480
	ctx.r11.s64 = ctx.r11.s64 + 16480;
	// lvx128 v1,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82405c58
	sub_82405C58(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82405E40) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x0)));
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,16496
	ctx.r10.s64 = ctx.r10.s64 + 16496;
	// stw r9,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lvlx128 v61,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v63,v61,4,3
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r9,16320
	ctx.r11.s64 = ctx.r9.s64 + 16320;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// vupkd3d128 v62,v62,0
	vTemp.u32[0] = ctx.v62.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v62.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v62.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v62.u8[2] | 0x3F800000;
	ctx.v62 = vTemp;
	// vperm128 v61,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r10,r10,16384
	ctx.r10.s64 = ctx.r10.s64 + 16384;
	// addi r9,r9,16368
	ctx.r9.s64 = ctx.r9.s64 + 16368;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// vcuxwfp128 v61,v61,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v61.f32, rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v61,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vperm128 v61,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v61,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v63,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8240A788) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,220(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// li r31,2
	r31.s64 = 2;
	// lwz r30,212(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x8240a4b0
	ctx.lr = 0x8240A7B8;
	sub_8240A4B0(ctx, base);
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

DEFINE_REX_FUNC(sub_8240D768) {
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
	ctx.lr = 0x8240D770;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// li r21,0
	r21.s64 = 0;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r21,144(r1)
	REX_STORE_U16(ctx.r1.u32 + 144, r21.u16);
	// addi r3,r1,146
	ctx.r3.s64 = ctx.r1.s64 + 146;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x822d5870
	ctx.lr = 0x8240D7A0;
	sub_822D5870(ctx, base);
	// cmplwi cr6,r30,24
	ctx.cr6.compare<uint32_t>(r30.u32, 24, ctx.xer);
	// li r5,24
	ctx.r5.s64 = 24;
	// bgt cr6,0x8240d7b0
	if (ctx.cr6.gt) goto loc_8240D7B0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_8240D7B0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822d4fa0
	ctx.lr = 0x8240D7BC;
	sub_822D4FA0(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r30,24
	r30.s64 = 24;
	// lwz r27,148(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm r26,r27,20,28,31
	r26.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 20) & 0xF;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x824081f8
	ctx.lr = 0x8240D7D8;
	sub_824081F8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r6,r11,23,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x3;
	// clrlwi r22,r10,26
	r22.u64 = ctx.r10.u32 & 0x3F;
	// bl 0x82404ed8
	ctx.lr = 0x8240D7F8;
	sub_82404ED8(ctx, base);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x8240d81c
	if (!ctx.cr6.eq) goto loc_8240D81C;
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// addi r23,r1,128
	r23.s64 = ctx.r1.s64 + 128;
	// lwz r10,180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r9,192(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r9,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
loc_8240D81C:
	// rlwinm r11,r27,3,29,31
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0x7;
	// lwz r10,28(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 28);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r24,r27,16,28,31
	r24.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 16) & 0xF;
	// slw r25,r9,r11
	r25.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r27,r27,7,28,31
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 7) & 0xF;
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8240d874
	if (ctx.cr6.eq) goto loc_8240D874;
	// stw r25,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r25.u32);
	// stw r21,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r21.u32);
	// stw r21,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r21.u32);
	// lwz r3,20(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 20);
	// bl 0x823ce0d8
	ctx.lr = 0x8240D854;
	sub_823CE0D8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r7,16(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r6,12(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x823ce0a8
	ctx.lr = 0x8240D86C;
	sub_823CE0A8(ctx, base);
	// stw r3,20(r29)
	REX_STORE_U32(r29.u32 + 20, ctx.r3.u32);
	// stw r25,28(r29)
	REX_STORE_U32(r29.u32 + 28, r25.u32);
loc_8240D874:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r19,20(r29)
	r19.u64 = REX_LOAD_U32(r29.u32 + 20);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x82221320
	ctx.lr = 0x8240D88C;
	sub_82221320(ctx, base);
	// cmplwi cr6,r22,18
	ctx.cr6.compare<uint32_t>(r22.u32, 18, ctx.xer);
	// beq cr6,0x8240d8dc
	if (ctx.cr6.eq) goto loc_8240D8DC;
	// cmplwi cr6,r22,51
	ctx.cr6.compare<uint32_t>(r22.u32, 51, ctx.xer);
	// beq cr6,0x8240d8dc
	if (ctx.cr6.eq) goto loc_8240D8DC;
	// cmplwi cr6,r22,60
	ctx.cr6.compare<uint32_t>(r22.u32, 60, ctx.xer);
	// beq cr6,0x8240d8dc
	if (ctx.cr6.eq) goto loc_8240D8DC;
	// cmplwi cr6,r22,19
	ctx.cr6.compare<uint32_t>(r22.u32, 19, ctx.xer);
	// beq cr6,0x8240d8d4
	if (ctx.cr6.eq) goto loc_8240D8D4;
	// cmplwi cr6,r22,52
	ctx.cr6.compare<uint32_t>(r22.u32, 52, ctx.xer);
	// beq cr6,0x8240d8d4
	if (ctx.cr6.eq) goto loc_8240D8D4;
	// cmplwi cr6,r22,20
	ctx.cr6.compare<uint32_t>(r22.u32, 20, ctx.xer);
	// beq cr6,0x8240d8cc
	if (ctx.cr6.eq) goto loc_8240D8CC;
	// cmplwi cr6,r22,53
	ctx.cr6.compare<uint32_t>(r22.u32, 53, ctx.xer);
	// beq cr6,0x8240d8cc
	if (ctx.cr6.eq) goto loc_8240D8CC;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8240d8e0
	goto loc_8240D8E0;
loc_8240D8CC:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8240d8e0
	goto loc_8240D8E0;
loc_8240D8D4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8240d8e0
	goto loc_8240D8E0;
loc_8240D8DC:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_8240D8E0:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r10,26248
	r25.s64 = ctx.r10.s64 + 26248;
	// addi r10,r25,192
	ctx.r10.s64 = r25.s64 + 192;
	// lwzx r20,r9,r10
	r20.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8240da10
	if (ctx.cr6.eq) goto loc_8240DA10;
	// mulli r22,r11,6
	r22.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
loc_8240D900:
	// add r11,r22,r21
	ctx.r11.u64 = r22.u64 + r21.u64;
	// lwzx r10,r30,r28
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + r28.u32);
	// addi r9,r25,96
	ctx.r9.s64 = r25.s64 + 96;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r8,r7,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r9,r7,r25
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + r25.u32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// bne cr6,0x8240d95c
	if (!ctx.cr6.eq) goto loc_8240D95C;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// bl 0x8240ad50
	ctx.lr = 0x8240D958;
	sub_8240AD50(ctx, base);
	// b 0x8240d9f8
	goto loc_8240D9F8;
loc_8240D95C:
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// bne cr6,0x8240d988
	if (!ctx.cr6.eq) goto loc_8240D988;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// bl 0x8240b5b0
	ctx.lr = 0x8240D984;
	sub_8240B5B0(ctx, base);
	// b 0x8240d9f8
	goto loc_8240D9F8;
loc_8240D988:
	// cmplwi cr6,r8,6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 6, ctx.xer);
	// bne cr6,0x8240d9b4
	if (!ctx.cr6.eq) goto loc_8240D9B4;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// bl 0x8240be10
	ctx.lr = 0x8240D9B0;
	sub_8240BE10(ctx, base);
	// b 0x8240d9f8
	goto loc_8240D9F8;
loc_8240D9B4:
	// cmplwi cr6,r8,8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8, ctx.xer);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// bne cr6,0x8240d9e0
	if (!ctx.cr6.eq) goto loc_8240D9E0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x8240c6a8
	ctx.lr = 0x8240D9DC;
	sub_8240C6A8(ctx, base);
	// b 0x8240d9f8
	goto loc_8240D9F8;
loc_8240D9E0:
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x8240cf08
	ctx.lr = 0x8240D9F8;
	sub_8240CF08(ctx, base);
loc_8240D9F8:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x823ce030
	ctx.lr = 0x8240DA04;
	sub_823CE030(ctx, base);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// cmplw cr6,r21,r20
	ctx.cr6.compare<uint32_t>(r21.u32, r20.u32, ctx.xer);
	// blt cr6,0x8240d900
	if (ctx.cr6.lt) goto loc_8240D900;
loc_8240DA10:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// rlwinm r10,r11,30,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xF;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// bge cr6,0x8240da24
	if (!ctx.cr6.lt) goto loc_8240DA24;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
loc_8240DA24:
	// rlwimi r11,r26,2,26,29
	ctx.r11.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0x3C) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC3);
	// rlwinm r10,r11,26,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xF;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r24.u32, ctx.xer);
	// bgt cr6,0x8240da3c
	if (ctx.cr6.gt) goto loc_8240DA3C;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_8240DA3C:
	// rlwimi r11,r10,6,22,25
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3C0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFC3F);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_82419C18) {
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
	ctx.lr = 0x82419C20;
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// beq cr6,0x82419c50
	if (ctx.cr6.eq) goto loc_82419C50;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x82419C4C;
	sub_82413040(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_82419C50:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82419c6c
	if (ctx.cr6.eq) goto loc_82419C6C;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413dd0
	ctx.lr = 0x82419C68;
	sub_82413DD0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_82419C6C:
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
	// mullw r10,r3,r29
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(r29.s32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r6
	r28.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lfs f31,1996(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 1996);
	f31.f64 = double(temp.f32);
	// add r26,r9,r5
	r26.u64 = ctx.r9.u64 + ctx.r5.u64;
	// bne 0x82419cd0
	if (!ctx.cr0.eq) goto loc_82419CD0;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x82419cd8
	goto loc_82419CD8;
loc_82419CD0:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_82419CD8:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82419d30
	if (ctx.cr6.eq) goto loc_82419D30;
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
loc_82419D00:
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
	// blt cr6,0x82419d00
	if (ctx.cr6.lt) goto loc_82419D00;
loc_82419D30:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82419d48
	if (ctx.cr6.eq) goto loc_82419D48;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x82419D48;
	sub_823DC658(ctx, base);
loc_82419D48:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82419e98
	if (!ctx.cr6.gt) goto loc_82419E98;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// subf r10,r30,r29
	ctx.r10.u64 = r29.u64 - r30.u64;
	// rlwinm r6,r11,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r27,r30,1,0,30
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r5,r30,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r30,-32256
	r30.s64 = -2113929216;
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r3,r27,r28
	ctx.r3.u64 = r28.u64 - r27.u64;
	// lfd f9,-9120(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + -9120);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lfs f12,17176(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 17176);
	ctx.f12.f64 = double(temp.f32);
	// lis r29,-32255
	r29.s64 = -2113863680;
	// lis r28,-32255
	r28.s64 = -2113863680;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lfs f10,16288(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16288);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,-7224(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -7224);
	ctx.f11.f64 = double(temp.f32);
	// ori r30,r11,65535
	r30.u64 = ctx.r11.u64 | 65535;
	// lfs f13,-30028(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + -30028);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,21104(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 21104);
	ctx.f8.f64 = double(temp.f32);
loc_82419DB0:
	// lfsx f0,r9,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r4,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xC;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfsx f7,r11,r26
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fadds f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fctiwz f7,f7
	ctx.f7.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x82419e4c
	if (ctx.cr6.eq) goto loc_82419E4C;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f7,88(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// lfs f6,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// fsubs f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f7,f0,f12,f6
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f6.f64)));
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f7,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f0,f11,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f7.f64)));
	// fmul f6,f0,f9
	ctx.f6.f64 = ctx.f0.f64 * ctx.f9.f64;
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lfs f7,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f0,f0,f10,f7
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f7.f64)));
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// frsp f31,f6
	f31.f64 = double(float(ctx.f6.f64));
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82419E4C:
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r30.s32, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// blt cr6,0x82419e5c
	if (ctx.cr6.lt) goto loc_82419E5C;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82419E5C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82419e74
	if (!ctx.cr6.gt) goto loc_82419E74;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r30.s32, ctx.xer);
	// blt cr6,0x82419e78
	if (ctx.cr6.lt) goto loc_82419E78;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// b 0x82419e78
	goto loc_82419E78;
loc_82419E74:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82419E78:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// sthux r10,r3,r27
	ea = ctx.r3.u32 + r27.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r3.u32 = ea;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82419db0
	if (ctx.cr6.lt) goto loc_82419DB0;
loc_82419E98:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8241F1B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8241F1B8;
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
	// bne cr6,0x8241f1f4
	if (!ctx.cr6.eq) goto loc_8241F1F4;
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
	// li r7,1471
	ctx.r7.s64 = 1471;
	// bl 0x8240e308
	ctx.lr = 0x8241F1F4;
	sub_8240E308(ctx, base);
loc_8241F1F4:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e810
	ctx.lr = 0x8241F200;
	sub_8240E810(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x8241f264
	if (!ctx.cr6.eq) goto loc_8241F264;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8241f224
	if (ctx.cr6.eq) goto loc_8241F224;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8240e930
	ctx.lr = 0x8241F224;
	sub_8240E930(ctx, base);
loc_8241F224:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8241f25c
	if (ctx.cr6.eq) goto loc_8241F25C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8241f25c
	if (ctx.cr6.eq) goto loc_8241F25C;
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
	// li r6,21
	ctx.r6.s64 = 21;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,84(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// bctrl 
	ctx.lr = 0x8241F25C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241F25C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8241f2bc
	goto loc_8241F2BC;
loc_8241F264:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8241f280
	if (ctx.cr6.eq) goto loc_8241F280;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8240e930
	ctx.lr = 0x8241F280;
	sub_8240E930(ctx, base);
loc_8241F280:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8241f2b8
	if (ctx.cr6.eq) goto loc_8241F2B8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8241f2b8
	if (ctx.cr6.eq) goto loc_8241F2B8;
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
	// li r6,21
	ctx.r6.s64 = 21;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,84(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// bctrl 
	ctx.lr = 0x8241F2B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241F2B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241F2BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_824214C8) {
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
	ctx.lr = 0x824214D0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82421510
	if (!ctx.cr6.eq) goto loc_82421510;
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
	// li r7,3721
	ctx.r7.s64 = 3721;
	// bl 0x8240e308
	ctx.lr = 0x82421510;
	sub_8240E308(ctx, base);
loc_82421510:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82412c68
	ctx.lr = 0x82421520;
	sub_82412C68(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82421568
	if (ctx.cr6.eq) goto loc_82421568;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82421568
	if (ctx.cr6.eq) goto loc_82421568;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8241e418
	ctx.lr = 0x8242153C;
	sub_8241E418(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18724
	ctx.r4.s64 = ctx.r10.s64 + -18724;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,74
	ctx.r6.s64 = 74;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,296(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 296);
	// bctrl 
	ctx.lr = 0x82421568;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82421568:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82424780) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r4,928
	ctx.r10.s64 = ctx.r4.s64 + 928;
loc_82424794:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824247b0
	if (ctx.cr6.eq) goto loc_824247B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82424794
	if (ctx.cr6.lt) goto loc_82424794;
loc_824247B0:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r7,16(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x82426e98
	ctx.lr = 0x824247E4;
	sub_82426E98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82427208) {
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
	// lwz r3,40(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82426a60
	ctx.lr = 0x82427230;
	sub_82426A60(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824282A0) {
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
	// bl 0x82427100
	ctx.lr = 0x824282C0;
	sub_82427100(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r11,r11,-5908
	ctx.r11.s64 = ctx.r11.s64 + -5908;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// blt cr6,0x824282dc
	if (ctx.cr6.lt) goto loc_824282DC;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// ble cr6,0x82428300
	if (!ctx.cr6.gt) goto loc_82428300;
loc_824282DC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-6064
	ctx.r6.s64 = ctx.r11.s64 + -6064;
	// addi r5,r10,-5644
	ctx.r5.s64 = ctx.r10.s64 + -5644;
	// addi r4,r9,16880
	ctx.r4.s64 = ctx.r9.s64 + 16880;
	// li r7,862
	ctx.r7.s64 = 862;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x82428300;
	sub_8240E308(ctx, base);
loc_82428300:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r30,33
	ctx.r10.s64 = r30.s64 + 33;
	// stb r11,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_824293C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x824293C8;
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
	ctx.lr = 0x824293E4;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// beq 0x8242941c
	if (ctx.cr0.eq) goto loc_8242941C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82428a88
	ctx.lr = 0x82429400;
	sub_82428A88(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-3928
	ctx.r10.s64 = ctx.r10.s64 + -3928;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// b 0x82429420
	goto loc_82429420;
loc_8242941C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82429420:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82429FB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82429FB8;
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
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82412d18
	ctx.lr = 0x82429FD8;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// beq 0x82429ffc
	if (ctx.cr0.eq) goto loc_82429FFC;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82427f80
	ctx.lr = 0x82429FF8;
	sub_82427F80(ctx, base);
	// b 0x8242a000
	goto loc_8242A000;
loc_82429FFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8242A000:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8242C5C0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x824d437c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8242CB40) {
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
	ctx.lr = 0x8242CB48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r28,r3,80
	r28.s64 = ctx.r3.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242CB6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8242cbe0
	if (ctx.cr6.eq) goto loc_8242CBE0;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r30,r31,44
	r30.s64 = r31.s64 + 44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242CB90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,180(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 180);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242CBA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242CBBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823cd980
	ctx.lr = 0x8242CBD0;
	sub_823CD980(ctx, base);
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r11.u32);
loc_8242CBE0:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242CBF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8242F580) {
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
	ctx.lr = 0x8242F588;
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r27,24(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r29,28(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r22,32(r3)
	r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// beq cr6,0x8242f5b4
	if (ctx.cr6.eq) goto loc_8242F5B4;
	// li r29,1
	r29.s64 = 1;
	// li r27,1
	r27.s64 = 1;
loc_8242F5B4:
	// lwz r24,12(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// twllei r27,0
	if (r27.s32 == 0 || r27.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x8242f664
	if (!ctx.cr6.eq) goto loc_8242F664;
	// divwu. r10,r10,r27
	ctx.r10.u64 = uint32_t(r27.u32 ? ctx.r10.u32 / r27.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8242f734
	if (ctx.cr0.eq) goto loc_8242F734;
	// lwz r30,8(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r28,r27,2,0,29
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r29,2,0,29
	r26.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_8242F5D8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8242f650
	if (ctx.cr6.eq) goto loc_8242F650;
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// addi r31,r8,108
	r31.s64 = ctx.r8.s64 + 108;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r7,r30,-4
	ctx.r7.s64 = r30.s64 + -4;
loc_8242F5F8:
	// lfs f0,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(r27.u32, 1, ctx.xer);
	// ble cr6,0x8242f628
	if (!ctx.cr6.gt) goto loc_8242F628;
	// addi r6,r27,-1
	ctx.r6.s64 = r27.s64 + -1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8242F618:
	// lfsu f13,4(r9)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// lfsu f12,4(r7)
	ea = 4 + ctx.r7.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// bdnz 0x8242f618
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242F618;
loc_8242F628:
	// dcbt r0,r3
	// dcbt r0,r31
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x8242f640
	if (ctx.cr6.eq) goto loc_8242F640;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_8242F640:
	// stfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x8242f5f8
	if (!ctx.cr0.eq) goto loc_8242F5F8;
loc_8242F650:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
	// add r8,r26,r8
	ctx.r8.u64 = r26.u64 + ctx.r8.u64;
	// bne 0x8242f5d8
	if (!ctx.cr0.eq) goto loc_8242F5D8;
	// b 0x8242f734
	goto loc_8242F734;
loc_8242F664:
	// divwu. r23,r10,r27
	r23.u64 = uint32_t(r27.u32 ? ctx.r10.u32 / r27.u32 : 0);
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// beq 0x8242f734
	if (ctx.cr0.eq) goto loc_8242F734;
	// lwz r28,8(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r26,r27,2,0,29
	r26.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r29,2,0,29
	r25.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_8242F67C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8242f720
	if (ctx.cr6.eq) goto loc_8242F720;
	// clrldi r10,r7,32
	ctx.r10.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// lfs f10,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r31,r11,48
	r31.s64 = ctx.r11.s64 + 48;
	// std r10,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.r10.u64);
	// lfd f0,-96(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r30,r8,108
	r30.s64 = ctx.r8.s64 + 108;
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r10,r24,-4
	ctx.r10.s64 = r24.s64 + -4;
	// addi r9,r28,-4
	ctx.r9.s64 = r28.s64 + -4;
loc_8242F6B4:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f13,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// fmadds f0,f0,f11,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f13.f64)));
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(r27.u32, 1, ctx.xer);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// ble cr6,0x8242f6f8
	if (!ctx.cr6.gt) goto loc_8242F6F8;
	// addi r5,r27,-1
	ctx.r5.s64 = r27.s64 + -1;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8242F6E0:
	// lfsu f13,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// lfsu f12,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// fmadds f12,f13,f11,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f12.f64)));
	// lfsu f13,4(r6)
	ea = 4 + ctx.r6.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r6.u32 = ea;
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// bdnz 0x8242f6e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242F6E0;
loc_8242F6F8:
	// dcbt r0,r31
	// dcbt r0,r30
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x8242f710
	if (ctx.cr6.eq) goto loc_8242F710;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_8242F710:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x8242f6b4
	if (!ctx.cr0.eq) goto loc_8242F6B4;
loc_8242F720:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r11,r26,r11
	ctx.r11.u64 = r26.u64 + ctx.r11.u64;
	// add r8,r25,r8
	ctx.r8.u64 = r25.u64 + ctx.r8.u64;
	// cmplw cr6,r7,r23
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r23.u32, ctx.xer);
	// blt cr6,0x8242f67c
	if (ctx.cr6.lt) goto loc_8242F67C;
loc_8242F734:
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82438158) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82438184;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 184);
	// li r4,512
	ctx.r4.s64 = 512;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243819C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824381B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_82439360) {
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
	// lwz r4,248(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 248);
	// bl 0x823cd118
	ctx.lr = 0x82439388;
	sub_823CD118(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r3.u32);
	// beq 0x824393ec
	if (ctx.cr0.eq) goto loc_824393EC;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x8242c3b0
	ctx.lr = 0x824393AC;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824393c8
	if (ctx.cr0.eq) goto loc_824393C8;
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x824393cc
	goto loc_824393CC;
loc_824393C8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824393CC:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824393ec
	if (ctx.cr6.eq) goto loc_824393EC;
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x82438e98
	ctx.lr = 0x824393DC;
	sub_82438E98(ctx, base);
	// stw r30,256(r31)
	REX_STORE_U32(r31.u32 + 256, r30.u32);
	// stw r30,260(r31)
	REX_STORE_U32(r31.u32 + 260, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824393f4
	goto loc_824393F4;
loc_824393EC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_824393F4:
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

DEFINE_REX_FUNC(sub_8243B558) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8243c8b8
	sub_8243C8B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8243B8F8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8243b914
	if (ctx.cr0.eq) goto loc_8243B914;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r10,r4,96
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(96));
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x8243b928
	goto loc_8243B928;
loc_8243B914:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r11,r4,96
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(96));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8243B928:
	// rlwinm r11,r11,12,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243C8E8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,180(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243C930) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r8,168(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r4,76(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// beq cr6,0x8243c94c
	if (ctx.cr6.eq) goto loc_8243C94C;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_8243C94C:
	// lwz r9,88(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8243c960
	if (ctx.cr0.eq) goto loc_8243C960;
	// lwz r10,52(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 52);
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
loc_8243C960:
	// lwz r10,172(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8243c98c
	if (ctx.cr6.eq) goto loc_8243C98C;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lis r5,4919
	ctx.r5.s64 = 322371584;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// ori r5,r5,61441
	ctx.r5.u64 = ctx.r5.u64 | 61441;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8243C98C:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8243c9c8
	if (ctx.cr0.eq) goto loc_8243C9C8;
	// lwz r11,44(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243c9a8
	if (ctx.cr6.eq) goto loc_8243C9A8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8243c9ac
	goto loc_8243C9AC;
loc_8243C9A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8243C9AC:
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
loc_8243C9C8:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8243c9ec
	if (ctx.cr6.eq) goto loc_8243C9EC;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lis r5,4919
	ctx.r5.s64 = 322371584;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// ori r5,r5,61441
	ctx.r5.u64 = ctx.r5.u64 | 61441;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8243C9EC:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243ca08
	if (ctx.cr6.eq) goto loc_8243CA08;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8243ca0c
	goto loc_8243CA0C;
loc_8243CA08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8243CA0C:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lis r5,4919
	ctx.r5.s64 = 322371584;
	// ori r5,r5,61441
	ctx.r5.u64 = ctx.r5.u64 | 61441;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
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

DEFINE_REX_FUNC(sub_82440C68) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,11492
	ctx.r11.s64 = ctx.r11.s64 + 11492;
	// addi r10,r10,11472
	ctx.r10.s64 = ctx.r10.s64 + 11472;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// bl 0x82440ba8
	ctx.lr = 0x82440C98;
	sub_82440BA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242a358
	ctx.lr = 0x82440CA0;
	sub_8242A358(ctx, base);
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

DEFINE_REX_FUNC(sub_82441580) {
	REX_FUNC_PROLOGUE();
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82441DD0) {
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
	ctx.lr = 0x82441DD8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x8242c3b0
	ctx.lr = 0x82441E08;
	sub_8242C3B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82441e1c
	if (!ctx.cr0.eq) goto loc_82441E1C;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x82441e5c
	goto loc_82441E5C;
loc_82441E1C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r30,8
	ctx.r9.s64 = r30.s64 + 8;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r28,20(r31)
	REX_STORE_U32(r31.u32 + 20, r28.u32);
	// lwz r3,76(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 76);
	// bl 0x8245f9d8
	ctx.lr = 0x82441E4C;
	sub_8245F9D8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x82441e5c
	if (!ctx.cr0.lt) goto loc_82441E5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x82441E5C;
	sub_82473600(ctx, base);
loc_82441E5C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824432C0) {
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
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
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
	ctx.lr = 0x824432F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
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
	ctx.lr = 0x8244332C;
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

DEFINE_REX_FUNC(sub_82446AD0) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e5c
	ctx.lr = 0x82446AD8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// lwz r28,360(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// lhz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// divwu r9,r6,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r6.u32 / ctx.r10.u32 : 0);
	// divwu r8,r9,r28
	ctx.r8.u64 = uint32_t(r28.u32 ? ctx.r9.u32 / r28.u32 : 0);
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82446b1c
	if (!ctx.cr6.lt) goto loc_82446B1C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eac
	return;
loc_82446B1C:
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x82446c80
	if (!ctx.cr6.gt) goto loc_82446C80;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r22,0
	r22.s64 = 0;
	// mullw r23,r10,r28
	r23.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// mullw r24,r11,r28
	r24.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
loc_82446B40:
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,524(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 524);
	// mullw r11,r24,r4
	ctx.r11.s64 = int64_t(r24.s32) * int64_t(ctx.r4.s32);
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 110);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r27,r11,r21
	r27.u64 = ctx.r11.u64 + r21.u64;
	// mullw r11,r23,r4
	ctx.r11.s64 = int64_t(r23.s32) * int64_t(ctx.r4.s32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r29,r11,r21
	r29.u64 = ctx.r11.u64 + r21.u64;
	// bctrl 
	ctx.lr = 0x82446B6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 88);
	// add r8,r25,r28
	ctx.r8.u64 = r25.u64 + r28.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r26,r11,r21
	r26.u64 = ctx.r11.u64 + r21.u64;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(r29.u32, r26.u32, ctx.xer);
	// ble cr6,0x82446c10
	if (!ctx.cr6.gt) goto loc_82446C10;
loc_82446B8C:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82446BA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,524(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 524);
	// mr r17,r30
	r17.u64 = r30.u64;
	// mullw r9,r4,r28
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(r28.s32);
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 110);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r27,r9,r27
	r27.u64 = r27.u64 - ctx.r9.u64;
	// subf r29,r9,r29
	r29.u64 = r29.u64 - ctx.r9.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bctrl 
	ctx.lr = 0x82446BD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,520(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 520);
	// srawi r10,r17,1
	ctx.xer.ca = (r17.s32 < 0) & ((r17.u32 & 0x1) != 0);
	ctx.r10.s64 = r17.s32 >> 1;
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82446BFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,88(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 88);
	// mullw r6,r28,r7
	ctx.r6.s64 = int64_t(r28.s32) * int64_t(ctx.r7.s32);
	// subf r29,r6,r29
	r29.u64 = r29.u64 - ctx.r6.u64;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(r29.u32, r26.u32, ctx.xer);
	// bgt cr6,0x82446b8c
	if (ctx.cr6.gt) goto loc_82446B8C;
loc_82446C10:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82446C2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,344(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 344);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 88);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r8,520(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 520);
	// mullw r7,r28,r9
	ctx.r7.s64 = int64_t(r28.s32) * int64_t(ctx.r9.s32);
	// lwzx r4,r22,r10
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// srawi r10,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r10.s64 = r30.s32 >> 1;
	// subf r4,r7,r29
	ctx.r4.u64 = r29.u64 - ctx.r7.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82446C60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,344(r19)
	ctx.r3.u64 = REX_LOAD_U32(r19.u32 + 344);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// cmpw cr6,r25,r28
	ctx.cr6.compare<int32_t>(r25.s32, r28.s32, ctx.xer);
	// stwx r20,r22,r3
	REX_STORE_U32(r22.u32 + ctx.r3.u32, r20.u32);
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// blt cr6,0x82446b40
	if (ctx.cr6.lt) goto loc_82446B40;
loc_82446C80:
	// lhz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U16(r18.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,1,16,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFE;
	// sth r10,0(r18)
	REX_STORE_U16(r18.u32 + 0, ctx.r10.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eac
	return;
}

DEFINE_REX_FUNC(sub_82452A38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82452A40;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r31,8(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ld r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// lfs f13,1992(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,-80(r1)
	REX_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// lfs f0,-80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f12,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r5,20(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lwz r4,32(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// std r6,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r6.u64);
	// bne cr6,0x82452aa4
	if (!ctx.cr6.eq) goto loc_82452AA4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r6,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.r6.u64);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lfs f11,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,-44(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// stfs f11,-36(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// b 0x82452acc
	goto loc_82452ACC;
loc_82452AA4:
	// lfs f10,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fadds f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f10,-44(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// stfs f7,-56(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// stfs f6,-52(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// stfs f10,-36(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -36, temp.u32);
loc_82452ACC:
	// li r7,16
	ctx.r7.s64 = 16;
	// stfs f11,-40(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// addi r6,r1,-48
	ctx.r6.s64 = ctx.r1.s64 + -48;
	// stfs f11,-48(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// addi r30,r1,-48
	r30.s64 = ctx.r1.s64 + -48;
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// rlwinm r29,r11,0,28,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// lvrx128 v61,r7,r6
	temp.u32 = ctx.r7.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r3,4
	ctx.r3.s64 = 4;
	// lvlx128 v60,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v63,r7,r10
	temp.u32 = ctx.r7.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v0,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vor128 v62,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// beq cr6,0x82452b64
	if (ctx.cr6.eq) goto loc_82452B64;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// ble cr6,0x82452c50
	if (!ctx.cr6.gt) goto loc_82452C50;
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// lfs f11,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// fmadds f12,f11,f0,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfs f12,-80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// lvlx128 v59,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v58,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// vmulfp128 v63,v58,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vaddfp128 v0,v0,v62
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v62.f32)));
	// beq cr6,0x82452b4c
	if (ctx.cr6.eq) goto loc_82452B4C;
	// lvlx128 v57,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v63,v63,v57
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v57.f32)));
loc_82452B4C:
	// vpermwi128 v56,v63,17
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xEE));
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stvewx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v56,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82452B64:
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// ble cr6,0x82452c50
	if (!ctx.cr6.gt) goto loc_82452C50;
	// vaddfp128 v55,v62,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v55.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v62.f32)));
	// rlwinm r6,r5,0,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// clrlwi r5,r5,30
	ctx.r5.u64 = ctx.r5.u32 & 0x3;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// vaddfp128 v13,v0,v55
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v55.f32)));
	// vaddfp128 v63,v55,v55
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v55.f32)));
	// beq cr6,0x82452c48
	if (ctx.cr6.eq) goto loc_82452C48;
	// addi r9,r6,-1
	ctx.r9.s64 = ctx.r6.s64 + -1;
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,288
	ctx.r9.s64 = 288;
loc_82452BA0:
	// fmuls f12,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f11,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// addi r30,r1,-64
	r30.s64 = ctx.r1.s64 + -64;
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// addi r29,r1,-64
	r29.s64 = ctx.r1.s64 + -64;
	// lfs f6,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f12,f11,f0,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfs f12,-64(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// fmadds f12,f12,f13,f9
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f12,-60(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// fmadds f12,f12,f13,f7
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f7.f64)));
	// stfs f12,-56(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// fmuls f5,f12,f13
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f12,f6,f0,f5
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f5.f64)));
	// stfs f12,-52(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// lvrx128 v54,r7,r30
	temp.u32 = ctx.r7.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v53,r0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v52,v53,v54
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// dcbt r11,r9
	// vmrghw128 v11,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// vmrglw128 v10,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// beq cr6,0x82452c24
	if (ctx.cr6.eq) goto loc_82452C24;
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v12,v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// lvx128 v11,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v10,v13,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vaddfp128 v0,v0,v63
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vaddfp128 v13,v13,v63
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v63.f32)));
	// b 0x82452c34
	goto loc_82452C34;
loc_82452C24:
	// vmulfp128 v12,v11,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vaddfp128 v0,v0,v63
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v11,v10,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp128 v13,v0,v63
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v63.f32)));
loc_82452C34:
	// stvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stvx128 v11,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x82452ba0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82452BA0;
loc_82452C48:
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82452C50:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82452cac
	if (ctx.cr6.eq) goto loc_82452CAC;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
loc_82452C60:
	// fmuls f12,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f11,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// fmadds f12,f11,f0,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfs f12,-80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// lvlx128 v51,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v50,v51,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), 0xFF));
	// vmulfp128 v63,v50,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vaddfp128 v0,v0,v62
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v62.f32)));
	// beq cr6,0x82452c90
	if (ctx.cr6.eq) goto loc_82452C90;
	// lvlx128 v49,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v63,v63,v49
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v49.f32)));
loc_82452C90:
	// vpermwi128 v48,v63,17
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xEE));
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// stvewx128 v48,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v48,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82452c60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82452C60;
loc_82452CAC:
	// stfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82462818) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// srawi r3,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824631F8) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r3,520
	ctx.r4.s64 = ctx.r3.s64 + 520;
	// addi r3,r3,524
	ctx.r3.s64 = ctx.r3.s64 + 524;
	// lwz r5,96(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 96);
	// bl 0x82463148
	ctx.lr = 0x82463218;
	sub_82463148(ctx, base);
	// lwz r10,100(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 100);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82463230
	if (!ctx.cr6.eq) goto loc_82463230;
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// addi r9,r11,9976
	ctx.r9.s64 = ctx.r11.s64 + 9976;
	// b 0x82463238
	goto loc_82463238;
loc_82463230:
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// addi r9,r11,23352
	ctx.r9.s64 = ctx.r11.s64 + 23352;
loc_82463238:
	// stw r9,488(r7)
	REX_STORE_U32(ctx.r7.u32 + 488, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82463270
	if (!ctx.cr6.eq) goto loc_82463270;
	// lwz r11,96(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 96);
	// cmpwi cr6,r11,61
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 61, ctx.xer);
	// bne cr6,0x8246325c
	if (!ctx.cr6.eq) goto loc_8246325C;
	// lis r11,-32184
	ctx.r11.s64 = -2109210624;
	// addi r9,r11,-32688
	ctx.r9.s64 = ctx.r11.s64 + -32688;
	// b 0x8246326c
	goto loc_8246326C;
loc_8246325C:
	// cmpwi cr6,r11,94
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 94, ctx.xer);
	// bne cr6,0x82463270
	if (!ctx.cr6.eq) goto loc_82463270;
	// lis r11,-32184
	ctx.r11.s64 = -2109210624;
	// addi r9,r11,-31440
	ctx.r9.s64 = ctx.r11.s64 + -31440;
loc_8246326C:
	// stw r9,488(r7)
	REX_STORE_U32(ctx.r7.u32 + 488, ctx.r9.u32);
loc_82463270:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82463288
	if (!ctx.cr6.eq) goto loc_82463288;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r10,r11,-14760
	ctx.r10.s64 = ctx.r11.s64 + -14760;
	// stw r10,488(r7)
	REX_STORE_U32(ctx.r7.u32 + 488, ctx.r10.u32);
loc_82463288:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82465240) {
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
	ctx.lr = 0x82465248;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82465460
	if (ctx.cr6.eq) goto loc_82465460;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82465460
	if (ctx.cr6.eq) goto loc_82465460;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82465460
	if (ctx.cr6.eq) goto loc_82465460;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// blt cr6,0x82465460
	if (ctx.cr6.lt) goto loc_82465460;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x82465460
	if (ctx.cr6.gt) goto loc_82465460;
	// mullw r22,r5,r5
	r22.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// rlwinm r5,r22,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x822d5870
	ctx.lr = 0x824652A4;
	sub_822D5870(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x824652e0
	if (!ctx.cr6.gt) goto loc_824652E0;
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_824652BC:
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// beq cr6,0x824652d0
	if (ctx.cr6.eq) goto loc_824652D0;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
loc_824652D0:
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stwx r10,r8,r26
	REX_STORE_U32(ctx.r8.u32 + r26.u32, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x824652bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824652BC;
loc_824652E0:
	// li r30,0
	r30.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8246532c
	if (!ctx.cr6.gt) goto loc_8246532C;
loc_824652F0:
	// addi r31,r29,1
	r31.s64 = r29.s64 + 1;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r3,r30,r27
	ctx.r3.u64 = r30.u64 + r27.u64;
	// bl 0x824650d8
	ctx.lr = 0x82465310;
	sub_824650D8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82465454
	if (ctx.cr6.lt) goto loc_82465454;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// mr r29,r31
	r29.u64 = r31.u64;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(r31.s32, r28.s32, ctx.xer);
	// blt cr6,0x824652f0
	if (ctx.cr6.lt) goto loc_824652F0;
loc_8246532C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x8246536c
	if (!ctx.cr6.gt) goto loc_8246536C;
	// lis r11,31
	ctx.r11.s64 = 2031616;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
	// addi r10,r26,-4
	ctx.r10.s64 = r26.s64 + -4;
	// lis r8,32
	ctx.r8.s64 = 2097152;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
loc_82465348:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8246535c
	if (ctx.cr6.lt) goto loc_8246535C;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x82465360
	goto loc_82465360;
loc_8246535C:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82465360:
	// rlwinm r11,r11,0,0,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFC00000;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82465348
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82465348;
loc_8246536C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(r22.s32, 4, ctx.xer);
	// lfs f0,-24472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24472);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x82465414
	if (ctx.cr6.lt) goto loc_82465414;
	// addi r9,r22,-3
	ctx.r9.s64 = r22.s64 + -3;
	// addi r11,r26,-4
	ctx.r11.s64 = r26.s64 + -4;
loc_82465388:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f5,96(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,12(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f1,104(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfsu f11,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// blt cr6,0x82465388
	if (ctx.cr6.lt) goto loc_82465388;
loc_82465414:
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r22.s32, ctx.xer);
	// bge cr6,0x82465454
	if (!ctx.cr6.lt) goto loc_82465454;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r22
	ctx.r10.u64 = r22.u64 - ctx.r10.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82465430:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfsu f10,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82465430
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82465430;
loc_82465454:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec0
	return;
loc_82465460:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82470C60) {
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
	ctx.lr = 0x82470C68;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8247137c
	if (ctx.cr6.eq) goto loc_8247137C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8247137c
	if (ctx.cr6.eq) goto loc_8247137C;
	// rlwinm r11,r4,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r5,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r5.u32);
	// stw r11,-396(r1)
	REX_STORE_U32(ctx.r1.u32 + -396, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82471370
	if (ctx.cr6.eq) goto loc_82471370;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r11,-356(r1)
	REX_STORE_U32(ctx.r1.u32 + -356, ctx.r11.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// addi r7,r11,-1840
	ctx.r7.s64 = ctx.r11.s64 + -1840;
	// addi r6,r10,-1868
	ctx.r6.s64 = ctx.r10.s64 + -1868;
	// lfd f0,-6048(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + -6048);
	// addi r4,r9,-1896
	ctx.r4.s64 = ctx.r9.s64 + -1896;
	// stw r7,-384(r1)
	REX_STORE_U32(ctx.r1.u32 + -384, ctx.r7.u32);
	// stw r6,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r6.u32);
	// stw r4,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r4.u32);
loc_82470CC0:
	// lwz r11,-396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -396);
	// lwz r7,-356(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82470cd4
	if (!ctx.cr6.lt) goto loc_82470CD4;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82470CD4:
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r7,-400(r1)
	REX_STORE_U32(ctx.r1.u32 + -400, ctx.r7.u32);
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// li r29,0
	r29.s64 = 0;
	// stw r11,-396(r1)
	REX_STORE_U32(ctx.r1.u32 + -396, ctx.r11.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82470CF8:
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// addi r10,r1,-352
	ctx.r10.s64 = ctx.r1.s64 + -352;
	// addi r6,r1,-320
	ctx.r6.s64 = ctx.r1.s64 + -320;
	// bge cr6,0x82470d40
	if (!ctx.cr6.lt) goto loc_82470D40;
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// lfsu f13,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// fmul f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 * ctx.f0.f64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// fctiwz f10,f12
	ctx.f10.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f10,-376(r1)
	REX_STORE_U64(ctx.r1.u32 + -376, ctx.f10.u64);
	// lwz r4,-372(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -372);
	// fctiwz f9,f11
	ctx.f9.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f9,-376(r1)
	REX_STORE_U64(ctx.r1.u32 + -376, ctx.f9.u64);
	// lwz r31,-372(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -372);
	// stwx r4,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// stwx r31,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, r31.u32);
	// b 0x82470d48
	goto loc_82470D48;
loc_82470D40:
	// stwx r29,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r29.u32);
	// stwx r29,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, r29.u32);
loc_82470D48:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82470cf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82470CF8;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lwz r16,-336(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// lwz r19,-340(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// lwz r22,-344(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// lwz r20,-348(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// lwz r17,-352(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r15,-304(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// lwz r18,-308(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// lwz r21,-312(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// lwz r28,-316(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// lwz r14,-320(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// stw r11,-376(r1)
	REX_STORE_U32(ctx.r1.u32 + -376, ctx.r11.u32);
loc_82470D84:
	// lwz r11,-368(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// addi r24,r1,-288
	r24.s64 = ctx.r1.s64 + -288;
	// lwz r10,-364(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// addi r23,r1,-256
	r23.s64 = ctx.r1.s64 + -256;
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
	// bgt cr6,0x82470dc8
	if (ctx.cr6.gt) goto loc_82470DC8;
	// subf r8,r11,r22
	ctx.r8.u64 = r22.u64 - ctx.r11.u64;
loc_82470DC8:
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
	// bgt cr6,0x82470de8
	if (ctx.cr6.gt) goto loc_82470DE8;
	// subf r9,r11,r19
	ctx.r9.u64 = r19.u64 - ctx.r11.u64;
loc_82470DE8:
	// mullw r10,r22,r25
	ctx.r10.s64 = int64_t(r22.s32) * int64_t(r25.s32);
	// mullw r11,r19,r26
	ctx.r11.s64 = int64_t(r19.s32) * int64_t(r26.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r16.s32, ctx.xer);
	// ble cr6,0x82470e0c
	if (!ctx.cr6.gt) goto loc_82470E0C;
	// subf r11,r16,r11
	ctx.r11.u64 = ctx.r11.u64 - r16.u64;
	// b 0x82470e10
	goto loc_82470E10;
loc_82470E0C:
	// subf r11,r11,r16
	ctx.r11.u64 = r16.u64 - ctx.r11.u64;
loc_82470E10:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// divw r7,r11,r4
	ctx.r7.u64 = uint32_t((ctx.r4.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r11.s32 / ctx.r4.s32 : 0);
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// bge cr6,0x82470e28
	if (!ctx.cr6.lt) goto loc_82470E28;
	// li r7,16
	ctx.r7.s64 = 16;
loc_82470E28:
	// mullw r11,r14,r25
	ctx.r11.s64 = int64_t(r14.s32) * int64_t(r25.s32);
	// mullw r10,r28,r26
	ctx.r10.s64 = int64_t(r28.s32) * int64_t(r26.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r21.s32, ctx.xer);
	// subf r8,r21,r11
	ctx.r8.u64 = ctx.r11.u64 - r21.u64;
	// bgt cr6,0x82470e4c
	if (ctx.cr6.gt) goto loc_82470E4C;
	// subf r8,r11,r21
	ctx.r8.u64 = r21.u64 - ctx.r11.u64;
loc_82470E4C:
	// mullw r11,r28,r25
	ctx.r11.s64 = int64_t(r28.s32) * int64_t(r25.s32);
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
	// bgt cr6,0x82470e6c
	if (ctx.cr6.gt) goto loc_82470E6C;
	// subf r9,r11,r18
	ctx.r9.u64 = r18.u64 - ctx.r11.u64;
loc_82470E6C:
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
	// ble cr6,0x82470e90
	if (!ctx.cr6.gt) goto loc_82470E90;
	// subf r11,r15,r11
	ctx.r11.u64 = ctx.r11.u64 - r15.u64;
	// b 0x82470e94
	goto loc_82470E94;
loc_82470E90:
	// subf r11,r11,r15
	ctx.r11.u64 = r15.u64 - ctx.r11.u64;
loc_82470E94:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// divw r3,r11,r4
	ctx.r3.u64 = uint32_t((ctx.r4.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r11.s32 / ctx.r4.s32 : 0);
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bge cr6,0x82470ea8
	if (!ctx.cr6.lt) goto loc_82470EA8;
	// li r3,16
	ctx.r3.s64 = 16;
loc_82470EA8:
	// addi r11,r1,-224
	ctx.r11.s64 = ctx.r1.s64 + -224;
	// lwz r10,-400(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -400);
	// addi r9,r1,-192
	ctx.r9.s64 = ctx.r1.s64 + -192;
	// mr r31,r20
	r31.u64 = r20.u64;
	// mr r27,r28
	r27.u64 = r28.u64;
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
	// ble cr6,0x82471070
	if (!ctx.cr6.gt) goto loc_82471070;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,-376(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -376);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r4,r10,-4
	ctx.r4.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82470EE8:
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mullw r10,r31,r26
	ctx.r10.s64 = int64_t(r31.s32) * int64_t(r26.s32);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// mullw r11,r30,r25
	ctx.r11.s64 = int64_t(r30.s32) * int64_t(r25.s32);
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-392(r1)
	REX_STORE_U64(ctx.r1.u32 + -392, ctx.f11.u64);
	// lwz r9,-388(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -388);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r11,r11,r6
	ctx.r11.u64 = uint32_t((ctx.r6.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r11.s32 / ctx.r6.s32 : 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// andc r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r8.u64;
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x82470f3c
	if (!ctx.cr6.gt) goto loc_82470F3C;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82470f48
	goto loc_82470F48;
loc_82470F3C:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x82470f48
	if (!ctx.cr6.lt) goto loc_82470F48;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_82470F48:
	// mullw r8,r11,r6
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x82470f60
	if (!ctx.cr6.gt) goto loc_82470F60;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x82470f6c
	goto loc_82470F6C;
loc_82470F60:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x82470f6c
	if (!ctx.cr6.lt) goto loc_82470F6C;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_82470F6C:
	// lwz r8,-384(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// rlwinm r11,r11,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// mullw r6,r8,r6
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// srawi r6,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// cmpwi cr6,r6,16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16, ctx.xer);
	// bge cr6,0x82470f8c
	if (!ctx.cr6.lt) goto loc_82470F8C;
	// li r6,16
	ctx.r6.s64 = 16;
loc_82470F8C:
	// lfsu f13,4(r4)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r4.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r4.u32 = ea;
	// subf r30,r9,r10
	r30.u64 = ctx.r10.u64 - ctx.r9.u64;
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64;
	// mullw r11,r7,r25
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(r25.s32);
	// lwzx r8,r29,r24
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + r24.u32);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-392(r1)
	REX_STORE_U64(ctx.r1.u32 + -392, ctx.f12.u64);
	// mullw r9,r27,r26
	ctx.r9.s64 = int64_t(r27.s32) * int64_t(r26.s32);
	// mullw r30,r30,r30
	r30.s64 = int64_t(r30.s32) * int64_t(r30.s32);
	// lwz r7,-388(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -388);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r11,r30,7
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7F) != 0);
	ctx.r11.s64 = r30.s32 >> 7;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// stwx r8,r29,r24
	REX_STORE_U32(r29.u32 + r24.u32, ctx.r8.u32);
	// mr r30,r31
	r30.u64 = r31.u64;
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r11,r11,r3
	ctx.r11.u64 = uint32_t((ctx.r3.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r11.s32 / ctx.r3.s32 : 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 & ~ctx.r8.u64;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x82470ffc
	if (!ctx.cr6.gt) goto loc_82470FFC;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82471008
	goto loc_82471008;
loc_82470FFC:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x82471008
	if (!ctx.cr6.lt) goto loc_82471008;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_82471008:
	// mullw r10,r11,r3
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x82471020
	if (!ctx.cr6.gt) goto loc_82471020;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x8247102c
	goto loc_8247102C;
loc_82471020:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x8247102c
	if (!ctx.cr6.lt) goto loc_8247102C;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_8247102C:
	// lwz r9,-384(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
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
	// bge cr6,0x8247104c
	if (!ctx.cr6.lt) goto loc_8247104C;
	// li r3,16
	ctx.r3.s64 = 16;
loc_8247104C:
	// subf r11,r7,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r7.u64;
	// lwzx r9,r29,r23
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + r23.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mullw r8,r11,r11
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 7;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r11,r29,r23
	REX_STORE_U32(r29.u32 + r23.u32, ctx.r11.u32);
	// bdnz 0x82470ee8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82470EE8;
loc_82471070:
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r29,28
	ctx.cr6.compare<uint32_t>(r29.u32, 28, ctx.xer);
	// blt cr6,0x82470d84
	if (ctx.cr6.lt) goto loc_82470D84;
	// lwz r9,-288(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,-284(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,-256(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x824710a0
	if (!ctx.cr6.lt) goto loc_824710A0;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_824710A0:
	// lwz r8,-252(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x824710b4
	if (!ctx.cr6.lt) goto loc_824710B4;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_824710B4:
	// lwz r8,-280(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x824710c8
	if (!ctx.cr6.lt) goto loc_824710C8;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_824710C8:
	// lwz r8,-248(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x824710dc
	if (!ctx.cr6.lt) goto loc_824710DC;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_824710DC:
	// lwz r8,-276(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x824710f0
	if (!ctx.cr6.lt) goto loc_824710F0;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_824710F0:
	// lwz r8,-244(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82471104
	if (!ctx.cr6.lt) goto loc_82471104;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_82471104:
	// lwz r8,-272(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82471118
	if (!ctx.cr6.lt) goto loc_82471118;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82471118:
	// lwz r8,-240(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8247112c
	if (!ctx.cr6.lt) goto loc_8247112C;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_8247112C:
	// lwz r8,-268(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82471140
	if (!ctx.cr6.lt) goto loc_82471140;
	// li r10,5
	ctx.r10.s64 = 5;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82471140:
	// lwz r8,-236(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82471154
	if (!ctx.cr6.lt) goto loc_82471154;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_82471154:
	// lwz r8,-264(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82471164
	if (!ctx.cr6.lt) goto loc_82471164;
	// li r10,6
	ctx.r10.s64 = 6;
loc_82471164:
	// lwz r9,-232(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82471174
	if (!ctx.cr6.lt) goto loc_82471174;
	// li r11,6
	ctx.r11.s64 = 6;
loc_82471174:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,-400(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -400);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// lwz r11,-368(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-376(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -376);
	// addi r8,r1,-224
	ctx.r8.s64 = ctx.r1.s64 + -224;
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// mr r29,r20
	r29.u64 = r20.u64;
	// lwzx r27,r9,r11
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// mr r23,r28
	r23.u64 = r28.u64;
	// lwzx r25,r4,r11
	r25.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// mr r31,r20
	r31.u64 = r20.u64;
	// lwz r11,-364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// lwzx r8,r4,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lwzx r7,r9,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r24,r4,r11
	r24.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwzx r26,r9,r11
	r26.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addic. r11,r6,-2
	ctx.xer.ca = ctx.r6.u32 > 1;
	ctx.r11.s64 = ctx.r6.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r10,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// stbu r30,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U8(ea, r30.u8);
	ctx.r5.u32 = ea;
	// mr r30,r14
	r30.u64 = r14.u64;
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
	// sthu r28,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, r28.u16);
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
	// beq 0x82471364
	if (ctx.cr0.eq) goto loc_82471364;
	// lwz r23,-384(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824711F8:
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mullw r11,r24,r4
	ctx.r11.s64 = int64_t(r24.s32) * int64_t(ctx.r4.s32);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// mullw r10,r25,r31
	ctx.r10.s64 = int64_t(r25.s32) * int64_t(r31.s32);
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-392(r1)
	REX_STORE_U64(ctx.r1.u32 + -392, ctx.f11.u64);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r10,-388(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -388);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r29,r9,r8
	r29.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(r29.s32, 7, ctx.xer);
	// andc r3,r8,r4
	ctx.r3.u64 = ctx.r8.u64 & ~ctx.r4.u64;
	// twlgei r3,-1
	if (ctx.r3.s32 == -1 || ctx.r3.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x8247124c
	if (!ctx.cr6.gt) goto loc_8247124C;
	// li r29,7
	r29.s64 = 7;
	// b 0x82471258
	goto loc_82471258;
loc_8247124C:
	// cmpwi cr6,r29,-8
	ctx.cr6.compare<int32_t>(r29.s32, -8, ctx.xer);
	// bge cr6,0x82471258
	if (!ctx.cr6.lt) goto loc_82471258;
	// li r29,-8
	r29.s64 = -8;
loc_82471258:
	// mullw r10,r29,r8
	ctx.r10.s64 = int64_t(r29.s32) * int64_t(ctx.r8.s32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,32767
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32767, ctx.xer);
	// ble cr6,0x82471270
	if (!ctx.cr6.gt) goto loc_82471270;
	// li r9,32767
	ctx.r9.s64 = 32767;
	// b 0x8247127c
	goto loc_8247127C;
loc_82471270:
	// cmpwi cr6,r9,-32768
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -32768, ctx.xer);
	// bge cr6,0x8247127c
	if (!ctx.cr6.lt) goto loc_8247127C;
	// li r9,-32768
	ctx.r9.s64 = -32768;
loc_8247127C:
	// rlwinm r11,r29,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0x3C;
	// lwzx r10,r11,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// mullw r8,r10,r8
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// bge cr6,0x82471298
	if (!ctx.cr6.lt) goto loc_82471298;
	// li r8,16
	ctx.r8.s64 = 16;
loc_82471298:
	// lfs f13,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mullw r10,r27,r28
	ctx.r10.s64 = int64_t(r27.s32) * int64_t(r28.s32);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// mullw r11,r26,r30
	ctx.r11.s64 = int64_t(r26.s32) * int64_t(r30.s32);
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-392(r1)
	REX_STORE_U64(ctx.r1.u32 + -392, ctx.f11.u64);
	// lwz r3,-388(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -388);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// subf r3,r10,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r10.u64;
	// rotlwi r9,r3,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r11,r3,r7
	ctx.r11.u64 = uint32_t((ctx.r7.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r3.s32 / ctx.r7.s32 : 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ~ctx.r9.u64;
	// addi r3,r6,4
	ctx.r3.s64 = ctx.r6.s64 + 4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x824712f4
	if (!ctx.cr6.gt) goto loc_824712F4;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82471300
	goto loc_82471300;
loc_824712F4:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x82471300
	if (!ctx.cr6.lt) goto loc_82471300;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_82471300:
	// mullw r9,r11,r7
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x82471318
	if (!ctx.cr6.gt) goto loc_82471318;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x82471324
	goto loc_82471324;
loc_82471318:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x82471324
	if (!ctx.cr6.lt) goto loc_82471324;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_82471324:
	// rlwinm r9,r11,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// lwzx r6,r9,r23
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + r23.u32);
	// mullw r9,r6,r7
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// srawi r7,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 8;
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// bge cr6,0x82471344
	if (!ctx.cr6.lt) goto loc_82471344;
	// li r7,16
	ctx.r7.s64 = 16;
loc_82471344:
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r30,r28
	r30.u64 = r28.u64;
	// or r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 | ctx.r11.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// stb r11,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bdnz 0x824711f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824711F8;
loc_82471364:
	// lwz r11,-396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82470cc0
	if (!ctx.cr6.eq) goto loc_82470CC0;
loc_82471370:
	// lwz r11,-360(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// subf r3,r11,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r11.u64;
	// b 0x822d4ea0
	return;
loc_8247137C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_824A78D8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e8c
	ctx.lr = 0x824A78E0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,1120
	ctx.r5.s64 = 1120;
	// vspltish v9,15
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0xF)));
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// vspltish v11,5
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x5)));
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vrlh v8,v12,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, result);
	}
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// vspltish v31,1
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// lvx128 v10,r6,r5
	ea = (ctx.r6.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 3;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// li r3,1
	ctx.r3.s64 = 1;
	// vaddshs v30,v9,v10
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// vsubshs v2,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// slw r5,r3,r4
	ctx.r5.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r4.u8 & 0x3F));
	// li r10,16
	ctx.r10.s64 = 16;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bne cr6,0x824a7a84
	if (!ctx.cr6.eq) goto loc_824A7A84;
	// lvx128 v60,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lvx128 v61,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v62,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v7,v58,v59,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrghb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v4,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x824a7c70
	if (!ctx.cr6.gt) goto loc_824A7C70;
	// li r9,0
	ctx.r9.s64 = 0;
loc_824A79A4:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vslh v6,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vslh v3,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// vadduhm v24,v6,v10
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// lvx128 v57,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v29,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v28,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v27,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// vperm128 v6,v56,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vadduhm v23,v3,v9
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vor v5,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// vor v4,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vslh v22,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v8,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v7,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v10,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v9,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vmrglb v7,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v18,v29,v1
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v17,v27,v28
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v3,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v14,v21,v22
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v6,v24,v18
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v1,v23,v17
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vslh v16,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v29,v0,v26
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vsubshs v27,v0,v25
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vadduhm v28,v6,v14
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vadduhm v26,v1,v3
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsubshs v25,v8,v16
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vsubshs v24,v7,v15
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vadduhm v23,v28,v30
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v22,v26,v30
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v21,v25,v29
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v20,v24,v27
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v6,v23,v21
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vadduhm v3,v22,v20
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vsrah v19,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v19,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v18,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r6,48
	ctx.r6.s64 = ctx.r6.s64 + 48;
	// blt cr6,0x824a79a4
	if (ctx.cr6.lt) goto loc_824A79A4;
	// b 0x824a7c70
	goto loc_824A7C70;
loc_824A7A84:
	// li r3,32
	ctx.r3.s64 = 32;
	// lvrx128 v52,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v50,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lvlx128 v55,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v54,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v6,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvrx128 v51,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lvrx128 v49,r3,r9
	temp.u32 = ctx.r3.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvlx128 v48,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v5,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vor128 v8,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v7,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v1,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v4,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v1,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x824a7c70
	if (!ctx.cr6.gt) goto loc_824A7C70;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r29,32
	ctx.r10.s64 = r29.s64 + 32;
	// li r30,-32
	r30.s64 = -32;
	// li r31,-16
	r31.s64 = -16;
loc_824A7B10:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vor v29,v10,v10
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vor v7,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vor v28,v9,v9
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// vor v9,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v6,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v25,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v42,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v3,v43,v63,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vslh v24,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor128 v41,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// lvsl v2,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v22,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v20,v0,v3
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v15,v25,v10
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vperm128 v21,v63,v42,v2
	simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vadduhm v25,v23,v24
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vadduhm v17,v26,v1
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vmrghb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v27,v8,v8
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vslh v19,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v7,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v16,v0,v21
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v8,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vadduhm v24,v22,v9
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v14,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v6,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v1,v20,v20
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)v20.u8));
	// vadduhm v21,v18,v19
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v20,v15,v17
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vslh v23,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v26,v14
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vadduhm v18,v24,v25
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vslh v22,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v5,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vslh v14,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v20,v21
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vsubshs v26,v0,v23
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vadduhm v23,v18,v19
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v20,v15,v17
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vsubshs v24,v0,v22
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vor v4,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)v16.u8));
	// vadduhm v19,v14,v8
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vsubshs v18,v3,v29
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vsubshs v17,v1,v28
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vslh v22,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v5,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v25,v30
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vslh v14,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v23,v30
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v27,v19,v20
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v25,v17,v24
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vadduhm v28,v21,v22
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v26,v18,v26
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vslh v29,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v15,v25
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vsubshs v24,v0,v14
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vadduhm v21,v16,v26
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vsubshs v23,v4,v29
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vadduhm v22,v27,v28
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vsrah v16,v20,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v19,v23,v24
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vadduhm v18,v22,v30
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// stvx128 v16,r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r10,r30
	ea = (ctx.r10.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v15,v18,v19
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vsrah v14,v15,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// vor128 v2,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// stvx128 v14,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// blt cr6,0x824a7b10
	if (ctx.cr6.lt) goto loc_824A7B10;
loc_824A7C70:
	// li r5,0
	ctx.r5.s64 = 0;
	// vspltish v1,7
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x7)));
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a7160
	ctx.lr = 0x824A7C84;
	sub_824A7160(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_824B8350) {
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
	ctx.lr = 0x824B8358;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,24(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r4,624(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 624);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lbz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r27,r3,168
	r27.s64 = ctx.r3.s64 + 168;
	// lwz r6,4(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r29,40(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r5,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r29
	ea = (r29.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x824b83c0
	if (ctx.cr6.lt) goto loc_824B83C0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x8235f5b0
	ctx.lr = 0x824B83B8;
	sub_8235F5B0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x824b8420
	goto loc_824B8420;
loc_824B83C0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x824b841c
	if (!ctx.cr6.gt) goto loc_824B841C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824B83CC:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r5,26
	ctx.r8.u64 = ctx.r5.u32 & 0x3F;
	// rlwinm r3,r5,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r3,r7
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r5,r5,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// lbzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lbzx r25,r27,r3
	r25.u64 = REX_LOAD_U8(r27.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r25,r9
	ctx.r9.u64 = r25.u64 | ctx.r9.u64;
	// sthx r8,r3,r29
	REX_STORE_U16(ctx.r3.u32 + r29.u32, ctx.r8.u16);
	// bdnz 0x824b83cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B83CC;
loc_824B841C:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_824B8420:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824b8488
	if (!ctx.cr6.eq) goto loc_824B8488;
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// srawi r11,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 3;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwinm r6,r7,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// rldicr r4,r5,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// std r3,112(r30)
	REX_STORE_U64(r30.u32 + 112, ctx.r3.u64);
	// std r3,96(r30)
	REX_STORE_U64(r30.u32 + 96, ctx.r3.u64);
	// std r3,80(r30)
	REX_STORE_U64(r30.u32 + 80, ctx.r3.u64);
	// std r3,64(r30)
	REX_STORE_U64(r30.u32 + 64, ctx.r3.u64);
	// std r3,48(r30)
	REX_STORE_U64(r30.u32 + 48, ctx.r3.u64);
	// std r3,32(r30)
	REX_STORE_U64(r30.u32 + 32, ctx.r3.u64);
	// std r3,16(r30)
	REX_STORE_U64(r30.u32 + 16, ctx.r3.u64);
	// std r3,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r3.u64);
	// b 0x824b8494
	goto loc_824B8494;
loc_824B8488:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a5fb8
	ctx.lr = 0x824B8494;
	sub_824A5FB8(ctx, base);
loc_824B8494:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,624(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 624);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r6,4(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r29,40(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r5,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r29
	ea = (r29.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x824b84e8
	if (ctx.cr6.lt) goto loc_824B84E8;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8235f5b0
	ctx.lr = 0x824B84E0;
	sub_8235F5B0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x824b8548
	goto loc_824B8548;
loc_824B84E8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x824b8544
	if (!ctx.cr6.gt) goto loc_824B8544;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824B84F4:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r5,26
	ctx.r8.u64 = ctx.r5.u32 & 0x3F;
	// rlwinm r3,r5,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r3,r7
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r5,r5,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// lbzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lbzx r28,r27,r3
	r28.u64 = REX_LOAD_U8(r27.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r28,r9
	ctx.r9.u64 = r28.u64 | ctx.r9.u64;
	// sthx r8,r3,r29
	REX_STORE_U16(ctx.r3.u32 + r29.u32, ctx.r8.u16);
	// bdnz 0x824b84f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B84F4;
loc_824B8544:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_824B8548:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824b85b4
	if (!ctx.cr6.eq) goto loc_824B85B4;
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// srawi r11,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 3;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwinm r6,r7,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// rldicr r4,r5,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// std r3,120(r30)
	REX_STORE_U64(r30.u32 + 120, ctx.r3.u64);
	// std r3,104(r30)
	REX_STORE_U64(r30.u32 + 104, ctx.r3.u64);
	// std r3,88(r30)
	REX_STORE_U64(r30.u32 + 88, ctx.r3.u64);
	// std r3,72(r30)
	REX_STORE_U64(r30.u32 + 72, ctx.r3.u64);
	// std r3,56(r30)
	REX_STORE_U64(r30.u32 + 56, ctx.r3.u64);
	// std r3,40(r30)
	REX_STORE_U64(r30.u32 + 40, ctx.r3.u64);
	// std r3,24(r30)
	REX_STORE_U64(r30.u32 + 24, ctx.r3.u64);
	// std r3,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r3.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_824B85B4:
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a5fb8
	ctx.lr = 0x824B85C0;
	sub_824A5FB8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_824D1FD0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r9,r11,-26680
	ctx.r9.s64 = ctx.r11.s64 + -26680;
	// addi r11,r10,-22440
	ctx.r11.s64 = ctx.r10.s64 + -22440;
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

DEFINE_REX_FUNC(sub_824D2228) {
	REX_FUNC_PROLOGUE();
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-20200
	ctx.r11.s64 = ctx.r11.s64 + -20200;
	// lis r5,512
	ctx.r5.s64 = 33554432;
	// lwz r9,-29316(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -29316);
	// lis r4,512
	ctx.r4.s64 = 33554432;
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r5,r5,135
	ctx.r5.u64 = ctx.r5.u64 | 135;
	// ori r4,r4,136
	ctx.r4.u64 = ctx.r4.u64 | 136;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r9,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r9.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// sth r10,114(r11)
	REX_STORE_U16(ctx.r11.u32 + 114, ctx.r10.u16);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// sth r10,116(r11)
	REX_STORE_U16(ctx.r11.u32 + 116, ctx.r10.u16);
	// addi r9,r11,114
	ctx.r9.s64 = ctx.r11.s64 + 114;
	// sth r10,118(r11)
	REX_STORE_U16(ctx.r11.u32 + 118, ctx.r10.u16);
	// sth r10,120(r11)
	REX_STORE_U16(ctx.r11.u32 + 120, ctx.r10.u16);
	// sth r10,122(r11)
	REX_STORE_U16(ctx.r11.u32 + 122, ctx.r10.u16);
	// stw r10,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// stw r10,128(r11)
	REX_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// stw r7,132(r11)
	REX_STORE_U32(ctx.r11.u32 + 132, ctx.r7.u32);
	// stw r10,136(r11)
	REX_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// stw r5,140(r11)
	REX_STORE_U32(ctx.r11.u32 + 140, ctx.r5.u32);
	// stw r4,144(r11)
	REX_STORE_U32(ctx.r11.u32 + 144, ctx.r4.u32);
	// stw r10,148(r11)
	REX_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D2EF0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r3,r11,-5864
	ctx.r3.s64 = ctx.r11.s64 + -5864;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822d5870
	sub_822D5870(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D2FF0) {
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
	// addi r31,r11,23872
	r31.s64 = ctx.r11.s64 + 23872;
	// addi r3,r31,512
	ctx.r3.s64 = r31.s64 + 512;
	// bl 0x824d440c
	ctx.lr = 0x824D3010;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x824D3020;
	sub_822D5870(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,14968
	ctx.r3.s64 = ctx.r11.s64 + 14968;
	// bl 0x822d5848
	ctx.lr = 0x824D302C;
	sub_822D5848(ctx, base);
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

DEFINE_REX_FUNC(sub_824D3578) {
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
	// li r5,484
	ctx.r5.s64 = 484;
	// addi r31,r11,25592
	r31.s64 = ctx.r11.s64 + 25592;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x822d5870
	ctx.lr = 0x824D35A0;
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
	ctx.lr = 0x824D35B4;
	sub_822D4FA0(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = r31.s64 + 600;
	// bl 0x822d5870
	ctx.lr = 0x824D35C4;
	sub_822D5870(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,11
	ctx.r9.s64 = 11;
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

DEFINE_REX_FUNC(sub_824D3CF0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,26696
	ctx.r3.s64 = ctx.r11.s64 + 26696;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3E50) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,30176
	ctx.r3.s64 = ctx.r11.s64 + 30176;
	// b 0x8227cc90
	sub_8227CC90(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3FD0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20001a4
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4130) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100c4
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D42A0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100f1
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4420) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100ee
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D45A0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100b0
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4720) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000040
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D48A0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000208
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4A20) {
	REX_FUNC_PROLOGUE();
	// .long 0x201013d
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4BA0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101f8
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

