#include "soulcalibur2_funcs.20.h"

DEFINE_REX_FUNC(sub_820E0D78) {
	REX_FUNC_PROLOGUE();
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
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f29.u64);
	// stfd f30,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,64
	ctx.r5.s64 = 64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// bl 0x822d4fa0
	ctx.lr = 0x820E0DAC;
	sub_822D4FA0(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lfs f11,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// lfs f10,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * f30.f64));
	// lfs f9,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 * f30.f64));
	// lfs f8,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f30
	ctx.f9.f64 = double(float(ctx.f9.f64 * f30.f64));
	// lfs f7,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f29
	ctx.f8.f64 = double(float(ctx.f8.f64 * f29.f64));
	// lfs f6,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f29
	ctx.f7.f64 = double(float(ctx.f7.f64 * f29.f64));
	// fmuls f6,f6,f29
	ctx.f6.f64 = double(float(ctx.f6.f64 * f29.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f10,20(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f9,24(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f8,32(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f7,36(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f6,40(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820EC308) {
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
	ctx.lr = 0x820EC310;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-28232
	ctx.r3.s64 = ctx.r11.s64 + -28232;
	// bl 0x82202540
	ctx.lr = 0x820EC328;
	sub_82202540(ctx, base);
	// lhz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 528);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,532(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 532);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r29,40(r31)
	REX_STORE_U32(r31.u32 + 40, r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r9,16756
	ctx.r5.s64 = ctx.r9.s64 + 16756;
	// stw r11,524(r31)
	REX_STORE_U32(r31.u32 + 524, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,6256(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6256);
	// bl 0x821af9d8
	ctx.lr = 0x820EC358;
	sub_821AF9D8(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// lwz r11,532(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 532);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,16736
	ctx.r5.s64 = ctx.r10.s64 + 16736;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6256(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6256);
	// bl 0x821af9d8
	ctx.lr = 0x820EC378;
	sub_821AF9D8(ctx, base);
	// lwz r11,524(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 524);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// lhz r10,2(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820ec508
	if (ctx.cr6.lt) goto loc_820EC508;
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// stw r29,36(r31)
	REX_STORE_U32(r31.u32 + 36, r29.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r25,1
	r25.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r25,108(r31)
	REX_STORE_U32(r31.u32 + 108, r25.u32);
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// mr r24,r29
	r24.u64 = r29.u64;
	// stw r9,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// mr r27,r29
	r27.u64 = r29.u64;
	// lhz r30,24(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 24);
loc_820EC3BC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821ff168
	ctx.lr = 0x820EC3C4;
	sub_821FF168(ctx, base);
	// lwz r11,524(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 524);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mulli r11,r11,20
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(20));
	// stw r3,520(r31)
	REX_STORE_U32(r31.u32 + 520, ctx.r3.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r8,532(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 532);
	// lwz r7,632(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 632);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// mulli r28,r9,60
	r28.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(60));
	// add r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 + r28.u64;
	// lhz r10,54(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 54);
	// lhz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 52);
	// bne cr6,0x820ec42c
	if (!ctx.cr6.eq) goto loc_820EC42C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820ec438
	if (ctx.cr6.lt) goto loc_820EC438;
	// bne cr6,0x820ec41c
	if (!ctx.cr6.eq) goto loc_820EC41C;
loc_820EC414:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x820ec440
	if (ctx.cr6.eq) goto loc_820EC440;
loc_820EC41C:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmpwi cr6,r24,100
	ctx.cr6.compare<int32_t>(r24.s32, 100, ctx.xer);
	// blt cr6,0x820ec3bc
	if (ctx.cr6.lt) goto loc_820EC3BC;
	// b 0x820ec448
	goto loc_820EC448;
loc_820EC42C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820ec414
	if (ctx.cr6.lt) goto loc_820EC414;
	// bne cr6,0x820ec41c
	if (!ctx.cr6.eq) goto loc_820EC41C;
loc_820EC438:
	// stw r29,40(r31)
	REX_STORE_U32(r31.u32 + 40, r29.u32);
	// b 0x820ec444
	goto loc_820EC444;
loc_820EC440:
	// stw r25,40(r31)
	REX_STORE_U32(r31.u32 + 40, r25.u32);
loc_820EC444:
	// mr r27,r25
	r27.u64 = r25.u64;
loc_820EC448:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// beq cr6,0x820ec508
	if (ctx.cr6.eq) goto loc_820EC508;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x820ec508
	if (ctx.cr6.eq) goto loc_820EC508;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r27,r11,32336
	r27.s64 = ctx.r11.s64 + 32336;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,16720
	ctx.r5.s64 = ctx.r10.s64 + 16720;
	// addi r4,r9,2
	ctx.r4.s64 = ctx.r9.s64 + 2;
	// lwz r30,4892(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 4892);
	// stw r29,164(r30)
	REX_STORE_U32(r30.u32 + 164, r29.u32);
	// lwz r11,532(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 532);
	// lwz r3,6256(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6256);
	// bl 0x821af9d8
	ctx.lr = 0x820EC484;
	sub_821AF9D8(ctx, base);
	// stw r3,168(r30)
	REX_STORE_U32(r30.u32 + 168, ctx.r3.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lhz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 56);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,504(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 504, temp.u32);
	// lhz r11,58(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 58);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,508(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 508, temp.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// lwz r11,4892(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4892);
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// stw r11,372(r31)
	REX_STORE_U32(r31.u32 + 372, ctx.r11.u32);
	// lhz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stw r29,512(r31)
	REX_STORE_U32(r31.u32 + 512, r29.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,480(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 480, temp.u32);
	// b 0x820ec510
	goto loc_820EC510;
loc_820EC508:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,512(r31)
	REX_STORE_U32(r31.u32 + 512, ctx.r11.u32);
loc_820EC510:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_820F96B8) {
	REX_FUNC_PROLOGUE();
	// lhz r11,2076(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 2076);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820f972c
	if (!ctx.cr6.gt) goto loc_820F972C;
	// addi r8,r3,48
	ctx.r8.s64 = ctx.r3.s64 + 48;
loc_820F96D8:
	// lhz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// lwz r9,40(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mulli r10,r10,48
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(48));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r10,47(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 47);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x820f9718
	if (ctx.cr6.gt) goto loc_820F9718;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f9718
	if (ctx.cr6.eq) goto loc_820F9718;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r9,r10,24
	ctx.r9.s64 = ctx.r10.s64 + 24;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// sthx r11,r9,r3
	REX_STORE_U16(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u16);
loc_820F9718:
	// lhz r11,2076(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 2076);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820f96d8
	if (ctx.cr6.lt) goto loc_820F96D8;
loc_820F972C:
	// sth r7,2076(r3)
	REX_STORE_U16(ctx.r3.u32 + 2076, ctx.r7.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FC0D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r9,r11,8924
	ctx.r9.s64 = ctx.r11.s64 + 8924;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r9,-56
	ctx.r11.s64 = ctx.r9.s64 + -56;
	// stw r10,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820FC0FC:
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
	// bdnz 0x820fc0fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FC0FC;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820FC150:
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
	// bdnz 0x820fc150
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FC150;
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

DEFINE_REX_FUNC(sub_820FE630) {
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
	// blt cr6,0x820fe6ec
	if (ctx.cr6.lt) goto loc_820FE6EC;
	// beq cr6,0x820fe6cc
	if (ctx.cr6.eq) goto loc_820FE6CC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x820fe68c
	if (ctx.cr6.lt) goto loc_820FE68C;
	// bne cr6,0x820fe740
	if (!ctx.cr6.eq) goto loc_820FE740;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x820f8d58
	ctx.lr = 0x820FE674;
	sub_820F8D58(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lbz r11,165(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 165);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fe740
	if (!ctx.cr0.eq) goto loc_820FE740;
loc_820FE684:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820fe73c
	goto loc_820FE73C;
loc_820FE68C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x820f8d58
	ctx.lr = 0x820FE69C;
	sub_820F8D58(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lbz r11,165(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 165);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820fe6b4
	if (ctx.cr0.eq) goto loc_820FE6B4;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x820fe73c
	goto loc_820FE73C;
loc_820FE6B4:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// ble cr6,0x820fe740
	if (!ctx.cr6.gt) goto loc_820FE740;
	// b 0x820fe684
	goto loc_820FE684;
loc_820FE6CC:
	// li r5,4096
	ctx.r5.s64 = 4096;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x820f8d58
	ctx.lr = 0x820FE6DC;
	sub_820F8D58(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// b 0x820fe73c
	goto loc_820FE73C;
loc_820FE6EC:
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FE700;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fe728
	if (!ctx.cr0.eq) goto loc_820FE728;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r11,586(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 586);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820fe728
	if (ctx.cr0.eq) goto loc_820FE728;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FE724;
	sub_820F8D58(ctx, base);
	// b 0x820fe740
	goto loc_820FE740;
loc_820FE728:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FE738;
	sub_820F8D58(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FE73C:
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_820FE740:
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

DEFINE_REX_FUNC(sub_82106460) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82106488
	if (!ctx.cr6.eq) goto loc_82106488;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82106528
	goto loc_82106528;
loc_82106488:
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r31,r11,22576
	r31.s64 = ctx.r11.s64 + 22576;
	// addi r11,r10,432
	ctx.r11.s64 = ctx.r10.s64 + 432;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// stw r30,148(r31)
	REX_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x8245e260
	ctx.lr = 0x821064A4;
	sub_8245E260(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// ori r11,r11,3696
	ctx.r11.u64 = ctx.r11.u64 | 3696;
	// addi r10,r10,-7072
	ctx.r10.s64 = ctx.r10.s64 + -7072;
	// mullw r11,r3,r11
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821064d4
	if (!ctx.cr6.eq) goto loc_821064D4;
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x821064d8
	goto loc_821064D8;
loc_821064D4:
	// lbz r11,127(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 127);
loc_821064D8:
	// stw r11,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r11.u32);
	// lwz r3,168(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 168);
	// bl 0x821003c0
	ctx.lr = 0x821064E4;
	sub_821003C0(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82106528
	if (!ctx.cr6.eq) goto loc_82106528;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82106528
	if (!ctx.cr6.eq) goto loc_82106528;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,14
	ctx.r3.s64 = 14;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x82106514;
	sub_8212BC38(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82104c60
	ctx.lr = 0x82106528;
	sub_82104C60(ctx, base);
loc_82106528:
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

DEFINE_REX_FUNC(sub_82108DD8) {
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
	ctx.lr = 0x82108DE0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r6,r8,27884
	ctx.r6.s64 = ctx.r8.s64 + 27884;
	// addi r9,r10,26592
	ctx.r9.s64 = ctx.r10.s64 + 26592;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x821f7d50
	ctx.lr = 0x82108E10;
	sub_821F7D50(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82108e30
	if (ctx.cr0.eq) goto loc_82108E30;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82108e34
	goto loc_82108E34;
loc_82108E30:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82108E34:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r11,-8304
	r29.s64 = ctx.r11.s64 + -8304;
	// addi r28,r10,27852
	r28.s64 = ctx.r10.s64 + 27852;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,324(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 324);
	// bl 0x821af9d8
	ctx.lr = 0x82108E58;
	sub_821AF9D8(ctx, base);
	// bl 0x820e4bb0
	ctx.lr = 0x82108E5C;
	sub_820E4BB0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,324(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 324);
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x821af9d8
	ctx.lr = 0x82108E70;
	sub_821AF9D8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// stw r3,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r30,104(r31)
	REX_STORE_U8(r31.u32 + 104, r30.u8);
	// li r8,6
	ctx.r8.s64 = 6;
	// stb r30,108(r31)
	REX_STORE_U8(r31.u32 + 108, r30.u8);
	// stb r11,106(r31)
	REX_STORE_U8(r31.u32 + 106, ctx.r11.u8);
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stb r8,105(r31)
	REX_STORE_U8(r31.u32 + 105, ctx.r8.u8);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// stw r11,23636(r9)
	REX_STORE_U32(ctx.r9.u32 + 23636, ctx.r11.u32);
	// stb r11,90(r31)
	REX_STORE_U8(r31.u32 + 90, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8210EE18) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// b 0x8210e1f8
	sub_8210E1F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8210F0A8) {
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
	ctx.lr = 0x8210F0B0;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f34
	ctx.lr = 0x8210F0B8;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// li r31,0
	r31.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lfs f30,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f30.f64 = double(temp.f32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stfs f30,128(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mullw r23,r5,r6
	r23.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// stfs f30,132(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// std r31,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r31.u64);
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ble cr6,0x8210f114
	if (!ctx.cr6.gt) goto loc_8210F114;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r27,100
	r27.s64 = 100;
	// li r26,100
	r26.s64 = 100;
	// lfs f13,26624(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26624);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8210f124
	goto loc_8210F124;
loc_8210F114:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r27,128
	r27.s64 = 128;
	// li r26,128
	r26.s64 = 128;
	// lfs f13,26620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26620);
	ctx.f13.f64 = double(temp.f32);
loc_8210F124:
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// fmr f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64;
	// extsw r10,r30
	ctx.r10.s64 = r30.s32;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfs f0,-8492(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8492);
	ctx.f0.f64 = double(temp.f32);
	// fadds f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f31,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f31.f64 = double(temp.f32);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// lfs f0,15632(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15632);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,15628(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15628);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-8496(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -8496);
	ctx.f12.f64 = double(temp.f32);
	// frsp f7,f11
	ctx.f7.f64 = double(float(ctx.f11.f64));
	// lfs f11,28320(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 28320);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fnmsubs f13,f10,f31,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f10.f64, f31.f64, -ctx.f13.f64)));
	// fnmsubs f0,f9,f31,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f9.f64, f31.f64, -ctx.f0.f64)));
	// fadds f28,f13,f11
	f28.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fadds f29,f0,f12
	f29.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// ble cr6,0x8210f338
	if (!ctx.cr6.gt) goto loc_8210F338;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r24,r11,-19896
	r24.s64 = ctx.r11.s64 + -19896;
	// lfs f27,2380(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2380);
	f27.f64 = double(temp.f32);
loc_8210F1C0:
	// lbz r11,120(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 120);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,45
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(45));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r11,r24
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r24.u32);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8210f32c
	if (ctx.cr6.eq) goto loc_8210F32C;
	// divw r10,r31,r30
	ctx.r10.u64 = uint32_t((r30.s32 && !(r31.s32 == INT32_MIN && r30.s32 == -1)) ? r31.s32 / r30.s32 : 0);
	// stfs f30,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// divw r11,r31,r30
	ctx.r11.u64 = uint32_t((r30.s32 && !(r31.s32 == INT32_MIN && r30.s32 == -1)) ? r31.s32 / r30.s32 : 0);
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r26.s32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// rotlwi r10,r31,1
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 1);
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r27.s32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// rotlwi r11,r31,1
	ctx.r11.u64 = __builtin_rotateleft32(r31.u32, 1);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// andc r10,r30,r10
	ctx.r10.u64 = r30.u64 & ~ctx.r10.u64;
	// andc r11,r30,r11
	ctx.r11.u64 = r30.u64 & ~ctx.r11.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// rlwinm r29,r31,2,0,29
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 + f28.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x8210f028
	ctx.lr = 0x8210F27C;
	sub_8210F028(ctx, base);
	// lwz r11,116(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 116);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stwx r3,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, ctx.r3.u32);
	// lwz r11,116(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 116);
	// bne cr6,0x8210f2e0
	if (!ctx.cr6.eq) goto loc_8210F2E0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stfs f30,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r11,116(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 116);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stfs f30,36(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lwz r11,116(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 116);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stfs f30,40(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r11,116(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 116);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stfs f27,64(r11)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lwz r11,116(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 116);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stfs f27,68(r11)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// b 0x8210f32c
	goto loc_8210F32C;
loc_8210F2E0:
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stfs f31,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r11,116(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 116);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stfs f31,36(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lwz r11,116(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 116);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stfs f31,40(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r11,116(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 116);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stfs f30,64(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lwz r11,116(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 116);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stfs f30,68(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
loc_8210F32C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r23
	ctx.cr6.compare<int32_t>(r31.s32, r23.s32, ctx.xer);
	// blt cr6,0x8210f1c0
	if (ctx.cr6.lt) goto loc_8210F1C0;
loc_8210F338:
	// stfs f29,128(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r28.u32 + 128, temp.u32);
	// stfs f28,132(r28)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r28.u32 + 132, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f80
	ctx.lr = 0x8210F34C;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82119468) {
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
	ctx.lr = 0x82119470;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f38
	ctx.lr = 0x82119478;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x820e9f88
	ctx.lr = 0x82119480;
	sub_820E9F88(ctx, base);
	// li r3,5120
	ctx.r3.s64 = 5120;
	// bl 0x82202ea0
	ctx.lr = 0x82119488;
	sub_82202EA0(ctx, base);
	// lis r29,-32173
	r29.s64 = -2108489728;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// lwz r3,504(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 504);
	// bl 0x821faba0
	ctx.lr = 0x8211949C;
	sub_821FABA0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,504(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 504);
	// addi r3,r11,1332
	ctx.r3.s64 = ctx.r11.s64 + 1332;
	// lfs f31,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82202c38
	ctx.lr = 0x821194C0;
	sub_82202C38(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,504(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 504);
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// addi r31,r9,26120
	r31.s64 = ctx.r9.s64 + 26120;
	// lfs f0,15624(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15624);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,96(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// stfs f0,100(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// bl 0x821f9870
	ctx.lr = 0x821194E4;
	sub_821F9870(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,32428
	ctx.r4.s64 = ctx.r11.s64 + 32428;
	// bl 0x821f98e8
	ctx.lr = 0x821194F4;
	sub_821F98E8(ctx, base);
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// li r11,5
	ctx.r11.s64 = 5;
	// stfs f31,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// addi r28,r10,528
	r28.s64 = ctx.r10.s64 + 528;
	// lwz r3,504(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 504);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stb r11,54(r31)
	REX_STORE_U8(r31.u32 + 54, ctx.r11.u8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f0,16188(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16188);
	ctx.f0.f64 = double(temp.f32);
	// ori r30,r7,65535
	r30.u64 = ctx.r7.u64 | 65535;
	// lfs f30,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f30.f64 = double(temp.f32);
	// lfs f29,16308(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16308);
	f29.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stfs f30,68(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f29,140(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// lhz r10,10(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 10);
	// lbz r9,14(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 14);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// ori r10,r9,64
	ctx.r10.u64 = ctx.r9.u64 | 64;
	// stb r11,52(r31)
	REX_STORE_U8(r31.u32 + 52, ctx.r11.u8);
	// stb r10,14(r31)
	REX_STORE_U8(r31.u32 + 14, ctx.r10.u8);
	// bl 0x821fac38
	ctx.lr = 0x8211955C;
	sub_821FAC38(ctx, base);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r31,r11,26336
	r31.s64 = ctx.r11.s64 + 26336;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f9870
	ctx.lr = 0x8211956C;
	sub_821F9870(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,32416
	ctx.r4.s64 = ctx.r11.s64 + 32416;
	// bl 0x821f98e8
	ctx.lr = 0x8211957C;
	sub_821F98E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lbz r7,14(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 14);
	// lhz r9,2(r28)
	ctx.r9.u64 = REX_LOAD_U16(r28.u32 + 2);
	// li r10,255
	ctx.r10.s64 = 255;
	// stb r11,54(r31)
	REX_STORE_U8(r31.u32 + 54, ctx.r11.u8);
	// stfs f31,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// ori r11,r7,64
	ctx.r11.u64 = ctx.r7.u64 | 64;
	// lwz r3,504(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 504);
	// stfs f31,84(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// lfs f0,16624(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16624);
	ctx.f0.f64 = double(temp.f32);
	// stb r10,55(r31)
	REX_STORE_U8(r31.u32 + 55, ctx.r10.u8);
	// stfs f30,68(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stb r9,52(r31)
	REX_STORE_U8(r31.u32 + 52, ctx.r9.u8);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// stb r11,14(r31)
	REX_STORE_U8(r31.u32 + 14, ctx.r11.u8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821fac38
	ctx.lr = 0x821195CC;
	sub_821FAC38(ctx, base);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r31,r11,26552
	r31.s64 = ctx.r11.s64 + 26552;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f9870
	ctx.lr = 0x821195DC;
	sub_821F9870(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = r31.s64 + 212;
	// bl 0x821f9870
	ctx.lr = 0x821195E4;
	sub_821F9870(ctx, base);
	// addi r3,r31,424
	ctx.r3.s64 = r31.s64 + 424;
	// bl 0x821f9870
	ctx.lr = 0x821195EC;
	sub_821F9870(ctx, base);
	// addi r3,r31,636
	ctx.r3.s64 = r31.s64 + 636;
	// bl 0x821f9870
	ctx.lr = 0x821195F4;
	sub_821F9870(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,32408
	ctx.r4.s64 = ctx.r11.s64 + 32408;
	// bl 0x821f98e8
	ctx.lr = 0x82119604;
	sub_821F98E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,212
	ctx.r3.s64 = r31.s64 + 212;
	// addi r4,r11,32400
	ctx.r4.s64 = ctx.r11.s64 + 32400;
	// bl 0x821f98e8
	ctx.lr = 0x82119614;
	sub_821F98E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,424
	ctx.r3.s64 = r31.s64 + 424;
	// addi r4,r11,32392
	ctx.r4.s64 = ctx.r11.s64 + 32392;
	// bl 0x821f98e8
	ctx.lr = 0x82119624;
	sub_821F98E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,636
	ctx.r3.s64 = r31.s64 + 636;
	// addi r4,r11,32384
	ctx.r4.s64 = ctx.r11.s64 + 32384;
	// bl 0x821f98e8
	ctx.lr = 0x82119634;
	sub_821F98E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f29.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r31,212
	ctx.r4.s64 = r31.s64 + 212;
	// lfs f3,2380(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2380);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,16276(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16276);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32380(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32380);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821f9cf8
	ctx.lr = 0x8211965C;
	sub_821F9CF8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r3,r31,424
	ctx.r3.s64 = r31.s64 + 424;
	// lfs f28,2384(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2384);
	f28.f64 = double(temp.f32);
	// lfs f2,27848(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27848);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x820ff090
	ctx.lr = 0x82119680;
	sub_820FF090(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r31,636
	ctx.r3.s64 = r31.s64 + 636;
	// lfs f2,17188(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17188);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16260(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16260);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820ff090
	ctx.lr = 0x821196A0;
	sub_820FF090(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f28,136(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f29,560(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 560, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f29,772(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 772, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,504(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 504);
	// lfs f13,16928(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16928);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f12,32376(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32376);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,32372(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 32372);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,140(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// stfs f12,556(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 556, temp.u32);
	// stfs f0,564(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 564, temp.u32);
	// stfs f11,768(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 768, temp.u32);
	// stfs f0,776(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 776, temp.u32);
	// bl 0x821fac38
	ctx.lr = 0x821196F4;
	sub_821FAC38(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,212
	ctx.r4.s64 = r31.s64 + 212;
	// lwz r3,504(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 504);
	// bl 0x821fac38
	ctx.lr = 0x82119704;
	sub_821FAC38(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,504(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 504);
	// addi r4,r31,424
	ctx.r4.s64 = r31.s64 + 424;
	// bl 0x821fac38
	ctx.lr = 0x82119714;
	sub_821FAC38(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,636
	ctx.r4.s64 = r31.s64 + 636;
	// lwz r3,504(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 504);
	// bl 0x821fac38
	ctx.lr = 0x82119724;
	sub_821FAC38(ctx, base);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lwz r11,504(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 504);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// addi r7,r10,13128
	ctx.r7.s64 = ctx.r10.s64 + 13128;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// ori r9,r9,6
	ctx.r9.u64 = ctx.r9.u64 | 6;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,336(r11)
	REX_STORE_U32(ctx.r11.u32 + 336, ctx.r9.u32);
	// stw r6,332(r11)
	REX_STORE_U32(ctx.r11.u32 + 332, ctx.r6.u32);
	// stb r10,1819(r7)
	REX_STORE_U8(ctx.r7.u32 + 1819, ctx.r10.u8);
	// lwz r11,7840(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 7840);
	// stfs f31,108(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f31,112(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// addi r10,r11,108
	ctx.r10.s64 = ctx.r11.s64 + 108;
	// stfs f31,116(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f30,120(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f84
	ctx.lr = 0x82119774;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82124510) {
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
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// li r6,-1
	ctx.r6.s64 = -1;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,37
	ctx.r4.s64 = 37;
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8211f870
	ctx.lr = 0x82124554;
	sub_8211F870(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8211f870
	ctx.lr = 0x82124568;
	sub_8211F870(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1ba8
	ctx.lr = 0x82124578;
	sub_820E1BA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e2290
	ctx.lr = 0x82124584;
	sub_820E2290(ctx, base);
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

DEFINE_REX_FUNC(sub_82125928) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r6,2
	ctx.r6.s64 = 2;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r3,3020
	ctx.r8.s64 = ctx.r3.s64 + 3020;
	// stw r7,2812(r3)
	REX_STORE_U32(ctx.r3.u32 + 2812, ctx.r7.u32);
	// addi r11,r3,1756
	ctx.r11.s64 = ctx.r3.s64 + 1756;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,1996(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r3,2980
	ctx.r10.s64 = ctx.r3.s64 + 2980;
	// addi r9,r3,1724
	ctx.r9.s64 = ctx.r3.s64 + 1724;
	// lfs f13,1992(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
loc_82125958:
	// stfs f0,-28(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + -28, temp.u32);
	// stw r7,-36(r10)
	REX_STORE_U32(ctx.r10.u32 + -36, ctx.r7.u32);
	// stfs f0,-20(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + -20, temp.u32);
	// stw r7,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r7.u32);
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f13,12(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
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
	// stfsu f0,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stw r7,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stfs f0,-12(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + -12, temp.u32);
	// stfs f0,-8(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + -8, temp.u32);
	// stwu r7,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82125958
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82125958;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2384(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2352(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2352);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,3080(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 3080, temp.u32);
	// stfs f13,3084(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 3084, temp.u32);
	// b 0x821241e8
	sub_821241E8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82129D78) {
	REX_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82129d8c
	if (ctx.cr0.eq) goto loc_82129D8C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82129D8C:
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r9,-24000
	ctx.r10.s64 = ctx.r9.s64 + -24000;
	// mulli r11,r11,76
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(76));
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82129a60
	sub_82129A60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8212A1D8) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ff870
	ctx.lr = 0x8212A200;
	sub_821FF870(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// li r6,15
	ctx.r6.s64 = 15;
	// ori r8,r10,3696
	ctx.r8.u64 = ctx.r10.u64 | 3696;
	// rlwinm r9,r11,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// rlwinm r5,r11,26,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// addi r10,r10,-7072
	ctx.r10.s64 = ctx.r10.s64 + -7072;
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,51
	ctx.r4.s64 = 51;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bf940
	ctx.lr = 0x8212A234;
	sub_821BF940(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// li r6,15
	ctx.r6.s64 = 15;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r5,r11,26
	ctx.r5.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x821be318
	ctx.lr = 0x8212A24C;
	sub_821BE318(ctx, base);
	// addi r3,r30,1
	ctx.r3.s64 = r30.s64 + 1;
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

DEFINE_REX_FUNC(sub_8212B460) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212B4C8) {
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
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stb r11,20111(r10)
	REX_STORE_U8(ctx.r10.u32 + 20111, ctx.r11.u8);
	// bl 0x8229a710
	ctx.lr = 0x8212B4E8;
	sub_8229A710(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r11,20140(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212b510
	if (ctx.cr6.eq) goto loc_8212B510;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212b510
	if (ctx.cr6.eq) goto loc_8212B510;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lfs f1,20104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20104);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822031b8
	ctx.lr = 0x8212B510;
	sub_822031B8(ctx, base);
loc_8212B510:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212C530) {
	REX_FUNC_PROLOGUE();
	// lis r8,-32169
	ctx.r8.s64 = -2108227584;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r6,r8,-22992
	ctx.r6.s64 = ctx.r8.s64 + -22992;
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// lis r4,-32169
	ctx.r4.s64 = -2108227584;
	// addi r5,r7,-23016
	ctx.r5.s64 = ctx.r7.s64 + -23016;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,-22992(r8)
	REX_STORE_U32(ctx.r8.u32 + -22992, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-23024(r4)
	REX_STORE_U32(ctx.r4.u32 + -23024, ctx.r10.u32);
	// stw r9,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// stw r11,-23016(r7)
	REX_STORE_U32(ctx.r7.u32 + -23016, ctx.r11.u32);
	// stw r9,-23036(r6)
	REX_STORE_U32(ctx.r6.u32 + -23036, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212CEA0) {
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
	ctx.lr = 0x8212CEA8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,160(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,176(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// li r7,9
	ctx.r7.s64 = 9;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r26,-1
	r26.s64 = -1;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bne cr6,0x8212cf6c
	if (!ctx.cr6.eq) goto loc_8212CF6C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subf r25,r11,r3
	r25.u64 = ctx.r3.u64 - ctx.r11.u64;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r27,r11,-23696
	r27.s64 = ctx.r11.s64 + -23696;
loc_8212CF00:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// add r29,r30,r11
	r29.u64 = r30.u64 + ctx.r11.u64;
	// lwzx r31,r25,r29
	r31.u64 = REX_LOAD_U32(r25.u32 + r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212a8e0
	ctx.lr = 0x8212CF14;
	sub_8212A8E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8212cf60
	if (ctx.cr0.eq) goto loc_8212CF60;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r6,r30,r11
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x8212b520
	ctx.lr = 0x8212CF3C;
	sub_8212B520(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + r31.u64;
	// addi r6,r10,-20688
	ctx.r6.s64 = ctx.r10.s64 + -20688;
	// stwx r4,r30,r27
	REX_STORE_U32(r30.u32 + r27.u32, ctx.r4.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,164(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 164);
	// bl 0x82129d78
	ctx.lr = 0x8212CF60;
	sub_82129D78(ctx, base);
loc_8212CF60:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpwi cr6,r30,12
	ctx.cr6.compare<int32_t>(r30.s32, 12, ctx.xer);
	// blt cr6,0x8212cf00
	if (ctx.cr6.lt) goto loc_8212CF00;
loc_8212CF6C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_821300E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lfs f13,2384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,16260(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16260);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,2392(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2392);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// lfs f10,16232(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16232);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,2356(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2356);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16628(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16628);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f7.f64 = double(temp.f32);
	// stfs f13,-48(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// stfs f0,-44(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// stfs f0,-40(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// stfs f0,-36(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// stfs f12,-32(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f11,-28(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f10,-24(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// stfs f9,-20(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// stfs f8,-16(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f7,-12(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// ble cr6,0x82130154
	if (!ctx.cr6.gt) goto loc_82130154;
	// li r4,4
	ctx.r4.s64 = 4;
loc_82130154:
	// mulli r11,r3,5
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(5));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82132890) {
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
	ctx.lr = 0x82132898;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// stw r4,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// stw r5,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r17,r6
	r17.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r18,r8
	r18.u64 = ctx.r8.u64;
	// mr r14,r9
	r14.u64 = ctx.r9.u64;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r6,80
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 80, ctx.xer);
	// addi r16,r11,432
	r16.s64 = ctx.r11.s64 + 432;
	// bne cr6,0x821328dc
	if (!ctx.cr6.eq) goto loc_821328DC;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82132bcc
	goto loc_82132BCC;
loc_821328DC:
	// rlwinm. r11,r17,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82132958
	if (!ctx.cr0.eq) goto loc_82132958;
	// mr r30,r17
	r30.u64 = r17.u64;
	// cmpwi cr6,r17,48
	ctx.cr6.compare<int32_t>(r17.s32, 48, ctx.xer);
	// bne cr6,0x8213290c
	if (!ctx.cr6.eq) goto loc_8213290C;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// rlwinm r10,r18,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,-48
	ctx.r9.s64 = -48;
	// lwz r11,23912(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 23912);
	// lha r30,526(r11)
	r30.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 526));
	// stwx r9,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r9.u32);
	// b 0x82132928
	goto loc_82132928;
loc_8213290C:
	// rlwinm. r11,r27,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213291c
	if (ctx.cr0.eq) goto loc_8213291C;
	// li r30,24
	r30.s64 = 24;
	// b 0x82132938
	goto loc_82132938;
loc_8213291C:
	// rlwinm. r11,r27,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82132928
	if (ctx.cr0.eq) goto loc_82132928;
	// li r30,19
	r30.s64 = 19;
loc_82132928:
	// cmpwi cr6,r30,24
	ctx.cr6.compare<int32_t>(r30.s32, 24, ctx.xer);
	// beq cr6,0x82132938
	if (ctx.cr6.eq) goto loc_82132938;
	// cmpwi cr6,r30,19
	ctx.cr6.compare<int32_t>(r30.s32, 19, ctx.xer);
	// bne cr6,0x82132bcc
	if (!ctx.cr6.eq) goto loc_82132BCC;
loc_82132938:
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// bl 0x821327d0
	ctx.lr = 0x8213294C;
	sub_821327D0(ctx, base);
	// rlwinm r11,r18,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r14
	REX_STORE_U32(ctx.r11.u32 + r14.u32, ctx.r3.u32);
	// b 0x82132bcc
	goto loc_82132BCC;
loc_82132958:
	// cmpwi cr6,r17,81
	ctx.cr6.compare<int32_t>(r17.s32, 81, ctx.xer);
	// bne cr6,0x82132a30
	if (!ctx.cr6.eq) goto loc_82132A30;
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// li r30,102
	r30.s64 = 102;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r28,r10,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82132988
	if (ctx.cr0.eq) goto loc_82132988;
	// bl 0x821fec88
	ctx.lr = 0x82132978;
	sub_821FEC88(ctx, base);
	// divwu r11,r3,r30
	ctx.r11.u64 = uint32_t(r30.u32 ? ctx.r3.u32 / r30.u32 : 0);
	// mulli r11,r11,102
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(102));
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82132988:
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r31,r10,15256
	r31.s64 = ctx.r10.s64 + 15256;
loc_82132990:
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821329a4
	if (!ctx.cr6.gt) goto loc_821329A4;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// ble cr6,0x821329a8
	if (!ctx.cr6.gt) goto loc_821329A8;
loc_821329A4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_821329A8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x821329dc
	if (ctx.cr6.eq) goto loc_821329DC;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r31,1416
	ctx.r9.s64 = r31.s64 + 1416;
	// lbzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// addi r8,r9,-19
	ctx.r8.s64 = ctx.r9.s64 + -19;
	// addi r9,r9,-24
	ctx.r9.s64 = ctx.r9.s64 + -24;
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
loc_821329DC:
	// addi r9,r31,584
	ctx.r9.s64 = r31.s64 + 584;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lbz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82132a18
	if (!ctx.cr6.eq) goto loc_82132A18;
	// bl 0x821fec88
	ctx.lr = 0x82132A04;
	sub_821FEC88(ctx, base);
	// divwu r11,r3,r30
	ctx.r11.u64 = uint32_t(r30.u32 ? ctx.r3.u32 / r30.u32 : 0);
	// mulli r11,r11,102
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(102));
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82132990
	goto loc_82132990;
loc_82132A18:
	// addi r10,r31,1416
	ctx.r10.s64 = r31.s64 + 1416;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r18,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r30,r9,r10
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stwx r11,r8,r29
	REX_STORE_U32(ctx.r8.u32 + r29.u32, ctx.r11.u32);
	// b 0x82132bcc
	goto loc_82132BCC;
loc_82132A30:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// rlwinm r10,r17,2,24,29
	ctx.r10.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0xFC;
	// addi r11,r11,15256
	ctx.r11.s64 = ctx.r11.s64 + 15256;
	// li r28,0
	r28.s64 = 0;
	// lwzx r26,r10,r11
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 0);
	// b 0x82132a54
	goto loc_82132A54;
loc_82132A4C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lbzx r11,r28,r26
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + r26.u32);
loc_82132A54:
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82132a4c
	if (!ctx.cr6.eq) goto loc_82132A4C;
	// rlwinm r29,r27,0,8,8
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x800000;
	// rlwinm r25,r27,0,1,1
	r25.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40000000;
	// rlwinm r24,r27,0,2,2
	r24.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20000000;
	// rlwinm r23,r27,0,3,3
	r23.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x10000000;
	// rlwinm r22,r27,0,4,4
	r22.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8000000;
	// rlwinm r21,r27,0,5,5
	r21.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4000000;
	// rlwinm r20,r27,0,6,6
	r20.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2000000;
	// rlwinm r19,r27,0,7,7
	r19.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x1000000;
loc_82132A7C:
	// li r31,1
	r31.s64 = 1;
	// bl 0x821fec88
	ctx.lr = 0x82132A84;
	sub_821FEC88(ctx, base);
	// divwu r11,r3,r28
	ctx.r11.u64 = uint32_t(r28.u32 ? ctx.r3.u32 / r28.u32 : 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// twllei r28,0
	if (r28.s32 == 0 || r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// lbzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r26.u32);
	// extsb r30,r11
	r30.s64 = ctx.r11.s8;
	// beq cr6,0x82132aac
	if (ctx.cr6.eq) goto loc_82132AAC;
	// li r30,24
	r30.s64 = 24;
	// b 0x82132ab8
	goto loc_82132AB8;
loc_82132AAC:
	// rlwinm. r11,r27,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82132ab8
	if (ctx.cr0.eq) goto loc_82132AB8;
	// li r30,19
	r30.s64 = 19;
loc_82132AB8:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x82132ad8
	if (ctx.cr6.eq) goto loc_82132AD8;
	// li r11,30
	ctx.r11.s64 = 30;
	// rlwinm r10,r30,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r30
	ctx.xer.ca = r30.u32 >= ctx.r11.u32;
	ctx.r9.u64 = r30.u64 - ctx.r11.u64;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	r31.u64 = ctx.r11.u64 & r31.u64;
loc_82132AD8:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x82132af4
	if (ctx.cr6.eq) goto loc_82132AF4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dcfb8
	ctx.lr = 0x82132AE8;
	sub_821DCFB8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	r31.u64 = ctx.r11.u64 & r31.u64;
loc_82132AF4:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x82132b30
	if (ctx.cr6.eq) goto loc_82132B30;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// ble cr6,0x82132b30
	if (!ctx.cr6.gt) goto loc_82132B30;
	// addi r11,r15,16472
	ctx.r11.s64 = r15.s64 + 16472;
loc_82132B0C:
	// lha r9,0(r11)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r30.s32, ctx.xer);
	// beq cr6,0x82132b2c
	if (ctx.cr6.eq) goto loc_82132B2C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r18.s32, ctx.xer);
	// blt cr6,0x82132b0c
	if (ctx.cr6.lt) goto loc_82132B0C;
	// b 0x82132b30
	goto loc_82132B30;
loc_82132B2C:
	// li r31,0
	r31.s64 = 0;
loc_82132B30:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x82132b48
	if (ctx.cr6.eq) goto loc_82132B48;
	// addi r11,r30,-19
	ctx.r11.s64 = r30.s64 + -19;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	r31.u64 = ctx.r11.u64 & r31.u64;
loc_82132B48:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x82132b60
	if (ctx.cr6.eq) goto loc_82132B60;
	// addi r11,r30,-24
	ctx.r11.s64 = r30.s64 + -24;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	r31.u64 = ctx.r11.u64 & r31.u64;
loc_82132B60:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq cr6,0x82132ba0
	if (ctx.cr6.eq) goto loc_82132BA0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// ble cr6,0x82132ba0
	if (!ctx.cr6.gt) goto loc_82132BA0;
	// lwz r11,216(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 216);
	// addi r11,r11,16472
	ctx.r11.s64 = ctx.r11.s64 + 16472;
loc_82132B7C:
	// lha r9,0(r11)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r30.s32, ctx.xer);
	// beq cr6,0x82132b9c
	if (ctx.cr6.eq) goto loc_82132B9C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r18.s32, ctx.xer);
	// blt cr6,0x82132b7c
	if (ctx.cr6.lt) goto loc_82132B7C;
	// b 0x82132ba0
	goto loc_82132BA0;
loc_82132B9C:
	// li r31,0
	r31.s64 = 0;
loc_82132BA0:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x82132bc4
	if (ctx.cr6.eq) goto loc_82132BC4;
	// lwz r11,268(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82132bc4
	if (!ctx.cr6.eq) goto loc_82132BC4;
	// addi r11,r30,-24
	ctx.r11.s64 = r30.s64 + -24;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	r31.u64 = ctx.r11.u64 & r31.u64;
loc_82132BC4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x82132a7c
	if (ctx.cr6.eq) goto loc_82132A7C;
loc_82132BCC:
	// lwz r11,220(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 220);
	// li r29,6
	r29.s64 = 6;
	// cmplw cr6,r15,r11
	ctx.cr6.compare<uint32_t>(r15.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82132bec
	if (!ctx.cr6.eq) goto loc_82132BEC;
	// cmpwi cr6,r17,80
	ctx.cr6.compare<int32_t>(r17.s32, 80, ctx.xer);
	// bne cr6,0x82132bec
	if (!ctx.cr6.eq) goto loc_82132BEC;
	// lwz r31,276(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// b 0x82132c50
	goto loc_82132C50;
loc_82132BEC:
	// rlwinm. r11,r27,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82132c28
	if (ctx.cr0.eq) goto loc_82132C28;
	// srawi r11,r27,8
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xFF) != 0);
	ctx.r11.s64 = r27.s32 >> 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r31,r10,r11
	r31.u64 = ctx.r10.u64 & ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dd110
	ctx.lr = 0x82132C18;
	sub_821DD110(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82132c50
	if (!ctx.cr0.eq) goto loc_82132C50;
	// clrlwi r31,r31,31
	r31.u64 = r31.u32 & 0x1;
	// b 0x82132c50
	goto loc_82132C50;
loc_82132C28:
	// bl 0x821fec88
	ctx.lr = 0x82132C2C;
	sub_821FEC88(ctx, base);
	// divwu r11,r3,r29
	ctx.r11.u64 = uint32_t(r29.u32 ? ctx.r3.u32 / r29.u32 : 0);
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// subf r31,r11,r3
	r31.u64 = ctx.r3.u64 - ctx.r11.u64;
	// b 0x82132c50
	goto loc_82132C50;
loc_82132C3C:
	// bl 0x821fec88
	ctx.lr = 0x82132C40;
	sub_821FEC88(ctx, base);
	// divwu r10,r3,r29
	ctx.r10.u64 = uint32_t(r29.u32 ? ctx.r3.u32 / r29.u32 : 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mulli r10,r10,6
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(6));
	// subf r31,r10,r3
	r31.u64 = ctx.r3.u64 - ctx.r10.u64;
loc_82132C50:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dd110
	ctx.lr = 0x82132C5C;
	sub_821DD110(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82132c3c
	if (ctx.cr0.eq) goto loc_82132C3C;
	// cmpwi cr6,r30,24
	ctx.cr6.compare<int32_t>(r30.s32, 24, ctx.xer);
	// beq cr6,0x82132c74
	if (ctx.cr6.eq) goto loc_82132C74;
	// cmpwi cr6,r30,19
	ctx.cr6.compare<int32_t>(r30.s32, 19, ctx.xer);
	// bne cr6,0x82132c98
	if (!ctx.cr6.eq) goto loc_82132C98;
loc_82132C74:
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// lwz r4,276(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// lwz r3,268(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// bl 0x821327d0
	ctx.lr = 0x82132C90;
	sub_821327D0(ctx, base);
	// rlwinm r11,r18,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r14
	REX_STORE_U32(ctx.r11.u32 + r14.u32, ctx.r3.u32);
loc_82132C98:
	// rlwinm r11,r31,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 | r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8214D580) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8214D588;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82187b58
	ctx.lr = 0x8214D59C;
	sub_82187B58(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 192, ctx.xer);
	// beq cr6,0x8214d6a4
	if (ctx.cr6.eq) goto loc_8214D6A4;
	// cmpwi cr6,r11,194
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 194, ctx.xer);
	// beq cr6,0x8214d5e4
	if (ctx.cr6.eq) goto loc_8214D5E4;
	// cmpwi cr6,r11,195
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 195, ctx.xer);
	// bne cr6,0x8214d6d4
	if (!ctx.cr6.eq) goto loc_8214D6D4;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8214d6d4
	if (!ctx.cr6.eq) goto loc_8214D6D4;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(r29.u32, 2, ctx.xer);
	// bne cr6,0x8214d6d4
	if (!ctx.cr6.eq) goto loc_8214D6D4;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lbz r11,24292(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 24292);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stb r11,24292(r10)
	REX_STORE_U8(ctx.r10.u32 + 24292, ctx.r11.u8);
	// b 0x8214d6d4
	goto loc_8214D6D4;
loc_8214D5E4:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8214d6d4
	if (!ctx.cr6.eq) goto loc_8214D6D4;
	// cmplwi cr6,r29,10
	ctx.cr6.compare<uint32_t>(r29.u32, 10, ctx.xer);
	// bne cr6,0x8214d6d4
	if (!ctx.cr6.eq) goto loc_8214D6D4;
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x8214d6d4
	if (ctx.cr6.gt) goto loc_8214D6D4;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + r30.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8214d684
	if (!ctx.cr0.eq) goto loc_8214D684;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lbz r9,1(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 1);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lhz r7,2(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 2);
	// addi r10,r11,-7072
	ctx.r10.s64 = ctx.r11.s64 + -7072;
	// ori r11,r8,3696
	ctx.r11.u64 = ctx.r8.u64 | 3696;
	// addi r8,r10,88
	ctx.r8.s64 = ctx.r10.s64 + 88;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// sthx r7,r9,r8
	REX_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u16);
	// lhz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 4);
	// lbz r8,1(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 1);
	// addi r7,r10,100
	ctx.r7.s64 = ctx.r10.s64 + 100;
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// sthx r9,r8,r7
	REX_STORE_U16(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u16);
	// addi r10,r10,140
	ctx.r10.s64 = ctx.r10.s64 + 140;
	// lbz r9,1(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 1);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// sthx r9,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// bl 0x82187bd8
	ctx.lr = 0x8214D66C;
	sub_82187BD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8214d684
	if (!ctx.cr0.eq) goto loc_8214D684;
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 6);
	// sth r11,332(r30)
	REX_STORE_U16(r30.u32 + 332, ctx.r11.u16);
	// lhz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 8);
	// sth r11,334(r30)
	REX_STORE_U16(r30.u32 + 334, ctx.r11.u16);
loc_8214D684:
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,195
	ctx.r11.s64 = 195;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lbz r11,24292(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 24292);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,24292(r10)
	REX_STORE_U8(ctx.r10.u32 + 24292, ctx.r11.u8);
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1);
	// b 0x8214d6c0
	goto loc_8214D6C0;
loc_8214D6A4:
	// cmplwi cr6,r29,56
	ctx.cr6.compare<uint32_t>(r29.u32, 56, ctx.xer);
	// bne cr6,0x8214d6d4
	if (!ctx.cr6.eq) goto loc_8214D6D4;
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x8214d6d4
	if (ctx.cr6.gt) goto loc_8214D6D4;
	// li r10,193
	ctx.r10.s64 = 193;
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
loc_8214D6C0:
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82188698
	ctx.lr = 0x8214D6D4;
	sub_82188698(ctx, base);
loc_8214D6D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82156B98) {
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
	ctx.lr = 0x82156BA0;
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,68(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// ori r8,r11,3696
	ctx.r8.u64 = ctx.r11.u64 | 3696;
	// addi r11,r9,-7072
	ctx.r11.s64 = ctx.r9.s64 + -7072;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// lbz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// lwz r29,12(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 12);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// mulli r10,r10,160
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(160));
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x82156db0
	if (ctx.cr6.eq) goto loc_82156DB0;
	// lbz r11,103(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 103);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82156db0
	if (ctx.cr0.eq) goto loc_82156DB0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82202540
	ctx.lr = 0x82156C0C;
	sub_82202540(ctx, base);
	// lhz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 88);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// lwz r11,92(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 92);
	// beq cr6,0x82156c28
	if (ctx.cr6.eq) goto loc_82156C28;
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// b 0x82156c2c
	goto loc_82156C2C;
loc_82156C28:
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
loc_82156C2C:
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// lfs f30,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f30.f64 = double(temp.f32);
	// lfs f31,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
	// stfs f30,108(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 108, temp.u32);
	// lfs f0,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x82156ce8
	if (!ctx.cr6.gt) goto loc_82156CE8;
	// lfs f13,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,-17424(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -17424);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f29,f30,f13
	f29.f64 = double(float(f30.f64 - ctx.f13.f64));
	// fmuls f1,f29,f0
	ctx.f1.f64 = double(float(f29.f64 * ctx.f0.f64));
	// bl 0x820e2028
	ctx.lr = 0x82156C90;
	sub_820E2028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f29,f0
	ctx.f1.f64 = double(float(f29.f64 * ctx.f0.f64));
	// bl 0x820e0028
	ctx.lr = 0x82156CA0;
	sub_820E0028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,16588(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16588);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16264(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16264);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x82156d4c
	if (ctx.cr6.gt) goto loc_82156D4C;
	// lbz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 140);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82156d4c
	if (!ctx.cr0.eq) goto loc_82156D4C;
	// li r3,33
	ctx.r3.s64 = 33;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8212bc38
	ctx.lr = 0x82156CDC;
	sub_8212BC38(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,140(r31)
	REX_STORE_U8(r31.u32 + 140, ctx.r11.u8);
	// b 0x82156d4c
	goto loc_82156D4C;
loc_82156CE8:
	// fneg f31,f0
	ctx.fpscr.disableFlushMode();
	f31.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16788(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16788);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// ble cr6,0x82156d00
	if (!ctx.cr6.gt) goto loc_82156D00;
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
loc_82156D00:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f0,-17428(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -17428);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f13,-17424(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -17424);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f31,f0,f13
	ctx.f1.f64 = double(float(std::fma(f31.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x820e2028
	ctx.lr = 0x82156D24;
	sub_820E2028(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,-17432(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -17432);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f31,f13,f12
	ctx.f13.f64 = double(float(std::fma(f31.f64, ctx.f13.f64, ctx.f12.f64)));
	// lfs f0,2012(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,120(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82156d4c
	if (!ctx.cr6.gt) goto loc_82156D4C;
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
loc_82156D4C:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f13,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,120(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lfs f0,1840(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// bl 0x820e0028
	ctx.lr = 0x82156D6C;
	sub_820E0028(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lfs f13,116(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lfs f12,112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f3,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// fsubs f11,f30,f0
	ctx.f11.f64 = double(float(f30.f64 - ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmadds f31,f11,f12,f0
	f31.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f0.f64)));
	// bctrl 
	ctx.lr = 0x82156DA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200818
	ctx.lr = 0x82156DB0;
	sub_82200818(ctx, base);
loc_82156DB0:
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

DEFINE_REX_FUNC(sub_82161F68) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2020(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2020);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82161f84
	if (!ctx.cr6.lt) goto loc_82161F84;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
loc_82161F84:
	// li r9,31
	ctx.r9.s64 = 31;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// li r11,1
	ctx.r11.s64 = 1;
	// std r8,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r8.u64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82161F9C:
	// stfsu f1,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// ld r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// std r9,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r9.u64);
	// rldicr r11,r11,1,62
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// bdnz 0x82161f9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82161F9C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82165F00) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e68
	ctx.lr = 0x82165F08;
	// stfd f29,-128(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -128, f29.u64);
	// stfd f30,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, f30.u64);
	// stfd f31,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-1712(r1)
	ea = -1712 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,15
	ctx.r11.s64 = 15;
	// addi r10,r1,848
	ctx.r10.s64 = ctx.r1.s64 + 848;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f30.f64 = double(temp.f32);
loc_82165F34:
	// stfs f30,60(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r10.u32 + 60, temp.u32);
	// stfs f30,56(r10)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// stfs f30,52(r10)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// stfsu f30,48(r10)
	ea = 48 + ctx.r10.u32;
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82165f34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82165F34;
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82165F54:
	// stfs f30,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f30,56(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f30,52(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfsu f30,48(r11)
	ea = 48 + ctx.r11.u32;
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82165f54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82165F54;
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r11,r1,844
	ctx.r11.s64 = ctx.r1.s64 + 844;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
loc_82165F7C:
	// stfs f30,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f31,28(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f31,24(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f31,20(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f31,36(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f31,40(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f31,44(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfsu f30,48(r11)
	ea = 48 + ctx.r11.u32;
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82165f7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82165F7C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r20,0
	r20.s64 = 0;
	// addi r21,r11,-11984
	r21.s64 = ctx.r11.s64 + -11984;
loc_82165FAC:
	// mulli r11,r20,176
	ctx.r11.s64 = static_cast<int64_t>(r20.u64 * static_cast<uint64_t>(176));
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// li r23,2
	r23.s64 = 2;
	// addi r28,r11,8
	r28.s64 = ctx.r11.s64 + 8;
loc_82165FBC:
	// ld r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 16);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x821660a4
	if (ctx.cr6.eq) goto loc_821660A4;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bne cr6,0x82165ffc
	if (!ctx.cr6.eq) goto loc_82165FFC;
	// addi r5,r11,480
	ctx.r5.s64 = ctx.r11.s64 + 480;
	// bl 0x82165b50
	ctx.lr = 0x82165FF8;
	sub_82165B50(ctx, base);
	// b 0x8216602c
	goto loc_8216602C;
loc_82165FFC:
	// addi r5,r11,720
	ctx.r5.s64 = ctx.r11.s64 + 720;
	// bl 0x82165b50
	ctx.lr = 0x82166004;
	sub_82165B50(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82166010:
	// lfs f0,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,40(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfsu f0,48(r10)
	ea = 48 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82166010
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82166010;
loc_8216602C:
	// ld r25,16(r28)
	r25.u64 = REX_LOAD_U64(r28.u32 + 16);
	// addi r27,r28,24
	r27.s64 = r28.s64 + 24;
	// li r26,0
	r26.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_8216603C:
	// cmpldi cr6,r25,0
	ctx.cr6.compare<uint64_t>(r25.u64, 0, ctx.xer);
	// beq cr6,0x821660a4
	if (ctx.cr6.eq) goto loc_821660A4;
	// clrldi r11,r25,63
	ctx.r11.u64 = r25.u64 & 0x1;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8216608c
	if (ctx.cr6.eq) goto loc_8216608C;
	// addi r11,r1,864
	ctx.r11.s64 = ctx.r1.s64 + 864;
	// lfs f29,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	f29.f64 = double(temp.f32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// add r31,r30,r11
	r31.u64 = r30.u64 + ctx.r11.u64;
	// add r29,r30,r10
	r29.u64 = r30.u64 + ctx.r10.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e1890
	ctx.lr = 0x82166078;
	sub_820E1890(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r5,r29,16
	ctx.r5.s64 = r29.s64 + 16;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x820e2028
	ctx.lr = 0x8216608C;
	sub_820E2028(ctx, base);
loc_8216608C:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// rldicl r25,r25,63,1
	r25.u64 = __builtin_rotateleft64(r25.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpwi cr6,r26,15
	ctx.cr6.compare<int32_t>(r26.s32, 15, ctx.xer);
	// blt cr6,0x8216603c
	if (ctx.cr6.lt) goto loc_8216603C;
loc_821660A4:
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r28,r28,88
	r28.s64 = r28.s64 + 88;
	// bgt 0x82165fbc
	if (ctx.cr0.gt) goto loc_82165FBC;
	// lwz r11,480(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82166148
	if (ctx.cr6.eq) goto loc_82166148;
	// lwz r10,4(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 4);
	// addi r28,r1,864
	r28.s64 = ctx.r1.s64 + 864;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x821660dc
	if (!ctx.cr6.eq) goto loc_821660DC;
	// addi r30,r11,2048
	r30.s64 = ctx.r11.s64 + 2048;
	// addi r11,r24,360
	ctx.r11.s64 = r24.s64 + 360;
	// addi r31,r10,128
	r31.s64 = ctx.r10.s64 + 128;
	// b 0x821660e8
	goto loc_821660E8;
loc_821660DC:
	// addi r30,r11,3008
	r30.s64 = ctx.r11.s64 + 3008;
	// addi r11,r24,420
	ctx.r11.s64 = r24.s64 + 420;
	// addi r31,r10,188
	r31.s64 = ctx.r10.s64 + 188;
loc_821660E8:
	// subf r27,r31,r11
	r27.u64 = ctx.r11.u64 - r31.u64;
	// li r29,15
	r29.s64 = 15;
loc_821660F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + r22.u64;
	// bl 0x820e0250
	ctx.lr = 0x82166104;
	sub_820E0250(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e0590
	ctx.lr = 0x82166114;
	sub_820E0590(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x820e1528
	ctx.lr = 0x82166120;
	sub_820E1528(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lfsx f1,r27,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + r31.u32);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x820e1890
	ctx.lr = 0x82166134;
	sub_820E1890(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r28,r28,48
	r28.s64 = r28.s64 + 48;
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// bne 0x821660f0
	if (!ctx.cr0.eq) goto loc_821660F0;
loc_82166148:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// addi r30,r1,888
	r30.s64 = ctx.r1.s64 + 888;
	// bne cr6,0x821661bc
	if (!ctx.cr6.eq) goto loc_821661BC;
	// li r29,128
	r29.s64 = 128;
	// addi r31,r22,2100
	r31.s64 = r22.s64 + 2100;
loc_8216615C:
	// addi r28,r31,-52
	r28.s64 = r31.s64 + -52;
	// addi r4,r30,-24
	ctx.r4.s64 = r30.s64 + -24;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x820e0af8
	ctx.lr = 0x8216616C;
	sub_820E0AF8(ctx, base);
	// lfs f0,-8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + -4, temp.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f0,-4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f0,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f30,8(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + r22.u64;
	// bl 0x820e0368
	ctx.lr = 0x821661A4;
	sub_820E0368(ctx, base);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// cmpwi cr6,r29,184
	ctx.cr6.compare<int32_t>(r29.s32, 184, ctx.xer);
	// ble cr6,0x8216615c
	if (!ctx.cr6.gt) goto loc_8216615C;
	// b 0x82166220
	goto loc_82166220;
loc_821661BC:
	// li r29,188
	r29.s64 = 188;
	// addi r31,r22,3060
	r31.s64 = r22.s64 + 3060;
loc_821661C4:
	// addi r28,r31,-52
	r28.s64 = r31.s64 + -52;
	// addi r4,r30,-24
	ctx.r4.s64 = r30.s64 + -24;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x820e0af8
	ctx.lr = 0x821661D4;
	sub_820E0AF8(ctx, base);
	// lfs f0,-8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + -4, temp.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f0,-4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f0,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f30,8(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + r22.u64;
	// bl 0x820e0368
	ctx.lr = 0x8216620C;
	sub_820E0368(ctx, base);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// cmpwi cr6,r29,244
	ctx.cr6.compare<int32_t>(r29.s32, 244, ctx.xer);
	// ble cr6,0x821661c4
	if (!ctx.cr6.gt) goto loc_821661C4;
loc_82166220:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(r20.s32, 2, ctx.xer);
	// blt cr6,0x82165fac
	if (ctx.cr6.lt) goto loc_82165FAC;
	// addi r1,r1,1712
	ctx.r1.s64 = ctx.r1.s64 + 1712;
	// lfd f29,-128(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f30,-120(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_82173140) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82173148;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-6752
	ctx.r11.s64 = ctx.r11.s64 + -6752;
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x821aff90
	ctx.lr = 0x82173170;
	sub_821AFF90(ctx, base);
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r6,r31,245
	ctx.r6.s64 = r31.s64 + 245;
	// addi r3,r11,-13224
	ctx.r3.s64 = ctx.r11.s64 + -13224;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8219a078
	ctx.lr = 0x82173188;
	sub_8219A078(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// stw r29,100(r31)
	REX_STORE_U32(r31.u32 + 100, r29.u32);
	// lbz r11,1835(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1835);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// beq cr6,0x82173200
	if (ctx.cr6.eq) goto loc_82173200;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r10.u32);
	// lwz r11,344(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821731f8
	if (ctx.cr6.eq) goto loc_821731F8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821731f0
	if (ctx.cr6.eq) goto loc_821731F0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821731e8
	if (ctx.cr6.eq) goto loc_821731E8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821731e0
	if (ctx.cr6.eq) goto loc_821731E0;
	// li r11,586
	ctx.r11.s64 = 586;
	// b 0x82173250
	goto loc_82173250;
loc_821731E0:
	// li r11,589
	ctx.r11.s64 = 589;
	// b 0x82173250
	goto loc_82173250;
loc_821731E8:
	// li r11,590
	ctx.r11.s64 = 590;
	// b 0x82173250
	goto loc_82173250;
loc_821731F0:
	// li r11,588
	ctx.r11.s64 = 588;
	// b 0x82173250
	goto loc_82173250;
loc_821731F8:
	// li r11,587
	ctx.r11.s64 = 587;
	// b 0x82173250
	goto loc_82173250;
loc_82173200:
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r10.u32);
	// lwz r11,344(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8217324c
	if (ctx.cr6.eq) goto loc_8217324C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82173244
	if (ctx.cr6.eq) goto loc_82173244;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8217323c
	if (ctx.cr6.eq) goto loc_8217323C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82173234
	if (ctx.cr6.eq) goto loc_82173234;
	// li r11,592
	ctx.r11.s64 = 592;
	// b 0x82173250
	goto loc_82173250;
loc_82173234:
	// li r11,595
	ctx.r11.s64 = 595;
	// b 0x82173250
	goto loc_82173250;
loc_8217323C:
	// li r11,596
	ctx.r11.s64 = 596;
	// b 0x82173250
	goto loc_82173250;
loc_82173244:
	// li r11,594
	ctx.r11.s64 = 594;
	// b 0x82173250
	goto loc_82173250;
loc_8217324C:
	// li r11,593
	ctx.r11.s64 = 593;
loc_82173250:
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r30,-32480(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// addi r11,r30,80
	ctx.r11.s64 = r30.s64 + 80;
	// bl 0x821b0030
	ctx.lr = 0x82173268;
	sub_821B0030(ctx, base);
	// stw r3,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r3.u32);
	// lwz r30,36(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r29,r11,31432
	r29.s64 = ctx.r11.s64 + 31432;
	// lwz r5,84(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r31,228
	ctx.r7.s64 = r31.s64 + 228;
	// lwz r3,176(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 176);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,180(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 180);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x821f7aa0
	ctx.lr = 0x821732B4;
	sub_821F7AA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821779C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,192(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// lwz r9,196(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,92(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// stw r11,192(r3)
	REX_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x821779ec
	if (!ctx.cr6.gt) goto loc_821779EC;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r9,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r9.u16);
loc_821779EC:
	// lwa r11,196(r3)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r3.u32 + 196));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lwa r8,192(r3)
	ctx.r8.s64 = int32_t(REX_LOAD_U32(ctx.r3.u32 + 192));
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,204(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// stfs f0,44(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821789A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x821789B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r30,r3,128
	r30.s64 = ctx.r3.s64 + 128;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// li r4,1280
	ctx.r4.s64 = 1280;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,496(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 496);
	// bl 0x82190558
	ctx.lr = 0x821789D4;
	sub_82190558(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82178a70
	if (ctx.cr6.eq) goto loc_82178A70;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r11,27608(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 27608);
	// lwz r10,132(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x82178a0c
	if (!ctx.cr6.lt) goto loc_82178A0C;
	// addi r10,r10,39
	ctx.r10.s64 = ctx.r10.s64 + 39;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r31.u32);
	// lwz r10,132(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,132(r11)
	REX_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
loc_82178A0C:
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// li r28,5
	r28.s64 = 5;
	// addi r31,r30,128
	r31.s64 = r30.s64 + 128;
	// addi r29,r11,-28688
	r29.s64 = ctx.r11.s64 + -28688;
loc_82178A20:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82178A30;
	sub_822D4FA0(ctx, base);
	// addi r3,r31,-64
	ctx.r3.s64 = r31.s64 + -64;
	// addi r4,r29,64
	ctx.r4.s64 = r29.s64 + 64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x822d4fa0
	ctx.lr = 0x82178A40;
	sub_822D4FA0(ctx, base);
	// addi r4,r29,128
	ctx.r4.s64 = r29.s64 + 128;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82178A50;
	sub_822D4FA0(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// addi r4,r29,192
	ctx.r4.s64 = r29.s64 + 192;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x822d4fa0
	ctx.lr = 0x82178A60;
	sub_822D4FA0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r30,r30,256
	r30.s64 = r30.s64 + 256;
	// addi r31,r31,256
	r31.s64 = r31.s64 + 256;
	// bne 0x82178a20
	if (!ctx.cr0.eq) goto loc_82178A20;
loc_82178A70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8217A600) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,27616(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 27616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8217a5b8
	sub_8217A5B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8217AE88) {
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
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r30,r10,25776
	r30.s64 = ctx.r10.s64 + 25776;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,280(r30)
	REX_STORE_U32(r30.u32 + 280, ctx.r11.u32);
	// bl 0x82119318
	ctx.lr = 0x8217AEB8;
	sub_82119318(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821192d8
	ctx.lr = 0x8217AEC0;
	sub_821192D8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8217af34
	if (ctx.cr6.lt) goto loc_8217AF34;
	// bne cr6,0x8217af3c
	if (!ctx.cr6.eq) goto loc_8217AF3C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,288(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// lfs f13,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8217af04
	if (!ctx.cr6.eq) goto loc_8217AF04;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,16588(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16588);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x8217af04
	if (!ctx.cr6.lt) goto loc_8217AF04;
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// b 0x8217af18
	goto loc_8217AF18;
loc_8217AF04:
	// lfs f13,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,92(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f12,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f13.f64)));
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
loc_8217AF18:
	// lfs f0,324(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// lfs f0,328(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// bl 0x82174dc0
	ctx.lr = 0x8217AF2C;
	sub_82174DC0(ctx, base);
	// stfs f1,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// b 0x8217af3c
	goto loc_8217AF3C;
loc_8217AF34:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_8217AF3C:
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

DEFINE_REX_FUNC(sub_8217E560) {
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
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r11,-7072
	r31.s64 = ctx.r11.s64 + -7072;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,10484
	ctx.r4.s64 = r31.s64 + 10484;
	// bl 0x820e1bf0
	ctx.lr = 0x8217E594;
	sub_820E1BF0(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,14180
	ctx.r4.s64 = ctx.r11.s64 + 14180;
	// bl 0x820e1bf0
	ctx.lr = 0x8217E5A8;
	sub_820E1BF0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,16336(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16336);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x820e2128
	ctx.lr = 0x8217E5D0;
	sub_820E2128(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x820e2128
	ctx.lr = 0x8217E5DC;
	sub_820E2128(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// ble cr6,0x8217e5fc
	if (!ctx.cr6.gt) goto loc_8217E5FC;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8217e5fc
	if (!ctx.cr6.gt) goto loc_8217E5FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8217e63c
	goto loc_8217E63C;
loc_8217E5FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16172(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// ble cr6,0x8217e61c
	if (!ctx.cr6.gt) goto loc_8217E61C;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8217e61c
	if (!ctx.cr6.gt) goto loc_8217E61C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8217e63c
	goto loc_8217E63C;
loc_8217E61C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// ble cr6,0x8217e638
	if (!ctx.cr6.gt) goto loc_8217E638;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// li r3,2
	ctx.r3.s64 = 2;
	// bgt cr6,0x8217e63c
	if (ctx.cr6.gt) goto loc_8217E63C;
loc_8217E638:
	// li r3,3
	ctx.r3.s64 = 3;
loc_8217E63C:
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

DEFINE_REX_FUNC(sub_82181210) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8218123C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r11,r31,r30
	ctx.r11.u64 = r30.u64 - r31.u64;
	// divwu r10,r3,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? ctx.r3.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
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

DEFINE_REX_FUNC(sub_82181A20) {
	REX_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82181D38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82181D40;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82181dd4
	if (ctx.cr6.eq) goto loc_82181DD4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82181d94
	if (ctx.cr6.eq) goto loc_82181D94;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82181ddc
	if (!ctx.cr6.eq) goto loc_82181DDC;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r10,68(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 68);
	// mulli r9,r11,1000
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1000));
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r3,r9,r10
	ctx.r3.u64 = uint32_t((ctx.r10.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r9.s32 / ctx.r10.s32 : 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bl 0x822c8770
	ctx.lr = 0x82181D90;
	sub_822C8770(ctx, base);
	// b 0x82181ddc
	goto loc_82181DDC;
loc_82181D94:
	// clrlwi r30,r5,24
	r30.u64 = ctx.r5.u32 & 0xFF;
	// addi r11,r30,3
	ctx.r11.s64 = r30.s64 + 3;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82181ddc
	if (!ctx.cr0.eq) goto loc_82181DDC;
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// bl 0x82182158
	ctx.lr = 0x82181DC0;
	sub_82182158(ctx, base);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// b 0x82181ddc
	goto loc_82181DDC;
loc_82181DD4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821816f8
	ctx.lr = 0x82181DDC;
	sub_821816F8(ctx, base);
loc_82181DDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82184278) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-4192
	ctx.r3.s64 = ctx.r11.s64 + -4192;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821843F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821843F8;
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x82184430;
	sub_822D4FA0(ctx, base);
	// li r11,31
	ctx.r11.s64 = 31;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// li r9,50
	ctx.r9.s64 = 50;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// stw r9,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r30,108(r31)
	REX_STORE_U32(r31.u32 + 108, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,112(r31)
	REX_STORE_U32(r31.u32 + 112, r30.u32);
	// stb r11,116(r31)
	REX_STORE_U8(r31.u32 + 116, ctx.r11.u8);
	// bl 0x822ad068
	ctx.lr = 0x82184468;
	sub_822AD068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82186150) {
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
	// bl 0x82185c60
	ctx.lr = 0x8218616C;
	sub_82185C60(ctx, base);
	// lbz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 436);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821861b0
	if (!ctx.cr0.eq) goto loc_821861B0;
	// addi r30,r31,404
	r30.s64 = r31.s64 + 404;
	// stb r11,100(r31)
	REX_STORE_U8(r31.u32 + 100, ctx.r11.u8);
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82186190;
	sub_822D5870(ctx, base);
	// lwz r11,432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 432);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,416(r31)
	REX_STORE_U32(r31.u32 + 416, ctx.r11.u32);
	// bl 0x82233fd8
	ctx.lr = 0x821861A8;
	sub_82233FD8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82186220
	goto loc_82186220;
loc_821861B0:
	// lwz r11,404(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 404);
	// addi r3,r31,404
	ctx.r3.s64 = r31.s64 + 404;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82186224
	if (ctx.cr6.eq) goto loc_82186224;
	// bl 0x82209598
	ctx.lr = 0x821861C4;
	sub_82209598(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821861e4
	if (!ctx.cr0.lt) goto loc_821861E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,436(r31)
	REX_STORE_U8(r31.u32 + 436, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// b 0x82186228
	goto loc_82186228;
loc_821861E4:
	// lwz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 76);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,100(r31)
	REX_STORE_U8(r31.u32 + 100, ctx.r11.u8);
	// lbz r11,116(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 116);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82186204
	if (ctx.cr0.eq) goto loc_82186204;
	// lwz r3,492(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 492);
	// bl 0x8218a198
	ctx.lr = 0x82186204;
	sub_8218A198(ctx, base);
loc_82186204:
	// lwz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82187de8
	ctx.lr = 0x82186210;
	sub_82187DE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_82186220:
	// stb r11,436(r31)
	REX_STORE_U8(r31.u32 + 436, ctx.r11.u8);
loc_82186224:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82186228:
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

DEFINE_REX_FUNC(sub_82188EF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82188EF8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,17600
	ctx.r3.s64 = 17600;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x822c80d0
	ctx.lr = 0x82188F0C;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82188f20
	if (ctx.cr0.eq) goto loc_82188F20;
	// bl 0x82188d28
	ctx.lr = 0x82188F18;
	sub_82188D28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82188f24
	goto loc_82188F24;
loc_82188F20:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82188F24:
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821814c0
	ctx.lr = 0x82188F30;
	sub_821814C0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-3908
	ctx.r11.s64 = ctx.r11.s64 + -3908;
	// clrlwi r29,r30,24
	r29.u64 = r30.u32 & 0xFF;
	// stb r10,76(r31)
	REX_STORE_U8(r31.u32 + 76, ctx.r10.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r30,0
	r30.s64 = 0;
loc_82188F50:
	// subf r11,r29,r30
	ctx.r11.u64 = r30.u64 - r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x821815a0
	ctx.lr = 0x82188F64;
	sub_821815A0(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// blt cr6,0x82188f50
	if (ctx.cr6.lt) goto loc_82188F50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8218A820) {
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
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8218A840:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x8218a840
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218A840;
	// rlwinm r3,r10,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82202ea0
	ctx.lr = 0x8218A858;
	sub_82202EA0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8218a8ac
	if (ctx.cr0.eq) goto loc_8218A8AC;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,28056
	r31.s64 = ctx.r11.s64 + 28056;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_8218A870:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r5,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// bl 0x8218a630
	ctx.lr = 0x8218A87C;
	sub_8218A630(ctx, base);
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r10,r31,64
	ctx.r10.s64 = r31.s64 + 64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8218a870
	if (ctx.cr6.lt) goto loc_8218A870;
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
loc_8218A8AC:
	// b 0x8218a8ac
	goto loc_8218A8AC;
}

DEFINE_REX_FUNC(sub_8218DEF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// li r10,33
	ctx.r10.s64 = 33;
	// addi r11,r11,30412
	ctx.r11.s64 = ctx.r11.s64 + 30412;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8218DF10:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8218df10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218DF10;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218E750) {
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
	ctx.lr = 0x8218E758;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r6,r9,2576
	ctx.r6.s64 = ctx.r9.s64 + 2576;
	// addi r9,r11,-8096
	ctx.r9.s64 = ctx.r11.s64 + -8096;
	// addi r8,r10,-7928
	ctx.r8.s64 = ctx.r10.s64 + -7928;
	// addi r7,r7,-16168
	ctx.r7.s64 = ctx.r7.s64 + -16168;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x821f7d50
	ctx.lr = 0x8218E788;
	sub_821F7D50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r25,r11,31764
	r25.s64 = ctx.r11.s64 + 31764;
	// beq 0x8218e7a4
	if (ctx.cr0.eq) goto loc_8218E7A4;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r25,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// b 0x8218e7a8
	goto loc_8218E7A8;
loc_8218E7A4:
	// li r29,0
	r29.s64 = 0;
loc_8218E7A8:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lha r9,16(r29)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r29.u32 + 16));
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// addi r26,r11,30520
	r26.s64 = ctx.r11.s64 + 30520;
	// rlwinm r11,r9,0,22,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFF3FF;
	// addi r28,r10,-17160
	r28.s64 = ctx.r10.s64 + -17160;
	// addi r27,r26,-4
	r27.s64 = r26.s64 + -4;
	// sth r11,16(r29)
	REX_STORE_U16(r29.u32 + 16, ctx.r11.u16);
	// mr r31,r28
	r31.u64 = r28.u64;
	// li r30,0
	r30.s64 = 0;
loc_8218E7D0:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821f7d50
	ctx.lr = 0x8218E7F0;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8218e804
	if (ctx.cr0.eq) goto loc_8218E804;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r25,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// b 0x8218e808
	goto loc_8218E808;
loc_8218E804:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8218E808:
	// stwu r11,4(r27)
	ea = 4 + r27.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r27.u32 = ea;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r28,48
	ctx.r11.s64 = r28.s64 + 48;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8218e7d0
	if (ctx.cr6.lt) goto loc_8218E7D0;
	// li r9,2
	ctx.r9.s64 = 2;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r10,r26,24
	ctx.r10.s64 = r26.s64 + 24;
	// addi r11,r11,-7072
	ctx.r11.s64 = ctx.r11.s64 + -7072;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8218E834:
	// lwz r9,-16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -16);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// addi r8,r8,-16032
	ctx.r8.s64 = ctx.r8.s64 + -16032;
	// addi r7,r7,-16032
	ctx.r7.s64 = ctx.r7.s64 + -16032;
	// stw r8,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// stw r11,80(r9)
	REX_STORE_U32(ctx.r9.u32 + 80, ctx.r11.u32);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r7,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r7.u32);
	// stw r11,80(r9)
	REX_STORE_U32(ctx.r9.u32 + 80, ctx.r11.u32);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,3696
	ctx.r11.s64 = ctx.r11.s64 + 3696;
	// bdnz 0x8218e834
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218E834;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r3,44(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 44);
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// lis r4,0
	ctx.r4.s64 = 0;
	// addi r6,r8,2564
	ctx.r6.s64 = ctx.r8.s64 + 2564;
	// addi r9,r11,-22768
	ctx.r9.s64 = ctx.r11.s64 + -22768;
	// addi r8,r10,-8032
	ctx.r8.s64 = ctx.r10.s64 + -8032;
	// addi r7,r7,-16152
	ctx.r7.s64 = ctx.r7.s64 + -16152;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x821f7d50
	ctx.lr = 0x8218E89C;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8218e8a8
	if (ctx.cr0.eq) goto loc_8218E8A8;
	// stw r25,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r25.u32);
loc_8218E8A8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r26)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r26.u32 + 48, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_821940F8) {
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
	ctx.lr = 0x82194110;
	sub_82192ED8(ctx, base);
	// bl 0x82191cc0
	ctx.lr = 0x82194114;
	sub_82191CC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82194124
	if (ctx.cr0.eq) goto loc_82194124;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82191be0
	ctx.lr = 0x82194124;
	sub_82191BE0(ctx, base);
loc_82194124:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_82195B78) {
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
	// lwz r3,132(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82199a80
	ctx.lr = 0x82195B9C;
	sub_82199A80(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// clrlwi. r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r30,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, r30.u8);
	// beq 0x82195bb8
	if (ctx.cr0.eq) goto loc_82195BB8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82195bc0
	goto loc_82195BC0;
loc_82195BB8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_82195BC0:
	// stfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
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

DEFINE_REX_FUNC(sub_82198B18) {
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
	ctx.lr = 0x82198B20;
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f29.u64);
	// stfd f30,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r4,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r4.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f0,16896(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16896);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r5,3924
	ctx.r10.s64 = ctx.r5.s64 + 3924;
	// lfs f13,30028(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 30028);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	f30.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f31,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	f31.f64 = double(temp.f32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f30,104(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821918a0
	ctx.lr = 0x82198B98;
	sub_821918A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// stfs f30,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r3,100
	ctx.r3.s64 = 100;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,-8492(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8492);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28264(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28264);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82191bb0
	ctx.lr = 0x82198BC4;
	sub_82191BB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r28,0
	r28.s64 = 0;
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r29,0
	r29.s64 = 0;
	// stfs f1,120(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r27,r31,84
	r27.s64 = r31.s64 + 84;
	// lfs f29,26816(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26816);
	f29.f64 = double(temp.f32);
	// lfs f30,-24904(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24904);
	f30.f64 = double(temp.f32);
loc_82198BF0:
	// extsw r11,r29
	ctx.r11.s64 = r29.s32;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - f30.f64));
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(r28.s32, r26.s32, ctx.xer);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r4,30
	ctx.r4.s64 = 30;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// blt cr6,0x82198c38
	if (ctx.cr6.lt) goto loc_82198C38;
	// li r4,29
	ctx.r4.s64 = 29;
loc_82198C38:
	// bl 0x821918a0
	ctx.lr = 0x82198C3C;
	sub_821918A0(ctx, base);
	// addi r29,r29,26
	r29.s64 = r29.s64 + 26;
	// stw r3,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r3.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpwi cr6,r29,78
	ctx.cr6.compare<int32_t>(r29.s32, 78, ctx.xer);
	// blt cr6,0x82198bf0
	if (ctx.cr6.lt) goto loc_82198BF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

DEFINE_REX_FUNC(sub_8219D3B0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,-32480
	ctx.r11.s64 = ctx.r11.s64 + -32480;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// addi r10,r10,-8304
	ctx.r10.s64 = ctx.r10.s64 + -8304;
	// mulli r4,r11,2176
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(2176));
	// lwz r3,496(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 496);
	// b 0x82190670
	sub_82190670(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8219E6F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-32480
	ctx.r9.s64 = ctx.r11.s64 + -32480;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// stw r10,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stfs f0,180(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 184, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219F048) {
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
	ctx.lr = 0x8219F050;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f34
	ctx.lr = 0x8219F058;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lbz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 24);
	// bl 0x8218c0a8
	ctx.lr = 0x8219F068;
	sub_8218C0A8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lwz r29,60(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 60);
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219f09c
	if (ctx.cr6.eq) goto loc_8219F09C;
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8219f09c
	if (ctx.cr6.eq) goto loc_8219F09C;
	// lfs f28,60(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 60);
	f28.f64 = double(temp.f32);
	// lfs f29,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	f29.f64 = double(temp.f32);
	// lfs f30,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	f30.f64 = double(temp.f32);
	// b 0x8219f0a8
	goto loc_8219F0A8;
loc_8219F09C:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	f30.f64 = f31.f64;
	// fmr f29,f31
	f29.f64 = f31.f64;
	// fmr f28,f31
	f28.f64 = f31.f64;
loc_8219F0A8:
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r26,12(r28)
	r26.u64 = REX_LOAD_U32(r28.u32 + 12);
	// b 0x8219f0d0
	goto loc_8219F0D0;
loc_8219F0B8:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// mulli r10,r10,80
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(80));
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// stb r9,76(r10)
	REX_STORE_U8(ctx.r10.u32 + 76, ctx.r9.u8);
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_8219F0D0:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8219f0b8
	if (!ctx.cr6.eq) goto loc_8219F0B8;
	// lwz r27,36(r28)
	r27.u64 = REX_LOAD_U32(r28.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8219f2b4
	if (ctx.cr6.eq) goto loc_8219F2B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f27,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f27.f64 = double(temp.f32);
loc_8219F0EC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lhz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 16);
	// mulli r11,r11,80
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(80));
	// add r30,r11,r26
	r30.u64 = ctx.r11.u64 + r26.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8219f120
	if (ctx.cr0.eq) goto loc_8219F120;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8219ef70
	ctx.lr = 0x8219F114;
	sub_8219EF70(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8219cef8
	ctx.lr = 0x8219F11C;
	sub_8219CEF8(ctx, base);
	// sth r3,268(r31)
	REX_STORE_U16(r31.u32 + 268, ctx.r3.u16);
loc_8219F120:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// addi r10,r31,28
	ctx.r10.s64 = r31.s64 + 28;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8219f150
	if (ctx.cr6.eq) goto loc_8219F150;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r9
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
loc_8219F150:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f0,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 64, temp.u32);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x8219f180
	if (ctx.cr6.eq) goto loc_8219F180;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r10
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
loc_8219F180:
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// stfs f0,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 68, temp.u32);
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x8219f1b0
	if (ctx.cr6.eq) goto loc_8219F1B0;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r9
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
loc_8219F1B0:
	// stfs f0,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 60, temp.u32);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lfs f0,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219f1dc
	if (ctx.cr6.eq) goto loc_8219F1DC;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r11
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
loc_8219F1DC:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8219f1e8
	if (!ctx.cr6.lt) goto loc_8219F1E8;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_8219F1E8:
	// lhz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 268);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// lhz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// lhz r9,10(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
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
	// lhz r11,86(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r11,72(r30)
	REX_STORE_U16(r30.u32 + 72, ctx.r11.u16);
	// lfs f0,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,44(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219f24c
	if (ctx.cr6.eq) goto loc_8219F24C;
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
loc_8219F24C:
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219f264
	if (ctx.cr0.eq) goto loc_8219F264;
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
	// ble cr6,0x8219f264
	if (!ctx.cr6.gt) goto loc_8219F264;
	// fmr f0,f27
	ctx.f0.f64 = f27.f64;
loc_8219F264:
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,44(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 44, temp.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r10,r11,84
	ctx.r10.s64 = ctx.r11.s64 + 84;
	// lfs f0,84(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f0,88(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f0,92(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8219f0ec
	if (!ctx.cr6.eq) goto loc_8219F0EC;
loc_8219F2B4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f80
	ctx.lr = 0x8219F2C0;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821A9D58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82209800
	ctx.lr = 0x821A9D74;
	sub_82209800(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821a9d84
	if (!ctx.cr0.eq) goto loc_821A9D84;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x821a9d90
	goto loc_821A9D90;
loc_821A9D84:
	// cmplwi cr6,r3,1167
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1167, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x821a9d94
	if (ctx.cr6.eq) goto loc_821A9D94;
loc_821A9D90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A9D94:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AA9C0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,132(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AB3B8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-19520
	ctx.r11.s64 = ctx.r11.s64 + -19520;
	// addi r10,r10,8184
	ctx.r10.s64 = ctx.r10.s64 + 8184;
	// addi r9,r9,8136
	ctx.r9.s64 = ctx.r9.s64 + 8136;
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AC880) {
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
	ctx.lr = 0x821AC888;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f2c
	ctx.lr = 0x821AC890;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r28,r11,-11288
	r28.s64 = ctx.r11.s64 + -11288;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d5870
	ctx.lr = 0x821AC8AC;
	sub_822D5870(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r11,-11352
	ctx.r3.s64 = ctx.r11.s64 + -11352;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x821AC8C0;
	sub_822D5870(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r11,432
	r29.s64 = ctx.r11.s64 + 432;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r30,0
	r30.s64 = 0;
	// lfs f31,-18812(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -18812);
	f31.f64 = double(temp.f32);
	// lwz r11,220(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 220);
	// lfs f30,8440(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8440);
	f30.f64 = double(temp.f32);
	// lwz r10,16468(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16468);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821ac9a0
	if (!ctx.cr6.gt) goto loc_821AC9A0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f25,8436(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8436);
	f25.f64 = double(temp.f32);
	// li r31,0
	r31.s64 = 0;
	// lfs f26,-24240(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24240);
	f26.f64 = double(temp.f32);
	// addi r28,r28,-4
	r28.s64 = r28.s64 + -4;
	// lfs f28,-24904(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -24904);
	f28.f64 = double(temp.f32);
	// lfs f29,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	f29.f64 = double(temp.f32);
	// lfs f27,8252(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8252);
	f27.f64 = double(temp.f32);
loc_821AC91C:
	// add r10,r31,r11
	ctx.r10.u64 = r31.u64 + ctx.r11.u64;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// lha r3,16472(r10)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 16472));
	// lha r4,16474(r11)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 16474));
	// bl 0x82152228
	ctx.lr = 0x821AC930;
	sub_82152228(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821ac944
	if (!ctx.cr6.eq) goto loc_821AC944;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82152228
	ctx.lr = 0x821AC944;
	sub_82152228(ctx, base);
loc_821AC944:
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f27,120(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f29,124(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r6,448(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 448);
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x821ab148
	ctx.lr = 0x821AC97C;
	sub_821AB148(ctx, base);
	// lwz r11,220(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 220);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + r28.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r28.u32 = ea;
	// fadds f31,f31,f26
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 + f26.f64));
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// fadds f30,f30,f25
	f30.f64 = double(float(f30.f64 + f25.f64));
	// lwz r10,16468(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16468);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821ac91c
	if (ctx.cr6.lt) goto loc_821AC91C;
loc_821AC9A0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821e21b8
	ctx.lr = 0x821AC9A8;
	sub_821E21B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821e34e0
	ctx.lr = 0x821AC9B4;
	sub_821E34E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,13420
	ctx.r11.s64 = ctx.r11.s64 + 13420;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821AC9C8;
	sub_821E2FD0(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-11360(r10)
	REX_STORE_U8(ctx.r10.u32 + -11360, ctx.r11.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f78
	ctx.lr = 0x821AC9E0;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821B4D70) {
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
	ctx.lr = 0x821B4D78;
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// lwz r28,220(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r30,8(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 8);
	// bl 0x821d8648
	ctx.lr = 0x821B4D9C;
	sub_821D8648(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r26,r11,13128
	r26.s64 = ctx.r11.s64 + 13128;
	// lis r29,-32170
	r29.s64 = -2108293120;
	// lfs f31,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b4dd4
	if (ctx.cr0.eq) goto loc_821B4DD4;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// bne cr6,0x821b4f48
	if (!ctx.cr6.eq) goto loc_821B4F48;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218c098
	ctx.lr = 0x821B4DD0;
	sub_8218C098(ctx, base);
	// b 0x821b4f48
	goto loc_821B4F48;
loc_821B4DD4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1840(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 1840);
	ctx.f13.f64 = double(temp.f32);
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lfs f0,15628(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15628);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x821d6210
	ctx.lr = 0x821B4E00;
	sub_821D6210(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30
	ctx.r5.s64 = 30;
	// lfs f2,16232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16232);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2024(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2024);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212f220
	ctx.lr = 0x821B4E1C;
	sub_8212F220(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// sth r11,308(r31)
	REX_STORE_U16(r31.u32 + 308, ctx.r11.u16);
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821b25c8
	ctx.lr = 0x821B4E34;
	sub_821B25C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821c54e0
	ctx.lr = 0x821B4E40;
	sub_821C54E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821cb7d0
	ctx.lr = 0x821B4E48;
	sub_821CB7D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821cb7d0
	ctx.lr = 0x821B4E50;
	sub_821CB7D0(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,9964
	ctx.r5.s64 = ctx.r10.s64 + 9964;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-9580(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -9580);
	// bl 0x821af9d8
	ctx.lr = 0x821B4E6C;
	sub_821AF9D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821be7c8
	ctx.lr = 0x821B4E78;
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
	ctx.lr = 0x821B4E9C;
	sub_821C1760(ctx, base);
	// addi r3,r30,8120
	ctx.r3.s64 = r30.s64 + 8120;
	// bl 0x821be4f8
	ctx.lr = 0x821B4EA4;
	sub_821BE4F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c5868
	ctx.lr = 0x821B4EAC;
	sub_821C5868(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,-28236(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -28236);
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,5
	ctx.r4.s64 = 5;
	// lfs f2,-8492(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8492);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820f3460
	ctx.lr = 0x821B4ECC;
	sub_820F3460(ctx, base);
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
	ctx.lr = 0x821B4EE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-28236(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -28236);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x820f2d80
	ctx.lr = 0x821B4EF8;
	sub_820F2D80(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f1,26896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26896);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822006f8
	ctx.lr = 0x821B4F08;
	sub_822006F8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200700
	ctx.lr = 0x821B4F14;
	sub_82200700(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200708
	ctx.lr = 0x821B4F20;
	sub_82200708(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f1,16836(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16836);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200818
	ctx.lr = 0x821B4F30;
	sub_82200818(ctx, base);
	// bl 0x821c3f68
	ctx.lr = 0x821B4F34;
	sub_821C3F68(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821c9e88
	ctx.lr = 0x821B4F48;
	sub_821C9E88(ctx, base);
loc_821B4F48:
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
	ctx.lr = 0x821B4F60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,10140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10140);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lfs f0,16308(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16308);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,20156
	ctx.r10.s64 = ctx.r11.s64 + 20156;
	// lwz r10,68(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 68);
	// lfs f13,20208(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,20212(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20212);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f1,20204(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20204);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B4F9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f1,2392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200a40
	ctx.lr = 0x821B4FAC;
	sub_82200A40(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f1,2388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2388);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200730
	ctx.lr = 0x821B4FBC;
	sub_82200730(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-28236(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -28236);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82202560
	ctx.lr = 0x821B4FCC;
	sub_82202560(ctx, base);
	// lwz r11,19676(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 19676);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821b52b8
	if (!ctx.cr6.eq) goto loc_821B52B8;
	// bl 0x821b1c28
	ctx.lr = 0x821B4FDC;
	sub_821B1C28(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r30,r11,-7072
	r30.s64 = ctx.r11.s64 + -7072;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r27,r11,9936
	r27.s64 = ctx.r11.s64 + 9936;
	// lfs f29,9948(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 9948);
	f29.f64 = double(temp.f32);
	// lis r28,-32168
	r28.s64 = -2108162048;
	// lfs f30,15632(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15632);
	f30.f64 = double(temp.f32);
	// lbz r11,6(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 6);
	// lwz r29,48(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821b5128
	if (!ctx.cr0.eq) goto loc_821B5128;
	// bl 0x821159c8
	ctx.lr = 0x821B5014;
	sub_821159C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821b5128
	if (!ctx.cr0.eq) goto loc_821B5128;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x821b5128
	if (ctx.cr6.lt) goto loc_821B5128;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x821b5128
	if (!ctx.cr6.lt) goto loc_821B5128;
	// lha r10,30(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 30));
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// bne cr6,0x821b504c
	if (!ctx.cr6.eq) goto loc_821B504C;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x821b5128
	if (!ctx.cr6.eq) goto loc_821B5128;
loc_821B504C:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b5128
	if (!ctx.cr6.eq) goto loc_821B5128;
	// lbz r11,6(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 6);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821b5128
	if (!ctx.cr0.eq) goto loc_821B5128;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bne cr6,0x821b509c
	if (!ctx.cr6.eq) goto loc_821B509C;
	// lbz r11,18(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 18);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b509c
	if (ctx.cr0.eq) goto loc_821B509C;
	// lbz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 14);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b509c
	if (ctx.cr0.eq) goto loc_821B509C;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// lbz r10,27(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 27);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821b5128
	if (ctx.cr6.eq) goto loc_821B5128;
loc_821B509C:
	// lwz r11,-9912(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -9912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b5108
	if (!ctx.cr6.eq) goto loc_821B5108;
	// lwz r11,1852(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1852);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b5108
	if (ctx.cr0.eq) goto loc_821B5108;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821b50c8
	if (!ctx.cr6.eq) goto loc_821B50C8;
	// fmr f31,f29
	f31.f64 = f29.f64;
loc_821B50C8:
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,147
	ctx.r3.u64 = ctx.r3.u64 | 147;
	// bl 0x820e68b8
	ctx.lr = 0x821B50D8;
	sub_820E68B8(ctx, base);
	// stfs f31,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// stfs f30,20(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821eaf80
	ctx.lr = 0x821B5100;
	sub_821EAF80(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-9912(r28)
	REX_STORE_U32(r28.u32 + -9912, ctx.r11.u32);
loc_821B5108:
	// lbz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 2);
	// addi r10,r26,4
	ctx.r10.s64 = r26.s64 + 4;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b5128
	if (ctx.cr0.eq) goto loc_821B5128;
	// stw r29,44(r31)
	REX_STORE_U32(r31.u32 + 44, r29.u32);
loc_821B5128:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r29,48(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 48);
	// ori r11,r11,3702
	ctx.r11.u64 = ctx.r11.u64 | 3702;
	// lbzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821b5270
	if (!ctx.cr0.eq) goto loc_821B5270;
	// bl 0x821159c8
	ctx.lr = 0x821B5144;
	sub_821159C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821b5270
	if (!ctx.cr0.eq) goto loc_821B5270;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x821b5270
	if (ctx.cr6.lt) goto loc_821B5270;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x821b5270
	if (!ctx.cr6.lt) goto loc_821B5270;
	// lha r10,30(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 30));
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// bne cr6,0x821b517c
	if (!ctx.cr6.eq) goto loc_821B517C;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x821b5270
	if (!ctx.cr6.eq) goto loc_821B5270;
loc_821B517C:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b5270
	if (!ctx.cr6.eq) goto loc_821B5270;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3702
	ctx.r11.u64 = ctx.r11.u64 | 3702;
	// lbzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821b5270
	if (!ctx.cr0.eq) goto loc_821B5270;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bne cr6,0x821b51dc
	if (!ctx.cr6.eq) goto loc_821B51DC;
	// lbz r11,18(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 18);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b51dc
	if (ctx.cr0.eq) goto loc_821B51DC;
	// lbz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 14);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b51dc
	if (ctx.cr0.eq) goto loc_821B51DC;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lbz r11,27(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 27);
	// ori r10,r10,3696
	ctx.r10.u64 = ctx.r10.u64 | 3696;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// lbzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + ctx.r10.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821b5270
	if (ctx.cr6.eq) goto loc_821B5270;
loc_821B51DC:
	// lwz r11,-9912(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -9912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b5248
	if (!ctx.cr6.eq) goto loc_821B5248;
	// lwz r11,1852(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1852);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b5248
	if (ctx.cr0.eq) goto loc_821B5248;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821b5208
	if (!ctx.cr6.eq) goto loc_821B5208;
	// fmr f31,f29
	f31.f64 = f29.f64;
loc_821B5208:
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,147
	ctx.r3.u64 = ctx.r3.u64 | 147;
	// bl 0x820e68b8
	ctx.lr = 0x821B5218;
	sub_820E68B8(ctx, base);
	// stfs f31,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// stfs f30,20(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821eaf80
	ctx.lr = 0x821B5240;
	sub_821EAF80(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-9912(r28)
	REX_STORE_U32(r28.u32 + -9912, ctx.r11.u32);
loc_821B5248:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r10,r26,4
	ctx.r10.s64 = r26.s64 + 4;
	// ori r11,r11,3698
	ctx.r11.u64 = ctx.r11.u64 | 3698;
	// lbzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b5270
	if (ctx.cr0.eq) goto loc_821B5270;
	// stw r29,44(r31)
	REX_STORE_U32(r31.u32 + 44, r29.u32);
loc_821B5270:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821b52b8
	if (ctx.cr6.lt) goto loc_821B52B8;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r10,17
	ctx.r10.s64 = 17;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// stw r8,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r8.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r11.u32);
	// addi r11,r10,-8304
	ctx.r11.s64 = ctx.r10.s64 + -8304;
	// lfs f1,16788(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16788);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,828(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 828);
	// bl 0x821eb660
	ctx.lr = 0x821B52B8;
	sub_821EB660(ctx, base);
loc_821B52B8:
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_821CAE60) {
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
	ctx.lr = 0x821CAE68;
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lfs f30,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f30.f64 = double(temp.f32);
	// addi r30,r3,9016
	r30.s64 = ctx.r3.s64 + 9016;
	// lfs f31,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lis r25,-32168
	r25.s64 = -2108162048;
	// addi r26,r11,12392
	r26.s64 = ctx.r11.s64 + 12392;
loc_821CAE9C:
	// li r31,0
	r31.s64 = 0;
	// sth r29,0(r30)
	REX_STORE_U16(r30.u32 + 0, r29.u16);
	// rlwinm r27,r29,1,0,30
	r27.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
loc_821CAEA8:
	// mulli r11,r31,24
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, r31.u16);
	// lwz r3,-9452(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + -9452);
	// bl 0x821af9d8
	ctx.lr = 0x821CAEC8;
	sub_821AF9D8(ctx, base);
	// subf r11,r27,r31
	ctx.r11.u64 = r31.u64 - r27.u64;
	// mulli r11,r11,88
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(88));
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r3,16100(r11)
	REX_STORE_U32(ctx.r11.u32 + 16100, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bne cr6,0x821caef8
	if (!ctx.cr6.eq) goto loc_821CAEF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x821caf04
	goto loc_821CAF04;
loc_821CAEF8:
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_821CAF04:
	// bl 0x821c85a8
	ctx.lr = 0x821CAF08;
	sub_821C85A8(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// ble cr6,0x821caea8
	if (!ctx.cr6.gt) goto loc_821CAEA8;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,52
	r30.s64 = r30.s64 + 52;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// ble cr6,0x821cae9c
	if (!ctx.cr6.gt) goto loc_821CAE9C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_821D0D40) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lbz r11,-8934(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -8934);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821d4528
	sub_821D4528(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D1198) {
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
	// addi r31,r11,-8928
	r31.s64 = ctx.r11.s64 + -8928;
	// lwz r30,-4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + -4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x821d11d8
	if (ctx.cr6.eq) goto loc_821D11D8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e48c0
	ctx.lr = 0x821D11C8;
	sub_820E48C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821D11D0;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4(r31)
	REX_STORE_U32(r31.u32 + -4, ctx.r11.u32);
loc_821D11D8:
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x821d11fc
	if (ctx.cr6.eq) goto loc_821D11FC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e48c0
	ctx.lr = 0x821D11EC;
	sub_820E48C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821D11F4;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_821D11FC:
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

DEFINE_REX_FUNC(sub_821D2280) {
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
	// lbz r11,-8936(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -8936);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d22b8
	if (ctx.cr0.eq) goto loc_821D22B8;
	// bl 0x821d1ed0
	ctx.lr = 0x821D22A0;
	sub_821D1ED0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,30
	ctx.r4.s64 = 30;
	// li r3,39
	ctx.r3.s64 = 39;
	// bne 0x821d22b4
	if (!ctx.cr0.eq) goto loc_821D22B4;
	// li r3,29
	ctx.r3.s64 = 29;
loc_821D22B4:
	// bl 0x821d45b0
	ctx.lr = 0x821D22B8;
	sub_821D45B0(ctx, base);
loc_821D22B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D3060) {
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
	ctx.lr = 0x821D3068;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r11,-8912(r9)
	REX_STORE_U32(ctx.r9.u32 + -8912, ctx.r11.u32);
	// addi r29,r10,432
	r29.s64 = ctx.r10.s64 + 432;
	// beq cr6,0x821d3094
	if (ctx.cr6.eq) goto loc_821D3094;
	// stw r3,352(r29)
	REX_STORE_U32(r29.u32 + 352, ctx.r3.u32);
loc_821D3094:
	// bl 0x82187b58
	ctx.lr = 0x821D3098;
	sub_82187B58(ctx, base);
	// lhz r11,30(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 30);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// addi r31,r10,-7072
	r31.s64 = ctx.r10.s64 + -7072;
	// bne cr6,0x821d3108
	if (!ctx.cr6.eq) goto loc_821D3108;
	// bl 0x82187bd8
	ctx.lr = 0x821D30B0;
	sub_82187BD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821d30e8
	if (!ctx.cr6.eq) goto loc_821D30E8;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r31,r11,-7072
	r31.s64 = ctx.r11.s64 + -7072;
	// cntlzw r9,r30
	ctx.r9.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// ori r8,r10,3698
	ctx.r8.u64 = ctx.r10.u64 | 3698;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// li r30,0
	r30.s64 = 0;
	// stb r11,2(r31)
	REX_STORE_U8(r31.u32 + 2, ctx.r11.u8);
	// stbx r10,r31,r8
	REX_STORE_U8(r31.u32 + ctx.r8.u32, ctx.r10.u8);
	// b 0x821d3110
	goto loc_821D3110;
loc_821D30E8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cntlzw r10,r30
	ctx.r10.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// ori r9,r11,3698
	ctx.r9.u64 = ctx.r11.u64 | 3698;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r30,1
	r30.s64 = 1;
	// stb r10,2(r31)
	REX_STORE_U8(r31.u32 + 2, ctx.r10.u8);
	// stbx r11,r31,r9
	REX_STORE_U8(r31.u32 + ctx.r9.u32, ctx.r11.u8);
loc_821D3108:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(r30.s32, -1, ctx.xer);
	// beq cr6,0x821d31c8
	if (ctx.cr6.eq) goto loc_821D31C8;
loc_821D3110:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// sth r11,8(r29)
	REX_STORE_U16(r29.u32 + 8, ctx.r11.u16);
	// clrlwi r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	// ori r10,r10,3696
	ctx.r10.u64 = ctx.r10.u64 | 3696;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r30,r11,r31
	r30.u64 = ctx.r11.u64 + r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r27,8(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x821c78c0
	ctx.lr = 0x821D313C;
	sub_821C78C0(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c78c0
	ctx.lr = 0x821D314C;
	sub_821C78C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r28,30(r29)
	r28.s64 = int16_t(REX_LOAD_U16(r29.u32 + 30));
	// cmpwi cr6,r28,17
	ctx.cr6.compare<int32_t>(r28.s32, 17, ctx.xer);
	// bne cr6,0x821d3164
	if (!ctx.cr6.eq) goto loc_821D3164;
	// bl 0x821d1918
	ctx.lr = 0x821D3160;
	sub_821D1918(ctx, base);
	// b 0x821d3170
	goto loc_821D3170;
loc_821D3164:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x821d32a0
	ctx.lr = 0x821D3170;
	sub_821D32A0(ctx, base);
loc_821D3170:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,80(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 80);
	// bl 0x821dc148
	ctx.lr = 0x821D317C;
	sub_821DC148(ctx, base);
	// lhz r11,30(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 30);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// beq cr6,0x821d3194
	if (ctx.cr6.eq) goto loc_821D3194;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821c78c0
	ctx.lr = 0x821D3194;
	sub_821C78C0(ctx, base);
loc_821D3194:
	// bl 0x821b2a70
	ctx.lr = 0x821D3198;
	sub_821B2A70(ctx, base);
	// lha r11,30(r29)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r29.u32 + 30));
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821d31ac
	if (ctx.cr6.eq) goto loc_821D31AC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821d31c8
	if (!ctx.cr6.eq) goto loc_821D31C8;
loc_821D31AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r11,3(r27)
	REX_STORE_U8(r27.u32 + 3, ctx.r11.u8);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821d32a0
	ctx.lr = 0x821D31C4;
	sub_821D32A0(ctx, base);
	// bl 0x821b2a70
	ctx.lr = 0x821D31C8;
	sub_821B2A70(ctx, base);
loc_821D31C8:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// bne cr6,0x821d31e8
	if (!ctx.cr6.eq) goto loc_821D31E8;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r11,2
	ctx.r11.s64 = 2;
	// ori r9,r10,23116
	ctx.r9.u64 = ctx.r10.u64 | 23116;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,19420(r31)
	REX_STORE_U32(r31.u32 + 19420, ctx.r11.u32);
	// stwx r10,r31,r9
	REX_STORE_U32(r31.u32 + ctx.r9.u32, ctx.r10.u32);
loc_821D31E8:
	// addi r3,r29,84
	ctx.r3.s64 = r29.s64 + 84;
	// bl 0x821d61f0
	ctx.lr = 0x821D31F0;
	sub_821D61F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,20
	ctx.r5.s64 = 20;
	// lfs f2,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2024(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2024);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212f220
	ctx.lr = 0x821D320C;
	sub_8212F220(ctx, base);
	// lwz r11,76(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d3228
	if (!ctx.cr6.eq) goto loc_821D3228;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82428fe8
	ctx.lr = 0x821D3228;
	sub_82428FE8(ctx, base);
loc_821D3228:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8229a710
	ctx.lr = 0x821D3230;
	sub_8229A710(ctx, base);
	// bl 0x820f2710
	ctx.lr = 0x821D3234;
	sub_820F2710(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821b42c0
	ctx.lr = 0x821D3240;
	sub_821B42C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218e510
	ctx.lr = 0x821D3248;
	sub_8218E510(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8218e510
	ctx.lr = 0x821D3250;
	sub_8218E510(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x8218e510
	ctx.lr = 0x821D325C;
	sub_8218E510(ctx, base);
	// lhz r11,30(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 30);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// beq cr6,0x821d3288
	if (ctx.cr6.eq) goto loc_821D3288;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-8304(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -8304);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821d3288
	if (!ctx.cr6.eq) goto loc_821D3288;
	// li r4,30
	ctx.r4.s64 = 30;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x821d45c8
	ctx.lr = 0x821D3284;
	sub_821D45C8(ctx, base);
	// b 0x821d3294
	goto loc_821D3294;
loc_821D3288:
	// li r4,30
	ctx.r4.s64 = 30;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x821d45b0
	ctx.lr = 0x821D3294;
	sub_821D45B0(ctx, base);
loc_821D3294:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821DCBB8) {
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
	// addi r11,r11,15116
	ctx.r11.s64 = ctx.r11.s64 + 15116;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821DCBE4;
	sub_821E2FD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821dcbf4
	if (ctx.cr0.eq) goto loc_821DCBF4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821DCBF4;
	sub_822C80A8(ctx, base);
loc_821DCBF4:
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

DEFINE_REX_FUNC(sub_821DD548) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r4,344(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// b 0x820e68b8
	sub_820E68B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821DDBA8) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,5448(r10)
	REX_STORE_U32(ctx.r10.u32 + 5448, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DDDA8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,30
	ctx.r5.s64 = 30;
	// lfs f2,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2024(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2024);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212f220
	ctx.lr = 0x821DDDD4;
	sub_8212F220(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r31,-32480(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dddf4
	if (ctx.cr6.eq) goto loc_821DDDF4;
	// bl 0x822c80a8
	ctx.lr = 0x821DDDEC;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
loc_821DDDF4:
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

DEFINE_REX_FUNC(sub_821E01A8) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x821e01c4
	if (!ctx.cr6.eq) goto loc_821E01C4;
	// srawi r7,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 8;
loc_821E01C4:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// blt 0x821e0268
	if (ctx.cr0.lt) goto loc_821E0268;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r9,17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 17, ctx.xer);
	// bge cr6,0x821e0268
	if (!ctx.cr6.lt) goto loc_821E0268;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821e0150
	ctx.lr = 0x821E01E8;
	sub_821E0150(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821e0268
	if (ctx.cr0.eq) goto loc_821E0268;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r8,r11,-5648
	ctx.r8.s64 = ctx.r11.s64 + -5648;
	// blt cr6,0x821e0220
	if (ctx.cr6.lt) goto loc_821E0220;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bge cr6,0x821e0220
	if (!ctx.cr6.lt) goto loc_821E0220;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r8,36
	ctx.r10.s64 = ctx.r8.s64 + 36;
	// lhax r11,r11,r10
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x821e0224
	if (ctx.cr6.gt) goto loc_821E0224;
loc_821E0220:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821E0224:
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// ble cr6,0x821e0234
	if (!ctx.cr6.gt) goto loc_821E0234;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821E0234:
	// subf r7,r11,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r11.u64;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// subfc r5,r7,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r5.u64 = ctx.r11.u64 - ctx.r7.u64;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lhax r8,r9,r8
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32));
	// mulli r9,r10,7
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(7));
	// subfe r10,r11,r6
	temp.u8 = (~ctx.r11.u32 + ctx.r6.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821e026c
	goto loc_821E026C;
loc_821E0268:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E026C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E2580) {
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
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821e2fb8
	ctx.lr = 0x821E259C;
	sub_821E2FB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,12176
	ctx.r11.s64 = ctx.r11.s64 + 12176;
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

DEFINE_REX_FUNC(sub_821E2C18) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lbz r10,2971(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2971);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e2cc0
	if (!ctx.cr0.eq) goto loc_821E2CC0;
	// lbz r10,2973(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2973);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e2cc0
	if (!ctx.cr0.eq) goto loc_821E2CC0;
	// lhz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x821e2cc0
	if (!ctx.cr6.eq) goto loc_821E2CC0;
	// lha r10,30(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 30));
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x821e2c58
	if (ctx.cr6.lt) goto loc_821E2C58;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// ble cr6,0x821e2cc0
	if (!ctx.cr6.gt) goto loc_821E2CC0;
loc_821E2C58:
	// lbz r10,6(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 6);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e2cc0
	if (!ctx.cr0.eq) goto loc_821E2CC0;
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r11,26(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 26);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821e2cc0
	if (!ctx.cr6.eq) goto loc_821E2CC0;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// lhz r11,126(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 126);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821e2cc0
	if (!ctx.cr0.eq) goto loc_821E2CC0;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r10,50
	ctx.r10.s64 = 50;
	// addi r9,r11,5608
	ctx.r9.s64 = ctx.r11.s64 + 5608;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lwz r11,36(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// stw r11,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r11.u32);
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// adde r11,r8,r7
	temp.u8 = (ctx.r8.u32 + ctx.r7.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_821E2CC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E6008) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e624c
	if (ctx.cr6.eq) goto loc_821E624C;
	// lwz r3,84(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e624c
	if (ctx.cr6.eq) goto loc_821E624C;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e624c
	if (ctx.cr6.eq) goto loc_821E624C;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x821e623c
	if (ctx.cr6.lt) goto loc_821E623C;
	// beq cr6,0x821e623c
	if (ctx.cr6.eq) goto loc_821E623C;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x821e614c
	if (ctx.cr6.lt) goto loc_821E614C;
	// bne cr6,0x821e624c
	if (!ctx.cr6.eq) goto loc_821E624C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,16300
	ctx.r6.s64 = ctx.r11.s64 + 16300;
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
	// bl 0x821366d8
	ctx.lr = 0x821E6084;
	sub_821366D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e6238
	if (ctx.cr0.eq) goto loc_821E6238;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r5,92(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwz r4,192(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// bl 0x821e4de0
	ctx.lr = 0x821E609C;
	sub_821E4DE0(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,31920
	ctx.r11.s64 = ctx.r11.s64 + 31920;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,26932(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26932);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,-30972(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -30972);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,2008(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2008);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r11,192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// beq cr6,0x821e60ec
	if (ctx.cr6.eq) goto loc_821E60EC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
loc_821E60EC:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f2,200(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,196(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,212(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 212);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f12,16700(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16700);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,16060(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16060);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,116(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f0,f12,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f13.f64)));
	// stfs f11,112(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f10,116(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stfs f11,212(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// stfs f10,208(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// bl 0x821e3858
	ctx.lr = 0x821E6134;
	sub_821E3858(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lfs f2,200(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x821e3858
	ctx.lr = 0x821E6144;
	sub_821E3858(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821e6234
	goto loc_821E6234;
loc_821E614C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,16300
	ctx.r6.s64 = ctx.r11.s64 + 16300;
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
	// bl 0x821366d8
	ctx.lr = 0x821E6170;
	sub_821366D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e6238
	if (ctx.cr0.eq) goto loc_821E6238;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r5,92(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwz r4,192(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// bl 0x821e4de0
	ctx.lr = 0x821E6188;
	sub_821E4DE0(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,31920
	ctx.r11.s64 = ctx.r11.s64 + 31920;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,26932(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26932);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,-30972(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -30972);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,2008(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2008);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r11,192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// beq cr6,0x821e61d8
	if (ctx.cr6.eq) goto loc_821E61D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
loc_821E61D8:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f2,200(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,196(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,212(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 212);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f12,16700(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16700);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,16060(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16060);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,116(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f0,f12,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f13.f64)));
	// stfs f11,112(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f10,116(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stfs f11,212(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// stfs f10,208(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// bl 0x821e3858
	ctx.lr = 0x821E6220;
	sub_821E3858(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lfs f2,200(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x821e3858
	ctx.lr = 0x821E6230;
	sub_821E3858(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
loc_821E6234:
	// stw r11,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
loc_821E6238:
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
loc_821E623C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// lfs f1,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821e3858
	ctx.lr = 0x821E624C;
	sub_821E3858(ctx, base);
loc_821E624C:
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

DEFINE_REX_FUNC(sub_821F1660) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r11,8192
	ctx.r11.s64 = 8192;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821F1670:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821f1670
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F1670;
	// li r10,128
	ctx.r10.s64 = 128;
	// addis r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 65536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-32768
	ctx.r9.s64 = ctx.r9.s64 + -32768;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821F168C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x821f168c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F168C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,32904
	ctx.r11.u64 = ctx.r11.u64 | 32904;
	// ori r10,r10,32916
	ctx.r10.u64 = ctx.r10.u64 | 32916;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// ori r9,r9,32960
	ctx.r9.u64 = ctx.r9.u64 | 32960;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r8,r8,32928
	ctx.r8.u64 = ctx.r8.u64 | 32928;
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r7,r7,32964
	ctx.r7.u64 = ctx.r7.u64 | 32964;
	// stwx r11,r3,r10
	REX_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r11,r6,32932
	ctx.r11.u64 = ctx.r6.u64 | 32932;
	// ori r10,r5,32968
	ctx.r10.u64 = ctx.r5.u64 | 32968;
	// stwx r4,r3,r9
	REX_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r4.u32);
	// lwzx r9,r3,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// stwx r9,r3,r7
	REX_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r9.u32);
	// lfsx f0,r3,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r3,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + ctx.r10.u32, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F2D70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister f31{};
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
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r31,r11,31656
	r31.s64 = ctx.r11.s64 + 31656;
	// lbz r11,31648(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 31648);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821f2da4
	if (!ctx.cr0.eq) goto loc_821F2DA4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82208828
	ctx.lr = 0x821F2DA4;
	sub_82208828(ctx, base);
loc_821F2DA4:
	// lfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,31632(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 31632);
	// fdiv f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 / ctx.f0.f64;
	// frsp f31,f0
	f31.f64 = double(float(ctx.f0.f64));
	// bl 0x822c8868
	ctx.lr = 0x821F2DC0;
	sub_822C8868(ctx, base);
	// fmul f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * f31.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
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

DEFINE_REX_FUNC(sub_821F6BF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,18504(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 18504);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x821f6c2c
	if (!ctx.cr6.gt) goto loc_821F6C2C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// b 0x821f6c34
	goto loc_821F6C34;
loc_821F6C2C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_821F6C34:
	// fmuls f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f13,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F8E38) {
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
	ctx.lr = 0x821F8E40;
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r29,r11,-32032
	r29.s64 = ctx.r11.s64 + -32032;
	// addi r31,r3,16
	r31.s64 = ctx.r3.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821f28a0
	ctx.lr = 0x821F8E68;
	sub_821F28A0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,7792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7792);
	// lwz r4,1684(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1684);
	// bl 0x821f2908
	ctx.lr = 0x821F8E7C;
	sub_821F2908(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r27,0
	r27.s64 = 0;
	// mr r26,r28
	r26.u64 = r28.u64;
	// lfs f30,-13044(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -13044);
	f30.f64 = double(temp.f32);
	// addi r25,r11,3380
	r25.s64 = ctx.r11.s64 + 3380;
	// lfs f31,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
loc_821F8E9C:
	// lwz r30,0(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x821f8fc0
	if (!ctx.cr6.gt) goto loc_821F8FC0;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821f2bf0
	ctx.lr = 0x821F8EB8;
	sub_821F2BF0(ctx, base);
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
loc_821F8EBC:
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r7,r31,36
	ctx.r7.s64 = r31.s64 + 36;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,52
	ctx.r10.s64 = ctx.r11.s64 + 52;
	// stw r6,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// stw r6,-80(r11)
	REX_STORE_U32(ctx.r11.u32 + -80, ctx.r6.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r8,-40(r11)
	REX_STORE_U32(ctx.r11.u32 + -40, ctx.r8.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r8,-36(r11)
	REX_STORE_U32(ctx.r11.u32 + -36, ctx.r8.u32);
	// stw r8,-76(r11)
	REX_STORE_U32(ctx.r11.u32 + -76, ctx.r8.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r8,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stfs f31,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f31,12(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// stfs f31,-28(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + -28, temp.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stfs f31,-68(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + -68, temp.u32);
	// stw r8,-32(r11)
	REX_STORE_U32(ctx.r11.u32 + -32, ctx.r8.u32);
	// stw r8,-72(r11)
	REX_STORE_U32(ctx.r11.u32 + -72, ctx.r8.u32);
loc_821F8F28:
	// lbzx r8,r9,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// stfs f0,-116(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + -116, temp.u32);
	// stfs f0,-76(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + -76, temp.u32);
	// stfs f0,-36(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + -36, temp.u32);
	// stfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821f8f28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F8F28;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r10,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// stw r10,-48(r11)
	REX_STORE_U32(ctx.r11.u32 + -48, ctx.r10.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r10,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r10,-44(r11)
	REX_STORE_U32(ctx.r11.u32 + -44, ctx.r10.u32);
	// stw r10,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// stw r10,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// bgt cr6,0x821f8ebc
	if (ctx.cr6.gt) goto loc_821F8EBC;
	// lwz r11,88(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 88);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r5,8(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x821f2c50
	ctx.lr = 0x821F8FC0;
	sub_821F2C50(ctx, base);
loc_821F8FC0:
	// addi r27,r27,144
	r27.s64 = r27.s64 + 144;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpwi cr6,r27,288
	ctx.cr6.compare<int32_t>(r27.s32, 288, ctx.xer);
	// blt cr6,0x821f8e9c
	if (ctx.cr6.lt) goto loc_821F8E9C;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82200760) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200800) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,372(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 372, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200860) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200950) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,364(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 364, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822009A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,324(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 324, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200A40) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822021A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bge cr6,0x822021b8
	if (!ctx.cr6.lt) goto loc_822021B8;
	// addi r11,r4,61
	ctx.r11.s64 = ctx.r4.s64 + 61;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x822021bc
	goto loc_822021BC;
loc_822021B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822021BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822021d0
	if (!ctx.cr6.eq) goto loc_822021D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_822021D0:
	// lfs f1,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82203148) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_8220315C:
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stwu r9,32(r11)
	ea = 32 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8220315c
	if (ctx.cr6.lt) goto loc_8220315C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82203A08) {
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
	// lwz r30,-32480(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// addi r31,r30,80
	r31.s64 = r30.s64 + 80;
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,600
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 600, ctx.xer);
	// stw r10,68(r30)
	REX_STORE_U32(r30.u32 + 68, ctx.r10.u32);
	// bgt cr6,0x82203a9c
	if (ctx.cr6.gt) goto loc_82203A9C;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82203a9c
	if (ctx.cr6.eq) goto loc_82203A9C;
	// lwz r8,36(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82203a5c
	if (!ctx.cr6.eq) goto loc_82203A5C;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r8,r11,3472
	ctx.r8.s64 = ctx.r11.s64 + 3472;
loc_82203A5C:
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x82203658
	ctx.lr = 0x82203A74;
	sub_82203658(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82203a9c
	if (ctx.cr6.eq) goto loc_82203A9C;
	// lwz r11,10124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82203a9c
	if (ctx.cr6.eq) goto loc_82203A9C;
	// lfs f1,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,76(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// bl 0x82129db8
	ctx.lr = 0x82203A9C;
	sub_82129DB8(ctx, base);
loc_82203A9C:
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,40(r30)
	REX_STORE_U16(r30.u32 + 40, ctx.r11.u16);
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

DEFINE_REX_FUNC(sub_822067C0) {
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
	// stw r4,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,21756
	ctx.r11.s64 = ctx.r11.s64 + 21756;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x822067f0
	if (ctx.cr6.eq) goto loc_822067F0;
	// stw r3,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
loc_822067F0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822065c8
	ctx.lr = 0x82206804;
	sub_822065C8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822084B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,9
	ctx.r7.s64 = 9;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r6,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stfsx f1,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
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

DEFINE_REX_FUNC(sub_82209090) {
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
	ctx.lr = 0x82209098;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// neg r11,r3
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// clrlwi r30,r11,25
	r30.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r5,256
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// bge cr6,0x822090c8
	if (!ctx.cr6.lt) goto loc_822090C8;
	// bl 0x822d4fa0
	ctx.lr = 0x822090C0;
	sub_822D4FA0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_822090C8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822090ec
	if (ctx.cr6.eq) goto loc_822090EC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x822090E0;
	sub_822D4FA0(ctx, base);
	// add r28,r30,r27
	r28.u64 = r30.u64 + r27.u64;
	// add r29,r30,r29
	r29.u64 = r30.u64 + r29.u64;
	// subf r31,r30,r31
	r31.u64 = r31.u64 - r30.u64;
loc_822090EC:
	// rlwinm r30,r31,0,0,24
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFF80;
	// clrlwi r11,r29,28
	ctx.r11.u64 = r29.u32 & 0xF;
	// clrlwi r31,r31,25
	r31.u64 = r31.u32 & 0x7F;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// beq cr6,0x82209114
	if (ctx.cr6.eq) goto loc_82209114;
	// bl 0x8220b590
	ctx.lr = 0x82209110;
	sub_8220B590(ctx, base);
	// b 0x82209118
	goto loc_82209118;
loc_82209114:
	// bl 0x8220b200
	ctx.lr = 0x82209118;
	sub_8220B200(ctx, base);
loc_82209118:
	// add r3,r30,r28
	ctx.r3.u64 = r30.u64 + r28.u64;
	// add r4,r30,r29
	ctx.r4.u64 = r30.u64 + r29.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82209130
	if (ctx.cr6.eq) goto loc_82209130;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82209130;
	sub_822D4FA0(ctx, base);
loc_82209130:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8220C020) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,1568(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1568);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220C260) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r30,16
	r30.s64 = 1048576;
	// lwz r11,1552(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1552);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220c2b8
	if (ctx.cr6.eq) goto loc_8220C2B8;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,88(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// ori r4,r4,1025
	ctx.r4.u64 = ctx.r4.u64 | 1025;
	// bl 0x824d439c
	ctx.lr = 0x8220C29C;
	__imp__RtlImageXexHeaderField(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220c2b8
	if (ctx.cr0.eq) goto loc_8220C2B8;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8220c2b8
	if (!ctx.cr6.eq) goto loc_8220C2B8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220c31c
	goto loc_8220C31C;
loc_8220C2B8:
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8220C2C8:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8220c2c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8220C2C8;
	// lis r31,-32161
	r31.s64 = -2107703296;
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,-12944(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -12944);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220c308
	if (!ctx.cr6.eq) goto loc_8220C308;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8220de28
	ctx.lr = 0x8220C304;
	sub_8220DE28(ctx, base);
	// stw r3,-12944(r31)
	REX_STORE_U32(r31.u32 + -12944, ctx.r3.u32);
loc_8220C308:
	// bl 0x8220c588
	ctx.lr = 0x8220C30C;
	sub_8220C588(ctx, base);
	// lwz r11,-12944(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -12944);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8220C31C:
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

DEFINE_REX_FUNC(sub_82210838) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10680(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10680);
	// rlwinm r3,r11,22,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822108E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12832(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12832);
	// lwz r10,10548(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// stw r4,12308(r3)
	REX_STORE_U32(ctx.r3.u32 + 12308, ctx.r4.u32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// rlwimi r10,r11,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r10,10548(r3)
	REX_STORE_U32(ctx.r3.u32 + 10548, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_82210D70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,10832(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10832);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16288(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16288);
	ctx.f0.f64 = double(temp.f32);
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

DEFINE_REX_FUNC(sub_822112D0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwimi r11,r4,28,0,3
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
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

DEFINE_REX_FUNC(sub_822116A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10624(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 10624, temp.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// rldicr r12,r12,47,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 47) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211F80) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,1172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1172);
	// lfs f0,16372(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16372);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r11,23,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFF800000;
	// srawi r11,r11,28
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 28;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82213768) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82213770;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,21940(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 21940);
	// stw r4,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// stw r5,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822137b4
	if (ctx.cr6.eq) goto loc_822137B4;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,-11452(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11452);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822137b4
	if (!ctx.cr6.eq) goto loc_822137B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822137B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822137B4:
	// lwz r11,23768(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 23768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822137d8
	if (ctx.cr6.eq) goto loc_822137D8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// li r3,1
	ctx.r3.s64 = 1;
	// bctrl 
	ctx.lr = 0x822137D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822137D8:
	// lwz r30,11088(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 11088);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,15304(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 15304);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,164(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r28,15300(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 15300);
	// bl 0x822136b8
	ctx.lr = 0x822137F4;
	sub_822136B8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82213834
	if (ctx.cr6.eq) goto loc_82213834;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82213808:
	// lwz r9,156(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r30,1
	ctx.r7.s64 = r30.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// and r30,r7,r29
	r30.u64 = ctx.r7.u64 & r29.u64;
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stwx r9,r8,r28
	REX_STORE_U32(ctx.r8.u32 + r28.u32, ctx.r9.u32);
	// lwz r9,164(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82213808
	if (ctx.cr6.lt) goto loc_82213808;
loc_82213834:
	// lwz r3,21940(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 21940);
	// stw r30,11088(r31)
	REX_STORE_U32(r31.u32 + 11088, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213854
	if (ctx.cr6.eq) goto loc_82213854;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82213854;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82213854:
	// lwz r11,23768(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 23768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213878
	if (ctx.cr6.eq) goto loc_82213878;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bctrl 
	ctx.lr = 0x82213878;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82213878:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822179E0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82217A68) {
	REX_FUNC_PROLOGUE();
	// lwz r11,13948(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 13948);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,13952(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 13952);
	// stw r11,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// lwz r11,21964(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21964);
	// stw r11,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r11,13956(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 13956);
	// stw r11,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822184A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822184B0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,21968
	r30.s64 = ctx.r3.s64 + 21968;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82218530
	if (ctx.cr6.eq) goto loc_82218530;
	// b 0x82218524
	goto loc_82218524;
loc_822184C8:
	// lwz r31,12(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bne cr6,0x82218520
	if (!ctx.cr6.eq) goto loc_82218520;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
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
	// addis r3,r11,-16384
	ctx.r3.s64 = ctx.r11.s64 + -1073741824;
	// addi r4,r3,4096
	ctx.r4.s64 = ctx.r3.s64 + 4096;
	// bl 0x8221c548
	ctx.lr = 0x822184FC;
	sub_8221C548(ctx, base);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x823cd250
	ctx.lr = 0x82218508;
	sub_823CD250(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// bl 0x823cd250
	ctx.lr = 0x8221851C;
	sub_823CD250(ctx, base);
	// b 0x82218524
	goto loc_82218524;
loc_82218520:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82218524:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822184c8
	if (!ctx.cr6.eq) goto loc_822184C8;
loc_82218530:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8221BAA0) {
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
	ctx.lr = 0x8221BAA8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xFFF;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// lwz r9,24392(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24392);
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// clrlwi r10,r5,3
	ctx.r10.u64 = ctx.r5.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r25,r11,r10
	r25.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne 0x8221baf4
	if (!ctx.cr0.eq) goto loc_8221BAF4;
	// lwz r11,24584(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8221bb00
	if (!ctx.cr6.gt) goto loc_8221BB00;
loc_8221BAF4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221b808
	ctx.lr = 0x8221BB00;
	sub_8221B808(ctx, base);
loc_8221BB00:
	// rlwinm. r27,r26,0,29,29
	r27.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x8221bbcc
	if (ctx.cr0.eq) goto loc_8221BBCC;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8221bb20
	if (!ctx.cr6.gt) goto loc_8221BB20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x8221BB20;
	sub_82215008(ctx, base);
loc_8221BB20:
	// li r11,6515
	ctx.r11.s64 = 6515;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,6500
	ctx.r11.s64 = 6500;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,6515
	ctx.r8.s64 = 6515;
	// li r22,0
	r22.s64 = 0;
	// lis r7,-16380
	ctx.r7.s64 = -1073479680;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// li r21,3
	r21.s64 = 3;
	// ori r10,r7,15360
	ctx.r10.u64 = ctx.r7.u64 | 15360;
	// li r20,6515
	r20.s64 = 6515;
	// li r19,0
	r19.s64 = 0;
	// li r18,1
	r18.s64 = 1;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// li r17,256
	r17.s64 = 256;
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// li r16,6226
	r16.s64 = 6226;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r15,6200
	r15.s64 = 6200;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwu r9,4(r14)
	ea = 4 + r14.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	r14.u32 = ea;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwu r8,4(r14)
	ea = 4 + r14.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	r14.u32 = ea;
	// stwu r22,4(r14)
	ea = 4 + r14.u32;
	REX_STORE_U32(ea, r22.u32);
	r14.u32 = ea;
	// stwu r10,4(r14)
	ea = 4 + r14.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	r14.u32 = ea;
	// stwu r21,4(r14)
	ea = 4 + r14.u32;
	REX_STORE_U32(ea, r21.u32);
	r14.u32 = ea;
	// stwu r20,4(r14)
	ea = 4 + r14.u32;
	REX_STORE_U32(ea, r20.u32);
	r14.u32 = ea;
	// stwu r19,4(r14)
	ea = 4 + r14.u32;
	REX_STORE_U32(ea, r19.u32);
	r14.u32 = ea;
	// stwu r18,4(r14)
	ea = 4 + r14.u32;
	REX_STORE_U32(ea, r18.u32);
	r14.u32 = ea;
	// stwu r17,4(r14)
	ea = 4 + r14.u32;
	REX_STORE_U32(ea, r17.u32);
	r14.u32 = ea;
	// stwu r16,4(r14)
	ea = 4 + r14.u32;
	REX_STORE_U32(ea, r16.u32);
	r14.u32 = ea;
	// stwu r11,4(r14)
	ea = 4 + r14.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r14.u32 = ea;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stwu r15,4(r14)
	ea = 4 + r14.u32;
	REX_STORE_U32(ea, r15.u32);
	r14.u32 = ea;
	// stwu r11,4(r14)
	ea = 4 + r14.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r14.u32 = ea;
	// stw r14,48(r31)
	REX_STORE_U32(r31.u32 + 48, r14.u32);
	// bl 0x8222d758
	ctx.lr = 0x8221BBCC;
	sub_8222D758(ctx, base);
loc_8221BBCC:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221b0d8
	ctx.lr = 0x8221BBD8;
	sub_8221B0D8(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8221bbf0
	if (!ctx.cr6.gt) goto loc_8221BBF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x8221BBF0;
	sub_82215008(ctx, base);
loc_8221BBF0:
	// li r11,6212
	ctx.r11.s64 = 6212;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// beq cr6,0x8221bc5c
	if (ctx.cr6.eq) goto loc_8221BC5C;
	// li r10,6200
	ctx.r10.s64 = 6200;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lis r8,-16380
	ctx.r8.s64 = -1073479680;
	// li r7,3
	ctx.r7.s64 = 3;
	// ori r10,r8,15360
	ctx.r10.u64 = ctx.r8.u64 | 15360;
	// li r8,6515
	ctx.r8.s64 = 6515;
	// li r6,0
	ctx.r6.s64 = 0;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,256
	ctx.r4.s64 = 256;
	// li r3,6226
	ctx.r3.s64 = 6226;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
loc_8221BC5C:
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x8221bc90
	if (!ctx.cr6.eq) goto loc_8221BC90;
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r11,r11,310
	ctx.r11.u64 = ctx.r11.u64 | 310;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8221bc88
	if (!ctx.cr6.eq) goto loc_8221BC88;
	// bl 0x82217808
	ctx.lr = 0x8221BC84;
	sub_82217808(ctx, base);
	// b 0x8221bcac
	goto loc_8221BCAC;
loc_8221BC88:
	// bl 0x82217718
	ctx.lr = 0x8221BC8C;
	sub_82217718(ctx, base);
	// b 0x8221bcac
	goto loc_8221BCAC;
loc_8221BC90:
	// rlwinm. r11,r26,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221bcac
	if (ctx.cr0.eq) goto loc_8221BCAC;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221ad80
	ctx.lr = 0x8221BCAC;
	sub_8221AD80(ctx, base);
loc_8221BCAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x8221BCB4;
	sub_82215008(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82223ED0) {
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
	ctx.lr = 0x82223ED8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r26,0
	r26.s64 = 0;
	// beq 0x82223f30
	if (ctx.cr0.eq) goto loc_82223F30;
	// rlwinm. r9,r4,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82223f30
	if (!ctx.cr0.eq) goto loc_82223F30;
	// rlwinm. r9,r4,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82223f30
	if (ctx.cr0.eq) goto loc_82223F30;
	// lwz r26,-1(r4)
	r26.u64 = REX_LOAD_U32(ctx.r4.u32 + -1);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x82223f20
	if (!ctx.cr6.eq) goto loc_82223F20;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,30808
	ctx.r4.s64 = ctx.r11.s64 + 30808;
	// bl 0x82223b20
	ctx.lr = 0x82223F1C;
	sub_82223B20(ctx, base);
	// b 0x82223fdc
	goto loc_82223FDC;
loc_82223F20:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r11,30664
	ctx.r4.s64 = ctx.r11.s64 + 30664;
	// b 0x82223fd8
	goto loc_82223FD8;
loc_82223F30:
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82223fc4
	if (ctx.cr0.eq) goto loc_82223FC4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82223fc4
	if (!ctx.cr6.eq) goto loc_82223FC4;
	// rlwinm. r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82223fc4
	if (ctx.cr0.eq) goto loc_82223FC4;
	// addi r31,r11,-2
	r31.s64 = ctx.r11.s64 + -2;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,30520
	ctx.r4.s64 = ctx.r11.s64 + 30520;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82223b20
	ctx.lr = 0x82223F60;
	sub_82223B20(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,124(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r4,r11,30440
	ctx.r4.s64 = ctx.r11.s64 + 30440;
	// bl 0x82223b20
	ctx.lr = 0x82223F74;
	sub_82223B20(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82223fdc
	if (!ctx.cr6.gt) goto loc_82223FDC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r29,0
	r29.s64 = 0;
	// addi r27,r11,30372
	r27.s64 = ctx.r11.s64 + 30372;
loc_82223F90:
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82223b20
	ctx.lr = 0x82223FAC;
	sub_82223B20(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82223f90
	if (ctx.cr6.lt) goto loc_82223F90;
	// b 0x82223fdc
	goto loc_82223FDC;
loc_82223FC4:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r4,r10,30232
	ctx.r4.s64 = ctx.r10.s64 + 30232;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
loc_82223FD8:
	// bl 0x82223b20
	ctx.lr = 0x82223FDC;
	sub_82223B20(ctx, base);
loc_82223FDC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x822240a8
	if (!ctx.cr6.eq) goto loc_822240A8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x822240a8
	if (ctx.cr6.eq) goto loc_822240A8;
	// lwz r11,152(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82224010
	if (!ctx.cr6.eq) goto loc_82224010;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r6,164(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 164);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,172(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 172);
	// addi r4,r11,30104
	ctx.r4.s64 = ctx.r11.s64 + 30104;
	// bl 0x82223b20
	ctx.lr = 0x82224010;
	sub_82223B20(ctx, base);
loc_82224010:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,29968
	ctx.r4.s64 = ctx.r11.s64 + 29968;
	// bl 0x82223b20
	ctx.lr = 0x82224020;
	sub_82223B20(ctx, base);
	// lwz r29,116(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 116);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8222407c
	if (ctx.cr6.eq) goto loc_8222407C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r27,r11,29944
	r27.s64 = ctx.r11.s64 + 29944;
loc_82224034:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82224070
	if (!ctx.cr6.gt) goto loc_82224070;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_82224048:
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzu r11,8(r31)
	ea = 8 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// clrlwi r6,r11,8
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFFFF;
	// bl 0x82223b20
	ctx.lr = 0x82224060;
	sub_82223B20(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82224048
	if (ctx.cr6.lt) goto loc_82224048;
loc_82224070:
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82224034
	if (!ctx.cr6.eq) goto loc_82224034;
loc_8222407C:
	// lwz r11,152(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822240a8
	if (!ctx.cr6.eq) goto loc_822240A8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,29800
	ctx.r4.s64 = ctx.r11.s64 + 29800;
	// bl 0x82223b20
	ctx.lr = 0x82224098;
	sub_82223B20(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,29656
	ctx.r4.s64 = ctx.r11.s64 + 29656;
	// bl 0x82223b20
	ctx.lr = 0x822240A8;
	sub_82223B20(ctx, base);
loc_822240A8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8222CEE8) {
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
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8222cf24
	if (!ctx.cr6.eq) goto loc_8222CF24;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// std r11,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// stw r11,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
loc_8222CF24:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,2024(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2024);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x8222cf3c
	if (!ctx.cr6.lt) goto loc_8222CF3C;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
loc_8222CF3C:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f11,1992(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8222cf50
	if (!ctx.cr6.gt) goto loc_8222CF50;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_8222CF50:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f12,16676(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16676);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,16628(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16628);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f13,f0,f12,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f13.f64)));
	// fmadds f10,f13,f0,f11
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f11.f64)));
	// beq cr6,0x8222d00c
	if (ctx.cr6.eq) goto loc_8222D00C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8222d00c
	if (ctx.cr6.eq) goto loc_8222D00C;
	// lfs f0,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x8222cf88
	if (!ctx.cr6.lt) goto loc_8222CF88;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
loc_8222CF88:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8222cf94
	if (!ctx.cr6.gt) goto loc_8222CF94;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_8222CF94:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f13,-30444(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -30444);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f8,f0,f12,f13
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f13.f64)));
	// lfs f13,17064(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 17064);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,-25488(r7)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r7.u32 + -25488);
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// fnmsubs f13,f8,f0,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f8.f64, ctx.f0.f64, -ctx.f13.f64)));
	// ble cr6,0x8222cfcc
	if (!ctx.cr6.gt) goto loc_8222CFCC;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfd f0,-25496(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + -25496);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8222cfd0
	if (ctx.cr6.lt) goto loc_8222CFD0;
loc_8222CFCC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8222CFD0:
	// fcmpu cr6,f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x8222cfdc
	if (!ctx.cr6.lt) goto loc_8222CFDC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8222CFDC:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x8222cfe8
	if (!ctx.cr6.lt) goto loc_8222CFE8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8222CFE8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x8222d000
	if (ctx.cr6.lt) goto loc_8222D000;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_8222D000:
	// fmuls f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// b 0x8222d050
	goto loc_8222D050;
loc_8222D00C:
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfd f0,-25504(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + -25504);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8222d02c
	if (!ctx.cr6.gt) goto loc_8222D02C;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfd f0,-25512(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + -25512);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8222d030
	if (ctx.cr6.lt) goto loc_8222D030;
loc_8222D02C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8222D030:
	// fcmpu cr6,f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x8222d03c
	if (!ctx.cr6.lt) goto loc_8222D03C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8222D03C:
	// fdivs f0,f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f1.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x8222d04c
	if (ctx.cr6.lt) goto loc_8222D04C;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_8222D04C:
	// fmuls f13,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
loc_8222D050:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,16288(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16288);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,31
	ctx.r11.s64 = 2031616;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,-25520(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -25520);
	ctx.f0.f64 = double(temp.f32);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// lfs f10,2000(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2000);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f10
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f10.f64)));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// stw r9,648(r31)
	REX_STORE_U32(r31.u32 + 648, ctx.r9.u32);
	// ble cr6,0x8222d098
	if (!ctx.cr6.gt) goto loc_8222D098;
	// stw r11,648(r31)
	REX_STORE_U32(r31.u32 + 648, ctx.r11.u32);
loc_8222D098:
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x8222d0e4
	if (!ctx.cr6.eq) goto loc_8222D0E4;
	// lfs f0,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x8222d0b8
	if (!ctx.cr6.lt) goto loc_8222D0B8;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
loc_8222D0B8:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8222d0c4
	if (!ctx.cr6.gt) goto loc_8222D0C4;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_8222D0C4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,16172(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2332(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2332);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f0,f13,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// lfs f13,16188(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16188);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8222d164
	goto loc_8222D164;
loc_8222D0E4:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x8222d124
	if (!ctx.cr6.eq) goto loc_8222D124;
	// lfs f0,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x8222d0fc
	if (!ctx.cr6.lt) goto loc_8222D0FC;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
loc_8222D0FC:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8222d108
	if (!ctx.cr6.gt) goto loc_8222D108;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_8222D108:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,16260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,17188(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 17188);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f0,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// fmadds f2,f13,f0,f10
	ctx.f2.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f10.f64)));
	// b 0x8222d174
	goto loc_8222D174;
loc_8222D124:
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// bne cr6,0x8222d16c
	if (!ctx.cr6.eq) goto loc_8222D16C;
	// lfs f0,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x8222d13c
	if (!ctx.cr6.lt) goto loc_8222D13C;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
loc_8222D13C:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8222d148
	if (!ctx.cr6.gt) goto loc_8222D148;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_8222D148:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,16204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16204);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16316(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16316);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f0,f13,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// lfs f13,16228(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16228);
	ctx.f13.f64 = double(temp.f32);
loc_8222D164:
	// fmadds f2,f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// b 0x8222d174
	goto loc_8222D174;
loc_8222D16C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
loc_8222D174:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r3,7
	ctx.r3.s64 = 7;
	// bne cr6,0x8222d184
	if (!ctx.cr6.eq) goto loc_8222D184;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
loc_8222D184:
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8222cab0
	ctx.lr = 0x8222D198;
	sub_8222CAB0(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8222c188
	ctx.lr = 0x8222D1AC;
	sub_8222C188(ctx, base);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
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

DEFINE_REX_FUNC(sub_82238AF0) {
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
	ctx.lr = 0x82238AF8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,244
	r26.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r28,0
	r28.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// bl 0x824d438c
	ctx.lr = 0x82238B14;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 272);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82238c28
	if (ctx.cr6.eq) goto loc_82238C28;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 284);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824d3eac
	ctx.lr = 0x82238B34;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82238b90
	if (ctx.cr0.eq) goto loc_82238B90;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82238b88
	if (ctx.cr6.eq) goto loc_82238B88;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x82238b88
	if (ctx.cr6.eq) goto loc_82238B88;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// ori r10,r10,31
	ctx.r10.u64 = ctx.r10.u64 | 31;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82238b84
	if (ctx.cr6.eq) goto loc_82238B84;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82238b90
	if (!ctx.cr6.gt) goto loc_82238B90;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82238b88
	if (!ctx.cr6.gt) goto loc_82238B88;
	// b 0x82238b90
	goto loc_82238B90;
loc_82238B84:
	// li r27,1
	r27.s64 = 1;
loc_82238B88:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r11.u32);
loc_82238B90:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82238358
	ctx.lr = 0x82238B98;
	sub_82238358(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// li r29,4
	r29.s64 = 4;
loc_82238BA4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x82238bcc
	if (ctx.cr6.eq) goto loc_82238BCC;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x82239970
	ctx.lr = 0x82238BB4;
	sub_82239970(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82238bcc
	if (ctx.cr0.eq) goto loc_82238BCC;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,212(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r10,212(r11)
	REX_STORE_U32(ctx.r11.u32 + 212, ctx.r10.u32);
loc_82238BCC:
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// bl 0x8223a408
	ctx.lr = 0x82238BD4;
	sub_8223A408(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82238ba4
	if (!ctx.cr0.eq) goto loc_82238BA4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82238c20
	if (!ctx.cr6.gt) goto loc_82238C20;
	// addi r30,r31,100
	r30.s64 = r31.s64 + 100;
loc_82238BF0:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82238c0c
	if (ctx.cr6.eq) goto loc_82238C0C;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82238c0c
	if (ctx.cr6.eq) goto loc_82238C0C;
	// bl 0x8223dbd0
	ctx.lr = 0x82238C0C;
	sub_8223DBD0(ctx, base);
loc_82238C0C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82238bf0
	if (ctx.cr6.lt) goto loc_82238BF0;
loc_82238C20:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r11.u32);
loc_82238C28:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824d437c
	ctx.lr = 0x82238C30;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cntlzw r11,r28
	ctx.r11.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8223DE30) {
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
	ctx.lr = 0x8223DE38;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// li r27,0
	r27.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r26,1
	r26.s64 = 1;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// stw r26,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// bl 0x823cd980
	ctx.lr = 0x8223DE70;
	sub_823CD980(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r30,r27
	r30.u64 = r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223dea8
	if (!ctx.cr6.gt) goto loc_8223DEA8;
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
loc_8223DE84:
	// lwzu r3,4(r29)
	ea = 4 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223DE98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223de84
	if (ctx.cr6.lt) goto loc_8223DE84;
loc_8223DEA8:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223df2c
	if (ctx.cr6.eq) goto loc_8223DF2C;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223df28
	if (ctx.cr6.eq) goto loc_8223DF28;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lfs f1,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223DEDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x8223df28
	if (ctx.cr0.lt) goto loc_8223DF28;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223DEFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x8223df28
	if (ctx.cr0.lt) goto loc_8223DF28;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223DF24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8223DF28:
	// stw r27,76(r31)
	REX_STORE_U32(r31.u32 + 76, r27.u32);
loc_8223DF2C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r26,280(r11)
	REX_STORE_U32(ctx.r11.u32 + 280, r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82245AE8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82245b24
	if (ctx.cr6.eq) goto loc_82245B24;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82245b24
	if (!ctx.cr6.eq) goto loc_82245B24;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82245b24
	if (ctx.cr6.gt) goto loc_82245B24;
	// lwz r10,132(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 132);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r10,0,30,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,132(r4)
	REX_STORE_U32(ctx.r4.u32 + 132, ctx.r11.u32);
	// blr 
	return;
loc_82245B24:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82246220) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82246234
	if (!ctx.cr6.eq) goto loc_82246234;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82246234:
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822462a0
	if (ctx.cr6.eq) goto loc_822462A0;
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
	// bge cr6,0x822462a0
	if (!ctx.cr6.lt) goto loc_822462A0;
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
	// bne cr6,0x822462a0
	if (!ctx.cr6.eq) goto loc_822462A0;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r9,r3,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822462a0
	if (!ctx.cr6.eq) goto loc_822462A0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822462ac
	if (!ctx.cr6.eq) goto loc_822462AC;
loc_822462A0:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// blr 
	return;
loc_822462AC:
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822462a0
	if (ctx.cr6.eq) goto loc_822462A0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82247398) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822473ec
	if (ctx.cr6.eq) goto loc_822473EC;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822473ec
	if (!ctx.cr6.eq) goto loc_822473EC;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// beq cr6,0x822473c4
	if (ctx.cr6.eq) goto loc_822473C4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x822473c8
	goto loc_822473C8;
loc_822473C4:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_822473C8:
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822473e4
	if (ctx.cr6.eq) goto loc_822473E4;
	// lwz r10,132(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,132(r11)
	REX_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
loc_822473E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822473EC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82248210) {
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
	ctx.lr = 0x82248228;
	sub_82246220(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82248250
	if (ctx.cr6.eq) goto loc_82248250;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82248250
	if (!ctx.cr6.eq) goto loc_82248250;
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x82248258
	goto loc_82248258;
loc_82248250:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82248258:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82248DA8) {
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
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8228fae0
	ctx.lr = 0x82248DCC;
	sub_8228FAE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r11,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r11.u32);
	// stw r11,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r11.u32);
	// beq cr6,0x82248dec
	if (ctx.cr6.eq) goto loc_82248DEC;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_82248DEC:
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

DEFINE_REX_FUNC(sub_8224A898) {
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
	// beq cr6,0x8224a8cc
	if (ctx.cr6.eq) goto loc_8224A8CC;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82255b70
	ctx.lr = 0x8224A8BC;
	sub_82255B70(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82255b70
	ctx.lr = 0x8224A8C4;
	sub_82255B70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8224A8CC;
	sub_82255B70(ctx, base);
loc_8224A8CC:
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

DEFINE_REX_FUNC(sub_8224B7A0) {
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
	// addi r31,r11,25484
	r31.s64 = ctx.r11.s64 + 25484;
	// lwz r11,25504(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 25504);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8224b7e4
	if (!ctx.cr0.eq) goto loc_8224B7E4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,25504(r10)
	REX_STORE_U32(ctx.r10.u32 + 25504, ctx.r11.u32);
	// bl 0x8227acf8
	ctx.lr = 0x8224B7D8;
	sub_8227ACF8(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15112
	ctx.r3.s64 = ctx.r11.s64 + 15112;
	// bl 0x822d5848
	ctx.lr = 0x8224B7E4;
	sub_822D5848(ctx, base);
loc_8224B7E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_8224D060) {
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
	// addi r31,r11,26492
	r31.s64 = ctx.r11.s64 + 26492;
	// lwz r11,26512(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 26512);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8224d0ac
	if (!ctx.cr0.eq) goto loc_8224D0AC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,26512(r10)
	REX_STORE_U32(ctx.r10.u32 + 26512, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8227ad28
	ctx.lr = 0x8224D0A0;
	sub_8227AD28(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15448
	ctx.r3.s64 = ctx.r11.s64 + 15448;
	// bl 0x822d5848
	ctx.lr = 0x8224D0AC;
	sub_822D5848(ctx, base);
loc_8224D0AC:
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

DEFINE_REX_FUNC(sub_8224E838) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82246fd8
	ctx.lr = 0x8224E858;
	sub_82246FD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x822469c0
	ctx.lr = 0x8224E864;
	sub_822469C0(ctx, base);
	// bl 0x8224db90
	ctx.lr = 0x8224E868;
	sub_8224DB90(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
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

DEFINE_REX_FUNC(sub_822512D8) {
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
	ctx.lr = 0x822512E0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82251540
	if (ctx.cr6.eq) goto loc_82251540;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82251540
	if (ctx.cr6.eq) goto loc_82251540;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82251540
	if (ctx.cr6.eq) goto loc_82251540;
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82251540
	if (ctx.cr0.eq) goto loc_82251540;
	// bl 0x8224d830
	ctx.lr = 0x82251318;
	sub_8224D830(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225132c
	if (ctx.cr0.eq) goto loc_8225132C;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// b 0x82251548
	goto loc_82251548;
loc_8225132C:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82251540
	if (ctx.cr6.eq) goto loc_82251540;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82251540
	if (ctx.cr6.eq) goto loc_82251540;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82251540
	if (ctx.cr6.eq) goto loc_82251540;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225138c
	if (ctx.cr6.eq) goto loc_8225138C;
	// bl 0x8224d830
	ctx.lr = 0x82251364;
	sub_8224D830(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x82251528
	if (ctx.cr0.eq) goto loc_82251528;
	// addi r11,r27,52
	ctx.r11.s64 = r27.s64 + 52;
loc_82251370:
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
	// bne 0x82251370
	if (!ctx.cr0.eq) goto loc_82251370;
loc_8225138C:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82255b48
	ctx.lr = 0x82251394;
	sub_82255B48(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822514c8
	if (ctx.cr0.eq) goto loc_822514C8;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x822513AC;
	sub_822D5870(ctx, base);
	// addi r28,r31,4
	r28.s64 = r31.s64 + 4;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82246a38
	ctx.lr = 0x822513BC;
	sub_82246A38(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x822514d0
	if (ctx.cr0.lt) goto loc_822514D0;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x82246a38
	ctx.lr = 0x822513D0;
	sub_82246A38(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x822514d0
	if (ctx.cr0.lt) goto loc_822514D0;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82246a38
	ctx.lr = 0x822513E4;
	sub_82246A38(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x822514d0
	if (ctx.cr0.lt) goto loc_822514D0;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// stw r27,40(r31)
	REX_STORE_U32(r31.u32 + 40, r27.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82251484
	if (ctx.cr6.eq) goto loc_82251484;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82251484
	if (ctx.cr6.eq) goto loc_82251484;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lwz r11,23708(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 23708);
	// lwz r7,48(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r6,32(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r6,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r6.u32);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// ble cr6,0x82251484
	if (!ctx.cr6.gt) goto loc_82251484;
	// addi r8,r8,-44
	ctx.r8.s64 = ctx.r8.s64 + -44;
loc_82251468:
	// stwu r11,48(r8)
	ea = 48 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,48(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82251468
	if (ctx.cr6.lt) goto loc_82251468;
	// stw r11,23708(r9)
	REX_STORE_U32(ctx.r9.u32 + 23708, ctx.r11.u32);
loc_82251484:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// addi r30,r10,23712
	r30.s64 = ctx.r10.s64 + 23712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// bl 0x824d438c
	ctx.lr = 0x8225149C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,24432
	ctx.r3.s64 = ctx.r11.s64 + 24432;
	// bl 0x8224de38
	ctx.lr = 0x822514B4;
	sub_8224DE38(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d437c
	ctx.lr = 0x822514C0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x82251534
	if (!ctx.cr6.eq) goto loc_82251534;
loc_822514C8:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
loc_822514D0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x822514f8
	if (ctx.cr6.eq) goto loc_822514F8;
	// addi r11,r27,52
	ctx.r11.s64 = r27.s64 + 52;
loc_822514DC:
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
	// bne 0x822514dc
	if (!ctx.cr0.eq) goto loc_822514DC;
loc_822514F8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82251520
	if (ctx.cr6.eq) goto loc_82251520;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82255b70
	ctx.lr = 0x82251508;
	sub_82255B70(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82255b70
	ctx.lr = 0x82251510;
	sub_82255B70(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x82255b70
	ctx.lr = 0x82251518;
	sub_82255B70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x82251520;
	sub_82255B70(ctx, base);
loc_82251520:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82251548
	goto loc_82251548;
loc_82251528:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// b 0x82251548
	goto loc_82251548;
loc_82251534:
	// stw r31,0(r26)
	REX_STORE_U32(r26.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82251548
	goto loc_82251548;
loc_82251540:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82251548:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8225B480) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8225B488;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8225b57c
	if (ctx.cr6.lt) goto loc_8225B57C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8225b57c
	if (!ctx.cr6.lt) goto loc_8225B57C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r29,r4,12
	r29.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(12));
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + ctx.r11.u64;
	// bl 0x8224e998
	ctx.lr = 0x8225B4BC;
	sub_8224E998(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8225b50c
	if (ctx.cr6.eq) goto loc_8225B50C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r10,r30,r10
	ctx.r10.u64 = ctx.r10.u64 - r30.u64;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + ctx.r11.u64;
	// mulli r11,r10,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
	// bl 0x822d6840
	ctx.lr = 0x8225B4E8;
	sub_822D6840(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// bl 0x822d6840
	ctx.lr = 0x8225B50C;
	sub_822D6840(ctx, base);
loc_8225B50C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mulli r4,r11,12
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// bl 0x82255b88
	ctx.lr = 0x8225B520;
	sub_82255B88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225b534
	if (!ctx.cr0.eq) goto loc_8225B534;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8225b538
	if (!ctx.cr6.eq) goto loc_8225B538;
loc_8225B534:
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_8225B538:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82255b88
	ctx.lr = 0x8225B54C;
	sub_82255B88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225b560
	if (!ctx.cr0.eq) goto loc_8225B560;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8225b564
	if (!ctx.cr6.eq) goto loc_8225B564;
loc_8225B560:
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
loc_8225B564:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// b 0x8225b580
	goto loc_8225B580;
loc_8225B57C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225B580:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8225E7C0) {
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
	// li r4,2023
	ctx.r4.s64 = 2023;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8225da70
	ctx.lr = 0x8225E7E8;
	sub_8225DA70(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x8225E7F4;
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

DEFINE_REX_FUNC(sub_8225F6D8) {
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
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e68
	ctx.lr = 0x8225F6E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,-144
	ctx.r10.s64 = ctx.r1.s64 + -144;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,-153
	ctx.r7.s64 = ctx.r1.s64 + -153;
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// lfs f0,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// vupkd3d128 v63,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v63 = vTemp;
	// stfs f0,-132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// addi r9,r1,-160
	ctx.r9.s64 = ctx.r1.s64 + -160;
	// stfs f0,-136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// addi r6,r1,-160
	ctx.r6.s64 = ctx.r1.s64 + -160;
	// stfs f0,-140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// addi r28,r1,-160
	r28.s64 = ctx.r1.s64 + -160;
	// stfs f0,-144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// vspltw128 v9,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// lvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,4
	ctx.r11.s64 = 4;
	// lfs f13,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// addi r27,r1,-160
	r27.s64 = ctx.r1.s64 + -160;
	// stfs f13,24(r5)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// addi r26,r1,-144
	r26.s64 = ctx.r1.s64 + -144;
	// lfs f13,28(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// vrefp v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v12.f32)));
	// stfs f13,28(r5)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// vnmsubfp v8,v12,v0,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v8.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// lfs f11,8(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// vor v13,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// lfs f12,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r4,8
	ctx.r8.s64 = ctx.r4.s64 + 8;
	// lfs f13,12(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// vmaddfp v0,v0,v8,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// fadds f11,f11,f10
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r9,r3,24
	ctx.r9.s64 = ctx.r3.s64 + 24;
	// stfs f13,-156(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// vspltw128 v6,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// stfs f11,-160(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// addi r31,r9,4
	r31.s64 = ctx.r9.s64 + 4;
	// lvx128 v61,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lvx128 v62,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v62,v61,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vnmsubfp v9,v12,v0,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// stfs f0,-144(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// vcmpeqfp v11,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stfs f0,-132(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// stfs f0,-136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// addi r7,r3,16
	ctx.r7.s64 = ctx.r3.s64 + 16;
	// stfs f0,-140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// addi r10,r1,-160
	ctx.r10.s64 = ctx.r1.s64 + -160;
	// addi r30,r8,4
	r30.s64 = ctx.r8.s64 + 4;
	// vspltw128 v5,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// addi r29,r7,4
	r29.s64 = ctx.r7.s64 + 4;
	// vmaddfp v0,v0,v9,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v12,v13,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v62,v62,v12
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vspltw128 v61,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vspltw128 v62,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// stvewx128 v61,r0,r28
	ea = (r28.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r27,r11
	ea = (r27.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,-156(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -156);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -160);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f12,12(r4)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f12,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lvx128 v10,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrefp v0,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v10.f32)));
	// fadds f13,f13,f12
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f12,12(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// vor v8,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// stfs f13,-144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// stfs f0,-148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -148, temp.u32);
	// stfs f0,-152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// stfs f0,-156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// vnmsubfp v3,v10,v0,v6
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v3.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v6.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// stfs f0,-160(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// addi r9,r1,-137
	ctx.r9.s64 = ctx.r1.s64 + -137;
	// fadds f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f13,-140(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// vor v11,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// addi r7,r1,-160
	ctx.r7.s64 = ctx.r1.s64 + -160;
	// vspltw128 v4,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// addi r28,r1,-160
	r28.s64 = ctx.r1.s64 + -160;
	// lvx128 v61,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r24,r1,-144
	r24.s64 = ctx.r1.s64 + -144;
	// lvx128 v62,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,-144
	ctx.r9.s64 = ctx.r1.s64 + -144;
	// addi r8,r1,-137
	ctx.r8.s64 = ctx.r1.s64 + -137;
	// addi r25,r1,-137
	r25.s64 = ctx.r1.s64 + -137;
	// addi r27,r1,-160
	r27.s64 = ctx.r1.s64 + -160;
	// addi r26,r1,-160
	r26.s64 = ctx.r1.s64 + -160;
	// vmaddfp v13,v0,v3,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// addi r23,r1,-144
	r23.s64 = ctx.r1.s64 + -144;
	// addi r22,r1,-160
	r22.s64 = ctx.r1.s64 + -160;
	// addi r21,r1,-144
	r21.s64 = ctx.r1.s64 + -144;
	// lvx128 v9,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,-144
	ctx.r10.s64 = ctx.r1.s64 + -144;
	// vnmsubfp v6,v8,v13,v6
	simde_mm_store_ps(ctx.v6.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v6.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// lvsl v7,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r10,r1,-144
	ctx.r10.s64 = ctx.r1.s64 + -144;
	// vperm128 v62,v61,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vcmpeqfp v7,v13,v13
	simde_mm_store_ps(ctx.v7.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v13,v6,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// lvsl v3,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vrefp v12,v9
	simde_mm_store_ps(ctx.v12.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v9.f32)));
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// addi r10,r1,-160
	ctx.r10.s64 = ctx.r1.s64 + -160;
	// vsel v10,v11,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vspltw128 v7,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vnmsubfp v0,v9,v12,v5
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v5.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmulfp128 v62,v62,v10
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp v0,v12,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vspltw128 v61,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vspltw128 v62,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// stvewx128 v61,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r7,r1,-128
	ctx.r7.s64 = ctx.r1.s64 + -128;
	// stvewx128 v62,r28,r11
	ea = (r28.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r28,r1,-137
	r28.s64 = ctx.r1.s64 + -137;
	// lfs f10,8(r4)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// vnmsubfp v6,v9,v0,v5
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v6.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v5.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// lfs f13,-160(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -160);
	ctx.f13.f64 = double(temp.f32);
	// vcmpeqfp v8,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v8.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lfs f11,12(r4)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-156(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -156);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// vmaddfp v0,v0,v6,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// fadds f10,f10,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f11,-140(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// stfs f10,-144(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// lvx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,-144
	ctx.r9.s64 = ctx.r1.s64 + -144;
	// lvx128 v62,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v62,v61,v62,v3
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vsel v13,v12,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v62,v62,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vspltw128 v61,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vspltw128 v62,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// stvewx128 v61,r0,r27
	ea = (r27.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r27,r1,-144
	r27.s64 = ctx.r1.s64 + -144;
	// stfs f0,-132(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// stfs f0,-136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// stfs f0,-140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// stfs f0,-144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// stvewx128 v62,r26,r11
	ea = (r26.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r26,r1,-144
	r26.s64 = ctx.r1.s64 + -144;
	// lfs f11,-156(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -156);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -160);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r4)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// stfs f11,20(r4)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f11,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrefp v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v12.f32)));
	// lfs f8,24(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r5,16
	ctx.r8.s64 = ctx.r5.s64 + 16;
	// fadds f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// stfs f10,-144(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// lfs f9,28(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// addi r9,r5,8
	ctx.r9.s64 = ctx.r5.s64 + 8;
	// addi r9,r1,-137
	ctx.r9.s64 = ctx.r1.s64 + -137;
	// lvsl v5,r0,r23
	temp.u32 = r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// fadds f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f11,-140(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// vspltw128 v6,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// stfs f0,-124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// stfs f0,-116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// addi r23,r1,-160
	r23.s64 = ctx.r1.s64 + -160;
	// stfs f0,-120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// addi r20,r1,-160
	r20.s64 = ctx.r1.s64 + -160;
	// stfs f0,-128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// lvx128 v11,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrefp v13,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v11.f32)));
	// vnmsubfp v9,v12,v0,v4
	simde_mm_store_ps(ctx.v9.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v4.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v10,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// lvx128 v62,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v62,v63,v5
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmaddfp v0,v0,v9,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lvsl v3,r0,r21
	temp.u32 = r21.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v2,r0,r26
	temp.u32 = r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r26,r1,-160
	r26.s64 = ctx.r1.s64 + -160;
	// addi r21,r1,-160
	r21.s64 = ctx.r1.s64 + -160;
	// vnmsubfp v9,v12,v0,v4
	simde_mm_store_ps(ctx.v9.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v4.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v12,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vcmpeqfp v5,v0,v0
	simde_mm_store_ps(ctx.v5.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v4,v11,v13,v7
	simde_mm_store_ps(ctx.v4.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v7.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v9,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v5,v10,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmaddfp v0,v13,v4,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v63,v63,v5
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v5.f32)));
	// vnmsubfp v9,v11,v0,v7
	simde_mm_store_ps(ctx.v9.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v7.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v8,v0,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// stvewx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r10,r1,-128
	ctx.r10.s64 = ctx.r1.s64 + -128;
	// stvewx128 v63,r22,r11
	ea = (r22.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// vmaddfp v9,v0,v9,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lfs f11,-160(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -160);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-156(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -156);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,-116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// stfs f0,-120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// stfs f0,-124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// stfs f0,-128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// vsel v0,v12,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// lvx128 v11,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrefp v13,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v11.f32)));
	// stfs f11,16(r5)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// fmr f11,f10
	ctx.f11.f64 = ctx.f10.f64;
	// stfs f10,20(r5)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// vnmsubfp v7,v11,v13,v6
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v6.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// fadds f12,f11,f12
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f12,-140(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// lfs f10,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f13,-144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// lvx128 v62,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v62,v63,v3
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmulfp128 v63,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v13,v7,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vnmsubfp v9,v11,v0,v6
	simde_mm_store_ps(ctx.v9.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v6.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v10,v0,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvewx128 v62,r0,r23
	ea = (r23.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r26,r11
	ea = (r26.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// vmaddfp v0,v0,v9,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lfs f0,-156(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lfs f0,-160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// vsel v12,v13,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// lfs f13,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,-144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// stfs f12,-140(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// lvx128 v62,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v62,v63,v2
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vmulfp128 v63,v63,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// stvewx128 v62,r0,r21
	ea = (r21.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r20,r11
	ea = (r20.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,-156(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f0,-160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f0,24(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_82286DC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82286DD0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82286df0
	if (!ctx.cr6.eq) goto loc_82286DF0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// b 0x82286e80
	goto loc_82286E80;
loc_82286DF0:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// beq cr6,0x82286e24
	if (ctx.cr6.eq) goto loc_82286E24;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// beq cr6,0x82286e0c
	if (ctx.cr6.eq) goto loc_82286E0C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82286e84
	goto loc_82286E84;
loc_82286E0C:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82286e80
	if (ctx.cr6.eq) goto loc_82286E80;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// lwz r30,348(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 348);
	// b 0x82286e38
	goto loc_82286E38;
loc_82286E24:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82286e80
	if (ctx.cr6.eq) goto loc_82286E80;
	// lwz r4,336(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 336);
	// lwz r30,340(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 340);
loc_82286E38:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82286e80
	if (ctx.cr6.eq) goto loc_82286E80;
	// lwz r3,332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 332);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286E54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82286e84
	if (ctx.cr0.lt) goto loc_82286E84;
	// lwz r3,332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 332);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286E74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82286e84
	if (ctx.cr0.lt) goto loc_82286E84;
	// stw r29,140(r31)
	REX_STORE_U32(r31.u32 + 140, r29.u32);
loc_82286E80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82286E84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82288F30) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82288f44
	if (!ctx.cr6.eq) goto loc_82288F44;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82288F44:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82289458) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228946c
	if (!ctx.cr6.eq) goto loc_8228946C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_8228946C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8228A088) {
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
	ctx.lr = 0x8228A090;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82255b48
	ctx.lr = 0x8228A0A8;
	sub_82255B48(ctx, base);
	// li r27,1
	r27.s64 = 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r30,0
	r30.s64 = 0;
	// beq 0x8228a0ec
	if (ctx.cr0.eq) goto loc_8228A0EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r27,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r27.u32);
	// stw r27,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r27.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,7264
	ctx.r11.s64 = ctx.r11.s64 + 7264;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r30,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// stw r30,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r30.u32);
	// stw r30,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r30.u32);
	// stw r30,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r30.u32);
	// b 0x8228a0f0
	goto loc_8228A0F0;
loc_8228A0EC:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8228A0F0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8228a104
	if (!ctx.cr6.eq) goto loc_8228A104;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x8228a158
	goto loc_8228A158;
loc_8228A104:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228A120;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8228a13c
	if (ctx.cr0.lt) goto loc_8228A13C;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// stw r31,0(r26)
	REX_STORE_U32(r26.u32 + 0, r31.u32);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// mr r31,r30
	r31.u64 = r30.u64;
	// stw r27,31384(r10)
	REX_STORE_U32(ctx.r10.u32 + 31384, r27.u32);
loc_8228A13C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8228a158
	if (ctx.cr6.eq) goto loc_8228A158;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228A158;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228A158:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8228D890) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228D8BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lfs f0,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,376
	ctx.r8.s64 = ctx.r10.s64 + 376;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stfsx f0,r8,r3
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, temp.u32);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lfs f0,168(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6020(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 6020, temp.u32);
	// lfs f0,172(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6024(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 6024, temp.u32);
	// lfs f0,176(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6028(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 6028, temp.u32);
	// ld r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8228d920
	if (ctx.cr6.eq) goto loc_8228D920;
	// bl 0x822268e0
	ctx.lr = 0x8228D920;
	sub_822268E0(ctx, base);
loc_8228D920:
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8228d934
	if (ctx.cr6.eq) goto loc_8228D934;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82226af8
	ctx.lr = 0x8228D934;
	sub_82226AF8(ctx, base);
loc_8228D934:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8228d948
	if (ctx.cr6.eq) goto loc_8228D948;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822266d8
	ctx.lr = 0x8228D948;
	sub_822266D8(ctx, base);
loc_8228D948:
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

DEFINE_REX_FUNC(sub_82291C98) {
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
	ctx.lr = 0x82291CA0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// lwz r3,4(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// bl 0x82295758
	ctx.lr = 0x82291CF0;
	sub_82295758(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82291cfc
	if (ctx.cr0.eq) goto loc_82291CFC;
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_82291CFC:
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82291d28
	if (ctx.cr6.eq) goto loc_82291D28;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x82295758
	ctx.lr = 0x82291D1C;
	sub_82295758(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82291d28
	if (ctx.cr0.eq) goto loc_82291D28;
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_82291D28:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x82291d54
	if (ctx.cr6.eq) goto loc_82291D54;
	// lwz r5,48(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 48);
	// b 0x82291d58
	goto loc_82291D58;
loc_82291D54:
	// lwz r5,44(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 44);
loc_82291D58:
	// bl 0x82291880
	ctx.lr = 0x82291D5C;
	sub_82291880(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82291d78
	if (ctx.cr6.eq) goto loc_82291D78;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82291e30
	goto loc_82291E30;
loc_82291D78:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// lfs f0,16372(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16372);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82291da4
	if (ctx.cr6.eq) goto loc_82291DA4;
	// lwa r11,80(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 80));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r27)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r27.u32 + 0, temp.u32);
loc_82291DA4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82291dc8
	if (ctx.cr6.eq) goto loc_82291DC8;
	// lwa r11,88(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 88));
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r26.u32 + 0, temp.u32);
loc_82291DC8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82291dec
	if (ctx.cr6.eq) goto loc_82291DEC;
	// lwa r11,96(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 96));
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r25)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r25.u32 + 0, temp.u32);
loc_82291DEC:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82291e10
	if (ctx.cr6.eq) goto loc_82291E10;
	// lwa r11,104(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 104));
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r24)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r24.u32 + 0, temp.u32);
loc_82291E10:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82291e2c
	if (!ctx.cr6.eq) goto loc_82291E2C;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82291e30
	if (ctx.cr6.eq) goto loc_82291E30;
loc_82291E2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82291E30:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_822990A0) {
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
	// bl 0x82298c08
	ctx.lr = 0x822990C0;
	sub_82298C08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822990d8
	if (ctx.cr0.lt) goto loc_822990D8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x822990d8
	if (ctx.cr6.eq) goto loc_822990D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822988c8
	ctx.lr = 0x822990D8;
	sub_822988C8(ctx, base);
loc_822990D8:
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

DEFINE_REX_FUNC(sub_8229B558) {
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
	ctx.lr = 0x8229B560;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,124(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// addi r27,r11,14444
	r27.s64 = ctx.r11.s64 + 14444;
	// ble cr6,0x8229b698
	if (!ctx.cr6.gt) goto loc_8229B698;
	// lbz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8229b600
	if (!ctx.cr6.eq) goto loc_8229B600;
	// li r9,7
	ctx.r9.s64 = 7;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// addi r10,r3,136
	ctx.r10.s64 = ctx.r3.s64 + 136;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8229B5B0:
	// lhzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bdnz 0x8229b5b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229B5B0;
	// li r9,121
	ctx.r9.s64 = 121;
	// addi r10,r31,164
	ctx.r10.s64 = r31.s64 + 164;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8229B5C8:
	// lhzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bdnz 0x8229b5c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229B5C8;
	// li r9,128
	ctx.r9.s64 = 128;
	// addi r10,r31,648
	ctx.r10.s64 = r31.s64 + 648;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8229B5E0:
	// lhzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bdnz 0x8229b5e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229B5E0;
	// rlwinm r10,r8,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subfze r11,r9
	temp.u8 = ~ctx.r9.u32 + ctx.xer.ca < ~ctx.r9.u32;
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,28(r31)
	REX_STORE_U8(r31.u32 + 28, ctx.r11.u8);
loc_8229B600:
	// addi r4,r31,2832
	ctx.r4.s64 = r31.s64 + 2832;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229b0e0
	ctx.lr = 0x8229B60C;
	sub_8229B0E0(ctx, base);
	// addi r4,r31,2844
	ctx.r4.s64 = r31.s64 + 2844;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229b0e0
	ctx.lr = 0x8229B618;
	sub_8229B0E0(ctx, base);
	// addi r4,r31,140
	ctx.r4.s64 = r31.s64 + 140;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,2836(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 2836);
	// bl 0x823fff98
	ctx.lr = 0x8229B628;
	sub_823FFF98(ctx, base);
	// addi r4,r31,2432
	ctx.r4.s64 = r31.s64 + 2432;
	// lwz r5,2848(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 2848);
	// bl 0x823fff98
	ctx.lr = 0x8229B634;
	sub_823FFF98(ctx, base);
	// addi r4,r31,2856
	ctx.r4.s64 = r31.s64 + 2856;
	// bl 0x8229b0e0
	ctx.lr = 0x8229B63C;
	sub_8229B0E0(ctx, base);
	// li r10,18
	ctx.r10.s64 = 18;
loc_8229B640:
	// lbzx r11,r10,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + r27.u32);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lhz r11,2678(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2678);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8229b664
	if (!ctx.cr0.eq) goto loc_8229B664;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bge cr6,0x8229b640
	if (!ctx.cr6.lt) goto loc_8229B640;
loc_8229B664:
	// lwz r11,5792(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5792);
	// mulli r8,r10,3
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(3));
	// lwz r9,5796(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 5796);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// addi r11,r11,17
	ctx.r11.s64 = ctx.r11.s64 + 17;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r8,r11,10
	ctx.r8.s64 = ctx.r11.s64 + 10;
	// stw r11,5792(r31)
	REX_STORE_U32(r31.u32 + 5792, ctx.r11.u32);
	// rlwinm r11,r8,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8229b6a0
	if (ctx.cr6.gt) goto loc_8229B6A0;
	// b 0x8229b69c
	goto loc_8229B69C;
loc_8229B698:
	// addi r9,r30,5
	ctx.r9.s64 = r30.s64 + 5;
loc_8229B69C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8229B6A0:
	// addi r8,r30,4
	ctx.r8.s64 = r30.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8229b6cc
	if (ctx.cr6.gt) goto loc_8229B6CC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8229b6cc
	if (ctx.cr6.eq) goto loc_8229B6CC;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229b3d0
	ctx.lr = 0x8229B6C8;
	sub_8229B3D0(ctx, base);
	// b 0x8229b824
	goto loc_8229B824;
loc_8229B6CC:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8229b76c
	if (!ctx.cr6.eq) goto loc_8229B76C;
	// lwz r10,5812(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5812);
	// addi r11,r28,2
	ctx.r11.s64 = r28.s64 + 2;
	// lhz r9,5808(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 5808);
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// ble cr6,0x8229b74c
	if (!ctx.cr6.gt) goto loc_8229B74C;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r11,5808(r31)
	REX_STORE_U16(r31.u32 + 5808, ctx.r11.u16);
	// stbx r11,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u8);
	// lbz r10,5808(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 5808);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,5812(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5812);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-13
	ctx.r11.s64 = ctx.r11.s64 + -13;
	// srw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r11,5812(r31)
	REX_STORE_U32(r31.u32 + 5812, ctx.r11.u32);
	// sth r9,5808(r31)
	REX_STORE_U16(r31.u32 + 5808, ctx.r9.u16);
	// b 0x8229b760
	goto loc_8229B760;
loc_8229B74C:
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r8,5812(r31)
	REX_STORE_U32(r31.u32 + 5812, ctx.r8.u32);
	// sth r11,5808(r31)
	REX_STORE_U16(r31.u32 + 5808, ctx.r11.u16);
loc_8229B760:
	// addi r5,r27,1372
	ctx.r5.s64 = r27.s64 + 1372;
	// addi r4,r27,220
	ctx.r4.s64 = r27.s64 + 220;
	// b 0x8229b81c
	goto loc_8229B81C;
loc_8229B76C:
	// lwz r9,5812(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 5812);
	// addi r11,r28,4
	ctx.r11.s64 = r28.s64 + 4;
	// lhz r8,5808(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 5808);
	// cmpwi cr6,r9,13
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 13, ctx.xer);
	// ble cr6,0x8229b7e4
	if (!ctx.cr6.gt) goto loc_8229B7E4;
	// slw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r11,5808(r31)
	REX_STORE_U16(r31.u32 + 5808, ctx.r11.u16);
	// stbx r11,r6,r7
	REX_STORE_U8(ctx.r6.u32 + ctx.r7.u32, ctx.r11.u8);
	// lbz r9,5808(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 5808);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stbx r9,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u8);
	// lwz r11,5812(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5812);
	// subfic r9,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r9.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// addi r11,r11,-13
	ctx.r11.s64 = ctx.r11.s64 + -13;
	// srw r9,r8,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// stw r11,5812(r31)
	REX_STORE_U32(r31.u32 + 5812, ctx.r11.u32);
	// sth r9,5808(r31)
	REX_STORE_U16(r31.u32 + 5808, ctx.r9.u16);
	// b 0x8229b7f8
	goto loc_8229B7F8;
loc_8229B7E4:
	// slw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// addi r7,r9,3
	ctx.r7.s64 = ctx.r9.s64 + 3;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r7,5812(r31)
	REX_STORE_U32(r31.u32 + 5812, ctx.r7.u32);
	// sth r11,5808(r31)
	REX_STORE_U16(r31.u32 + 5808, ctx.r11.u16);
loc_8229B7F8:
	// lwz r9,2848(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 2848);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lwz r11,2836(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2836);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8229aa00
	ctx.lr = 0x8229B814;
	sub_8229AA00(ctx, base);
	// addi r5,r31,2432
	ctx.r5.s64 = r31.s64 + 2432;
	// addi r4,r31,140
	ctx.r4.s64 = r31.s64 + 140;
loc_8229B81C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229acb0
	ctx.lr = 0x8229B824;
	sub_8229ACB0(ctx, base);
loc_8229B824:
	// li r10,286
	ctx.r10.s64 = 286;
	// addi r11,r31,136
	ctx.r11.s64 = r31.s64 + 136;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8229B830:
	// sthu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U16(ea, r26.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8229b830
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229B830;
	// li r10,30
	ctx.r10.s64 = 30;
	// addi r11,r31,2428
	ctx.r11.s64 = r31.s64 + 2428;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8229B844:
	// sthu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U16(ea, r26.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8229b844
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229B844;
	// li r10,19
	ctx.r10.s64 = 19;
	// addi r11,r31,2672
	ctx.r11.s64 = r31.s64 + 2672;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8229B858:
	// sthu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U16(ea, r26.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8229b858
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229B858;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r26,5796(r31)
	REX_STORE_U32(r31.u32 + 5796, r26.u32);
	// stw r26,5792(r31)
	REX_STORE_U32(r31.u32 + 5792, r26.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// sth r11,1164(r31)
	REX_STORE_U16(r31.u32 + 1164, ctx.r11.u16);
	// stw r26,5800(r31)
	REX_STORE_U32(r31.u32 + 5800, r26.u32);
	// stw r26,5784(r31)
	REX_STORE_U32(r31.u32 + 5784, r26.u32);
	// beq cr6,0x8229b8e4
	if (ctx.cr6.eq) goto loc_8229B8E4;
	// lwz r11,5812(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5812);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x8229b8b8
	if (!ctx.cr6.gt) goto loc_8229B8B8;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r10,5808(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 5808);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stbx r10,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lbz r9,5808(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 5808);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// b 0x8229b8d0
	goto loc_8229B8D0;
loc_8229B8B8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8229b8dc
	if (!ctx.cr6.gt) goto loc_8229B8DC;
	// lhz r11,5808(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 5808);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stbx r11,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
loc_8229B8D0:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_8229B8DC:
	// sth r26,5808(r31)
	REX_STORE_U16(r31.u32 + 5808, r26.u16);
	// stw r26,5812(r31)
	REX_STORE_U32(r31.u32 + 5812, r26.u32);
loc_8229B8E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822A9D18) {
	REX_FUNC_PROLOGUE();
	// mulli r11,r4,80
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(80));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r5,1672(r11)
	REX_STORE_U8(ctx.r11.u32 + 1672, ctx.r5.u8);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r10,1428(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1428);
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// stw r10,1428(r3)
	REX_STORE_U32(ctx.r3.u32 + 1428, ctx.r10.u32);
	// lwz r3,31464(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 31464);
	// b 0x8229a710
	sub_8229A710(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822AA1D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,80
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(80));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfs f1,1660(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 1660, temp.u32);
	// b 0x822a9e78
	sub_822A9E78(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822AA6F0) {
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
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f12,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821f6bf0
	ctx.lr = 0x822AA730;
	sub_821F6BF0(ctx, base);
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// mulli r11,r30,80
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(80));
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,31464(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 31464);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r11,1456
	ctx.r10.s64 = ctx.r11.s64 + 1456;
	// stfs f0,1456(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 1456, temp.u32);
	// stfs f13,1460(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 1460, temp.u32);
	// stfs f12,1464(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 1464, temp.u32);
	// stb r8,1540(r9)
	REX_STORE_U8(ctx.r9.u32 + 1540, ctx.r8.u8);
	// lwz r11,2956(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2956);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822aa780
	if (!ctx.cr6.eq) goto loc_822AA780;
	// lwz r11,1428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1428);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,1428(r31)
	REX_STORE_U32(r31.u32 + 1428, ctx.r11.u32);
loc_822AA780:
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

DEFINE_REX_FUNC(sub_822AD188) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822AD190) {
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
	ctx.lr = 0x822AD198;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// ble cr6,0x822ad218
	if (!ctx.cr6.gt) goto loc_822AD218;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r11,3,0,28
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r29,r3
	r27.u64 = r29.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x822ac808
	ctx.lr = 0x822AD1DC;
	sub_822AC808(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// add r5,r29,r31
	ctx.r5.u64 = r29.u64 + r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// subf r3,r29,r31
	ctx.r3.u64 = r31.u64 - r29.u64;
	// bl 0x822ac808
	ctx.lr = 0x822AD1F0;
	sub_822AC808(ctx, base);
	// subf r29,r29,r28
	r29.u64 = r28.u64 - r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// subf r3,r26,r28
	ctx.r3.u64 = r28.u64 - r26.u64;
	// bl 0x822ac808
	ctx.lr = 0x822AD208;
	sub_822AC808(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x822ad21c
	goto loc_822AD21C;
loc_822AD218:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_822AD21C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822ac808
	ctx.lr = 0x822AD224;
	sub_822AC808(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822B0778) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822B0780;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,592
	ctx.r3.s64 = 592;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x822c80d0
	ctx.lr = 0x822B0794;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822b07a8
	if (ctx.cr0.eq) goto loc_822B07A8;
	// bl 0x822ad3a0
	ctx.lr = 0x822B07A0;
	sub_822AD3A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x822b07ac
	goto loc_822B07AC;
loc_822B07A8:
	// li r31,0
	r31.s64 = 0;
loc_822B07AC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822aece0
	ctx.lr = 0x822B07BC;
	sub_822AECE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822B1960) {
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
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b1990
	if (ctx.cr0.eq) goto loc_822B1990;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
loc_822B1990:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822b1b0c
	if (ctx.cr0.eq) goto loc_822B1B0C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b15d0
	ctx.lr = 0x822B19A8;
	sub_822B15D0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822b1a90
	if (ctx.cr0.eq) goto loc_822B1A90;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b19e0
	if (ctx.cr0.eq) goto loc_822B19E0;
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// addi r4,r31,320
	ctx.r4.s64 = r31.s64 + 320;
	// addi r3,r31,384
	ctx.r3.s64 = r31.s64 + 384;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b19dc
	if (ctx.cr6.eq) goto loc_822B19DC;
	// addi r5,r11,384
	ctx.r5.s64 = ctx.r11.s64 + 384;
	// bl 0x8229f270
	ctx.lr = 0x822B19D8;
	sub_8229F270(ctx, base);
	// b 0x822b19e0
	goto loc_822B19E0;
loc_822B19DC:
	// bl 0x821f3f40
	ctx.lr = 0x822B19E0;
	sub_821F3F40(ctx, base);
loc_822B19E0:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm. r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b1a08
	if (ctx.cr0.eq) goto loc_822B1A08;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822b1a08
	if (!ctx.cr6.eq) goto loc_822B1A08;
	// addi r5,r31,384
	ctx.r5.s64 = r31.s64 + 384;
	// addi r4,r31,688
	ctx.r4.s64 = r31.s64 + 688;
	// addi r3,r31,752
	ctx.r3.s64 = r31.s64 + 752;
	// bl 0x8229f270
	ctx.lr = 0x822B1A08;
	sub_8229F270(ctx, base);
loc_822B1A08:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r30,1
	r30.s64 = 1;
	// lwz r10,528(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 528);
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r11,r11,0,16,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// beq cr6,0x822b1a48
	if (ctx.cr6.eq) goto loc_822B1A48;
	// lwz r10,28(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// rlwinm. r10,r10,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822b1a40
	if (ctx.cr0.eq) goto loc_822B1A40;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// b 0x822b1a44
	goto loc_822B1A44;
loc_822B1A40:
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
loc_822B1A44:
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
loc_822B1A48:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x822b1a74
	if (ctx.cr6.lt) goto loc_822B1A74;
	// lfs f13,116(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x822b1a74
	if (ctx.cr6.lt) goto loc_822B1A74;
	// lfs f13,120(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822b1a90
	if (!ctx.cr6.lt) goto loc_822B1A90;
loc_822B1A74:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822b1a88
	if (ctx.cr0.eq) goto loc_822B1A88;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// b 0x822b1a8c
	goto loc_822B1A8C;
loc_822B1A88:
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
loc_822B1A8C:
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
loc_822B1A90:
	// lwz r10,528(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 528);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b1b00
	if (ctx.cr6.eq) goto loc_822B1B00;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// beq cr6,0x822b1ab4
	if (ctx.cr6.eq) goto loc_822B1AB4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822b1ab8
	goto loc_822B1AB8;
loc_822B1AB4:
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
loc_822B1AB8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// beq 0x822b1acc
	if (ctx.cr0.eq) goto loc_822B1ACC;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x822b1ad0
	goto loc_822B1AD0;
loc_822B1ACC:
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_822B1AD0:
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822b1ae8
	if (!ctx.cr0.eq) goto loc_822B1AE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822b1aec
	goto loc_822B1AEC;
loc_822B1AE8:
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
loc_822B1AEC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// beq 0x822b1b1c
	if (ctx.cr0.eq) goto loc_822B1B1C;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// b 0x822b1b20
	goto loc_822B1B20;
loc_822B1B00:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// ori r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 | 12;
	// b 0x822b1b20
	goto loc_822B1B20;
loc_822B1B0C:
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// beq 0x822b1b24
	if (ctx.cr0.eq) goto loc_822B1B24;
loc_822B1B1C:
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
loc_822B1B20:
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
loc_822B1B24:
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

DEFINE_REX_FUNC(sub_822BB448) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822bb48c
	if (!ctx.cr6.eq) goto loc_822BB48C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x822bb4a0
	goto loc_822BB4A0;
loc_822BB48C:
	// addi r10,r10,384
	ctx.r10.s64 = ctx.r10.s64 + 384;
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// addi r6,r10,48
	ctx.r6.s64 = ctx.r10.s64 + 48;
	// bl 0x822bab58
	ctx.lr = 0x822BB49C;
	sub_822BAB58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822BB4A0:
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

DEFINE_REX_FUNC(sub_822BE118) {
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
	// lwz r11,132(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,128(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822be17c
	if (ctx.cr0.eq) goto loc_822BE17C;
loc_822BE14C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822ac2b0
	ctx.lr = 0x822BE154;
	sub_822AC2B0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// beq cr6,0x822be198
	if (ctx.cr6.eq) goto loc_822BE198;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,132(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,128(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822be14c
	if (ctx.cr6.lt) goto loc_822BE14C;
loc_822BE17C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822BE180:
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
loc_822BE198:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x822be180
	goto loc_822BE180;
}

DEFINE_REX_FUNC(sub_822C2780) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lfs f13,2024(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2024);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stb r11,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C4DBC) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C4E90) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822c4f10
	if (ctx.cr6.lt) goto loc_822C4F10;
	// bne cr6,0x822c4f14
	if (!ctx.cr6.eq) goto loc_822C4F14;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c4f14
	if (ctx.cr6.eq) goto loc_822C4F14;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,31492(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 31492);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r31,16(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822160f0
	ctx.lr = 0x822C4EE4;
	sub_822160F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822c4ef8
	if (ctx.cr0.eq) goto loc_822C4EF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82212778
	ctx.lr = 0x822C4EF8;
	sub_82212778(ctx, base);
loc_822C4EF8:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82217278
	ctx.lr = 0x822C4F0C;
	sub_82217278(ctx, base);
	// b 0x822c4f14
	goto loc_822C4F14;
loc_822C4F10:
	// lwz r3,140(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 140);
loc_822C4F14:
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

DEFINE_REX_FUNC(sub_822C5E20) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x822aac90
	ctx.lr = 0x822C5E3C;
	sub_822AAC90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822c5e88
	if (ctx.cr0.eq) goto loc_822C5E88;
	// ld r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 104);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 112);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// b 0x822c5ea8
	goto loc_822C5EA8;
loc_822C5E88:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_822C5EA8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C5EC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_822C8770) {
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
	// bl 0x823cd320
	ctx.lr = 0x822C8780;
	sub_823CD320(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C8AF8) {
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
	// lbz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 68);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822c8b24
	if (!ctx.cr0.eq) goto loc_822C8B24;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822c8b78
	goto loc_822C8B78;
loc_822C8B24:
	// li r30,0
	r30.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// bl 0x823cdf60
	ctx.lr = 0x822C8B40;
	sub_823CDF60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822c8b68
	if (!ctx.cr0.eq) goto loc_822C8B68;
	// bl 0x822098c8
	ctx.lr = 0x822C8B4C;
	sub_822098C8(ctx, base);
	// cmplwi cr6,r3,996
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 996, ctx.xer);
	// beq cr6,0x822c8b74
	if (ctx.cr6.eq) goto loc_822C8B74;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x822c8b74
	if (ctx.cr6.eq) goto loc_822C8B74;
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// bne cr6,0x822c8b6c
	if (!ctx.cr6.eq) goto loc_822C8B6C;
loc_822C8B68:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_822C8B6C:
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// stb r30,68(r31)
	REX_STORE_U8(r31.u32 + 68, r30.u8);
loc_822C8B74:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822C8B78:
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

DEFINE_REX_FUNC(sub_822C9F90) {
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
	// bl 0x822c9d88
	ctx.lr = 0x822C9FA8;
	sub_822C9D88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c9c80
	ctx.lr = 0x822C9FB0;
	sub_822C9C80(ctx, base);
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

DEFINE_REX_FUNC(sub_822CAF98) {
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
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822cb054
	if (ctx.cr6.eq) goto loc_822CB054;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822cb054
	if (ctx.cr6.eq) goto loc_822CB054;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_822CAFC4:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822cafc4
	if (!ctx.cr6.eq) goto loc_822CAFC4;
	// subf r10,r9,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r9.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_822CAFE4:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822cafe4
	if (!ctx.cr6.eq) goto loc_822CAFE4;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x822cb054
	if (!ctx.cr6.lt) goto loc_822CB054;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r4,r11,25812
	ctx.r4.s64 = ctx.r11.s64 + 25812;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d55f8
	ctx.lr = 0x822CB028;
	sub_822D55F8(ctx, base);
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x822cb04c
	goto loc_822CB04C;
loc_822CB034:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// bne cr6,0x822cb048
	if (!ctx.cr6.eq) goto loc_822CB048;
	// li r10,92
	ctx.r10.s64 = 92;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_822CB048:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
loc_822CB04C:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x822cb034
	if (!ctx.cr0.eq) goto loc_822CB034;
loc_822CB054:
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

DEFINE_REX_FUNC(sub_822CDA90) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822cdaac
	if (!ctx.cr6.eq) goto loc_822CDAAC;
loc_822CDAA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822cdad8
	goto loc_822CDAD8;
loc_822CDAAC:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822cdaa4
	if (ctx.cr0.eq) goto loc_822CDAA4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x822c9030
	ctx.lr = 0x822CDACC;
	sub_822C9030(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_822CDAD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CF300) {
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
	// beq cr6,0x822cf384
	if (ctx.cr6.eq) goto loc_822CF384;
	// lwz r5,4(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm. r11,r5,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cf334
	if (ctx.cr0.eq) goto loc_822CF334;
	// clrlwi r5,r5,1
	ctx.r5.u64 = ctx.r5.u32 & 0x7FFFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822cf338
	goto loc_822CF338;
loc_822CF334:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822CF338:
	// bl 0x822d2318
	ctx.lr = 0x822CF33C;
	sub_822D2318(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cf384
	if (ctx.cr6.eq) goto loc_822CF384;
	// bl 0x822d1a40
	ctx.lr = 0x822CF34C;
	sub_822D1A40(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x822cf384
	if (!ctx.cr6.eq) goto loc_822CF384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229a710
	ctx.lr = 0x822CF35C;
	sub_8229A710(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CF378;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d2ce8
	ctx.lr = 0x822CF384;
	sub_822D2CE8(ctx, base);
loc_822CF384:
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

DEFINE_REX_FUNC(sub_822D1718) {
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
	ctx.lr = 0x822D1720;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// addi r28,r3,48
	r28.s64 = ctx.r3.s64 + 48;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r29,r30
	r29.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D1748;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d17e4
	if (ctx.cr6.eq) goto loc_822D17E4;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d176c
	if (ctx.cr6.eq) goto loc_822D176C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822d0910
	ctx.lr = 0x822D176C;
	sub_822D0910(ctx, base);
loc_822D176C:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D1784;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stfs f13,104(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// sth r9,20(r31)
	REX_STORE_U16(r31.u32 + 20, ctx.r9.u16);
	// stfs f13,88(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// sth r30,22(r31)
	REX_STORE_U16(r31.u32 + 22, r30.u16);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// stb r30,24(r31)
	REX_STORE_U8(r31.u32 + 24, r30.u8);
	// stb r30,96(r31)
	REX_STORE_U8(r31.u32 + 96, r30.u8);
	// beq cr6,0x822d17dc
	if (ctx.cr6.eq) goto loc_822D17DC;
	// bl 0x822d0ad0
	ctx.lr = 0x822D17DC;
	sub_822D0AD0(ctx, base);
loc_822D17DC:
	// li r29,1
	r29.s64 = 1;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
loc_822D17E4:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D17F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(__savegprlr_14) {
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
	// std r14,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, r14.u64);
	// std r15,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, r15.u64);
	// std r16,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, r16.u64);
	// std r17,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, r17.u64);
	// std r18,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, r18.u64);
	// std r19,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, r19.u64);
	// std r20,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, r20.u64);
	// std r21,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, r21.u64);
	// std r22,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, r22.u64);
	// std r23,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, r23.u64);
	// std r24,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, r24.u64);
	// std r25,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(__savefpr_16) {
	REX_FUNC_PROLOGUE();
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
	// stfd f16,-128(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -128, f16.u64);
	// stfd f17,-120(r12)
	REX_STORE_U64(ctx.r12.u32 + -120, f17.u64);
	// stfd f18,-112(r12)
	REX_STORE_U64(ctx.r12.u32 + -112, f18.u64);
	// stfd f19,-104(r12)
	REX_STORE_U64(ctx.r12.u32 + -104, f19.u64);
	// stfd f20,-96(r12)
	REX_STORE_U64(ctx.r12.u32 + -96, f20.u64);
	// stfd f21,-88(r12)
	REX_STORE_U64(ctx.r12.u32 + -88, f21.u64);
	// stfd f22,-80(r12)
	REX_STORE_U64(ctx.r12.u32 + -80, f22.u64);
	// stfd f23,-72(r12)
	REX_STORE_U64(ctx.r12.u32 + -72, f23.u64);
	// stfd f24,-64(r12)
	REX_STORE_U64(ctx.r12.u32 + -64, f24.u64);
	// stfd f25,-56(r12)
	REX_STORE_U64(ctx.r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	REX_STORE_U64(ctx.r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	REX_STORE_U64(ctx.r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	REX_STORE_U64(ctx.r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	REX_STORE_U64(ctx.r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	REX_STORE_U64(ctx.r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	REX_STORE_U64(ctx.r12.u32 + -8, f31.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D63AC) {
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

DEFINE_REX_FUNC(sub_822D7988) {
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
	// bne cr6,0x822d79b8
	if (!ctx.cr6.eq) goto loc_822D79B8;
loc_822D799C:
	// bl 0x822db6c0
	ctx.lr = 0x822D79A0;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822D79AC;
	sub_822D6910(ctx, base);
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x822d7a24
	goto loc_822D7A24;
loc_822D79B8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822d799c
	if (ctx.cr6.eq) goto loc_822D799C;
	// subf r8,r4,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r4.u64;
loc_822D79C4:
	// lhzx r11,r8,r4
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r4.u32);
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x822d79dc
	if (ctx.cr6.lt) goto loc_822D79DC;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// ble cr6,0x822d79e0
	if (!ctx.cr6.gt) goto loc_822D79E0;
loc_822D79DC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822D79E0:
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x822d79fc
	if (ctx.cr6.lt) goto loc_822D79FC;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// ble cr6,0x822d7a00
	if (!ctx.cr6.gt) goto loc_822D7A00;
loc_822D79FC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822D7A00:
	// clrlwi. r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// beq 0x822d7a1c
	if (ctx.cr0.eq) goto loc_822D7A1C;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822d79c4
	if (ctx.cr6.eq) goto loc_822D79C4;
loc_822D7A1C:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_822D7A24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_80) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_109) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_822D9B80) {
	REX_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822d99a8
	sub_822D99A8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822DA498) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822DA4A0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// ld r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822e0d00
	ctx.lr = 0x822DA4C4;
	sub_822E0D00(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x822da4e4
	if (!ctx.cr6.eq) goto loc_822DA4E4;
loc_822DA4CC:
	// bl 0x822db6c0
	ctx.lr = 0x822DA4D0;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822DA4DC;
	sub_822D6910(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x822da55c
	goto loc_822DA55C;
loc_822DA4E4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822da4cc
	if (ctx.cr6.eq) goto loc_822DA4CC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(r29.s32, -1, ctx.xer);
	// bne cr6,0x822da500
	if (!ctx.cr6.eq) goto loc_822DA500;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x822da510
	goto loc_822DA510;
loc_822DA500:
	// addi r10,r11,-45
	ctx.r10.s64 = ctx.r11.s64 + -45;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// subf r4,r10,r29
	ctx.r4.u64 = r29.u64 - ctx.r10.u64;
loc_822DA510:
	// addi r10,r11,-45
	ctx.r10.s64 = ctx.r11.s64 + -45;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x822e0ac0
	ctx.lr = 0x822DA530;
	sub_822E0AC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822da544
	if (ctx.cr0.eq) goto loc_822DA544;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// b 0x822da55c
	goto loc_822DA55C;
loc_822DA544:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822da2e0
	ctx.lr = 0x822DA55C;
	sub_822DA2E0(ctx, base);
loc_822DA55C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822DF920) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DFD30) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-96
	ctx.r31.s64 = ctx.r12.s64 + -96;
	// lbz r11,127(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 127);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E0FA0) {
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
	// lwz r30,180(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// b 0x822e0fd8
	goto loc_822E0FD8;
loc_822E0FD8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e5ce0
	ctx.lr = 0x822E0FE0;
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

DEFINE_REX_FUNC(sub_822E1AA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r28,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,84(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x822e1ad8
	goto loc_822E1AD8;
loc_822E1AD8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x822e1ae8
	if (ctx.cr6.eq) goto loc_822E1AE8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822dbb00
	ctx.lr = 0x822E1AE8;
	sub_822DBB00(ctx, base);
loc_822E1AE8:
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E5BE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822E5BE8;
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// addi r11,r11,-11584
	ctx.r11.s64 = ctx.r11.s64 + -11584;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// li r29,1
	r29.s64 = 1;
	// mulli r9,r9,72
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(72));
	// stw r29,80(r31)
	REX_STORE_U32(r31.u32 + 80, r29.u32);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822e5c74
	if (!ctx.cr6.eq) goto loc_822E5C74;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x822dbd80
	ctx.lr = 0x822E5C30;
	sub_822DBD80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e5c68
	if (!ctx.cr6.eq) goto loc_822E5C68;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x822dbb20
	ctx.lr = 0x822E5C4C;
	sub_822DBB20(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & r29.u64;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_822E5C68:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = r31.s64 + 128;
	// bl 0x822e5ca8
	ctx.lr = 0x822E5C74;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_822E5CA8(ctx, base);
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
loc_822E5C74:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822e5c9c
	if (ctx.cr6.eq) goto loc_822E5C9C;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(72));
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x824d438c
	ctx.lr = 0x822E5C9C;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_822E5C9C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822E9FE8) {
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
	ctx.lr = 0x822E9FF0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,368(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 368);
	// lis r9,256
	ctx.r9.s64 = 16777216;
	// lis r8,512
	ctx.r8.s64 = 33554432;
	// lis r7,1024
	ctx.r7.s64 = 67108864;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lis r6,2048
	ctx.r6.s64 = 134217728;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// stw r7,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r5,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// addi r11,r3,368
	ctx.r11.s64 = ctx.r3.s64 + 368;
	// stw r4,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x822ea048
	if (ctx.cr6.lt) goto loc_822EA048;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec8
	return;
loc_822EA048:
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
	// bne 0x822ea048
	if (!ctx.cr0.eq) goto loc_822EA048;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,80(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 80);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822EA078;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// addi r27,r31,356
	r27.s64 = r31.s64 + 356;
	// rldicr r24,r11,63,63
	r24.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
loc_822EA08C:
	// addi r11,r28,32
	ctx.r11.s64 = r28.s64 + 32;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// srd r6,r24,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (r24.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x82223398
	ctx.lr = 0x822EA0A8;
	sub_82223398(ctx, base);
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// bl 0x82222e80
	ctx.lr = 0x822EA0D8;
	sub_82222E80(ctx, base);
	// lwz r7,0(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// ble cr6,0x822ea120
	if (!ctx.cr6.gt) goto loc_822EA120;
	// addi r26,r27,-12
	r26.s64 = r27.s64 + -12;
loc_822EA0F0:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r5,-12(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + -12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x822EA100;
	sub_822D4FA0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// add r25,r25,r10
	r25.u64 = r25.u64 + ctx.r10.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822ea0f0
	if (ctx.cr6.lt) goto loc_822EA0F0;
loc_822EA120:
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// bl 0x822213c0
	ctx.lr = 0x822EA144;
	sub_822213C0(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(r28.u32, 3, ctx.xer);
	// blt cr6,0x822ea08c
	if (ctx.cr6.lt) goto loc_822EA08C;
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ea16c
	if (ctx.cr6.eq) goto loc_822EA16C;
	// lwz r3,276(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 276);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EA16C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822EA16C:
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// bl 0x82223398
	ctx.lr = 0x822EA198;
	sub_82223398(ctx, base);
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lis r6,16384
	ctx.r6.s64 = 1073741824;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + r31.u64;
	// lwz r5,292(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 292);
	// bl 0x82223398
	ctx.lr = 0x822EA1C0;
	sub_82223398(ctx, base);
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + r31.u64;
	// lwz r5,296(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 296);
	// bl 0x82223398
	ctx.lr = 0x822EA1E8;
	sub_82223398(ctx, base);
	// lwz r4,60(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x82212778
	ctx.lr = 0x822EA1F4;
	sub_82212778(ctx, base);
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x82226af8
	ctx.lr = 0x822EA200;
	sub_82226AF8(ctx, base);
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x822268e0
	ctx.lr = 0x822EA20C;
	sub_822268E0(ctx, base);
	// lwz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x822266d8
	ctx.lr = 0x822EA218;
	sub_822266D8(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r30,1
	r30.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1152);
	// rlwimi r11,r30,11,19,21
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 11) & 0x1C00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r11,1152(r3)
	REX_STORE_U32(ctx.r3.u32 + 1152, ctx.r11.u32);
	// ld r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// std r9,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r9.u64);
	// lwz r8,56(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r7,1152(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 1152);
	// rlwimi r7,r30,14,16,18
	ctx.r7.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 14) & 0xE000) | (ctx.r7.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r7,1152(r8)
	REX_STORE_U32(ctx.r8.u32 + 1152, ctx.r7.u32);
	// ld r6,24(r8)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r8.u32 + 24);
	// oris r3,r6,32768
	ctx.r3.u64 = ctx.r6.u64 | 2147483648;
	// std r3,24(r8)
	REX_STORE_U64(ctx.r8.u32 + 24, ctx.r3.u64);
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x82211a60
	ctx.lr = 0x822EA264;
	sub_82211A60(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x82211c08
	ctx.lr = 0x822EA274;
	sub_82211C08(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,1176(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1176);
	// rlwimi r10,r30,11,19,21
	ctx.r10.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 11) & 0x1C00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r10,1176(r11)
	REX_STORE_U32(ctx.r11.u32 + 1176, ctx.r10.u32);
	// ld r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// oris r8,r9,16384
	ctx.r8.u64 = ctx.r9.u64 | 1073741824;
	// std r8,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r8.u64);
	// lwz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r6,1176(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 1176);
	// rlwimi r6,r30,14,16,18
	ctx.r6.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 14) & 0xE000) | (ctx.r6.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r6,1176(r7)
	REX_STORE_U32(ctx.r7.u32 + 1176, ctx.r6.u32);
	// ld r3,24(r7)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r7.u32 + 24);
	// oris r11,r3,16384
	ctx.r11.u64 = ctx.r3.u64 | 1073741824;
	// std r11,24(r7)
	REX_STORE_U64(ctx.r7.u32 + 24, ctx.r11.u64);
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x82211a60
	ctx.lr = 0x822EA2BC;
	sub_82211A60(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x82211c08
	ctx.lr = 0x822EA2CC;
	sub_82211C08(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r9,1200(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 1200);
	// rlwimi r9,r30,11,19,21
	ctx.r9.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 11) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r9,1200(r10)
	REX_STORE_U32(ctx.r10.u32 + 1200, ctx.r9.u32);
	// ld r8,24(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 24);
	// oris r7,r8,8192
	ctx.r7.u64 = ctx.r8.u64 | 536870912;
	// std r7,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, ctx.r7.u64);
	// lwz r6,56(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,1200(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 1200);
	// rlwimi r3,r30,14,16,18
	ctx.r3.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 14) & 0xE000) | (ctx.r3.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r3,1200(r6)
	REX_STORE_U32(ctx.r6.u32 + 1200, ctx.r3.u32);
	// ld r11,24(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 24);
	// oris r10,r11,8192
	ctx.r10.u64 = ctx.r11.u64 | 536870912;
	// std r10,24(r6)
	REX_STORE_U64(ctx.r6.u32 + 24, ctx.r10.u64);
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x82211a60
	ctx.lr = 0x822EA314;
	sub_82211A60(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x82211c08
	ctx.lr = 0x822EA324;
	sub_82211C08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x822108e8
	ctx.lr = 0x822EA330;
	sub_822108E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x822101c0
	ctx.lr = 0x822EA33C;
	sub_822101C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x822113f0
	ctx.lr = 0x822EA348;
	sub_822113F0(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,20
	ctx.r7.s64 = 20;
	// lwz r5,64(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 64);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822125d0
	ctx.lr = 0x822EA364;
	sub_822125D0(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82227cf8
	ctx.lr = 0x822EA378;
	sub_82227CF8(ctx, base);
	// bl 0x8220bf88
	ctx.lr = 0x822EA37C;
	sub_8220BF88(ctx, base);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r7,-31568
	ctx.r5.s64 = ctx.r7.s64 + -31568;
	// lwzx r4,r9,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x82215338
	ctx.lr = 0x822EA39C;
	sub_82215338(ctx, base);
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ea3b4
	if (ctx.cr6.eq) goto loc_822EA3B4;
	// lwz r3,280(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 280);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EA3B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822EA3B4:
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,372(r31)
	REX_STORE_U32(r31.u32 + 372, ctx.r11.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x822ea3d0
	if (ctx.cr6.lt) goto loc_822EA3D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,372(r31)
	REX_STORE_U32(r31.u32 + 372, ctx.r11.u32);
loc_822EA3D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_822FD4A8) {
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
	ctx.lr = 0x822FD4B0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// bne cr6,0x822fd4d4
	if (!ctx.cr6.eq) goto loc_822FD4D4;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_822FD4D4:
	// addi r26,r4,-24
	r26.s64 = ctx.r4.s64 + -24;
	// cmplwi cr6,r26,8
	ctx.cr6.compare<uint32_t>(r26.u32, 8, ctx.xer);
	// bge cr6,0x822fd4ec
	if (!ctx.cr6.lt) goto loc_822FD4EC;
loc_822FD4E0:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_822FD4EC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FD500;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// bne cr6,0x822fd4e0
	if (!ctx.cr6.eq) goto loc_822FD4E0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r28,8
	r28.s64 = 8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r8,r6,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rotlwi r30,r3,0
	r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r3.u32);
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// ble cr6,0x822fd568
	if (!ctx.cr6.gt) goto loc_822FD568;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_822FD568:
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x823cd118
	ctx.lr = 0x822FD578;
	sub_823CD118(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r3.u32);
	// bne cr6,0x822fd590
	if (!ctx.cr6.eq) goto loc_822FD590;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_822FD590:
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(r30.u32, 128, ctx.xer);
	// ble cr6,0x822fd608
	if (!ctx.cr6.gt) goto loc_822FD608;
loc_822FD598:
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(r30.u32, 128, ctx.xer);
	// li r29,128
	r29.s64 = 128;
	// bgt cr6,0x822fd5a8
	if (ctx.cr6.gt) goto loc_822FD5A8;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_822FD5A8:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r11,r28,32
	ctx.r11.u64 = r28.u64 & 0xFFFFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FD5C4;
	sub_822EC1E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// bne cr6,0x822fd4e0
	if (!ctx.cr6.eq) goto loc_822FD4E0;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// add r29,r27,r3
	r29.u64 = r27.u64 + ctx.r3.u64;
	// add r28,r28,r3
	r28.u64 = r28.u64 + ctx.r3.u64;
	// subf r30,r3,r30
	r30.u64 = r30.u64 - ctx.r3.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x822fd4e0
	if (ctx.cr6.gt) goto loc_822FD4E0;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x822FD5F8;
	sub_822D4FA0(ctx, base);
	// mr r27,r29
	r27.u64 = r29.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x822fd598
	if (!ctx.cr6.eq) goto loc_822FD598;
	// b 0x822fd638
	goto loc_822FD638;
loc_822FD608:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FD620;
	sub_822EC1E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// bne cr6,0x822fd4e0
	if (!ctx.cr6.eq) goto loc_822FD4E0;
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822d4fa0
	ctx.lr = 0x822FD638;
	sub_822D4FA0(ctx, base);
loc_822FD638:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r11,r26,32
	ctx.r11.u64 = r26.u64 & 0xFFFFFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_823068B0) {
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
	ctx.lr = 0x823068B8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,224(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 224);
	// bl 0x822f9080
	ctx.lr = 0x823068E0;
	sub_822F9080(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r7,160(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 160);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82306904
	if (ctx.cr6.eq) goto loc_82306904;
	// addi r5,r11,172
	ctx.r5.s64 = ctx.r11.s64 + 172;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f94e8
	ctx.lr = 0x82306900;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82306904:
	// lwz r10,164(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82306978
	if (ctx.cr6.eq) goto loc_82306978;
	// li r30,0
	r30.s64 = 0;
	// li r31,0
	r31.s64 = 0;
loc_82306918:
	// lwz r10,176(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x822f94e8
	ctx.lr = 0x82306930;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r10,176(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x822f94e8
	ctx.lr = 0x8230694C;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// lwz r10,164(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82306918
	if (ctx.cr6.lt) goto loc_82306918;
	// addi r5,r11,176
	ctx.r5.s64 = ctx.r11.s64 + 176;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f94e8
	ctx.lr = 0x82306974;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82306978:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,76(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82306a24
	if (ctx.cr6.eq) goto loc_82306A24;
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f94e8
	ctx.lr = 0x82306998;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x822f94e8
	ctx.lr = 0x823069B4;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r11,76(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// addi r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 20;
	// bl 0x822f94e8
	ctx.lr = 0x823069D0;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r11,76(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// bl 0x822f94e8
	ctx.lr = 0x823069EC;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r11,76(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 76);
	// addi r5,r11,28
	ctx.r5.s64 = ctx.r11.s64 + 28;
	// bl 0x822f94e8
	ctx.lr = 0x82306A08;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// addi r5,r10,76
	ctx.r5.s64 = ctx.r10.s64 + 76;
	// bl 0x822f94e8
	ctx.lr = 0x82306A20;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82306A24:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,80(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82306ad0
	if (ctx.cr6.eq) goto loc_82306AD0;
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82306ab8
	if (ctx.cr6.eq) goto loc_82306AB8;
	// li r30,0
	r30.s64 = 0;
	// li r31,0
	r31.s64 = 0;
loc_82306A48:
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// bl 0x822f94e8
	ctx.lr = 0x82306A60;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x822f94e8
	ctx.lr = 0x82306A84;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,80(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// lhz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82306a48
	if (ctx.cr6.lt) goto loc_82306A48;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f94e8
	ctx.lr = 0x82306AB4;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82306AB8:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// addi r5,r10,80
	ctx.r5.s64 = ctx.r10.s64 + 80;
	// bl 0x822f94e8
	ctx.lr = 0x82306ACC;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82306AD0:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,116(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 116);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82306b7c
	if (ctx.cr6.eq) goto loc_82306B7C;
	// lwz r9,112(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82306b68
	if (!ctx.cr6.gt) goto loc_82306B68;
	// li r31,0
	r31.s64 = 0;
loc_82306AF4:
	// lwz r10,116(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 116);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x822f94e8
	ctx.lr = 0x82306B0C;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x822f94e8
	ctx.lr = 0x82306B2C;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r11,116(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 116);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// bl 0x822f94e8
	ctx.lr = 0x82306B4C;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,112(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82306af4
	if (ctx.cr6.lt) goto loc_82306AF4;
loc_82306B68:
	// addi r5,r10,116
	ctx.r5.s64 = ctx.r10.s64 + 116;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f94e8
	ctx.lr = 0x82306B78;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82306B7C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,88(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82306be8
	if (ctx.cr6.eq) goto loc_82306BE8;
	// lwz r9,92(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82306bd4
	if (!ctx.cr6.gt) goto loc_82306BD4;
	// li r31,0
	r31.s64 = 0;
loc_82306BA0:
	// lwz r10,88(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// bl 0x822f94e8
	ctx.lr = 0x82306BB8;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,92(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82306ba0
	if (ctx.cr6.lt) goto loc_82306BA0;
loc_82306BD4:
	// addi r5,r10,88
	ctx.r5.s64 = ctx.r10.s64 + 88;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f94e8
	ctx.lr = 0x82306BE4;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82306BE8:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,96(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82306c94
	if (ctx.cr6.eq) goto loc_82306C94;
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82306c68
	if (ctx.cr6.eq) goto loc_82306C68;
	// li r31,0
	r31.s64 = 0;
loc_82306C0C:
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// bl 0x822f94e8
	ctx.lr = 0x82306C24;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x822f94e8
	ctx.lr = 0x82306C48;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,96(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 96);
	// lhz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82306c0c
	if (ctx.cr6.lt) goto loc_82306C0C;
loc_82306C68:
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f94e8
	ctx.lr = 0x82306C78;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// addi r5,r10,96
	ctx.r5.s64 = ctx.r10.s64 + 96;
	// bl 0x822f94e8
	ctx.lr = 0x82306C90;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82306C94:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,84(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82306d9c
	if (ctx.cr6.eq) goto loc_82306D9C;
	// lhz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82306d10
	if (ctx.cr6.eq) goto loc_82306D10;
	// li r30,0
	r30.s64 = 0;
	// li r31,0
	r31.s64 = 0;
loc_82306CB8:
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82306ce0
	if (ctx.cr6.eq) goto loc_82306CE0;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f94e8
	ctx.lr = 0x82306CDC;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82306CE0:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// lwz r10,84(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// lhz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82306cb8
	if (ctx.cr6.lt) goto loc_82306CB8;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f94e8
	ctx.lr = 0x82306D0C;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82306D10:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,84(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82306d84
	if (ctx.cr6.eq) goto loc_82306D84;
	// li r30,0
	r30.s64 = 0;
	// li r31,0
	r31.s64 = 0;
loc_82306D2C:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// lhz r9,6(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82306d54
	if (ctx.cr6.eq) goto loc_82306D54;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f94e8
	ctx.lr = 0x82306D50;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82306D54:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// lwz r10,84(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82306d2c
	if (ctx.cr6.lt) goto loc_82306D2C;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f94e8
	ctx.lr = 0x82306D80;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82306D84:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// addi r5,r10,84
	ctx.r5.s64 = ctx.r10.s64 + 84;
	// bl 0x822f94e8
	ctx.lr = 0x82306D98;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82306D9C:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,128(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// bl 0x822f9a10
	ctx.lr = 0x82306DA8;
	sub_822F9A10(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,148(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 148);
	// bl 0x822f9a10
	ctx.lr = 0x82306DB4;
	sub_822F9A10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,120(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 120);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82306e90
	if (ctx.cr6.eq) goto loc_82306E90;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82306e30
	if (ctx.cr6.eq) goto loc_82306E30;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f94e8
	ctx.lr = 0x82306DE4;
	sub_822F94E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 20;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// bl 0x822f94e8
	ctx.lr = 0x82306DFC;
	sub_822F94E8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// lwz r3,224(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 224);
	// bl 0x822f94e8
	ctx.lr = 0x82306E14;
	sub_822F94E8(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r11,28
	ctx.r5.s64 = ctx.r11.s64 + 28;
	// lwz r3,224(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 224);
	// bl 0x822f94e8
	ctx.lr = 0x82306E2C;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82306E30:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82306e50
	if (ctx.cr6.eq) goto loc_82306E50;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f94e8
	ctx.lr = 0x82306E4C;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82306E50:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82306e70
	if (ctx.cr6.eq) goto loc_82306E70;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f94e8
	ctx.lr = 0x82306E6C;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82306E70:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82306e90
	if (ctx.cr6.eq) goto loc_82306E90;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f94e8
	ctx.lr = 0x82306E8C;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82306E90:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x822f9a10
	ctx.lr = 0x82306E9C;
	sub_822F9A10(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,104(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82306ee0
	if (ctx.cr6.eq) goto loc_82306EE0;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwz r3,224(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f94e8
	ctx.lr = 0x82306EC4;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// addi r5,r10,104
	ctx.r5.s64 = ctx.r10.s64 + 104;
	// bl 0x822f94e8
	ctx.lr = 0x82306EDC;
	sub_822F94E8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82306EE0:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// lhz r9,72(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 72);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82306fbc
	if (ctx.cr6.eq) goto loc_82306FBC;
	// li r31,132
	r31.s64 = 132;
loc_82306EF8:
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82306fa0
	if (ctx.cr6.eq) goto loc_82306FA0;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82306f88
	if (ctx.cr6.eq) goto loc_82306F88;
	// lhz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82306f70
	if (ctx.cr6.eq) goto loc_82306F70;
	// li r30,0
	r30.s64 = 0;
loc_82306F28:
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82306f54
	if (ctx.cr6.eq) goto loc_82306F54;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 224);
	// bl 0x822f94e8
	ctx.lr = 0x82306F50;
	sub_822F94E8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82306F54:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lhz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82306f28
	if (ctx.cr6.lt) goto loc_82306F28;
loc_82306F70:
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 224);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x822f94e8
	ctx.lr = 0x82306F84;
	sub_822F94E8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82306F88:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 224);
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x822f94e8
	ctx.lr = 0x82306F9C;
	sub_822F94E8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82306FA0:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lhz r9,72(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 72);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82306ef8
	if (ctx.cr6.lt) goto loc_82306EF8;
loc_82306FBC:
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82307000
	if (ctx.cr6.eq) goto loc_82307000;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82306fe8
	if (ctx.cr6.eq) goto loc_82306FE8;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 224);
	// bl 0x822f94e8
	ctx.lr = 0x82306FE4;
	sub_822F94E8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82306FE8:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 224);
	// addi r5,r11,108
	ctx.r5.s64 = ctx.r11.s64 + 108;
	// bl 0x822f94e8
	ctx.lr = 0x82306FFC;
	sub_822F94E8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82307000:
	// addi r5,r10,48
	ctx.r5.s64 = ctx.r10.s64 + 48;
	// lwz r3,224(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f94e8
	ctx.lr = 0x82307010;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r5,r11,52
	ctx.r5.s64 = ctx.r11.s64 + 52;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// bl 0x822f94e8
	ctx.lr = 0x82307024;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// bl 0x822f94e8
	ctx.lr = 0x82307038;
	sub_822F94E8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82327670) {
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
	ctx.lr = 0x82327678;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,20(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r10,44(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// li r25,0
	r25.s64 = 0;
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,28(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r29,36(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 36);
	// add r28,r9,r10
	r28.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r26,24(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82327844
	if (!ctx.cr6.gt) goto loc_82327844;
	// subf r27,r6,r5
	r27.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_823276B8:
	// lwzx r10,r27,r6
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + ctx.r6.u32);
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// subf. r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82327770
	if (!ctx.cr0.gt) goto loc_82327770;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mullw. r8,r11,r9
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x8232770c
	if (!ctx.cr0.gt) goto loc_8232770C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r7,r3,r28
	ctx.r7.u64 = r28.u64 - ctx.r3.u64;
loc_823276E0:
	// lhzx r8,r7,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lhz r24,0(r11)
	r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// add r8,r8,r24
	ctx.r8.u64 = ctx.r8.u64 + r24.u64;
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhz r8,34(r30)
	ctx.r8.u64 = REX_LOAD_U16(r30.u32 + 34);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823276e0
	if (ctx.cr6.lt) goto loc_823276E0;
loc_8232770C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8232781c
	if (!ctx.cr6.gt) goto loc_8232781C;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_82327720:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8232774c
	if (!ctx.cr6.gt) goto loc_8232774C;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 48);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// b 0x82327760
	goto loc_82327760;
loc_8232774C:
	// bge cr6,0x82327760
	if (!ctx.cr6.lt) goto loc_82327760;
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 48);
	// subf r9,r9,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
	// sth r9,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
loc_82327760:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82327720
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82327720;
	// b 0x8232781c
	goto loc_8232781C;
loc_82327770:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8232781c
	if (!ctx.cr6.lt) goto loc_8232781C;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mullw. r8,r11,r9
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x823277bc
	if (!ctx.cr0.gt) goto loc_823277BC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r9,r3,r28
	ctx.r9.u64 = r28.u64 - ctx.r3.u64;
loc_82327790:
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lhzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhz r8,34(r30)
	ctx.r8.u64 = REX_LOAD_U16(r30.u32 + 34);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82327790
	if (ctx.cr6.lt) goto loc_82327790;
loc_823277BC:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8232781c
	if (!ctx.cr6.gt) goto loc_8232781C;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_823277D0:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823277fc
	if (!ctx.cr6.gt) goto loc_823277FC;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 48);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// subf r9,r10,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r10.u64;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// sth r7,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// b 0x82327810
	goto loc_82327810;
loc_823277FC:
	// bge cr6,0x82327810
	if (!ctx.cr6.lt) goto loc_82327810;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 48);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r7,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
loc_82327810:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x823277d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823277D0;
loc_8232781C:
	// lhz r11,34(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 34);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823276b8
	if (ctx.cr6.lt) goto loc_823276B8;
loc_82327844:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82327900
	if (ctx.cr0.lt) goto loc_82327900;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8232785C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,720(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 720);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82327884
	if (!ctx.cr6.gt) goto loc_82327884;
	// stwx r9,r11,r26
	REX_STORE_U32(ctx.r11.u32 + r26.u32, ctx.r9.u32);
	// b 0x8232789c
	goto loc_8232789C;
loc_82327884:
	// lwz r9,724(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 724);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82327898
	if (!ctx.cr6.lt) goto loc_82327898;
	// stwx r9,r11,r26
	REX_STORE_U32(ctx.r11.u32 + r26.u32, ctx.r9.u32);
	// b 0x8232789c
	goto loc_8232789C;
loc_82327898:
	// stwx r10,r11,r26
	REX_STORE_U32(ctx.r11.u32 + r26.u32, ctx.r10.u32);
loc_8232789C:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823278c0
	if (!ctx.cr6.gt) goto loc_823278C0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lhz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 48);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r7,r10
	REX_STORE_U16(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u16);
	// b 0x823278f8
	goto loc_823278F8;
loc_823278C0:
	// bge cr6,0x823278e8
	if (!ctx.cr6.lt) goto loc_823278E8;
	// lhz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 48);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 44);
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// neg r5,r9
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sthx r4,r6,r7
	REX_STORE_U16(ctx.r6.u32 + ctx.r7.u32, ctx.r4.u16);
	// b 0x823278f8
	goto loc_823278F8;
loc_823278E8:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r9,r10
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, r25.u16);
loc_823278F8:
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// bdnz 0x8232785c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232785C;
loc_82327900:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8232795c
	if (!ctx.cr6.eq) goto loc_8232795C;
	// lhz r11,34(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 34);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82327930;
	sub_822D4FA0(ctx, base);
	// lhz r7,34(r30)
	ctx.r7.u64 = REX_LOAD_U16(r30.u32 + 34);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mullw r3,r7,r6
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82327954;
	sub_822D4FA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_8232795C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82338848) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82338850;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823388c4
	if (ctx.cr6.eq) goto loc_823388C4;
	// lwz r4,12(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8233887c
	if (ctx.cr6.eq) goto loc_8233887C;
	// bl 0x8233ff80
	ctx.lr = 0x82338878;
	sub_8233FF80(ctx, base);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
loc_8233887C:
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82338894
	if (ctx.cr6.eq) goto loc_82338894;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff80
	ctx.lr = 0x82338890;
	sub_8233FF80(ctx, base);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
loc_82338894:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823388ac
	if (ctx.cr6.eq) goto loc_823388AC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff80
	ctx.lr = 0x823388A8;
	sub_8233FF80(ctx, base);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
loc_823388AC:
	// lwz r4,624(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 624);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823388c4
	if (ctx.cr6.eq) goto loc_823388C4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff80
	ctx.lr = 0x823388C0;
	sub_8233FF80(ctx, base);
	// stw r30,624(r31)
	REX_STORE_U32(r31.u32 + 624, r30.u32);
loc_823388C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8233CD08) {
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
	ctx.lr = 0x8233CD10;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// li r5,648
	ctx.r5.s64 = 648;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x822d5870
	ctx.lr = 0x8233CD38;
	sub_822D5870(ctx, base);
	// addi r11,r28,16
	ctx.r11.s64 = r28.s64 + 16;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r26,r10,15387
	r26.s64 = ctx.r10.s64 + 15387;
	// add r29,r11,r24
	r29.u64 = ctx.r11.u64 + r24.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stw r29,24(r31)
	REX_STORE_U32(r31.u32 + 24, r29.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233CD60;
	sub_8233FF60(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233cd7c
	if (!ctx.cr6.eq) goto loc_8233CD7C;
loc_8233CD70:
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_8233CD7C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d5870
	ctx.lr = 0x8233CD8C;
	sub_822D5870(ctx, base);
	// add r10,r30,r28
	ctx.r10.u64 = r30.u64 + r28.u64;
	// add r11,r25,r28
	ctx.r11.u64 = r25.u64 + r28.u64;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// addi r30,r11,32
	r30.s64 = ctx.r11.s64 + 32;
	// rlwinm r9,r10,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233CDB8;
	sub_8233FF60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233cd70
	if (ctx.cr6.eq) goto loc_8233CD70;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x822d5870
	ctx.lr = 0x8233CDD4;
	sub_822D5870(ctx, base);
	// srawi r25,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	r25.s64 = r28.s32 >> 1;
	// add r10,r25,r29
	ctx.r10.u64 = r25.u64 + r29.u64;
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233cdec
	if (ctx.cr6.eq) goto loc_8233CDEC;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
loc_8233CDEC:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233CE04;
	sub_8233FF60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233cd70
	if (ctx.cr6.eq) goto loc_8233CD70;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x822d5870
	ctx.lr = 0x8233CE20;
	sub_822D5870(ctx, base);
	// add r10,r25,r29
	ctx.r10.u64 = r25.u64 + r29.u64;
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233ce34
	if (ctx.cr6.eq) goto loc_8233CE34;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
loc_8233CE34:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r28,600(r31)
	REX_STORE_U32(r31.u32 + 600, r28.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r24,596(r31)
	REX_STORE_U32(r31.u32 + 596, r24.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,640(r31)
	REX_STORE_U32(r31.u32 + 640, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82347468) {
	REX_FUNC_PROLOGUE();
	// lwz r11,1832(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1832);
	// lwz r10,1840(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1840);
	// lwz r9,1844(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1844);
	// lwz r8,1868(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 1868);
	// lwz r7,1792(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1792);
	// stw r11,1836(r3)
	REX_STORE_U32(ctx.r3.u32 + 1836, ctx.r11.u32);
	// stw r10,1856(r3)
	REX_STORE_U32(ctx.r3.u32 + 1856, ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r9,1860(r3)
	REX_STORE_U32(ctx.r3.u32 + 1860, ctx.r9.u32);
	// stw r8,1864(r3)
	REX_STORE_U32(ctx.r3.u32 + 1864, ctx.r8.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,1828(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1828);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,1848(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1848);
	// lwz r8,1852(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 1852);
	// lwz r7,1872(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1872);
	// stw r10,1800(r3)
	REX_STORE_U32(ctx.r3.u32 + 1800, ctx.r10.u32);
	// stw r11,1836(r3)
	REX_STORE_U32(ctx.r3.u32 + 1836, ctx.r11.u32);
	// stw r9,1856(r3)
	REX_STORE_U32(ctx.r3.u32 + 1856, ctx.r9.u32);
	// stw r8,1860(r3)
	REX_STORE_U32(ctx.r3.u32 + 1860, ctx.r8.u32);
	// stw r7,1864(r3)
	REX_STORE_U32(ctx.r3.u32 + 1864, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82349598) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,3752
	ctx.r4.s64 = ctx.r3.s64 + 3752;
	// addi r3,r3,3744
	ctx.r3.s64 = ctx.r3.s64 + 3744;
	// bl 0x823530d0
	ctx.lr = 0x823495C0;
	sub_823530D0(ctx, base);
	// lwz r11,3744(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// lwz r9,3752(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3752);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,3776(r31)
	REX_STORE_U32(r31.u32 + 3776, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,3780(r31)
	REX_STORE_U32(r31.u32 + 3780, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,3784(r31)
	REX_STORE_U32(r31.u32 + 3784, ctx.r6.u32);
	// lwz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,3788(r31)
	REX_STORE_U32(r31.u32 + 3788, ctx.r5.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r4,4(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r4,3792(r31)
	REX_STORE_U32(r31.u32 + 3792, ctx.r4.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r3,3796(r31)
	REX_STORE_U32(r31.u32 + 3796, ctx.r3.u32);
	// beq cr6,0x82349610
	if (ctx.cr6.eq) goto loc_82349610;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82349614
	goto loc_82349614;
loc_82349610:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82349614:
	// lwz r6,220(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lwz r7,3776(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r8,3780(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r9,3784(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// lwz r6,3792(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3792);
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r3,3796(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3796);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r5,3812(r31)
	REX_STORE_U32(r31.u32 + 3812, ctx.r5.u32);
	// stw r7,3856(r31)
	REX_STORE_U32(r31.u32 + 3856, ctx.r7.u32);
	// stw r4,3860(r31)
	REX_STORE_U32(r31.u32 + 3860, ctx.r4.u32);
	// stw r11,3864(r31)
	REX_STORE_U32(r31.u32 + 3864, ctx.r11.u32);
	// stw r10,14824(r31)
	REX_STORE_U32(r31.u32 + 14824, ctx.r10.u32);
	// stw r6,14828(r31)
	REX_STORE_U32(r31.u32 + 14828, ctx.r6.u32);
	// stw r3,14832(r31)
	REX_STORE_U32(r31.u32 + 14832, ctx.r3.u32);
	// beq cr6,0x82349668
	if (ctx.cr6.eq) goto loc_82349668;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82342af8
	ctx.lr = 0x82349668;
	sub_82342AF8(ctx, base);
loc_82349668:
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

DEFINE_REX_FUNC(sub_823514A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823514B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r30,24
	r30.s64 = 24;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bge cr6,0x8235152c
	if (!ctx.cr6.lt) goto loc_8235152C;
loc_823514D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235152c
	if (ctx.cr6.eq) goto loc_8235152C;
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
	// bge 0x8235151c
	if (!ctx.cr0.lt) goto loc_8235151C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8235151C;
	sub_823380C8(ctx, base);
loc_8235151C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823514d4
	if (ctx.cr6.gt) goto loc_823514D4;
loc_8235152C:
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
	// bge 0x82351564
	if (!ctx.cr0.lt) goto loc_82351564;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82351564;
	sub_823380C8(ctx, base);
loc_82351564:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// beq cr6,0x82351578
	if (ctx.cr6.eq) goto loc_82351578;
loc_8235156C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_82351578:
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// bge cr6,0x823515ec
	if (!ctx.cr6.lt) goto loc_823515EC;
loc_82351594:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823515ec
	if (ctx.cr6.eq) goto loc_823515EC;
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
	// bge 0x823515dc
	if (!ctx.cr0.lt) goto loc_823515DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823515DC;
	sub_823380C8(ctx, base);
loc_823515DC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82351594
	if (ctx.cr6.gt) goto loc_82351594;
loc_823515EC:
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
	// bge 0x82351624
	if (!ctx.cr0.lt) goto loc_82351624;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82351624;
	sub_823380C8(ctx, base);
loc_82351624:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8235156c
	if (!ctx.cr6.eq) goto loc_8235156C;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r30,5
	r30.s64 = 5;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x82351684
	if (!ctx.cr6.lt) goto loc_82351684;
loc_82351644:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82351684
	if (ctx.cr6.eq) goto loc_82351684;
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
	// bge 0x82351674
	if (!ctx.cr0.lt) goto loc_82351674;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82351674;
	sub_823380C8(ctx, base);
loc_82351674:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82351644
	if (ctx.cr6.gt) goto loc_82351644;
loc_82351684:
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
	// bge 0x823516a8
	if (!ctx.cr0.lt) goto loc_823516A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823516A8;
	sub_823380C8(ctx, base);
loc_823516A8:
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r30,24
	r30.s64 = 24;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bge cr6,0x8235171c
	if (!ctx.cr6.lt) goto loc_8235171C;
loc_823516C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235171c
	if (ctx.cr6.eq) goto loc_8235171C;
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
	// bge 0x8235170c
	if (!ctx.cr0.lt) goto loc_8235170C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8235170C;
	sub_823380C8(ctx, base);
loc_8235170C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823516c4
	if (ctx.cr6.gt) goto loc_823516C4;
loc_8235171C:
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
	// bge 0x82351754
	if (!ctx.cr0.lt) goto loc_82351754;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82351754;
	sub_823380C8(ctx, base);
loc_82351754:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x8235156c
	if (!ctx.cr6.eq) goto loc_8235156C;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r30,4
	r30.s64 = 4;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x823517d0
	if (!ctx.cr6.lt) goto loc_823517D0;
loc_82351778:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823517d0
	if (ctx.cr6.eq) goto loc_823517D0;
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
	// bge 0x823517c0
	if (!ctx.cr0.lt) goto loc_823517C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823517C0;
	sub_823380C8(ctx, base);
loc_823517C0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82351778
	if (ctx.cr6.gt) goto loc_82351778;
loc_823517D0:
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
	// bge 0x82351808
	if (!ctx.cr0.lt) goto loc_82351808;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82351808;
	sub_823380C8(ctx, base);
loc_82351808:
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// bne cr6,0x8235156c
	if (!ctx.cr6.eq) goto loc_8235156C;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r30,4
	r30.s64 = 4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x82351868
	if (!ctx.cr6.lt) goto loc_82351868;
loc_82351828:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82351868
	if (ctx.cr6.eq) goto loc_82351868;
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
	// bge 0x82351858
	if (!ctx.cr0.lt) goto loc_82351858;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82351858;
	sub_823380C8(ctx, base);
loc_82351858:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82351828
	if (ctx.cr6.gt) goto loc_82351828;
loc_82351868:
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
	// bge 0x8235188c
	if (!ctx.cr0.lt) goto loc_8235188C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8235188C;
	sub_823380C8(ctx, base);
loc_8235188C:
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// bge cr6,0x82351900
	if (!ctx.cr6.lt) goto loc_82351900;
loc_823518A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82351900
	if (ctx.cr6.eq) goto loc_82351900;
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
	// bge 0x823518f0
	if (!ctx.cr0.lt) goto loc_823518F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823518F0;
	sub_823380C8(ctx, base);
loc_823518F0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823518a8
	if (ctx.cr6.gt) goto loc_823518A8;
loc_82351900:
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
	// bge 0x82351938
	if (!ctx.cr0.lt) goto loc_82351938;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82351938;
	sub_823380C8(ctx, base);
loc_82351938:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8235156c
	if (!ctx.cr6.eq) goto loc_8235156C;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r30,8
	r30.s64 = 8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82351998
	if (!ctx.cr6.lt) goto loc_82351998;
loc_82351958:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82351998
	if (ctx.cr6.eq) goto loc_82351998;
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
	// bge 0x82351988
	if (!ctx.cr0.lt) goto loc_82351988;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82351988;
	sub_823380C8(ctx, base);
loc_82351988:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82351958
	if (ctx.cr6.gt) goto loc_82351958;
loc_82351998:
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
	// bge 0x823519bc
	if (!ctx.cr0.lt) goto loc_823519BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823519BC;
	sub_823380C8(ctx, base);
loc_823519BC:
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// bge cr6,0x82351a30
	if (!ctx.cr6.lt) goto loc_82351A30;
loc_823519D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82351a30
	if (ctx.cr6.eq) goto loc_82351A30;
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
	// bge 0x82351a20
	if (!ctx.cr0.lt) goto loc_82351A20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82351A20;
	sub_823380C8(ctx, base);
loc_82351A20:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823519d8
	if (ctx.cr6.gt) goto loc_823519D8;
loc_82351A30:
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
	// bge 0x82351a68
	if (!ctx.cr0.lt) goto loc_82351A68;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82351A68;
	sub_823380C8(ctx, base);
loc_82351A68:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8235156c
	if (!ctx.cr6.eq) goto loc_8235156C;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r30,4
	r30.s64 = 4;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x82351ae4
	if (!ctx.cr6.lt) goto loc_82351AE4;
loc_82351A8C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82351ae4
	if (ctx.cr6.eq) goto loc_82351AE4;
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
	// bge 0x82351ad4
	if (!ctx.cr0.lt) goto loc_82351AD4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82351AD4;
	sub_823380C8(ctx, base);
loc_82351AD4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82351a8c
	if (ctx.cr6.gt) goto loc_82351A8C;
loc_82351AE4:
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
	// bge 0x82351b1c
	if (!ctx.cr0.lt) goto loc_82351B1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82351B1C;
	sub_823380C8(ctx, base);
loc_82351B1C:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x8235156c
	if (!ctx.cr6.eq) goto loc_8235156C;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82351b94
	if (!ctx.cr6.lt) goto loc_82351B94;
loc_82351B3C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82351b94
	if (ctx.cr6.eq) goto loc_82351B94;
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
	// bge 0x82351b84
	if (!ctx.cr0.lt) goto loc_82351B84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82351B84;
	sub_823380C8(ctx, base);
loc_82351B84:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82351b3c
	if (ctx.cr6.gt) goto loc_82351B3C;
loc_82351B94:
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
	// bge 0x82351bcc
	if (!ctx.cr0.lt) goto loc_82351BCC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82351BCC;
	sub_823380C8(ctx, base);
loc_82351BCC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8235156c
	if (!ctx.cr6.eq) goto loc_8235156C;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r30,2
	r30.s64 = 2;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82351c2c
	if (!ctx.cr6.lt) goto loc_82351C2C;
loc_82351BEC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82351c2c
	if (ctx.cr6.eq) goto loc_82351C2C;
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
	// bge 0x82351c1c
	if (!ctx.cr0.lt) goto loc_82351C1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82351C1C;
	sub_823380C8(ctx, base);
loc_82351C1C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82351bec
	if (ctx.cr6.gt) goto loc_82351BEC;
loc_82351C2C:
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
	// bge 0x82351c50
	if (!ctx.cr0.lt) goto loc_82351C50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82351C50;
	sub_823380C8(ctx, base);
loc_82351C50:
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// bge cr6,0x82351cc4
	if (!ctx.cr6.lt) goto loc_82351CC4;
loc_82351C6C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82351cc4
	if (ctx.cr6.eq) goto loc_82351CC4;
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
	// bge 0x82351cb4
	if (!ctx.cr0.lt) goto loc_82351CB4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82351CB4;
	sub_823380C8(ctx, base);
loc_82351CB4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82351c6c
	if (ctx.cr6.gt) goto loc_82351C6C;
loc_82351CC4:
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
	// bge 0x82351cfc
	if (!ctx.cr0.lt) goto loc_82351CFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82351CFC;
	sub_823380C8(ctx, base);
loc_82351CFC:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x8235156c
	if (!ctx.cr6.eq) goto loc_8235156C;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r30,16
	r30.s64 = 16;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82351d78
	if (!ctx.cr6.lt) goto loc_82351D78;
loc_82351D20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82351d78
	if (ctx.cr6.eq) goto loc_82351D78;
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
	// bge 0x82351d68
	if (!ctx.cr0.lt) goto loc_82351D68;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82351D68;
	sub_823380C8(ctx, base);
loc_82351D68:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82351d20
	if (ctx.cr6.gt) goto loc_82351D20;
loc_82351D78:
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
	// bge 0x82351db0
	if (!ctx.cr0.lt) goto loc_82351DB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82351DB0;
	sub_823380C8(ctx, base);
loc_82351DB0:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8235156c
	if (ctx.cr6.eq) goto loc_8235156C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,3628(r28)
	REX_STORE_U32(r28.u32 + 3628, r30.u32);
	// stw r10,3688(r28)
	REX_STORE_U32(r28.u32 + 3688, ctx.r10.u32);
loc_82351DC8:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82351dec
	if (ctx.cr6.eq) goto loc_82351DEC;
	// lwz r10,3688(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 3688);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,3688(r28)
	REX_STORE_U32(r28.u32 + 3688, ctx.r10.u32);
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// blt cr6,0x82351dc8
	if (ctx.cr6.lt) goto loc_82351DC8;
loc_82351DEC:
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// bge cr6,0x82351e60
	if (!ctx.cr6.lt) goto loc_82351E60;
loc_82351E08:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82351e60
	if (ctx.cr6.eq) goto loc_82351E60;
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
	// bge 0x82351e50
	if (!ctx.cr0.lt) goto loc_82351E50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82351E50;
	sub_823380C8(ctx, base);
loc_82351E50:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82351e08
	if (ctx.cr6.gt) goto loc_82351E08;
loc_82351E60:
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
	// bge 0x82351e98
	if (!ctx.cr0.lt) goto loc_82351E98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82351E98;
	sub_823380C8(ctx, base);
loc_82351E98:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x8235156c
	if (!ctx.cr6.eq) goto loc_8235156C;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82351f10
	if (!ctx.cr6.lt) goto loc_82351F10;
loc_82351EB8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82351f10
	if (ctx.cr6.eq) goto loc_82351F10;
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
	// bge 0x82351f00
	if (!ctx.cr0.lt) goto loc_82351F00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82351F00;
	sub_823380C8(ctx, base);
loc_82351F00:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82351eb8
	if (ctx.cr6.gt) goto loc_82351EB8;
loc_82351F10:
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
	// bge 0x82351f48
	if (!ctx.cr0.lt) goto loc_82351F48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82351F48;
	sub_823380C8(ctx, base);
loc_82351F48:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8235156c
	if (!ctx.cr6.eq) goto loc_8235156C;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// bge cr6,0x82351fc4
	if (!ctx.cr6.lt) goto loc_82351FC4;
loc_82351F6C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82351fc4
	if (ctx.cr6.eq) goto loc_82351FC4;
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
	// bge 0x82351fb4
	if (!ctx.cr0.lt) goto loc_82351FB4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82351FB4;
	sub_823380C8(ctx, base);
loc_82351FB4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82351f6c
	if (ctx.cr6.gt) goto loc_82351F6C;
loc_82351FC4:
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
	// bge 0x82351ffc
	if (!ctx.cr0.lt) goto loc_82351FFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82351FFC;
	sub_823380C8(ctx, base);
loc_82351FFC:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x8235156c
	if (!ctx.cr6.eq) goto loc_8235156C;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r30,13
	r30.s64 = 13;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bge cr6,0x82352078
	if (!ctx.cr6.lt) goto loc_82352078;
loc_82352020:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352078
	if (ctx.cr6.eq) goto loc_82352078;
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
	// bge 0x82352068
	if (!ctx.cr0.lt) goto loc_82352068;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82352068;
	sub_823380C8(ctx, base);
loc_82352068:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82352020
	if (ctx.cr6.gt) goto loc_82352020;
loc_82352078:
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
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x823520b0
	if (!ctx.cr0.lt) goto loc_823520B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823520B0;
	sub_823380C8(ctx, base);
loc_823520B0:
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r30,1
	r30.s64 = 1;
	// stw r29,156(r28)
	REX_STORE_U32(r28.u32 + 156, r29.u32);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82352128
	if (!ctx.cr6.lt) goto loc_82352128;
loc_823520D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352128
	if (ctx.cr6.eq) goto loc_82352128;
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
	// bge 0x82352118
	if (!ctx.cr0.lt) goto loc_82352118;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82352118;
	sub_823380C8(ctx, base);
loc_82352118:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823520d0
	if (ctx.cr6.gt) goto loc_823520D0;
loc_82352128:
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
	// bge 0x82352160
	if (!ctx.cr0.lt) goto loc_82352160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82352160;
	sub_823380C8(ctx, base);
loc_82352160:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x8235156c
	if (!ctx.cr6.eq) goto loc_8235156C;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r30,13
	r30.s64 = 13;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bge cr6,0x823521dc
	if (!ctx.cr6.lt) goto loc_823521DC;
loc_82352184:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823521dc
	if (ctx.cr6.eq) goto loc_823521DC;
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
	// bge 0x823521cc
	if (!ctx.cr0.lt) goto loc_823521CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823521CC;
	sub_823380C8(ctx, base);
loc_823521CC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82352184
	if (ctx.cr6.gt) goto loc_82352184;
loc_823521DC:
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
	// bge 0x82352214
	if (!ctx.cr0.lt) goto loc_82352214;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82352214;
	sub_823380C8(ctx, base);
loc_82352214:
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r29,0
	r29.s64 = 0;
	// stw r30,160(r28)
	REX_STORE_U32(r28.u32 + 160, r30.u32);
	// li r30,1
	r30.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8235228c
	if (!ctx.cr6.lt) goto loc_8235228C;
loc_82352234:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235228c
	if (ctx.cr6.eq) goto loc_8235228C;
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
	// bge 0x8235227c
	if (!ctx.cr0.lt) goto loc_8235227C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8235227C;
	sub_823380C8(ctx, base);
loc_8235227C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82352234
	if (ctx.cr6.gt) goto loc_82352234;
loc_8235228C:
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
	// bge 0x823522c4
	if (!ctx.cr0.lt) goto loc_823522C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823522C4;
	sub_823380C8(ctx, base);
loc_823522C4:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x8235156c
	if (!ctx.cr6.eq) goto loc_8235156C;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8235233c
	if (!ctx.cr6.lt) goto loc_8235233C;
loc_823522E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235233c
	if (ctx.cr6.eq) goto loc_8235233C;
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
	// bge 0x8235232c
	if (!ctx.cr0.lt) goto loc_8235232C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8235232C;
	sub_823380C8(ctx, base);
loc_8235232C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823522e4
	if (ctx.cr6.gt) goto loc_823522E4;
loc_8235233C:
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
	// bge 0x82352374
	if (!ctx.cr0.lt) goto loc_82352374;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82352374;
	sub_823380C8(ctx, base);
loc_82352374:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8235156c
	if (!ctx.cr6.eq) goto loc_8235156C;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// bge cr6,0x823523f0
	if (!ctx.cr6.lt) goto loc_823523F0;
loc_82352398:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823523f0
	if (ctx.cr6.eq) goto loc_823523F0;
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
	// bge 0x823523e0
	if (!ctx.cr0.lt) goto loc_823523E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823523E0;
	sub_823380C8(ctx, base);
loc_823523E0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82352398
	if (ctx.cr6.gt) goto loc_82352398;
loc_823523F0:
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
	// bge 0x82352428
	if (!ctx.cr0.lt) goto loc_82352428;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82352428;
	sub_823380C8(ctx, base);
loc_82352428:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x8235156c
	if (!ctx.cr6.eq) goto loc_8235156C;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x823524a0
	if (!ctx.cr6.lt) goto loc_823524A0;
loc_82352448:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823524a0
	if (ctx.cr6.eq) goto loc_823524A0;
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
	// bge 0x82352490
	if (!ctx.cr0.lt) goto loc_82352490;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82352490;
	sub_823380C8(ctx, base);
loc_82352490:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82352448
	if (ctx.cr6.gt) goto loc_82352448;
loc_823524A0:
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
	// bge 0x823524d8
	if (!ctx.cr0.lt) goto loc_823524D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823524D8;
	sub_823380C8(ctx, base);
loc_823524D8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8235156c
	if (!ctx.cr6.eq) goto loc_8235156C;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// bge cr6,0x82352554
	if (!ctx.cr6.lt) goto loc_82352554;
loc_823524FC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352554
	if (ctx.cr6.eq) goto loc_82352554;
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
	// bge 0x82352544
	if (!ctx.cr0.lt) goto loc_82352544;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82352544;
	sub_823380C8(ctx, base);
loc_82352544:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823524fc
	if (ctx.cr6.gt) goto loc_823524FC;
loc_82352554:
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
	// bge 0x8235258c
	if (!ctx.cr0.lt) goto loc_8235258C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8235258C;
	sub_823380C8(ctx, base);
loc_8235258C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8235156c
	if (!ctx.cr6.eq) goto loc_8235156C;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// bge cr6,0x82352608
	if (!ctx.cr6.lt) goto loc_82352608;
loc_823525B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352608
	if (ctx.cr6.eq) goto loc_82352608;
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
	// bge 0x823525f8
	if (!ctx.cr0.lt) goto loc_823525F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823525F8;
	sub_823380C8(ctx, base);
loc_823525F8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823525b0
	if (ctx.cr6.gt) goto loc_823525B0;
loc_82352608:
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
	// bge 0x82352640
	if (!ctx.cr0.lt) goto loc_82352640;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82352640;
	sub_823380C8(ctx, base);
loc_82352640:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// beq cr6,0x8235156c
	if (ctx.cr6.eq) goto loc_8235156C;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// bge cr6,0x823526bc
	if (!ctx.cr6.lt) goto loc_823526BC;
loc_82352664:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823526bc
	if (ctx.cr6.eq) goto loc_823526BC;
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
	// bge 0x823526ac
	if (!ctx.cr0.lt) goto loc_823526AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823526AC;
	sub_823380C8(ctx, base);
loc_823526AC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82352664
	if (ctx.cr6.gt) goto loc_82352664;
loc_823526BC:
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
	// bge 0x823526f4
	if (!ctx.cr0.lt) goto loc_823526F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823526F4;
	sub_823380C8(ctx, base);
loc_823526F4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8235156c
	if (ctx.cr6.eq) goto loc_8235156C;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// bge cr6,0x82352770
	if (!ctx.cr6.lt) goto loc_82352770;
loc_82352718:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352770
	if (ctx.cr6.eq) goto loc_82352770;
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
	// bge 0x82352760
	if (!ctx.cr0.lt) goto loc_82352760;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82352760;
	sub_823380C8(ctx, base);
loc_82352760:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82352718
	if (ctx.cr6.gt) goto loc_82352718;
loc_82352770:
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
	// bge 0x82352794
	if (!ctx.cr0.lt) goto loc_82352794;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82352794;
	sub_823380C8(ctx, base);
loc_82352794:
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// stw r11,3692(r28)
	REX_STORE_U32(r28.u32 + 3692, ctx.r11.u32);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82352810
	if (!ctx.cr6.lt) goto loc_82352810;
loc_823527B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352810
	if (ctx.cr6.eq) goto loc_82352810;
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
	// bge 0x82352800
	if (!ctx.cr0.lt) goto loc_82352800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82352800;
	sub_823380C8(ctx, base);
loc_82352800:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823527b8
	if (ctx.cr6.gt) goto loc_823527B8;
loc_82352810:
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
	// bge 0x82352848
	if (!ctx.cr0.lt) goto loc_82352848;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82352848;
	sub_823380C8(ctx, base);
loc_82352848:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// beq cr6,0x8235156c
	if (ctx.cr6.eq) goto loc_8235156C;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// bge cr6,0x823528c4
	if (!ctx.cr6.lt) goto loc_823528C4;
loc_8235286C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823528c4
	if (ctx.cr6.eq) goto loc_823528C4;
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
	// bge 0x823528b4
	if (!ctx.cr0.lt) goto loc_823528B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823528B4;
	sub_823380C8(ctx, base);
loc_823528B4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8235286c
	if (ctx.cr6.gt) goto loc_8235286C;
loc_823528C4:
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
	// bge 0x823528fc
	if (!ctx.cr0.lt) goto loc_823528FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823528FC;
	sub_823380C8(ctx, base);
loc_823528FC:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// beq cr6,0x8235156c
	if (ctx.cr6.eq) goto loc_8235156C;
	// lwz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82352920
	if (ctx.cr6.eq) goto loc_82352920;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82352920:
	// bl 0x82337f50
	ctx.lr = 0x82352924;
	sub_82337F50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823494b8
	ctx.lr = 0x82352930;
	sub_823494B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823A5F78) {
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
	ctx.lr = 0x823A5F80;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// stw r8,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lwz r7,136(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// subfe r11,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r10,1776(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// rlwinm r21,r7,1,0,30
	r21.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// mr r15,r6
	r15.u64 = ctx.r6.u64;
	// mullw r6,r7,r11
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// mullw r5,r21,r11
	ctx.r5.s64 = int64_t(r21.s32) * int64_t(ctx.r11.s32);
	// mr r16,r9
	r16.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r9,1784(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1784);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r17,r7,3,0,28
	r17.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r19,r7,4,0,27
	r19.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r24,r11,r10
	r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r14,r8,r9
	r14.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bne cr6,0x823a60fc
	if (!ctx.cr6.eq) goto loc_823A60FC;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// ble cr6,0x823a607c
	if (!ctx.cr6.gt) goto loc_823A607C;
	// rlwinm r11,r21,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r24
	r29.u64 = r24.u64;
	// add r27,r11,r24
	r27.u64 = ctx.r11.u64 + r24.u64;
loc_823A5FFC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x823a6064
	if (ctx.cr6.eq) goto loc_823A6064;
	// lhz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 0);
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bne cr6,0x823a6034
	if (!ctx.cr6.eq) goto loc_823A6034;
	// lhz r10,-2(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + -2);
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bne cr6,0x823a6034
	if (!ctx.cr6.eq) goto loc_823A6034;
	// lwz r10,3236(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3236);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r11,3016(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3016);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A6034;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823A6034:
	// lhz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 0);
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bne cr6,0x823a6064
	if (!ctx.cr6.eq) goto loc_823A6064;
	// lhz r10,-2(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + -2);
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bne cr6,0x823a6064
	if (!ctx.cr6.eq) goto loc_823A6064;
	// lwz r10,3236(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3236);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r11,3024(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3024);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A6064;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823A6064:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmpw cr6,r26,r21
	ctx.cr6.compare<int32_t>(r26.s32, r21.s32, ctx.xer);
	// blt cr6,0x823a5ffc
	if (ctx.cr6.lt) goto loc_823A5FFC;
loc_823A607C:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823a60fc
	if (!ctx.cr6.gt) goto loc_823A60FC;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r14
	r29.u64 = r14.u64;
loc_823A6094:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x823a60e4
	if (ctx.cr6.eq) goto loc_823A60E4;
	// lhz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 0);
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bne cr6,0x823a60e4
	if (!ctx.cr6.eq) goto loc_823A60E4;
	// lhz r10,-2(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + -2);
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bne cr6,0x823a60e4
	if (!ctx.cr6.eq) goto loc_823A60E4;
	// lwz r10,3236(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3236);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r11,3028(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3028);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A60CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,3236(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3236);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r11,3036(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3036);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823A60E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823A60E4:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823a6094
	if (ctx.cr6.lt) goto loc_823A6094;
loc_823A60FC:
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// ble cr6,0x823a6228
	if (!ctx.cr6.gt) goto loc_823A6228;
	// rlwinm r11,r21,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r10,r16
	ctx.r10.u64 = r16.u32 == 0 ? 32 : __builtin_clz(r16.u32);
	// li r30,0
	r30.s64 = 0;
	// rlwinm r20,r10,27,31,31
	r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r25,r18
	r25.u64 = r18.u64;
	// add r23,r11,r24
	r23.u64 = ctx.r11.u64 + r24.u64;
	// subf r22,r11,r24
	r22.u64 = r24.u64 - ctx.r11.u64;
loc_823A6124:
	// lwz r11,300(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823a6140
	if (!ctx.cr6.eq) goto loc_823A6140;
	// lhz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U16(r22.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// beq cr6,0x823a6144
	if (ctx.cr6.eq) goto loc_823A6144;
loc_823A6140:
	// li r8,0
	ctx.r8.s64 = 0;
loc_823A6144:
	// mr r27,r20
	r27.u64 = r20.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq cr6,0x823a6174
	if (ctx.cr6.eq) goto loc_823A6174;
	// lhz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 0);
	// lhz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U16(r23.u32 + 0);
	// addi r9,r11,-16384
	ctx.r9.s64 = ctx.r11.s64 + -16384;
	// addi r7,r10,-16384
	ctx.r7.s64 = ctx.r10.s64 + -16384;
	// cntlzw r6,r9
	ctx.r6.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r29,r6,27,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// rlwinm r27,r5,27,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
loc_823A6174:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823a6184
	if (!ctx.cr6.eq) goto loc_823A6184;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x823a61c4
	if (ctx.cr6.eq) goto loc_823A61C4;
loc_823A6184:
	// lwz r11,3240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3240);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,3020(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3020);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r7,204(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,3016(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3016);
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + ctx.r11.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A61BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x823a61cc
	if (!ctx.cr6.eq) goto loc_823A61CC;
loc_823A61C4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x823a6208
	if (ctx.cr6.eq) goto loc_823A6208;
loc_823A61CC:
	// lwz r7,204(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 204);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,3240(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3240);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// add r3,r7,r26
	ctx.r3.u64 = ctx.r7.u64 + r26.u64;
	// lwz r4,3024(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3024);
	// lwz r11,3016(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3016);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// rlwinm r6,r3,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + r30.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// add r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 + r18.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A6208;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823A6208:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r22,r22,2
	r22.s64 = r22.s64 + 2;
	// addi r24,r24,2
	r24.s64 = r24.s64 + 2;
	// addi r23,r23,2
	r23.s64 = r23.s64 + 2;
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmpw cr6,r26,r21
	ctx.cr6.compare<int32_t>(r26.s32, r21.s32, ctx.xer);
	// blt cr6,0x823a6124
	if (ctx.cr6.lt) goto loc_823A6124;
loc_823A6228:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823a6320
	if (!ctx.cr6.gt) goto loc_823A6320;
	// li r30,0
	r30.s64 = 0;
	// mr r24,r14
	r24.u64 = r14.u64;
	// subf r26,r28,r15
	r26.u64 = r15.u64 - r28.u64;
loc_823A6244:
	// lwz r11,300(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823a626c
	if (!ctx.cr6.eq) goto loc_823A626C;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// li r27,1
	r27.s64 = 1;
	// subf r10,r11,r25
	ctx.r10.u64 = r25.u64 - ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r14
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r14.u32);
	// cmplwi cr6,r8,16384
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16384, ctx.xer);
	// beq cr6,0x823a6270
	if (ctx.cr6.eq) goto loc_823A6270;
loc_823A626C:
	// li r27,0
	r27.s64 = 0;
loc_823A6270:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// bne cr6,0x823a6288
	if (!ctx.cr6.eq) goto loc_823A6288;
	// lhz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U16(r24.u32 + 0);
	// li r29,1
	r29.s64 = 1;
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// beq cr6,0x823a628c
	if (ctx.cr6.eq) goto loc_823A628C;
loc_823A6288:
	// li r29,0
	r29.s64 = 0;
loc_823A628C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x823a629c
	if (!ctx.cr6.eq) goto loc_823A629C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x823a6304
	if (ctx.cr6.eq) goto loc_823A6304;
loc_823A629C:
	// lwz r3,3240(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3240);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,3028(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3028);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r11,3032(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3032);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// add r6,r28,r26
	ctx.r6.u64 = r28.u64 + r26.u64;
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r4,r30,r4
	ctx.r4.u64 = r30.u64 + ctx.r4.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bctrl 
	ctx.lr = 0x823A62D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3040(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3040);
	// lwz r4,3036(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3036);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// add r4,r30,r4
	ctx.r4.u64 = r30.u64 + ctx.r4.u64;
	// lwz r11,3240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3240);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A6304;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823A6304:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r24,r24,2
	r24.s64 = r24.s64 + 2;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823a6244
	if (ctx.cr6.lt) goto loc_823A6244;
loc_823A6320:
	// lwz r11,3020(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3020);
	// lwz r10,3024(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3024);
	// lwz r9,3032(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3032);
	// lwz r8,3040(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3040);
	// lwz r7,3028(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3028);
	// lwz r6,3036(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3036);
	// stw r11,3024(r31)
	REX_STORE_U32(r31.u32 + 3024, ctx.r11.u32);
	// stw r10,3020(r31)
	REX_STORE_U32(r31.u32 + 3020, ctx.r10.u32);
	// stw r9,3028(r31)
	REX_STORE_U32(r31.u32 + 3028, ctx.r9.u32);
	// stw r7,3032(r31)
	REX_STORE_U32(r31.u32 + 3032, ctx.r7.u32);
	// stw r8,3036(r31)
	REX_STORE_U32(r31.u32 + 3036, ctx.r8.u32);
	// stw r6,3040(r31)
	REX_STORE_U32(r31.u32 + 3040, ctx.r6.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823BD290) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823BD298;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f34
	ctx.lr = 0x823BD2A0;
	// li r9,256
	ctx.r9.s64 = 256;
	// lwz r11,14468(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14468);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r3,8316
	ctx.r11.s64 = ctx.r3.s64 + 8316;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bne cr6,0x823bd3e8
	if (!ctx.cr6.eq) goto loc_823BD3E8;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lfd f6,-9072(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = REX_LOAD_U64(ctx.r8.u32 + -9072);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lfd f0,-9080(r7)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + -9080);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// lfd f7,-28640(r6)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r6.u32 + -28640);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lfd f5,-28632(r9)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r9.u32 + -28632);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lfd f8,-9088(r5)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r5.u32 + -9088);
	// lfd f9,-9096(r4)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r4.u32 + -9096);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lfd f10,-9104(r3)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r3.u32 + -9104);
	// lfd f11,-28592(r8)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r8.u32 + -28592);
	// lfd f12,-28624(r7)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r7.u32 + -28624);
	// lfd f13,-28648(r6)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r6.u32 + -28648);
loc_823BD310:
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r8,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r8.u64);
	// lfd f4,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// fmul f2,f3,f7
	ctx.f2.f64 = ctx.f3.f64 * ctx.f7.f64;
	// fmul f4,f3,f9
	ctx.f4.f64 = ctx.f3.f64 * ctx.f9.f64;
	// fmadd f1,f3,f11,f10
	ctx.f1.f64 = std::fma(ctx.f3.f64, ctx.f11.f64, ctx.f10.f64);
	// fmul f31,f3,f8
	f31.f64 = ctx.f3.f64 * ctx.f8.f64;
	// fmul f30,f3,f6
	f30.f64 = ctx.f3.f64 * ctx.f6.f64;
	// fmul f29,f3,f13
	f29.f64 = ctx.f3.f64 * ctx.f13.f64;
	// fnmsub f28,f3,f5,f0
	f28.f64 = -std::fma(ctx.f3.f64, ctx.f5.f64, -ctx.f0.f64);
	// fmul f3,f3,f12
	ctx.f3.f64 = ctx.f3.f64 * ctx.f12.f64;
	// fadd f27,f2,f0
	f27.f64 = ctx.f2.f64 + ctx.f0.f64;
	// fctiwz f4,f4
	ctx.f4.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f4,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f4.u64);
	// fctiwz f1,f1
	ctx.f1.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f1,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f1.u64);
	// fctiwz f4,f2
	ctx.f4.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f4,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.f4.u64);
	// fctiwz f1,f31
	ctx.f1.s64 = std::isnan(f31.f64) ? int64_t(0x80000000U) : (f31.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f31.f64));
	// stfd f1,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f1.u64);
	// fctiwz f2,f30
	ctx.f2.s64 = std::isnan(f30.f64) ? int64_t(0x80000000U) : (f30.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f30.f64));
	// stfd f2,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f2.u64);
	// lwz r5,-100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// fctiwz f1,f29
	ctx.f1.s64 = std::isnan(f29.f64) ? int64_t(0x80000000U) : (f29.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f29.f64));
	// fctiwz f3,f3
	ctx.f3.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// lwz r6,-108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// stfd f1,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f1.u64);
	// fctiwz f4,f28
	ctx.f4.s64 = std::isnan(f28.f64) ? int64_t(0x80000000U) : (f28.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f28.f64));
	// lwz r7,-116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// stfd f4,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f4.u64);
	// fctiwz f2,f27
	ctx.f2.s64 = std::isnan(f27.f64) ? int64_t(0x80000000U) : (f27.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f27.f64));
	// stfd f2,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f2.u64);
	// lwz r4,-100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// stfd f3,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f3.u64);
	// lwz r3,-92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// lwz r8,-84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// lwz r31,-76(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r29,-100(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// lwz r30,-108(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// stw r5,-4092(r11)
	REX_STORE_U32(ctx.r11.u32 + -4092, ctx.r5.u32);
	// stw r6,-7164(r11)
	REX_STORE_U32(ctx.r11.u32 + -7164, ctx.r6.u32);
	// stw r7,-2044(r11)
	REX_STORE_U32(ctx.r11.u32 + -2044, ctx.r7.u32);
	// stw r4,-1020(r11)
	REX_STORE_U32(ctx.r11.u32 + -1020, ctx.r4.u32);
	// stw r3,-6140(r11)
	REX_STORE_U32(ctx.r11.u32 + -6140, ctx.r3.u32);
	// stw r8,-3068(r11)
	REX_STORE_U32(ctx.r11.u32 + -3068, ctx.r8.u32);
	// stw r31,-8188(r11)
	REX_STORE_U32(ctx.r11.u32 + -8188, r31.u32);
	// stw r29,-5116(r11)
	REX_STORE_U32(ctx.r11.u32 + -5116, r29.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823bd310
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BD310;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f80
	ctx.lr = 0x823BD3E4;
	// b 0x822d4edc
	return;
loc_823BD3E8:
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lfd f6,-9112(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = REX_LOAD_U64(ctx.r8.u32 + -9112);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lfd f7,-9120(r7)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r7.u32 + -9120);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// lfd f8,-9128(r6)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r6.u32 + -9128);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lfd f5,-9136(r9)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r9.u32 + -9136);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lfd f9,-9144(r5)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r5.u32 + -9144);
	// lfd f10,-9152(r4)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r4.u32 + -9152);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lfd f11,-9160(r3)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r3.u32 + -9160);
	// lfd f12,-9168(r8)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r8.u32 + -9168);
	// lfd f0,-9080(r7)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + -9080);
	// lfd f13,-9104(r6)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r6.u32 + -9104);
loc_823BD43C:
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r8,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.r8.u64);
	// lfd f4,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// fmul f2,f3,f7
	ctx.f2.f64 = ctx.f3.f64 * ctx.f7.f64;
	// fmul f1,f3,f8
	ctx.f1.f64 = ctx.f3.f64 * ctx.f8.f64;
	// fmul f4,f3,f12
	ctx.f4.f64 = ctx.f3.f64 * ctx.f12.f64;
	// fnmsub f30,f3,f5,f0
	f30.f64 = -std::fma(ctx.f3.f64, ctx.f5.f64, -ctx.f0.f64);
	// fmadd f31,f3,f10,f13
	f31.f64 = std::fma(ctx.f3.f64, ctx.f10.f64, ctx.f13.f64);
	// fmul f29,f3,f11
	f29.f64 = ctx.f3.f64 * ctx.f11.f64;
	// fmul f28,f3,f6
	f28.f64 = ctx.f3.f64 * ctx.f6.f64;
	// fmul f3,f3,f9
	ctx.f3.f64 = ctx.f3.f64 * ctx.f9.f64;
	// fadd f27,f2,f0
	f27.f64 = ctx.f2.f64 + ctx.f0.f64;
	// fctiwz f1,f1
	ctx.f1.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f1,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f1.u64);
	// fctiwz f4,f4
	ctx.f4.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f4,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f4.u64);
	// lwz r7,-84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// fctiwz f4,f30
	ctx.f4.s64 = std::isnan(f30.f64) ? int64_t(0x80000000U) : (f30.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f30.f64));
	// stfd f4,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f4.u64);
	// lwz r5,-100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// fctiwz f4,f2
	ctx.f4.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f4,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f4.u64);
	// fctiwz f1,f31
	ctx.f1.s64 = std::isnan(f31.f64) ? int64_t(0x80000000U) : (f31.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f31.f64));
	// stfd f1,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.f1.u64);
	// lwz r4,-84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// fctiwz f1,f29
	ctx.f1.s64 = std::isnan(f29.f64) ? int64_t(0x80000000U) : (f29.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f29.f64));
	// lwz r6,-92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// stfd f1,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.f1.u64);
	// fctiwz f1,f3
	ctx.f1.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// lwz r31,-100(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// fctiwz f4,f27
	ctx.f4.s64 = std::isnan(f27.f64) ? int64_t(0x80000000U) : (f27.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f27.f64));
	// stfd f4,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f4.u64);
	// lwz r3,-84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// stfd f1,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f1.u64);
	// lwz r8,-84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// fctiwz f2,f28
	ctx.f2.s64 = std::isnan(f28.f64) ? int64_t(0x80000000U) : (f28.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f28.f64));
	// stfd f2,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f2.u64);
	// lwz r30,-108(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// stw r7,-4092(r11)
	REX_STORE_U32(ctx.r11.u32 + -4092, ctx.r7.u32);
	// stw r5,-8188(r11)
	REX_STORE_U32(ctx.r11.u32 + -8188, ctx.r5.u32);
	// stw r6,-2044(r11)
	REX_STORE_U32(ctx.r11.u32 + -2044, ctx.r6.u32);
	// stw r31,-6140(r11)
	REX_STORE_U32(ctx.r11.u32 + -6140, r31.u32);
	// stw r3,-1020(r11)
	REX_STORE_U32(ctx.r11.u32 + -1020, ctx.r3.u32);
	// stw r8,-7164(r11)
	REX_STORE_U32(ctx.r11.u32 + -7164, ctx.r8.u32);
	// lwz r8,-92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// stw r8,-5116(r11)
	REX_STORE_U32(ctx.r11.u32 + -5116, ctx.r8.u32);
	// stw r30,-3068(r11)
	REX_STORE_U32(ctx.r11.u32 + -3068, r30.u32);
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823bd43c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BD43C;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f80
	ctx.lr = 0x823BD510;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823C2690) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e54
	ctx.lr = 0x823C2698;
	// lwz r31,108(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// srawi r11,r31,31
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = r31.s32 >> 31;
	// mr r21,r31
	r21.u64 = r31.u64;
	// xor r30,r31,r11
	r30.u64 = r31.u64 ^ ctx.r11.u64;
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823c26b8
	if (ctx.cr6.eq) goto loc_823C26B8;
	// srawi r21,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r21.s64 = r31.s32 >> 1;
loc_823C26B8:
	// lwz r17,100(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// srawi r30,r17,1
	ctx.xer.ca = (r17.s32 < 0) & ((r17.u32 & 0x1) != 0);
	r30.s64 = r17.s32 >> 1;
	// srawi r20,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	r20.s64 = ctx.r7.s32 >> 1;
	// srawi. r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x823c2738
	if (!ctx.cr0.gt) goto loc_823C2738;
	// lwz r19,132(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r25,0
	r25.s64 = 0;
	// lwz r22,124(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// li r26,0
	r26.s64 = 0;
	// mr r18,r11
	r18.u64 = ctx.r11.u64;
loc_823C26E0:
	// li r29,0
	r29.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x823c2728
	if (!ctx.cr6.gt) goto loc_823C2728;
	// add r24,r26,r6
	r24.u64 = r26.u64 + ctx.r6.u64;
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
	// add r23,r25,r19
	r23.u64 = r25.u64 + r19.u64;
	// add r28,r26,r11
	r28.u64 = r26.u64 + ctx.r11.u64;
	// add r27,r25,r29
	r27.u64 = r25.u64 + r29.u64;
loc_823C2704:
	// lbzx r16,r28,r5
	r16.u64 = REX_LOAD_U8(r28.u32 + ctx.r5.u32);
	// lbzx r15,r24,r11
	r15.u64 = REX_LOAD_U8(r24.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r28,r26,r11
	r28.u64 = r26.u64 + ctx.r11.u64;
	// stbx r16,r27,r22
	REX_STORE_U8(r27.u32 + r22.u32, r16.u8);
	// stbx r15,r23,r29
	REX_STORE_U8(r23.u32 + r29.u32, r15.u8);
	// add r29,r29,r21
	r29.u64 = r29.u64 + r21.u64;
	// add r27,r25,r29
	r27.u64 = r25.u64 + r29.u64;
	// bdnz 0x823c2704
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C2704;
loc_823C2728:
	// addic. r18,r18,-1
	ctx.xer.ca = r18.u32 > 0;
	r18.s64 = r18.s64 + -1;
	ctx.cr0.compare<int32_t>(r18.s32, 0, ctx.xer);
	// add r26,r26,r10
	r26.u64 = r26.u64 + ctx.r10.u64;
	// add r25,r25,r30
	r25.u64 = r25.u64 + r30.u64;
	// bne 0x823c26e0
	if (!ctx.cr0.eq) goto loc_823C26E0;
loc_823C2738:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x823c2954
	if (!ctx.cr6.gt) goto loc_823C2954;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r7,-16
	r29.s64 = ctx.r7.s64 + -16;
	// rlwinm r27,r17,1,0,30
	r27.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r9,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// subf r3,r9,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r9.u64;
	// addi r28,r11,1
	r28.s64 = ctx.r11.s64 + 1;
loc_823C2764:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x823c2908
	if (!ctx.cr6.gt) goto loc_823C2908;
	// add r9,r3,r30
	ctx.r9.u64 = ctx.r3.u64 + r30.u64;
	// add r8,r10,r17
	ctx.r8.u64 = ctx.r10.u64 + r17.u64;
loc_823C277C:
	// add r11,r30,r4
	ctx.r11.u64 = r30.u64 + ctx.r4.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// lbzx r25,r11,r6
	r25.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r25.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r29
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r29.s32, ctx.xer);
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r11,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r11.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// blt cr6,0x823c277c
	if (ctx.cr6.lt) goto loc_823C277C;
loc_823C2908:
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823c2944
	if (!ctx.cr6.lt) goto loc_823C2944;
	// subf r25,r6,r7
	r25.u64 = ctx.r7.u64 - ctx.r6.u64;
	// add r9,r3,r30
	ctx.r9.u64 = ctx.r3.u64 + r30.u64;
	// add r8,r10,r17
	ctx.r8.u64 = ctx.r10.u64 + r17.u64;
	// add r11,r30,r6
	ctx.r11.u64 = r30.u64 + ctx.r6.u64;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
loc_823C2924:
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lbzx r24,r11,r4
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// add r11,r30,r6
	ctx.r11.u64 = r30.u64 + ctx.r6.u64;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// bdnz 0x823c2924
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C2924;
loc_823C2944:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// add r30,r26,r30
	r30.u64 = r26.u64 + r30.u64;
	// add r10,r27,r10
	ctx.r10.u64 = r27.u64 + ctx.r10.u64;
	// bne 0x823c2764
	if (!ctx.cr0.eq) goto loc_823C2764;
loc_823C2954:
	// b 0x822d4ea4
	return;
}

DEFINE_REX_FUNC(sub_823CD250) {
	REX_FUNC_PROLOGUE();
	// rlwinm. r11,r4,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823cd264
	if (ctx.cr0.eq) goto loc_823CD264;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x8220a088
	sub_8220A088(ctx, base);
	return;
loc_823CD264:
	// b 0x823ce4e0
	sub_823CE4E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823CD418) {
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
	ctx.lr = 0x823CD420;
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,3
	ctx.r11.s64 = ctx.r5.s64 + 3;
	// stw r4,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r4.u32);
	// lis r27,-32256
	r27.s64 = -2113929216;
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r5,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r5.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r29,r11,3
	r29.s64 = ctx.r11.s64 + 3;
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// addi r11,r31,80
	ctx.r11.s64 = r31.s64 + 80;
	// stw r9,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r9.u32);
	// rlwinm r10,r29,24,1,7
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 24) & 0x7F000000;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,1572(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1572);
	// ori r10,r10,98
	ctx.r10.u64 = ctx.r10.u64 | 98;
	// stw r8,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r8.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cd49c
	if (ctx.cr6.eq) goto loc_823CD49C;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// li r3,94
	ctx.r3.s64 = 94;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CD498;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823cd4a0
	goto loc_823CD4A0;
loc_823CD49C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823CD4A0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x823cd4b0
	if (!ctx.cr6.gt) goto loc_823CD4B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823cd52c
	goto loc_823CD52C;
loc_823CD4B0:
	// blt cr6,0x823cd528
	if (ctx.cr6.lt) goto loc_823CD528;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x822d6634
	ctx.lr = 0x823CD4C4;
	sub_822D6634(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 88);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// stw r8,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x823CD4F8;
	sub_822D4FA0(ctx, base);
	// lwz r11,1572(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1572);
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r29,100(r31)
	REX_STORE_U32(r31.u32 + 100, r29.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cd528
	if (ctx.cr6.eq) goto loc_823CD528;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// li r3,67
	ctx.r3.s64 = 67;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CD524;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823cd52c
	goto loc_823CD52C;
loc_823CD528:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823CD52C:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823CE7A0) {
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
	ctx.lr = 0x823CE7A8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// addi r26,r3,20
	r26.s64 = ctx.r3.s64 + 20;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r7,5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 5, ctx.xer);
	// addi r29,r7,-5
	r29.s64 = ctx.r7.s64 + -5;
	// bgt cr6,0x823ce7cc
	if (ctx.cr6.gt) goto loc_823CE7CC;
	// li r29,0
	r29.s64 = 0;
loc_823CE7CC:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823ce7e0
	if (!ctx.cr0.eq) goto loc_823CE7E0;
	// bl 0x823ce718
	ctx.lr = 0x823CE7E0;
	sub_823CE718(ctx, base);
loc_823CE7E0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823ce884
	if (ctx.cr6.eq) goto loc_823CE884;
loc_823CE7E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x823ce834
	if (!ctx.cr6.eq) goto loc_823CE834;
	// lbz r11,3(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 3);
	// addi r29,r29,-5
	r29.s64 = r29.s64 + -5;
	// lbz r10,1(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 1);
	// lbz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 4);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,2(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 2);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r30,r11,r9
	r30.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 | ctx.r8.u64;
	// addi r31,r31,5
	r31.s64 = r31.s64 + 5;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bge cr6,0x823ce850
	if (!ctx.cr6.lt) goto loc_823CE850;
	// mr r29,r30
	r29.u64 = r30.u64;
	// b 0x823ce850
	goto loc_823CE850;
loc_823CE834:
	// lbz r10,1(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 1);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lis r8,0
	ctx.r8.s64 = 0;
	// or r30,r10,r11
	r30.u64 = ctx.r10.u64 | ctx.r11.u64;
	// ori r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 32768;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// addi r29,r29,-2
	r29.s64 = r29.s64 + -2;
loc_823CE850:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ced70
	ctx.lr = 0x823CE86C;
	sub_823CED70(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf. r29,r30,r29
	r29.u64 = r29.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// bne 0x823ce7e8
	if (!ctx.cr0.eq) goto loc_823CE7E8;
loc_823CE884:
	// stw r27,0(r25)
	REX_STORE_U32(r25.u32 + 0, r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_823D3AB0) {
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
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D3AD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// bl 0x8247c9b0
	ctx.lr = 0x823D3AE4;
	ppc_longjmp(ctx.r3.u32, ctx.r4.s32);
}

DEFINE_REX_FUNC(sub_823D3BC0) {
	REX_FUNC_PROLOGUE();
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lwz r11,2(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 2);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,2(r3)
	REX_STORE_U32(ctx.r3.u32 + 2, ctx.r11.u32);
	// lhz r11,6(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 6);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,6(r3)
	REX_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// lhz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 8);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,8(r3)
	REX_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// lwz r11,10(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 10);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10(r3)
	REX_STORE_U32(ctx.r3.u32 + 10, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D7350) {
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
	ctx.lr = 0x823D7358;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823d7738
	if (ctx.cr6.eq) goto loc_823D7738;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823d7738
	if (ctx.cr6.eq) goto loc_823D7738;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823d7398
	if (!ctx.cr6.eq) goto loc_823D7398;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x823d7398
	if (!ctx.cr6.eq) goto loc_823D7398;
loc_823D7390:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823d7740
	goto loc_823D7740;
loc_823D7398:
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r30,96(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// li r21,0
	r21.s64 = 0;
	// stw r9,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// li r19,1
	r19.s64 = 1;
	// li r23,3
	r23.s64 = 3;
	// stw r21,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r21.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r19,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r19.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r23,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r23.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r10,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// mr r24,r21
	r24.u64 = r21.u64;
	// stw r9,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// addi r25,r1,112
	r25.s64 = ctx.r1.s64 + 112;
loc_823D73EC:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r26,r19
	r26.u64 = r19.u64;
	// stw r20,64(r31)
	REX_STORE_U32(r31.u32 + 64, r20.u32);
	// stw r23,68(r31)
	REX_STORE_U32(r31.u32 + 68, r23.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// bgt cr6,0x823d74e8
	if (ctx.cr6.gt) goto loc_823D74E8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823d7470
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823D7470;
	// bdzf 4*cr6+eq,0x823d74c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823D74C0;
	// bdzf 4*cr6+eq,0x823d7484
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823D7484;
	// bdzf 4*cr6+eq,0x823d745c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823D745C;
	// bdzf 4*cr6+eq,0x823d7444
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823D7444;
	// bdzf 4*cr6+eq,0x823d74d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823D74D4;
	// bdzf 4*cr6+eq,0x823d74ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823D74AC;
	// bne cr6,0x823d7498
	if (!ctx.cr6.eq) goto loc_823D7498;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d72d8
	ctx.lr = 0x823D7440;
	sub_823D72D8(ctx, base);
	// b 0x823d74e4
	goto loc_823D74E4;
loc_823D7444:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d62d8
	ctx.lr = 0x823D7454;
	sub_823D62D8(ctx, base);
loc_823D7454:
	// mr r26,r21
	r26.u64 = r21.u64;
	// b 0x823d74e4
	goto loc_823D74E4;
loc_823D745C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d6e38
	ctx.lr = 0x823D746C;
	sub_823D6E38(ctx, base);
	// b 0x823d74e4
	goto loc_823D74E4;
loc_823D7470:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d5860
	ctx.lr = 0x823D7480;
	sub_823D5860(ctx, base);
	// b 0x823d7454
	goto loc_823D7454;
loc_823D7484:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d65d0
	ctx.lr = 0x823D7494;
	sub_823D65D0(ctx, base);
	// b 0x823d74e4
	goto loc_823D74E4;
loc_823D7498:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d3e98
	ctx.lr = 0x823D74A8;
	sub_823D3E98(ctx, base);
	// b 0x823d74e4
	goto loc_823D74E4;
loc_823D74AC:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d42a0
	ctx.lr = 0x823D74BC;
	sub_823D42A0(ctx, base);
	// b 0x823d74e4
	goto loc_823D74E4;
loc_823D74C0:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d5be0
	ctx.lr = 0x823D74D0;
	sub_823D5BE0(ctx, base);
	// b 0x823d74e4
	goto loc_823D74E4;
loc_823D74D4:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d4ca8
	ctx.lr = 0x823D74E4;
	sub_823D4CA8(ctx, base);
loc_823D74E4:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_823D74E8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x823d7598
	if (!ctx.cr6.lt) goto loc_823D7598;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d7510
	if (ctx.cr6.eq) goto loc_823D7510;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d7510
	if (ctx.cr6.eq) goto loc_823D7510;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x823cd250
	ctx.lr = 0x823D7510;
	sub_823CD250(ctx, base);
loc_823D7510:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d7530
	if (ctx.cr6.eq) goto loc_823D7530;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d7530
	if (ctx.cr6.eq) goto loc_823D7530;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x823cd250
	ctx.lr = 0x823D7530;
	sub_823CD250(ctx, base);
loc_823D7530:
	// lwz r27,76(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x823d7550
	if (ctx.cr6.eq) goto loc_823D7550;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823d3db8
	ctx.lr = 0x823D7544;
	sub_823D3DB8(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823cd250
	ctx.lr = 0x823D7550;
	sub_823CD250(ctx, base);
loc_823D7550:
	// lwz r27,80(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x823d7570
	if (ctx.cr6.eq) goto loc_823D7570;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823d3db8
	ctx.lr = 0x823D7564;
	sub_823D3DB8(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823cd250
	ctx.lr = 0x823D7570;
	sub_823CD250(ctx, base);
loc_823D7570:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// stw r21,4(r31)
	REX_STORE_U32(r31.u32 + 4, r21.u32);
	// stw r21,8(r31)
	REX_STORE_U32(r31.u32 + 8, r21.u32);
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// stw r21,56(r31)
	REX_STORE_U32(r31.u32 + 56, r21.u32);
	// cmplwi cr6,r24,9
	ctx.cr6.compare<uint32_t>(r24.u32, 9, ctx.xer);
	// stw r21,60(r31)
	REX_STORE_U32(r31.u32 + 60, r21.u32);
	// stw r21,76(r31)
	REX_STORE_U32(r31.u32 + 76, r21.u32);
	// stw r21,80(r31)
	REX_STORE_U32(r31.u32 + 80, r21.u32);
	// blt cr6,0x823d73ec
	if (ctx.cr6.lt) goto loc_823D73EC;
loc_823D7598:
	// cmplwi cr6,r24,9
	ctx.cr6.compare<uint32_t>(r24.u32, 9, ctx.xer);
	// bne cr6,0x823d75ac
	if (!ctx.cr6.eq) goto loc_823D75AC;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x823d7740
	goto loc_823D7740;
loc_823D75AC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x823d7664
	if (ctx.cr6.eq) goto loc_823D7664;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq cr6,0x823d7664
	if (ctx.cr6.eq) goto loc_823D7664;
	// mr r26,r31
	r26.u64 = r31.u64;
loc_823D75C0:
	// mr r30,r26
	r30.u64 = r26.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x823d7658
	if (ctx.cr6.eq) goto loc_823D7658;
loc_823D75CC:
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r3,r11,r9
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// bl 0x823cd118
	ctx.lr = 0x823D75E8;
	sub_823CD118(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x823d76c0
	if (ctx.cr0.eq) goto loc_823D76C0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r28,20(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// lwz r5,52(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// bl 0x8240a788
	ctx.lr = 0x823D7628;
	sub_8240A788(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// addi r28,r30,56
	r28.s64 = r30.s64 + 56;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d7644
	if (ctx.cr6.eq) goto loc_823D7644;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x823cd250
	ctx.lr = 0x823D7644;
	sub_823CD250(ctx, base);
loc_823D7644:
	// lwz r30,76(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 76);
	// stw r27,0(r29)
	REX_STORE_U32(r29.u32 + 0, r27.u32);
	// stw r19,0(r28)
	REX_STORE_U32(r28.u32 + 0, r19.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823d75cc
	if (!ctx.cr6.eq) goto loc_823D75CC;
loc_823D7658:
	// lwz r26,80(r26)
	r26.u64 = REX_LOAD_U32(r26.u32 + 80);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x823d75c0
	if (!ctx.cr6.eq) goto loc_823D75C0;
loc_823D7664:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x823d76ec
	if (ctx.cr6.eq) goto loc_823D76EC;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822d5870
	ctx.lr = 0x823D767C;
	sub_822D5870(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r11,4(r22)
	REX_STORE_U32(r22.u32 + 4, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
	// stw r19,12(r22)
	REX_STORE_U32(r22.u32 + 12, r19.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x823d1508
	ctx.lr = 0x823D76A0;
	sub_823D1508(ctx, base);
	// stw r3,16(r22)
	REX_STORE_U32(r22.u32 + 16, ctx.r3.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r31,76
	ctx.r11.s64 = r31.s64 + 76;
	// stw r10,20(r22)
	REX_STORE_U32(r22.u32 + 20, ctx.r10.u32);
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stw r10,24(r22)
	REX_STORE_U32(r22.u32 + 24, ctx.r10.u32);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 76);
	// b 0x823d76e4
	goto loc_823D76E4;
loc_823D76C0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823d7740
	goto loc_823D7740;
loc_823D76CC:
	// lwz r10,12(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r22)
	REX_STORE_U32(r22.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_823D76E4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823d76cc
	if (!ctx.cr6.eq) goto loc_823D76CC;
loc_823D76EC:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823d7728
	if (ctx.cr6.eq) goto loc_823D7728;
loc_823D76F8:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r21,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r21.u32);
	// stw r21,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r21.u32);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// stw r21,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r21.u32);
	// stw r8,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d76f8
	if (!ctx.cr6.eq) goto loc_823D76F8;
loc_823D7728:
	// lwz r31,80(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x823d76ec
	if (!ctx.cr6.eq) goto loc_823D76EC;
	// b 0x823d7390
	goto loc_823D7390;
loc_823D7738:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_823D7740:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_823E1B08) {
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
	ctx.lr = 0x823E1B10;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f38
	ctx.lr = 0x823E1B18;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
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
	// beq cr6,0x823e1b44
	if (ctx.cr6.eq) goto loc_823E1B44;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x823E1B40;
	sub_82413040(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_823E1B44:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e1b60
	if (ctx.cr6.eq) goto loc_823E1B60;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc0b0
	ctx.lr = 0x823E1B5C;
	sub_823DC0B0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_823E1B60:
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
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
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
	// fmr f28,f31
	f28.f64 = f31.f64;
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
	// bne 0x823e1bd0
	if (!ctx.cr0.eq) goto loc_823E1BD0;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x823e1bd8
	goto loc_823E1BD8;
loc_823E1BD0:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_823E1BD8:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e1bf0
	if (ctx.cr6.eq) goto loc_823E1BF0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x823E1BF0;
	sub_823DC658(ctx, base);
loc_823E1BF0:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823e1f78
	if (!ctx.cr6.gt) goto loc_823E1F78;
	// add r10,r30,r29
	ctx.r10.u64 = r30.u64 + r29.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lfs f11,16288(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16288);
	ctx.f11.f64 = double(temp.f32);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// lfd f10,-9120(r10)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r10.u32 + -9120);
	// rlwinm r25,r30,3,0,28
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f12,-7224(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -7224);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,17176(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17176);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,23268(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 23268);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r30,r30,4,0,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f5,-6656(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + -6656);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// subf r29,r25,r28
	r29.u64 = r28.u64 - r25.u64;
loc_823E1C54:
	// add r10,r27,r11
	ctx.r10.u64 = r27.u64 + ctx.r11.u64;
	// lfsx f9,r27,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f9,f29
	ctx.f9.f64 = double(float(ctx.f9.f64 + f29.f64));
	// rlwinm r7,r26,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xC;
	// lwz r6,92(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f8,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 + f31.f64));
	// lfs f6,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f7,f7,f30
	ctx.f7.f64 = double(float(ctx.f7.f64 + f30.f64));
	// fadds f6,f6,f28
	ctx.f6.f64 = double(float(ctx.f6.f64 + f28.f64));
	// lfsx f4,r7,r24
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fadds f3,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// fadds f2,f8,f4
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// fadds f1,f7,f4
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// fadds f4,f6,f4
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// fctiwz f3,f3
	ctx.f3.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f3,f2
	ctx.f3.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// fctiwz f3,f1
	ctx.f3.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f3.u64);
	// fctiwz f4,f4
	ctx.f4.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f4,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f4.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// beq cr6,0x823e1e8c
	if (ctx.cr6.eq) goto loc_823E1E8C;
	// extsw r7,r4
	ctx.r7.s64 = ctx.r4.s32;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r28,r3
	r28.s64 = ctx.r3.s32;
	// std r7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f4,104(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r28,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r28.u64);
	// lfd f3,112(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// extsw r7,r5
	ctx.r7.s64 = ctx.r5.s32;
	// frsp f3,f3
	ctx.f3.f64 = double(float(ctx.f3.f64));
	// std r7,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f2,120(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsw r28,r6
	r28.s64 = ctx.r6.s32;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// std r28,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, r28.u64);
	// lfs f1,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f8,f8,f3
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f3.f64));
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fsubs f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f4.f64));
	// fmadds f4,f8,f13,f1
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f1.f64)));
	// stfs f4,16(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f4,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f4,f8,f12,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f4.f64)));
	// stfs f4,16(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// fcfid f4,f2
	ctx.f4.f64 = double(ctx.f2.s64);
	// lfs f3,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// fmadds f3,f8,f11,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f3.f64)));
	// stfs f3,16(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// lfs f3,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f3,f7,f13,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f3.f64)));
	// stfs f3,20(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fsubs f9,f9,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// lfs f4,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f4,f7,f12,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f4.f64)));
	// stfs f4,20(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f4,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f4,f7,f11,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f7.f64, ctx.f11.f64, ctx.f4.f64)));
	// stfs f4,20(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fmul f8,f8,f10
	ctx.f8.f64 = ctx.f8.f64 * ctx.f10.f64;
	// lfs f4,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f4,f9,f13,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f4.f64)));
	// stfs f4,24(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmul f7,f7,f10
	ctx.f7.f64 = ctx.f7.f64 * ctx.f10.f64;
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// frsp f31,f8
	f31.f64 = double(float(ctx.f8.f64));
	// lfs f8,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f9,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f8,24(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// frsp f30,f7
	f30.f64 = double(float(ctx.f7.f64));
	// lfd f7,128(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f8,f7
	ctx.f8.f64 = double(ctx.f7.s64);
	// lfs f7,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f9,f11,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f7.f64)));
	// fmul f9,f9,f10
	ctx.f9.f64 = ctx.f9.f64 * ctx.f10.f64;
	// stfs f7,24(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// frsp f29,f9
	f29.f64 = double(float(ctx.f9.f64));
	// lfs f7,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f9,f6,f8
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f8,f9,f13,f7
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f7.f64)));
	// stfs f8,28(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f8,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f9,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f8.f64)));
	// fmul f7,f9,f10
	ctx.f7.f64 = ctx.f9.f64 * ctx.f10.f64;
	// stfs f8,28(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f8,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f9,f9,f11,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f8.f64)));
	// stfs f9,28(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// frsp f28,f7
	f28.f64 = double(float(ctx.f7.f64));
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
loc_823E1E8C:
	// cmpwi cr6,r3,32767
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32767, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// blt cr6,0x823e1e9c
	if (ctx.cr6.lt) goto loc_823E1E9C;
	// li r10,32767
	ctx.r10.s64 = 32767;
loc_823E1E9C:
	// cmpwi cr6,r10,-32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32767, ctx.xer);
	// ble cr6,0x823e1eb4
	if (!ctx.cr6.gt) goto loc_823E1EB4;
	// cmpwi cr6,r3,32767
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32767, ctx.xer);
	// blt cr6,0x823e1eb8
	if (ctx.cr6.lt) goto loc_823E1EB8;
	// li r3,32767
	ctx.r3.s64 = 32767;
	// b 0x823e1eb8
	goto loc_823E1EB8;
loc_823E1EB4:
	// li r3,-32767
	ctx.r3.s64 = -32767;
loc_823E1EB8:
	// cmpwi cr6,r4,32767
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 32767, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt cr6,0x823e1ec8
	if (ctx.cr6.lt) goto loc_823E1EC8;
	// li r10,32767
	ctx.r10.s64 = 32767;
loc_823E1EC8:
	// cmpwi cr6,r10,-32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32767, ctx.xer);
	// ble cr6,0x823e1ee0
	if (!ctx.cr6.gt) goto loc_823E1EE0;
	// cmpwi cr6,r4,32767
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 32767, ctx.xer);
	// blt cr6,0x823e1ee4
	if (ctx.cr6.lt) goto loc_823E1EE4;
	// li r4,32767
	ctx.r4.s64 = 32767;
	// b 0x823e1ee4
	goto loc_823E1EE4;
loc_823E1EE0:
	// li r4,-32767
	ctx.r4.s64 = -32767;
loc_823E1EE4:
	// cmpwi cr6,r5,32767
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 32767, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// blt cr6,0x823e1ef4
	if (ctx.cr6.lt) goto loc_823E1EF4;
	// li r10,32767
	ctx.r10.s64 = 32767;
loc_823E1EF4:
	// cmpwi cr6,r10,-32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32767, ctx.xer);
	// ble cr6,0x823e1f0c
	if (!ctx.cr6.gt) goto loc_823E1F0C;
	// cmpwi cr6,r5,32767
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 32767, ctx.xer);
	// blt cr6,0x823e1f10
	if (ctx.cr6.lt) goto loc_823E1F10;
	// li r5,32767
	ctx.r5.s64 = 32767;
	// b 0x823e1f10
	goto loc_823E1F10;
loc_823E1F0C:
	// li r5,-32767
	ctx.r5.s64 = -32767;
loc_823E1F10:
	// cmpwi cr6,r6,32767
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 32767, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// blt cr6,0x823e1f20
	if (ctx.cr6.lt) goto loc_823E1F20;
	// li r10,32767
	ctx.r10.s64 = 32767;
loc_823E1F20:
	// cmpwi cr6,r10,-32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32767, ctx.xer);
	// ble cr6,0x823e1f38
	if (!ctx.cr6.gt) goto loc_823E1F38;
	// cmpwi cr6,r6,32767
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 32767, ctx.xer);
	// blt cr6,0x823e1f3c
	if (ctx.cr6.lt) goto loc_823E1F3C;
	// li r6,32767
	ctx.r6.s64 = 32767;
	// b 0x823e1f3c
	goto loc_823E1F3C;
loc_823E1F38:
	// li r6,-32767
	ctx.r6.s64 = -32767;
loc_823E1F3C:
	// extsw r7,r6
	ctx.r7.s64 = ctx.r6.s32;
	// clrldi r10,r5,48
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFF;
	// clrldi r6,r4,48
	ctx.r6.u64 = ctx.r4.u64 & 0xFFFF;
	// rldimi r10,r7,16,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r7.u64, 16) & 0xFFFFFFFFFFFF0000) | (ctx.r10.u64 & 0xFFFF);
	// clrldi r7,r3,48
	ctx.r7.u64 = ctx.r3.u64 & 0xFFFF;
	// rldimi r6,r10,16,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFFFFFFFFFF0000) | (ctx.r6.u64 & 0xFFFF);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// rldimi r7,r6,16,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u64, 16) & 0xFFFFFFFFFFFF0000) | (ctx.r7.u64 & 0xFFFF);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stdux r7,r29,r25
	ea = r29.u32 + r25.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	r29.u32 = ea;
	// add r9,r30,r9
	ctx.r9.u64 = r30.u64 + ctx.r9.u64;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// add r8,r30,r8
	ctx.r8.u64 = r30.u64 + ctx.r8.u64;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823e1c54
	if (ctx.cr6.lt) goto loc_823E1C54;
loc_823E1F78:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f84
	ctx.lr = 0x823E1F84;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_823EE760) {
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
	ctx.lr = 0x823EE768;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,24(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823ee7ac
	if (!ctx.cr6.eq) goto loc_823EE7AC;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE790;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ee7a4
	if (!ctx.cr6.eq) goto loc_823EE7A4;
loc_823EE798:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_823EE7A4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_823EE7AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r27,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	r27.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r28,r11,1
	r28.s64 = ctx.r11.s64 + 1;
	// rotlwi r29,r9,8
	r29.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// bne 0x823ee7e0
	if (!ctx.cr0.eq) goto loc_823EE7E0;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE7D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ee798
	if (ctx.cr6.eq) goto loc_823EE798;
	// lwz r28,0(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r27,4(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_823EE7E0:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r9,91
	ctx.r9.s64 = 91;
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// stw r9,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// addi r29,r11,-2
	r29.s64 = ctx.r11.s64 + -2;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r7,420(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 420);
	// stw r7,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r7.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r29,28(r6)
	REX_STORE_U32(ctx.r6.u32 + 28, r29.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE824;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// addi r9,r27,-1
	ctx.r9.s64 = r27.s64 + -1;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r9,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// ble cr6,0x823ee854
	if (!ctx.cr6.gt) goto loc_823EE854;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EE854;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823EE854:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823F0298) {
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
	// beq cr6,0x823f0390
	if (ctx.cr6.eq) goto loc_823F0390;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823f0390
	if (ctx.cr6.eq) goto loc_823F0390;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f0390
	if (ctx.cr6.eq) goto loc_823F0390;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823f0390
	if (ctx.cr6.eq) goto loc_823F0390;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823f0390
	if (ctx.cr6.eq) goto loc_823F0390;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823f0390
	if (ctx.cr6.eq) goto loc_823F0390;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lbz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 24);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lbz r11,25(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 25);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// beq cr6,0x823f0304
	if (ctx.cr6.eq) goto loc_823F0304;
	// lbz r11,26(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 26);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_823F0304:
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f0318
	if (ctx.cr6.eq) goto loc_823F0318;
	// lbz r10,27(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 27);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_823F0318:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823f0328
	if (ctx.cr6.eq) goto loc_823F0328;
	// lbz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 28);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_823F0328:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x823f033c
	if (!ctx.cr6.eq) goto loc_823F033C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823f0344
	goto loc_823F0344;
loc_823F033C:
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_823F0344:
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823f0350
	if (ctx.cr0.eq) goto loc_823F0350;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_823F0350:
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// ori r10,r9,65535
	ctx.r10.u64 = ctx.r9.u64 | 65535;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r10,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823f0388
	if (!ctx.cr6.gt) goto loc_823F0388;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,15276
	ctx.r4.s64 = ctx.r11.s64 + 15276;
	// bl 0x823ec418
	ctx.lr = 0x823F0388;
	sub_823EC418(ctx, base);
loc_823F0388:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823f0394
	goto loc_823F0394;
loc_823F0390:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F0394:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F4C50) {
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
	ctx.lr = 0x823F4C58;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,332(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 332);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823f4d20
	if (!ctx.cr6.gt) goto loc_823F4D20;
	// addi r28,r3,336
	r28.s64 = ctx.r3.s64 + 336;
	// li r26,52
	r26.s64 = 52;
loc_823F4C78:
	// lwz r29,0(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,76(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823f4d0c
	if (!ctx.cr6.eq) goto loc_823F4D0C;
	// lwz r30,16(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x823f4cb0
	if (ctx.cr6.lt) goto loc_823F4CB0;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// bge cr6,0x823f4cb0
	if (!ctx.cr6.lt) goto loc_823F4CB0;
	// addi r11,r30,42
	ctx.r11.s64 = r30.s64 + 42;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823f4cd4
	if (!ctx.cr6.eq) goto loc_823F4CD4;
loc_823F4CB0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r26,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r26.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r30.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823F4CD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F4CD4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F4CF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r30,42
	ctx.r9.s64 = r30.s64 + 42;
	// li r5,132
	ctx.r5.s64 = 132;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwzx r4,r8,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x823F4D08;
	sub_822D4FA0(ctx, base);
	// stw r30,76(r29)
	REX_STORE_U32(r29.u32 + 76, r30.u32);
loc_823F4D0C:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823f4c78
	if (ctx.cr6.lt) goto loc_823F4C78;
loc_823F4D20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_823F6348) {
	REX_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823f6408
	if (!ctx.cr6.eq) goto loc_823F6408;
	// lwz r11,304(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823f6408
	if (!ctx.cr6.eq) goto loc_823F6408;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823f6408
	if (!ctx.cr6.eq) goto loc_823F6408;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823f6408
	if (!ctx.cr6.eq) goto loc_823F6408;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823f6408
	if (!ctx.cr6.eq) goto loc_823F6408;
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823f6408
	if (!ctx.cr6.eq) goto loc_823F6408;
	// lwz r11,220(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x823f6408
	if (!ctx.cr6.eq) goto loc_823F6408;
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x823f6408
	if (!ctx.cr6.eq) goto loc_823F6408;
	// lwz r10,176(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x823f6408
	if (!ctx.cr6.eq) goto loc_823F6408;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x823f6408
	if (ctx.cr6.gt) goto loc_823F6408;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x823f6408
	if (!ctx.cr6.eq) goto loc_823F6408;
	// lwz r10,180(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x823f6408
	if (!ctx.cr6.eq) goto loc_823F6408;
	// lwz r10,320(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823f6408
	if (!ctx.cr6.eq) goto loc_823F6408;
	// lwz r9,120(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823f6408
	if (!ctx.cr6.eq) goto loc_823F6408;
	// lwz r11,204(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_823F6408:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F9ED8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r10,-1(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + -1);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
	// b 0x823cd250
	sub_823CD250(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823F9F60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823F9F68;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,12(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x8247d550
	ctx.lr = 0x823F9F8C;
	sub_8247D550(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f9fb4
	if (ctx.cr6.eq) goto loc_823F9FB4;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r10,65
	ctx.r10.s64 = 65;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823F9FB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F9FB4:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8247d468
	ctx.lr = 0x823F9FC8;
	sub_8247D468(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// beq cr6,0x823f9ff0
	if (ctx.cr6.eq) goto loc_823F9FF0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r10,64
	ctx.r10.s64 = 64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823F9FF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F9FF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823FB9F0) {
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
	// lwz r30,432(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 432);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823fba60
	if (ctx.cr6.eq) goto loc_823FBA60;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823fba48
	if (ctx.cr6.eq) goto loc_823FBA48;
	// bl 0x823fb0a8
	ctx.lr = 0x823FBA28;
	sub_823FB0A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fba48
	if (ctx.cr6.eq) goto loc_823FBA48;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-19896
	ctx.r9.s64 = ctx.r11.s64 + -19896;
	// stw r9,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// stw r10,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r10.u32);
	// b 0x823fba68
	goto loc_823FBA68;
loc_823FBA48:
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-20752
	ctx.r9.s64 = ctx.r11.s64 + -20752;
	// stw r9,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// stw r10,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r10.u32);
	// b 0x823fba68
	goto loc_823FBA68;
loc_823FBA60:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r11.u32);
loc_823FBA68:
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

DEFINE_REX_FUNC(sub_823FDB98) {
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
	ctx.lr = 0x823FDBA0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,84
	ctx.r5.s64 = 84;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FDBC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32192
	ctx.r9.s64 = -2109734912;
	// stw r3,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r3.u32);
	// li r30,0
	r30.s64 = 0;
	// addi r8,r9,-10352
	ctx.r8.s64 = ctx.r9.s64 + -10352;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// ble cr6,0x823fdc30
	if (!ctx.cr6.gt) goto loc_823FDC30;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
	// addi r28,r3,40
	r28.s64 = ctx.r3.s64 + 40;
	// li r27,-1
	r27.s64 = -1;
loc_823FDBF0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FDC0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// stwu r3,84(r29)
	ea = 84 + r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r29.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x823FDC1C;
	sub_822D5870(ctx, base);
	// stwu r27,4(r28)
	ea = 4 + r28.u32;
	REX_STORE_U32(ea, r27.u32);
	r28.u32 = ea;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823fdbf0
	if (ctx.cr6.lt) goto loc_823FDBF0;
loc_823FDC30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823FF258) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823FF260;
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
	ctx.lr = 0x823FF280;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32214
	ctx.r9.s64 = -2111176704;
	// stw r3,460(r31)
	REX_STORE_U32(r31.u32 + 460, ctx.r3.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r8,r9,-22768
	ctx.r8.s64 = ctx.r9.s64 + -22768;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823ff2ec
	if (ctx.cr6.gt) goto loc_823FF2EC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823ff2cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823FF2CC;
	// bdzf 4*cr6+eq,0x823ff2cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823FF2CC;
	// bdzf 4*cr6+eq,0x823ff2dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823FF2DC;
	// bne cr6,0x823ff2dc
	if (!ctx.cr6.eq) goto loc_823FF2DC;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823ff318
	if (ctx.cr6.eq) goto loc_823FF318;
	// b 0x823ff2f8
	goto loc_823FF2F8;
loc_823FF2CC:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823ff318
	if (ctx.cr6.eq) goto loc_823FF318;
	// b 0x823ff2f8
	goto loc_823FF2F8;
loc_823FF2DC:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x823ff318
	if (ctx.cr6.eq) goto loc_823FF318;
	// b 0x823ff2f8
	goto loc_823FF2F8;
loc_823FF2EC:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x823ff318
	if (!ctx.cr6.lt) goto loc_823FF318;
loc_823FF2F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,10
	ctx.r10.s64 = 10;
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
	ctx.lr = 0x823FF318;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FF318:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823ff460
	if (ctx.cr6.eq) goto loc_823FF460;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823ff3a0
	if (ctx.cr6.eq) goto loc_823FF3A0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x823ff35c
	if (ctx.cr6.eq) goto loc_823FF35C;
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823ff478
	if (!ctx.cr6.eq) goto loc_823FF478;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// addi r9,r10,-5928
	ctx.r9.s64 = ctx.r10.s64 + -5928;
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// stw r9,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// b 0x823ff4e0
	goto loc_823FF4E0;
loc_823FF35C:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x823ff388
	if (!ctx.cr6.eq) goto loc_823FF388;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-5656
	ctx.r10.s64 = ctx.r11.s64 + -5656;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// bl 0x823fe6e8
	ctx.lr = 0x823FF384;
	sub_823FE6E8(ctx, base);
	// b 0x823ff4e0
	goto loc_823FF4E0;
loc_823FF388:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x823ff478
	if (!ctx.cr6.eq) goto loc_823FF478;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// addi r10,r11,-5928
	ctx.r10.s64 = ctx.r11.s64 + -5928;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// b 0x823ff4e0
	goto loc_823FF4E0;
loc_823FF3A0:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823ff3cc
	if (!ctx.cr6.eq) goto loc_823FF3CC;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-6136
	ctx.r10.s64 = ctx.r11.s64 + -6136;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// bl 0x823fe6e8
	ctx.lr = 0x823FF3C8;
	sub_823FE6E8(ctx, base);
	// b 0x823ff4e0
	goto loc_823FF4E0;
loc_823FF3CC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823ff3e4
	if (!ctx.cr6.eq) goto loc_823FF3E4;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// addi r10,r11,-5760
	ctx.r10.s64 = ctx.r11.s64 + -5760;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// b 0x823ff4e0
	goto loc_823FF4E0;
loc_823FF3E4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823ff3fc
	if (!ctx.cr6.eq) goto loc_823FF3FC;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// addi r10,r11,-5928
	ctx.r10.s64 = ctx.r11.s64 + -5928;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// b 0x823ff4e0
	goto loc_823FF4E0;
loc_823FF3FC:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x823ff41c
	if (!ctx.cr6.eq) goto loc_823FF41C;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// addi r10,r11,-4312
	ctx.r10.s64 = ctx.r11.s64 + -4312;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// bl 0x823fead8
	ctx.lr = 0x823FF418;
	sub_823FEAD8(ctx, base);
	// b 0x823ff4e0
	goto loc_823FF4E0;
loc_823FF41C:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x823ff440
	if (!ctx.cr6.eq) goto loc_823FF440;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// addi r10,r11,-3952
	ctx.r10.s64 = ctx.r11.s64 + -3952;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// bl 0x823fe6e8
	ctx.lr = 0x823FF434;
	sub_823FE6E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823fead8
	ctx.lr = 0x823FF43C;
	sub_823FEAD8(ctx, base);
	// b 0x823ff4e0
	goto loc_823FF4E0;
loc_823FF440:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823FF45C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823ff4e0
	goto loc_823FF4E0;
loc_823FF460:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r29,120(r31)
	REX_STORE_U32(r31.u32 + 120, r29.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823ff49c
	if (ctx.cr6.eq) goto loc_823FF49C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823ff49c
	if (ctx.cr6.eq) goto loc_823FF49C;
loc_823FF478:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
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
	ctx.lr = 0x823FF498;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823ff4e0
	goto loc_823FF4E0;
loc_823FF49C:
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// addi r9,r10,-5792
	ctx.r9.s64 = ctx.r10.s64 + -5792;
	// stw r9,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// lwz r8,36(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x823ff4e0
	if (!ctx.cr6.gt) goto loc_823FF4E0;
	// li r10,84
	ctx.r10.s64 = 84;
	// li r8,0
	ctx.r8.s64 = 0;
loc_823FF4C0:
	// lwz r9,220(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 220);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 + 84;
	// stw r8,48(r9)
	REX_STORE_U32(ctx.r9.u32 + 48, ctx.r8.u32);
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823ff4c0
	if (ctx.cr6.lt) goto loc_823FF4C0;
loc_823FF4E0:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ff4f8
	if (ctx.cr6.eq) goto loc_823FF4F8;
	// stw r29,124(r31)
	REX_STORE_U32(r31.u32 + 124, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_823FF4F8:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_824094F8) {
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
	ctx.lr = 0x82409500;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// stw r7,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r7.u32);
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// stw r8,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r8.u32);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// li r14,0
	r14.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82409540
	if (!ctx.cr6.eq) goto loc_82409540;
	// stw r4,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// addi r21,r1,112
	r21.s64 = ctx.r1.s64 + 112;
	// stw r5,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// stw r14,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r14.u32);
	// stw r14,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r14.u32);
loc_82409540:
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lwz r9,12(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 12);
	// lwz r8,4(r21)
	ctx.r8.u64 = REX_LOAD_U32(r21.u32 + 4);
	// subf r17,r10,r11
	r17.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r26,r8,r9
	r26.u64 = ctx.r9.u64 - ctx.r8.u64;
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// bne cr6,0x82409574
	if (!ctx.cr6.eq) goto loc_82409574;
	// stw r14,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r14.u32);
	// addi r20,r1,104
	r20.s64 = ctx.r1.s64 + 104;
	// stw r14,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r14.u32);
loc_82409574:
	// addi r11,r4,31
	ctx.r11.s64 = ctx.r4.s64 + 31;
	// cmplw cr6,r28,r18
	ctx.cr6.compare<uint32_t>(r28.u32, r18.u32, ctx.xer);
	// rlwinm r27,r11,0,0,26
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// bne cr6,0x824095bc
	if (!ctx.cr6.eq) goto loc_824095BC;
	// addi r11,r5,31
	ctx.r11.s64 = ctx.r5.s64 + 31;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r27.s32);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r30,r11,0,0,19
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823cd118
	ctx.lr = 0x824095A8;
	sub_823CD118(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// bl 0x824092c8
	ctx.lr = 0x824095B8;
	sub_824092C8(ctx, base);
	// b 0x824095c0
	goto loc_824095C0;
loc_824095BC:
	// mr r19,r28
	r19.u64 = r28.u64;
loc_824095C0:
	// rlwinm r10,r31,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
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
	// bgt cr6,0x82409620
	if (ctx.cr6.gt) goto loc_82409620;
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
loc_82409620:
	// slw r11,r11,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r29.u8 & 0x3F));
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824098ac
	if (ctx.cr6.eq) goto loc_824098AC;
	// rlwinm r11,r27,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 27) & 0x7FFFFFF;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82409638:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// lwz r8,0(r20)
	ctx.r8.u64 = REX_LOAD_U32(r20.u32 + 0);
	// add r11,r14,r11
	ctx.r11.u64 = r14.u64 + ctx.r11.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r10,r8,29
	ctx.r10.u64 = ctx.r8.u32 & 0x7;
	// lwz r7,4(r21)
	ctx.r7.u64 = REX_LOAD_U32(r21.u32 + 4);
	// rlwinm r28,r11,2,27,28
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x18;
	// lwz r4,0(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 0);
	// rlwinm r6,r11,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r3,348(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// add r31,r10,r28
	r31.u64 = ctx.r10.u64 + r28.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mullw r27,r6,r9
	r27.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// rlwinm r10,r8,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// slw r9,r31,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (r31.u32 << (r30.u8 & 0x3F));
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
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
	// slw r25,r31,r30
	r25.u64 = r30.u8 & 0x20 ? 0 : (r31.u32 << (r30.u8 & 0x3F));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r26,r11,30,30,30
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x2;
	// rlwinm r9,r8,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r24,r11,4,27,27
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x10;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + r26.u64;
	// rlwinm r23,r11,28,31,31
	r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// rlwinm r11,r9,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// srawi r9,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 6;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// clrlwi r6,r9,29
	ctx.r6.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r9,r11,3,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x8;
	// rlwinm r8,r11,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// add r11,r9,r6
	ctx.r11.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r9,r10,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFE00;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r14,r7
	ctx.r7.u64 = r14.u64 + ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// slw r8,r4,r29
	ctx.r8.u64 = r29.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r29.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r22,r7,r3
	r22.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r22
	ctx.r10.u64 = ctx.r8.u64 + r22.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r10,r19
	ctx.r4.u64 = ctx.r10.u64 + r19.u64;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + r18.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82409714;
	sub_822D4FA0(ctx, base);
	// mr r31,r15
	r31.u64 = r15.u64;
	// cmpw cr6,r15,r16
	ctx.cr6.compare<int32_t>(r15.s32, r16.s32, ctx.xer);
	// bge cr6,0x824097e4
	if (!ctx.cr6.lt) goto loc_824097E4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// slw r17,r11,r29
	r17.u64 = r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r29.u8 & 0x3F));
loc_82409728:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + r31.u64;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
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
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + r26.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + r23.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// rlwinm r8,r10,3,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// srawi r9,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 6;
	// rlwinm r6,r10,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r10,r9,29
	ctx.r10.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r8,r4,r29
	ctx.r8.u64 = r29.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r29.u8 & 0x3F));
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r8,r8,r22
	ctx.r8.u64 = ctx.r8.u64 + r22.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r8,r19
	ctx.r4.u64 = ctx.r8.u64 + r19.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + r18.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x824097D0;
	sub_822D4FA0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// cmpw cr6,r31,r16
	ctx.cr6.compare<int32_t>(r31.s32, r16.s32, ctx.xer);
	// blt cr6,0x82409728
	if (ctx.cr6.lt) goto loc_82409728;
	// lwz r17,92(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_824097E4:
	// cmplw cr6,r31,r17
	ctx.cr6.compare<uint32_t>(r31.u32, r17.u32, ctx.xer);
	// bge cr6,0x82409898
	if (!ctx.cr6.lt) goto loc_82409898;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// subf r5,r31,r17
	ctx.r5.u64 = r17.u64 - r31.u64;
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + r31.u64;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// slw r9,r9,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r30.u8 & 0x3F));
	// rlwinm r6,r9,26,6,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// slw r10,r10,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r8,r6,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r6,28
	ctx.r10.u64 = ctx.r6.u32 & 0xF;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + r26.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + r23.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// rlwinm r9,r10,3,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// srawi r8,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 6;
	// rlwinm r6,r10,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r10,r8,29
	ctx.r10.u64 = ctx.r8.u32 & 0x7;
	// rlwinm r8,r11,0,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// slw r9,r7,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r29.u8 & 0x3F));
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r11,r9,r22
	ctx.r11.u64 = ctx.r9.u64 + r22.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + r19.u64;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// slw r5,r5,r29
	ctx.r5.u64 = r29.u8 & 0x20 ? 0 : (ctx.r5.u32 << (r29.u8 & 0x3F));
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + r18.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82409898;
	sub_822D4FA0(ctx, base);
loc_82409898:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// cmplw cr6,r14,r11
	ctx.cr6.compare<uint32_t>(r14.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82409638
	if (ctx.cr6.lt) goto loc_82409638;
	// lwz r28,340(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
loc_824098AC:
	// cmplw cr6,r28,r18
	ctx.cr6.compare<uint32_t>(r28.u32, r18.u32, ctx.xer);
	// bne cr6,0x824098c0
	if (!ctx.cr6.eq) goto loc_824098C0;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x823cd250
	ctx.lr = 0x824098C0;
	sub_823CD250(ctx, base);
loc_824098C0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8241B130) {
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
	// bge cr6,0x8241b1b4
	if (!ctx.cr6.lt) goto loc_8241B1B4;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-13044(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -13044);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
loc_8241B184:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
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
	// bdnz 0x8241b184
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241B184;
loc_8241B1B4:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241b1d0
	if (ctx.cr6.eq) goto loc_8241B1D0;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x8241B1D0;
	sub_82413D40(ctx, base);
loc_8241B1D0:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241b1ec
	if (ctx.cr6.eq) goto loc_8241B1EC;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82414110
	ctx.lr = 0x8241B1EC;
	sub_82414110(ctx, base);
loc_8241B1EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8241CB00) {
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
	// bl 0x8241c5e8
	ctx.lr = 0x8241CB34;
	sub_8241C5E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8241cb94
	if (ctx.cr0.lt) goto loc_8241CB94;
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
	ctx.lr = 0x8241CB64;
	sub_822D4FA0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241cb7c
	if (ctx.cr6.eq) goto loc_8241CB7C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413d40
	ctx.lr = 0x8241CB7C;
	sub_82413D40(ctx, base);
loc_8241CB7C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241cb94
	if (ctx.cr6.eq) goto loc_8241CB94;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82414110
	ctx.lr = 0x8241CB94;
	sub_82414110(ctx, base);
loc_8241CB94:
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

DEFINE_REX_FUNC(sub_8241E7E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8241E7F0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8241e81c
	if (ctx.cr6.eq) goto loc_8241E81C;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x8240e930
	ctx.lr = 0x8241E81C;
	sub_8240E930(ctx, base);
loc_8241E81C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8241e858
	if (ctx.cr6.eq) goto loc_8241E858;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8241e858
	if (ctx.cr6.eq) goto loc_8241E858;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
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
	// li r6,10
	ctx.r6.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,40(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// bctrl 
	ctx.lr = 0x8241E858;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241E858:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8241FB48) {
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
	ctx.lr = 0x8241FB50;
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
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8241fb90
	if (!ctx.cr6.eq) goto loc_8241FB90;
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
	// li r7,1932
	ctx.r7.s64 = 1932;
	// bl 0x8240e308
	ctx.lr = 0x8241FB90;
	sub_8240E308(ctx, base);
loc_8241FB90:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e880
	ctx.lr = 0x8241FBA0;
	sub_8240E880(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e880
	ctx.lr = 0x8241FBB4;
	sub_8240E880(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8241fc24
	if (!ctx.cr6.eq) goto loc_8241FC24;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// bne cr6,0x8241fc24
	if (!ctx.cr6.eq) goto loc_8241FC24;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8241fbe0
	if (ctx.cr6.eq) goto loc_8241FBE0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8240e930
	ctx.lr = 0x8241FBE0;
	sub_8240E930(ctx, base);
loc_8241FBE0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8241fc1c
	if (ctx.cr6.eq) goto loc_8241FC1C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8241fc1c
	if (ctx.cr6.eq) goto loc_8241FC1C;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18772
	ctx.r4.s64 = ctx.r10.s64 + -18772;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,44
	ctx.r6.s64 = 44;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// bctrl 
	ctx.lr = 0x8241FC1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241FC1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8241fc80
	goto loc_8241FC80;
loc_8241FC24:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8241fc40
	if (ctx.cr6.eq) goto loc_8241FC40;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8240e930
	ctx.lr = 0x8241FC40;
	sub_8240E930(ctx, base);
loc_8241FC40:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8241fc7c
	if (ctx.cr6.eq) goto loc_8241FC7C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8241fc7c
	if (ctx.cr6.eq) goto loc_8241FC7C;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18772
	ctx.r4.s64 = ctx.r10.s64 + -18772;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,44
	ctx.r6.s64 = 44;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// bctrl 
	ctx.lr = 0x8241FC7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241FC7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241FC80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82422560) {
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
	ctx.lr = 0x82422568;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,16880
	r29.s64 = ctx.r11.s64 + 16880;
	// addi r28,r10,-18872
	r28.s64 = ctx.r10.s64 + -18872;
	// bne cr6,0x824225b4
	if (!ctx.cr6.eq) goto loc_824225B4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,16968
	ctx.r5.s64 = ctx.r11.s64 + 16968;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,619
	ctx.r7.s64 = 619;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x824225B4;
	sub_8240E308(ctx, base);
loc_824225B4:
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(r30.s32, 16, ctx.xer);
	// blt cr6,0x824225d8
	if (ctx.cr6.lt) goto loc_824225D8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-18404
	ctx.r5.s64 = ctx.r11.s64 + -18404;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,620
	ctx.r7.s64 = 620;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x824225D8;
	sub_8240E308(ctx, base);
loc_824225D8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x824225fc
	if (!ctx.cr6.lt) goto loc_824225FC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-18416
	ctx.r5.s64 = ctx.r11.s64 + -18416;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,621
	ctx.r7.s64 = 621;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x824225FC;
	sub_8240E308(ctx, base);
loc_824225FC:
	// li r4,135
	ctx.r4.s64 = 135;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e810
	ctx.lr = 0x82422608;
	sub_8240E810(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e880
	ctx.lr = 0x8242261C;
	sub_8240E880(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8242268c
	if (!ctx.cr6.eq) goto loc_8242268C;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(r29.u32, 1, ctx.xer);
	// bne cr6,0x8242268c
	if (!ctx.cr6.eq) goto loc_8242268C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82422648
	if (ctx.cr6.eq) goto loc_82422648;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8240e930
	ctx.lr = 0x82422648;
	sub_8240E930(ctx, base);
loc_82422648:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82422684
	if (ctx.cr6.eq) goto loc_82422684;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82422684
	if (ctx.cr6.eq) goto loc_82422684;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18772
	ctx.r4.s64 = ctx.r10.s64 + -18772;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bctrl 
	ctx.lr = 0x82422684;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82422684:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824226e8
	goto loc_824226E8;
loc_8242268C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824226a8
	if (ctx.cr6.eq) goto loc_824226A8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8240e930
	ctx.lr = 0x824226A8;
	sub_8240E930(ctx, base);
loc_824226A8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824226e4
	if (ctx.cr6.eq) goto loc_824226E4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x824226e4
	if (ctx.cr6.eq) goto loc_824226E4;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18772
	ctx.r4.s64 = ctx.r10.s64 + -18772;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bctrl 
	ctx.lr = 0x824226E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824226E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824226E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82428F38) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-2808
	ctx.r3.s64 = ctx.r11.s64 + -2808;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82428FF0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31228
	ctx.r3.s64 = ctx.r11.s64 + 31228;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824292B0) {
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
	// li r4,136
	ctx.r4.s64 = 136;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82428a88
	ctx.lr = 0x824292D4;
	sub_82428A88(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-1648
	ctx.r11.s64 = ctx.r11.s64 + -1648;
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
	ctx.lr = 0x82429308;
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

DEFINE_REX_FUNC(sub_82429F58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82429F60;
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
	ctx.lr = 0x82429F80;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// beq 0x82429fa4
	if (ctx.cr0.eq) goto loc_82429FA4;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82428330
	ctx.lr = 0x82429FA0;
	sub_82428330(ctx, base);
	// b 0x82429fa8
	goto loc_82429FA8;
loc_82429FA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82429FA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8242C5B8) {
	REX_FUNC_PROLOGUE();
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
}

DEFINE_REX_FUNC(sub_8242C618) {
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,22588
	ctx.r10.s64 = ctx.r10.s64 + 22588;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
loc_8242C634:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8242c654
	if (!ctx.cr0.eq) goto loc_8242C654;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8242c634
	if (!ctx.cr6.eq) goto loc_8242C634;
loc_8242C654:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8242c678
	if (!ctx.cr0.eq) goto loc_8242C678;
	// stw r3,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242C670;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8242c688
	goto loc_8242C688;
loc_8242C678:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// ori r3,r3,16386
	ctx.r3.u64 = ctx.r3.u64 | 16386;
loc_8242C688:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8242DD48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8242DD50;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// addi r30,r3,116
	r30.s64 = ctx.r3.s64 + 116;
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
	ctx.lr = 0x8242DD74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,548
	ctx.r3.s64 = r31.s64 + 548;
	// bl 0x82438e18
	ctx.lr = 0x8242DD80;
	sub_82438E18(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lis r9,-32761
	ctx.r9.s64 = -2147024896;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r9,r9,14
	ctx.r9.u64 = ctx.r9.u64 | 14;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// and r31,r10,r9
	r31.u64 = ctx.r10.u64 & ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242DDA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82431A38) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lfs f12,21052(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 21052);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,32(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// bne cr6,0x82431ae8
	if (!ctx.cr6.eq) goto loc_82431AE8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r9,72
	ctx.r9.s64 = 72;
loc_82431A84:
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// std r4,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f12,f11
	ctx.f12.f64 = double(float(ctx.f11.f64));
	// dcbt r11,r8
	// dcbt r10,r9
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82431acc
	if (ctx.cr6.eq) goto loc_82431ACC;
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f0,f11
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfs f10,0(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f9,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f9.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmadds f8,f12,f13,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x82431adc
	goto loc_82431ADC;
loc_82431ACC:
	// fmuls f11,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfsu f10,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
loc_82431ADC:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82431a84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82431A84;
	// blr 
	return;
loc_82431AE8:
	// lfs f11,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f10,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r9,72
	ctx.r9.s64 = 72;
loc_82431B0C:
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// std r4,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// frsp f12,f9
	ctx.f12.f64 = double(float(ctx.f9.f64));
	// dcbt r11,r8
	// dcbt r10,r9
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82431b54
	if (ctx.cr6.eq) goto loc_82431B54;
	// lfs f9,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f12,f0,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f7,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f7.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmadds f6,f12,f13,f7
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f7.f64)));
	// stfs f6,0(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x82431b64
	goto loc_82431B64;
loc_82431B54:
	// fmuls f9,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfsu f8,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
loc_82431B64:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fadds f0,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// bdnz 0x82431b0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82431B0C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82436BE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82436BF0;
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82436C18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82435b40
	ctx.lr = 0x82436C20;
	sub_82435B40(ctx, base);
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82436c40
	if (ctx.cr6.eq) goto loc_82436C40;
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82436c40
	if (ctx.cr6.eq) goto loc_82436C40;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82436c44
	goto loc_82436C44;
loc_82436C40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82436C44:
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// rlwinm. r10,r29,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// bne 0x82436c70
	if (!ctx.cr0.eq) goto loc_82436C70;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// ld r10,536(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 536);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// tdllei r11,0
	if (ctx.r11.s64 == 0ll || ctx.r11.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 ? ctx.r10.u64 / ctx.r11.u64 : 0;
	// std r11,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r11.u64);
loc_82436C70:
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
	ctx.lr = 0x82436C88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82438A10) {
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
	ctx.lr = 0x82438A18;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,568(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 568);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82438a34
	if (ctx.cr6.eq) goto loc_82438A34;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82438a38
	goto loc_82438A38;
loc_82438A34:
	// li r29,0
	r29.s64 = 0;
loc_82438A38:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// lwz r8,492(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 492);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r9,510(r31)
	REX_STORE_U8(r31.u32 + 510, ctx.r9.u8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r25,r11,-128
	r25.s64 = ctx.r11.s64 + -128;
	// ble cr6,0x82438ad8
	if (!ctx.cr6.gt) goto loc_82438AD8;
	// lwz r27,80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r24,r25,23,9,31
	r24.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 23) & 0x7FFFFF;
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r26,r31,500
	r26.s64 = r31.s64 + 500;
loc_82438A70:
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// bl 0x82437df0
	ctx.lr = 0x82438A84;
	sub_82437DF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82438a94
	if (ctx.cr0.eq) goto loc_82438A94;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r27,r25,25,30,31
	r27.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 25) & 0x3;
loc_82438A94:
	// stw r28,504(r31)
	REX_STORE_U32(r31.u32 + 504, r28.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stb r27,508(r31)
	REX_STORE_U8(r31.u32 + 508, r27.u8);
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// bl 0x82437ed0
	ctx.lr = 0x82438AAC;
	sub_82437ED0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r3,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stb r11,509(r31)
	REX_STORE_U8(r31.u32 + 509, ctx.r11.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,516(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 516);
	// bl 0x8243bdf8
	ctx.lr = 0x82438AC8;
	sub_8243BDF8(ctx, base);
	// lwz r11,492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 492);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82438a70
	if (ctx.cr6.lt) goto loc_82438A70;
loc_82438AD8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8243B520) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82443df8
	sub_82443DF8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8243B560) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8243c8c0
	sub_8243C8C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8243B940) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mulli r11,r4,96
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(96));
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bne 0x8243b960
	if (!ctx.cr0.eq) goto loc_8243B960;
	// lwz r11,64(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 64);
loc_8243B960:
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r7,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8243b99c
	if (ctx.cr0.eq) goto loc_8243B99C;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r10,r9,5,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x1F;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8243b98c
	if (ctx.cr6.lt) goto loc_8243B98C;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// b 0x8243b9a4
	goto loc_8243B9A4;
loc_8243B98C:
	// rlwinm r9,r9,10,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x1F;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8243b9a4
	goto loc_8243B9A4;
loc_8243B99C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,10,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1F;
loc_8243B9A4:
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lhz r9,82(r8)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + 82);
	// rlwinm r11,r7,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r3,r10,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243D8A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8243d928
	if (!ctx.cr6.eq) goto loc_8243D928;
	// addi r9,r3,64
	ctx.r9.s64 = ctx.r3.s64 + 64;
loc_8243D8B8:
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// xori r6,r11,1
	ctx.r6.u64 = ctx.r11.u64 ^ 1;
	// mulli r10,r11,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// mulli r11,r6,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(12));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
loc_8243D8D8:
	// mfmsr r7
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r7.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r8,0,r9
	ea = ctx.r9.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8243d8fc
	if (!ctx.cr6.eq) goto loc_8243D8FC;
	// stwcx. r11,0,r9
	ea = ctx.r9.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8243d8d8
	if (!ctx.cr0.eq) goto loc_8243D8D8;
	// b 0x8243d904
	goto loc_8243D904;
loc_8243D8FC:
	// stwcx. r8,0,r9
	ea = ctx.r9.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8243D904:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwsync 
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x8243d91c
	if (!ctx.cr6.eq) goto loc_8243D91C;
	// db16cyc 
	std::this_thread::yield();
	// b 0x8243d8b8
	goto loc_8243D8B8;
loc_8243D91C:
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
loc_8243D928:
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r9,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824413C8) {
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
	ctx.lr = 0x824413D0;
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244140C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// addi r5,r29,4
	ctx.r5.s64 = r29.s64 + 4;
	// bne cr6,0x8244141c
	if (!ctx.cr6.eq) goto loc_8244141C;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8244141C:
	// lwz r4,308(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r31,68(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 68);
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
	// stw r4,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x8245e410
	ctx.lr = 0x82441464;
	sub_8245E410(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82441478
	if (ctx.cr0.lt) goto loc_82441478;
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82441478:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244148C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82443528) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82443530;
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
	ctx.lr = 0x82443558;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82443348
	ctx.lr = 0x82443564;
	sub_82443348(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82443108
	ctx.lr = 0x82443570;
	sub_82443108(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82443584;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82444998) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x824449A0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x824448f0
	ctx.lr = 0x824449AC;
	sub_824448F0(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// lwz r30,88(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824449d0
	if (ctx.cr6.eq) goto loc_824449D0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82442c10
	ctx.lr = 0x824449C4;
	sub_82442C10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82473600
	ctx.lr = 0x824449CC;
	sub_82473600(ctx, base);
	// stw r29,88(r31)
	REX_STORE_U32(r31.u32 + 88, r29.u32);
loc_824449D0:
	// lwz r3,168(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lis r11,4919
	ctx.r11.s64 = 322371584;
	// ori r30,r11,61441
	r30.u64 = ctx.r11.u64 | 61441;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82444a0c
	if (ctx.cr6.eq) goto loc_82444A0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824449FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,168(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// bl 0x8242c888
	ctx.lr = 0x82444A08;
	sub_8242C888(ctx, base);
	// stw r29,168(r31)
	REX_STORE_U32(r31.u32 + 168, r29.u32);
loc_82444A0C:
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82444a40
	if (ctx.cr6.eq) goto loc_82444A40;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82444A30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,172(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// bl 0x8242c888
	ctx.lr = 0x82444A3C;
	sub_8242C888(ctx, base);
	// stw r29,172(r31)
	REX_STORE_U32(r31.u32 + 172, r29.u32);
loc_82444A40:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82444a6c
	if (ctx.cr6.eq) goto loc_82444A6C;
loc_82444A4C:
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
	// bne 0x82444a4c
	if (!ctx.cr0.eq) goto loc_82444A4C;
	// stw r29,160(r31)
	REX_STORE_U32(r31.u32 + 160, r29.u32);
loc_82444A6C:
	// lwz r3,116(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82444a80
	if (ctx.cr6.eq) goto loc_82444A80;
	// bl 0x82473600
	ctx.lr = 0x82444A7C;
	sub_82473600(ctx, base);
	// stw r29,116(r31)
	REX_STORE_U32(r31.u32 + 116, r29.u32);
loc_82444A80:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,180(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82444A9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_824506C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,9776(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 9776);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82451840) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f11,-25520(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -25520);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,27544(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 27544);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,2024(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2024);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x82451968
	if (ctx.cr6.lt) goto loc_82451968;
	// addi r8,r5,-3
	ctx.r8.s64 = ctx.r5.s64 + -3;
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// subf r7,r3,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r3.u64;
loc_82451874:
	// lfs f0,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82451888
	if (!ctx.cr6.lt) goto loc_82451888;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82451894
	goto loc_82451894;
loc_82451888:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82451894
	if (!ctx.cr6.gt) goto loc_82451894;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82451894:
	// fmuls f10,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfsx f0,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r6,-12(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r6,r6,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// stw r6,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r6.u32);
	// bge cr6,0x824518c0
	if (!ctx.cr6.lt) goto loc_824518C0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x824518cc
	goto loc_824518CC;
loc_824518C0:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x824518cc
	if (!ctx.cr6.gt) goto loc_824518CC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_824518CC:
	// fmuls f10,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f0,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r6,-12(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r6,r6,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// bge cr6,0x824518f8
	if (!ctx.cr6.lt) goto loc_824518F8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82451904
	goto loc_82451904;
loc_824518F8:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82451904
	if (!ctx.cr6.gt) goto loc_82451904;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82451904:
	// fmuls f10,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r6,-12(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r6,r6,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// bge cr6,0x82451930
	if (!ctx.cr6.lt) goto loc_82451930;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8245193c
	goto loc_8245193C;
loc_82451930:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8245193c
	if (!ctx.cr6.gt) goto loc_8245193C;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8245193C:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// fctiwz f10,f0
	ctx.f10.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f10.u64);
	// lwz r6,-12(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r6,r6,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x82451874
	if (ctx.cr6.lt) goto loc_82451874;
loc_82451968:
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r8,r9,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82451984:
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82451998
	if (!ctx.cr6.lt) goto loc_82451998;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x824519a4
	goto loc_824519A4;
loc_82451998:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x824519a4
	if (!ctx.cr6.gt) goto loc_824519A4;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_824519A4:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fctiwz f10,f0
	ctx.f10.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f10.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r8,r9,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82451984
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82451984;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245B368) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x8245b374
	if (!ctx.cr6.eq) goto loc_8245B374;
	// b 0x824563e0
	sub_824563E0(ctx, base);
	return;
loc_8245B374:
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x8245b380
	if (!ctx.cr6.eq) goto loc_8245B380;
	// b 0x82456990
	sub_82456990(ctx, base);
	return;
loc_8245B380:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x8245b38c
	if (!ctx.cr6.eq) goto loc_8245B38C;
	// b 0x82456938
	sub_82456938(ctx, base);
	return;
loc_8245B38C:
	// b 0x82456b70
	sub_82456B70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8245BD00) {
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
	// bl 0x8245b3d0
	ctx.lr = 0x8245BD1C;
	sub_8245B3D0(ctx, base);
	// addis r30,r31,3
	r30.s64 = r31.s64 + 196608;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r30,r30,23248
	r30.s64 = r30.s64 + 23248;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d5870
	ctx.lr = 0x8245BD34;
	sub_822D5870(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,20
	ctx.r11.s64 = 20;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,1040(r30)
	REX_STORE_U32(r30.u32 + 1040, ctx.r11.u32);
	// lfs f13,30916(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 30916);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,1024(r30)
	REX_STORE_U32(r30.u32 + 1024, ctx.r8.u32);
	// lfs f0,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,1044(r30)
	REX_STORE_U32(r30.u32 + 1044, ctx.r11.u32);
	// stfs f13,1052(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 1052, temp.u32);
	// stw r11,1048(r30)
	REX_STORE_U32(r30.u32 + 1048, ctx.r11.u32);
	// stfs f0,1056(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 1056, temp.u32);
	// stfs f0,1060(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 1060, temp.u32);
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

DEFINE_REX_FUNC(sub_8245C978) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8245c8b8
	ctx.lr = 0x8245C994;
	sub_8245C8B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245C9A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823cd980
	ctx.lr = 0x8245C9BC;
	sub_823CD980(ctx, base);
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

DEFINE_REX_FUNC(sub_8245D5C0) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,30920
	ctx.r11.s64 = ctx.r11.s64 + 30920;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8245d608
	if (ctx.cr6.eq) goto loc_8245D608;
	// bl 0x8245d118
	ctx.lr = 0x8245D5F0;
	sub_8245D118(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x8245cf68
	ctx.lr = 0x8245D5F8;
	sub_8245CF68(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x8245cf68
	ctx.lr = 0x8245D600;
	sub_8245CF68(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x8245cf68
	ctx.lr = 0x8245D608;
	sub_8245CF68(ctx, base);
loc_8245D608:
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

DEFINE_REX_FUNC(sub_8245E238) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8245e128
	sub_8245E128(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8245E258) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8245e1b0
	sub_8245E1B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8245E498) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8245E4A0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245E4C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8245f5a8
	ctx.lr = 0x8245E4D4;
	sub_8245F5A8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245E4F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8245EE68) {
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
	ctx.lr = 0x8245EE70;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245EE94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8245eebc
	if (!ctx.cr6.eq) goto loc_8245EEBC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8245eebc
	if (!ctx.cr6.eq) goto loc_8245EEBC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 148);
	// bl 0x82475598
	ctx.lr = 0x8245EEB4;
	sub_82475598(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8245ef2c
	goto loc_8245EF2C;
loc_8245EEBC:
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
	ctx.lr = 0x8245EED8;
	sub_8242C3B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8245eeec
	if (!ctx.cr0.eq) goto loc_8245EEEC;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x8245ef2c
	goto loc_8245EF2C;
loc_8245EEEC:
	// addic r11,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r11.s64 = r29.s64 + -1;
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// li r10,11
	ctx.r10.s64 = 11;
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
	// stw r28,16(r31)
	REX_STORE_U32(r31.u32 + 16, r28.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// bl 0x8245f9d8
	ctx.lr = 0x8245EF1C;
	sub_8245F9D8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x8245ef2c
	if (!ctx.cr0.lt) goto loc_8245EF2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x8245EF2C;
	sub_82473600(ctx, base);
loc_8245EF2C:
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245EF40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82460A08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82460A10;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r28,r11,28904
	r28.s64 = ctx.r11.s64 + 28904;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d438c
	ctx.lr = 0x82460A24;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,28888
	ctx.r3.s64 = ctx.r11.s64 + 28888;
	// bl 0x824d45dc
	ctx.lr = 0x82460A34;
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// li r29,8
	r29.s64 = 8;
	// addi r31,r11,9144
	r31.s64 = ctx.r11.s64 + 9144;
	// lis r30,-32162
	r30.s64 = -2107768832;
loc_82460A44:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82460a68
	if (ctx.cr6.eq) goto loc_82460A68;
	// bl 0x82460620
	ctx.lr = 0x82460A54;
	sub_82460620(ctx, base);
	// lwz r11,9176(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 9176);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,9176(r30)
	REX_STORE_U32(r30.u32 + 9176, ctx.r11.u32);
loc_82460A68:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x82460a44
	if (!ctx.cr0.eq) goto loc_82460A44;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d437c
	ctx.lr = 0x82460A7C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82463F88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// ble cr6,0x82463fa0
	if (!ctx.cr6.gt) goto loc_82463FA0;
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// b 0x82463fa4
	goto loc_82463FA4;
loc_82463FA0:
	// fneg f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_82463FA4:
	// fcmpu cr6,f2,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// ble cr6,0x82463fb4
	if (!ctx.cr6.gt) goto loc_82463FB4;
	// fmr f0,f2
	ctx.f0.f64 = ctx.f2.f64;
	// b 0x82463fb8
	goto loc_82463FB8;
loc_82463FB4:
	// fneg f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f2.u64 ^ 0x8000000000000000;
loc_82463FB8:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82463fd8
	if (!ctx.cr6.gt) goto loc_82463FD8;
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// ble cr6,0x82463fd0
	if (!ctx.cr6.gt) goto loc_82463FD0;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// b 0x82463fe4
	goto loc_82463FE4;
loc_82463FD0:
	// fneg f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// b 0x82463fe4
	goto loc_82463FE4;
loc_82463FD8:
	// fcmpu cr6,f2,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// bgt cr6,0x82463fe4
	if (ctx.cr6.gt) goto loc_82463FE4;
	// fneg f2,f2
	ctx.f2.u64 = ctx.f2.u64 ^ 0x8000000000000000;
loc_82463FE4:
	// lfs f0,132(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// blt cr6,0x82464010
	if (ctx.cr6.lt) goto loc_82464010;
	// lfs f0,140(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// lfs f12,144(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,104(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f9,f10,f13,f11
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f11.f64)));
	// fdivs f1,f9,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 / ctx.f2.f64));
	// b 0x82464040
	goto loc_82464040;
loc_82464010:
	// lfs f1,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,112(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82464030
	if (ctx.cr6.gt) goto loc_82464030;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82464030:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82464040:
	// lfs f0,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82464058
	if (ctx.cr6.gt) goto loc_82464058;
	// lfs f13,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,120(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// b 0x82464060
	goto loc_82464060;
loc_82464058:
	// lfs f13,124(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,128(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
loc_82464060:
	// fmuls f12,f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmadds f10,f11,f0,f12
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfs f10,112(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// fmuls f13,f10,f2
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// lfs f0,104(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82464088
	if (!ctx.cr6.gt) goto loc_82464088;
	// fdivs f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f2.f64));
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
loc_82464088:
	// lfs f1,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8246A340) {
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
	ctx.lr = 0x8246A348;
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
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r17,r20
	r17.u64 = r20.u64;
	// bl 0x82469ce0
	ctx.lr = 0x8246A36C;
	sub_82469CE0(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8246a5a4
	if (ctx.cr6.eq) goto loc_8246A5A4;
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8246a398
	if (!ctx.cr6.eq) goto loc_8246A398;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8246a5a4
	if (ctx.cr6.eq) goto loc_8246A5A4;
	// lwz r16,28(r26)
	r16.u64 = REX_LOAD_U32(r26.u32 + 28);
	// lwz r25,40(r26)
	r25.u64 = REX_LOAD_U32(r26.u32 + 40);
	// lwz r10,32(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 32);
	// b 0x8246a3ac
	goto loc_8246A3AC;
loc_8246A398:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8246a5a4
	if (ctx.cr6.eq) goto loc_8246A5A4;
	// lwz r16,4(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lhz r25,18(r30)
	r25.u64 = REX_LOAD_U16(r30.u32 + 18);
	// lhz r10,2(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 2);
loc_8246A3AC:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// ble cr6,0x8246a5a4
	if (!ctx.cr6.gt) goto loc_8246A5A4;
	// subfic r11,r25,24
	ctx.xer.ca = r25.u32 <= 24;
	ctx.r11.u64 = static_cast<uint64_t>(24) - r25.u64;
	// li r18,1
	r18.s64 = 1;
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8246a3e8
	if (ctx.cr6.lt) goto loc_8246A3E8;
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
	// b 0x8246a414
	goto loc_8246A414;
loc_8246A3E8:
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
loc_8246A414:
	// lwz r11,44(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 44);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// stw r11,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r11.u32);
	// bne cr6,0x8246a434
	if (!ctx.cr6.eq) goto loc_8246A434;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82320670
	ctx.lr = 0x8246A430;
	sub_82320670(ctx, base);
	// b 0x8246a654
	goto loc_8246A654;
loc_8246A434:
	// lwz r11,60(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8246a5a4
	if (ctx.cr6.lt) goto loc_8246A5A4;
	// lwz r11,64(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8246a5a4
	if (ctx.cr6.lt) goto loc_8246A5A4;
	// lwz r11,80(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8246a5a4
	if (ctx.cr6.lt) goto loc_8246A5A4;
	// lwz r11,84(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8246a5a4
	if (ctx.cr6.lt) goto loc_8246A5A4;
	// lwz r11,92(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8246a5a4
	if (ctx.cr6.lt) goto loc_8246A5A4;
	// li r5,120
	ctx.r5.s64 = 120;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8246A480;
	sub_822D4FA0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r20,48(r31)
	REX_STORE_U32(r31.u32 + 48, r20.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8246a49c
	if (!ctx.cr6.eq) goto loc_8246A49C;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8246a5e4
	if (ctx.cr6.eq) goto loc_8246A5E4;
loc_8246A49C:
	// lwz r10,48(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8246a5a4
	if (ctx.cr6.eq) goto loc_8246A5A4;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8246a5a4
	if (ctx.cr6.lt) goto loc_8246A5A4;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfd f13,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// lfd f0,-15736(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + -15736);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8246a5a4
	if (!ctx.cr6.eq) goto loc_8246A5A4;
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
	// bne cr6,0x8246a5a4
	if (!ctx.cr6.eq) goto loc_8246A5A4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82460ed8
	ctx.lr = 0x8246A4F4;
	sub_82460ED8(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8246abb8
	if (ctx.cr6.eq) goto loc_8246ABB8;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8246a5e4
	if (!ctx.cr6.gt) goto loc_8246A5E4;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
loc_8246A51C:
	// lwz r10,48(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 48);
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
	// lwz r10,48(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 48);
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
	// beq cr6,0x8246a5bc
	if (ctx.cr6.eq) goto loc_8246A5BC;
	// lwz r10,48(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 48);
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
	// lwz r10,48(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 48);
	// lfdx f7,r8,r10
	ctx.f7.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// lfdx f6,r11,r10
	ctx.f6.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// fcmpu cr6,f7,f6
	ctx.cr6.compare(ctx.f7.f64, ctx.f6.f64);
	// bge cr6,0x8246a5c8
	if (!ctx.cr6.lt) goto loc_8246A5C8;
loc_8246A5A4:
	// lis r17,-32761
	r17.s64 = -2147024896;
	// ori r17,r17,87
	r17.u64 = r17.u64 | 87;
loc_8246A5AC:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x822d4ea8
	return;
loc_8246A5BC:
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stfd f31,16(r10)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r10.u32 + 16, f31.u64);
loc_8246A5C8:
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
	// blt cr6,0x8246a51c
	if (ctx.cr6.lt) goto loc_8246A51C;
loc_8246A5E4:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8246a604
	if (ctx.cr6.eq) goto loc_8246A604;
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
loc_8246A604:
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8246a62c
	if (!ctx.cr6.eq) goto loc_8246A62C;
	// lwz r11,40(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8246a62c
	if (!ctx.cr6.eq) goto loc_8246A62C;
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// beq cr6,0x8246a630
	if (ctx.cr6.eq) goto loc_8246A630;
loc_8246A62C:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_8246A630:
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8246a644
	if (ctx.cr6.eq) goto loc_8246A644;
	// stw r18,96(r31)
	REX_STORE_U32(r31.u32 + 96, r18.u32);
loc_8246A644:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8246a654
	if (!ctx.cr6.eq) goto loc_8246A654;
	// stw r20,32(r31)
	REX_STORE_U32(r31.u32 + 32, r20.u32);
loc_8246A654:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8246a67c
	if (ctx.cr6.eq) goto loc_8246A67C;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8246a67c
	if (ctx.cr6.eq) goto loc_8246A67C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8246a67c
	if (ctx.cr6.eq) goto loc_8246A67C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8246a5a4
	if (!ctx.cr6.eq) goto loc_8246A5A4;
loc_8246A67C:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8246a694
	if (ctx.cr6.eq) goto loc_8246A694;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8246a5a4
	if (!ctx.cr6.eq) goto loc_8246A5A4;
loc_8246A694:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82460ed8
	ctx.lr = 0x8246A6A0;
	sub_82460ED8(ctx, base);
	// stw r3,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8246abb8
	if (ctx.cr6.eq) goto loc_8246ABB8;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82460ed8
	ctx.lr = 0x8246A6B8;
	sub_82460ED8(ctx, base);
	// stw r3,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8246abb8
	if (ctx.cr6.eq) goto loc_8246ABB8;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r19,1000
	r19.s64 = 1000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r21,r10,-25684
	r21.s64 = ctx.r10.s64 + -25684;
	// beq cr6,0x8246a6fc
	if (ctx.cr6.eq) goto loc_8246A6FC;
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r16.s32);
	// addi r3,r21,296
	ctx.r3.s64 = r21.s64 + 296;
	// divw r4,r11,r19
	ctx.r4.u64 = uint32_t((r19.s32 && !(ctx.r11.s32 == INT32_MIN && r19.s32 == -1)) ? ctx.r11.s32 / r19.s32 : 0);
	// bl 0x82469b98
	ctx.lr = 0x8246A6EC;
	sub_82469B98(ctx, base);
	// lis r30,16384
	r30.s64 = 1073741824;
	// subf r10,r3,r30
	ctx.r10.u64 = r30.u64 - ctx.r3.u64;
	// stw r10,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r10.u32);
	// b 0x8246a704
	goto loc_8246A704;
loc_8246A6FC:
	// lis r30,16384
	r30.s64 = 1073741824;
	// stw r30,176(r31)
	REX_STORE_U32(r31.u32 + 176, r30.u32);
loc_8246A704:
	// lwz r28,176(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 176);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// subf r10,r28,r30
	ctx.r10.u64 = r30.u64 - r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r10.u32);
	// beq cr6,0x8246a738
	if (ctx.cr6.eq) goto loc_8246A738;
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r16.s32);
	// addi r3,r21,296
	ctx.r3.s64 = r21.s64 + 296;
	// divw r4,r11,r19
	ctx.r4.u64 = uint32_t((r19.s32 && !(ctx.r11.s32 == INT32_MIN && r19.s32 == -1)) ? ctx.r11.s32 / r19.s32 : 0);
	// bl 0x82469b98
	ctx.lr = 0x8246A72C;
	sub_82469B98(ctx, base);
	// subf r10,r3,r30
	ctx.r10.u64 = r30.u64 - ctx.r3.u64;
	// stw r10,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r10.u32);
	// b 0x8246a73c
	goto loc_8246A73C;
loc_8246A738:
	// stw r30,180(r31)
	REX_STORE_U32(r31.u32 + 180, r30.u32);
loc_8246A73C:
	// lwz r29,180(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 180);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// subf r10,r29,r30
	ctx.r10.u64 = r30.u64 - r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r10.u32);
	// beq cr6,0x8246a770
	if (ctx.cr6.eq) goto loc_8246A770;
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r16.s32);
	// addi r3,r21,296
	ctx.r3.s64 = r21.s64 + 296;
	// divw r4,r11,r19
	ctx.r4.u64 = uint32_t((r19.s32 && !(ctx.r11.s32 == INT32_MIN && r19.s32 == -1)) ? ctx.r11.s32 / r19.s32 : 0);
	// bl 0x82469b98
	ctx.lr = 0x8246A764;
	sub_82469B98(ctx, base);
	// subf r10,r3,r30
	ctx.r10.u64 = r30.u64 - ctx.r3.u64;
	// stw r10,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// b 0x8246a774
	goto loc_8246A774;
loc_8246A770:
	// stw r30,148(r31)
	REX_STORE_U32(r31.u32 + 148, r30.u32);
loc_8246A774:
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
	// beq cr6,0x8246a7a8
	if (ctx.cr6.eq) goto loc_8246A7A8;
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r16.s32);
	// addi r3,r21,296
	ctx.r3.s64 = r21.s64 + 296;
	// divw r4,r11,r19
	ctx.r4.u64 = uint32_t((r19.s32 && !(ctx.r11.s32 == INT32_MIN && r19.s32 == -1)) ? ctx.r11.s32 / r19.s32 : 0);
	// bl 0x82469b98
	ctx.lr = 0x8246A79C;
	sub_82469B98(ctx, base);
	// subf r10,r3,r30
	ctx.r10.u64 = r30.u64 - ctx.r3.u64;
	// stw r10,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r10.u32);
	// b 0x8246a7ac
	goto loc_8246A7AC;
loc_8246A7A8:
	// stw r30,152(r31)
	REX_STORE_U32(r31.u32 + 152, r30.u32);
loc_8246A7AC:
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// divw r10,r30,r28
	ctx.r10.u64 = uint32_t((r28.s32 && !(r30.s32 == INT32_MIN && r28.s32 == -1)) ? r30.s32 / r28.s32 : 0);
	// divw r9,r30,r29
	ctx.r9.u64 = uint32_t((r29.s32 && !(r30.s32 == INT32_MIN && r29.s32 == -1)) ? r30.s32 / r29.s32 : 0);
	// subf r8,r11,r30
	ctx.r8.u64 = r30.u64 - ctx.r11.u64;
	// stw r10,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// stw r9,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r9.u32);
	// stw r8,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r8.u32);
	// lwz r7,4(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x8246a7e4
	if (!ctx.cr6.eq) goto loc_8246A7E4;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8246a7e4
	if (ctx.cr6.gt) goto loc_8246A7E4;
	// stw r20,8(r31)
	REX_STORE_U32(r31.u32 + 8, r20.u32);
loc_8246A7E4:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8246a804
	if (!ctx.cr6.eq) goto loc_8246A804;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8246a804
	if (ctx.cr6.gt) goto loc_8246A804;
	// stw r18,0(r26)
	REX_STORE_U32(r26.u32 + 0, r18.u32);
	// stw r20,8(r26)
	REX_STORE_U32(r26.u32 + 8, r20.u32);
loc_8246A804:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8246a830
	if (!ctx.cr6.eq) goto loc_8246A830;
	// lwz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 16);
	// addi r11,r27,16
	ctx.r11.s64 = r27.s64 + 16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8246a830
	if (ctx.cr6.gt) goto loc_8246A830;
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
	// stw r10,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r10.u32);
	// ld r9,16(r26)
	ctx.r9.u64 = REX_LOAD_U64(r26.u32 + 16);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
loc_8246A830:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8246a85c
	if (!ctx.cr6.eq) goto loc_8246A85C;
	// lwz r10,24(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 24);
	// addi r11,r27,24
	ctx.r11.s64 = r27.s64 + 24;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8246a85c
	if (ctx.cr6.gt) goto loc_8246A85C;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// ld r9,8(r26)
	ctx.r9.u64 = REX_LOAD_U64(r26.u32 + 8);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
loc_8246A85C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8246a910
	if (ctx.cr6.eq) goto loc_8246A910;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r5,4(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r4,16(r26)
	ctx.r4.u64 = REX_LOAD_U64(r26.u32 + 16);
	// bl 0x82469c18
	ctx.lr = 0x8246A87C;
	sub_82469C18(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246a5ac
	if (ctx.cr6.lt) goto loc_8246A5AC;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r5,0(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// ld r4,8(r26)
	ctx.r4.u64 = REX_LOAD_U64(r26.u32 + 8);
	// bl 0x82469c18
	ctx.lr = 0x8246A89C;
	sub_82469C18(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246a5ac
	if (ctx.cr6.lt) goto loc_8246A5AC;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r5,4(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r4,16(r27)
	ctx.r4.u64 = REX_LOAD_U64(r27.u32 + 16);
	// bl 0x82469c18
	ctx.lr = 0x8246A8BC;
	sub_82469C18(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246a5ac
	if (ctx.cr6.lt) goto loc_8246A5AC;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r4,24(r27)
	ctx.r4.u64 = REX_LOAD_U64(r27.u32 + 24);
	// bl 0x82469c18
	ctx.lr = 0x8246A8DC;
	sub_82469C18(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246a5ac
	if (ctx.cr6.lt) goto loc_8246A5AC;
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
	// blt cr6,0x8246a908
	if (ctx.cr6.lt) goto loc_8246A908;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8246a920
	if (!ctx.cr6.lt) goto loc_8246A920;
loc_8246A908:
	// stw r20,8(r31)
	REX_STORE_U32(r31.u32 + 8, r20.u32);
	// b 0x8246a920
	goto loc_8246A920;
loc_8246A910:
	// lwz r25,80(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r26,84(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_8246A920:
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8246a944
	if (ctx.cr6.eq) goto loc_8246A944;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8246a948
	if (ctx.cr6.eq) goto loc_8246A948;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8246a948
	if (ctx.cr6.eq) goto loc_8246A948;
loc_8246A944:
	// stw r18,256(r31)
	REX_STORE_U32(r31.u32 + 256, r18.u32);
loc_8246A948:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8246aa50
	if (ctx.cr6.eq) goto loc_8246AA50;
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8246aa50
	if (ctx.cr6.eq) goto loc_8246AA50;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8246a988
	if (!ctx.cr6.eq) goto loc_8246A988;
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8246a988
	if (!ctx.cr6.eq) goto loc_8246A988;
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
loc_8246A988:
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
loc_8246AA50:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8246aaf8
	if (!ctx.cr6.gt) goto loc_8246AAF8;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82460ed8
	ctx.lr = 0x8246AA64;
	sub_82460ED8(ctx, base);
	// stw r3,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8246abb8
	if (ctx.cr6.eq) goto loc_8246ABB8;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x8246AA80;
	sub_822D5870(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82460ed8
	ctx.lr = 0x8246AA8C;
	sub_82460ED8(ctx, base);
	// stw r3,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8246abb8
	if (ctx.cr6.eq) goto loc_8246ABB8;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x8246AAA8;
	sub_822D5870(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82460ed8
	ctx.lr = 0x8246AAB4;
	sub_82460ED8(ctx, base);
	// stw r3,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8246abb8
	if (ctx.cr6.eq) goto loc_8246ABB8;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x8246AAD0;
	sub_822D5870(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82460ed8
	ctx.lr = 0x8246AADC;
	sub_82460ED8(ctx, base);
	// stw r3,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8246abb8
	if (ctx.cr6.eq) goto loc_8246ABB8;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x8246AAF8;
	sub_822D5870(ctx, base);
loc_8246AAF8:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8246abe0
	if (ctx.cr6.eq) goto loc_8246ABE0;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8246ab28
	if (ctx.cr6.eq) goto loc_8246AB28;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8246abe0
	if (ctx.cr6.eq) goto loc_8246ABE0;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8246abe0
	if (ctx.cr6.eq) goto loc_8246ABE0;
loc_8246AB28:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82460ed8
	ctx.lr = 0x8246AB34;
	sub_82460ED8(ctx, base);
	// stw r3,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8246abb8
	if (ctx.cr6.eq) goto loc_8246ABB8;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x8246AB50;
	sub_822D5870(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82460ed8
	ctx.lr = 0x8246AB5C;
	sub_82460ED8(ctx, base);
	// stw r3,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8246abb8
	if (ctx.cr6.eq) goto loc_8246ABB8;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x8246AB78;
	sub_822D5870(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82460ed8
	ctx.lr = 0x8246AB84;
	sub_82460ED8(ctx, base);
	// stw r3,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8246abb8
	if (ctx.cr6.eq) goto loc_8246ABB8;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x8246ABA0;
	sub_822D5870(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82460ed8
	ctx.lr = 0x8246ABAC;
	sub_82460ED8(ctx, base);
	// stw r3,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8246abd0
	if (!ctx.cr6.eq) goto loc_8246ABD0;
loc_8246ABB8:
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
loc_8246ABD0:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x8246ABE0;
	sub_822D5870(ctx, base);
loc_8246ABE0:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8246ac0c
	if (!ctx.cr6.gt) goto loc_8246AC0C;
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8246ac0c
	if (!ctx.cr6.eq) goto loc_8246AC0C;
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
loc_8246AC0C:
	// lis r10,1023
	ctx.r10.s64 = 67043328;
	// mr r24,r20
	r24.u64 = r20.u64;
	// lis r23,-1024
	r23.s64 = -67108864;
	// ori r22,r10,65535
	r22.u64 = ctx.r10.u64 | 65535;
	// mr r27,r20
	r27.u64 = r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8246ad5c
	if (!ctx.cr6.gt) goto loc_8246AD5C;
	// mr r30,r20
	r30.u64 = r20.u64;
loc_8246AC2C:
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
	// beq cr6,0x8246ad14
	if (ctx.cr6.eq) goto loc_8246AD14;
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
	// bge cr6,0x8246ac94
	if (!ctx.cr6.lt) goto loc_8246AC94;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// b 0x8246aca0
	goto loc_8246ACA0;
loc_8246AC94:
	// cmpw cr6,r4,r22
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r22.s32, ctx.xer);
	// ble cr6,0x8246aca0
	if (!ctx.cr6.gt) goto loc_8246ACA0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_8246ACA0:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82469b98
	ctx.lr = 0x8246ACA8;
	sub_82469B98(ctx, base);
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// stwx r3,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r3.u32);
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// cmpwi cr6,r11,-10485
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -10485, ctx.xer);
	// ble cr6,0x8246accc
	if (!ctx.cr6.gt) goto loc_8246ACCC;
	// cmpwi cr6,r11,10485
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10485, ctx.xer);
	// bge cr6,0x8246accc
	if (!ctx.cr6.lt) goto loc_8246ACCC;
	// cmpwi cr6,r28,-10485
	ctx.cr6.compare<int32_t>(r28.s32, -10485, ctx.xer);
	// bgt cr6,0x8246acd0
	if (ctx.cr6.gt) goto loc_8246ACD0;
loc_8246ACCC:
	// mr r24,r18
	r24.u64 = r18.u64;
loc_8246ACD0:
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + r26.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// blt cr6,0x8246ad14
	if (ctx.cr6.lt) goto loc_8246AD14;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi. r9,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
	// bne 0x8246acfc
	if (!ctx.cr0.eq) goto loc_8246ACFC;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// b 0x8246ad04
	goto loc_8246AD04;
loc_8246ACFC:
	// divw r11,r10,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
loc_8246AD04:
	// lwz r10,196(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 104);
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
	// stwx r9,r30,r10
	REX_STORE_U32(r30.u32 + ctx.r10.u32, ctx.r9.u32);
loc_8246AD14:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8246ad30
	if (ctx.cr6.eq) goto loc_8246AD30;
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8246ad48
	if (ctx.cr6.eq) goto loc_8246AD48;
loc_8246AD30:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246a0a0
	ctx.lr = 0x8246AD3C;
	sub_8246A0A0(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246a5ac
	if (ctx.cr6.lt) goto loc_8246A5AC;
loc_8246AD48:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8246ac2c
	if (ctx.cr6.lt) goto loc_8246AC2C;
loc_8246AD5C:
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
	// ble cr6,0x8246ade8
	if (!ctx.cr6.gt) goto loc_8246ADE8;
	// mr r30,r20
	r30.u64 = r20.u64;
loc_8246AD80:
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// stwx r29,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r29.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8246add4
	if (ctx.cr6.eq) goto loc_8246ADD4;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lwzx r4,r30,r11
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmpw cr6,r4,r23
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r23.s32, ctx.xer);
	// bge cr6,0x8246adac
	if (!ctx.cr6.lt) goto loc_8246ADAC;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// b 0x8246adb8
	goto loc_8246ADB8;
loc_8246ADAC:
	// cmpw cr6,r4,r22
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r22.s32, ctx.xer);
	// ble cr6,0x8246adb8
	if (!ctx.cr6.gt) goto loc_8246ADB8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_8246ADB8:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82469b98
	ctx.lr = 0x8246ADC0;
	sub_82469B98(ctx, base);
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
loc_8246ADD4:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8246ad80
	if (ctx.cr6.lt) goto loc_8246AD80;
loc_8246ADE8:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lis r30,16
	r30.s64 = 1048576;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8246ae54
	if (ctx.cr6.eq) goto loc_8246AE54;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8246ae18
	if (ctx.cr6.eq) goto loc_8246AE18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246a2e0
	ctx.lr = 0x8246AE0C;
	sub_8246A2E0(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246a5ac
	if (ctx.cr6.lt) goto loc_8246A5AC;
loc_8246AE18:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8246ae54
	if (!ctx.cr6.eq) goto loc_8246AE54;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8246ae54
	if (!ctx.cr6.gt) goto loc_8246AE54;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_8246AE38:
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
	// blt cr6,0x8246ae38
	if (ctx.cr6.lt) goto loc_8246AE38;
loc_8246AE54:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8246ae78
	if (ctx.cr6.eq) goto loc_8246AE78;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8246ae70
	if (ctx.cr6.eq) goto loc_8246AE70;
	// bl 0x82460ee8
	ctx.lr = 0x8246AE70;
	sub_82460EE8(ctx, base);
loc_8246AE70:
	// stw r20,48(r31)
	REX_STORE_U32(r31.u32 + 48, r20.u32);
	// stw r20,52(r31)
	REX_STORE_U32(r31.u32 + 52, r20.u32);
loc_8246AE78:
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
	// beq cr6,0x8246aea4
	if (ctx.cr6.eq) goto loc_8246AEA4;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mullw r10,r11,r16
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r16.s32);
	// divw r9,r10,r19
	ctx.r9.u64 = uint32_t((r19.s32 && !(ctx.r10.s32 == INT32_MIN && r19.s32 == -1)) ? ctx.r10.s32 / r19.s32 : 0);
	// stw r9,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r9.u32);
	// b 0x8246aea8
	goto loc_8246AEA8;
loc_8246AEA4:
	// stw r20,212(r31)
	REX_STORE_U32(r31.u32 + 212, r20.u32);
loc_8246AEA8:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8246a5ac
	if (ctx.cr6.eq) goto loc_8246A5AC;
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x8246aedc
	if (ctx.cr6.eq) goto loc_8246AEDC;
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
loc_8246AEDC:
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
	// beq cr6,0x8246a5ac
	if (ctx.cr6.eq) goto loc_8246A5AC;
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

DEFINE_REX_FUNC(sub_824ACE20) {
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
	// vspltish v0,-5
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0xFFFB)));
	// li r10,1120
	ctx.r10.s64 = 1120;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// vspltish v1,6
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x6)));
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// vsrh v0,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_srlv_epi16(a, shift));
	}
	// slw r7,r4,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r7.u8 & 0x3F));
	// lvx128 v13,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,0
	ctx.r9.s64 = 0;
	// vaddshs v2,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// bl 0x824acb58
	ctx.lr = 0x824ACE68;
	sub_824ACB58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824AE8B8) {
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
	ctx.lr = 0x824AE8C0;
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
	ctx.lr = 0x824AE924;
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
	// vspltish v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v2,v8,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v12,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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
	// bne cr6,0x824aea0c
	if (!ctx.cr6.eq) goto loc_824AEA0C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824aeb04
	if (!ctx.cr6.gt) goto loc_824AEB04;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_824AE980:
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvx128 v63,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v9,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// vsldoi128 v11,v13,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v10,v13,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v13,v13,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// vsubshs v4,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// lvx128 v3,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v11,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v31,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v10,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v30,v1
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v25,v29,v11
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v24,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v23,v27,v28
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v22,v25,v26
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vsubshs v21,v13,v24
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vadduhm v20,v22,v23
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v19,v21,v4
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v18,v20,v3
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v17,v18,v19
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vsrah v16,v17,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vor v8,v8,v16
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// stvewx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x824ae980
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AE980;
	// b 0x824aeb04
	goto loc_824AEB04;
loc_824AEA0C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824aeb04
	if (!ctx.cr6.gt) goto loc_824AEB04;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_824AEA24:
	// lvx128 v13,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvx128 v11,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v10,v11,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 14));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// vsldoi128 v9,v13,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsubshs v31,v7,v3
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi v4,v11,v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 12));
	// vsldoi128 v3,v13,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// vsubshs v30,v7,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v10,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v11,v11,v13,6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 10));
	// vslh v28,v9,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v13,v13,v61,6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 10));
	// vslh v27,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v27,v29
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v20,v26,v10
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v23,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v4,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v25,v28
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v16,v24,v9
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v18,v3,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v10,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v9,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vadduhm v4,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vslh v14,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v3,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vsubshs v1,v13,v15
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// lvx128 v13,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v9,v10
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubshs v29,v11,v14
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vadduhm v27,v3,v4
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v26,v1,v31
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v24,v28,v13
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v25,v29,v30
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v23,v27,v13
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// lvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v22,v24,v25
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v21,v23,v26
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vsrah v20,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v60,v8,v20
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v20.u8)));
	// vpkshus128 v59,v20,v19
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vor128 v8,v60,v19
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)v19.u8)));
	// stvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x824aea24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AEA24;
loc_824AEB04:
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

DEFINE_REX_FUNC(sub_824B7E48) {
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
	ctx.lr = 0x824B7E50;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// dcbzl r0,r7
	ea = (ctx.r7.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// lwz r11,24(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// subfic r27,r5,2
	ctx.xer.ca = ctx.r5.u32 <= 2;
	r27.u64 = static_cast<uint64_t>(2) - ctx.r5.u64;
	// lwz r4,620(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 620);
	// addi r5,r3,168
	ctx.r5.s64 = ctx.r3.s64 + 168;
	// addi r26,r11,1
	r26.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r30,4(r8)
	r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r31,40(r6)
	r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
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
	// blt cr6,0x824b7eb4
	if (ctx.cr6.lt) goto loc_824B7EB4;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// bl 0x8235f5b0
	ctx.lr = 0x824B7EAC;
	sub_8235F5B0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x824b7f14
	goto loc_824B7F14;
loc_824B7EB4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x824b7f10
	if (!ctx.cr6.gt) goto loc_824B7F10;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_824B7EC0:
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
	// bdnz 0x824b7ec0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B7EC0;
loc_824B7F10:
	// stw r11,20(r6)
	REX_STORE_U32(ctx.r6.u32 + 20, ctx.r11.u32);
loc_824B7F14:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r27,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 6) & 0xFFFFFFC0;
	// bne cr6,0x824b7f80
	if (!ctx.cr6.eq) goto loc_824B7F80;
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// srawi r9,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// srawi r10,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 3;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v13,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed0
	return;
loc_824B7F80:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x824a6278
	ctx.lr = 0x824B7F8C;
	sub_824A6278(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_824D02D8) {
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
	ctx.lr = 0x824D02E0;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,22268(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 22268);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lwz r6,136(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// ori r7,r11,45236
	ctx.r7.u64 = ctx.r11.u64 | 45236;
	// lhz r9,52(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 52);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lhz r5,50(r4)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + 50);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// rlwinm r14,r6,4,0,27
	r14.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r3,r7
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// rlwinm r27,r5,31,1,31
	r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r10,28(r25)
	REX_STORE_U32(r25.u32 + 28, ctx.r10.u32);
	// rlwinm r26,r9,31,1,31
	r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r11,22280(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 22280);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// stw r11,32(r25)
	REX_STORE_U32(r25.u32 + 32, ctx.r11.u32);
	// srawi r4,r14,1
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x1) != 0);
	ctx.r4.s64 = r14.s32 >> 1;
	// lwz r7,3784(r22)
	ctx.r7.u64 = REX_LOAD_U32(r22.u32 + 3784);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// lwz r8,3776(r22)
	ctx.r8.u64 = REX_LOAD_U32(r22.u32 + 3776);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r5,33(r28)
	ctx.r5.u64 = REX_LOAD_U8(r28.u32 + 33);
	// lwz r10,224(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 224);
	// lwz r9,3780(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 3780);
	// add r31,r9,r10
	r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,220(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 220);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r23,272(r22)
	r23.u64 = REX_LOAD_U32(r22.u32 + 272);
	// stw r26,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r26.u32);
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r14,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r14.u32);
	// rlwinm r9,r11,16,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFF;
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// stw r27,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r27.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stb r5,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// ble cr6,0x824d0b00
	if (!ctx.cr6.gt) goto loc_824D0B00;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// lis r18,-32161
	r18.s64 = -2107703296;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r17,-32161
	r17.s64 = -2107703296;
	// li r20,255
	r20.s64 = 255;
loc_824D03A8:
	// li r15,0
	r15.s64 = 0;
	// lwz r24,92(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r21,100(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// mr r16,r15
	r16.u64 = r15.u64;
	// ble cr6,0x824d0ac0
	if (!ctx.cr6.gt) goto loc_824D0AC0;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r15,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r15.u32);
	// subf r19,r24,r11
	r19.u64 = ctx.r11.u64 - r24.u64;
loc_824D03CC:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824d0a8c
	if (!ctx.cr6.eq) goto loc_824D0A8C;
	// cmplw cr6,r16,r7
	ctx.cr6.compare<uint32_t>(r16.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x824d0a8c
	if (!ctx.cr6.eq) goto loc_824D0A8C;
	// li r30,0
	r30.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r28,556
	r29.s64 = r28.s64 + 556;
loc_824D03EC:
	// srawi r11,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r11.s64 = r30.s32 >> 2;
	// lwz r9,28(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 28);
	// lwzu r10,4(r29)
	ea = 4 + r29.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// li r8,-128
	ctx.r8.s64 = -128;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// addi r3,r9,-128
	ctx.r3.s64 = ctx.r9.s64 + -128;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r6,r25
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + r25.u32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// dcbt r8,r3
	// stw r3,28(r25)
	REX_STORE_U32(r25.u32 + 28, ctx.r3.u32);
	// addi r5,r11,45
	ctx.r5.s64 = ctx.r11.s64 + 45;
	// lwz r11,392(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 392);
	// lwz r4,1384(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 1384);
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,5100(r18)
	ctx.r6.u64 = REX_LOAD_U32(r18.u32 + 5100);
	// lwz r9,5112(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 5112);
	// lbz r5,4(r23)
	ctx.r5.u64 = REX_LOAD_U8(r23.u32 + 4);
	// rotlwi r10,r5,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 6);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhzx r8,r8,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + r28.u32);
	// add r4,r31,r4
	ctx.r4.u64 = r31.u64 + ctx.r4.u64;
	// bl 0x823ae920
	ctx.lr = 0x824D0448;
	sub_823AE920(ctx, base);
	// addi r31,r31,128
	r31.s64 = r31.s64 + 128;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r31,768
	ctx.cr6.compare<int32_t>(r31.s32, 768, ctx.xer);
	// blt cr6,0x824d03ec
	if (ctx.cr6.lt) goto loc_824D03EC;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824d0a34
	if (ctx.cr6.eq) goto loc_824D0A34;
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 0);
	// rlwinm r11,r10,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824d0a34
	if (ctx.cr6.eq) goto loc_824D0A34;
	// rlwinm r8,r10,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,20696(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 20696);
	// lwz r10,20700(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 20700);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r9,20704(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 20704);
	// add r29,r11,r7
	r29.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r27,r10,r15
	r27.u64 = ctx.r10.u64 + r15.u64;
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r26,r9,r15
	r26.u64 = ctx.r9.u64 + r15.u64;
	// lwz r3,1384(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 1384);
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bne cr6,0x824d04bc
	if (!ctx.cr6.eq) goto loc_824D04BC;
	// bl 0x82489880
	ctx.lr = 0x824D04B8;
	sub_82489880(ctx, base);
	// b 0x824d04c0
	goto loc_824D04C0;
loc_824D04BC:
	// bl 0x824898d0
	ctx.lr = 0x824D04C0;
	sub_824898D0(ctx, base);
loc_824D04C0:
	// lhz r11,50(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 50);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// rotlwi r30,r11,3
	r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// beq cr6,0x824d05bc
	if (ctx.cr6.eq) goto loc_824D05BC;
	// lwz r11,-24(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + -24);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824d05bc
	if (ctx.cr6.eq) goto loc_824D05BC;
	// li r9,16
	ctx.r9.s64 = 16;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r31,r30,1,0,30
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824D04F4:
	// lhz r9,-2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// lhz r5,-4(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// lhz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r3,r7,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r14,r6,3,0,28
	r14.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// subf r5,r7,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r7.u64;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// subf r4,r6,r14
	ctx.r4.u64 = r14.u64 - ctx.r6.u64;
	// rlwinm r3,r8,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r14,r8,r5
	r14.u64 = ctx.r5.u64 - ctx.r8.u64;
	// subf r5,r9,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r9.u64;
	// subf r4,r8,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r8.u64;
	// rlwinm r3,r9,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// stw r3,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// subf r3,r10,r14
	ctx.r3.u64 = r14.u64 - ctx.r10.u64;
	// add r5,r4,r9
	ctx.r5.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r3,r5,3
	ctx.r3.s64 = ctx.r5.s64 + 3;
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// lwz r14,120(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// subf r4,r9,r14
	ctx.r4.u64 = r14.u64 - ctx.r9.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// subf r4,r10,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// srawi r6,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 3;
	// addi r5,r8,4
	ctx.r5.s64 = ctx.r8.s64 + 4;
	// srawi r4,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 3;
	// srawi r3,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 3;
	// srawi r9,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 3;
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// sth r8,-4(r11)
	REX_STORE_U16(ctx.r11.u32 + -4, ctx.r8.u16);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// sth r7,-2(r11)
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r7.u16);
	// sth r6,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// sth r5,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// bdnz 0x824d04f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D04F4;
	// lwz r14,108(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_824D05BC:
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r29,16
	ctx.r11.s64 = r29.s64 + 16;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r31,r30,1,0,30
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824D05D0:
	// lhz r9,-2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lhz r5,-4(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r3,r6,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r30,r7,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// subf r5,r6,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r6.u64;
	// subf r4,r7,r30
	ctx.r4.u64 = r30.u64 - ctx.r7.u64;
	// subf r30,r10,r5
	r30.u64 = ctx.r5.u64 - ctx.r10.u64;
	// subf r5,r9,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r9.u64;
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r3,r8,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r4,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// subf r4,r8,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r8.u64;
	// subf r3,r8,r30
	ctx.r3.u64 = r30.u64 - ctx.r8.u64;
	// lwz r30,120(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// subf r30,r9,r30
	r30.u64 = r30.u64 - ctx.r9.u64;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// subf r3,r10,r30
	ctx.r3.u64 = r30.u64 - ctx.r10.u64;
	// add r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r7,r5,r8
	ctx.r7.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 + ctx.r8.u64;
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// addi r4,r6,4
	ctx.r4.s64 = ctx.r6.s64 + 4;
	// addi r3,r7,3
	ctx.r3.s64 = ctx.r7.s64 + 3;
	// srawi r8,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 3;
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// srawi r6,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 3;
	// srawi r5,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 3;
	// srawi r4,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 3;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// sth r3,-4(r11)
	REX_STORE_U16(ctx.r11.u32 + -4, ctx.r3.u16);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// sth r9,-2(r11)
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r9.u16);
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// bdnz 0x824d05d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D05D0;
	// lhz r11,50(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 50);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// rotlwi r30,r11,2
	r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// beq cr6,0x824d0868
	if (ctx.cr6.eq) goto loc_824D0868;
	// lwz r11,-24(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + -24);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824d0788
	if (ctx.cr6.eq) goto loc_824D0788;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r31,r30,1,0,30
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824D06C8:
	// lhz r9,-2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lhz r5,-4(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r3,r6,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// rlwinm r14,r7,3,0,28
	r14.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r6,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r6.u64;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// subf r4,r7,r14
	ctx.r4.u64 = r14.u64 - ctx.r7.u64;
	// subf r14,r9,r5
	r14.u64 = ctx.r5.u64 - ctx.r9.u64;
	// rlwinm r3,r9,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r8,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r8.u64;
	// subf r3,r9,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r9.u64;
	// subf r4,r10,r14
	ctx.r4.u64 = r14.u64 - ctx.r10.u64;
	// rlwinm r14,r8,3,0,28
	r14.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r6,r3,r8
	ctx.r6.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// subf r3,r8,r14
	ctx.r3.u64 = r14.u64 - ctx.r8.u64;
	// add r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// subf r6,r10,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r10.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r5,r5,3
	ctx.r5.s64 = ctx.r5.s64 + 3;
	// addi r4,r7,4
	ctx.r4.s64 = ctx.r7.s64 + 4;
	// addi r3,r8,3
	ctx.r3.s64 = ctx.r8.s64 + 3;
	// srawi r8,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 3;
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// srawi r6,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 3;
	// srawi r5,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 3;
	// srawi r4,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 3;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// sth r3,-4(r11)
	REX_STORE_U16(ctx.r11.u32 + -4, ctx.r3.u16);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// sth r9,-2(r11)
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r9.u16);
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// bdnz 0x824d06c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D06C8;
	// lwz r14,108(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_824D0788:
	// lwz r11,-24(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + -24);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824d0868
	if (ctx.cr6.eq) goto loc_824D0868;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r31,r30,1,0,30
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824D07AC:
	// lhz r9,-2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lhz r5,-4(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r3,r6,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// rlwinm r30,r7,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r6,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r6.u64;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// subf r4,r7,r30
	ctx.r4.u64 = r30.u64 - ctx.r7.u64;
	// subf r30,r9,r5
	r30.u64 = ctx.r5.u64 - ctx.r9.u64;
	// rlwinm r3,r9,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r8,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r8.u64;
	// subf r3,r9,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r9.u64;
	// subf r4,r10,r30
	ctx.r4.u64 = r30.u64 - ctx.r10.u64;
	// rlwinm r30,r8,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r6,r3,r8
	ctx.r6.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// subf r3,r8,r30
	ctx.r3.u64 = r30.u64 - ctx.r8.u64;
	// add r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// subf r6,r10,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r10.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r5,r5,3
	ctx.r5.s64 = ctx.r5.s64 + 3;
	// addi r4,r7,4
	ctx.r4.s64 = ctx.r7.s64 + 4;
	// addi r3,r8,3
	ctx.r3.s64 = ctx.r8.s64 + 3;
	// srawi r8,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 3;
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// srawi r6,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 3;
	// srawi r5,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 3;
	// srawi r4,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 3;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// sth r3,-4(r11)
	REX_STORE_U16(ctx.r11.u32 + -4, ctx.r3.u16);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// sth r9,-2(r11)
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r9.u16);
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// bdnz 0x824d07ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D07AC;
loc_824D0868:
	// lhz r11,50(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 50);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// rotlwi r6,r11,3
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// beq cr6,0x824d0890
	if (ctx.cr6.eq) goto loc_824D0890;
	// lwz r11,-24(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + -24);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824d0890
	if (ctx.cr6.eq) goto loc_824D0890;
	// li r7,-2
	ctx.r7.s64 = -2;
loc_824D0890:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_824D0898:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// bge cr6,0x824d08ec
	if (!ctx.cr6.lt) goto loc_824D08EC;
	// subfic r10,r7,16
	ctx.xer.ca = ctx.r7.u32 <= 16;
	ctx.r10.u64 = static_cast<uint64_t>(16) - ctx.r7.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824D08AC:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r5,r29
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + r29.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// ble cr6,0x824d08d0
	if (!ctx.cr6.gt) goto loc_824D08D0;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// and r10,r5,r20
	ctx.r10.u64 = ctx.r5.u64 & r20.u64;
loc_824D08D0:
	// lhz r5,74(r28)
	ctx.r5.u64 = REX_LOAD_U16(r28.u32 + 74);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// mullw r10,r5,r9
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r4,r3,r21
	REX_STORE_U8(ctx.r3.u32 + r21.u32, ctx.r4.u8);
	// bdnz 0x824d08ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D08AC;
loc_824D08EC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// blt cr6,0x824d0898
	if (ctx.cr6.lt) goto loc_824D0898;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x824d091c
	if (ctx.cr6.eq) goto loc_824D091C;
	// lwz r11,-24(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + -24);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824d091c
	if (ctx.cr6.eq) goto loc_824D091C;
	// li r7,-2
	ctx.r7.s64 = -2;
loc_824D091C:
	// lhz r11,50(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 50);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// rotlwi r6,r11,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
loc_824D092C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bge cr6,0x824d0980
	if (!ctx.cr6.lt) goto loc_824D0980;
	// subfic r10,r7,8
	ctx.xer.ca = ctx.r7.u32 <= 8;
	ctx.r10.u64 = static_cast<uint64_t>(8) - ctx.r7.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824D0940:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r5,r27
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + r27.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// ble cr6,0x824d0964
	if (!ctx.cr6.gt) goto loc_824D0964;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// and r10,r5,r20
	ctx.r10.u64 = ctx.r5.u64 & r20.u64;
loc_824D0964:
	// lhz r5,76(r28)
	ctx.r5.u64 = REX_LOAD_U16(r28.u32 + 76);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// mullw r10,r5,r9
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r4,r3,r24
	REX_STORE_U8(ctx.r3.u32 + r24.u32, ctx.r4.u8);
	// bdnz 0x824d0940
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D0940;
loc_824D0980:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// blt cr6,0x824d092c
	if (ctx.cr6.lt) goto loc_824D092C;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x824d09b0
	if (ctx.cr6.eq) goto loc_824D09B0;
	// lwz r11,-24(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + -24);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824d09b0
	if (ctx.cr6.eq) goto loc_824D09B0;
	// li r7,-2
	ctx.r7.s64 = -2;
loc_824D09B0:
	// lhz r11,50(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 50);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// rotlwi r6,r11,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
loc_824D09C0:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bge cr6,0x824d0a18
	if (!ctx.cr6.lt) goto loc_824D0A18;
	// subfic r10,r7,8
	ctx.xer.ca = ctx.r7.u32 <= 8;
	ctx.r10.u64 = static_cast<uint64_t>(8) - ctx.r7.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824D09D4:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r5,r26
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + r26.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// ble cr6,0x824d09f8
	if (!ctx.cr6.gt) goto loc_824D09F8;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// and r10,r5,r20
	ctx.r10.u64 = ctx.r5.u64 & r20.u64;
loc_824D09F8:
	// lhz r5,76(r28)
	ctx.r5.u64 = REX_LOAD_U16(r28.u32 + 76);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// mullw r10,r5,r9
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + r19.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r4,r3,r24
	REX_STORE_U8(ctx.r3.u32 + r24.u32, ctx.r4.u8);
	// bdnz 0x824d09d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D09D4;
loc_824D0A18:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// blt cr6,0x824d09c0
	if (ctx.cr6.lt) goto loc_824D09C0;
	// lwz r27,124(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r26,128(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x824d0a68
	goto loc_824D0A68;
loc_824D0A34:
	// lhz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U16(r23.u32 + 0);
	// add r6,r19,r24
	ctx.r6.u64 = r19.u64 + r24.u64;
	// lhz r8,76(r28)
	ctx.r8.u64 = REX_LOAD_U16(r28.u32 + 76);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lhz r7,74(r28)
	ctx.r7.u64 = REX_LOAD_U16(r28.u32 + 74);
	// lwz r3,1384(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 1384);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824d0a64
	if (!ctx.cr6.eq) goto loc_824D0A64;
	// bl 0x82489920
	ctx.lr = 0x824D0A60;
	sub_82489920(ctx, base);
	// b 0x824d0a68
	goto loc_824D0A68;
loc_824D0A64:
	// bl 0x82489970
	ctx.lr = 0x824D0A68;
	sub_82489970(ctx, base);
loc_824D0A68:
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r11,16,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFF;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addic. r10,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// ble 0x824d0ab8
	if (!ctx.cr0.gt) goto loc_824D0AB8;
loc_824D0A8C:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// addi r21,r21,16
	r21.s64 = r21.s64 + 16;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// addi r24,r24,8
	r24.s64 = r24.s64 + 8;
	// addi r23,r23,24
	r23.s64 = r23.s64 + 24;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r15,r15,16
	r15.s64 = r15.s64 + 16;
	// cmpw cr6,r16,r27
	ctx.cr6.compare<int32_t>(r16.s32, r27.s32, ctx.xer);
	// blt cr6,0x824d03cc
	if (ctx.cr6.lt) goto loc_824D03CC;
	// b 0x824d0ac0
	goto loc_824D0AC0;
loc_824D0AB8:
	// addi r11,r26,1
	ctx.r11.s64 = r26.s64 + 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_824D0AC0:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,232(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 232);
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r10,228(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 228);
	// cmpw cr6,r8,r26
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r26.s32, ctx.xer);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// blt cr6,0x824d03a8
	if (ctx.cr6.lt) goto loc_824D03A8;
loc_824D0B00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822d4ea0
	return;
}

