#include "soulcalibur2_funcs.37.h"

DEFINE_REX_FUNC(sub_820E1B70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E6BC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x820E6BC8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r28,r11,432
	r28.s64 = ctx.r11.s64 + 432;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r31,344(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 344);
	// bl 0x821b06b8
	ctx.lr = 0x820E6BEC;
	sub_821B06B8(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lwz r30,344(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 344);
	// mulli r10,r31,72
	ctx.r10.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(72));
	// addi r31,r11,31616
	r31.s64 = ctx.r11.s64 + 31616;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stwx r3,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821b06b8
	ctx.lr = 0x820E6C18;
	sub_821B06B8(ctx, base);
	// mulli r11,r30,72
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(72));
	// lwz r30,344(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 344);
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// stwx r3,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821b06b8
	ctx.lr = 0x820E6C3C;
	sub_821B06B8(ctx, base);
	// mulli r11,r30,72
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(72));
	// lwz r30,344(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 344);
	// addi r10,r31,12
	ctx.r10.s64 = r31.s64 + 12;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// stwx r3,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821b06b8
	ctx.lr = 0x820E6C60;
	sub_821B06B8(ctx, base);
	// mulli r11,r30,72
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(72));
	// lwz r30,344(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 344);
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// stwx r3,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821b06b8
	ctx.lr = 0x820E6C84;
	sub_821B06B8(ctx, base);
	// mulli r11,r30,72
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(72));
	// lwz r30,344(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 344);
	// addi r10,r31,20
	ctx.r10.s64 = r31.s64 + 20;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// stwx r3,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821b06b8
	ctx.lr = 0x820E6CA8;
	sub_821B06B8(ctx, base);
	// mulli r11,r30,72
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(72));
	// lwz r30,344(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 344);
	// addi r10,r31,24
	ctx.r10.s64 = r31.s64 + 24;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// stwx r3,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821b06b8
	ctx.lr = 0x820E6CCC;
	sub_821B06B8(ctx, base);
	// mulli r11,r30,72
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(72));
	// lwz r30,344(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 344);
	// addi r10,r31,28
	ctx.r10.s64 = r31.s64 + 28;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// stwx r3,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821b06b8
	ctx.lr = 0x820E6CF0;
	sub_821B06B8(ctx, base);
	// mulli r11,r30,72
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(72));
	// lwz r30,344(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 344);
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// stwx r3,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821b06b8
	ctx.lr = 0x820E6D14;
	sub_821B06B8(ctx, base);
	// mulli r11,r30,72
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(72));
	// lwz r30,344(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 344);
	// addi r10,r31,60
	ctx.r10.s64 = r31.s64 + 60;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// stwx r3,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821b06b8
	ctx.lr = 0x820E6D38;
	sub_821B06B8(ctx, base);
	// mulli r11,r30,72
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(72));
	// addi r10,r31,64
	ctx.r10.s64 = r31.s64 + 64;
	// stwx r3,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_820F0370) {
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
	ctx.lr = 0x820F0378;
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,432
	r29.s64 = ctx.r11.s64 + 432;
	// addi r3,r29,84
	ctx.r3.s64 = r29.s64 + 84;
	// bl 0x821d63a0
	ctx.lr = 0x820F0398;
	sub_821D63A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820f0750
	if (!ctx.cr0.eq) goto loc_820F0750;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r26,r10,32336
	r26.s64 = ctx.r10.s64 + 32336;
	// addi r27,r11,-28232
	r27.s64 = ctx.r11.s64 + -28232;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r30,4892(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 4892);
	// bl 0x82202540
	ctx.lr = 0x820F03C0;
	sub_82202540(ctx, base);
	// lis r25,-32170
	r25.s64 = -2108293120;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,-28256(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + -28256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f043c
	if (!ctx.cr6.eq) goto loc_820F043C;
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 512);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820f0750
	if (ctx.cr6.eq) goto loc_820F0750;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,512(r31)
	REX_STORE_U32(r31.u32 + 512, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,60(r27)
	REX_STORE_U32(r27.u32 + 60, ctx.r11.u32);
	// li r6,15
	ctx.r6.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lfs f31,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820ea310
	ctx.lr = 0x820F040C;
	sub_820EA310(ctx, base);
	// li r6,15
	ctx.r6.s64 = 15;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820ea310
	ctx.lr = 0x820F0420;
	sub_820EA310(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,15
	ctx.r6.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820ea310
	ctx.lr = 0x820F0438;
	sub_820EA310(ctx, base);
	// b 0x820f0750
	goto loc_820F0750;
loc_820F043C:
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f0750
	if (ctx.cr6.eq) goto loc_820F0750;
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 512);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820f0750
	if (ctx.cr6.eq) goto loc_820F0750;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820efdb8
	ctx.lr = 0x820F045C;
	sub_820EFDB8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// lwz r11,532(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 532);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bne cr6,0x820f04b0
	if (!ctx.cr6.eq) goto loc_820F04B0;
	// lwz r11,10532(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10532);
	// addi r10,r30,10532
	ctx.r10.s64 = r30.s64 + 10532;
	// addi r10,r31,60
	ctx.r10.s64 = r31.s64 + 60;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// lwz r11,10536(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10536);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// lwz r11,10540(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10540);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// lwz r11,10544(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10544);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// lfs f0,10312(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 10312);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f31,84(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// stfs f31,76(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
loc_820F04B0:
	// addi r3,r29,84
	ctx.r3.s64 = r29.s64 + 84;
	// bl 0x821d6398
	ctx.lr = 0x820F04B8;
	sub_821D6398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820f050c
	if (!ctx.cr0.eq) goto loc_820F050C;
	// lfs f0,10252(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 10252);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,76(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// lfs f0,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,10256(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 10256);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// lfs f13,76(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,10580(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 10580);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// lfs f13,10584(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 10584);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// lfs f13,10588(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 10588);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
loc_820F050C:
	// addi r3,r29,84
	ctx.r3.s64 = r29.s64 + 84;
	// bl 0x821d6398
	ctx.lr = 0x820F0514;
	sub_821D6398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820f0524
	if (!ctx.cr0.eq) goto loc_820F0524;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820edf60
	ctx.lr = 0x820F0524;
	sub_820EDF60(ctx, base);
loc_820F0524:
	// lwa r11,516(r31)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r31.u32 + 516));
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
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
	// blt cr6,0x820f05cc
	if (ctx.cr6.lt) goto loc_820F05CC;
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f05cc
	if (!ctx.cr6.eq) goto loc_820F05CC;
	// lwz r11,532(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 532);
	// lbz r11,188(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 188);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820f056c
	if (!ctx.cr0.eq) goto loc_820F056C;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,512(r31)
	REX_STORE_U32(r31.u32 + 512, ctx.r11.u32);
	// b 0x820f0750
	goto loc_820F0750;
loc_820F056C:
	// lwz r11,412(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 412);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,512(r31)
	REX_STORE_U32(r31.u32 + 512, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f05a4
	if (!ctx.cr6.eq) goto loc_820F05A4;
	// lfs f0,504(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 504);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_820F0590:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r3,4892(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 4892);
	// bl 0x820ea3b8
	ctx.lr = 0x820F05A0;
	sub_820EA3B8(ctx, base);
	// b 0x820f0750
	goto loc_820F0750;
loc_820F05A4:
	// li r30,0
	r30.s64 = 0;
loc_820F05A8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82202560
	ctx.lr = 0x820F05B8;
	sub_82202560(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// blt cr6,0x820f05a8
	if (ctx.cr6.lt) goto loc_820F05A8;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x820f0590
	goto loc_820F0590;
loc_820F05CC:
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 512);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820f0644
	if (!ctx.cr6.eq) goto loc_820F0644;
	// lwz r3,532(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 532);
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r4,8(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x820ea090
	ctx.lr = 0x820F05E8;
	sub_820EA090(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r5,532(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 532);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// beq 0x820f0620
	if (ctx.cr0.eq) goto loc_820F0620;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820e8650
	ctx.lr = 0x820F0600;
	sub_820E8650(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r11,r11,-7072
	ctx.r11.s64 = ctx.r11.s64 + -7072;
loc_820F0608:
	// lwz r10,532(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 532);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820f063c
	if (!ctx.cr6.eq) goto loc_820F063C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x820f0640
	goto loc_820F0640;
loc_820F0620:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820e8650
	ctx.lr = 0x820F0628;
	sub_820E8650(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r11,r11,-7072
	ctx.r11.s64 = ctx.r11.s64 + -7072;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,3696
	ctx.r11.s64 = ctx.r11.s64 + 3696;
	// b 0x820f0608
	goto loc_820F0608;
loc_820F063C:
	// li r4,1
	ctx.r4.s64 = 1;
loc_820F0640:
	// bl 0x820e8638
	ctx.lr = 0x820F0644;
	sub_820E8638(ctx, base);
loc_820F0644:
	// lfs f0,508(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 508);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,480(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 480);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x820f068c
	if (ctx.cr6.lt) goto loc_820F068C;
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 512);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820f068c
	if (!ctx.cr6.eq) goto loc_820F068C;
	// li r11,2
	ctx.r11.s64 = 2;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r4,0
	ctx.r4.s64 = 0;
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stw r11,512(r31)
	REX_STORE_U32(r31.u32 + 512, ctx.r11.u32);
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,4892(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 4892);
	// bl 0x820ea3b8
	ctx.lr = 0x820F068C;
	sub_820EA3B8(ctx, base);
loc_820F068C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,480(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 480);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f30.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - f30.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820f06b4
	if (!ctx.cr6.gt) goto loc_820F06B4;
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 512);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x820f06c0
	if (!ctx.cr6.eq) goto loc_820F06C0;
loc_820F06B4:
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 512);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820f0724
	if (!ctx.cr6.eq) goto loc_820F0724;
loc_820F06C0:
	// lwz r10,416(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 416);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x820f06d4
	if (ctx.cr6.eq) goto loc_820F06D4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820f06f4
	if (!ctx.cr6.eq) goto loc_820F06F4;
loc_820F06D4:
	// li r30,0
	r30.s64 = 0;
loc_820F06D8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82202560
	ctx.lr = 0x820F06E8;
	sub_82202560(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// blt cr6,0x820f06d8
	if (ctx.cr6.lt) goto loc_820F06D8;
loc_820F06F4:
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,512(r31)
	REX_STORE_U32(r31.u32 + 512, ctx.r11.u32);
	// bl 0x820e8628
	ctx.lr = 0x820F0704;
	sub_820E8628(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82202560
	ctx.lr = 0x820F0714;
	sub_82202560(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82202560
	ctx.lr = 0x820F0724;
	sub_82202560(ctx, base);
loc_820F0724:
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 512);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x820f0750
	if (!ctx.cr6.eq) goto loc_820F0750;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r11,-28256(r25)
	REX_STORE_U32(r25.u32 + -28256, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r10.u32);
	// lwz r11,4892(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4892);
	// stw r9,160(r11)
	REX_STORE_U32(ctx.r11.u32 + 160, ctx.r9.u32);
loc_820F0750:
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

DEFINE_REX_FUNC(sub_821075E8) {
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
	ctx.lr = 0x821075FC;
	sub_82106650(ctx, base);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r31,r10,22960
	r31.s64 = ctx.r10.s64 + 22960;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x82106c48
	ctx.lr = 0x82107618;
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
	ctx.lr = 0x8210762C;
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

DEFINE_REX_FUNC(sub_821092C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821092d4
	if (ctx.cr6.eq) goto loc_821092D4;
	// stw r4,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
loc_821092D4:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r9,r3,180
	ctx.r9.s64 = ctx.r3.s64 + 180;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821092E8:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x821092e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821092E8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
	// stw r11,220(r3)
	REX_STORE_U32(ctx.r3.u32 + 220, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,212(r3)
	REX_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// stw r11,224(r3)
	REX_STORE_U32(ctx.r3.u32 + 224, ctx.r11.u32);
	// stw r10,176(r3)
	REX_STORE_U32(ctx.r3.u32 + 176, ctx.r10.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,236(r3)
	REX_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// stw r11,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210DDB8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,23688
	ctx.r11.s64 = ctx.r11.s64 + 23688;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,152(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// addi r9,r9,80
	ctx.r9.s64 = ctx.r9.s64 + 80;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8210de04
	if (ctx.cr6.eq) goto loc_8210DE04;
loc_8210DDD8:
	// lwz r8,120(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 120);
	// li r7,256
	ctx.r7.s64 = 256;
	// stw r7,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r9,80(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8210de04
	if (ctx.cr6.eq) goto loc_8210DE04;
	// lwz r8,152(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,80
	ctx.r9.s64 = ctx.r9.s64 + 80;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8210ddd8
	if (ctx.cr6.lt) goto loc_8210DDD8;
loc_8210DE04:
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,156(r11)
	REX_STORE_U32(ctx.r11.u32 + 156, ctx.r10.u32);
	// stw r9,148(r11)
	REX_STORE_U32(ctx.r11.u32 + 148, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210EE08) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// b 0x8210e1f8
	sub_8210E1F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8210F028) {
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
	ctx.lr = 0x8210F030;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
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
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,28756
	ctx.r6.s64 = ctx.r10.s64 + 28756;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x821f7d50
	ctx.lr = 0x8210F074;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8210f09c
	if (ctx.cr0.eq) goto loc_8210F09C;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8210ee78
	ctx.lr = 0x8210F098;
	sub_8210EE78(ctx, base);
	// b 0x8210f0a0
	goto loc_8210F0A0;
loc_8210F09C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8210F0A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821109F0) {
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
	ctx.lr = 0x821109F8;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lha r11,128(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 128));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lha r30,134(r3)
	r30.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 134));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f1,29340(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 29340);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lha r29,148(r11)
	r29.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 148));
	// bl 0x821f8c30
	ctx.lr = 0x82110A24;
	sub_821F8C30(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r11,26976
	ctx.r3.s64 = ctx.r11.s64 + 26976;
	// bl 0x821eacb0
	ctx.lr = 0x82110A34;
	sub_821EACB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821dcf68
	ctx.lr = 0x82110A40;
	sub_821DCF68(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
	// bne 0x82110a88
	if (!ctx.cr0.eq) goto loc_82110A88;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,15632
	ctx.r11.s64 = ctx.r11.s64 + 15632;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r5,r9,29312
	ctx.r5.s64 = ctx.r9.s64 + 29312;
	// lfs f2,29336(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 29336);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
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
	ctx.lr = 0x82110A84;
	sub_821EAF80(ctx, base);
	// b 0x82110ae4
	goto loc_82110AE4;
loc_82110A88:
	// lha r11,128(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 128));
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lha r10,134(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 134));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r5,344(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 344);
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lha r11,150(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 150));
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821103c0
	ctx.lr = 0x82110AAC;
	sub_821103C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,15632
	ctx.r11.s64 = ctx.r11.s64 + 15632;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f2,29308(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 29308);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r9,29288
	ctx.r5.s64 = ctx.r9.s64 + 29288;
	// lfs f31,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
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
	ctx.lr = 0x82110AE4;
	sub_821EAF80(ctx, base);
loc_82110AE4:
	// lha r11,128(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 128));
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,344(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 344);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lha r11,148(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 148));
	// addis r3,r11,1280
	ctx.r3.s64 = ctx.r11.s64 + 83886080;
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// bl 0x820e68b8
	ctx.lr = 0x82110B04;
	sub_820E68B8(ctx, base);
	// lwz r5,344(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 344);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// li r3,506
	ctx.r3.s64 = 506;
	// bl 0x821103c0
	ctx.lr = 0x82110B18;
	sub_821103C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r5,r10,29276
	ctx.r5.s64 = ctx.r10.s64 + 29276;
	// lfs f2,29284(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 29284);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x82110B48;
	sub_821EAF80(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821f8c30
	ctx.lr = 0x82110B54;
	sub_821F8C30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82116950) {
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
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// ori r7,r10,3696
	ctx.r7.u64 = ctx.r10.u64 | 3696;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r8,r10,-7072
	ctx.r8.s64 = ctx.r10.s64 + -7072;
	// lbz r10,26(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 26);
	// lbz r9,19(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 19);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r30,r10,r8
	r30.u64 = ctx.r10.u64 + ctx.r8.u64;
	// beq 0x82116a2c
	if (ctx.cr0.eq) goto loc_82116A2C;
	// lwz r11,232(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// li r10,14
	ctx.r10.s64 = 14;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,212(r3)
	REX_STORE_U32(ctx.r3.u32 + 212, ctx.r10.u32);
	// beq cr6,0x821169bc
	if (ctx.cr6.eq) goto loc_821169BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8212c2d8
	ctx.lr = 0x821169BC;
	sub_8212C2D8(ctx, base);
loc_821169BC:
	// lhz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 88);
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// beq cr6,0x821169d4
	if (ctx.cr6.eq) goto loc_821169D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,19796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 19796);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821169dc
	goto loc_821169DC;
loc_821169D4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-8488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8488);
	ctx.f0.f64 = double(temp.f32);
loc_821169DC:
	// li r11,24
	ctx.r11.s64 = 24;
	// stfs f0,228(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 228, temp.u32);
	// stw r11,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r11.u32);
	// lha r11,88(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 88));
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bgt cr6,0x82116a08
	if (ctx.cr6.gt) goto loc_82116A08;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,800
	ctx.r10.s64 = ctx.r10.s64 + 800;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82116a0c
	goto loc_82116A0C;
loc_82116A08:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82116A0C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,31708
	ctx.r4.s64 = ctx.r11.s64 + 31708;
	// bl 0x822d55f8
	ctx.lr = 0x82116A1C;
	sub_822D55F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,31704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 31704);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 216, temp.u32);
	// b 0x82116a98
	goto loc_82116A98;
loc_82116A2C:
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x82116a60
	if (!ctx.cr6.eq) goto loc_82116A60;
	// li r11,14
	ctx.r11.s64 = 14;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r11.u32);
	// addi r4,r10,31688
	ctx.r4.s64 = ctx.r10.s64 + 31688;
	// bl 0x822d55f8
	ctx.lr = 0x82116A50;
	sub_822D55F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,22
	ctx.r3.s64 = 22;
	// lfs f0,31684(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 31684);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82116a80
	goto loc_82116A80;
loc_82116A60:
	// li r11,10
	ctx.r11.s64 = 10;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r11.u32);
	// addi r4,r10,31664
	ctx.r4.s64 = ctx.r10.s64 + 31664;
	// bl 0x822d55f8
	ctx.lr = 0x82116A74;
	sub_822D55F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,23
	ctx.r3.s64 = 23;
	// lfs f0,16620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16620);
	ctx.f0.f64 = double(temp.f32);
loc_82116A80:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// stfs f0,216(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 216, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82116a98
	if (ctx.cr6.eq) goto loc_82116A98;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8212bd08
	ctx.lr = 0x82116A98;
	sub_8212BD08(ctx, base);
loc_82116A98:
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

DEFINE_REX_FUNC(sub_8211AAF8) {
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
	ctx.lr = 0x8211AB00;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x8211aa20
	ctx.lr = 0x8211AB18;
	sub_8211AA20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8211aa68
	ctx.lr = 0x8211AB20;
	sub_8211AA68(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lha r11,2(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 2));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x820e1bf0
	ctx.lr = 0x8211AB40;
	sub_820E1BF0(ctx, base);
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1c50
	ctx.lr = 0x8211AB54;
	sub_820E1C50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x8211ab8c
	if (!ctx.cr6.lt) goto loc_8211AB8C;
	// lbz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8211ab80
	if (!ctx.cr0.eq) goto loc_8211AB80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8211ac54
	goto loc_8211AC54;
loc_8211AB80:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8211ac54
	goto loc_8211AC54;
loc_8211AB8C:
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 5);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8211abdc
	if (!ctx.cr6.eq) goto loc_8211ABDC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1c28
	ctx.lr = 0x8211ABA4;
	sub_820E1C28(ctx, base);
	// lha r11,0(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 0));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + r31.u64;
	// bge cr6,0x8211abec
	if (!ctx.cr6.lt) goto loc_8211ABEC;
	// bl 0x820e1bf0
	ctx.lr = 0x8211ABC8;
	sub_820E1BF0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1c28
	ctx.lr = 0x8211ABD4;
	sub_820E1C28(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// ble cr6,0x8211abf0
	if (!ctx.cr6.gt) goto loc_8211ABF0;
loc_8211ABDC:
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x8211ac14
	goto loc_8211AC14;
loc_8211ABEC:
	// bl 0x820e1bf0
	ctx.lr = 0x8211ABF0;
	sub_820E1BF0(ctx, base);
loc_8211ABF0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e22e8
	ctx.lr = 0x8211ABF8;
	sub_820E22E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x820e22e8
	ctx.lr = 0x8211AC04;
	sub_820E22E8(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fcmpu cr6,f31,f1
	ctx.cr6.compare(f31.f64, ctx.f1.f64);
	// bge cr6,0x8211ac14
	if (!ctx.cr6.lt) goto loc_8211AC14;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_8211AC14:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16172(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8211ac50
	if (!ctx.cr6.lt) goto loc_8211AC50;
	// lbz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 4);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8211ac40
	if (!ctx.cr6.eq) goto loc_8211AC40;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-31056(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -31056);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8211ac48
	goto loc_8211AC48;
loc_8211AC40:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-31060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -31060);
	ctx.f13.f64 = double(temp.f32);
loc_8211AC48:
	// fmuls f1,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x8211ac54
	goto loc_8211AC54;
loc_8211AC50:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
loc_8211AC54:
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

DEFINE_REX_FUNC(sub_8211FCB8) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x8211fb50
	ctx.lr = 0x8211FCCC;
	sub_8211FB50(ctx, base);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,9808
	ctx.r11.s64 = ctx.r11.s64 + 9808;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
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

DEFINE_REX_FUNC(sub_82120D28) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,29432
	ctx.r8.s64 = ctx.r11.s64 + 29432;
loc_82120D34:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82120D40:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthx r7,r10,r8
	REX_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u16);
	// bdnz 0x82120d40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82120D40;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// cmpwi cr6,r9,99
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 99, ctx.xer);
	// blt cr6,0x82120d34
	if (ctx.cr6.lt) goto loc_82120D34;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82121D38) {
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
	ctx.lr = 0x82121D40;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x82121c98
	ctx.lr = 0x82121D58;
	sub_82121C98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82121ea4
	if (ctx.cr0.eq) goto loc_82121EA4;
	// lhz r11,98(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 98);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// beq cr6,0x82121ea4
	if (ctx.cr6.eq) goto loc_82121EA4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82121ea4
	if (!ctx.cr6.gt) goto loc_82121EA4;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82121d94
	if (!ctx.cr6.eq) goto loc_82121D94;
	// bl 0x821159c8
	ctx.lr = 0x82121D8C;
	sub_821159C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82121ea4
	if (!ctx.cr0.eq) goto loc_82121EA4;
loc_82121D94:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,344(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 344);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e6930
	ctx.lr = 0x82121DA4;
	sub_820E6930(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// beq cr6,0x82121ea4
	if (ctx.cr6.eq) goto loc_82121EA4;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(r27.s32, -1, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r10,-30260
	ctx.r6.s64 = ctx.r10.s64 + -30260;
	// bne cr6,0x82121e20
	if (!ctx.cr6.eq) goto loc_82121E20;
	// bl 0x821f7d50
	ctx.lr = 0x82121DE4;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82121ea4
	if (ctx.cr0.eq) goto loc_82121EA4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r8,-30284
	ctx.r8.s64 = ctx.r8.s64 + -30284;
	// lfs f0,15632(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15632);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lfs f13,-30264(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -30264);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stfs f13,104(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// b 0x82121e90
	goto loc_82121E90;
loc_82121E20:
	// bl 0x821f7d50
	ctx.lr = 0x82121E24;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82121ea4
	if (ctx.cr0.eq) goto loc_82121EA4;
	// extsw r11,r27
	ctx.r11.s64 = r27.s32;
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
	// lfs f0,15632(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15632);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16204(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16204);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// addi r10,r10,-30284
	ctx.r10.s64 = ctx.r10.s64 + -30284;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// fmuls f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwa r11,84(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 84));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 104, temp.u32);
loc_82121E90:
	// stw r29,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r29.u32);
	// stw r30,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, r30.u32);
	// stw r28,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, r28.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r11,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
loc_82121EA4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82126C20) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-27676
	ctx.r3.s64 = ctx.r11.s64 + -27676;
	// bl 0x82128d58
	ctx.lr = 0x82126C3C;
	sub_82128D58(ctx, base);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r10,-24048
	ctx.r8.s64 = ctx.r10.s64 + -24048;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32166
	ctx.r7.s64 = -2108030976;
	// stb r11,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r11.u8);
	// addi r11,r7,320
	ctx.r11.s64 = ctx.r7.s64 + 320;
	// stb r10,2(r8)
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r10.u8);
	// stb r9,3(r8)
	REX_STORE_U8(ctx.r8.u32 + 3, ctx.r9.u8);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8211fd00
	ctx.lr = 0x82126C6C;
	sub_8211FD00(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f2,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82125860
	ctx.lr = 0x82126C88;
	sub_82125860(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// stfs f0,-27728(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + -27728, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82129618) {
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
	ctx.lr = 0x82129620;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,48
	r31.s64 = ctx.r3.s64 + 48;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x820e1c28
	ctx.lr = 0x82129644;
	sub_820E1C28(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e1c28
	ctx.lr = 0x82129654;
	sub_820E1C28(ctx, base);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 - ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2020(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2020);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x821296c0
	if (ctx.cr6.lt) goto loc_821296C0;
	// lfs f13,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f13,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f31,f12,f0
	f31.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(f31.f64, ctx.f13.f64);
	// blt cr6,0x821296c0
	if (ctx.cr6.lt) goto loc_821296C0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bgt cr6,0x821296c0
	if (ctx.cr6.gt) goto loc_821296C0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x820e2028
	ctx.lr = 0x821296AC;
	sub_820E2028(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x821296b8
	if (ctx.cr6.eq) goto loc_821296B8;
	// stfs f31,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
loc_821296B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821296c4
	goto loc_821296C4;
loc_821296C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821296C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8212ADF8) {
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
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// addi r31,r11,80
	r31.s64 = ctx.r11.s64 + 80;
	// lwz r11,260(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8212ae3c
	if (!ctx.cr6.eq) goto loc_8212AE3C;
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// ld r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U64(r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212ae38
	if (ctx.cr6.eq) goto loc_8212AE38;
	// bl 0x822052b8
	ctx.lr = 0x8212AE34;
	sub_822052B8(ctx, base);
	// b 0x8212ae3c
	goto loc_8212AE3C;
loc_8212AE38:
	// bl 0x821f7908
	ctx.lr = 0x8212AE3C;
	sub_821F7908(ctx, base);
loc_8212AE3C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,-29204
	ctx.r4.s64 = ctx.r11.s64 + -29204;
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// bl 0x822d60a0
	ctx.lr = 0x8212AE50;
	sub_822D60A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8212ae78
	if (!ctx.cr0.eq) goto loc_8212AE78;
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lis r8,-32169
	ctx.r8.s64 = -2108227584;
	// addi r9,r9,-23000
	ctx.r9.s64 = ctx.r9.s64 + -23000;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-23020(r8)
	REX_STORE_U32(ctx.r8.u32 + -23020, ctx.r11.u32);
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
loc_8212AE78:
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lwz r11,20144(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20144);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20144(r10)
	REX_STORE_U32(ctx.r10.u32 + 20144, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8212CC18) {
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
	ctx.lr = 0x8212CC20;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32169
	r30.s64 = -2108227584;
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r28
	r27.u64 = r28.u64;
	// lwz r11,20144(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20144);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bge cr6,0x8212cd00
	if (!ctx.cr6.lt) goto loc_8212CD00;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// addi r6,r3,272
	ctx.r6.s64 = ctx.r3.s64 + 272;
	// addi r9,r11,-21000
	ctx.r9.s64 = ctx.r11.s64 + -21000;
	// addi r8,r10,-21680
	ctx.r8.s64 = ctx.r10.s64 + -21680;
	// addi r7,r7,-21704
	ctx.r7.s64 = ctx.r7.s64 + -21704;
	// li r5,500
	ctx.r5.s64 = 500;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x8212CC6C;
	sub_821F7D50(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8212cc84
	if (ctx.cr0.eq) goto loc_8212CC84;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,31764
	ctx.r10.s64 = ctx.r10.s64 + 31764;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8212cc88
	goto loc_8212CC88;
loc_8212CC84:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_8212CC88:
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212cd00
	if (ctx.cr6.eq) goto loc_8212CD00;
	// lwz r10,20144(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20144);
	// addi r31,r11,80
	r31.s64 = ctx.r11.s64 + 80;
	// li r5,288
	ctx.r5.s64 = 288;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20144(r30)
	REX_STORE_U32(r30.u32 + 20144, ctx.r11.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x8212CCB4;
	sub_822D4FA0(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8212ccd0
	if (ctx.cr6.eq) goto loc_8212CCD0;
	// stb r28,235(r31)
	REX_STORE_U8(r31.u32 + 235, r28.u8);
	// stb r11,234(r31)
	REX_STORE_U8(r31.u32 + 234, ctx.r11.u8);
	// b 0x8212ccd4
	goto loc_8212CCD4;
loc_8212CCD0:
	// stb r11,235(r31)
	REX_STORE_U8(r31.u32 + 235, ctx.r11.u8);
loc_8212CCD4:
	// lbz r10,234(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 234);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8212cd00
	if (!ctx.cr0.gt) goto loc_8212CD00;
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
loc_8212CCE8:
	// stwu r28,16(r10)
	ea = 16 + ctx.r10.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,234(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 234);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8212cce8
	if (ctx.cr6.lt) goto loc_8212CCE8;
loc_8212CD00:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82130408) {
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
	// lha r3,526(r11)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 526));
	// bl 0x821c4fd0
	ctx.lr = 0x82130420;
	sub_821C4FD0(ctx, base);
	// lhz r11,126(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 126);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// bne cr6,0x8213043c
	if (!ctx.cr6.eq) goto loc_8213043C;
	// addi r11,r11,15828
	ctx.r11.s64 = ctx.r11.s64 + 15828;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82130440
	goto loc_82130440;
loc_8213043C:
	// lwz r3,15828(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 15828);
loc_82130440:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82130D88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,20640
	ctx.r11.s64 = ctx.r11.s64 + 20640;
	// stfsx f1,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82131330) {
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
	// bl 0x822d4e68
	ctx.lr = 0x82131338;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x822d4f2c
	ctx.lr = 0x82131340;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// fmr f30,f3
	f30.f64 = ctx.f3.f64;
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// fmr f26,f1
	f26.f64 = ctx.f1.f64;
	// bl 0x820e6960
	ctx.lr = 0x82131364;
	sub_820E6960(ctx, base);
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	f25.f64 = ctx.f1.f64;
	// mr r27,r31
	r27.u64 = r31.u64;
	// li r21,0
	r21.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// bl 0x8212fe30
	ctx.lr = 0x82131378;
	sub_8212FE30(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(f30.f64, ctx.f0.f64);
	// blt cr6,0x821313a4
	if (ctx.cr6.lt) goto loc_821313A4;
	// fcmpu cr6,f30,f13
	ctx.cr6.compare(f30.f64, ctx.f13.f64);
	// ble cr6,0x821313a0
	if (!ctx.cr6.gt) goto loc_821313A0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x821313a4
	goto loc_821313A4;
loc_821313A0:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f30.f64;
loc_821313A4:
	// stfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r11,-25160
	ctx.r3.s64 = ctx.r11.s64 + -25160;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821eacb0
	ctx.lr = 0x821313CC;
	sub_821EACB0(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821316b0
	if (ctx.cr0.eq) goto loc_821316B0;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f28,2028(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2028);
	f28.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfd f27,31912(r6)
	f27.u64 = REX_LOAD_U64(ctx.r6.u32 + 31912);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r24,r11,-25028
	r24.s64 = ctx.r11.s64 + -25028;
	// addi r26,r10,23912
	r26.s64 = ctx.r10.s64 + 23912;
	// addi r23,r9,26976
	r23.s64 = ctx.r9.s64 + 26976;
	// addi r25,r8,21852
	r25.s64 = ctx.r8.s64 + 21852;
	// addi r30,r7,21804
	r30.s64 = ctx.r7.s64 + 21804;
	// addi r22,r6,15980
	r22.s64 = ctx.r6.s64 + 15980;
loc_82131418:
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// b 0x82131438
	goto loc_82131438;
loc_82131424:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82131444
	if (ctx.cr6.eq) goto loc_82131444;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82131444
	if (ctx.cr6.eq) goto loc_82131444;
	// lbzu r11,1(r27)
	ea = 1 + r27.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r27.u32 = ea;
loc_82131438:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// bne cr6,0x82131424
	if (!ctx.cr6.eq) goto loc_82131424;
loc_82131444:
	// subf r31,r4,r27
	r31.u64 = r27.u64 - ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r31,1
	ctx.r5.s64 = r31.s64 + 1;
	// bl 0x822d6450
	ctx.lr = 0x82131454;
	sub_822D6450(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// stbx r10,r31,r11
	REX_STORE_U8(r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// blt cr6,0x821314c8
	if (ctx.cr6.lt) goto loc_821314C8;
	// stfd f27,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, f27.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f27,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f27.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x821eacb0
	ctx.lr = 0x82131488;
	sub_821EACB0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x8213149C;
	sub_821EB1A0(ctx, base);
	// stfd f29,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, f29.u64);
	// stfd f31,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821eacb0
	ctx.lr = 0x821314C0;
	sub_821EACB0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
loc_821314C8:
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82131690
	if (ctx.cr0.eq) goto loc_82131690;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82131678
	if (ctx.cr6.eq) goto loc_82131678;
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// bne cr6,0x82131694
	if (!ctx.cr6.eq) goto loc_82131694;
	// lbzu r11,1(r27)
	ea = 1 + r27.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r27.u32 = ea;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x82131648
	if (ctx.cr6.eq) goto loc_82131648;
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// beq cr6,0x82131624
	if (ctx.cr6.eq) goto loc_82131624;
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// beq cr6,0x821315fc
	if (ctx.cr6.eq) goto loc_821315FC;
	// cmplwi cr6,r11,80
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 80, ctx.xer);
	// beq cr6,0x821315ac
	if (ctx.cr6.eq) goto loc_821315AC;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// beq cr6,0x8213155c
	if (ctx.cr6.eq) goto loc_8213155C;
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// bne cr6,0x82131694
	if (!ctx.cr6.eq) goto loc_82131694;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x8213152C;
	sub_821EB1A0(ctx, base);
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// blt cr6,0x821315f0
	if (ctx.cr6.lt) goto loc_821315F0;
	// stfd f29,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, f29.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f31,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f31.u64);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x82131558;
	sub_821EACB0(ctx, base);
	// b 0x821315f0
	goto loc_821315F0;
loc_8213155C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821303c0
	ctx.lr = 0x82131564;
	sub_821303C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x8213157C;
	sub_821EB1A0(ctx, base);
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// blt cr6,0x821315f0
	if (ctx.cr6.lt) goto loc_821315F0;
	// stfd f31,24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 24, f31.u64);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stfd f29,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f29.u64);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x821315A8;
	sub_821EACB0(ctx, base);
	// b 0x821315f0
	goto loc_821315F0;
loc_821315AC:
	// lwz r31,0(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x821315C4;
	sub_821EB1A0(ctx, base);
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// blt cr6,0x821315f0
	if (ctx.cr6.lt) goto loc_821315F0;
	// stfd f29,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, f29.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f31,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f31.u64);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x821315F0;
	sub_821EACB0(ctx, base);
loc_821315F0:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// b 0x82131694
	goto loc_82131694;
loc_821315FC:
	// fmuls f0,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 * f28.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x82131618
	if (!ctx.cr6.gt) goto loc_82131618;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82131618:
	// oris r4,r11,65433
	ctx.r4.u64 = ctx.r11.u64 | 4288217088;
	// ori r4,r4,6400
	ctx.r4.u64 = ctx.r4.u64 | 6400;
	// b 0x8213166c
	goto loc_8213166C;
loc_82131624:
	// fmuls f0,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 * f28.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x82131640
	if (!ctx.cr6.gt) goto loc_82131640;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82131640:
	// oris r4,r11,65535
	ctx.r4.u64 = ctx.r11.u64 | 4294901760;
	// b 0x8213166c
	goto loc_8213166C;
loc_82131648:
	// fmuls f0,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 * f28.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x82131664
	if (!ctx.cr6.gt) goto loc_82131664;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82131664:
	// li r10,-256
	ctx.r10.s64 = -256;
	// or r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_8213166C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x821eacb0
	ctx.lr = 0x82131674;
	sub_821EACB0(ctx, base);
	// b 0x82131694
	goto loc_82131694;
loc_82131678:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// blt cr6,0x82131684
	if (ctx.cr6.lt) goto loc_82131684;
	// fadds f29,f25,f29
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(f25.f64 + f29.f64));
loc_82131684:
	// fmr f31,f26
	ctx.fpscr.disableFlushMode();
	f31.f64 = f26.f64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x82131694
	goto loc_82131694;
loc_82131690:
	// li r21,1
	r21.s64 = 1;
loc_82131694:
	// extsb. r11,r21
	ctx.r11.s64 = r21.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821316b0
	if (!ctx.cr0.eq) goto loc_821316B0;
	// cmpw cr6,r29,r20
	ctx.cr6.compare<int32_t>(r29.s32, r20.s32, ctx.xer);
	// bge cr6,0x821316b0
	if (!ctx.cr6.lt) goto loc_821316B0;
	// lbzu r11,1(r27)
	ea = 1 + r27.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r27.u32 = ea;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82131418
	if (!ctx.cr0.eq) goto loc_82131418;
loc_821316B0:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x822d4f78
	ctx.lr = 0x821316BC;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_82149D90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82149D98;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-23072
	ctx.r11.s64 = ctx.r11.s64 + -23072;
	// stw r30,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r30.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lbz r11,62(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 62);
	// sth r11,20(r31)
	REX_STORE_U16(r31.u32 + 20, ctx.r11.u16);
	// lbz r11,61(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 61);
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// sth r11,22(r31)
	REX_STORE_U16(r31.u32 + 22, ctx.r11.u16);
	// lfs f13,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f13,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f13,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f3,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0ec8
	ctx.lr = 0x82149E04;
	sub_820E0EC8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f3,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0ec8
	ctx.lr = 0x82149E18;
	sub_820E0EC8(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e0590
	ctx.lr = 0x82149E28;
	sub_820E0590(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1528
	ctx.lr = 0x82149E34;
	sub_820E1528(ctx, base);
	// lfs f0,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,52(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// lfs f0,56(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8214C778) {
	REX_FUNC_PROLOGUE();
	// sth r4,8(r3)
	REX_STORE_U16(ctx.r3.u32 + 8, ctx.r4.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214C798) {
	REX_FUNC_PROLOGUE();
	// lhz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8214c7ac
	if (!ctx.cr0.eq) goto loc_8214C7AC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8214C7AC:
	// lha r3,8(r3)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 8));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214C9C8) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f30
	ctx.lr = 0x8214C9E0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// li r10,60
	ctx.r10.s64 = 60;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r11,1856(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1856);
	// lfs f0,26528(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 26528);
	ctx.f0.f64 = double(temp.f32);
	// divwu r10,r11,r10
	ctx.r10.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// mulli r10,r10,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(60));
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
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
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820e0028
	ctx.lr = 0x8214CA34;
	sub_820E0028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 - f31.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f9,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f8,f1,f31
	ctx.f8.f64 = double(float(ctx.f1.f64 + f31.f64));
	// lfs f0,2008(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,31940(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31940);
	ctx.f13.f64 = double(temp.f32);
	// fadds f30,f9,f0
	f30.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// lfs f12,-30444(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -30444);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2000
	ctx.r11.s64 = ctx.r11.s64 + 2000;
	// lfs f11,16200(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16200);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// fadds f29,f10,f11
	f29.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f26,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f26.f64 = double(temp.f32);
	// fmadds f0,f8,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f12.f64)));
	// fmuls f28,f0,f28
	f28.f64 = double(float(ctx.f0.f64 * f28.f64));
	// lfs f0,2012(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// stfs f28,92(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bne cr6,0x8214caac
	if (!ctx.cr6.eq) goto loc_8214CAAC;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f26,88(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x8214cab4
	goto loc_8214CAB4;
loc_8214CAAC:
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f26,84(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_8214CAB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb2c0
	ctx.lr = 0x8214CABC;
	sub_821EB2C0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f29,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// stfs f30,20(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lfd f3,-19416(r11)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r11.u32 + -19416);
	// addi r5,r10,-19436
	ctx.r5.s64 = ctx.r10.s64 + -19436;
	// stfd f3,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x821eaf80
	ctx.lr = 0x8214CAF4;
	sub_821EAF80(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,-19456
	ctx.r5.s64 = ctx.r9.s64 + -19456;
	// stfs f28,92(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f31,-19440(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -19440);
	f31.f64 = double(temp.f32);
	// lfs f27,-19444(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19444);
	f27.f64 = double(temp.f32);
	// fadds f2,f29,f31
	ctx.f2.f64 = double(float(f29.f64 + f31.f64));
	// fadds f1,f30,f27
	ctx.f1.f64 = double(float(f30.f64 + f27.f64));
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
	ctx.lr = 0x8214CB3C;
	sub_821EAF80(ctx, base);
	// stfs f29,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// stfs f30,20(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// addi r5,r11,-19460
	ctx.r5.s64 = ctx.r11.s64 + -19460;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821eaf80
	ctx.lr = 0x8214CB60;
	sub_821EAF80(ctx, base);
	// fsubs f2,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(f29.f64 - f27.f64));
	// fsubs f1,f30,f31
	ctx.f1.f64 = double(float(f30.f64 - f31.f64));
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f28,f26
	ctx.f0.f64 = double(float(f28.f64 * f26.f64));
	// addi r5,r11,-19472
	ctx.r5.s64 = ctx.r11.s64 + -19472;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x821eaf80
	ctx.lr = 0x8214CB90;
	sub_821EAF80(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f7c
	ctx.lr = 0x8214CB9C;
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

DEFINE_REX_FUNC(sub_8215B500) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e7c
	ctx.lr = 0x8215B508;
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f29.u64);
	// stfd f30,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,536(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 536);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lfs f30,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f30.f64 = double(temp.f32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lfs f0,16372(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16372);
	ctx.f0.f64 = double(temp.f32);
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8215b564
	if (!ctx.cr6.eq) goto loc_8215B564;
	// lfs f13,544(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 544);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f13,544(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 544, temp.u32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
	// ble cr6,0x8215b564
	if (!ctx.cr6.gt) goto loc_8215B564;
	// stfs f30,544(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 544, temp.u32);
loc_8215B564:
	// lwz r11,536(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215b588
	if (!ctx.cr6.eq) goto loc_8215B588;
	// lfs f13,544(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 544);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,544(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 544, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x8215b588
	if (!ctx.cr6.gt) goto loc_8215B588;
	// stfs f30,544(r28)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r28.u32 + 544, temp.u32);
loc_8215B588:
	// lfs f13,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,120(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,120(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,540(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 540);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,540(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 540);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f12,f11,f11
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f10,f13,f13,f0
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fcmpu cr6,f10,f12
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// bge cr6,0x8215b6d4
	if (!ctx.cr6.lt) goto loc_8215B6D4;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215b3c8
	ctx.lr = 0x8215B5DC;
	sub_8215B3C8(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215b3c8
	ctx.lr = 0x8215B5F0;
	sub_8215B3C8(ctx, base);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8215b6d4
	if (!ctx.cr6.gt) goto loc_8215B6D4;
	// lfs f0,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8215b6d4
	if (!ctx.cr6.gt) goto loc_8215B6D4;
	// fsqrts f12,f10
	ctx.f12.f64 = double(float(sqrt(ctx.f10.f64)));
	// lfs f0,544(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 544);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,544(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 544);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// ble cr6,0x8215b630
	if (!ctx.cr6.gt) goto loc_8215B630;
	// fmuls f31,f13,f12
	f31.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// b 0x8215b634
	goto loc_8215B634;
loc_8215B630:
	// fmuls f31,f0,f12
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
loc_8215B634:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820e00c0
	ctx.lr = 0x8215B644;
	sub_820E00C0(ctx, base);
	// lfs f12,548(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 548);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,548(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 548);
	ctx.f11.f64 = double(temp.f32);
	// li r9,32
	ctx.r9.s64 = 32;
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 * ctx.f0.f64));
	// fmuls f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 * ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r31,-16
	ctx.r10.s64 = r31.s64 + -16;
	// addi r11,r30,56
	ctx.r11.s64 = r30.s64 + 56;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r8,r30,r31
	ctx.r8.u64 = r31.u64 - r30.u64;
	// fdivs f10,f30,f10
	ctx.f10.f64 = double(float(f30.f64 / ctx.f10.f64));
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f12,f9,f0
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f11,f10,f13
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
loc_8215B698:
	// lfsx f10,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,64(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fsubs f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfsx f10,r8,r11
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// stfsu f9,64(r10)
	ea = 64 + ctx.r10.u32;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lfs f9,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f9,-8(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bdnz 0x8215b698
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215B698;
	// li r25,1
	r25.s64 = 1;
loc_8215B6D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,536(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 536);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfs f0,16364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16364);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x8215b6ec
	if (!ctx.cr6.eq) goto loc_8215B6EC;
	// stfs f0,544(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 544, temp.u32);
loc_8215B6EC:
	// lwz r11,536(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 536);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8215b6fc
	if (!ctx.cr6.eq) goto loc_8215B6FC;
	// stfs f0,544(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 544, temp.u32);
loc_8215B6FC:
	// lwz r27,512(r29)
	r27.u64 = REX_LOAD_U32(r29.u32 + 512);
	// b 0x8215b72c
	goto loc_8215B72C;
loc_8215B704:
	// lhz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215b728
	if (ctx.cr0.eq) goto loc_8215B728;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215B728;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215B728:
	// lwz r27,24(r27)
	r27.u64 = REX_LOAD_U32(r27.u32 + 24);
loc_8215B72C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8215b704
	if (!ctx.cr6.eq) goto loc_8215B704;
	// lwz r27,512(r28)
	r27.u64 = REX_LOAD_U32(r28.u32 + 512);
	// b 0x8215b764
	goto loc_8215B764;
loc_8215B73C:
	// lhz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215b760
	if (ctx.cr0.eq) goto loc_8215B760;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215B760;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215B760:
	// lwz r27,24(r27)
	r27.u64 = REX_LOAD_U32(r27.u32 + 24);
loc_8215B764:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8215b73c
	if (!ctx.cr6.eq) goto loc_8215B73C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r26,512(r29)
	r26.u64 = REX_LOAD_U32(r29.u32 + 512);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// lfs f30,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f30.f64 = double(temp.f32);
	// fmr f31,f30
	f31.f64 = f30.f64;
	// beq cr6,0x8215b87c
	if (ctx.cr6.eq) goto loc_8215B87C;
loc_8215B784:
	// lhz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215b7d8
	if (ctx.cr0.eq) goto loc_8215B7D8;
	// lwz r27,512(r28)
	r27.u64 = REX_LOAD_U32(r28.u32 + 512);
	// b 0x8215b7d0
	goto loc_8215B7D0;
loc_8215B798:
	// lhz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215b7cc
	if (ctx.cr0.eq) goto loc_8215B7CC;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215B7C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x8215b7cc
	if (!ctx.cr6.gt) goto loc_8215B7CC;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
loc_8215B7CC:
	// lwz r27,24(r27)
	r27.u64 = REX_LOAD_U32(r27.u32 + 24);
loc_8215B7D0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8215b798
	if (!ctx.cr6.eq) goto loc_8215B798;
loc_8215B7D8:
	// lwz r26,24(r26)
	r26.u64 = REX_LOAD_U32(r26.u32 + 24);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x8215b784
	if (!ctx.cr6.eq) goto loc_8215B784;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f30.f64);
	// ble cr6,0x8215b87c
	if (!ctx.cr6.gt) goto loc_8215B87C;
	// lfs f0,548(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 548);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lfs f13,548(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 548);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// fdivs f30,f0,f13
	f30.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x820e00c0
	ctx.lr = 0x8215B80C;
	sub_820E00C0(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// li r9,32
	ctx.r9.s64 = 32;
	// lfs f13,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * f31.f64));
	// addi r10,r31,-16
	ctx.r10.s64 = r31.s64 + -16;
	// addi r11,r30,56
	ctx.r11.s64 = r30.s64 + 56;
	// subf r8,r30,r31
	ctx.r8.u64 = r31.u64 - r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fmuls f0,f12,f30
	ctx.f0.f64 = double(float(ctx.f12.f64 * f30.f64));
	// fmuls f13,f11,f30
	ctx.f13.f64 = double(float(ctx.f11.f64 * f30.f64));
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
loc_8215B840:
	// lfs f9,64(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfsu f9,64(r10)
	ea = 64 + ctx.r10.u32;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lfsx f10,r11,r8
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfsx f10,r11,r8
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// lfs f9,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// lfs f10,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f10,-8(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bdnz 0x8215b840
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215B840;
	// li r25,1
	r25.s64 = 1;
loc_8215B87C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8216C7D0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lha r3,8(r3)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 8));
	// rlwinm. r10,r4,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// beq 0x8216c82c
	if (ctx.cr0.eq) goto loc_8216C82C;
	// lha r10,4(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 4));
loc_8216C7E8:
	// addi r8,r3,-1
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// sth r8,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r8.u16);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8216c808
	if (!ctx.cr6.lt) goto loc_8216C808;
	// lhz r8,6(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// sth r8,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r8.u16);
loc_8216C808:
	// lha r3,8(r11)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 8));
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mulli r7,r3,20
	ctx.r7.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(20));
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8216c7e8
	if (ctx.cr6.eq) goto loc_8216C7E8;
	// blr 
	return;
loc_8216C82C:
	// rlwinm. r10,r4,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lha r10,6(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 6));
loc_8216C838:
	// addi r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 1;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// sth r8,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r8.u16);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8216c858
	if (!ctx.cr6.gt) goto loc_8216C858;
	// lhz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// sth r8,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r8.u16);
loc_8216C858:
	// lha r3,8(r11)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 8));
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mulli r7,r3,20
	ctx.r7.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(20));
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8216c838
	if (ctx.cr6.eq) goto loc_8216C838;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216EE90) {
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
	ctx.lr = 0x8216EE98;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f38
	ctx.lr = 0x8216EEA0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// stw r4,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r4.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r29,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, r29.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lfs f28,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f28.f64 = double(temp.f32);
	// fmr f29,f28
	f29.f64 = f28.f64;
	// bl 0x821eb2c0
	ctx.lr = 0x8216EECC;
	sub_821EB2C0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r25,r31,188
	r25.s64 = r31.s64 + 188;
	// lfd f30,26664(r9)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r9.u32 + 26664);
	// mr r30,r29
	r30.u64 = r29.u64;
	// lfd f31,-7672(r8)
	f31.u64 = REX_LOAD_U64(ctx.r8.u32 + -7672);
	// addi r27,r11,-7688
	r27.s64 = ctx.r11.s64 + -7688;
	// addi r26,r10,-7700
	r26.s64 = ctx.r10.s64 + -7700;
loc_8216EEF4:
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216efa4
	if (ctx.cr6.eq) goto loc_8216EFA4;
	// lwzx r10,r30,r28
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216efa4
	if (ctx.cr6.eq) goto loc_8216EFA4;
	// stfd f31,48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 48, f31.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwzx r8,r30,r11
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821eb1a0
	ctx.lr = 0x8216EF3C;
	sub_821EB1A0(ctx, base);
	// stfd f30,48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 48, f30.u64);
	// stfd f30,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f30.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwzx r8,r30,r28
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821eb1a0
	ctx.lr = 0x8216EF68;
	sub_821EB1A0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8216ef80
	if (!ctx.cr6.lt) goto loc_8216EF80;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8216EF80:
	// add r11,r25,r30
	ctx.r11.u64 = r25.u64 + r30.u64;
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r25,r30
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r25.u32 + r30.u32, temp.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// fadds f29,f0,f29
	f29.f64 = double(float(ctx.f0.f64 + f29.f64));
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r30,24
	ctx.cr6.compare<int32_t>(r30.s32, 24, ctx.xer);
	// stfs f0,-24(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -24, temp.u32);
	// blt cr6,0x8216eef4
	if (ctx.cr6.lt) goto loc_8216EEF4;
loc_8216EFA4:
	// stw r29,136(r31)
	REX_STORE_U32(r31.u32 + 136, r29.u32);
	// addi r11,r29,40
	ctx.r11.s64 = r29.s64 + 40;
	// addi r10,r29,34
	ctx.r10.s64 = r29.s64 + 34;
	// lfs f0,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f28,140(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,140
	ctx.r11.s64 = r31.s64 + 140;
	// lfsx f13,r9,r31
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfsx f0,r10,r31
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + r31.u32, temp.u32);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x8216f004
	if (ctx.cr6.lt) goto loc_8216F004;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lfs f0,124(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - f29.f64));
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// b 0x8216f008
	goto loc_8216F008;
loc_8216F004:
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f28.f64;
loc_8216F008:
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x8216f044
	if (!ctx.cr6.gt) goto loc_8216F044;
loc_8216F01C:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f12,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfsu f13,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8216f01c
	if (ctx.cr6.lt) goto loc_8216F01C;
loc_8216F044:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f84
	ctx.lr = 0x8216F050;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82175878) {
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
	// bl 0x82174f40
	ctx.lr = 0x82175890;
	sub_82174F40(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,100(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,-23604(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23604);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f13,26636(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26636);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,31144(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 31144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x820e1b70
	ctx.lr = 0x821758D0;
	sub_820E1B70(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175904
	if (ctx.cr6.eq) goto loc_82175904;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r11,-256
	ctx.r11.s64 = -256;
	// lfs f0,2028(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2028);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lbz r10,87(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// or r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x82175908
	goto loc_82175908;
loc_82175904:
	// li r5,-1
	ctx.r5.s64 = -1;
loc_82175908:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r10,-6068
	ctx.r3.s64 = ctx.r10.s64 + -6068;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfd f1,26672(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 26672);
	// li r4,1
	ctx.r4.s64 = 1;
	// stfd f1,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.f1.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f1,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f1.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x821eacb0
	ctx.lr = 0x8217593C;
	sub_821EACB0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,152
	ctx.r3.u64 = ctx.r3.u64 | 152;
	// lwz r4,344(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// lwz r31,156(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 156);
	// bl 0x820e68b8
	ctx.lr = 0x82175958;
	sub_820E68B8(ctx, base);
	// lfs f3,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f2,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lfs f1,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r11,-5988
	ctx.r3.s64 = ctx.r11.s64 + -5988;
	// stfd f3,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// bl 0x821eacb0
	ctx.lr = 0x82175990;
	sub_821EACB0(ctx, base);
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

DEFINE_REX_FUNC(sub_821798C8) {
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
	ctx.lr = 0x821798D0;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// lfs f0,-5172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -5172);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x821799c4
	if (!ctx.cr6.gt) goto loc_821799C4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16192(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16192);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821799c4
	if (!ctx.cr6.gt) goto loc_821799C4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-5176(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -5176);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82179928
	if (!ctx.cr6.lt) goto loc_82179928;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821799c0
	if (ctx.cr6.gt) goto loc_821799C0;
loc_82179928:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2372(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2372);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82179948
	if (!ctx.cr6.lt) goto loc_82179948;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-5180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -5180);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x821799c0
	if (ctx.cr6.gt) goto loc_821799C0;
loc_82179948:
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r30,r11,-23616
	r30.s64 = ctx.r11.s64 + -23616;
	// addi r31,r10,7808
	r31.s64 = ctx.r10.s64 + 7808;
	// addi r5,r30,-16
	ctx.r5.s64 = r30.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x820e1ba8
	ctx.lr = 0x82179968;
	sub_820E1BA8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r30,16
	ctx.r5.s64 = r30.s64 + 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// stfs f31,4(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// bl 0x820e1c50
	ctx.lr = 0x82179984;
	sub_820E1C50(ctx, base);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x821799c4
	if (!ctx.cr6.gt) goto loc_821799C4;
	// addi r5,r30,-32
	ctx.r5.s64 = r30.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x820e1ba8
	ctx.lr = 0x821799A0;
	sub_820E1BA8(ctx, base);
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x820e1c50
	ctx.lr = 0x821799B4;
	sub_820E1C50(ctx, base);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x821799c4
	if (!ctx.cr6.gt) goto loc_821799C4;
loc_821799C0:
	// li r28,1
	r28.s64 = 1;
loc_821799C4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8217DC88) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-4812
	ctx.r6.s64 = ctx.r11.s64 + -4812;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,768
	ctx.r4.s64 = 768;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f7d50
	ctx.lr = 0x8217DCC8;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217dcd8
	if (ctx.cr0.eq) goto loc_8217DCD8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8217d510
	ctx.lr = 0x8217DCD8;
	sub_8217D510(ctx, base);
loc_8217DCD8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-4820
	ctx.r6.s64 = ctx.r11.s64 + -4820;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,899
	ctx.r4.s64 = 899;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f7d50
	ctx.lr = 0x8217DCFC;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217dd18
	if (ctx.cr0.eq) goto loc_8217DD18;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8217a250
	ctx.lr = 0x8217DD0C;
	sub_8217A250(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// stw r3,27616(r11)
	REX_STORE_U32(ctx.r11.u32 + 27616, ctx.r3.u32);
	// b 0x8217dd24
	goto loc_8217DD24;
loc_8217DD18:
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,27616(r10)
	REX_STORE_U32(ctx.r10.u32 + 27616, ctx.r11.u32);
loc_8217DD24:
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

DEFINE_REX_FUNC(sub_8217EFD0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f13,16656(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16656);
	ctx.f13.f64 = double(temp.f32);
	// fmr f31,f13
	f31.f64 = ctx.f13.f64;
	// beq cr6,0x8217f028
	if (ctx.cr6.eq) goto loc_8217F028;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217f010
	if (ctx.cr6.eq) goto loc_8217F010;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8217F010:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bgt cr6,0x8217f028
	if (ctx.cr6.gt) goto loc_8217F028;
	// fmr f31,f13
	f31.f64 = ctx.f13.f64;
loc_8217F028:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-4616
	ctx.r6.s64 = ctx.r11.s64 + -4616;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,387
	ctx.r4.s64 = 387;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x8217F04C;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217f078
	if (ctx.cr0.eq) goto loc_8217F078;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f3,16264(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,2360(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2360);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8217e778
	ctx.lr = 0x8217F078;
	sub_8217E778(ctx, base);
loc_8217F078:
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

DEFINE_REX_FUNC(sub_82181270) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8218129C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821812B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821812CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
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

DEFINE_REX_FUNC(sub_82181E78) {
	REX_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,127
	ctx.r9.s64 = 127;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,3088(r3)
	REX_STORE_U32(ctx.r3.u32 + 3088, ctx.r10.u32);
	// stw r10,3092(r3)
	REX_STORE_U32(ctx.r3.u32 + 3092, ctx.r10.u32);
	// stw r9,3096(r3)
	REX_STORE_U32(ctx.r3.u32 + 3096, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821828B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r9,40
	ctx.r9.s64 = 40;
	// addis r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 262144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,6100
	ctx.r10.s64 = ctx.r10.s64 + 6100;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821828CC:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bdnz 0x821828cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821828CC;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r10,40
	ctx.r10.s64 = 40;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,16600(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16600);
	ctx.f0.f64 = double(temp.f32);
	// addis r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 262144;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,6260
	ctx.r9.s64 = ctx.r9.s64 + 6260;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_8218290C:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x8218290c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218290C;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lwz r11,27800(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 27800);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,27800(r10)
	REX_STORE_U32(ctx.r10.u32 + 27800, ctx.r11.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82182950
	if (ctx.cr6.lt) goto loc_82182950;
loc_82182948:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82182950:
	// fsubs f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f0,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f0.f64)));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82182948
	if (ctx.cr6.lt) goto loc_82182948;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// blt cr6,0x82182980
	if (ctx.cr6.lt) goto loc_82182980;
	// li r11,9
	ctx.r11.s64 = 9;
loc_82182980:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821851F8) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82185224
	if (ctx.cr6.eq) goto loc_82185224;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82185280
	goto loc_82185280;
loc_82185224:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// addi r10,r31,36
	ctx.r10.s64 = r31.s64 + 36;
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x822d5870
	ctx.lr = 0x8218526C;
	sub_822D5870(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stb r11,436(r31)
	REX_STORE_U8(r31.u32 + 436, ctx.r11.u8);
loc_82185280:
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

DEFINE_REX_FUNC(sub_82187BD8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82187F28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82187F30;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82187f84
	if (!ctx.cr0.eq) goto loc_82187F84;
	// li r11,19
	ctx.r11.s64 = 19;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// bl 0x82187cb0
	ctx.lr = 0x82187F64;
	sub_82187CB0(ctx, base);
	// b 0x82187f90
	goto loc_82187F90;
loc_82187F68:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187F80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_82187F84:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82187f68
	if (!ctx.cr6.eq) goto loc_82187F68;
loc_82187F90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82188FE0) {
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
	// addi r11,r11,-3908
	ctx.r11.s64 = ctx.r11.s64 + -3908;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82181a48
	ctx.lr = 0x8218900C;
	sub_82181A48(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8218901c
	if (ctx.cr0.eq) goto loc_8218901C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x8218901C;
	sub_822C80A8(ctx, base);
loc_8218901C:
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

DEFINE_REX_FUNC(sub_8218A548) {
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
	// bgt cr6,0x8218a560
	if (ctx.cr6.gt) goto loc_8218A560;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
loc_8218A560:
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r11,2
	ctx.r11.s64 = 2;
	// fsubs f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f2,16(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stfs f1,28(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218C0E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,-32480
	ctx.r11.s64 = ctx.r11.s64 + -32480;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r8,-32169
	ctx.r8.s64 = -2108227584;
	// addi r7,r10,30520
	ctx.r7.s64 = ctx.r10.s64 + 30520;
	// lfs f0,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,30488
	ctx.r8.s64 = ctx.r8.s64 + 30488;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,16
	ctx.r4.s64 = 16;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stb r6,10(r11)
	REX_STORE_U8(ctx.r11.u32 + 10, ctx.r6.u8);
	// stw r8,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// lwz r11,52(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 52);
	// stb r10,24(r9)
	REX_STORE_U8(ctx.r9.u32 + 24, ctx.r10.u8);
	// stb r5,25(r9)
	REX_STORE_U8(ctx.r9.u32 + 25, ctx.r5.u8);
	// stb r4,26(r9)
	REX_STORE_U8(ctx.r9.u32 + 26, ctx.r4.u8);
	// stb r10,28(r9)
	REX_STORE_U8(ctx.r9.u32 + 28, ctx.r10.u8);
	// stw r11,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// stb r10,29(r9)
	REX_STORE_U8(ctx.r9.u32 + 29, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218DF90) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lha r11,90(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 90));
	// addi r10,r10,30376
	ctx.r10.s64 = ctx.r10.s64 + 30376;
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// addi r8,r9,-16660
	ctx.r8.s64 = ctx.r9.s64 + -16660;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// subfc r8,r8,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r8.u32;
	ctx.r8.u64 = ctx.r3.u64 - ctx.r8.u64;
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// subfe r9,r9,r7
	temp.u8 = (~ctx.r9.u32 + ctx.r7.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 & ctx.r3.u64;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218ED90) {
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
	ctx.lr = 0x8218ED98;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f38
	ctx.lr = 0x8218EDA0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8218ef1c
	if (!ctx.cr6.eq) goto loc_8218EF1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r29,5
	r29.s64 = 5;
	// addi r11,r11,11672
	ctx.r11.s64 = ctx.r11.s64 + 11672;
	// addi r30,r11,12
	r30.s64 = ctx.r11.s64 + 12;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f30.f64 = double(temp.f32);
	// lfs f28,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f28.f64 = double(temp.f32);
loc_8218EDD4:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r30,-12
	ctx.r3.s64 = r30.s64 + -12;
	// fadds f31,f0,f30
	f31.f64 = double(float(ctx.f0.f64 + f30.f64));
	// bl 0x821617a8
	ctx.lr = 0x8218EDE8;
	sub_821617A8(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
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
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// ble cr6,0x8218ee0c
	if (!ctx.cr6.gt) goto loc_8218EE0C;
	// fmr f31,f28
	f31.f64 = f28.f64;
loc_8218EE0C:
	// stfs f31,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// bne 0x8218edd4
	if (!ctx.cr0.eq) goto loc_8218EDD4;
	// lwz r29,8(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x8218ef1c
	if (ctx.cr6.eq) goto loc_8218EF1C;
	// lfs f0,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	f30.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f31,f0,f30
	f31.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lwz r30,20(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lfs f0,16204(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16204);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,2024(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2024);
	f29.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// ble cr6,0x8218ee7c
	if (!ctx.cr6.gt) goto loc_8218EE7C;
	// fmuls f13,f30,f29
	ctx.f13.f64 = double(float(f30.f64 * f29.f64));
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 - ctx.f0.f64));
	// fsubs f31,f0,f13
	f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x821feec8
	ctx.lr = 0x8218EE64;
	sub_821FEEC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,26932(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26932);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2332(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2332);
	ctx.f13.f64 = double(temp.f32);
	// fnmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
loc_8218EE7C:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// bne cr6,0x8218eec4
	if (!ctx.cr6.eq) goto loc_8218EEC4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8218eec4
	if (!ctx.cr6.gt) goto loc_8218EEC4;
	// fcmpu cr6,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f30.f64, f28.f64);
	// bge cr6,0x8218eec4
	if (!ctx.cr6.lt) goto loc_8218EEC4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16308(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16308);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x8218eec4
	if (!ctx.cr6.lt) goto loc_8218EEC4;
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - f31.f64));
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lfs f12,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// fmuls f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * f29.f64));
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// fadds f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_8218EEC4:
	// lfs f30,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// bge cr6,0x8218ef18
	if (!ctx.cr6.lt) goto loc_8218EF18;
	// lfs f0,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// beq cr6,0x8218ef08
	if (ctx.cr6.eq) goto loc_8218EF08;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(r29.s32, 3, ctx.xer);
	// beq cr6,0x8218ef08
	if (ctx.cr6.eq) goto loc_8218EF08;
	// bl 0x821fecf8
	ctx.lr = 0x8218EEF0;
	sub_821FECF8(ctx, base);
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 - f30.f64));
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 - ctx.f0.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// b 0x8218ef1c
	goto loc_8218EF1C;
loc_8218EF08:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8218ec90
	ctx.lr = 0x8218EF14;
	sub_8218EC90(ctx, base);
	// b 0x8218ef1c
	goto loc_8218EF1C;
loc_8218EF18:
	// stfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
loc_8218EF1C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f84
	ctx.lr = 0x8218EF28;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82199550) {
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
	// lwz r3,128(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// bl 0x820e73c0
	ctx.lr = 0x8219956C;
	sub_820E73C0(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 132);
	// bl 0x820e73c0
	ctx.lr = 0x82199574;
	sub_820E73C0(ctx, base);
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// bl 0x820e73c0
	ctx.lr = 0x8219957C;
	sub_820E73C0(ctx, base);
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

DEFINE_REX_FUNC(sub_82199F58) {
	REX_FUNC_PROLOGUE();
	// mulli r11,r4,88
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(88));
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82199cf0
	sub_82199CF0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8219A2F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,2
	ctx.r11.s64 = 2;
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// addi r9,r9,32056
	ctx.r9.s64 = ctx.r9.s64 + 32056;
	// mulli r8,r8,14
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(14));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r10,-9752
	ctx.r10.s64 = ctx.r10.s64 + -9752;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r9,r10,976
	ctx.r9.s64 = ctx.r10.s64 + 976;
loc_8219A31C:
	// lwzu r7,88(r9)
	ea = 88 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// stbx r7,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8219a31c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219A31C;
	// lbz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 12);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-80
	ctx.r10.s64 = ctx.r10.s64 + -80;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219A34C:
	// lwzu r9,88(r10)
	ea = 88 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// stbx r9,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8219a34c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219A34C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219B800) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8219B808;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r30,r11,r7
	r30.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r29,r10,r7
	r29.u64 = ctx.r10.u64 + ctx.r7.u64;
	// beq cr6,0x8219b878
	if (ctx.cr6.eq) goto loc_8219B878;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f12,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f11,16(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lfs f10,20(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f1,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e20b0
	ctx.lr = 0x8219B878;
	sub_820E20B0(ctx, base);
loc_8219B878:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8219b8c0
	if (ctx.cr6.eq) goto loc_8219B8C0;
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f0,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f13,48(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f13,52(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f13,56(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
loc_8219B8C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8219FA90) {
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
	// mulli r4,r11,4224
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(4224));
	// lwz r3,496(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 496);
	// b 0x82190670
	sub_82190670(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A0810) {
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
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e68
	ctx.lr = 0x821A0818;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x822d4f34
	ctx.lr = 0x821A0820;
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,76(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// li r25,0
	r25.s64 = 0;
	// lwz r26,12(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mulli r11,r11,3072
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(3072));
	// lwz r31,4(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 4);
	// add r20,r11,r26
	r20.u64 = ctx.r11.u64 + r26.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821a09fc
	if (ctx.cr6.eq) goto loc_821A09FC;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lis r8,-32174
	ctx.r8.s64 = -2108555264;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// lfs f28,16308(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16308);
	f28.f64 = double(temp.f32);
	// lfs f29,1996(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1996);
	f29.f64 = double(temp.f32);
	// addi r23,r10,-28652
	r23.s64 = ctx.r10.s64 + -28652;
	// addi r22,r9,-28668
	r22.s64 = ctx.r9.s64 + -28668;
	// addi r21,r8,11856
	r21.s64 = ctx.r8.s64 + 11856;
	// addi r29,r11,11840
	r29.s64 = ctx.r11.s64 + 11840;
loc_821A087C:
	// lwz r11,24(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 24);
	// addi r10,r31,36
	ctx.r10.s64 = r31.s64 + 36;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a089c
	if (!ctx.cr6.eq) goto loc_821A089C;
	// lfs f30,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f30.f64 = double(temp.f32);
	// b 0x821a08b4
	goto loc_821A08B4;
loc_821A089C:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f30,r9,r11
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	f30.f64 = double(temp.f32);
loc_821A08B4:
	// lwz r11,52(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 52);
	// addi r9,r10,24
	ctx.r9.s64 = ctx.r10.s64 + 24;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x821a0930
	if (ctx.cr6.eq) goto loc_821A0930;
	// lwz r10,60(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 60);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a08ec
	if (ctx.cr6.eq) goto loc_821A08EC;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r7,r10
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
loc_821A08EC:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x821a08f8
	if (!ctx.cr6.lt) goto loc_821A08F8;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
loc_821A08F8:
	// lhz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// lhz r10,10(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
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
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
loc_821A0930:
	// lwz r11,76(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a0944
	if (!ctx.cr6.eq) goto loc_821A0944;
	// lfs f31,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	f31.f64 = double(temp.f32);
	// b 0x821a095c
	goto loc_821A095C;
loc_821A0944:
	// lfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f31,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	f31.f64 = double(temp.f32);
loc_821A095C:
	// lwz r11,56(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 56);
	// lfs f0,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lfs f27,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f27.f64 = double(temp.f32);
	// addi r7,r31,212
	ctx.r7.s64 = r31.s64 + 212;
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 20);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r30,r11,84
	r30.s64 = ctx.r11.s64 + 84;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// bl 0x821a6e18
	ctx.lr = 0x821A09A8;
	sub_821A6E18(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// add r4,r11,r20
	ctx.r4.u64 = ctx.r11.u64 + r20.u64;
	// bl 0x821a7060
	ctx.lr = 0x821A09C4;
	sub_821A7060(ctx, base);
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// fmuls f2,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(f30.f64 * f28.f64));
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// fmuls f1,f27,f31
	ctx.f1.f64 = double(float(f27.f64 * f31.f64));
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821a7308
	ctx.lr = 0x821A09E8;
	sub_821A7308(ctx, base);
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x821a087c
	if (!ctx.cr6.eq) goto loc_821A087C;
loc_821A09FC:
	// mulli r11,r25,48
	ctx.r11.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(48));
	// sth r11,8(r27)
	REX_STORE_U16(r27.u32 + 8, ctx.r11.u16);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x821a0a14
	if (ctx.cr6.eq) goto loc_821A0A14;
	// lbz r3,24(r27)
	ctx.r3.u64 = REX_LOAD_U8(r27.u32 + 24);
	// bl 0x8218c0a8
	ctx.lr = 0x821A0A14;
	sub_8218C0A8(ctx, base);
loc_821A0A14:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x822d4f80
	ctx.lr = 0x821A0A20;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_821A8EC0) {
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
	// beq cr6,0x821a8f2c
	if (ctx.cr6.eq) goto loc_821A8F2C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82208d78
	ctx.lr = 0x821A8EF0;
	sub_82208D78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821a8f08
	if (!ctx.cr0.eq) goto loc_821A8F08;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a8f2c
	if (!ctx.cr6.eq) goto loc_821A8F2C;
	// b 0x821a8f1c
	goto loc_821A8F1C;
loc_821A8F08:
	// cmplwi cr6,r3,1223
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1223, ctx.xer);
	// beq cr6,0x821a8f1c
	if (ctx.cr6.eq) goto loc_821A8F1C;
	// cmplwi cr6,r3,1627
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1627, ctx.xer);
	// li r10,6
	ctx.r10.s64 = 6;
	// bne cr6,0x821a8f20
	if (!ctx.cr6.eq) goto loc_821A8F20;
loc_821A8F1C:
	// li r10,20
	ctx.r10.s64 = 20;
loc_821A8F20:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stb r11,88(r31)
	REX_STORE_U8(r31.u32 + 88, ctx.r11.u8);
loc_821A8F2C:
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

DEFINE_REX_FUNC(sub_821AA210) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// stw r11,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r11.u32);
	// stw r11,316(r31)
	REX_STORE_U32(r31.u32 + 316, ctx.r11.u32);
	// stw r11,320(r31)
	REX_STORE_U32(r31.u32 + 320, ctx.r11.u32);
	// stb r11,324(r31)
	REX_STORE_U8(r31.u32 + 324, ctx.r11.u8);
	// stb r11,325(r31)
	REX_STORE_U8(r31.u32 + 325, ctx.r11.u8);
	// bl 0x822d5870
	ctx.lr = 0x821AA268;
	sub_822D5870(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// addi r4,r11,7592
	ctx.r4.s64 = ctx.r11.s64 + 7592;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x822091c8
	ctx.lr = 0x821AA27C;
	sub_822091C8(ctx, base);
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

DEFINE_REX_FUNC(sub_821ABA28) {
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
	// bl 0x82187b58
	ctx.lr = 0x821ABA40;
	sub_82187B58(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// bne cr6,0x821aba50
	if (!ctx.cr6.eq) goto loc_821ABA50;
	// li r4,0
	ctx.r4.s64 = 0;
loc_821ABA50:
	// bl 0x82187ff8
	ctx.lr = 0x821ABA54;
	sub_82187FF8(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aba68
	if (ctx.cr6.eq) goto loc_821ABA68;
	// lwz r3,140(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// bl 0x82101d68
	ctx.lr = 0x821ABA68;
	sub_82101D68(ctx, base);
loc_821ABA68:
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

DEFINE_REX_FUNC(sub_821AFBF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32165
	ctx.r7.s64 = -2107965440;
	// addi r6,r10,-7176
	ctx.r6.s64 = ctx.r10.s64 + -7176;
	// lwz r10,7840(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 7840);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// lis r4,-32168
	ctx.r4.s64 = -2108162048;
	// lfs f0,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r7,13128
	ctx.r7.s64 = ctx.r7.s64 + 13128;
	// lfs f13,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,84(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 84, temp.u32);
	// stw r11,-9960(r5)
	REX_STORE_U32(ctx.r5.u32 + -9960, ctx.r11.u32);
	// stfs f13,-9964(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + -9964, temp.u32);
	// stfs f0,80(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 80, temp.u32);
	// stb r9,1824(r7)
	REX_STORE_U8(ctx.r7.u32 + 1824, ctx.r9.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B0F58) {
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
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x821b0fa0
	if (!ctx.cr6.gt) goto loc_821B0FA0;
	// addi r10,r8,-6
	ctx.r10.s64 = ctx.r8.s64 + -6;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B0F80:
	// lha r8,6(r10)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 6));
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// lhau r9,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r10.u32 = ea;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// stwx r8,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r8.u32);
	// stwx r9,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821b0f80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B0F80;
loc_821B0FA0:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// bl 0x821e5820
	ctx.lr = 0x821B0FAC;
	sub_821E5820(ctx, base);
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

DEFINE_REX_FUNC(sub_821B2480) {
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
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821b24c0
	if (!ctx.cr6.eq) goto loc_821B24C0;
	// bl 0x821b2310
	ctx.lr = 0x821B24AC;
	sub_821B2310(ctx, base);
	// bl 0x821de1a8
	ctx.lr = 0x821B24B0;
	sub_821DE1A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821df2f0
	ctx.lr = 0x821B24BC;
	sub_821DF2F0(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
loc_821B24C0:
	// lis r30,-32173
	r30.s64 = -2108489728;
	// lwz r10,-29244(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + -29244);
	// addi r10,r10,-131
	ctx.r10.s64 = ctx.r10.s64 + -131;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821b24f0
	if (!ctx.cr6.eq) goto loc_821B24F0;
	// bl 0x821dde08
	ctx.lr = 0x821B24D8;
	sub_821DDE08(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821b2520
	if (ctx.cr0.eq) goto loc_821B2520;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// b 0x821b2520
	goto loc_821B2520;
loc_821B24F0:
	// lwz r10,-29244(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + -29244);
	// addi r10,r10,-130
	ctx.r10.s64 = ctx.r10.s64 + -130;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821b2520
	if (!ctx.cr6.eq) goto loc_821B2520;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f3,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x821afa50
	ctx.lr = 0x821B251C;
	sub_821AFA50(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
loc_821B2520:
	// lwz r10,-29244(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + -29244);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821b254c
	if (ctx.cr6.lt) goto loc_821B254C;
	// lbz r11,2970(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2970);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821b2540
	if (!ctx.cr0.eq) goto loc_821B2540;
	// bl 0x821b23a0
	ctx.lr = 0x821B253C;
	sub_821B23A0(ctx, base);
	// b 0x821b254c
	goto loc_821B254C;
loc_821B2540:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x821d45b0
	ctx.lr = 0x821B254C;
	sub_821D45B0(ctx, base);
loc_821B254C:
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

DEFINE_REX_FUNC(sub_821BC4D8) {
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
	ctx.lr = 0x821BC4E0;
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f29.u64);
	// stfd f30,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// li r24,7
	r24.s64 = 7;
	// addi r27,r10,-7072
	r27.s64 = ctx.r10.s64 + -7072;
	// lha r11,30(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 30));
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821bc55c
	if (ctx.cr6.eq) goto loc_821BC55C;
	// ble cr6,0x821bc588
	if (!ctx.cr6.gt) goto loc_821BC588;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x821bc540
	if (!ctx.cr6.gt) goto loc_821BC540;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821bc540
	if (ctx.cr6.eq) goto loc_821BC540;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x821bc540
	if (ctx.cr6.eq) goto loc_821BC540;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x821bc540
	if (ctx.cr6.eq) goto loc_821BC540;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bne cr6,0x821bc588
	if (!ctx.cr6.eq) goto loc_821BC588;
loc_821BC540:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x821bc588
	if (!ctx.cr6.eq) goto loc_821BC588;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,3780
	ctx.r9.u64 = ctx.r11.u64 | 3780;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821bc57c
	goto loc_821BC57C;
loc_821BC55C:
	// lhz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 32);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x821bc540
	if (!ctx.cr6.eq) goto loc_821BC540;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,3780
	ctx.r9.u64 = ctx.r11.u64 | 3780;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r24,10
	r24.s64 = 10;
loc_821BC57C:
	// stw r11,84(r27)
	REX_STORE_U32(r27.u32 + 84, ctx.r11.u32);
	// stwx r10,r27,r9
	REX_STORE_U32(r27.u32 + ctx.r9.u32, ctx.r10.u32);
	// b 0x821bc598
	goto loc_821BC598;
loc_821BC588:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,84(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 84);
	// ori r10,r10,3780
	ctx.r10.u64 = ctx.r10.u64 | 3780;
	// lwzx r10,r27,r10
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + ctx.r10.u32);
loc_821BC598:
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// lis r7,-32166
	ctx.r7.s64 = -2108030976;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// addi r26,r9,-9912
	r26.s64 = ctx.r9.s64 + -9912;
	// addi r25,r8,13128
	r25.s64 = ctx.r8.s64 + 13128;
	// addi r29,r7,320
	r29.s64 = ctx.r7.s64 + 320;
	// blt cr6,0x821bc65c
	if (ctx.cr6.lt) goto loc_821BC65C;
	// beq cr6,0x821bc5f8
	if (ctx.cr6.eq) goto loc_821BC5F8;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// beq cr6,0x821bc5f0
	if (ctx.cr6.eq) goto loc_821BC5F0;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// beq cr6,0x821bc5e8
	if (ctx.cr6.eq) goto loc_821BC5E8;
	// cmplwi cr6,r6,40
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 40, ctx.xer);
	// bne cr6,0x821bc7b0
	if (!ctx.cr6.eq) goto loc_821BC7B0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8212ee78
	ctx.lr = 0x821BC5E4;
	sub_8212EE78(ctx, base);
	// b 0x821bc7b0
	goto loc_821BC7B0;
loc_821BC5E8:
	// bl 0x821b1c28
	ctx.lr = 0x821BC5EC;
	sub_821B1C28(ctx, base);
	// b 0x821bc7b0
	goto loc_821BC7B0;
loc_821BC5F0:
	// bl 0x821d17d8
	ctx.lr = 0x821BC5F4;
	sub_821D17D8(ctx, base);
	// b 0x821bc7b0
	goto loc_821BC7B0;
loc_821BC5F8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821bc624
	if (!ctx.cr6.eq) goto loc_821BC624;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821afef0
	ctx.lr = 0x821BC608;
	sub_821AFEF0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8212e440
	ctx.lr = 0x821BC618;
	sub_8212E440(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,84(r27)
	REX_STORE_U32(r27.u32 + 84, ctx.r11.u32);
	// b 0x821bc7b0
	goto loc_821BC7B0;
loc_821BC624:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x821bc7b0
	if (!ctx.cr6.eq) goto loc_821BC7B0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821afef0
	ctx.lr = 0x821BC634;
	sub_821AFEF0(ctx, base);
	// addis r11,r27,1
	ctx.r11.s64 = r27.s64 + 65536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x8212e440
	ctx.lr = 0x821BC648;
	sub_8212E440(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r11,-1
	ctx.r11.s64 = -1;
	// ori r10,r10,3780
	ctx.r10.u64 = ctx.r10.u64 | 3780;
	// stwx r11,r27,r10
	REX_STORE_U32(r27.u32 + ctx.r10.u32, ctx.r11.u32);
	// b 0x821bc7b0
	goto loc_821BC7B0;
loc_821BC65C:
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x821BC668;
	sub_821D6210(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212c708
	ctx.lr = 0x821BC674;
	sub_8212C708(ctx, base);
	// bl 0x821afbf0
	ctx.lr = 0x821BC678;
	sub_821AFBF0(ctx, base);
	// bl 0x821afed8
	ctx.lr = 0x821BC67C;
	sub_821AFED8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821afef0
	ctx.lr = 0x821BC684;
	sub_821AFEF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8212ec38
	ctx.lr = 0x821BC694;
	sub_8212EC38(ctx, base);
	// lwz r11,516(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 516);
	// sth r11,32(r31)
	REX_STORE_U16(r31.u32 + 32, ctx.r11.u16);
	// bl 0x821b9e40
	ctx.lr = 0x821BC6A0;
	sub_821B9E40(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820f1090
	ctx.lr = 0x821BC6B8;
	sub_820F1090(ctx, base);
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 44);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// bl 0x820f0cb8
	ctx.lr = 0x821BC6C8;
	sub_820F0CB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// sth r11,308(r31)
	REX_STORE_U16(r31.u32 + 308, ctx.r11.u16);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c9e88
	ctx.lr = 0x821BC6E4;
	sub_821C9E88(ctx, base);
	// addis r11,r27,1
	ctx.r11.s64 = r27.s64 + 65536;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c9e88
	ctx.lr = 0x821BC6FC;
	sub_821C9E88(ctx, base);
	// lhz r11,30(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 30);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x821bc790
	if (!ctx.cr6.eq) goto loc_821BC790;
	// lwz r30,216(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 216);
	// bl 0x82135998
	ctx.lr = 0x821BC710;
	sub_82135998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821bc780
	if (ctx.cr0.eq) goto loc_821BC780;
	// bl 0x82135b68
	ctx.lr = 0x821BC71C;
	sub_82135B68(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// bl 0x821d5758
	ctx.lr = 0x821BC72C;
	sub_821D5758(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// fadds f31,f1,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 + f31.f64));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c54e0
	ctx.lr = 0x821BC73C;
	sub_821C54E0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// lfs f3,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x821ca5a0
	ctx.lr = 0x821BC758;
	sub_821CA5A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821cd298
	ctx.lr = 0x821BC760;
	sub_821CD298(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c9e88
	ctx.lr = 0x821BC774;
	sub_821C9E88(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r26)
	REX_STORE_U32(r26.u32 + 88, ctx.r11.u32);
	// b 0x821bc790
	goto loc_821BC790;
loc_821BC780:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x82140a28
	ctx.lr = 0x821BC78C;
	sub_82140A28(ctx, base);
	// stw r3,88(r26)
	REX_STORE_U32(r26.u32 + 88, ctx.r3.u32);
loc_821BC790:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1840(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 1840);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,15628(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15628);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
loc_821BC7B0:
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r30,r10,-29280
	r30.s64 = ctx.r10.s64 + -29280;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r30,-88
	ctx.r10.s64 = r30.s64 + -88;
	// lwzx r28,r11,r10
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82135998
	ctx.lr = 0x821BC7CC;
	sub_82135998(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,10224
	ctx.r5.s64 = ctx.r11.s64 + 10224;
	// bne 0x821bc83c
	if (!ctx.cr0.eq) goto loc_821BC83C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x821BC7EC;
	sub_821EB1A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r4,255
	ctx.r4.s64 = 16711680;
	// lfs f0,16036(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16036);
	ctx.f0.f64 = double(temp.f32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f13,26832(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 26832);
	ctx.f13.f64 = double(temp.f32);
	// lfd f2,10216(r10)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r10.u32 + 10216);
	// addi r3,r8,10200
	ctx.r3.s64 = ctx.r8.s64 + 10200;
	// stfd f2,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ori r4,r4,255
	ctx.r4.u64 = ctx.r4.u64 | 255;
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x821BC838;
	sub_821EACB0(ctx, base);
	// b 0x821bc92c
	goto loc_821BC92C;
loc_821BC83C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821eb1a0
	ctx.lr = 0x821BC848;
	sub_821EB1A0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x821bc86c
	if (!ctx.cr6.eq) goto loc_821BC86C;
	// bl 0x8212c208
	ctx.lr = 0x821BC85C;
	sub_8212C208(ctx, base);
	// addi r11,r30,16
	ctx.r11.s64 = r30.s64 + 16;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x821bc878
	goto loc_821BC878;
loc_821BC86C:
	// bl 0x8212c208
	ctx.lr = 0x821BC870;
	sub_8212C208(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r30
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
loc_821BC878:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,28092
	ctx.r5.s64 = ctx.r11.s64 + 28092;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821eb1a0
	ctx.lr = 0x821BC890;
	sub_821EB1A0(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821bc8a4
	if (ctx.cr6.lt) goto loc_821BC8A4;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_821BC8A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f0,16036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16036);
	ctx.f0.f64 = double(temp.f32);
	// lis r4,255
	ctx.r4.s64 = 16711680;
	// fsubs f30,f0,f13
	f30.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,26932(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26932);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,26832(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 26832);
	f31.f64 = double(temp.f32);
	// addi r3,r7,10200
	ctx.r3.s64 = ctx.r7.s64 + 10200;
	// lfd f2,-23856(r9)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r9.u32 + -23856);
	// ori r4,r4,255
	ctx.r4.u64 = ctx.r4.u64 | 255;
	// stfd f2,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 - ctx.f0.f64));
	// fsubs f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 - f31.f64));
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x821BC8F8;
	sub_821EACB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f1,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f30.f64 - f31.f64));
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r4,255
	ctx.r4.s64 = 16711680;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lfd f2,10216(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 10216);
	// addi r3,r10,10184
	ctx.r3.s64 = ctx.r10.s64 + 10184;
	// stfd f2,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ori r4,r4,255
	ctx.r4.u64 = ctx.r4.u64 | 255;
	// bl 0x821eacb0
	ctx.lr = 0x821BC92C;
	sub_821EACB0(ctx, base);
loc_821BC92C:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bcbf0
	if (!ctx.cr6.eq) goto loc_821BCBF0;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// ble cr6,0x821bcbf0
	if (!ctx.cr6.gt) goto loc_821BCBF0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lbz r8,6(r27)
	ctx.r8.u64 = REX_LOAD_U8(r27.u32 + 6);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r30,r11,9936
	r30.s64 = ctx.r11.s64 + 9936;
	// lfs f29,9948(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 9948);
	f29.f64 = double(temp.f32);
	// lfs f30,15632(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15632);
	f30.f64 = double(temp.f32);
	// bne 0x821bca7c
	if (!ctx.cr0.eq) goto loc_821BCA7C;
	// bl 0x821159c8
	ctx.lr = 0x821BC96C;
	sub_821159C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821bca7c
	if (!ctx.cr0.eq) goto loc_821BCA7C;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x821bca7c
	if (ctx.cr6.lt) goto loc_821BCA7C;
	// cmpwi cr6,r11,720
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 720, ctx.xer);
	// bge cr6,0x821bca7c
	if (!ctx.cr6.lt) goto loc_821BCA7C;
	// lha r10,30(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 30));
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// bne cr6,0x821bc9a0
	if (!ctx.cr6.eq) goto loc_821BC9A0;
	// cmpwi cr6,r9,20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 20, ctx.xer);
	// bne cr6,0x821bca7c
	if (!ctx.cr6.eq) goto loc_821BCA7C;
loc_821BC9A0:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bca7c
	if (!ctx.cr6.eq) goto loc_821BCA7C;
	// lbz r11,6(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 6);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821bca7c
	if (!ctx.cr0.eq) goto loc_821BCA7C;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bne cr6,0x821bc9f0
	if (!ctx.cr6.eq) goto loc_821BC9F0;
	// lbz r11,18(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 18);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821bc9f0
	if (ctx.cr0.eq) goto loc_821BC9F0;
	// lbz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 14);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821bc9f0
	if (ctx.cr0.eq) goto loc_821BC9F0;
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 0);
	// lbz r10,27(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 27);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821bca7c
	if (ctx.cr6.eq) goto loc_821BCA7C;
loc_821BC9F0:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bca58
	if (!ctx.cr6.eq) goto loc_821BCA58;
	// lwz r11,1852(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 1852);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bca58
	if (ctx.cr0.eq) goto loc_821BCA58;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bne cr6,0x821bca18
	if (!ctx.cr6.eq) goto loc_821BCA18;
	// fmr f31,f29
	f31.f64 = f29.f64;
loc_821BCA18:
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,147
	ctx.r3.u64 = ctx.r3.u64 | 147;
	// bl 0x820e68b8
	ctx.lr = 0x821BCA28;
	sub_820E68B8(ctx, base);
	// stfs f30,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// stfs f31,28(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x821eaf80
	ctx.lr = 0x821BCA50;
	sub_821EAF80(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
loc_821BCA58:
	// lbz r11,2(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 2);
	// addi r10,r25,4
	ctx.r10.s64 = r25.s64 + 4;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bca7c
	if (ctx.cr0.eq) goto loc_821BCA7C;
	// li r11,720
	ctx.r11.s64 = 720;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
loc_821BCA7C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3702
	ctx.r11.u64 = ctx.r11.u64 | 3702;
	// lbzx r11,r27,r11
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821bcbbc
	if (!ctx.cr0.eq) goto loc_821BCBBC;
	// bl 0x821159c8
	ctx.lr = 0x821BCA94;
	sub_821159C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821bcbbc
	if (!ctx.cr0.eq) goto loc_821BCBBC;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x821bcbbc
	if (ctx.cr6.lt) goto loc_821BCBBC;
	// cmpwi cr6,r11,720
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 720, ctx.xer);
	// bge cr6,0x821bcbbc
	if (!ctx.cr6.lt) goto loc_821BCBBC;
	// lha r10,30(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 30));
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// bne cr6,0x821bcac8
	if (!ctx.cr6.eq) goto loc_821BCAC8;
	// cmpwi cr6,r9,20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 20, ctx.xer);
	// bne cr6,0x821bcbbc
	if (!ctx.cr6.eq) goto loc_821BCBBC;
loc_821BCAC8:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bcbbc
	if (!ctx.cr6.eq) goto loc_821BCBBC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3702
	ctx.r11.u64 = ctx.r11.u64 | 3702;
	// lbzx r11,r27,r11
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821bcbbc
	if (!ctx.cr0.eq) goto loc_821BCBBC;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bne cr6,0x821bcb28
	if (!ctx.cr6.eq) goto loc_821BCB28;
	// lbz r11,18(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 18);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821bcb28
	if (ctx.cr0.eq) goto loc_821BCB28;
	// lbz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 14);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821bcb28
	if (ctx.cr0.eq) goto loc_821BCB28;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lbz r11,27(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 27);
	// ori r10,r10,3696
	ctx.r10.u64 = ctx.r10.u64 | 3696;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// lbzx r11,r27,r10
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + ctx.r10.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821bcbbc
	if (ctx.cr6.eq) goto loc_821BCBBC;
loc_821BCB28:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bcb90
	if (!ctx.cr6.eq) goto loc_821BCB90;
	// lwz r11,1852(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 1852);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bcb90
	if (ctx.cr0.eq) goto loc_821BCB90;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bne cr6,0x821bcb50
	if (!ctx.cr6.eq) goto loc_821BCB50;
	// fmr f31,f29
	f31.f64 = f29.f64;
loc_821BCB50:
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,147
	ctx.r3.u64 = ctx.r3.u64 | 147;
	// bl 0x820e68b8
	ctx.lr = 0x821BCB60;
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
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x821eaf80
	ctx.lr = 0x821BCB88;
	sub_821EAF80(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
loc_821BCB90:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r10,r25,4
	ctx.r10.s64 = r25.s64 + 4;
	// ori r11,r11,3698
	ctx.r11.u64 = ctx.r11.u64 | 3698;
	// lbzx r11,r27,r11
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bcbbc
	if (ctx.cr0.eq) goto loc_821BCBBC;
	// li r11,720
	ctx.r11.s64 = 720;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
loc_821BCBBC:
	// bl 0x82205050
	ctx.lr = 0x821BCBC0;
	sub_82205050(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821bcbf0
	if (!ctx.cr0.eq) goto loc_821BCBF0;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,720
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 720, ctx.xer);
	// bge cr6,0x821bcbdc
	if (!ctx.cr6.lt) goto loc_821BCBDC;
	// cmpwi cr6,r11,360
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 360, ctx.xer);
	// blt cr6,0x821bcbf0
	if (ctx.cr6.lt) goto loc_821BCBF0;
loc_821BCBDC:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x821b42c0
	ctx.lr = 0x821BCBE8;
	sub_821B42C0(ctx, base);
	// bl 0x8212bfb8
	ctx.lr = 0x821BCBEC;
	sub_8212BFB8(ctx, base);
	// bl 0x820eee80
	ctx.lr = 0x821BCBF0;
	sub_820EEE80(ctx, base);
loc_821BCBF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

DEFINE_REX_FUNC(sub_821D5810) {
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
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-9496
	ctx.r11.s64 = ctx.r11.s64 + -9496;
	// lha r11,34(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 34));
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bge cr6,0x821d5844
	if (!ctx.cr6.lt) goto loc_821D5844;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821d58bc
	goto loc_821D58BC;
loc_821D5844:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r31,r11,13128
	r31.s64 = ctx.r11.s64 + 13128;
	// lwz r11,1852(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1852);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d58a4
	if (ctx.cr0.eq) goto loc_821D58A4;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,147
	ctx.r3.u64 = ctx.r3.u64 | 147;
	// lwz r4,344(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821D5870;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f2,13428(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 13428);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r9,9936
	ctx.r5.s64 = ctx.r9.s64 + 9936;
	// lfs f1,15632(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15632);
	ctx.f1.f64 = double(temp.f32);
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
	// bl 0x821eaf80
	ctx.lr = 0x821D58A4;
	sub_821EAF80(ctx, base);
loc_821D58A4:
	// lbz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 2);
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r3,r11,0,16,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
loc_821D58BC:
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

DEFINE_REX_FUNC(sub_821D8790) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821d87c8
	if (!ctx.cr6.eq) goto loc_821D87C8;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r11,r11,-7072
	ctx.r11.s64 = ctx.r11.s64 + -7072;
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x821d87c0
	if (ctx.cr6.gt) goto loc_821D87C0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,3816
	ctx.r10.u64 = ctx.r10.u64 | 3816;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_821D87C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821D87C8:
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D90D8) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,2059
	ctx.r11.s64 = ctx.r4.s64 + 2059;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r5,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// sth r8,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// stb r7,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// stb r6,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r6.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D9A00) {
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
	ctx.lr = 0x821D9A08;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f30
	ctx.lr = 0x821D9A10;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r28,r11,432
	r28.s64 = ctx.r11.s64 + 432;
	// lha r11,30(r28)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r28.u32 + 30));
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x821d9fac
	if (ctx.cr6.eq) goto loc_821D9FAC;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x821d9ff4
	if (!ctx.cr6.eq) goto loc_821D9FF4;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821d9ff4
	if (!ctx.cr0.eq) goto loc_821D9FF4;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r7,40(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 40);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// lfs f26,1992(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	f26.f64 = double(temp.f32);
	// addi r26,r11,23240
	r26.s64 = ctx.r11.s64 + 23240;
	// addi r31,r10,-9496
	r31.s64 = ctx.r10.s64 + -9496;
	// blt cr6,0x821d9e38
	if (ctx.cr6.lt) goto loc_821D9E38;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bgt cr6,0x821d9e38
	if (ctx.cr6.gt) goto loc_821D9E38;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,76(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 76);
	// lwz r9,0(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// and. r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lfd f31,26664(r10)
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 26664);
	// lis r5,-50
	ctx.r5.s64 = -3276800;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f28,26932(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 26932);
	f28.f64 = double(temp.f32);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lfs f27,1996(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	f27.f64 = double(temp.f32);
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// ori r30,r5,16383
	r30.u64 = ctx.r5.u64 | 16383;
	// addi r25,r11,14116
	r25.s64 = ctx.r11.s64 + 14116;
	// addi r27,r10,31920
	r27.s64 = ctx.r10.s64 + 31920;
	// addi r24,r9,13128
	r24.s64 = ctx.r9.s64 + 13128;
	// bne 0x821d9ac4
	if (!ctx.cr0.eq) goto loc_821D9AC4;
	// lhz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 0);
	// lwz r11,360(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 360);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d9c30
	if (ctx.cr0.eq) goto loc_821D9C30;
loc_821D9AC4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x821d9b30
	if (!ctx.cr6.gt) goto loc_821D9B30;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,2384(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bgt cr6,0x821d9b10
	if (ctx.cr6.gt) goto loc_821D9B10;
	// li r9,1
	ctx.r9.s64 = 1;
loc_821D9B10:
	// lwz r11,1856(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1856);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// bne 0x821d9b30
	if (!ctx.cr0.eq) goto loc_821D9B30;
	// li r3,29
	ctx.r3.s64 = 29;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// bl 0x8212bc38
	ctx.lr = 0x821D9B30;
	sub_8212BC38(ctx, base);
loc_821D9B30:
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// lfs f0,56(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// fadds f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 + f28.f64));
	// lfs f0,44(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fsubs f30,f0,f13
	f30.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x821eacb0
	ctx.lr = 0x821D9B64;
	sub_821EACB0(ctx, base);
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 344);
	// ori r3,r3,142
	ctx.r3.u64 = ctx.r3.u64 | 142;
	// bl 0x820e68b8
	ctx.lr = 0x821D9B74;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,14112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 14112);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f30,f0
	ctx.f2.f64 = double(float(f30.f64 + ctx.f0.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// lfs f29,-24212(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24212);
	f29.f64 = double(temp.f32);
	// stfs f29,20(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x821eaf80
	ctx.lr = 0x821D9BA4;
	sub_821EAF80(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// lwz r4,344(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 344);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r3,r3,48
	ctx.r3.u64 = ctx.r3.u64 | 48;
	// ble cr6,0x821d9bf8
	if (!ctx.cr6.gt) goto loc_821D9BF8;
	// bl 0x820e68b8
	ctx.lr = 0x821D9BC0;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f29,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r5,r10,14100
	ctx.r5.s64 = ctx.r10.s64 + 14100;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// lfs f0,-23588(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23588);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f30,f0
	ctx.f2.f64 = double(float(f30.f64 + ctx.f0.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x821eaf80
	ctx.lr = 0x821D9BF4;
	sub_821EAF80(ctx, base);
	// b 0x821d9c30
	goto loc_821D9C30;
loc_821D9BF8:
	// bl 0x820e68b8
	ctx.lr = 0x821D9BFC;
	sub_820E68B8(ctx, base);
	// stfs f29,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// addi r5,r10,14092
	ctx.r5.s64 = ctx.r10.s64 + 14092;
	// lfs f0,-23588(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23588);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f30,f0
	ctx.f2.f64 = double(float(f30.f64 + ctx.f0.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x821D9C30;
	sub_821EAF80(ctx, base);
loc_821D9C30:
	// lwz r11,116(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 116);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d9c50
	if (!ctx.cr0.eq) goto loc_821D9C50;
	// lhz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 0);
	// lwz r11,400(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 400);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d9e38
	if (ctx.cr0.eq) goto loc_821D9E38;
loc_821D9C50:
	// lha r11,20(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 20));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addic. r11,r11,-20
	ctx.xer.ca = ctx.r11.u32 > 19;
	ctx.r11.s64 = ctx.r11.s64 + -20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f30,2008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	f30.f64 = double(temp.f32);
	// sth r11,22(r31)
	REX_STORE_U16(r31.u32 + 22, ctx.r11.u16);
	// bge 0x821d9c80
	if (!ctx.cr0.lt) goto loc_821D9C80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f27,24(r31)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// lis r30,-64
	r30.s64 = -4194304;
	// addi r29,r11,15964
	r29.s64 = ctx.r11.s64 + 15964;
	// ori r30,r30,53503
	r30.u64 = r30.u64 | 53503;
	// b 0x821d9d10
	goto loc_821D9D10;
loc_821D9C80:
	// lwz r4,344(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 344);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// bge cr6,0x821d9ca8
	if (!ctx.cr6.lt) goto loc_821D9CA8;
	// lis r30,-772
	r30.s64 = -50593792;
	// ori r3,r3,126
	ctx.r3.u64 = ctx.r3.u64 | 126;
	// ori r30,r30,65535
	r30.u64 = r30.u64 | 65535;
	// bl 0x820e68b8
	ctx.lr = 0x821D9CA0;
	sub_820E68B8(ctx, base);
	// stfs f26,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// b 0x821d9cf8
	goto loc_821D9CF8;
loc_821D9CA8:
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bge cr6,0x821d9cd0
	if (!ctx.cr6.lt) goto loc_821D9CD0;
	// lis r30,-772
	r30.s64 = -50593792;
	// ori r3,r3,128
	ctx.r3.u64 = ctx.r3.u64 | 128;
	// ori r30,r30,65535
	r30.u64 = r30.u64 | 65535;
	// bl 0x820e68b8
	ctx.lr = 0x821D9CC0;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16336(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16336);
	ctx.f0.f64 = double(temp.f32);
loc_821D9CC8:
	// stfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// b 0x821d9cf8
	goto loc_821D9CF8;
loc_821D9CD0:
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bge cr6,0x821d9cec
	if (!ctx.cr6.lt) goto loc_821D9CEC;
	// ori r3,r3,129
	ctx.r3.u64 = ctx.r3.u64 | 129;
	// bl 0x820e68b8
	ctx.lr = 0x821D9CE0;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,28668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28668);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821d9cc8
	goto loc_821D9CC8;
loc_821D9CEC:
	// ori r3,r3,130
	ctx.r3.u64 = ctx.r3.u64 | 130;
	// bl 0x820e68b8
	ctx.lr = 0x821D9CF4;
	sub_820E68B8(ctx, base);
	// stfs f30,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
loc_821D9CF8:
	// lwz r11,1852(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1852);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d9d10
	if (ctx.cr0.eq) goto loc_821D9D10;
	// lis r30,-256
	r30.s64 = -16777216;
	// ori r30,r30,255
	r30.u64 = r30.u64 | 255;
loc_821D9D10:
	// stfd f31,48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 48, f31.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,56(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fadds f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 + f28.f64));
	// lfs f0,44(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r11,14080
	r27.s64 = ctx.r11.s64 + 14080;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fnmsubs f29,f13,f30,f0
	f29.f64 = double(float(-std::fma(ctx.f13.f64, f30.f64, -ctx.f0.f64)));
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x821eacb0
	ctx.lr = 0x821D9D50;
	sub_821EACB0(ctx, base);
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 344);
	// ori r3,r3,125
	ctx.r3.u64 = ctx.r3.u64 | 125;
	// bl 0x820e68b8
	ctx.lr = 0x821D9D60;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,15632(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15632);
	f30.f64 = double(temp.f32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stfs f30,20(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lfs f0,-24524(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24524);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f29,f0
	ctx.f2.f64 = double(float(f29.f64 + ctx.f0.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x821D9D90;
	sub_821EAF80(ctx, base);
	// stfd f31,40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// stfd f31,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821eacb0
	ctx.lr = 0x821D9DB4;
	sub_821EACB0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f30,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r7,20
	ctx.r7.s64 = 20;
	// lha r6,20(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 20));
	// lfs f0,16184(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16184);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r9,14072
	ctx.r5.s64 = ctx.r9.s64 + 14072;
	// fadds f2,f29,f0
	ctx.f2.f64 = double(float(f29.f64 + ctx.f0.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x821eaf80
	ctx.lr = 0x821D9DE8;
	sub_821EAF80(ctx, base);
	// stfd f31,48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 48, f31.u64);
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821eacb0
	ctx.lr = 0x821D9E10;
	sub_821EACB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f30,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lfs f0,-24080(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24080);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f29,f0
	ctx.f2.f64 = double(float(f29.f64 + ctx.f0.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x821D9E38;
	sub_821EAF80(ctx, base);
loc_821D9E38:
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821d9ff4
	if (!ctx.cr6.eq) goto loc_821D9FF4;
	// lwz r11,204(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 204);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d9e64
	if (!ctx.cr0.eq) goto loc_821D9E64;
	// lhz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 0);
	// lwz r11,488(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 488);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d9ff4
	if (ctx.cr0.eq) goto loc_821D9FF4;
loc_821D9E64:
	// lhz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 8);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r10,-7072
	r30.s64 = ctx.r10.s64 + -7072;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,8(r31)
	REX_STORE_U16(r31.u32 + 8, ctx.r11.u16);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// blt cr6,0x821d9f5c
	if (ctx.cr6.lt) goto loc_821D9F5C;
	// lhz r11,10(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 10);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r10,8(r31)
	REX_STORE_U16(r31.u32 + 8, ctx.r10.u16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r11,10(r31)
	REX_STORE_U16(r31.u32 + 10, ctx.r11.u16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821d9f10
	if (ctx.cr6.lt) goto loc_821D9F10;
	// beq cr6,0x821d9f08
	if (ctx.cr6.eq) goto loc_821D9F08;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821d9f00
	if (ctx.cr6.lt) goto loc_821D9F00;
	// beq cr6,0x821d9ecc
	if (ctx.cr6.eq) goto loc_821D9ECC;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x821d9f5c
	if (!ctx.cr6.lt) goto loc_821D9F5C;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,4(r31)
	REX_STORE_U16(r31.u32 + 4, ctx.r11.u16);
	// b 0x821d9f5c
	goto loc_821D9F5C;
loc_821D9ECC:
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// fmr f2,f26
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f26.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,-28236(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -28236);
	// lfs f1,16260(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16260);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820f28e8
	ctx.lr = 0x821D9EE4;
	sub_820F28E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// sth r11,4(r31)
	REX_STORE_U16(r31.u32 + 4, ctx.r11.u16);
	// li r3,3
	ctx.r3.s64 = 3;
	// sth r10,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r10.u16);
loc_821D9EF8:
	// bl 0x821d9978
	ctx.lr = 0x821D9EFC;
	sub_821D9978(ctx, base);
	// b 0x821d9f5c
	goto loc_821D9F5C;
loc_821D9F00:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x821d9ef8
	goto loc_821D9EF8;
loc_821D9F08:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821d9ef8
	goto loc_821D9EF8;
loc_821D9F10:
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r3,-28236(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -28236);
	// lfs f2,2336(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2336);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16308(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16308);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820f28e8
	ctx.lr = 0x821D9F2C;
	sub_820F28E8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f26.f64;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,-1
	ctx.r9.s64 = -1;
	// sth r11,4(r31)
	REX_STORE_U16(r31.u32 + 4, ctx.r11.u16);
	// sth r10,10(r31)
	REX_STORE_U16(r31.u32 + 10, ctx.r10.u16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r9,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r9.u16);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,111
	ctx.r4.s64 = 111;
	// bl 0x8212d7c8
	ctx.lr = 0x821D9F5C;
	sub_8212D7C8(ctx, base);
loc_821D9F5C:
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r11.u16);
	// bne cr6,0x821d9ff4
	if (!ctx.cr6.eq) goto loc_821D9FF4;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf. r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d9ff4
	if (!ctx.cr0.eq) goto loc_821D9FF4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f26.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,108
	ctx.r4.s64 = 108;
	// bl 0x8212d7c8
	ctx.lr = 0x821D9FA8;
	sub_8212D7C8(ctx, base);
	// b 0x821d9ff4
	goto loc_821D9FF4;
loc_821D9FAC:
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r31,r11,22960
	r31.s64 = ctx.r11.s64 + 22960;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82109dd0
	ctx.lr = 0x821D9FBC;
	sub_82109DD0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x821d9fec
	if (ctx.cr6.eq) goto loc_821D9FEC;
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 604);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d9fec
	if (!ctx.cr6.eq) goto loc_821D9FEC;
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821d9fec
	if (!ctx.cr0.gt) goto loc_821D9FEC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x821d9ff0
	if (!ctx.cr6.gt) goto loc_821D9FF0;
loc_821D9FEC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D9FF0:
	// sth r11,308(r28)
	REX_STORE_U16(r28.u32 + 308, ctx.r11.u16);
loc_821D9FF4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f7c
	ctx.lr = 0x821DA000;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_821F2E40) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lbz r11,1272(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1272);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821f2e68
	if (!ctx.cr0.eq) goto loc_821F2E68;
	// lwz r11,288(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f2e68
	if (ctx.cr0.eq) goto loc_821F2E68;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821F2E68:
	// lwz r11,288(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821f2e84
	if (!ctx.cr0.eq) goto loc_821F2E84;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x821f2e8c
	if (!ctx.cr6.eq) goto loc_821F2E8C;
loc_821F2E84:
	// rlwinm r6,r6,0,23,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// rlwinm r5,r5,0,21,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
loc_821F2E8C:
	// b 0x822abdc0
	sub_822ABDC0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F62C8) {
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e70
	ctx.lr = 0x821F62D0;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x822d4f38
	ctx.lr = 0x821F62D8;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,0(r3)
	r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r24,4(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lhz r11,2(r22)
	ctx.r11.u64 = REX_LOAD_U16(r22.u32 + 2);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f6300
	if (!ctx.cr0.eq) goto loc_821F6300;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821f68cc
	goto loc_821F68CC;
loc_821F6300:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,36(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 36);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// divwu r23,r10,r8
	r23.u64 = uint32_t(ctx.r8.u32 ? ctx.r10.u32 / ctx.r8.u32 : 0);
	// lfs f30,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f30.f64 = double(temp.f32);
	// lwz r3,-32032(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32032);
	// fmr f29,f30
	f29.f64 = f30.f64;
	// bl 0x822a9aa8
	ctx.lr = 0x821F6328;
	sub_822A9AA8(ctx, base);
	// lhz r11,2(r22)
	ctx.r11.u64 = REX_LOAD_U16(r22.u32 + 2);
	// lfs f28,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	f28.f64 = double(temp.f32);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f67ec
	if (ctx.cr0.eq) goto loc_821F67EC;
	// lwz r31,20(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821f6638
	if (ctx.cr6.eq) goto loc_821F6638;
	// lwz r11,200(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 200);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,204(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 204);
	// addi r30,r24,200
	r30.s64 = r24.s64 + 200;
	// li r29,0
	r29.s64 = 0;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lfs f31,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f63a8
	if (ctx.cr0.eq) goto loc_821F63A8;
loc_821F6368:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821f3f40
	ctx.lr = 0x821F6378;
	sub_821F3F40(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stfs f30,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f30,52(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f30,56(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f6368
	if (ctx.cr6.lt) goto loc_821F6368;
loc_821F63A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821f6558
	if (!ctx.cr6.gt) goto loc_821F6558;
	// li r30,0
	r30.s64 = 0;
loc_821F63BC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r6,r10,28
	ctx.r6.s64 = ctx.r10.s64 + 28;
	// addi r3,r10,48
	ctx.r3.s64 = ctx.r10.s64 + 48;
	// stfs f30,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f30,4(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f30,8(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f31,12(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f30,16(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f30,20(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f30,24(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f30,28(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
loc_821F63FC:
	// lbzx r8,r3,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r5.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r28,32(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// rotlwi r27,r8,2
	r27.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lfs f10,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lwzx r9,r27,r28
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_821F642C:
	// lfs f0,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f8,52(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// fmadds f0,f0,f10,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f9.f64)));
	// fmadds f0,f7,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f11.f64, ctx.f0.f64)));
	// fmadds f0,f8,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfsu f0,4(r7)
	ea = 4 + ctx.r7.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x821f642c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F642C;
	// lfs f0,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r9,4
	ctx.r9.s64 = 4;
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r7,r8,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// lfs f12,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lfs f9,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lfs f13,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// lfs f12,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
loc_821F64C0:
	// lfs f0,20(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f8,36(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,52(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// lfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// fmadds f0,f0,f12,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f9.f64)));
	// fmadds f0,f8,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f10.f64, ctx.f0.f64)));
	// fmadds f0,f7,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f11.f64, ctx.f0.f64)));
	// stfsu f0,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x821f64c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F64C0;
	// lfsu f0,4(r6)
	ea = 4 + ctx.r6.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r6.u32 = ea;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f11,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f9,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fadds f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blt cr6,0x821f63fc
	if (ctx.cr6.lt) goto loc_821F63FC;
	// stfs f31,12(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stfs f30,28(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// bl 0x821f4c50
	ctx.lr = 0x821F6544;
	sub_821F4C50(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f63bc
	if (ctx.cr6.lt) goto loc_821F63BC;
loc_821F6558:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f6614
	if (ctx.cr0.eq) goto loc_821F6614;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f12,-31056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -31056);
	ctx.f12.f64 = double(temp.f32);
loc_821F6580:
	// li r10,3
	ctx.r10.s64 = 3;
	// lwzx r7,r6,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r9,r7,-2
	ctx.r9.s64 = ctx.r7.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821F6598:
	// lhzu r10,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// rotlwi r10,r10,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 6);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsu f10,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821f6598
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F6598;
	// li r11,3
	ctx.r11.s64 = 3;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821F65D8:
	// lfsu f13,16(r10)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * f28.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bdnz 0x821f65d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F65D8;
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lwz r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// fadds f29,f0,f29
	f29.f64 = double(float(ctx.f0.f64 + f29.f64));
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f6580
	if (ctx.cr6.lt) goto loc_821F6580;
loc_821F6614:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r9,r3,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r3.u64;
	// srawi r5,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 2;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x821f57f8
	ctx.lr = 0x821F6634;
	sub_821F57F8(ctx, base);
	// b 0x821f68b4
	goto loc_821F68B4;
loc_821F6638:
	// lwz r11,44(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 44);
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821f674c
	if (!ctx.cr6.gt) goto loc_821F674C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,0
	r28.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// lfs f31,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
loc_821F6658:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r27,4
	r27.s64 = 4;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// add r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
	// add r31,r10,r26
	r31.u64 = ctx.r10.u64 + r26.u64;
	// addi r29,r31,12
	r29.s64 = r31.s64 + 12;
	// stfs f30,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f30,4(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f30,8(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f31,12(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_821F6680:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,20(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 20);
	// bl 0x822b5a40
	ctx.lr = 0x821F668C;
	sub_822B5A40(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r3,752
	ctx.r11.s64 = ctx.r3.s64 + 752;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
	// lfs f12,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lfs f10,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821F66B0:
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f8,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f9,f8,f11,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f9.f64)));
	// fmadds f9,f7,f12,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f9.f64)));
	// fmadds f0,f0,f13,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x821f66b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F66B0;
	// lfsu f0,4(r29)
	ea = 4 + r29.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	r29.u32 = ea;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// lfs f12,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// add r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// bne 0x821f6680
	if (!ctx.cr0.eq) goto loc_821F6680;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,48
	r26.s64 = r26.s64 + 48;
	// add r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// stfs f31,12(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r11,44(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 44);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f6658
	if (ctx.cr6.lt) goto loc_821F6658;
loc_821F674C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x821f68b4
	if (!ctx.cr6.gt) goto loc_821F68B4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r7,8(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r6,12(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lfs f12,-31056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -31056);
	ctx.f12.f64 = double(temp.f32);
loc_821F676C:
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821F677C:
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsu f10,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821f677c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F677C;
	// li r11,3
	ctx.r11.s64 = 3;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821F67C8:
	// lfsu f13,16(r10)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * f28.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bdnz 0x821f67c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F67C8;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// fmadds f29,f0,f12,f29
	f29.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, f29.f64)));
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// bne 0x821f676c
	if (!ctx.cr0.eq) goto loc_821F676C;
	// b 0x821f68b4
	goto loc_821F68B4;
loc_821F67EC:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x821f68b4
	if (!ctx.cr6.gt) goto loc_821F68B4;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lfs f12,-31056(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -31056);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f11.f64 = double(temp.f32);
loc_821F6810:
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// add r7,r6,r9
	ctx.r7.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r8,r5,-4
	ctx.r8.s64 = ctx.r5.s64 + -4;
	// stw r7,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addi r10,r4,-12
	ctx.r10.s64 = ctx.r4.s64 + -12;
loc_821F6858:
	// lwzu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f10,12(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f9,16(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stfsu f11,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821f6858
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F6858;
	// li r10,3
	ctx.r10.s64 = 3;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821F6894:
	// lfsu f13,16(r8)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * f28.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bdnz 0x821f6894
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F6894;
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// fmadds f29,f0,f12,f29
	f29.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, f29.f64)));
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x821f6810
	if (!ctx.cr0.eq) goto loc_821F6810;
loc_821F68B4:
	// lwz r11,36(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 36);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f1,f29,f0
	ctx.f1.f64 = double(float(f29.f64 / ctx.f0.f64));
loc_821F68CC:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x822d4f84
	ctx.lr = 0x821F68D8;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82215008) {
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
	// lwz r11,11024(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 11024);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82215030
	if (ctx.cr6.eq) goto loc_82215030;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82215030:
	// lwz r11,13600(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13600);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82215098
	if (!ctx.cr6.eq) goto loc_82215098;
	// lbz r11,11068(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82215098
	if (!ctx.cr0.eq) goto loc_82215098;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82214368
	ctx.lr = 0x82215058;
	sub_82214368(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82215098
	if (ctx.cr6.eq) goto loc_82215098;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82213e40
	ctx.lr = 0x82215074;
	sub_82213E40(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82215098
	if (ctx.cr0.eq) goto loc_82215098;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r31,13760
	ctx.r8.s64 = r31.s64 + 13760;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82214ac8
	ctx.lr = 0x82215098;
	sub_82214AC8(ctx, base);
loc_82215098:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82214cc8
	ctx.lr = 0x822150A0;
	sub_82214CC8(ctx, base);
	// lbz r11,11068(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822150f0
	if (!ctx.cr0.eq) goto loc_822150F0;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,-11456(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822150f0
	if (ctx.cr6.eq) goto loc_822150F0;
	// lbz r11,11069(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11069);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822150f0
	if (!ctx.cr0.eq) goto loc_822150F0;
	// lwz r11,11036(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11036);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82213c28
	ctx.lr = 0x822150E4;
	sub_82213C28(ctx, base);
	// lbz r11,11069(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11069);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stb r11,11069(r31)
	REX_STORE_U8(r31.u32 + 11069, ctx.r11.u8);
loc_822150F0:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
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

DEFINE_REX_FUNC(sub_82218D30) {
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
	ctx.lr = 0x82218D38;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,12(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82218d58
	if (ctx.cr6.eq) goto loc_82218D58;
	// bl 0x82213cf8
	ctx.lr = 0x82218D58;
	sub_82213CF8(ctx, base);
loc_82218D58:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r28,r31,31,31,31
	r28.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x1;
	// bne 0x82218d70
	if (!ctx.cr0.eq) goto loc_82218D70;
	// lbz r11,11072(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 11072);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82218d78
	if (ctx.cr0.eq) goto loc_82218D78;
loc_82218D70:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8221a770
	ctx.lr = 0x82218D78;
	sub_8221A770(ctx, base);
loc_82218D78:
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82218db0
	if (ctx.cr0.eq) goto loc_82218DB0;
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82218d98
	if (!ctx.cr6.gt) goto loc_82218D98;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82215008
	ctx.lr = 0x82218D98;
	sub_82215008(ctx, base);
loc_82218D98:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,9728
	ctx.r11.u64 = ctx.r11.u64 | 9728;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r3.u32);
loc_82218DB0:
	// li r4,360
	ctx.r4.s64 = 360;
	// lwz r31,4(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82215248
	ctx.lr = 0x82218DC0;
	sub_82215248(ctx, base);
	// oris r5,r28,49153
	ctx.r5.u64 = r28.u64 | 3221291008;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// ori r5,r5,15872
	ctx.r5.u64 = ctx.r5.u64 | 15872;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// li r8,487
	ctx.r8.s64 = 487;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// rlwinm r9,r31,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 12) & 0xFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// ori r8,r11,2
	ctx.r8.u64 = ctx.r11.u64 | 2;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r7,488
	ctx.r7.s64 = 488;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r31,3
	ctx.r10.u64 = r31.u32 & 0x1FFFFFFF;
	// addi r11,r31,12
	ctx.r11.s64 = r31.s64 + 12;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r6,919
	ctx.r6.s64 = 919;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// ori r4,r10,2
	ctx.r4.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// li r28,920
	r28.s64 = 920;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// li r27,921
	r27.s64 = 921;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r31,20
	ctx.r11.s64 = r31.s64 + 20;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// ori r7,r10,2
	ctx.r7.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// li r26,922
	r26.s64 = 922;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// clrlwi r11,r10,3
	ctx.r11.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r10,r8,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,28
	ctx.r11.s64 = r31.s64 + 28;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// li r7,3532
	ctx.r7.s64 = 3532;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,24
	ctx.r11.s64 = r31.s64 + 24;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// ori r6,r10,2
	ctx.r6.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r4,3533
	ctx.r4.s64 = 3533;
	// addi r11,r31,36
	ctx.r11.s64 = r31.s64 + 36;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// ori r28,r9,2
	r28.u64 = ctx.r9.u64 | 2;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// li r27,3534
	r27.s64 = 3534;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r7,3535
	ctx.r7.s64 = 3535;
	// ori r26,r11,2
	r26.u64 = ctx.r11.u64 | 2;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,32
	ctx.r11.s64 = r31.s64 + 32;
	// li r25,3536
	r25.s64 = 3536;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// li r6,3537
	ctx.r6.s64 = 3537;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,44
	ctx.r11.s64 = r31.s64 + 44;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// ori r24,r10,2
	r24.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,40
	ctx.r10.s64 = r31.s64 + 40;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r11,r10,3
	ctx.r11.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r10,r8,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r31,52
	ctx.r11.s64 = r31.s64 + 52;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// li r4,3538
	ctx.r4.s64 = 3538;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// li r28,3539
	r28.s64 = 3539;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r31,48
	ctx.r11.s64 = r31.s64 + 48;
	// ori r27,r10,2
	r27.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// li r26,3148
	r26.s64 = 3148;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,60
	ctx.r11.s64 = r31.s64 + 60;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// ori r25,r9,2
	r25.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,56
	ctx.r11.s64 = r31.s64 + 56;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r24,r10,2
	r24.u64 = ctx.r10.u64 | 2;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,68
	ctx.r10.s64 = r31.s64 + 68;
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r7,r10,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// addi r9,r31,64
	ctx.r9.s64 = r31.s64 + 64;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// rlwinm r6,r9,12,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r7,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// addi r6,r6,512
	ctx.r6.s64 = ctx.r6.s64 + 512;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// clrlwi r11,r9,3
	ctx.r11.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r6,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1000;
	// li r9,3149
	ctx.r9.s64 = 3149;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r31,76
	ctx.r11.s64 = r31.s64 + 76;
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// ori r28,r10,2
	r28.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// li r6,3150
	ctx.r6.s64 = 3150;
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
	// li r4,3151
	ctx.r4.s64 = 3151;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// li r27,3152
	r27.s64 = 3152;
	// li r23,3155
	r23.s64 = 3155;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// li r26,3153
	r26.s64 = 3153;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// li r24,3154
	r24.s64 = 3154;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,72
	ctx.r11.s64 = r31.s64 + 72;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// ori r25,r10,2
	r25.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,84
	ctx.r11.s64 = r31.s64 + 84;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// ori r6,r9,2
	ctx.r6.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,80
	ctx.r11.s64 = r31.s64 + 80;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// ori r7,r10,2
	ctx.r7.u64 = ctx.r10.u64 | 2;
	// addi r10,r9,512
	ctx.r10.s64 = ctx.r9.s64 + 512;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,92
	ctx.r10.s64 = r31.s64 + 92;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// clrlwi r11,r10,3
	ctx.r11.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r10,r8,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// li r8,3658
	ctx.r8.s64 = 3658;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,3657
	ctx.r4.s64 = 3657;
	// addi r11,r31,88
	ctx.r11.s64 = r31.s64 + 88;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// ori r28,r10,2
	r28.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// li r27,3664
	r27.s64 = 3664;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// li r26,3663
	r26.s64 = 3663;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// li r24,3667
	r24.s64 = 3667;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// li r7,3661
	ctx.r7.s64 = 3661;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// clrlwi r9,r11,3
	ctx.r9.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r31,100
	ctx.r11.s64 = r31.s64 + 100;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ori r6,r10,2
	ctx.r6.u64 = ctx.r10.u64 | 2;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r11,r31,96
	ctx.r11.s64 = r31.s64 + 96;
	// addi r9,r8,512
	ctx.r9.s64 = ctx.r8.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// li r28,3660
	r28.s64 = 3660;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r31,108
	ctx.r11.s64 = r31.s64 + 108;
	// ori r4,r10,2
	ctx.r4.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,104
	ctx.r11.s64 = r31.s64 + 104;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// ori r6,r9,2
	ctx.r6.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,116
	ctx.r11.s64 = r31.s64 + 116;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r9,r11,3
	ctx.r9.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// ori r25,r10,2
	r25.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// addi r11,r10,512
	ctx.r11.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// addi r11,r31,112
	ctx.r11.s64 = r31.s64 + 112;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// li r8,3666
	ctx.r8.s64 = 3666;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,124
	ctx.r11.s64 = r31.s64 + 124;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// ori r7,r9,2
	ctx.r7.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r6,3212
	ctx.r6.s64 = 3212;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r31,120
	ctx.r11.s64 = r31.s64 + 120;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// li r4,3213
	ctx.r4.s64 = 3213;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,132
	ctx.r11.s64 = r31.s64 + 132;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r28,3214
	r28.s64 = 3214;
	// ori r7,r10,2
	ctx.r7.u64 = ctx.r10.u64 | 2;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// li r27,3215
	r27.s64 = 3215;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,128
	ctx.r11.s64 = r31.s64 + 128;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// ori r6,r10,2
	ctx.r6.u64 = ctx.r10.u64 | 2;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,140
	ctx.r10.s64 = r31.s64 + 140;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// addi r9,r8,512
	ctx.r9.s64 = ctx.r8.s64 + 512;
	// ori r8,r11,2
	ctx.r8.u64 = ctx.r11.u64 | 2;
	// clrlwi r11,r10,3
	ctx.r11.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r10,r9,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r26,3216
	r26.s64 = 3216;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r31,136
	ctx.r11.s64 = r31.s64 + 136;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// li r7,3217
	ctx.r7.s64 = 3217;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,148
	ctx.r11.s64 = r31.s64 + 148;
	// ori r4,r10,2
	ctx.r4.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// li r28,3219
	r28.s64 = 3219;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// li r6,3218
	ctx.r6.s64 = 3218;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// addi r8,r10,512
	ctx.r8.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r8,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r31,144
	ctx.r11.s64 = r31.s64 + 144;
	// ori r27,r9,2
	r27.u64 = ctx.r9.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// li r25,3228
	r25.s64 = 3228;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,156
	ctx.r11.s64 = r31.s64 + 156;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// ori r26,r10,2
	r26.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,152
	ctx.r10.s64 = r31.s64 + 152;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// rlwinm r7,r10,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r9,r31,164
	ctx.r9.s64 = r31.s64 + 164;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r4,r7,512
	ctx.r4.s64 = ctx.r7.s64 + 512;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// rlwinm r7,r9,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// add r24,r8,r11
	r24.u64 = ctx.r8.u64 + ctx.r11.u64;
	// clrlwi r11,r10,3
	ctx.r11.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r8,r4,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1000;
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// clrlwi r10,r9,3
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r9,r7,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// ori r4,r24,2
	ctx.r4.u64 = r24.u64 | 2;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r7,r11,2
	ctx.r7.u64 = ctx.r11.u64 | 2;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,160
	ctx.r11.s64 = r31.s64 + 160;
	// li r8,3229
	ctx.r8.s64 = 3229;
	// li r6,3230
	ctx.r6.s64 = 3230;
	// li r27,3232
	r27.s64 = 3232;
	// li r24,3234
	r24.s64 = 3234;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// li r28,3231
	r28.s64 = 3231;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// li r25,3233
	r25.s64 = 3233;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// ori r4,r10,2
	ctx.r4.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r26,r11,2
	r26.u64 = ctx.r11.u64 | 2;
	// addi r11,r31,172
	ctx.r11.s64 = r31.s64 + 172;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,168
	ctx.r11.s64 = r31.s64 + 168;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// clrlwi r8,r11,3
	ctx.r8.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// addi r11,r31,180
	ctx.r11.s64 = r31.s64 + 180;
	// rlwinm r7,r10,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// addi r10,r31,176
	ctx.r10.s64 = r31.s64 + 176;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// ori r23,r9,2
	r23.u64 = ctx.r9.u64 | 2;
	// ori r22,r8,2
	r22.u64 = ctx.r8.u64 | 2;
	// addi r9,r31,188
	ctx.r9.s64 = r31.s64 + 188;
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r7,r10,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r7,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// ori r7,r11,2
	ctx.r7.u64 = ctx.r11.u64 | 2;
	// rlwinm r6,r9,12,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// clrlwi r9,r9,3
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// addi r6,r6,512
	ctx.r6.s64 = ctx.r6.s64 + 512;
	// addi r11,r31,184
	ctx.r11.s64 = r31.s64 + 184;
	// rlwinm r6,r6,0,19,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1000;
	// ori r28,r10,2
	r28.u64 = ctx.r10.u64 | 2;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// li r6,3235
	ctx.r6.s64 = 3235;
	// ori r26,r9,2
	r26.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r31,196
	ctx.r10.s64 = r31.s64 + 196;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// li r4,4102
	ctx.r4.s64 = 4102;
	// addi r9,r8,512
	ctx.r9.s64 = ctx.r8.s64 + 512;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// ori r8,r11,2
	ctx.r8.u64 = ctx.r11.u64 | 2;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,192
	ctx.r11.s64 = r31.s64 + 192;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// ori r27,r9,2
	r27.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,204
	ctx.r11.s64 = r31.s64 + 204;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// li r21,4101
	r21.s64 = 4101;
	// li r25,3591
	r25.s64 = 3591;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// li r7,4105
	ctx.r7.s64 = 4105;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// li r6,4104
	ctx.r6.s64 = 4104;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// ori r28,r9,2
	r28.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,200
	ctx.r11.s64 = r31.s64 + 200;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// li r4,3590
	ctx.r4.s64 = 3590;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r24,r11,2
	r24.u64 = ctx.r11.u64 | 2;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r21,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r21.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,212
	ctx.r11.s64 = r31.s64 + 212;
	// li r7,3594
	ctx.r7.s64 = 3594;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// li r27,3673
	r27.s64 = 3673;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// li r6,3593
	ctx.r6.s64 = 3593;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// li r28,3669
	r28.s64 = 3669;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// li r25,3672
	r25.s64 = 3672;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// clrlwi r9,r11,3
	ctx.r9.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r31,208
	ctx.r11.s64 = r31.s64 + 208;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r9,r8,512
	ctx.r9.s64 = ctx.r8.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// ori r4,r10,2
	ctx.r4.u64 = ctx.r10.u64 | 2;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r31,220
	ctx.r11.s64 = r31.s64 + 220;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,216
	ctx.r11.s64 = r31.s64 + 216;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// li r7,3670
	ctx.r7.s64 = 3670;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// ori r4,r9,2
	ctx.r4.u64 = ctx.r9.u64 | 2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r26,r11,2
	r26.u64 = ctx.r11.u64 | 2;
	// addi r11,r31,228
	ctx.r11.s64 = r31.s64 + 228;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,224
	ctx.r11.s64 = r31.s64 + 224;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// li r8,3676
	ctx.r8.s64 = 3676;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,236
	ctx.r11.s64 = r31.s64 + 236;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r31,232
	ctx.r11.s64 = r31.s64 + 232;
	// ori r6,r10,2
	ctx.r6.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// li r7,3675
	ctx.r7.s64 = 3675;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,244
	ctx.r11.s64 = r31.s64 + 244;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// ori r28,r9,2
	r28.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// li r4,3679
	ctx.r4.s64 = 3679;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r31,240
	ctx.r11.s64 = r31.s64 + 240;
	// ori r27,r10,2
	r27.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// li r6,3678
	ctx.r6.s64 = 3678;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// li r26,3682
	r26.s64 = 3682;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r31,252
	ctx.r11.s64 = r31.s64 + 252;
	// ori r25,r10,2
	r25.u64 = ctx.r10.u64 | 2;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r31,248
	ctx.r10.s64 = r31.s64 + 248;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r9,r8,512
	ctx.r9.s64 = ctx.r8.s64 + 512;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// ori r8,r11,2
	ctx.r8.u64 = ctx.r11.u64 | 2;
	// addi r11,r31,260
	ctx.r11.s64 = r31.s64 + 260;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// li r7,3681
	ctx.r7.s64 = 3681;
	// li r4,3685
	ctx.r4.s64 = 3685;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// li r27,3684
	r27.s64 = 3684;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// ori r6,r9,2
	ctx.r6.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,256
	ctx.r11.s64 = r31.s64 + 256;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// ori r28,r9,2
	r28.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,268
	ctx.r11.s64 = r31.s64 + 268;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// li r25,3688
	r25.s64 = 3688;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// ori r26,r9,2
	r26.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,264
	ctx.r11.s64 = r31.s64 + 264;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r31,276
	ctx.r10.s64 = r31.s64 + 276;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// ori r24,r9,2
	r24.u64 = ctx.r9.u64 | 2;
	// rlwinm r7,r10,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// addi r9,r31,272
	ctx.r9.s64 = r31.s64 + 272;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// rlwinm r6,r9,12,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r7,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// addi r8,r6,512
	ctx.r8.s64 = ctx.r6.s64 + 512;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// clrlwi r10,r9,3
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// li r23,3687
	r23.s64 = 3687;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// addi r11,r31,284
	ctx.r11.s64 = r31.s64 + 284;
	// ori r28,r10,2
	r28.u64 = ctx.r10.u64 | 2;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// li r6,3691
	ctx.r6.s64 = 3691;
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
	// li r4,3690
	ctx.r4.s64 = 3690;
	// li r27,3694
	r27.s64 = 3694;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// li r25,3693
	r25.s64 = 3693;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// li r24,3697
	r24.s64 = 3697;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,280
	ctx.r11.s64 = r31.s64 + 280;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r9,r31,296
	ctx.r9.s64 = r31.s64 + 296;
	// ori r26,r10,2
	r26.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r6,r9,12,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// addi r6,r6,512
	ctx.r6.s64 = ctx.r6.s64 + 512;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r31,292
	ctx.r11.s64 = r31.s64 + 292;
	// ori r23,r10,2
	r23.u64 = ctx.r10.u64 | 2;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r8,r11,3
	ctx.r8.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// addi r11,r31,288
	ctx.r11.s64 = r31.s64 + 288;
	// rlwinm r7,r10,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,300
	ctx.r10.s64 = r31.s64 + 300;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r7,r10,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// ori r22,r8,2
	r22.u64 = ctx.r8.u64 | 2;
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// li r8,3696
	ctx.r8.s64 = 3696;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r7,r7,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// clrlwi r9,r9,3
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// ori r7,r11,2
	ctx.r7.u64 = ctx.r11.u64 | 2;
	// rlwinm r6,r6,0,19,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1000;
	// ori r4,r10,2
	ctx.r4.u64 = ctx.r10.u64 | 2;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// li r6,3700
	ctx.r6.s64 = 3700;
	// li r28,3699
	r28.s64 = 3699;
	// ori r27,r9,2
	r27.u64 = ctx.r9.u64 | 2;
	// addi r11,r31,308
	ctx.r11.s64 = r31.s64 + 308;
	// li r26,3703
	r26.s64 = 3703;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r11,3
	ctx.r9.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// addi r11,r31,304
	ctx.r11.s64 = r31.s64 + 304;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ori r25,r10,2
	r25.u64 = ctx.r10.u64 | 2;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// li r23,3709
	r23.s64 = 3709;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// li r24,3705
	r24.s64 = 3705;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r11,r31,316
	ctx.r11.s64 = r31.s64 + 316;
	// addi r9,r8,512
	ctx.r9.s64 = ctx.r8.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// li r7,3702
	ctx.r7.s64 = 3702;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,312
	ctx.r11.s64 = r31.s64 + 312;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// li r6,3706
	ctx.r6.s64 = 3706;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// ori r4,r9,2
	ctx.r4.u64 = ctx.r9.u64 | 2;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// ori r22,r11,2
	r22.u64 = ctx.r11.u64 | 2;
	// addi r11,r31,324
	ctx.r11.s64 = r31.s64 + 324;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,320
	ctx.r11.s64 = r31.s64 + 320;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// addi r8,r10,512
	ctx.r8.s64 = ctx.r10.s64 + 512;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r8,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// li r7,3708
	ctx.r7.s64 = 3708;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r31,332
	ctx.r11.s64 = r31.s64 + 332;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// li r6,3617
	ctx.r6.s64 = 3617;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,328
	ctx.r11.s64 = r31.s64 + 328;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// ori r7,r9,2
	ctx.r7.u64 = ctx.r9.u64 | 2;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r4,3616
	ctx.r4.s64 = 3616;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,340
	ctx.r11.s64 = r31.s64 + 340;
	// ori r28,r9,2
	r28.u64 = ctx.r9.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// li r27,3620
	r27.s64 = 3620;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,336
	ctx.r11.s64 = r31.s64 + 336;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// ori r6,r9,2
	ctx.r6.u64 = ctx.r9.u64 | 2;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// addi r10,r31,348
	ctx.r10.s64 = r31.s64 + 348;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// li r26,3619
	r26.s64 = 3619;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// clrlwi r11,r10,3
	ctx.r11.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r10,r8,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// li r7,3626
	ctx.r7.s64 = 3626;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r31,344
	ctx.r11.s64 = r31.s64 + 344;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// li r6,3625
	ctx.r6.s64 = 3625;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,356
	ctx.r11.s64 = r31.s64 + 356;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// ori r7,r10,2
	ctx.r7.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r4,3629
	ctx.r4.s64 = 3629;
	// addi r11,r31,352
	ctx.r11.s64 = r31.s64 + 352;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// ori r28,r9,2
	r28.u64 = ctx.r9.u64 | 2;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// li r27,3628
	r27.s64 = 3628;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,3635
	ctx.r6.s64 = 3635;
	// ori r26,r11,2
	r26.u64 = ctx.r11.u64 | 2;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,364
	ctx.r11.s64 = r31.s64 + 364;
	// li r25,3634
	r25.s64 = 3634;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// li r7,3638
	ctx.r7.s64 = 3638;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,360
	ctx.r11.s64 = r31.s64 + 360;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// ori r24,r10,2
	r24.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,372
	ctx.r10.s64 = r31.s64 + 372;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r11,r10,3
	ctx.r11.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r10,r8,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r31,368
	ctx.r11.s64 = r31.s64 + 368;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// li r4,3637
	ctx.r4.s64 = 3637;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// li r28,3644
	r28.s64 = 3644;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r31,380
	ctx.r11.s64 = r31.s64 + 380;
	// ori r27,r10,2
	r27.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// li r26,3643
	r26.s64 = 3643;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,376
	ctx.r11.s64 = r31.s64 + 376;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// ori r25,r9,2
	r25.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,388
	ctx.r11.s64 = r31.s64 + 388;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r24,r10,2
	r24.u64 = ctx.r10.u64 | 2;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,384
	ctx.r10.s64 = r31.s64 + 384;
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r7,r10,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// addi r9,r31,396
	ctx.r9.s64 = r31.s64 + 396;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// rlwinm r6,r9,12,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r7,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// addi r6,r6,512
	ctx.r6.s64 = ctx.r6.s64 + 512;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// clrlwi r11,r9,3
	ctx.r11.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r6,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1000;
	// li r9,3647
	ctx.r9.s64 = 3647;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r31,392
	ctx.r11.s64 = r31.s64 + 392;
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// ori r28,r10,2
	r28.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// li r6,3646
	ctx.r6.s64 = 3646;
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
	// li r4,3544
	ctx.r4.s64 = 3544;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// li r27,3545
	r27.s64 = 3545;
	// li r23,3850
	r23.s64 = 3850;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// li r26,3848
	r26.s64 = 3848;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// li r24,3849
	r24.s64 = 3849;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,404
	ctx.r11.s64 = r31.s64 + 404;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// ori r25,r10,2
	r25.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,400
	ctx.r11.s64 = r31.s64 + 400;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// ori r6,r9,2
	ctx.r6.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,412
	ctx.r11.s64 = r31.s64 + 412;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// ori r7,r10,2
	ctx.r7.u64 = ctx.r10.u64 | 2;
	// addi r10,r9,512
	ctx.r10.s64 = ctx.r9.s64 + 512;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,408
	ctx.r10.s64 = r31.s64 + 408;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// clrlwi r11,r10,3
	ctx.r11.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r10,r8,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// li r8,3851
	ctx.r8.s64 = 3851;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,3852
	ctx.r4.s64 = 3852;
	// addi r11,r31,420
	ctx.r11.s64 = r31.s64 + 420;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// ori r28,r10,2
	r28.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// li r27,3855
	r27.s64 = 3855;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// li r26,2071
	r26.s64 = 2071;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// li r24,2070
	r24.s64 = 2070;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// li r7,3853
	ctx.r7.s64 = 3853;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// clrlwi r9,r11,3
	ctx.r9.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r31,416
	ctx.r11.s64 = r31.s64 + 416;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ori r6,r10,2
	ctx.r6.u64 = ctx.r10.u64 | 2;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r11,r31,428
	ctx.r11.s64 = r31.s64 + 428;
	// addi r9,r8,512
	ctx.r9.s64 = ctx.r8.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// li r28,3854
	r28.s64 = 3854;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r31,424
	ctx.r11.s64 = r31.s64 + 424;
	// ori r4,r10,2
	ctx.r4.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,436
	ctx.r11.s64 = r31.s64 + 436;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// ori r6,r9,2
	ctx.r6.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,432
	ctx.r11.s64 = r31.s64 + 432;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r9,r11,3
	ctx.r9.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// ori r25,r10,2
	r25.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// addi r11,r10,512
	ctx.r11.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// addi r11,r31,444
	ctx.r11.s64 = r31.s64 + 444;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// li r8,2135
	ctx.r8.s64 = 2135;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,440
	ctx.r11.s64 = r31.s64 + 440;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// ori r7,r9,2
	ctx.r7.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r6,2134
	ctx.r6.s64 = 2134;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r31,452
	ctx.r11.s64 = r31.s64 + 452;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// li r4,2586
	ctx.r4.s64 = 2586;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,448
	ctx.r11.s64 = r31.s64 + 448;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r28,2585
	r28.s64 = 2585;
	// ori r7,r10,2
	ctx.r7.u64 = ctx.r10.u64 | 2;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// li r27,2589
	r27.s64 = 2589;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,460
	ctx.r11.s64 = r31.s64 + 460;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// ori r6,r10,2
	ctx.r6.u64 = ctx.r10.u64 | 2;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,456
	ctx.r10.s64 = r31.s64 + 456;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// addi r9,r8,512
	ctx.r9.s64 = ctx.r8.s64 + 512;
	// ori r8,r11,2
	ctx.r8.u64 = ctx.r11.u64 | 2;
	// clrlwi r11,r10,3
	ctx.r11.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r10,r9,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r26,2588
	r26.s64 = 2588;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r31,468
	ctx.r11.s64 = r31.s64 + 468;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// li r7,2591
	ctx.r7.s64 = 2591;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// li r4,74
	ctx.r4.s64 = 74;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,464
	ctx.r11.s64 = r31.s64 + 464;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// ori r6,r10,2
	ctx.r6.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r28,r10,512
	r28.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// li r8,2592
	ctx.r8.s64 = 2592;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r28,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x1000;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r31,476
	ctx.r11.s64 = r31.s64 + 476;
	// ori r28,r9,2
	r28.u64 = ctx.r9.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,472
	ctx.r11.s64 = r31.s64 + 472;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// li r8,73
	ctx.r8.s64 = 73;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,11036(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 11036);
	// stw r3,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// stw r11,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_8227FF40) {
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
	// beq cr6,0x8227ffc8
	if (ctx.cr6.eq) goto loc_8227FFC8;
	// lwz r3,32(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227ff98
	if (ctx.cr6.eq) goto loc_8227FF98;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227FF80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// sth r11,44(r31)
	REX_STORE_U16(r31.u32 + 44, ctx.r11.u16);
	// stb r11,28(r31)
	REX_STORE_U8(r31.u32 + 28, ctx.r11.u8);
loc_8227FF98:
	// lwz r11,804(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 804);
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x8227ffc0
	if (!ctx.cr6.lt) goto loc_8227FFC0;
	// addi r11,r11,101
	ctx.r11.s64 = ctx.r11.s64 + 101;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, r31.u32);
	// lwz r11,804(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 804);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,804(r30)
	REX_STORE_U32(r30.u32 + 804, ctx.r11.u32);
	// b 0x8227ffc8
	goto loc_8227FFC8;
loc_8227FFC0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8227FFC8;
	sub_82255B70(ctx, base);
loc_8227FFC8:
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

DEFINE_REX_FUNC(sub_82283938) {
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
	ctx.lr = 0x82283940;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82283a90
	if (ctx.cr6.eq) goto loc_82283A90;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82283a90
	if (ctx.cr6.eq) goto loc_82283A90;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82283a90
	if (ctx.cr6.eq) goto loc_82283A90;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82283a88
	if (ctx.cr6.eq) goto loc_82283A88;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82283a88
	if (!ctx.cr6.gt) goto loc_82283A88;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82283a88
	if (ctx.cr6.eq) goto loc_82283A88;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x822839cc
	if (!ctx.cr6.lt) goto loc_822839CC;
	// lis r31,32767
	r31.s64 = 2147418112;
	// ori r31,r31,65535
	r31.u64 = r31.u64 | 65535;
loc_822839CC:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bge cr6,0x822839dc
	if (!ctx.cr6.lt) goto loc_822839DC;
	// lis r27,32767
	r27.s64 = 2147418112;
	// ori r27,r27,65535
	r27.u64 = r27.u64 | 65535;
loc_822839DC:
	// rlwinm. r11,r24,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822839e8
	if (ctx.cr0.eq) goto loc_822839E8;
	// li r31,1
	r31.s64 = 1;
loc_822839E8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x82283a78
	if (!ctx.cr6.gt) goto loc_82283A78;
loc_822839F0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82283a78
	if (ctx.cr6.eq) goto loc_82283A78;
	// lhz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82283a78
	if (ctx.cr0.eq) goto loc_82283A78;
	// subf r11,r30,r10
	ctx.r11.u64 = ctx.r10.u64 - r30.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// subf. r6,r11,r27
	ctx.r6.u64 = r27.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble 0x82283a78
	if (!ctx.cr0.gt) goto loc_82283A78;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82283208
	ctx.lr = 0x82283A3C;
	sub_82283208(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82283a98
	if (ctx.cr0.lt) goto loc_82283A98;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82283a58
	if (!ctx.cr6.eq) goto loc_82283A58;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
loc_82283A58:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// ble cr6,0x82283a6c
	if (!ctx.cr6.gt) goto loc_82283A6C;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_82283A6C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(r29.s32, r31.s32, ctx.xer);
	// blt cr6,0x822839f0
	if (ctx.cr6.lt) goto loc_822839F0;
loc_82283A78:
	// stw r29,0(r26)
	REX_STORE_U32(r26.u32 + 0, r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,0(r25)
	REX_STORE_U32(r25.u32 + 0, r28.u32);
	// b 0x82283a98
	goto loc_82283A98;
loc_82283A88:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82283a98
	goto loc_82283A98;
loc_82283A90:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82283A98:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_822880E0) {
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
	ctx.lr = 0x822880E8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r10,-2144(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -2144);
	// lwz r11,192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// stw r10,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288118;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,16(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 16);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228812C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288148;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288160;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x82288178
	if (!ctx.cr0.lt) goto loc_82288178;
loc_82288168:
	// lwz r3,160(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x822d7b58
	ctx.lr = 0x82288170;
	sub_822D7B58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8228824c
	goto loc_8228824C;
loc_82288178:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82288188;
	sub_822D4FA0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,140(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lfs f13,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bctrl 
	ctx.lr = 0x822881DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82288168
	if (ctx.cr0.lt) goto loc_82288168;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822881FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82288168
	if (ctx.cr0.lt) goto loc_82288168;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,180(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228821C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82288168
	if (ctx.cr0.lt) goto loc_82288168;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228823C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,160(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x822d7b58
	ctx.lr = 0x82288248;
	sub_822D7B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8228824C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8228DF60) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e78
	ctx.lr = 0x8228DF68;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f28
	ctx.lr = 0x8228DF70;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// fmr f26,f2
	f26.f64 = ctx.f2.f64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f30,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f30.f64 = double(temp.f32);
	// li r28,0
	r28.s64 = 0;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r27,84(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// srawi r11,r27,1
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1) != 0);
	ctx.r11.s64 = r27.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// fmr f27,f3
	f27.f64 = ctx.f3.f64;
	// srawi r10,r27,1
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1) != 0);
	ctx.r10.s64 = r27.s32 >> 1;
	// fmr f25,f4
	f25.f64 = ctx.f4.f64;
	// neg r29,r11
	r29.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// fmr f31,f30
	f31.f64 = f30.f64;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	r31.s64 = temp.s64;
	// mr r25,r29
	r25.u64 = r29.u64;
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(r29.s32, r31.s32, ctx.xer);
	// bgt cr6,0x8228e06c
	if (ctx.cr6.gt) goto loc_8228E06C;
loc_8228DFD8:
	// mr r26,r29
	r26.u64 = r29.u64;
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(r29.s32, r31.s32, ctx.xer);
	// bgt cr6,0x8228e060
	if (ctx.cr6.gt) goto loc_8228E060;
	// extsw r10,r25
	ctx.r10.s64 = r25.s32;
	// stfs f30,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// add r30,r11,r24
	r30.u64 = ctx.r11.u64 + r24.u64;
	// frsp f29,f0
	f29.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f29,f26
	ctx.f0.f64 = double(float(f29.f64 * f26.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_8228E00C:
	// extsw r11,r26
	ctx.r11.s64 = r26.s32;
	// fmr f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f27.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f24,f0
	f24.f64 = double(float(ctx.f0.f64));
	// fmr f1,f24
	ctx.f1.f64 = f24.f64;
	// bl 0x8228dbb0
	ctx.lr = 0x8228E030;
	sub_8228DBB0(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmuls f0,f24,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f24.f64 * f28.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r26,r31
	ctx.cr6.compare<int32_t>(r26.s32, r31.s32, ctx.xer);
	// fadds f31,f1,f31
	f31.f64 = double(float(ctx.f1.f64 + f31.f64));
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// ble cr6,0x8228e00c
	if (!ctx.cr6.gt) goto loc_8228E00C;
loc_8228E060:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmpw cr6,r25,r31
	ctx.cr6.compare<int32_t>(r25.s32, r31.s32, ctx.xer);
	// ble cr6,0x8228dfd8
	if (!ctx.cr6.gt) goto loc_8228DFD8;
loc_8228E06C:
	// mullw. r9,r27,r27
	ctx.r9.s64 = int64_t(r27.s32) * int64_t(r27.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// ble 0x8228e0bc
	if (!ctx.cr0.gt) goto loc_8228E0BC;
	// fdivs f0,f25,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f25.f64 / f31.f64));
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_8228E080:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v63,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v62,v63,1,1
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 147), 1));
	// stvx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x8228e080
	if (ctx.cr6.lt) goto loc_8228E080;
loc_8228E0BC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f74
	ctx.lr = 0x8228E0C8;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82295468) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82295484
	if (!ctx.cr6.eq) goto loc_82295484;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// blr 
	return;
loc_82295484:
	// b 0x822954f0
	sub_822954F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82295758) {
	REX_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82295784
	if (ctx.cr6.eq) goto loc_82295784;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82295784
	if (ctx.cr6.eq) goto loc_82295784;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82295784
	if (ctx.cr6.eq) goto loc_82295784;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82295148
	sub_82295148(ctx, base);
	return;
loc_82295784:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82295EA0) {
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
	// lwz r3,292(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 292);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82295ed0
	if (ctx.cr6.eq) goto loc_82295ED0;
	// bl 0x82255b70
	ctx.lr = 0x82295ECC;
	sub_82255B70(ctx, base);
	// stw r30,292(r31)
	REX_STORE_U32(r31.u32 + 292, r30.u32);
loc_82295ED0:
	// addi r3,r31,384
	ctx.r3.s64 = r31.s64 + 384;
	// bl 0x82297948
	ctx.lr = 0x82295ED8;
	sub_82297948(ctx, base);
	// lwz r3,408(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82295ef0
	if (ctx.cr6.eq) goto loc_82295EF0;
	// bl 0x82255b70
	ctx.lr = 0x82295EE8;
	sub_82255B70(ctx, base);
	// stw r30,408(r31)
	REX_STORE_U32(r31.u32 + 408, r30.u32);
	// stw r30,412(r31)
	REX_STORE_U32(r31.u32 + 412, r30.u32);
loc_82295EF0:
	// lwz r3,296(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 296);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82295f08
	if (ctx.cr6.eq) goto loc_82295F08;
	// bl 0x82255b70
	ctx.lr = 0x82295F00;
	sub_82255B70(ctx, base);
	// stw r30,296(r31)
	REX_STORE_U32(r31.u32 + 296, r30.u32);
	// stw r30,300(r31)
	REX_STORE_U32(r31.u32 + 300, r30.u32);
loc_82295F08:
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

DEFINE_REX_FUNC(sub_8229B0E0) {
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
	ctx.lr = 0x8229B0E8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lwz r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r25,0
	r25.s64 = 0;
	// lwz r31,0(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r8,573
	ctx.r8.s64 = 573;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r26,-1
	r26.s64 = -1;
	// lwz r10,-2144(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -2144);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// lwz r28,12(r9)
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r25,5192(r3)
	REX_STORE_U32(ctx.r3.u32 + 5192, r25.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r8,5196(r3)
	REX_STORE_U32(ctx.r3.u32 + 5196, ctx.r8.u32);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// ble cr6,0x8229b178
	if (!ctx.cr6.gt) goto loc_8229B178;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
loc_8229B134:
	// lhz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8229b168
	if (ctx.cr0.eq) goto loc_8229B168;
	// lwz r10,5192(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5192);
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r6,r10,725
	ctx.r6.s64 = ctx.r10.s64 + 725;
	// stw r10,5192(r3)
	REX_STORE_U32(ctx.r3.u32 + 5192, ctx.r10.u32);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// stb r25,5200(r8)
	REX_STORE_U8(ctx.r8.u32 + 5200, r25.u8);
	// b 0x8229b16c
	goto loc_8229B16C;
loc_8229B168:
	// sth r25,2(r9)
	REX_STORE_U16(ctx.r9.u32 + 2, r25.u16);
loc_8229B16C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8229b134
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229B134;
loc_8229B178:
	// lwz r11,5192(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5192);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x8229b1fc
	if (!ctx.cr6.lt) goto loc_8229B1FC;
	// addi r8,r3,5200
	ctx.r8.s64 = ctx.r3.s64 + 5200;
loc_8229B188:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// bge cr6,0x8229b19c
	if (!ctx.cr6.lt) goto loc_8229B19C;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// b 0x8229b1a0
	goto loc_8229B1A0;
loc_8229B19C:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_8229B1A0:
	// lwz r10,5192(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5192);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// addi r5,r10,725
	ctx.r5.s64 = ctx.r10.s64 + 725;
	// stw r10,5192(r3)
	REX_STORE_U32(ctx.r3.u32 + 5192, ctx.r10.u32);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// sthx r6,r9,r31
	REX_STORE_U16(ctx.r9.u32 + r31.u32, ctx.r6.u16);
	// stbx r25,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, r25.u8);
	// lwz r11,5792(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5792);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,5792(r3)
	REX_STORE_U32(ctx.r3.u32 + 5792, ctx.r11.u32);
	// beq cr6,0x8229b1f0
	if (ctx.cr6.eq) goto loc_8229B1F0;
	// add r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r10,5796(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5796);
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,5796(r3)
	REX_STORE_U32(ctx.r3.u32 + 5796, ctx.r11.u32);
loc_8229B1F0:
	// lwz r11,5192(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5192);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8229b188
	if (ctx.cr6.lt) goto loc_8229B188;
loc_8229B1FC:
	// stw r26,4(r27)
	REX_STORE_U32(r27.u32 + 4, r26.u32);
	// lwz r11,5192(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5192);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r30,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r30.s64 = temp.s64;
	// b 0x8229b220
	goto loc_8229B220;
loc_8229B210:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8229a910
	ctx.lr = 0x8229B21C;
	sub_8229A910(ctx, base);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
loc_8229B220:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bge cr6,0x8229b210
	if (!ctx.cr6.lt) goto loc_8229B210;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r3,5200
	r30.s64 = ctx.r3.s64 + 5200;
	// add r29,r11,r31
	r29.u64 = ctx.r11.u64 + r31.u64;
loc_8229B234:
	// lwz r11,5192(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5192);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r24,2904(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 2904);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r10,r11,725
	ctx.r10.s64 = ctx.r11.s64 + 725;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r11,5192(r3)
	REX_STORE_U32(ctx.r3.u32 + 5192, ctx.r11.u32);
	// stw r10,2904(r3)
	REX_STORE_U32(ctx.r3.u32 + 2904, ctx.r10.u32);
	// bl 0x8229a910
	ctx.lr = 0x8229B260;
	sub_8229A910(ctx, base);
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,2904(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 2904);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// lwz r11,5196(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5196);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r11,725
	ctx.r8.s64 = ctx.r11.s64 + 725;
	// stw r11,5196(r3)
	REX_STORE_U32(ctx.r3.u32 + 5196, ctx.r11.u32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r24.u32);
	// lwz r11,5196(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5196);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r11,725
	ctx.r8.s64 = ctx.r11.s64 + 725;
	// stw r11,5196(r3)
	REX_STORE_U32(ctx.r3.u32 + 5196, ctx.r11.u32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r7.u32);
	// lhz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// sth r11,0(r29)
	REX_STORE_U16(r29.u32 + 0, ctx.r11.u16);
	// lbzx r11,r30,r7
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + ctx.r7.u32);
	// lbzx r8,r30,r24
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + r24.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8229b2d0
	if (ctx.cr6.lt) goto loc_8229B2D0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8229B2D0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r28,16
	ctx.r8.u64 = r28.u32 & 0xFFFF;
	// stbx r11,r30,r28
	REX_STORE_U8(r30.u32 + r28.u32, ctx.r11.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// sth r8,2(r9)
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r8.u16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r8,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// stw r28,2904(r3)
	REX_STORE_U32(ctx.r3.u32 + 2904, r28.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// bl 0x8229a910
	ctx.lr = 0x8229B2FC;
	sub_8229A910(ctx, base);
	// lwz r11,5192(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5192);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x8229b234
	if (!ctx.cr6.lt) goto loc_8229B234;
	// lwz r11,5196(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5196);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,2904(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2904);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r11,725
	ctx.r9.s64 = ctx.r11.s64 + 725;
	// stw r11,5196(r3)
	REX_STORE_U32(ctx.r3.u32 + 5196, ctx.r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// bl 0x823ffd48
	ctx.lr = 0x8229B32C;
	sub_823FFD48(ctx, base);
	// li r8,15
	ctx.r8.s64 = 15;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r3,2866
	ctx.r10.s64 = ctx.r3.s64 + 2866;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8229B340:
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,16,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFE;
	// sthu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8229b340
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229B340;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt cr6,0x8229b3bc
	if (ctx.cr6.lt) goto loc_8229B3BC;
	// addi r7,r26,1
	ctx.r7.s64 = r26.s64 + 1;
loc_8229B364:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229b3b0
	if (ctx.cr0.eq) goto loc_8229B3B0;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bgt cr6,0x8229b3b0
	if (ctx.cr6.gt) goto loc_8229B3B0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// lhzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// sthx r6,r10,r9
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u16);
loc_8229B394:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bdnz 0x8229b394
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229B394;
	// rlwinm r11,r8,31,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0xFFFF;
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
loc_8229B3B0:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x8229b364
	if (!ctx.cr0.eq) goto loc_8229B364;
loc_8229B3BC:
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x822d7b58
	ctx.lr = 0x8229B3C4;
	sub_822D7B58(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_822A7C70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822a7cc0
	if (ctx.cr6.eq) goto loc_822A7CC0;
	// subf r8,r5,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r5.u64;
loc_822A7C94:
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822a7c94
	if (!ctx.cr6.eq) goto loc_822A7C94;
loc_822A7CC0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822a7cdc
	if (ctx.cr6.eq) goto loc_822A7CDC;
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
loc_822A7CD0:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822a7cd0
	if (!ctx.cr6.eq) goto loc_822A7CD0;
loc_822A7CDC:
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A9BB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// stfs f0,1120(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 1120, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1124(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 1124, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1128(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 1128, temp.u32);
	// lwz r9,1428(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1428);
	// ori r9,r9,13
	ctx.r9.u64 = ctx.r9.u64 | 13;
	// stw r9,1428(r3)
	REX_STORE_U32(ctx.r3.u32 + 1428, ctx.r9.u32);
	// lwz r11,31464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31464);
	// stb r10,1536(r11)
	REX_STORE_U8(ctx.r11.u32 + 1536, ctx.r10.u8);
	// stb r10,1538(r11)
	REX_STORE_U8(ctx.r11.u32 + 1538, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822AA070) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x822a1440
	sub_822A1440(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822AA3A0) {
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
	ctx.lr = 0x822AA3A8;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2956(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2956);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r29,r3,1296
	r29.s64 = ctx.r3.s64 + 1296;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mulli r11,r11,80
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(80));
	// lfs f30,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f30.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r4,r11,1472
	ctx.r4.s64 = ctx.r11.s64 + 1472;
	// addi r30,r11,1456
	r30.s64 = ctx.r11.s64 + 1456;
	// lfs f13,1456(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1472(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1472);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f13,1460(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1460);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1476(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1476);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,1480(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1480);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1464(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1464);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x822cab38
	ctx.lr = 0x822AA430;
	sub_822CAB38(ctx, base);
	// stfs f31,1344(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1344, temp.u32);
	// stfs f31,1348(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1348, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stfs f31,1352(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1352, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f30,1356(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 1356, temp.u32);
	// bl 0x822a4998
	ctx.lr = 0x822AA44C;
	sub_822A4998(ctx, base);
	// lfs f0,1424(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 1424);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x822aa490
	if (ctx.cr6.eq) goto loc_822AA490;
	// lfs f13,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822a9900
	ctx.lr = 0x822AA490;
	sub_822A9900(ctx, base);
loc_822AA490:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x822aa4c0
	if (!ctx.cr6.gt) goto loc_822AA4C0;
	// lfs f13,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bl 0x822d47d0
	ctx.lr = 0x822AA4A8;
	sub_822D47D0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lfs f0,-5912(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -5912);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// b 0x822aa4e4
	goto loc_822AA4E4;
loc_822AA4C0:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x822aa4f0
	if (!ctx.cr6.lt) goto loc_822AA4F0;
	// lfs f13,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bl 0x822d47d0
	ctx.lr = 0x822AA4D4;
	sub_822D47D0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lfs f0,-5912(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -5912);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_822AA4E4:
	// addi r3,r31,1360
	ctx.r3.s64 = r31.s64 + 1360;
	// bl 0x822a5038
	ctx.lr = 0x822AA4EC;
	sub_822A5038(ctx, base);
	// b 0x822aa530
	goto loc_822AA530;
loc_822AA4F0:
	// stfs f30,1360(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 1360, temp.u32);
	// stfs f31,1364(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1364, temp.u32);
	// stfs f31,1368(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1368, temp.u32);
	// stfs f31,1372(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1372, temp.u32);
	// stfs f31,1376(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1376, temp.u32);
	// stfs f30,1380(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 1380, temp.u32);
	// stfs f31,1384(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1384, temp.u32);
	// stfs f31,1388(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1388, temp.u32);
	// stfs f31,1392(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1392, temp.u32);
	// stfs f31,1396(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1396, temp.u32);
	// stfs f30,1400(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 1400, temp.u32);
	// stfs f31,1404(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1404, temp.u32);
	// stfs f31,1408(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1408, temp.u32);
	// stfs f31,1412(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1412, temp.u32);
	// stfs f31,1416(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1416, temp.u32);
	// stfs f30,1420(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 1420, temp.u32);
loc_822AA530:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822B38B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822b38d0
	if (!ctx.cr6.lt) goto loc_822B38D0;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// b 0x822b38d4
	goto loc_822B38D4;
loc_822B38D0:
	// fmr f10,f13
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f13.f64;
loc_822B38D4:
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822b38ec
	if (!ctx.cr6.lt) goto loc_822B38EC;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// b 0x822b38f0
	goto loc_822B38F0;
loc_822B38EC:
	// fmr f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f13.f64;
loc_822B38F0:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822b3908
	if (!ctx.cr6.lt) goto loc_822B3908;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// b 0x822b390c
	goto loc_822B390C;
loc_822B3908:
	// fmr f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64;
loc_822B390C:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822b3920
	if (ctx.cr6.lt) goto loc_822B3920;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_822B3920:
	// stfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f10,12(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B78A8) {
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
	ctx.lr = 0x822B78B0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,31
	ctx.r5.s64 = 31;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// bl 0x822d6450
	ctx.lr = 0x822B78D0;
	sub_822D6450(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 144);
	// stb r11,144(r30)
	REX_STORE_U8(r30.u32 + 144, ctx.r11.u8);
	// lbz r11,145(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 145);
	// stb r11,145(r30)
	REX_STORE_U8(r30.u32 + 145, ctx.r11.u8);
	// lbz r11,146(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 146);
	// stb r11,146(r30)
	REX_STORE_U8(r30.u32 + 146, ctx.r11.u8);
	// lbz r11,147(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 147);
	// stb r11,147(r30)
	REX_STORE_U8(r30.u32 + 147, ctx.r11.u8);
	// lbz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 148);
	// stb r11,148(r30)
	REX_STORE_U8(r30.u32 + 148, ctx.r11.u8);
	// lbz r11,149(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 149);
	// stb r11,149(r30)
	REX_STORE_U8(r30.u32 + 149, ctx.r11.u8);
	// lbz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 150);
	// stb r11,150(r30)
	REX_STORE_U8(r30.u32 + 150, ctx.r11.u8);
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// stw r11,160(r30)
	REX_STORE_U32(r30.u32 + 160, ctx.r11.u32);
	// lbz r11,159(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 159);
	// stb r11,159(r30)
	REX_STORE_U8(r30.u32 + 159, ctx.r11.u8);
	// lbz r11,151(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 151);
	// stb r11,151(r30)
	REX_STORE_U8(r30.u32 + 151, ctx.r11.u8);
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// stw r11,220(r30)
	REX_STORE_U32(r30.u32 + 220, ctx.r11.u32);
	// lbz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 224);
	// stb r11,224(r30)
	REX_STORE_U8(r30.u32 + 224, ctx.r11.u8);
	// lbz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 164);
	// stb r11,164(r30)
	REX_STORE_U8(r30.u32 + 164, ctx.r11.u8);
	// lbz r11,165(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 165);
	// stb r11,165(r30)
	REX_STORE_U8(r30.u32 + 165, ctx.r11.u8);
	// lbz r11,166(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 166);
	// stb r11,166(r30)
	REX_STORE_U8(r30.u32 + 166, ctx.r11.u8);
	// lbz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 196);
	// stb r11,196(r30)
	REX_STORE_U8(r30.u32 + 196, ctx.r11.u8);
	// lbz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 152);
	// stb r11,152(r30)
	REX_STORE_U8(r30.u32 + 152, ctx.r11.u8);
	// lbz r11,153(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 153);
	// stb r11,153(r30)
	REX_STORE_U8(r30.u32 + 153, ctx.r11.u8);
	// beq 0x822b79e0
	if (ctx.cr0.eq) goto loc_822B79E0;
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// stw r10,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r10.u32);
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi. r29,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r29.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822b79e0
	if (ctx.cr0.eq) goto loc_822B79E0;
	// li r28,0
	r28.s64 = 0;
loc_822B7994:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// lwz r27,12(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r26,8(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r25,4(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822ab348
	ctx.lr = 0x822B79B0;
	sub_822AB348(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// bl 0x822ac200
	ctx.lr = 0x822B79BC;
	sub_822AC200(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// bl 0x822b7308
	ctx.lr = 0x822B79D4;
	sub_822B7308(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x822b7994
	if (!ctx.cr0.eq) goto loc_822B7994;
loc_822B79E0:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi. r28,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r28.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x822b7a40
	if (ctx.cr0.eq) goto loc_822B7A40;
	// li r29,0
	r29.s64 = 0;
loc_822B79F8:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r3,40(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x822b1d30
	ctx.lr = 0x822B7A08;
	sub_822B1D30(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x822b7a24
	goto loc_822B7A24;
loc_822B7A14:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// beq cr6,0x822b7a2c
	if (ctx.cr6.eq) goto loc_822B7A2C;
	// lwz r4,12(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
loc_822B7A24:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822b7a14
	if (!ctx.cr6.eq) goto loc_822B7A14;
loc_822B7A2C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b75a8
	ctx.lr = 0x822B7A34;
	sub_822B75A8(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x822b79f8
	if (!ctx.cr0.eq) goto loc_822B79F8;
loc_822B7A40:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 200);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi. r28,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r28.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x822b7aa0
	if (ctx.cr0.eq) goto loc_822B7AA0;
loc_822B7A58:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b5a40
	ctx.lr = 0x822B7A64;
	sub_822B5A40(ctx, base);
	// bl 0x822b1d30
	ctx.lr = 0x822B7A68;
	sub_822B1D30(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x822b7a84
	goto loc_822B7A84;
loc_822B7A74:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// beq cr6,0x822b7a8c
	if (ctx.cr6.eq) goto loc_822B7A8C;
	// lwz r4,12(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
loc_822B7A84:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822b7a74
	if (!ctx.cr6.eq) goto loc_822B7A74;
loc_822B7A8C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b7858
	ctx.lr = 0x822B7A94;
	sub_822B7858(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// blt cr6,0x822b7a58
	if (ctx.cr6.lt) goto loc_822B7A58;
loc_822B7AA0:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// stw r11,228(r30)
	REX_STORE_U32(r30.u32 + 228, ctx.r11.u32);
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// stw r11,232(r30)
	REX_STORE_U32(r30.u32 + 232, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_822C2380) {
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
	ctx.lr = 0x822C2388;
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
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822c258c
	if (!ctx.cr6.gt) goto loc_822C258C;
	// li r28,0
	r28.s64 = 0;
	// lis r27,-32254
	r27.s64 = -2113798144;
loc_822C23B4:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,44(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwzx r30,r28,r11
	r30.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// addi r11,r30,544
	ctx.r11.s64 = r30.s64 + 544;
	// addi r10,r30,560
	ctx.r10.s64 = r30.s64 + 560;
	// addi r9,r30,576
	ctx.r9.s64 = r30.s64 + 576;
	// lfs f13,544(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 544);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f12,548(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 548);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f11,552(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 552);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,556(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 556);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f10,560(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 560);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f9,564(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 564);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f8,568(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 568);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,572(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 572);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f7,576(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 576);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f6,580(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 580);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f5,584(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 584);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f0,588(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 588);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// beq cr6,0x822c2550
	if (ctx.cr6.eq) goto loc_822C2550;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lfs f4,24344(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 24344);
	ctx.f4.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
loc_822C2444:
	// add r6,r5,r4
	ctx.r6.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lfs f0,32(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f4
	ctx.cr6.compare(ctx.f0.f64, ctx.f4.f64);
	// blt cr6,0x822c2540
	if (ctx.cr6.lt) goto loc_822C2540;
	// mullw r6,r8,r29
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(r29.s32);
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lfs f3,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r3
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// lfs f31,72(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 72);
	f31.f64 = double(temp.f32);
	// fsubs f3,f31,f3
	ctx.f3.f64 = double(float(f31.f64 - ctx.f3.f64));
	// lfs f31,64(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 64);
	f31.f64 = double(temp.f32);
	// lfs f30,68(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 68);
	f30.f64 = double(temp.f32);
	// fsubs f2,f31,f2
	ctx.f2.f64 = double(float(f31.f64 - ctx.f2.f64));
	// fsubs f1,f30,f1
	ctx.f1.f64 = double(float(f30.f64 - ctx.f1.f64));
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fadds f11,f3,f11
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f30,84(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 84);
	f30.f64 = double(temp.f32);
	// lfs f3,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f31,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f31.f64 = double(temp.f32);
	// lfs f1,80(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 - f31.f64));
	// lfs f31,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	f31.f64 = double(temp.f32);
	// fsubs f3,f30,f3
	ctx.f3.f64 = double(float(f30.f64 - ctx.f3.f64));
	// lfs f2,88(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f2,f2,f31
	ctx.f2.f64 = double(float(ctx.f2.f64 - f31.f64));
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fadds f9,f3,f9
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f10,f1,f10
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f10.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f8,f2,f8
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f30,112(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 112);
	f30.f64 = double(temp.f32);
	// lfs f29,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	f29.f64 = double(temp.f32);
	// lfs f1,120(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	f31.f64 = double(temp.f32);
	// lfs f2,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,116(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 116);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f3,f3,f2
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fsubs f30,f30,f29
	f30.f64 = double(float(f30.f64 - f29.f64));
	// fsubs f2,f1,f31
	ctx.f2.f64 = double(float(ctx.f1.f64 - f31.f64));
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 * ctx.f0.f64));
	// fmuls f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fadds f6,f3,f6
	ctx.f6.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f7,f1,f7
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f5,f0,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_822C2540:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r5,r5,36
	ctx.r5.s64 = ctx.r5.s64 + 36;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822c2444
	if (ctx.cr6.lt) goto loc_822C2444;
loc_822C2550:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0f90
	ctx.lr = 0x822C255C;
	sub_822B0F90(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0ff0
	ctx.lr = 0x822C256C;
	sub_822B0FF0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b10a0
	ctx.lr = 0x822C2578;
	sub_822B10A0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822c23b4
	if (ctx.cr6.lt) goto loc_822C23B4;
loc_822C258C:
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

DEFINE_REX_FUNC(sub_822CA9B8) {
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
	ctx.lr = 0x822CA9C0;
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f0,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f11,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lfs f13,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822a70e8
	ctx.lr = 0x822CAA18;
	sub_822A70E8(ctx, base);
	// lfs f13,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f31,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	f31.f64 = double(temp.f32);
	// lfs f30,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	f30.f64 = double(temp.f32);
	// fmuls f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lfs f29,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	f29.f64 = double(temp.f32);
	// fmuls f10,f12,f30
	ctx.f10.f64 = double(float(ctx.f12.f64 * f30.f64));
	// fmuls f9,f0,f29
	ctx.f9.f64 = double(float(ctx.f0.f64 * f29.f64));
	// fmsubs f0,f0,f30,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, -ctx.f11.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmsubs f0,f13,f29,f10
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f29.f64, -ctx.f10.f64)));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmsubs f0,f12,f31,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, -ctx.f9.f64)));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822a70e8
	ctx.lr = 0x822CAA60;
	sub_822A70E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f12,f29
	ctx.f9.f64 = double(float(ctx.f12.f64 * f29.f64));
	// fmuls f10,f31,f13
	ctx.f10.f64 = double(float(f31.f64 * ctx.f13.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f12,32(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f29,8(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f31,24(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f30,40(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// fmsubs f9,f30,f13,f9
	ctx.f9.f64 = double(float(std::fma(f30.f64, ctx.f13.f64, -ctx.f9.f64)));
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f11,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f30,f0
	ctx.f8.f64 = double(float(f30.f64 * ctx.f0.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// fmsubs f10,f0,f29,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, -ctx.f10.f64)));
	// stfs f10,36(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// fmsubs f8,f12,f31,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, -ctx.f8.f64)));
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f7,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmadds f0,f7,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f13.f64)));
	// fnmadds f0,f6,f12,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f0.f64)));
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmadds f0,f0,f9,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f12.f64)));
	// fnmadds f0,f13,f10,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f0.f64)));
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// fmadds f0,f13,f31,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f0.f64)));
	// lfs f13,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fnmadds f0,f13,f30,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, f30.f64, ctx.f0.f64)));
	// stfs f11,60(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-56(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822D1E28) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// addi r30,r3,48
	r30.s64 = ctx.r3.s64 + 48;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D1E60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D1E78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_822D3730) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,4593(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 4593);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mulli r11,r11,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stb r10,4593(r3)
	REX_STORE_U8(ctx.r3.u32 + 4593, ctx.r10.u8);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x822d376c
	if (ctx.cr6.lt) goto loc_822D376C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_822D376C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D4C88) {
	REX_FUNC_PROLOGUE();
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	// stfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -16, f30.u64);
	// stfd f31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, f31.u64);
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfd f0,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.f0.u64);
	// addi r11,r11,-2448
	ctx.r11.s64 = ctx.r11.s64 + -2448;
	// lfd f30,26664(r10)
	f30.u64 = REX_LOAD_U64(ctx.r10.u32 + 26664);
	// lfd f11,8(r11)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lfs f12,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfd f10,40(r11)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// fmul f13,f11,f0
	ctx.f13.f64 = ctx.f11.f64 * ctx.f0.f64;
	// lfd f9,48(r11)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// lfd f8,112(r11)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + 112);
	// lfd f7,104(r11)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// lfd f6,96(r11)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r11.u32 + 96);
	// lfd f5,88(r11)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r11.u32 + 88);
	// lfd f4,80(r11)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r11.u32 + 80);
	// lfd f3,72(r11)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// lfd f2,64(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// lfd f31,56(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// fctid f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// lfs f13,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsel f12,f1,f13,f12
	ctx.f12.f64 = ctx.f1.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fcfid f13,f11
	ctx.f13.f64 = double(ctx.f11.s64);
	// fnmsub f11,f10,f13,f0
	ctx.f11.f64 = -std::fma(ctx.f10.f64, ctx.f13.f64, -ctx.f0.f64);
	// fctidz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.f10.u64);
	// ld r9,-32(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// clrldi r8,r9,63
	ctx.r8.u64 = ctx.r9.u64 & 0x1;
	// fnmsub f9,f9,f13,f11
	ctx.f9.f64 = -std::fma(ctx.f9.f64, ctx.f13.f64, -ctx.f11.f64);
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// fmul f13,f9,f9
	ctx.f13.f64 = ctx.f9.f64 * ctx.f9.f64;
	// fmadd f11,f8,f13,f7
	ctx.f11.f64 = std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f7.f64);
	// fmadd f10,f11,f13,f6
	ctx.f10.f64 = std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f6.f64);
	// fmadd f8,f10,f13,f5
	ctx.f8.f64 = std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f5.f64);
	// fmadd f7,f8,f13,f4
	ctx.f7.f64 = std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f4.f64);
	// fmadd f6,f7,f13,f3
	ctx.f6.f64 = std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f3.f64);
	// fmadd f5,f6,f13,f2
	ctx.f5.f64 = std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f2.f64);
	// fmadd f4,f5,f13,f31
	ctx.f4.f64 = std::fma(ctx.f5.f64, ctx.f13.f64, f31.f64);
	// fmadd f3,f4,f13,f30
	ctx.f3.f64 = std::fma(ctx.f4.f64, ctx.f13.f64, f30.f64);
	// fmul f13,f3,f9
	ctx.f13.f64 = ctx.f3.f64 * ctx.f9.f64;
	// beq cr6,0x822d4d38
	if (ctx.cr6.eq) goto loc_822D4D38;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_822D4D38:
	// ld r10,-24(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// fmul f12,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64 * ctx.f12.f64;
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// beq cr6,0x822d4d5c
	if (ctx.cr6.eq) goto loc_822D4D5C;
	// lfd f13,16(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// fsub f13,f0,f13
	ctx.f13.f64 = ctx.f0.f64 - ctx.f13.f64;
	// lfd f0,-2064(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -2064);
	// fsel f1,f13,f0,f12
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
loc_822D4D5C:
	// lfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D8578) {
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
	ctx.lr = 0x822D8580;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x822d5870
	ctx.lr = 0x822D85B4;
	sub_822D5870(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x822d85d4
	if (!ctx.cr6.eq) goto loc_822D85D4;
loc_822D85BC:
	// bl 0x822db6c0
	ctx.lr = 0x822D85C0;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822D85CC;
	sub_822D6910(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822d8690
	goto loc_822D8690;
loc_822D85D4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x822d85e4
	if (ctx.cr6.eq) goto loc_822D85E4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822d85bc
	if (ctx.cr6.eq) goto loc_822D85BC;
loc_822D85E4:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bgt cr6,0x822d85fc
	if (ctx.cr6.gt) goto loc_822D85FC;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
loc_822D85FC:
	// li r11,66
	ctx.r11.s64 = 66;
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x822D8624;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x822d8638
	if (!ctx.cr6.eq) goto loc_822D8638;
loc_822D8630:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x822d8690
	goto loc_822D8690;
loc_822D8638:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x822d8670
	if (ctx.cr6.lt) goto loc_822D8670;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt 0x822d865c
	if (ctx.cr0.lt) goto loc_822D865C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r25,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r25.u8);
	// b 0x822d8630
	goto loc_822D8630;
loc_822D865C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822da948
	ctx.lr = 0x822D8668;
	sub_822DA948(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822d8630
	if (!ctx.cr6.eq) goto loc_822D8630;
loc_822D8670:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r31,r26
	ctx.r10.u64 = r31.u64 + r26.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stb r25,-1(r10)
	REX_STORE_U8(ctx.r10.u32 + -1, r25.u8);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r3,r11,-2
	ctx.r3.s64 = ctx.r11.s64 + -2;
loc_822D8690:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(__savevmx_107) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_29) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_70) {
	REX_FUNC_PROLOGUE();
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
	// li r11,-928
	ctx.r11.s64 = -928;
	// lvx128 v70,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v70.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-912
	ctx.r11.s64 = -912;
	// lvx128 v71,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v71.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-896
	ctx.r11.s64 = -896;
	// lvx128 v72,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v72.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-880
	ctx.r11.s64 = -880;
	// lvx128 v73,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v73.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-864
	ctx.r11.s64 = -864;
	// lvx128 v74,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v74.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-848
	ctx.r11.s64 = -848;
	// lvx128 v75,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v75.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-832
	ctx.r11.s64 = -832;
	// lvx128 v76,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v76.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-816
	ctx.r11.s64 = -816;
	// lvx128 v77,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v77.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-800
	ctx.r11.s64 = -800;
	// lvx128 v78,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v78.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-784
	ctx.r11.s64 = -784;
	// lvx128 v79,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v79.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-768
	ctx.r11.s64 = -768;
	// lvx128 v80,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v80.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-752
	ctx.r11.s64 = -752;
	// lvx128 v81,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v81.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-736
	ctx.r11.s64 = -736;
	// lvx128 v82,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v82.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v83.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v84.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v85.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v86.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v87.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v88.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v89.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v90.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v91.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(sub_822E5A00) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822e5a58
	if (ctx.cr6.lt) goto loc_822E5A58;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r11,-11596(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11596);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822e5a58
	if (!ctx.cr6.lt) goto loc_822E5A58;
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-11584
	ctx.r10.s64 = ctx.r10.s64 + -11584;
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x822e5a58
	if (!ctx.cr6.eq) goto loc_822E5A58;
	// stwx r4,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822e5a78
	goto loc_822E5A78;
loc_822E5A58:
	// bl 0x822db6c0
	ctx.lr = 0x822E5A5C;
	sub_822DB6C0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822db6f8
	ctx.lr = 0x822E5A68;
	sub_822DB6F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822E5A78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E8D40) {
	REX_FUNC_PROLOGUE();
	// stw r4,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E8D60) {
	REX_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E8EB0) {
	REX_FUNC_PROLOGUE();
	// stw r4,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E8F98) {
	REX_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32808
	ctx.r4.u64 = ctx.r4.u64 | 32808;
	// b 0x823cd118
	sub_823CD118(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822E91E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822E91E8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,640(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 640);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,636(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 636);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r3,640
	r30.s64 = ctx.r3.s64 + 640;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822e9248
	if (ctx.cr6.lt) goto loc_822E9248;
	// lwz r11,648(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e9238
	if (!ctx.cr6.eq) goto loc_822E9238;
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E9230;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,648(r31)
	REX_STORE_U32(r31.u32 + 648, ctx.r9.u32);
loc_822E9238:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_822E9248:
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
	// bne 0x822e9248
	if (!ctx.cr0.eq) goto loc_822E9248;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,80(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822E9278;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,644(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 644);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + r31.u64;
	// stw r3,68(r6)
	REX_STORE_U32(ctx.r6.u32 + 68, ctx.r3.u32);
	// lwz r11,644(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 644);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// stw r29,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, r29.u32);
	// lwz r11,644(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 644);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// stw r31,92(r10)
	REX_STORE_U32(ctx.r10.u32 + 92, r31.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r11,644(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 644);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,84(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 84);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822E92F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822e9334
	if (ctx.cr6.lt) goto loc_822E9334;
	// lwz r11,648(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 648);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e9320
	if (!ctx.cr6.eq) goto loc_822E9320;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E9320;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822E9320:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822e9390
	if (ctx.cr6.lt) goto loc_822E9390;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,648(r31)
	REX_STORE_U32(r31.u32 + 648, ctx.r11.u32);
	// b 0x822e9350
	goto loc_822E9350;
loc_822E9334:
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
	// bne 0x822e9334
	if (!ctx.cr0.eq) goto loc_822E9334;
loc_822E9350:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822e9390
	if (ctx.cr6.lt) goto loc_822E9390;
	// lwz r11,644(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 644);
	// lwz r10,636(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 636);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,644(r31)
	REX_STORE_U32(r31.u32 + 644, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822e9378
	if (ctx.cr6.lt) goto loc_822E9378;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,644(r31)
	REX_STORE_U32(r31.u32 + 644, ctx.r11.u32);
loc_822E9378:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// clrldi r4,r29,32
	ctx.r4.u64 = r29.u64 & 0xFFFFFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E9390;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822E9390:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822F22F0) {
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
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// stw r3,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F2318;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r5,r7,10
	ctx.r5.u64 = ctx.r7.u64 | 10;
	// and r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 & ctx.r5.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F4398) {
	REX_FUNC_PROLOGUE();
	// lwz r3,444(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F4408) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r3,204
	ctx.r7.s64 = ctx.r3.s64 + 204;
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

DEFINE_REX_FUNC(sub_822F46B8) {
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
	// lwz r8,92(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822F4CF0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r11,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// std r11,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lwz r8,36(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F4D2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F5F78) {
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
	// lwz r10,144(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F5F94;
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

DEFINE_REX_FUNC(sub_822F6148) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x824d445c
	__imp__KeSetEvent(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F61F8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,216(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// stw r4,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r4.u32);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,80(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822F8D30) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F8D40) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,92(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// stw r4,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F8DE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822F8DF0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f8e18
	if (ctx.cr6.eq) goto loc_822F8E18;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32770
	ctx.r4.u64 = ctx.r4.u64 | 32770;
	// bl 0x823cd250
	ctx.lr = 0x822F8E18;
	sub_823CD250(ctx, base);
loc_822F8E18:
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f8e28
	if (ctx.cr6.eq) goto loc_822F8E28;
	// bl 0x82208848
	ctx.lr = 0x822F8E28;
	sub_82208848(ctx, base);
loc_822F8E28:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F8E3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x822f8e7c
	if (!ctx.cr6.eq) goto loc_822F8E7C;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r4,r4,32770
	ctx.r4.u64 = ctx.r4.u64 | 32770;
	// bl 0x823cd118
	ctx.lr = 0x822F8E58;
	sub_823CD118(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f8e6c
	if (ctx.cr6.eq) goto loc_822F8E6C;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// b 0x822f8e80
	goto loc_822F8E80;
loc_822F8E6C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_822F8E7C:
	// stw r29,48(r31)
	REX_STORE_U32(r31.u32 + 48, r29.u32);
loc_822F8E80:
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822095c0
	ctx.lr = 0x822F8E98;
	sub_822095C0(ctx, base);
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822f8ed0
	if (!ctx.cr6.eq) goto loc_822F8ED0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F8EB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f8c60
	ctx.lr = 0x822F8EC4;
	sub_822F8C60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_822F8ED0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822FC8E0) {
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
	ctx.lr = 0x822FC8E8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x822fc90c
	if (!ctx.cr6.eq) goto loc_822FC90C;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
loc_822FC90C:
	// addi r27,r4,-24
	r27.s64 = ctx.r4.s64 + -24;
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(r27.u32, 4, ctx.xer);
	// bge cr6,0x822fc928
	if (!ctx.cr6.lt) goto loc_822FC928;
loc_822FC91C:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
loc_822FC928:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FC93C;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x822fc91c
	if (!ctx.cr6.eq) goto loc_822FC91C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r28,4
	r28.s64 = 4;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lbz r5,3(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r9,r5,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rotlwi r30,r11,0
	r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// bgt cr6,0x822fc91c
	if (ctx.cr6.gt) goto loc_822FC91C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822fc9dc
	if (ctx.cr6.eq) goto loc_822FC9DC;
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bgt cr6,0x822fc91c
	if (ctx.cr6.gt) goto loc_822FC91C;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FC9B8;
	sub_822EC1E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// bne cr6,0x822fc91c
	if (!ctx.cr6.eq) goto loc_822FC91C;
	// addi r28,r3,4
	r28.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r3,32
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32, ctx.xer);
	// bgt cr6,0x822fc91c
	if (ctx.cr6.gt) goto loc_822FC91C;
	// addi r3,r31,118
	ctx.r3.s64 = r31.s64 + 118;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822d4fa0
	ctx.lr = 0x822FC9DC;
	sub_822D4FA0(ctx, base);
loc_822FC9DC:
	// addi r29,r28,4
	r29.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// bgt cr6,0x822fc91c
	if (ctx.cr6.gt) goto loc_822FC91C;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r11,r28,32
	ctx.r11.u64 = r28.u64 & 0xFFFFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FCA04;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x822fc91c
	if (!ctx.cr6.eq) goto loc_822FC91C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lbz r5,3(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r8,r5,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add. r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822fca90
	if (ctx.cr0.eq) goto loc_822FCA90;
	// add r11,r29,r30
	ctx.r11.u64 = r29.u64 + r30.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bgt cr6,0x822fc91c
	if (ctx.cr6.gt) goto loc_822FC91C;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r11,r29,32
	ctx.r11.u64 = r29.u64 & 0xFFFFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FCA6C;
	sub_822EC1E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// bne cr6,0x822fc91c
	if (!ctx.cr6.eq) goto loc_822FC91C;
	// add r29,r29,r3
	r29.u64 = r29.u64 + ctx.r3.u64;
	// cmplwi cr6,r3,16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16, ctx.xer);
	// bgt cr6,0x822fc91c
	if (ctx.cr6.gt) goto loc_822FC91C;
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822d4fa0
	ctx.lr = 0x822FCA90;
	sub_822D4FA0(ctx, base);
loc_822FCA90:
	// addi r28,r29,4
	r28.s64 = r29.s64 + 4;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(r28.u32, r27.u32, ctx.xer);
	// bgt cr6,0x822fc91c
	if (ctx.cr6.gt) goto loc_822FC91C;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r11,r29,32
	ctx.r11.u64 = r29.u64 & 0xFFFFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FCAB8;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x822fc91c
	if (!ctx.cr6.eq) goto loc_822FC91C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lbz r5,3(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r8,r5,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add. r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822fcb44
	if (ctx.cr0.eq) goto loc_822FCB44;
	// add r11,r28,r30
	ctx.r11.u64 = r28.u64 + r30.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bgt cr6,0x822fc91c
	if (ctx.cr6.gt) goto loc_822FC91C;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r11,r28,32
	ctx.r11.u64 = r28.u64 & 0xFFFFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FCB20;
	sub_822EC1E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// bne cr6,0x822fc91c
	if (!ctx.cr6.eq) goto loc_822FC91C;
	// add r28,r28,r3
	r28.u64 = r28.u64 + ctx.r3.u64;
	// cmplwi cr6,r3,32
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32, ctx.xer);
	// bgt cr6,0x822fc91c
	if (ctx.cr6.gt) goto loc_822FC91C;
	// addi r3,r31,172
	ctx.r3.s64 = r31.s64 + 172;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822d4fa0
	ctx.lr = 0x822FCB44;
	sub_822D4FA0(ctx, base);
loc_822FCB44:
	// addi r29,r28,4
	r29.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// bgt cr6,0x822fc91c
	if (ctx.cr6.gt) goto loc_822FC91C;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r11,r28,32
	ctx.r11.u64 = r28.u64 & 0xFFFFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FCB6C;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x822fc91c
	if (!ctx.cr6.eq) goto loc_822FC91C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lbz r5,3(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r8,r5,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add. r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822fcbe8
	if (ctx.cr0.eq) goto loc_822FCBE8;
	// add r11,r29,r30
	ctx.r11.u64 = r29.u64 + r30.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bgt cr6,0x822fc91c
	if (ctx.cr6.gt) goto loc_822FC91C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822fcbe8
	if (ctx.cr6.eq) goto loc_822FCBE8;
loc_822FCBC0:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r11,r29,32
	ctx.r11.u64 = r29.u64 & 0xFFFFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FCBDC;
	sub_822EC1E8(ctx, base);
	// subf. r30,r3,r30
	r30.u64 = r30.u64 - ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r29,r29,r3
	r29.u64 = r29.u64 + ctx.r3.u64;
	// bne 0x822fcbc0
	if (!ctx.cr0.eq) goto loc_822FCBC0;
loc_822FCBE8:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r11,r27,32
	ctx.r11.u64 = r27.u64 & 0xFFFFFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8230E0C8) {
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
	ctx.lr = 0x8230E0D0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,28(r3)
	r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r24,0
	r24.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r24,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r24.u32);
	// addi r23,r4,-24
	r23.s64 = ctx.r4.s64 + -24;
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r24.u32);
	// lwz r3,0(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 0);
	// sth r24,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r24.u16);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230E10C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// lwz r3,224(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 224);
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f9490
	ctx.lr = 0x8230E12C;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// li r5,88
	ctx.r5.s64 = 88;
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x8230E148;
	sub_822D5870(ctx, base);
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// li r10,52
	ctx.r10.s64 = 52;
	// cmplwi cr6,r23,52
	ctx.cr6.compare<uint32_t>(r23.u32, 52, ctx.xer);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lhz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 100);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,100(r11)
	REX_STORE_U16(ctx.r11.u32 + 100, ctx.r9.u16);
	// bge cr6,0x8230e174
	if (!ctx.cr6.lt) goto loc_8230E174;
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,12
	r31.u64 = r31.u64 | 12;
	// b 0x8230e928
	goto loc_8230E928;
loc_8230E174:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82307a88
	ctx.lr = 0x8230E190;
	sub_82307A88(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82307a88
	ctx.lr = 0x8230E1B8;
	sub_82307A88(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823078f0
	ctx.lr = 0x8230E1E0;
	sub_823078F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823078f0
	ctx.lr = 0x8230E208;
	sub_823078F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823078f0
	ctx.lr = 0x8230E230;
	sub_823078F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823078f0
	ctx.lr = 0x8230E258;
	sub_823078F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823078f0
	ctx.lr = 0x8230E280;
	sub_823078F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823078f0
	ctx.lr = 0x8230E2A8;
	sub_823078F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823078f0
	ctx.lr = 0x8230E2D0;
	sub_823078F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823078f0
	ctx.lr = 0x8230E2F8;
	sub_823078F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82307770
	ctx.lr = 0x8230E31C;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 4);
	// clrlwi r30,r11,24
	r30.u64 = ctx.r11.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,128(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 128);
	// bl 0x822f9818
	ctx.lr = 0x8230E344;
	sub_822F9818(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// li r5,88
	ctx.r5.s64 = 88;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x822d4fa0
	ctx.lr = 0x8230E360;
	sub_822D4FA0(ctx, base);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 224);
	// bl 0x822f94e8
	ctx.lr = 0x8230E370;
	sub_822F94E8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r30,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r30.u8);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// sth r10,84(r9)
	REX_STORE_U16(ctx.r9.u32 + 84, ctx.r10.u16);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// sth r24,86(r8)
	REX_STORE_U16(ctx.r8.u32 + 86, r24.u16);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r4,56
	ctx.r4.s64 = ctx.r4.s64 + 56;
	// bl 0x82307770
	ctx.lr = 0x8230E3B4;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// li r11,8
	ctx.r11.s64 = 8;
	// cmplwi cr6,r23,60
	ctx.cr6.compare<uint32_t>(r23.u32, 60, ctx.xer);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bge cr6,0x8230e3dc
	if (!ctx.cr6.lt) goto loc_8230E3DC;
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,12
	r31.u64 = r31.u64 | 12;
	// b 0x8230e928
	goto loc_8230E928;
loc_8230E3DC:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r28,60
	r28.s64 = 60;
	// bl 0x82307a88
	ctx.lr = 0x8230E3FC;
	sub_82307A88(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// cmplwi cr6,r23,60
	ctx.cr6.compare<uint32_t>(r23.u32, 60, ctx.xer);
	// ble cr6,0x8230e8dc
	if (!ctx.cr6.gt) goto loc_8230E8DC;
	// li r30,2
	r30.s64 = 2;
	// cmplwi cr6,r23,62
	ctx.cr6.compare<uint32_t>(r23.u32, 62, ctx.xer);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// bge cr6,0x8230e42c
	if (!ctx.cr6.lt) goto loc_8230E42C;
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,12
	r31.u64 = r31.u64 | 12;
	// b 0x8230e928
	goto loc_8230E928;
loc_8230E42C:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,72
	ctx.r4.s64 = ctx.r11.s64 + 72;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r28,62
	r28.s64 = 62;
	// bl 0x82307770
	ctx.lr = 0x8230E44C;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// cmplwi cr6,r23,62
	ctx.cr6.compare<uint32_t>(r23.u32, 62, ctx.xer);
	// ble cr6,0x8230e8dc
	if (!ctx.cr6.gt) goto loc_8230E8DC;
	// cmplwi cr6,r23,64
	ctx.cr6.compare<uint32_t>(r23.u32, 64, ctx.xer);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// bge cr6,0x8230e478
	if (!ctx.cr6.lt) goto loc_8230E478;
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,12
	r31.u64 = r31.u64 | 12;
	// b 0x8230e928
	goto loc_8230E928;
loc_8230E478:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,74
	ctx.r4.s64 = ctx.r11.s64 + 74;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r28,64
	r28.s64 = 64;
	// bl 0x82307770
	ctx.lr = 0x8230E498;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// cmplwi cr6,r23,64
	ctx.cr6.compare<uint32_t>(r23.u32, 64, ctx.xer);
	// ble cr6,0x8230e8dc
	if (!ctx.cr6.gt) goto loc_8230E8DC;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lhz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230e634
	if (ctx.cr6.eq) goto loc_8230E634;
	// addi r6,r10,76
	ctx.r6.s64 = ctx.r10.s64 + 76;
	// lwz r3,224(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 224);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f9490
	ctx.lr = 0x8230E4D0;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 72);
	// lwz r3,76(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// rotlwi r5,r10,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// bl 0x822d5870
	ctx.lr = 0x8230E4F4;
	sub_822D5870(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// lhz r9,72(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 72);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8230e634
	if (ctx.cr6.eq) goto loc_8230E634;
	// li r25,4
	r25.s64 = 4;
loc_8230E50C:
	// addi r9,r28,4
	ctx.r9.s64 = r28.s64 + 4;
	// stw r25,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// cmplw cr6,r9,r23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r23.u32, ctx.xer);
	// bgt cr6,0x8230e8b8
	if (ctx.cr6.gt) goto loc_8230E8B8;
	// lwz r10,76(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// rlwinm r30,r11,3,13,28
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7FFF8;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// clrlwi r27,r11,16
	r27.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82307770
	ctx.lr = 0x8230E544;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x82307770
	ctx.lr = 0x8230E574;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,76(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + r30.u64;
	// lhz r11,2(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230e620
	if (ctx.cr6.eq) goto loc_8230E620;
	// rlwinm r29,r11,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r29,r28
	r28.u64 = r29.u64 + r28.u64;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(r28.u32, r23.u32, ctx.xer);
	// bgt cr6,0x8230e8b8
	if (ctx.cr6.gt) goto loc_8230E8B8;
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// lwz r3,224(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 224);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f9490
	ctx.lr = 0x8230E5C0;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x822d5870
	ctx.lr = 0x8230E5E8;
	sub_822D5870(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,76(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x82307e08
	ctx.lr = 0x8230E610;
	sub_82307E08(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_8230E620:
	// addi r11,r27,1
	ctx.r11.s64 = r27.s64 + 1;
	// lhz r9,72(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 72);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8230e50c
	if (ctx.cr6.lt) goto loc_8230E50C;
loc_8230E634:
	// cmplw cr6,r23,r28
	ctx.cr6.compare<uint32_t>(r23.u32, r28.u32, ctx.xer);
	// ble cr6,0x8230e8dc
	if (!ctx.cr6.gt) goto loc_8230E8DC;
	// lhz r11,74(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230e848
	if (ctx.cr6.eq) goto loc_8230E848;
	// addi r6,r10,80
	ctx.r6.s64 = ctx.r10.s64 + 80;
	// lwz r3,224(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 224);
	// mulli r5,r11,28
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f9490
	ctx.lr = 0x8230E65C;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r10,74(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 74);
	// lwz r3,80(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mulli r5,r10,28
	ctx.r5.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(28));
	// bl 0x822d5870
	ctx.lr = 0x8230E680;
	sub_822D5870(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lhz r9,74(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 74);
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8230e848
	if (ctx.cr6.eq) goto loc_8230E848;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r24,22
	r24.s64 = 22;
	// addi r25,r10,23544
	r25.s64 = ctx.r10.s64 + 23544;
loc_8230E6A0:
	// addi r10,r28,22
	ctx.r10.s64 = r28.s64 + 22;
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r23.u32, ctx.xer);
	// bgt cr6,0x8230e8b8
	if (ctx.cr6.gt) goto loc_8230E8B8;
	// clrlwi r27,r29,16
	r27.u64 = r29.u32 & 0xFFFF;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mulli r30,r27,28
	r30.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(28));
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// bl 0x82307c58
	ctx.lr = 0x8230E6D8;
	sub_82307C58(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82307770
	ctx.lr = 0x8230E708;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// addi r8,r25,16
	ctx.r8.s64 = r25.s64 + 16;
	// lwz r10,80(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 80);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
loc_8230E728:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8230e748
	if (!ctx.cr0.eq) goto loc_8230E748;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8230e728
	if (!ctx.cr6.eq) goto loc_8230E728;
loc_8230E748:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8230e76c
	if (!ctx.cr6.eq) goto loc_8230E76C;
	// sth r29,84(r7)
	REX_STORE_U16(ctx.r7.u32 + 84, r29.u16);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// lhz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 16);
	// sth r9,86(r11)
	REX_STORE_U16(ctx.r11.u32 + 86, ctx.r9.u16);
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_8230E76C:
	// lwz r11,80(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 80);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823078f0
	ctx.lr = 0x8230E78C;
	sub_823078F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// lwz r29,20(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8230e834
	if (ctx.cr6.eq) goto loc_8230E834;
	// add r28,r29,r28
	r28.u64 = r29.u64 + r28.u64;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(r28.u32, r23.u32, ctx.xer);
	// bgt cr6,0x8230e8b8
	if (ctx.cr6.gt) goto loc_8230E8B8;
	// addi r6,r10,24
	ctx.r6.s64 = ctx.r10.s64 + 24;
	// lwz r3,224(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 224);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f9490
	ctx.lr = 0x8230E7D4;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// lwz r3,24(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// bl 0x822d5870
	ctx.lr = 0x8230E7FC;
	sub_822D5870(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,80(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// lwz r4,24(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// bl 0x82307e08
	ctx.lr = 0x8230E824;
	sub_82307E08(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_8230E834:
	// addi r10,r27,1
	ctx.r10.s64 = r27.s64 + 1;
	// lhz r9,74(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 74);
	// clrlwi r29,r10,16
	r29.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8230e6a0
	if (ctx.cr6.lt) goto loc_8230E6A0;
loc_8230E848:
	// cmplw cr6,r23,r28
	ctx.cr6.compare<uint32_t>(r23.u32, r28.u32, ctx.xer);
	// ble cr6,0x8230e8dc
	if (!ctx.cr6.gt) goto loc_8230E8DC;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8230da20
	ctx.lr = 0x8230E860;
	sub_8230DA20(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-25464
	ctx.r11.s64 = ctx.r11.s64 + -25464;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_8230E87C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8230e89c
	if (!ctx.cr0.eq) goto loc_8230E89C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8230e87c
	if (!ctx.cr6.eq) goto loc_8230E87C;
loc_8230E89C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8230e8dc
	if (!ctx.cr6.eq) goto loc_8230E8DC;
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r30,r4,r28
	r30.u64 = ctx.r4.u64 + r28.u64;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(r30.u32, r23.u32, ctx.xer);
	// ble cr6,0x8230e8c4
	if (!ctx.cr6.gt) goto loc_8230E8C4;
loc_8230E8B8:
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,12
	r31.u64 = r31.u64 | 12;
	// b 0x8230e928
	goto loc_8230E928;
loc_8230E8C4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82308898
	ctx.lr = 0x8230E8CC;
	sub_82308898(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// mr r28,r30
	r28.u64 = r30.u64;
loc_8230E8DC:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subf r10,r11,r23
	ctx.r10.u64 = r23.u64 - ctx.r11.u64;
	// subf. r30,r28,r10
	r30.u64 = ctx.r10.u64 - r28.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8230e920
	if (ctx.cr0.eq) goto loc_8230E920;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230E904;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e928
	if (ctx.cr6.lt) goto loc_8230E928;
	// ld r10,8(r22)
	ctx.r10.u64 = REX_LOAD_U64(r22.u32 + 8);
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r22)
	REX_STORE_U64(r22.u32 + 8, ctx.r11.u64);
loc_8230E920:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge cr6,0x8230e944
	if (!ctx.cr6.lt) goto loc_8230E944;
loc_8230E928:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230e944
	if (ctx.cr6.eq) goto loc_8230E944;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lwz r3,224(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f94e8
	ctx.lr = 0x8230E944;
	sub_822F94E8(ctx, base);
loc_8230E944:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_823323E8) {
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
	ctx.lr = 0x823323F0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3980(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3980);
	// li r24,0
	r24.s64 = 0;
	// lwz r10,15620(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15620);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r11,20528(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20528);
	// rlwinm r8,r10,28,0,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF0000000;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r7,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// srawi. r11,r8,28
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 28;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,20528(r3)
	REX_STORE_U32(ctx.r3.u32 + 20528, ctx.r9.u32);
	// mr r25,r24
	r25.u64 = r24.u64;
	// addi r27,r10,4
	r27.s64 = ctx.r10.s64 + 4;
	// blt 0x82332438
	if (ctx.cr0.lt) goto loc_82332438;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x82332440
	if (!ctx.cr6.gt) goto loc_82332440;
loc_82332438:
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bne cr6,0x823324f4
	if (!ctx.cr6.eq) goto loc_823324F4;
loc_82332440:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82332450
	if (!ctx.cr6.lt) goto loc_82332450;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// b 0x8233245c
	goto loc_8233245C;
loc_82332450:
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// ble cr6,0x8233245c
	if (!ctx.cr6.gt) goto loc_8233245C;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8233245C:
	// lwz r10,15612(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15612);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8233248c
	if (ctx.cr6.eq) goto loc_8233248C;
	// bge cr6,0x82332488
	if (!ctx.cr6.lt) goto loc_82332488;
	// lwz r10,20536(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20536);
	// mulli r9,r10,218
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(218));
	// mulli r8,r10,243
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(243));
	// srawi r7,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 8;
	// srawi r6,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 8;
	// stw r7,20540(r31)
	REX_STORE_U32(r31.u32 + 20540, ctx.r7.u32);
	// stw r6,20536(r31)
	REX_STORE_U32(r31.u32 + 20536, ctx.r6.u32);
loc_82332488:
	// stw r11,15612(r31)
	REX_STORE_U32(r31.u32 + 15612, ctx.r11.u32);
loc_8233248C:
	// lwz r11,20472(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823324b4
	if (ctx.cr6.eq) goto loc_823324B4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82208828
	ctx.lr = 0x823324A0;
	sub_82208828(ctx, base);
	// ld r10,20448(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 20448);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// stw r24,20472(r31)
	REX_STORE_U32(r31.u32 + 20472, r24.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,20448(r31)
	REX_STORE_U64(r31.u32 + 20448, ctx.r11.u64);
loc_823324B4:
	// lwz r11,20472(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20472);
	// std r24,20456(r31)
	REX_STORE_U64(r31.u32 + 20456, r24.u64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r24,20448(r31)
	REX_STORE_U64(r31.u32 + 20448, r24.u64);
	// stw r24,3460(r31)
	REX_STORE_U32(r31.u32 + 3460, r24.u32);
	// bne cr6,0x82332974
	if (!ctx.cr6.eq) goto loc_82332974;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82208828
	ctx.lr = 0x823324D4;
	sub_82208828(ctx, base);
	// ld r10,20448(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 20448);
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r11,20472(r31)
	REX_STORE_U32(r31.u32 + 20472, ctx.r11.u32);
	// std r8,20448(r31)
	REX_STORE_U64(r31.u32 + 20448, ctx.r8.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_823324F4:
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// bge cr6,0x82332534
	if (!ctx.cr6.lt) goto loc_82332534;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8232e760
	ctx.lr = 0x82332504;
	sub_8232E760(ctx, base);
	// lwz r11,20528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20528);
	// std r24,20448(r31)
	REX_STORE_U64(r31.u32 + 20448, r24.u64);
	// std r24,20456(r31)
	REX_STORE_U64(r31.u32 + 20456, r24.u64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r24,3460(r31)
	REX_STORE_U32(r31.u32 + 3460, r24.u32);
	// bgt cr6,0x8233296c
	if (ctx.cr6.gt) goto loc_8233296C;
	// bl 0x822094c8
	ctx.lr = 0x82332520;
	sub_822094C8(ctx, base);
	// stw r3,20636(r31)
	REX_STORE_U32(r31.u32 + 20636, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8232e700
	ctx.lr = 0x8233252C;
	sub_8232E700(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_82332534:
	// bl 0x822094c8
	ctx.lr = 0x82332538;
	sub_822094C8(ctx, base);
	// lwz r11,20640(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20640);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r11,r11,8000
	ctx.r11.s64 = ctx.r11.s64 + 8000;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823325b0
	if (!ctx.cr6.gt) goto loc_823325B0;
	// stw r3,20640(r31)
	REX_STORE_U32(r31.u32 + 20640, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,114
	ctx.r4.s64 = 114;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822034d8
	ctx.lr = 0x82332560;
	sub_822034D8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,114
	ctx.r4.s64 = 114;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x822034d8
	ctx.lr = 0x82332574;
	sub_822034D8(ctx, base);
	// stw r3,20436(r31)
	REX_STORE_U32(r31.u32 + 20436, ctx.r3.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x823325b0
	if (ctx.cr6.lt) goto loc_823325B0;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// bgt cr6,0x823325b0
	if (ctx.cr6.gt) goto loc_823325B0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,15612(r31)
	REX_STORE_U32(r31.u32 + 15612, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,15608(r31)
	REX_STORE_U32(r31.u32 + 15608, ctx.r11.u32);
	// bl 0x8235ee30
	ctx.lr = 0x8233259C;
	sub_8235EE30(ctx, base);
	// lwz r11,20436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20436);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,20428(r31)
	REX_STORE_U32(r31.u32 + 20428, ctx.r8.u32);
loc_823325B0:
	// lwz r11,20428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82332974
	if (ctx.cr6.eq) goto loc_82332974;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8232e760
	ctx.lr = 0x823325C4;
	sub_8232E760(ctx, base);
	// lwz r11,20432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// bgt cr6,0x823325d8
	if (ctx.cr6.gt) goto loc_823325D8;
	// lwz r28,15612(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 15612);
loc_823325D8:
	// lwz r11,20516(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20516);
	// lwz r10,20512(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20512);
	// addi r9,r11,5120
	ctx.r9.s64 = ctx.r11.s64 + 5120;
	// ld r8,20448(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 20448);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// lwzx r7,r11,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// add r6,r10,r5
	ctx.r6.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r6,20512(r31)
	REX_STORE_U32(r31.u32 + 20512, ctx.r6.u32);
	// stwx r5,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r5.u32);
	// lwz r9,20512(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20512);
	// ld r3,20456(r31)
	ctx.r3.u64 = REX_LOAD_U64(r31.u32 + 20456);
	// lwz r11,20516(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20516);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r4,29
	ctx.r10.u64 = ctx.r4.u32 & 0x7;
	// lwz r11,3460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3460);
	// extsw r30,r3
	r30.s64 = ctx.r3.s32;
	// srawi r4,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 3;
	// stw r10,20516(r31)
	REX_STORE_U32(r31.u32 + 20516, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82332644
	if (ctx.cr6.gt) goto loc_82332644;
	// lwz r10,15620(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15620);
	// lis r9,12288
	ctx.r9.s64 = 805306368;
	// rlwinm r8,r10,16,0,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF0000000;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823326bc
	if (ctx.cr6.lt) goto loc_823326BC;
loc_82332644:
	// lwz r10,20532(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20532);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,20532(r31)
	REX_STORE_U32(r31.u32 + 20532, ctx.r11.u32);
	// ble cr6,0x82332684
	if (!ctx.cr6.gt) goto loc_82332684;
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble 0x82332664
	if (!ctx.cr0.gt) goto loc_82332664;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
loc_82332664:
	// lwz r11,20536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20536);
	// mulli r10,r11,230
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(230));
	// srawi r11,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 8;
	// mulli r9,r11,230
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(230));
	// stw r11,20536(r31)
	REX_STORE_U32(r31.u32 + 20536, ctx.r11.u32);
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// stw r8,20540(r31)
	REX_STORE_U32(r31.u32 + 20540, ctx.r8.u32);
	// b 0x8233268c
	goto loc_8233268C;
loc_82332684:
	// stw r26,20636(r31)
	REX_STORE_U32(r31.u32 + 20636, r26.u32);
	// stw r24,20628(r31)
	REX_STORE_U32(r31.u32 + 20628, r24.u32);
loc_8233268C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x823326b8
	if (!ctx.cr6.gt) goto loc_823326B8;
	// addi r11,r28,5137
	ctx.r11.s64 = r28.s64 + 5137;
	// addi r10,r28,5136
	ctx.r10.s64 = r28.s64 + 5136;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lwzx r6,r8,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x823326b8
	if (!ctx.cr6.eq) goto loc_823326B8;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
loc_823326B8:
	// stw r24,3460(r31)
	REX_STORE_U32(r31.u32 + 3460, r24.u32);
loc_823326BC:
	// lwz r7,15620(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 15620);
	// rlwinm r11,r7,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// srawi r6,r11,28
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 28;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x823326fc
	if (!ctx.cr6.eq) goto loc_823326FC;
	// lwz r11,20524(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20524);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// srawi r9,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 16;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// neg r11,r8
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x823326fc
	if (!ctx.cr6.gt) goto loc_823326FC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x823326f8
	if (!ctx.cr6.gt) goto loc_823326F8;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
loc_823326F8:
	// stw r26,20636(r31)
	REX_STORE_U32(r31.u32 + 20636, r26.u32);
loc_823326FC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x82332778
	if (!ctx.cr6.gt) goto loc_82332778;
	// addi r11,r28,5136
	ctx.r11.s64 = r28.s64 + 5136;
	// lwz r8,20536(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20536);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + r31.u64;
loc_82332714:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82332778
	if (!ctx.cr6.gt) goto loc_82332778;
	// lwz r29,20520(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 20520);
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(r29.s32, 7, ctx.xer);
	// ble cr6,0x82332748
	if (!ctx.cr6.gt) goto loc_82332748;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82332748
	if (!ctx.cr6.gt) goto loc_82332748;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// b 0x82332770
	goto loc_82332770;
loc_82332748:
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82332778
	if (!ctx.cr6.gt) goto loc_82332778;
	// lwz r11,20432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20432);
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r25,r24
	r25.u64 = r24.u64;
	// bgt cr6,0x82332770
	if (ctx.cr6.gt) goto loc_82332770;
	// lwz r25,15612(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 15612);
loc_82332770:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bgt cr6,0x82332714
	if (ctx.cr6.gt) goto loc_82332714;
loc_82332778:
	// lwz r8,15612(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 15612);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r11,-30620
	r29.s64 = ctx.r11.s64 + -30620;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82332850
	if (!ctx.cr6.eq) goto loc_82332850;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(r28.s32, r27.s32, ctx.xer);
	// bge cr6,0x82332850
	if (!ctx.cr6.lt) goto loc_82332850;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x823327bc
	if (!ctx.cr6.gt) goto loc_823327BC;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x82332850
	if (!ctx.cr6.eq) goto loc_82332850;
	// lwz r11,20524(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20524);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// srawi r9,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 16;
	// neg r7,r10
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82332850
	if (!ctx.cr6.gt) goto loc_82332850;
loc_823327BC:
	// lwz r11,20636(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20636);
	// lwz r6,20628(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 20628);
	// subf r7,r11,r26
	ctx.r7.u64 = r26.u64 - ctx.r11.u64;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823327d8
	if (!ctx.cr6.lt) goto loc_823327D8;
	// lwz r10,20536(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20536);
	// b 0x823327dc
	goto loc_823327DC;
loc_823327D8:
	// lwz r10,20540(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20540);
loc_823327DC:
	// addi r9,r28,1
	ctx.r9.s64 = r28.s64 + 1;
	// addi r11,r9,5136
	ctx.r11.s64 = ctx.r9.s64 + 5136;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82332840
	if (!ctx.cr6.lt) goto loc_82332840;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82332840
	if (!ctx.cr6.lt) goto loc_82332840;
	// addi r11,r29,-20
	ctx.r11.s64 = r29.s64 + -20;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x82332820
	if (ctx.cr6.gt) goto loc_82332820;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82332850
	if (!ctx.cr6.lt) goto loc_82332850;
loc_82332820:
	// addi r11,r29,-20
	ctx.r11.s64 = r29.s64 + -20;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82332840
	if (!ctx.cr6.gt) goto loc_82332840;
	// addi r11,r26,-500
	ctx.r11.s64 = r26.s64 + -500;
	// stw r11,20636(r31)
	REX_STORE_U32(r31.u32 + 20636, ctx.r11.u32);
loc_82332840:
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82332850
	if (!ctx.cr6.lt) goto loc_82332850;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// stw r11,20628(r31)
	REX_STORE_U32(r31.u32 + 20628, ctx.r11.u32);
loc_82332850:
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// ble cr6,0x82332898
	if (!ctx.cr6.gt) goto loc_82332898;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82332898
	if (!ctx.cr6.gt) goto loc_82332898;
	// cmpw cr6,r8,r27
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r27.s32, ctx.xer);
	// bgt cr6,0x82332898
	if (ctx.cr6.gt) goto loc_82332898;
	// addi r11,r8,2571
	ctx.r11.s64 = ctx.r8.s64 + 2571;
	// extsw r10,r30
	ctx.r10.s64 = r30.s32;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + r31.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stdx r10,r11,r31
	REX_STORE_U64(ctx.r11.u32 + r31.u32, ctx.r10.u64);
	// lwz r11,15612(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15612);
	// addi r9,r11,5152
	ctx.r9.s64 = ctx.r11.s64 + 5152;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stwx r8,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r8.u32);
loc_82332898:
	// lwz r11,15612(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15612);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823328c0
	if (!ctx.cr6.eq) goto loc_823328C0;
	// lwz r10,20432(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20432);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x823328c0
	if (ctx.cr6.gt) goto loc_823328C0;
	// lwz r11,20520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20520);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20520(r31)
	REX_STORE_U32(r31.u32 + 20520, ctx.r11.u32);
	// b 0x82332964
	goto loc_82332964;
loc_823328C0:
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// lwzx r9,r30,r29
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + r29.u32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// stw r8,15572(r31)
	REX_STORE_U32(r31.u32 + 15572, ctx.r8.u32);
	// lwzx r7,r30,r29
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + r29.u32);
	// rlwinm r6,r7,31,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x1;
	// stw r6,15576(r31)
	REX_STORE_U32(r31.u32 + 15576, ctx.r6.u32);
	// lwzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r29.u32);
	// lwzx r5,r10,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// xor r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// rlwinm r3,r4,0,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82332908
	if (ctx.cr6.eq) goto loc_82332908;
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// lwz r4,3980(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3980);
	// bl 0x8236d860
	ctx.lr = 0x82332908;
	sub_8236D860(ctx, base);
loc_82332908:
	// lwz r11,15612(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15612);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82332954
	if (!ctx.cr6.lt) goto loc_82332954;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r26,20636(r31)
	REX_STORE_U32(r31.u32 + 20636, r26.u32);
	// ble cr6,0x82332940
	if (!ctx.cr6.gt) goto loc_82332940;
	// addi r10,r29,-20
	ctx.r10.s64 = r29.s64 + -20;
	// addi r9,r29,-20
	ctx.r9.s64 = r29.s64 + -20;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r30,r9
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + ctx.r9.u32);
	// lwzx r6,r8,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// subf r10,r6,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r6.u64;
	// add r5,r10,r26
	ctx.r5.u64 = ctx.r10.u64 + r26.u64;
	// stw r5,20636(r31)
	REX_STORE_U32(r31.u32 + 20636, ctx.r5.u32);
loc_82332940:
	// lwz r10,20628(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20628);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82332954
	if (!ctx.cr6.lt) goto loc_82332954;
	// stw r11,20628(r31)
	REX_STORE_U32(r31.u32 + 20628, ctx.r11.u32);
loc_82332954:
	// stw r28,15612(r31)
	REX_STORE_U32(r31.u32 + 15612, r28.u32);
	// stw r28,3700(r31)
	REX_STORE_U32(r31.u32 + 3700, r28.u32);
	// stw r25,20432(r31)
	REX_STORE_U32(r31.u32 + 20432, r25.u32);
	// stw r24,20520(r31)
	REX_STORE_U32(r31.u32 + 20520, r24.u32);
loc_82332964:
	// std r24,20448(r31)
	REX_STORE_U64(r31.u32 + 20448, r24.u64);
	// std r24,20456(r31)
	REX_STORE_U64(r31.u32 + 20456, r24.u64);
loc_8233296C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8232e700
	ctx.lr = 0x82332974;
	sub_8232E700(ctx, base);
loc_82332974:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8235C1B0) {
	REX_FUNC_PROLOGUE();
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8235C1B8;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f28
	ctx.lr = 0x8235C1C0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bgt cr6,0x8235c270
	if (ctx.cr6.gt) goto loc_8235C270;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8235ccd0
	if (!ctx.cr6.gt) goto loc_8235CCD0;
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
	// stfd f7,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.f7.u64);
	// lwz r9,-124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -124);
	// fctiwz f6,f9
	ctx.f6.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f6,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.f6.u64);
	// fctiwz f5,f8
	ctx.f5.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f5,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f5.u64);
	// lwz r8,-124(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -124);
	// lwz r7,-116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
loc_8235C22C:
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r8,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stwx r9,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r4,28(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stwx r7,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// stwx r9,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r5,4(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8235c22c
	if (ctx.cr6.lt) goto loc_8235C22C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f74
	ctx.lr = 0x8235C26C;
	// b 0x822d4edc
	return;
loc_8235C270:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fneg f9,f3
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfd f0,4000(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 4000);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// fadd f7,f1,f0
	ctx.f7.f64 = ctx.f1.f64 + ctx.f0.f64;
	// lfd f13,-28528(r9)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + -28528);
	// fadd f6,f1,f0
	ctx.f6.f64 = ctx.f1.f64 + ctx.f0.f64;
	// lfd f11,-28536(r8)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r8.u32 + -28536);
	// fadd f8,f1,f0
	ctx.f8.f64 = ctx.f1.f64 + ctx.f0.f64;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// fadd f5,f1,f0
	ctx.f5.f64 = ctx.f1.f64 + ctx.f0.f64;
	// lfd f12,-28552(r10)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + -28552);
	// fmul f31,f3,f13
	f31.f64 = ctx.f3.f64 * ctx.f13.f64;
	// lfd f13,-28544(r7)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r7.u32 + -28544);
	// fmul f30,f9,f11
	f30.f64 = ctx.f9.f64 * ctx.f11.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmul f28,f9,f13
	f28.f64 = ctx.f9.f64 * ctx.f13.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmul f4,f9,f12
	ctx.f4.f64 = ctx.f9.f64 * ctx.f12.f64;
	// lfd f12,-28560(r6)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r6.u32 + -28560);
	// fmul f27,f9,f12
	f27.f64 = ctx.f9.f64 * ctx.f12.f64;
	// lfd f12,-28568(r4)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r4.u32 + -28568);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// fadd f29,f1,f0
	f29.f64 = ctx.f1.f64 + ctx.f0.f64;
	// fctiwz f11,f7
	ctx.f11.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f11,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f11.u64);
	// lwz r9,-116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// fctiwz f10,f6
	ctx.f10.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// fctiwz f13,f8
	ctx.f13.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f10,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f10.u64);
	// lwz r7,-116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// fctiwz f8,f5
	ctx.f8.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f8,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f8.u64);
	// lwz r6,-116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// stfd f13,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.f13.u64);
	// lwz r8,-124(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -124);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// lfs f10,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f10.f64 = double(temp.f32);
	// frsp f7,f4
	ctx.f7.f64 = double(float(ctx.f4.f64));
	// lfd f11,-28576(r11)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + -28576);
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// lfd f13,-28584(r5)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r5.u32 + -28584);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// fmul f12,f9,f12
	ctx.f12.f64 = ctx.f9.f64 * ctx.f12.f64;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// fmul f13,f9,f13
	ctx.f13.f64 = ctx.f9.f64 * ctx.f13.f64;
	// std r4,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r4.u64);
	// lfd f6,-120(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// std r9,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r9.u64);
	// lfd f5,-120(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// std r8,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r8.u64);
	// lfd f4,-120(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// std r7,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r7.u64);
	// lfd f26,-120(r1)
	f26.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// frsp f31,f31
	f31.f64 = double(float(f31.f64));
	// frsp f30,f30
	f30.f64 = double(float(f30.f64));
	// fadds f8,f7,f3
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// fmuls f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fcfid f8,f6
	ctx.f8.f64 = double(ctx.f6.s64);
	// fcfid f6,f5
	ctx.f6.f64 = double(ctx.f5.s64);
	// fmul f5,f9,f11
	ctx.f5.f64 = ctx.f9.f64 * ctx.f11.f64;
	// fcfid f26,f26
	f26.f64 = double(f26.s64);
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// fctiwz f11,f29
	ctx.f11.s64 = std::isnan(f29.f64) ? int64_t(0x80000000U) : (f29.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f29.f64));
	// stfd f11,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f11.u64);
	// frsp f29,f27
	f29.f64 = double(float(f27.f64));
	// frsp f11,f28
	ctx.f11.f64 = double(float(f28.f64));
	// frsp f28,f13
	f28.f64 = double(float(ctx.f13.f64));
	// frsp f25,f8
	f25.f64 = double(float(ctx.f8.f64));
	// frsp f24,f6
	f24.f64 = double(float(ctx.f6.f64));
	// frsp f9,f5
	ctx.f9.f64 = double(float(ctx.f5.f64));
	// frsp f27,f26
	f27.f64 = double(float(f26.f64));
	// frsp f26,f12
	f26.f64 = double(float(ctx.f12.f64));
	// fsubs f5,f10,f3
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// fsubs f6,f10,f31
	ctx.f6.f64 = double(float(ctx.f10.f64 - f31.f64));
	// fsubs f3,f10,f30
	ctx.f3.f64 = double(float(ctx.f10.f64 - f30.f64));
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// lwz r6,-116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// fadds f13,f5,f2
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// lwz r5,4(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// fadd f4,f1,f0
	ctx.f4.f64 = ctx.f1.f64 + ctx.f0.f64;
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// fsubs f30,f10,f9
	f30.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// fsubs f31,f10,f7
	f31.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// std r4,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r4.u64);
	// lfd f5,-120(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// std r11,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r11.u64);
	// fadds f7,f3,f2
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// fadds f8,f6,f2
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// fadds f9,f6,f2
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// fadds f6,f25,f11
	ctx.f6.f64 = double(float(f25.f64 + ctx.f11.f64));
	// fadds f10,f27,f29
	ctx.f10.f64 = double(float(f27.f64 + f29.f64));
	// fctiwz f4,f4
	ctx.f4.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f4,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f4.u64);
	// lwz r10,-116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lfd f3,-128(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f11,f5
	ctx.f11.f64 = double(ctx.f5.s64);
	// fcfid f5,f3
	ctx.f5.f64 = double(ctx.f3.s64);
	// std r9,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r9.u64);
	// lfd f4,-120(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f29,f11
	f29.f64 = double(float(ctx.f11.f64));
	// frsp f11,f5
	ctx.f11.f64 = double(float(ctx.f5.f64));
	// fadds f4,f31,f2
	ctx.f4.f64 = double(float(f31.f64 + ctx.f2.f64));
	// fadds f2,f30,f2
	ctx.f2.f64 = double(float(f30.f64 + ctx.f2.f64));
	// frsp f30,f3
	f30.f64 = double(float(ctx.f3.f64));
	// fadds f5,f24,f28
	ctx.f5.f64 = double(float(f24.f64 + f28.f64));
	// fadds f3,f29,f26
	ctx.f3.f64 = double(float(f29.f64 + f26.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x8235c444
	if (ctx.cr6.gt) goto loc_8235C444;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
loc_8235C444:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fctiwz f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f11.u64);
	// lwz r5,-116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f31,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
	// blt cr6,0x8235c4bc
	if (ctx.cr6.lt) goto loc_8235C4BC;
	// fadds f11,f1,f31
	ctx.f11.f64 = double(float(ctx.f1.f64 + f31.f64));
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r10,0
	ctx.r10.s64 = 0;
	// fadd f11,f11,f0
	ctx.f11.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fctiwz f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f11.u64);
	// lwz r9,-116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
loc_8235C480:
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stwx r9,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r9,-4(r7)
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r9.u32);
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r8,r4
	REX_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r9.u32);
	// blt cr6,0x8235c480
	if (ctx.cr6.lt) goto loc_8235C480;
loc_8235C4BC:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235c4f8
	if (!ctx.cr6.lt) goto loc_8235C4F8;
	// fadds f11,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 + f31.f64));
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fadd f11,f11,f0
	ctx.f11.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fctiwz f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f11.u64);
	// lwz r9,-116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
loc_8235C4E8:
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8235c4e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235C4E8;
loc_8235C4F8:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r9.u64);
	// lfd f11,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fcmpu cr6,f8,f11
	ctx.cr6.compare(ctx.f8.f64, ctx.f11.f64);
	// bgt cr6,0x8235c51c
	if (ctx.cr6.gt) goto loc_8235C51C;
	// fmr f11,f8
	ctx.f11.f64 = ctx.f8.f64;
loc_8235C51C:
	// fctiwz f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f11.u64);
	// fsubs f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// li r31,4
	r31.s64 = 4;
	// fsubs f11,f8,f13
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// li r4,-4
	ctx.r4.s64 = -4;
	// fdivs f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 / ctx.f11.f64));
	// lwz r5,-116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235c680
	if (!ctx.cr6.lt) goto loc_8235C680;
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8235c634
	if (ctx.cr6.lt) goto loc_8235C634;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8235C55C:
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r30,r10,1
	r30.s64 = ctx.r10.s64 + 1;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// extsw r30,r30
	r30.s64 = r30.s32;
	// std r8,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r8.u64);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r30,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, r30.u64);
	// lfd f28,-104(r1)
	ctx.fpscr.disableFlushMode();
	f28.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// std r8,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r8.u64);
	// extsw r29,r10
	r29.s64 = ctx.r10.s32;
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// std r29,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, r29.u64);
	// lfd f29,-112(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f29,f29
	f29.f64 = double(f29.s64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfd f8,-120(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f28,f28
	f28.f64 = double(f28.s64);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// lfd f8,-128(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// frsp f29,f29
	f29.f64 = double(float(f29.f64));
	// frsp f28,f28
	f28.f64 = double(float(f28.f64));
	// fsubs f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fsubs f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f29,f29,f13
	f29.f64 = double(float(f29.f64 - ctx.f13.f64));
	// fsubs f28,f28,f13
	f28.f64 = double(float(f28.f64 - ctx.f13.f64));
	// fmadds f6,f6,f11,f12
	ctx.f6.f64 = double(float(std::fma(ctx.f6.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmadds f8,f8,f11,f12
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmadds f29,f29,f11,f12
	f29.f64 = double(float(std::fma(f29.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmadds f28,f28,f11,f12
	f28.f64 = double(float(std::fma(f28.f64, ctx.f11.f64, ctx.f12.f64)));
	// fadd f6,f6,f0
	ctx.f6.f64 = ctx.f6.f64 + ctx.f0.f64;
	// fadd f8,f8,f0
	ctx.f8.f64 = ctx.f8.f64 + ctx.f0.f64;
	// fctiwz f6,f6
	ctx.f6.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f6,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.f6.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// fadd f6,f29,f0
	ctx.f6.f64 = f29.f64 + ctx.f0.f64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// fadd f29,f28,f0
	f29.f64 = f28.f64 + ctx.f0.f64;
	// fctiwz f8,f8
	ctx.f8.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f8,r7,r31
	REX_STORE_U32(ctx.r7.u32 + r31.u32, ctx.f8.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// fctiwz f6,f6
	ctx.f6.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f6,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.f6.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// fctiwz f8,f29
	ctx.f8.s64 = std::isnan(f29.f64) ? int64_t(0x80000000U) : (f29.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f29.f64));
	// stfiwx f8,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.f8.u32);
	// blt cr6,0x8235c55c
	if (ctx.cr6.lt) goto loc_8235C55C;
loc_8235C634:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235c680
	if (!ctx.cr6.lt) goto loc_8235C680;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8235C648:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r9.u64);
	// lfd f8,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// frsp f8,f6
	ctx.f8.f64 = double(float(ctx.f6.f64));
	// fsubs f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fmadds f8,f6,f11,f12
	ctx.f8.f64 = double(float(std::fma(ctx.f6.f64, ctx.f11.f64, ctx.f12.f64)));
	// fadd f6,f8,f0
	ctx.f6.f64 = ctx.f8.f64 + ctx.f0.f64;
	// fctiwz f8,f6
	ctx.f8.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f8,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.f8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8235c648
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235C648;
loc_8235C680:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r9.u64);
	// lfd f13,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f7,f13
	ctx.cr6.compare(ctx.f7.f64, ctx.f13.f64);
	// bgt cr6,0x8235c6a4
	if (ctx.cr6.gt) goto loc_8235C6A4;
	// fmr f13,f7
	ctx.f13.f64 = ctx.f7.f64;
loc_8235C6A4:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f13.u64);
	// fsubs f12,f5,f10
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// fsubs f11,f7,f9
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fdivs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// lwz r5,-100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235c800
	if (!ctx.cr6.lt) goto loc_8235C800;
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8235c7b4
	if (ctx.cr6.lt) goto loc_8235C7B4;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8235C6DC:
	// extsw r30,r11
	r30.s64 = ctx.r11.s32;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// std r30,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, r30.u64);
	// addi r30,r10,1
	r30.s64 = ctx.r10.s64 + 1;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// std r8,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r8.u64);
	// extsw r8,r30
	ctx.r8.s64 = r30.s32;
	// extsw r30,r10
	r30.s64 = ctx.r10.s32;
	// std r8,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r8.u64);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// std r30,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, r30.u64);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lfd f12,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,-112(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f8,-120(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// lfd f8,-128(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fsubs f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fsubs f6,f6,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// fsubs f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fmadds f12,f12,f13,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f11,f11,f13,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f6,f6,f13,f10
	ctx.f6.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f8,f8,f13,f10
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f10.f64)));
	// fadd f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fadd f11,f11,f0
	ctx.f11.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fadd f6,f6,f0
	ctx.f6.f64 = ctx.f6.f64 + ctx.f0.f64;
	// fadd f8,f8,f0
	ctx.f8.f64 = ctx.f8.f64 + ctx.f0.f64;
	// fctiwz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// fctiwz f6,f6
	ctx.f6.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// fctiwz f8,f8
	ctx.f8.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f8,r7,r9
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.f8.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stfiwx f12,r7,r31
	REX_STORE_U32(ctx.r7.u32 + r31.u32, ctx.f12.u32);
	// fctiwz f12,f11
	ctx.f12.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stfiwx f6,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.f6.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stfiwx f12,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.f12.u32);
	// blt cr6,0x8235c6dc
	if (ctx.cr6.lt) goto loc_8235C6DC;
loc_8235C7B4:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235c800
	if (!ctx.cr6.lt) goto loc_8235C800;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8235C7C8:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r9.u64);
	// lfd f12,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// fsubs f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fmadds f12,f6,f13,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f10.f64)));
	// fadd f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fctiwz f8,f11
	ctx.f8.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfiwx f8,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.f8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8235c7c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235C7C8;
loc_8235C800:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// fsubs f12,f4,f7
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f7.f64));
	// fsubs f13,f3,f5
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r9.u64);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// lfd f11,-104(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f12,f10
	ctx.f12.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f4,f12
	ctx.cr6.compare(ctx.f4.f64, ctx.f12.f64);
	// bgt cr6,0x8235c830
	if (ctx.cr6.gt) goto loc_8235C830;
	// fmr f12,f4
	ctx.f12.f64 = ctx.f4.f64;
loc_8235C830:
	// fctiwz f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f12.u64);
	// lwz r5,-100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235c980
	if (!ctx.cr6.lt) goto loc_8235C980;
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8235c934
	if (ctx.cr6.lt) goto loc_8235C934;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8235C85C:
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// std r8,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r8.u64);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsw r30,r30
	r30.s64 = r30.s32;
	// std r8,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r8.u64);
	// addi r29,r10,1
	r29.s64 = ctx.r10.s64 + 1;
	// std r30,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, r30.u64);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// extsw r30,r29
	r30.s64 = r29.s32;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// std r30,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, r30.u64);
	// lfd f12,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfd f10,-112(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// lfd f6,-120(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f11,-128(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f12,f6
	ctx.f12.f64 = double(ctx.f6.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// fsubs f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// frsp f6,f12
	ctx.f6.f64 = double(float(ctx.f12.f64));
	// frsp f12,f10
	ctx.f12.f64 = double(float(ctx.f10.f64));
	// fmadds f11,f9,f13,f5
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f5.f64)));
	// fsubs f10,f8,f7
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fsubs f9,f6,f7
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fsubs f8,f12,f7
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fadd f6,f11,f0
	ctx.f6.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fmadds f12,f10,f13,f5
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f5.f64)));
	// fmadds f11,f9,f13,f5
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f5.f64)));
	// fmadds f10,f8,f13,f5
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f5.f64)));
	// fctiwz f9,f6
	ctx.f9.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// fadd f8,f12,f0
	ctx.f8.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fadd f6,f11,f0
	ctx.f6.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fadd f12,f10,f0
	ctx.f12.f64 = ctx.f10.f64 + ctx.f0.f64;
	// fctiwz f11,f8
	ctx.f11.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f11,r7,r9
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.f11.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// fctiwz f10,f6
	ctx.f10.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f10,r7,r31
	REX_STORE_U32(ctx.r7.u32 + r31.u32, ctx.f10.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// fctiwz f8,f12
	ctx.f8.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f8,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.f8.u32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stfiwx f9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.f9.u32);
	// blt cr6,0x8235c85c
	if (ctx.cr6.lt) goto loc_8235C85C;
loc_8235C934:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235c980
	if (!ctx.cr6.lt) goto loc_8235C980;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8235C948:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r9.u64);
	// lfd f12,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f9,f10,f7
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fmadds f8,f9,f13,f5
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f5.f64)));
	// fadd f6,f8,f0
	ctx.f6.f64 = ctx.f8.f64 + ctx.f0.f64;
	// fctiwz f12,f6
	ctx.f12.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f12,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.f12.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8235c948
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235C948;
loc_8235C980:
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8235c9c0
	if (!ctx.cr6.lt) goto loc_8235C9C0;
	// fadds f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + f31.f64));
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fadd f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f11.u64);
	// lwz r8,-100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
loc_8235C9A4:
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8235c9a4
	if (ctx.cr6.lt) goto loc_8235C9A4;
loc_8235C9C0:
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// std r11,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r11.u64);
	// lfd f13,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// bgt cr6,0x8235c9e0
	if (ctx.cr6.gt) goto loc_8235C9E0;
	// fmr f13,f2
	ctx.f13.f64 = ctx.f2.f64;
loc_8235C9E0:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f13.u64);
	// lwz r5,-100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x8235ca4c
	if (ctx.cr6.lt) goto loc_8235CA4C;
	// fadd f13,f1,f0
	ctx.f13.f64 = ctx.f1.f64 + ctx.f0.f64;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r10,0
	ctx.r10.s64 = 0;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f12.u64);
	// lwz r9,-100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
loc_8235CA10:
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stwx r9,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r9,-4(r7)
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r9.u32);
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stwx r9,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r9.u32);
	// blt cr6,0x8235ca10
	if (ctx.cr6.lt) goto loc_8235CA10;
loc_8235CA4C:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235ca84
	if (!ctx.cr6.lt) goto loc_8235CA84;
	// fadd f13,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64 + ctx.f0.f64;
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
	// stfd f12,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f12.u64);
	// lwz r9,-100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
loc_8235CA74:
	// lwz r8,24(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stwx r9,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8235ca74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235CA74;
loc_8235CA84:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// fsubs f12,f2,f4
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fsubs f13,f30,f3
	ctx.f13.f64 = double(float(f30.f64 - ctx.f3.f64));
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r9.u64);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// lfd f11,-104(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f12,f10
	ctx.f12.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f4,f12
	ctx.cr6.compare(ctx.f4.f64, ctx.f12.f64);
	// bgt cr6,0x8235cab4
	if (ctx.cr6.gt) goto loc_8235CAB4;
	// fmr f12,f4
	ctx.f12.f64 = ctx.f4.f64;
loc_8235CAB4:
	// fctiwz f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f12.u64);
	// lwz r5,-100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235cc04
	if (!ctx.cr6.lt) goto loc_8235CC04;
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8235cbb8
	if (ctx.cr6.lt) goto loc_8235CBB8;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8235CAE0:
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r29,r10,1
	r29.s64 = ctx.r10.s64 + 1;
	// extsw r30,r30
	r30.s64 = r30.s32;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r30,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, r30.u64);
	// extsw r30,r29
	r30.s64 = r29.s32;
	// std r8,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r8.u64);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r30,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, r30.u64);
	// lfd f7,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// std r8,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r8.u64);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lfd f12,-104(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// lfd f10,-112(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// lfd f5,-128(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f2,f5
	ctx.f2.f64 = double(ctx.f5.s64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// frsp f10,f6
	ctx.f10.f64 = double(float(ctx.f6.f64));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f11,f8
	ctx.f11.f64 = double(float(ctx.f8.f64));
	// fsubs f6,f10,f4
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// fsubs f12,f9,f4
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// fsubs f7,f11,f4
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f4.f64));
	// frsp f9,f2
	ctx.f9.f64 = double(float(ctx.f2.f64));
	// fmadds f11,f6,f13,f3
	ctx.f11.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f3.f64)));
	// fmadds f8,f12,f13,f3
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f3.f64)));
	// fmadds f12,f7,f13,f3
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f3.f64)));
	// fsubs f5,f9,f4
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// fadd f7,f11,f0
	ctx.f7.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fadd f2,f8,f0
	ctx.f2.f64 = ctx.f8.f64 + ctx.f0.f64;
	// fadd f8,f12,f0
	ctx.f8.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fmadds f10,f5,f13,f3
	ctx.f10.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f3.f64)));
	// fctiwz f9,f2
	ctx.f9.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// fctiwz f5,f8
	ctx.f5.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f5,r7,r9
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.f5.u32);
	// fadd f6,f10,f0
	ctx.f6.f64 = ctx.f10.f64 + ctx.f0.f64;
	// fctiwz f2,f7
	ctx.f2.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// fctiwz f12,f6
	ctx.f12.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stfiwx f2,r7,r31
	REX_STORE_U32(ctx.r7.u32 + r31.u32, ctx.f2.u32);
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stfiwx f12,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.f12.u32);
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stfiwx f9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.f9.u32);
	// blt cr6,0x8235cae0
	if (ctx.cr6.lt) goto loc_8235CAE0;
loc_8235CBB8:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235cc04
	if (!ctx.cr6.lt) goto loc_8235CC04;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8235CBCC:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,24(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r9.u64);
	// lfd f12,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f9,f10,f4
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// fmadds f8,f9,f13,f3
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f3.f64)));
	// fadd f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 + ctx.f0.f64;
	// fctiwz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfiwx f6,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.f6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8235cbcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235CBCC;
loc_8235CC04:
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8235cc40
	if (!ctx.cr6.lt) goto loc_8235CC40;
	// fadd f13,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64 + ctx.f0.f64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f12.u64);
	// lwz r8,-100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
loc_8235CC24:
	// lwz r9,24(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8235cc24
	if (ctx.cr6.lt) goto loc_8235CC24;
loc_8235CC40:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8235ccd0
	if (!ctx.cr6.gt) goto loc_8235CCD0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,2008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2008);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
loc_8235CC5C:
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,28(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r6.u64);
	// lfd f12,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fadd f8,f9,f0
	ctx.f8.f64 = ctx.f9.f64 + ctx.f0.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f7,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.f7.u32);
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r4,32(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwzx r9,r11,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r8.u64);
	// lfd f6,-112(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fsubs f3,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// fadd f2,f3,f0
	ctx.f2.f64 = ctx.f3.f64 + ctx.f0.f64;
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfiwx f1,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.f1.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8235cc5c
	if (ctx.cr6.lt) goto loc_8235CC5C;
loc_8235CCD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f74
	ctx.lr = 0x8235CCDC;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8238D438) {
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
	ctx.lr = 0x8238D440;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r15,128(r3)
	r15.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r14,132(r3)
	r14.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r11,3772(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3772);
	// lwz r27,156(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// lwz r26,160(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r15,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r15.u32);
	// stw r14,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r14.u32);
	// bne cr6,0x8238d478
	if (!ctx.cr6.eq) goto loc_8238D478;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822d4ea0
	return;
loc_8238D478:
	// lwz r8,3772(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3772);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r9,220(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r6,22144(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 22144);
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r16,r7,r11
	r16.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r17,r9,r10
	r17.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r23,r8,r11
	r23.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r16,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r16.u32);
	// bne cr6,0x8238d4dc
	if (!ctx.cr6.eq) goto loc_8238D4DC;
	// lwz r28,22160(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 22160);
	// lwz r29,22168(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 22168);
	// lwz r30,22164(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 22164);
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r29,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r22,22148(r31)
	r22.u64 = REX_LOAD_U32(r31.u32 + 22148);
	// lwz r21,22152(r31)
	r21.u64 = REX_LOAD_U32(r31.u32 + 22152);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r20,22156(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 22156);
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r9,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// b 0x8238d514
	goto loc_8238D514;
loc_8238D4DC:
	// lwz r9,15692(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15692);
	// lwz r10,15716(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15716);
	// lwz r7,15708(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 15708);
	// add r22,r9,r4
	r22.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lwz r11,15688(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15688);
	// lwz r8,15640(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 15640);
	// lwz r9,15644(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15644);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// lwz r28,15684(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 15684);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// add r21,r8,r22
	r21.u64 = ctx.r8.u64 + r22.u64;
	// stw r7,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// add r20,r9,r22
	r20.u64 = ctx.r9.u64 + r22.u64;
	// stw r10,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
loc_8238D514:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// bl 0x8232ed78
	ctx.lr = 0x8238D520;
	sub_8232ED78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238d530
	if (ctx.cr6.eq) goto loc_8238D530;
	// lwz r27,15372(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 15372);
	// lwz r26,15376(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 15376);
loc_8238D530:
	// lwz r11,15960(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15960);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238d5b8
	if (ctx.cr6.eq) goto loc_8238D5B8;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// lwz r7,96(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 96);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bctrl 
	ctx.lr = 0x8238D55C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,15960(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15960);
	// rlwinm r28,r27,31,1,31
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r7,108(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 108);
	// rlwinm r27,r26,31,1,31
	r27.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bctrl 
	ctx.lr = 0x8238D588;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,15960(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15960);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lwz r7,108(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 108);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238D5AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822d4ea0
	return;
loc_8238D5B8:
	// li r19,0
	r19.s64 = 0;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x8238d7ac
	if (ctx.cr6.eq) goto loc_8238D7AC;
loc_8238D5C4:
	// mr r28,r17
	r28.u64 = r17.u64;
	// li r18,0
	r18.s64 = 0;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8238d770
	if (ctx.cr6.eq) goto loc_8238D770;
	// mr r30,r23
	r30.u64 = r23.u64;
	// subf r27,r23,r16
	r27.u64 = r16.u64 - r23.u64;
	// subf r26,r23,r20
	r26.u64 = r20.u64 - r23.u64;
	// subf r25,r23,r21
	r25.u64 = r21.u64 - r23.u64;
	// subf r24,r17,r22
	r24.u64 = r22.u64 - r17.u64;
loc_8238D5E8:
	// addi r29,r15,-1
	r29.s64 = r15.s64 + -1;
	// cmplw cr6,r18,r29
	ctx.cr6.compare<uint32_t>(r18.u32, r29.u32, ctx.xer);
	// beq cr6,0x8238d650
	if (ctx.cr6.eq) goto loc_8238D650;
	// addi r11,r14,-1
	ctx.r11.s64 = r14.s64 + -1;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8238d650
	if (ctx.cr6.eq) goto loc_8238D650;
	// lwz r11,15688(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15688);
	// add r9,r27,r30
	ctx.r9.u64 = r27.u64 + r30.u64;
	// lwz r10,15948(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15948);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r29,15684(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 15684);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r14,108(r31)
	r14.u64 = REX_LOAD_U32(r31.u32 + 108);
	// add r6,r26,r30
	ctx.r6.u64 = r26.u64 + r30.u64;
	// add r5,r25,r30
	ctx.r5.u64 = r25.u64 + r30.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// add r4,r24,r28
	ctx.r4.u64 = r24.u64 + r28.u64;
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r14.u32);
	// bctrl 
	ctx.lr = 0x8238D64C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8238d758
	goto loc_8238D758;
loc_8238D650:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8232ed78
	ctx.lr = 0x8238D658;
	sub_8232ED78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238d6a0
	if (ctx.cr6.eq) goto loc_8238D6A0;
	// cmplw cr6,r18,r29
	ctx.cr6.compare<uint32_t>(r18.u32, r29.u32, ctx.xer);
	// beq cr6,0x8238d670
	if (ctx.cr6.eq) goto loc_8238D670;
	// li r29,16
	r29.s64 = 16;
	// b 0x8238d680
	goto loc_8238D680;
loc_8238D670:
	// lwz r11,15372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15372);
	// lwz r10,15380(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15380);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r29,r11,16
	r29.s64 = ctx.r11.s64 + 16;
loc_8238D680:
	// addi r11,r14,-1
	ctx.r11.s64 = r14.s64 + -1;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8238d694
	if (ctx.cr6.eq) goto loc_8238D694;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8238d6fc
	goto loc_8238D6FC;
loc_8238D694:
	// lwz r11,15384(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15384);
	// lwz r10,15376(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15376);
	// b 0x8238d6dc
	goto loc_8238D6DC;
loc_8238D6A0:
	// cmplw cr6,r18,r29
	ctx.cr6.compare<uint32_t>(r18.u32, r29.u32, ctx.xer);
	// beq cr6,0x8238d6b0
	if (ctx.cr6.eq) goto loc_8238D6B0;
	// li r29,16
	r29.s64 = 16;
	// b 0x8238d6c0
	goto loc_8238D6C0;
loc_8238D6B0:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r10,180(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 180);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r29,r11,16
	r29.s64 = ctx.r11.s64 + 16;
loc_8238D6C0:
	// addi r11,r14,-1
	ctx.r11.s64 = r14.s64 + -1;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8238d6d4
	if (ctx.cr6.eq) goto loc_8238D6D4;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8238d6fc
	goto loc_8238D6FC;
loc_8238D6D4:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
loc_8238D6DC:
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subfic r11,r7,16
	ctx.xer.ca = ctx.r7.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r7.u64;
	// srawi r6,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 31;
	// xor r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// subf r10,r6,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r6.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8238D6FC:
	// lwz r16,15688(r31)
	r16.u64 = REX_LOAD_U32(r31.u32 + 15688);
	// add r9,r27,r30
	ctx.r9.u64 = r27.u64 + r30.u64;
	// lwz r10,15952(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15952);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r15,15684(r31)
	r15.u64 = REX_LOAD_U32(r31.u32 + 15684);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r14,108(r31)
	r14.u64 = REX_LOAD_U32(r31.u32 + 108);
	// add r6,r26,r30
	ctx.r6.u64 = r26.u64 + r30.u64;
	// add r5,r25,r30
	ctx.r5.u64 = r25.u64 + r30.u64;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r16,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r16.u32);
	// add r4,r24,r28
	ctx.r4.u64 = r24.u64 + r28.u64;
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r16,148(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mtctr r16
	ctx.ctr.u64 = r16.u64;
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// stw r15,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r15.u32);
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r14.u32);
	// bctrl 
	ctx.lr = 0x8238D750;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r16,144(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r15,152(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
loc_8238D758:
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// lwz r14,128(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r18,r15
	ctx.cr6.compare<uint32_t>(r18.u32, r15.u32, ctx.xer);
	// blt cr6,0x8238d5e8
	if (ctx.cr6.lt) goto loc_8238D5E8;
loc_8238D770:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r9,132(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// add r16,r11,r16
	r16.u64 = ctx.r11.u64 + r16.u64;
	// lwz r8,136(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// add r23,r11,r23
	r23.u64 = ctx.r11.u64 + r23.u64;
	// lwz r7,140(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// add r22,r9,r22
	r22.u64 = ctx.r9.u64 + r22.u64;
	// add r17,r10,r17
	r17.u64 = ctx.r10.u64 + r17.u64;
	// stw r16,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r16.u32);
	// add r21,r8,r21
	r21.u64 = ctx.r8.u64 + r21.u64;
	// add r20,r7,r20
	r20.u64 = ctx.r7.u64 + r20.u64;
	// cmplw cr6,r19,r14
	ctx.cr6.compare<uint32_t>(r19.u32, r14.u32, ctx.xer);
	// blt cr6,0x8238d5c4
	if (ctx.cr6.lt) goto loc_8238D5C4;
loc_8238D7AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823952D8) {
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
	ctx.lr = 0x823952E0;
	// lwz r11,156(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// lwz r8,160(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// addi r10,r11,15
	ctx.r10.s64 = ctx.r11.s64 + 15;
	// addi r9,r8,15
	ctx.r9.s64 = ctx.r8.s64 + 15;
	// rlwinm r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r9,r9,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8239530c
	if (!ctx.cr6.eq) goto loc_8239530C;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// beq cr6,0x82395310
	if (ctx.cr6.eq) goto loc_82395310;
loc_8239530C:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82395310:
	// lwz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// lwz r6,208(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// srawi r5,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 1;
	// stw r10,22204(r3)
	REX_STORE_U32(ctx.r3.u32 + 22204, ctx.r10.u32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,22208(r3)
	REX_STORE_U32(ctx.r3.u32 + 22208, ctx.r9.u32);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,136(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// lwz r11,1972(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1972);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// rlwinm r6,r4,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,15240(r3)
	REX_STORE_U32(ctx.r3.u32 + 15240, ctx.r10.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r10,236(r3)
	REX_STORE_U32(ctx.r3.u32 + 236, ctx.r10.u32);
	// stw r8,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r8.u32);
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// stw r7,22212(r3)
	REX_STORE_U32(ctx.r3.u32 + 22212, ctx.r7.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r5,22216(r3)
	REX_STORE_U32(ctx.r3.u32 + 22216, ctx.r5.u32);
	// stw r9,15244(r3)
	REX_STORE_U32(ctx.r3.u32 + 15244, ctx.r9.u32);
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// bgt cr6,0x82395378
	if (ctx.cr6.gt) goto loc_82395378;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82395378:
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,188(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// lwz r30,136(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lwz r28,140(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r9,200(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// lwz r7,220(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// lwz r6,224(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// lwz r11,3392(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3392);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// divwu r29,r30,r11
	r29.u64 = uint32_t(ctx.r11.u32 ? r30.u32 / ctx.r11.u32 : 0);
	// stw r7,3892(r3)
	REX_STORE_U32(ctx.r3.u32 + 3892, ctx.r7.u32);
	// divwu r9,r9,r11
	ctx.r9.u64 = uint32_t(ctx.r11.u32 ? ctx.r9.u32 / ctx.r11.u32 : 0);
	// stw r6,3896(r3)
	REX_STORE_U32(ctx.r3.u32 + 3896, ctx.r6.u32);
	// divwu r10,r10,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// stw r29,3872(r3)
	REX_STORE_U32(ctx.r3.u32 + 3872, r29.u32);
	// divwu r8,r28,r11
	ctx.r8.u64 = uint32_t(ctx.r11.u32 ? r28.u32 / ctx.r11.u32 : 0);
	// stw r9,3888(r3)
	REX_STORE_U32(ctx.r3.u32 + 3888, ctx.r9.u32);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r10,3880(r3)
	REX_STORE_U32(ctx.r3.u32 + 3880, ctx.r10.u32);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r8,3868(r3)
	REX_STORE_U32(ctx.r3.u32 + 3868, ctx.r8.u32);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// blt cr6,0x82395450
	if (ctx.cr6.lt) goto loc_82395450;
	// lwz r4,204(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// rlwinm r27,r10,1,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r31,208(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// rlwinm r26,r9,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r5,r10,r4
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// stw r10,3912(r3)
	REX_STORE_U32(ctx.r3.u32 + 3912, ctx.r10.u32);
	// stw r9,3920(r3)
	REX_STORE_U32(ctx.r3.u32 + 3920, ctx.r9.u32);
	// stw r27,3916(r3)
	REX_STORE_U32(ctx.r3.u32 + 3916, r27.u32);
	// stw r8,3900(r3)
	REX_STORE_U32(ctx.r3.u32 + 3900, ctx.r8.u32);
	// stw r26,3924(r3)
	REX_STORE_U32(ctx.r3.u32 + 3924, r26.u32);
	// mullw r10,r9,r31
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(r31.s32);
	// add r9,r5,r7
	ctx.r9.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r9,3928(r3)
	REX_STORE_U32(ctx.r3.u32 + 3928, ctx.r9.u32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stw r7,3932(r3)
	REX_STORE_U32(ctx.r3.u32 + 3932, ctx.r7.u32);
	// bne cr6,0x82395430
	if (!ctx.cr6.eq) goto loc_82395430;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,3904(r3)
	REX_STORE_U32(ctx.r3.u32 + 3904, ctx.r11.u32);
	// stw r10,3908(r3)
	REX_STORE_U32(ctx.r3.u32 + 3908, ctx.r10.u32);
	// b 0x82395438
	goto loc_82395438;
loc_82395430:
	// stw r28,3904(r3)
	REX_STORE_U32(ctx.r3.u32 + 3904, r28.u32);
	// stw r30,3908(r3)
	REX_STORE_U32(ctx.r3.u32 + 3908, r30.u32);
loc_82395438:
	// mullw r11,r8,r4
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// mullw r10,r8,r31
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(r31.s32);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,15232(r3)
	REX_STORE_U32(ctx.r3.u32 + 15232, ctx.r9.u32);
	// stw r8,15236(r3)
	REX_STORE_U32(ctx.r3.u32 + 15236, ctx.r8.u32);
loc_82395450:
	// lwz r4,272(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8239550c
	if (ctx.cr6.eq) goto loc_8239550C;
loc_82395464:
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x823954fc
	if (!ctx.cr6.gt) goto loc_823954FC;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r8,r6
	ctx.r8.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r5,r8,28,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x2;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r10,r10,-24
	ctx.r10.s64 = ctx.r10.s64 + -24;
loc_82395490:
	// lwz r7,140(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// cntlzw r31,r11
	r31.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r8,136(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// lwz r30,24(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,28,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x2;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r31,r31,27,31,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x1;
	// or r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r8,r31,r5
	ctx.r8.u64 = r31.u64 | ctx.r5.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r31,r30,0,20,15
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// or r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r7,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0xFFFFF000;
	// or r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 | r31.u64;
	// stwu r7,24(r10)
	ea = 24 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// lwz r8,136(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82395490
	if (ctx.cr6.lt) goto loc_82395490;
loc_823954FC:
	// lwz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82395464
	if (ctx.cr6.lt) goto loc_82395464;
loc_8239550C:
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_823A3350) {
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
	ctx.lr = 0x823A3358;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823a3620
	if (ctx.cr6.eq) goto loc_823A3620;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823a3388
	if (ctx.cr6.eq) goto loc_823A3388;
	// li r10,8
	ctx.r10.s64 = 8;
	// subf r11,r5,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r5.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823A3374:
	// ld r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// stdx r10,r11,r5
	REX_STORE_U64(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u64);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x823a3374
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A3374;
	// b 0x822d4ebc
	return;
loc_823A3388:
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 + ctx.r10.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r31,r8,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r31,r5
	r29.u64 = r31.u64 + ctx.r5.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r30,r9,r5
	r30.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r8,r5,1
	ctx.r8.s64 = ctx.r5.s64 + 1;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r3,r9,r4
	ctx.r3.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// add r4,r31,r4
	ctx.r4.u64 = r31.u64 + ctx.r4.u64;
	// addi r9,r30,1
	ctx.r9.s64 = r30.s64 + 1;
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// addi r27,r6,-1
	r27.s64 = ctx.r6.s64 + -1;
	// subfic r31,r6,-1
	ctx.xer.ca = ctx.r6.u32 <= 4294967295;
	r31.u64 = static_cast<uint64_t>(-1) - ctx.r6.u64;
loc_823A33D8:
	// lwz r29,0(r8)
	r29.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// lwz r28,-1(r8)
	r28.u64 = REX_LOAD_U32(ctx.r8.u32 + -1);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r30,r29,31,1,31
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// or r29,r29,r28
	r29.u64 = r29.u64 | r28.u64;
	// and r30,r30,r12
	r30.u64 = r30.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// rlwinm r28,r28,31,1,31
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// stw r30,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r30.u32);
	// lwzx r30,r8,r6
	r30.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwzx r29,r31,r10
	r29.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// rlwinm r28,r29,31,1,31
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// or r29,r30,r29
	r29.u64 = r30.u64 | r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r30,r30,31,1,31
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// and r30,r30,r12
	r30.u64 = r30.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// stwx r30,r7,r6
	REX_STORE_U32(ctx.r7.u32 + ctx.r6.u32, r30.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lwz r29,0(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r28,-1(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + -1);
	// rlwinm r30,r28,31,1,31
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
	// and r30,r30,r12
	r30.u64 = r30.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// or r26,r28,r29
	r26.u64 = r28.u64 | r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r28,r29,31,1,31
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r26,r12
	r29.u64 = r26.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// stw r30,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r30.u32);
	// lwzx r30,r10,r6
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwzx r29,r31,r9
	r29.u64 = REX_LOAD_U32(r31.u32 + ctx.r9.u32);
	// rlwinm r28,r29,31,1,31
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// or r29,r30,r29
	r29.u64 = r30.u64 | r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r30,r30,31,1,31
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// and r30,r30,r12
	r30.u64 = r30.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// stwx r30,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, r30.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// lwz r29,0(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r28,-1(r9)
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + -1);
	// rlwinm r30,r28,31,1,31
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
	// and r30,r30,r12
	r30.u64 = r30.u64 & ctx.r12.u64;
	// or r26,r28,r29
	r26.u64 = r28.u64 | r29.u64;
	// rlwinm r28,r29,31,1,31
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r26,r12
	r29.u64 = r26.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwzx r30,r9,r6
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwzx r29,r31,r11
	r29.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// rlwinm r28,r29,31,1,31
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// or r29,r30,r29
	r29.u64 = r30.u64 | r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r30,r30,31,1,31
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// and r30,r30,r12
	r30.u64 = r30.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// stwx r30,r3,r6
	REX_STORE_U32(ctx.r3.u32 + ctx.r6.u32, r30.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r28,-1(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + -1);
	// rlwinm r30,r28,31,1,31
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
	// and r30,r30,r12
	r30.u64 = r30.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// or r26,r28,r29
	r26.u64 = r28.u64 | r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r28,r29,31,1,31
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r26,r12
	r29.u64 = r26.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// stw r30,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r30.u32);
	// lwzx r29,r11,r6
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwzx r28,r27,r11
	r28.u64 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	// rlwinm r30,r28,31,1,31
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
	// and r30,r30,r12
	r30.u64 = r30.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// or r26,r28,r29
	r26.u64 = r28.u64 | r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r28,r29,31,1,31
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r26,r12
	r29.u64 = r26.u64 & ctx.r12.u64;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// stwx r30,r4,r6
	REX_STORE_U32(ctx.r4.u32 + ctx.r6.u32, r30.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bdnz 0x823a33d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A33D8;
	// b 0x822d4ebc
	return;
loc_823A3620:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823a38c4
	if (ctx.cr6.eq) goto loc_823A38C4;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 + ctx.r11.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r3,r6,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r31,r6,r9
	r31.u64 = ctx.r6.u64 + ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r11,r6,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r6.u64;
	// rlwinm r30,r7,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r31,r31,r5
	r31.u64 = r31.u64 + ctx.r5.u64;
	// add r30,r30,r5
	r30.u64 = r30.u64 + ctx.r5.u64;
	// subf r11,r5,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r5.u64;
loc_823A367C:
	// lwz r29,0(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// lwz r28,0(r5)
	r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r4,r29,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// or r29,r29,r28
	r29.u64 = r29.u64 | r28.u64;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// rlwinm r28,r28,31,1,31
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r4,r29,r4
	ctx.r4.u64 = r29.u64 + ctx.r4.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
	// stwx r4,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r4.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// lwz r29,0(r8)
	r29.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r28,r4,31,1,31
	r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// or r27,r29,r4
	r27.u64 = r29.u64 | ctx.r4.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r4,r29,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r27,r12
	r29.u64 = r27.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r4,r29,r4
	ctx.r4.u64 = r29.u64 + ctx.r4.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
	// stwx r4,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r29,0(r7)
	r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r28,r29,31,1,31
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// or r27,r29,r4
	r27.u64 = r29.u64 | ctx.r4.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r29,r4,31,1,31
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r4,r27,r12
	ctx.r4.u64 = r27.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + r29.u64;
	// stwx r4,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r4.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwz r29,0(r7)
	r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r28,r4,31,1,31
	r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// or r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 | r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r29,r29,31,1,31
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + r29.u64;
	// stwx r4,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r4.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r28,r4,31,1,31
	r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// or r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 | r29.u64;
	// rlwinm r29,r29,31,1,31
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + r29.u64;
	// stwx r4,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r28,r4,31,1,31
	r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// or r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 | r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r29,r29,31,1,31
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + r29.u64;
	// stwx r4,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r4.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r28,r4,31,1,31
	r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// or r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 | r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r29,r29,31,1,31
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + r29.u64;
	// stwx r4,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r4.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwzx r4,r10,r6
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r28,0(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r29,r28,31,1,31
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// or r27,r4,r28
	r27.u64 = ctx.r4.u64 | r28.u64;
	// rlwinm r28,r4,31,1,31
	r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r4,r27,r12
	ctx.r4.u64 = r27.u64 & ctx.r12.u64;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + r29.u64;
	// stwx r4,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823a367c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A367C;
	// b 0x822d4ebc
	return;
loc_823A38C4:
	// lis r11,514
	ctx.r11.s64 = 33685504;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r25,r5,r6
	r25.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subfic r24,r4,1
	ctx.xer.ca = ctx.r4.u32 <= 1;
	r24.u64 = static_cast<uint64_t>(1) - ctx.r4.u64;
	// ori r8,r11,514
	ctx.r8.u64 = ctx.r11.u64 | 514;
loc_823A38D8:
	// li r31,2
	r31.s64 = 2;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// add r9,r24,r11
	ctx.r9.u64 = r24.u64 + ctx.r11.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_823A38F0:
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// lwzx r28,r3,r9
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// lwzx r26,r9,r7
	r26.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// lwzx r23,r3,r10
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lwzx r22,r10,r7
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// rlwinm r27,r28,30,2,31
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 30) & 0x3FFFFFFF;
	// and r31,r28,r12
	r31.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// rlwinm r28,r26,30,2,31
	r28.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// and r30,r26,r12
	r30.u64 = r26.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// and r29,r23,r12
	r29.u64 = r23.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// rlwinm r29,r23,30,2,31
	r29.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 30) & 0x3FFFFFFF;
	// and r30,r22,r12
	r30.u64 = r22.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// and r27,r27,r12
	r27.u64 = r27.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// rlwinm r31,r31,30,6,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFF;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// rlwinm r30,r22,30,2,31
	r30.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 30) & 0x3FFFFFFF;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,-253
	ctx.r12.s64 = -16580608;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r31,r31,r12
	r31.u64 = r31.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r31,r31,r28
	r31.u64 = r31.u64 + r28.u64;
	// and r30,r30,r12
	r30.u64 = r30.u64 & ctx.r12.u64;
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// lwzx r23,r9,r7
	r23.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r22,r3,r10
	r22.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lwzx r21,r10,r7
	r21.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwzx r27,r3,r9
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// and r31,r27,r12
	r31.u64 = r27.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// rlwinm r26,r27,30,2,31
	r26.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r28,r23,r12
	r28.u64 = r23.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r28
	r31.u64 = r31.u64 + r28.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// rlwinm r28,r23,30,2,31
	r28.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 30) & 0x3FFFFFFF;
	// and r29,r22,r12
	r29.u64 = r22.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r30,r21,r12
	r30.u64 = r21.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r30,r31,r30
	r30.u64 = r31.u64 + r30.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r30,r30,r8
	r30.u64 = r30.u64 + ctx.r8.u64;
	// and r26,r26,r12
	r26.u64 = r26.u64 & ctx.r12.u64;
	// lis r12,-253
	ctx.r12.s64 = -16580608;
	// rlwinm r27,r30,30,6,31
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x3FFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// add r31,r7,r6
	r31.u64 = ctx.r7.u64 + ctx.r6.u64;
	// and r27,r27,r12
	r27.u64 = r27.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r7,r3,r6
	ctx.r7.u64 = ctx.r3.u64 + ctx.r6.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// rlwinm r29,r22,30,2,31
	r29.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r3,r27,r26
	ctx.r3.u64 = r27.u64 + r26.u64;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + r28.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// rlwinm r30,r21,30,2,31
	r30.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 30) & 0x3FFFFFFF;
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + r29.u64;
	// and r30,r30,r12
	r30.u64 = r30.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// stwux r3,r11,r6
	ea = ctx.r11.u32 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// lwzx r27,r7,r9
	r27.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r22,r9,r31
	r22.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lwzx r23,r10,r31
	r23.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lwzx r29,r7,r10
	r29.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// and r30,r29,r12
	r30.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// rlwinm r29,r29,30,2,31
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r26,r23,r12
	r26.u64 = r23.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r3,r27,r12
	ctx.r3.u64 = r27.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// rlwinm r27,r27,30,2,31
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r28,r22,r12
	r28.u64 = r22.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + r28.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// rlwinm r28,r22,30,2,31
	r28.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 30) & 0x3FFFFFFF;
	// and r27,r27,r12
	r27.u64 = r27.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r30,r3,r26
	r30.u64 = ctx.r3.u64 + r26.u64;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r30,r30,r8
	r30.u64 = r30.u64 + ctx.r8.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 + ctx.r6.u64;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,-253
	ctx.r12.s64 = -16580608;
	// add r7,r31,r6
	ctx.r7.u64 = r31.u64 + ctx.r6.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// rlwinm r31,r30,30,6,31
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x3FFFFFF;
	// rlwinm r30,r23,30,2,31
	r30.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 30) & 0x3FFFFFFF;
	// and r31,r31,r12
	r31.u64 = r31.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r31,r31,r28
	r31.u64 = r31.u64 + r28.u64;
	// and r30,r30,r12
	r30.u64 = r30.u64 & ctx.r12.u64;
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// stwux r31,r11,r6
	ea = ctx.r11.u32 + ctx.r6.u32;
	REX_STORE_U32(ea, r31.u32);
	ctx.r11.u32 = ea;
	// lwzx r26,r3,r10
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lwzx r23,r10,r7
	r23.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwzx r22,r9,r7
	r22.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// and r30,r22,r12
	r30.u64 = r22.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// lwzx r28,r3,r9
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// rlwinm r27,r28,30,2,31
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r31,r28,r12
	r31.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r29,r26,r12
	r29.u64 = r26.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r30,r23,r12
	r30.u64 = r23.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// and r27,r27,r12
	r27.u64 = r27.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// rlwinm r28,r22,30,2,31
	r28.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// rlwinm r29,r26,30,2,31
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3FFFFFFF;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,-253
	ctx.r12.s64 = -16580608;
	// rlwinm r31,r31,30,6,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// rlwinm r30,r23,30,2,31
	r30.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 30) & 0x3FFFFFFF;
	// and r31,r31,r12
	r31.u64 = r31.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r31,r31,r28
	r31.u64 = r31.u64 + r28.u64;
	// and r30,r30,r12
	r30.u64 = r30.u64 & ctx.r12.u64;
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// stwux r31,r11,r6
	ea = ctx.r11.u32 + ctx.r6.u32;
	REX_STORE_U32(ea, r31.u32);
	ctx.r11.u32 = ea;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bdnz 0x823a38f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A38F0;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x823a38d8
	if (ctx.cr6.lt) goto loc_823A38D8;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_823C2ED8) {
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
	ctx.lr = 0x823C2EE0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,300(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// srawi r11,r22,31
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = r22.s32 >> 31;
	// xor r31,r22,r11
	r31.u64 = r22.u64 ^ ctx.r11.u64;
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// mr r31,r22
	r31.u64 = r22.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823c2f04
	if (ctx.cr6.eq) goto loc_823C2F04;
	// srawi r31,r22,1
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x1) != 0);
	r31.s64 = r22.s32 >> 1;
loc_823C2F04:
	// srawi r24,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	r24.s64 = ctx.r7.s32 >> 1;
	// srawi. r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r25,r31,1,0,30
	r25.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// ble 0x823c2f70
	if (!ctx.cr0.gt) goto loc_823C2F70;
	// lwz r28,316(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// li r29,0
	r29.s64 = 0;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
loc_823C2F20:
	// li r31,0
	r31.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x823c2f60
	if (!ctx.cr6.gt) goto loc_823C2F60;
	// add r27,r29,r6
	r27.u64 = r29.u64 + ctx.r6.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// addi r26,r28,1
	r26.s64 = r28.s64 + 1;
	// add r30,r29,r11
	r30.u64 = r29.u64 + ctx.r11.u64;
loc_823C2F40:
	// lbzx r21,r30,r5
	r21.u64 = REX_LOAD_U8(r30.u32 + ctx.r5.u32);
	// lbzx r20,r27,r11
	r20.u64 = REX_LOAD_U8(r27.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r30,r29,r11
	r30.u64 = r29.u64 + ctx.r11.u64;
	// stbx r21,r28,r31
	REX_STORE_U8(r28.u32 + r31.u32, r21.u8);
	// stbx r20,r26,r31
	REX_STORE_U8(r26.u32 + r31.u32, r20.u8);
	// add r31,r31,r25
	r31.u64 = r31.u64 + r25.u64;
	// bdnz 0x823c2f40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C2F40;
loc_823C2F60:
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// add r29,r29,r10
	r29.u64 = r29.u64 + ctx.r10.u64;
	// addi r28,r28,-2
	r28.s64 = r28.s64 + -2;
	// bne 0x823c2f20
	if (!ctx.cr0.eq) goto loc_823C2F20;
loc_823C2F70:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bl 0x823c2220
	ctx.lr = 0x823C2F7C;
	sub_823C2220(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_823C4C20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_823C4C30:
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r9,r10,-128
	ctx.r9.s64 = ctx.r10.s64 + -128;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x823c4c30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C4C30;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823C5F10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r11,-32196
	ctx.r11.s64 = -2109997056;
	// lis r10,-32196
	ctx.r10.s64 = -2109997056;
	// addi r11,r11,19616
	ctx.r11.s64 = ctx.r11.s64 + 19616;
	// addi r10,r10,19536
	ctx.r10.s64 = ctx.r10.s64 + 19536;
	// lis r9,-32196
	ctx.r9.s64 = -2109997056;
	// stw r11,15912(r3)
	REX_STORE_U32(ctx.r3.u32 + 15912, ctx.r11.u32);
	// lis r8,-32196
	ctx.r8.s64 = -2109997056;
	// stw r10,3172(r3)
	REX_STORE_U32(ctx.r3.u32 + 3172, ctx.r10.u32);
	// lis r7,-32196
	ctx.r7.s64 = -2109997056;
	// lis r6,-32196
	ctx.r6.s64 = -2109997056;
	// lis r5,-32183
	ctx.r5.s64 = -2109145088;
	// lis r4,-32183
	ctx.r4.s64 = -2109145088;
	// lis r31,-32196
	r31.s64 = -2109997056;
	// lis r30,-32195
	r30.s64 = -2109931520;
	// addi r9,r9,21656
	ctx.r9.s64 = ctx.r9.s64 + 21656;
	// addi r8,r8,23824
	ctx.r8.s64 = ctx.r8.s64 + 23824;
	// addi r7,r7,24080
	ctx.r7.s64 = ctx.r7.s64 + 24080;
	// stw r9,20720(r3)
	REX_STORE_U32(ctx.r3.u32 + 20720, ctx.r9.u32);
	// addi r6,r6,19488
	ctx.r6.s64 = ctx.r6.s64 + 19488;
	// stw r8,20712(r3)
	REX_STORE_U32(ctx.r3.u32 + 20712, ctx.r8.u32);
	// addi r5,r5,-22816
	ctx.r5.s64 = ctx.r5.s64 + -22816;
	// stw r7,20716(r3)
	REX_STORE_U32(ctx.r3.u32 + 20716, ctx.r7.u32);
	// addi r4,r4,-23208
	ctx.r4.s64 = ctx.r4.s64 + -23208;
	// stw r6,15896(r3)
	REX_STORE_U32(ctx.r3.u32 + 15896, ctx.r6.u32);
	// addi r11,r31,19240
	ctx.r11.s64 = r31.s64 + 19240;
	// stw r5,15900(r3)
	REX_STORE_U32(ctx.r3.u32 + 15900, ctx.r5.u32);
	// addi r10,r30,-25672
	ctx.r10.s64 = r30.s64 + -25672;
	// stw r4,15904(r3)
	REX_STORE_U32(ctx.r3.u32 + 15904, ctx.r4.u32);
	// stw r11,15908(r3)
	REX_STORE_U32(ctx.r3.u32 + 15908, ctx.r11.u32);
	// stw r10,3168(r3)
	REX_STORE_U32(ctx.r3.u32 + 3168, ctx.r10.u32);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823C90B0) {
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
	// bl 0x822d4e60
	ctx.lr = 0x823C90B8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r31,100(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r30,-64
	r30.s64 = -64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// addi r29,r11,-8464
	r29.s64 = ctx.r11.s64 + -8464;
	// vspltish v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x1)));
	// li r28,-48
	r28.s64 = -48;
	// vspltish v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x2)));
	// li r26,-16
	r26.s64 = -16;
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// srawi r11,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	ctx.r11.s64 = r31.s32 >> 8;
	// li r27,-32
	r27.s64 = -32;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lvx128 v7,r29,r30
	ea = (r29.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r29,r28
	ea = (r29.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r29,r26
	ea = (r29.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r29,r27
	ea = (r29.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r20,r6,0,0,27
	r20.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// add r30,r11,r3
	r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r26,16
	r26.s64 = 16;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// add r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 + ctx.r7.u64;
	// li r28,0
	r28.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x823c91d8
	if (!ctx.cr6.gt) goto loc_823C91D8;
	// addi r11,r20,-1
	ctx.r11.s64 = r20.s64 + -1;
	// mr r27,r26
	r27.u64 = r26.u64;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_823C914C:
	// lvrx128 v63,r27,r3
	temp.u32 = r27.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r29,r3,1
	r29.s64 = ctx.r3.s64 + 1;
	// lvlx128 v62,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// vor128 v63,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvrx128 v61,r26,r29
	temp.u32 = r26.u32 + r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v60,r0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm128 v5,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vmrghb v3,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v4,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v1,v3,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v2,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v3,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v5,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v5,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v2,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v4,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v4,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v2,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v24,v29,v30
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v23,v31,v1
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsubshs v22,v26,v27
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vsubshs v21,v25,v28
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v20,v24,v22
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vaddshs v19,v23,v21
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vsrah v18,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v59,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// stvlx128 v59,r0,r31
	ea = r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvrx128 v59,r31,r26
	ea = r31.u32 + r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v59.u8[i]);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bdnz 0x823c914c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C914C;
loc_823C91D8:
	// rlwinm r3,r28,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// add r3,r28,r3
	ctx.r3.u64 = r28.u64 + ctx.r3.u64;
	// rlwinm r3,r3,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// bge cr6,0x823c9230
	if (!ctx.cr6.lt) goto loc_823C9230;
	// subf r31,r11,r6
	r31.u64 = ctx.r6.u64 - ctx.r11.u64;
	// addi r28,r30,1
	r28.s64 = r30.s64 + 1;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_823C91F8:
	// srawi r31,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	r31.s64 = ctx.r3.s32 >> 7;
	// clrlwi r27,r3,25
	r27.u64 = ctx.r3.u32 & 0x7F;
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// subfic r29,r27,128
	ctx.xer.ca = r27.u32 <= 128;
	r29.u64 = static_cast<uint64_t>(128) - r27.u64;
	// lbzx r25,r31,r30
	r25.u64 = REX_LOAD_U8(r31.u32 + r30.u32);
	// lbzx r31,r28,r31
	r31.u64 = REX_LOAD_U8(r28.u32 + r31.u32);
	// mullw r29,r25,r29
	r29.s64 = int64_t(r25.s32) * int64_t(r29.s32);
	// mullw r31,r31,r27
	r31.s64 = int64_t(r31.s32) * int64_t(r27.s32);
	// add r31,r29,r31
	r31.u64 = r29.u64 + r31.u64;
	// srawi r31,r31,7
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7F) != 0);
	r31.s64 = r31.s32 >> 7;
	// clrlwi r31,r31,24
	r31.u64 = r31.u32 & 0xFF;
	// stbx r31,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823c91f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C91F8;
loc_823C9230:
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823c9258
	if (!ctx.cr6.lt) goto loc_823C9258;
	// subf r31,r11,r7
	r31.u64 = ctx.r7.u64 - ctx.r11.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_823C9240:
	// srawi r31,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	r31.s64 = ctx.r3.s32 >> 7;
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// lbzx r31,r31,r30
	r31.u64 = REX_LOAD_U8(r31.u32 + r30.u32);
	// stbx r31,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823c9240
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C9240;
loc_823C9258:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r23,r30,r9
	r23.u64 = r30.u64 + ctx.r9.u64;
	// mr r18,r11
	r18.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823c996c
	if (!ctx.cr6.lt) goto loc_823C996C;
	// addi r19,r23,1
	r19.s64 = r23.s64 + 1;
loc_823C9270:
	// clrlwi r11,r18,30
	ctx.r11.u64 = r18.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823c995c
	if (ctx.cr6.gt) goto loc_823C995C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823c985c
	if (ctx.cr6.eq) goto loc_823C985C;
	// bdz 0x823c9294
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823C9294;
	// bdz 0x823c9484
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823C9484;
	// b 0x823c9674
	goto loc_823C9674;
loc_823C9294:
	// li r24,0
	r24.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x823c93b4
	if (!ctx.cr6.gt) goto loc_823C93B4;
	// addi r11,r20,-1
	ctx.r11.s64 = r20.s64 + -1;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// subf r30,r4,r22
	r30.u64 = r22.u64 - ctx.r4.u64;
	// rlwinm r3,r31,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r29,r4,r21
	r29.u64 = r21.u64 - ctx.r4.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// mr r25,r26
	r25.u64 = r26.u64;
loc_823C92D0:
	// lvrx128 v58,r25,r5
	temp.u32 = r25.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r31,r5,1
	r31.s64 = ctx.r5.s64 + 1;
	// lvlx128 v57,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r28,r30,r11
	r28.u64 = r30.u64 + ctx.r11.u64;
	// vor128 v63,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvlx128 v56,r30,r11
	temp.u32 = r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r27,r29,r11
	r27.u64 = r29.u64 + ctx.r11.u64;
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// lvlx128 v55,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v54,r26,r31
	temp.u32 = r26.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vperm128 v4,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v55,v54
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// lvrx128 v53,r26,r28
	temp.u32 = r26.u32 + r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v5,v56,v53
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vmrghb v1,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v3,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v1,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v31,v0,v3
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v29,v1,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v28,v4,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v4,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v31,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v31,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v3,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v3,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v21,v29,v30
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v19,v27,v28
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vsubshs v20,v24,v25
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubshs v18,v22,v23
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vaddshs v17,v26,v5
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v15,v2,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v16,v21,v20
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vaddshs v14,v19,v18
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vaddshs v3,v15,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsrah v5,v16,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v4,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v2,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vpkshus128 v52,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v31,v2,v5
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v30,v1,v4
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v29,v3,v31
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// stvlx128 v52,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// vaddshs v28,v17,v30
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// stvrx128 v52,r11,r26
	ea = ctx.r11.u32 + r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v52.u8[i]);
	// vsrah v27,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v51,v27,v26
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// stvlx128 v51,r29,r11
	ea = r29.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v51,r27,r26
	ea = r27.u32 + r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v51.u8[i]);
	// bdnz 0x823c92d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C92D0;
loc_823C93B4:
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// add r11,r24,r11
	ctx.r11.u64 = r24.u64 + ctx.r11.u64;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bge cr6,0x823c940c
	if (!ctx.cr6.lt) goto loc_823C940C;
	// subf r5,r3,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r3.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823C93D4:
	// srawi r5,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 7;
	// clrlwi r29,r11,25
	r29.u64 = ctx.r11.u32 & 0x7F;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// subfic r31,r29,128
	ctx.xer.ca = r29.u32 <= 128;
	r31.u64 = static_cast<uint64_t>(128) - r29.u64;
	// lbzx r28,r5,r23
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + r23.u32);
	// lbzx r5,r19,r5
	ctx.r5.u64 = REX_LOAD_U8(r19.u32 + ctx.r5.u32);
	// mullw r31,r28,r31
	r31.s64 = int64_t(r28.s32) * int64_t(r31.s32);
	// mullw r5,r5,r29
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r29.s32);
	// add r5,r31,r5
	ctx.r5.u64 = r31.u64 + ctx.r5.u64;
	// srawi r5,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 7;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// stbx r5,r3,r4
	REX_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r5.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x823c93d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C93D4;
loc_823C940C:
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823c9434
	if (!ctx.cr6.lt) goto loc_823C9434;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823C941C:
	// srawi r5,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 7;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// lbzx r5,r5,r23
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + r23.u32);
	// stbx r5,r3,r4
	REX_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r5.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x823c941c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C941C;
loc_823C9434:
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823c9948
	if (!ctx.cr6.lt) goto loc_823C9948;
	// subf r5,r30,r7
	ctx.r5.u64 = ctx.r7.u64 - r30.u64;
	// add r11,r30,r22
	ctx.r11.u64 = r30.u64 + r22.u64;
	// subf r29,r22,r4
	r29.u64 = ctx.r4.u64 - r22.u64;
	// subf r28,r22,r21
	r28.u64 = r21.u64 - r22.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823C9450:
	// lbzx r5,r29,r11
	ctx.r5.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r31,r5,2
	r31.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// rotlwi r30,r3,1
	r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// add r31,r5,r31
	r31.u64 = ctx.r5.u64 + r31.u64;
	// add r5,r3,r30
	ctx.r5.u64 = ctx.r3.u64 + r30.u64;
	// add r5,r31,r5
	ctx.r5.u64 = r31.u64 + ctx.r5.u64;
	// srawi r3,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 3;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// stbx r5,r28,r11
	REX_STORE_U8(r28.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823c9450
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C9450;
	// b 0x823c9948
	goto loc_823C9948;
loc_823C9484:
	// li r24,0
	r24.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x823c95a4
	if (!ctx.cr6.gt) goto loc_823C95A4;
	// addi r11,r20,-1
	ctx.r11.s64 = r20.s64 + -1;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// subf r30,r4,r22
	r30.u64 = r22.u64 - ctx.r4.u64;
	// rlwinm r3,r31,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r29,r4,r21
	r29.u64 = r21.u64 - ctx.r4.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// mr r25,r26
	r25.u64 = r26.u64;
loc_823C94C0:
	// lvrx128 v50,r25,r5
	temp.u32 = r25.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r31,r5,1
	r31.s64 = ctx.r5.s64 + 1;
	// lvlx128 v49,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r28,r11,r30
	r28.u64 = ctx.r11.u64 + r30.u64;
	// vor128 v63,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// lvlx128 v48,r11,r30
	temp.u32 = ctx.r11.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r27,r11,r29
	r27.u64 = ctx.r11.u64 + r29.u64;
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// lvlx128 v47,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v46,r26,r31
	temp.u32 = r26.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vperm128 v4,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v47,v46
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// lvrx128 v45,r26,r28
	temp.u32 = r26.u32 + r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v5,v48,v45
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v1,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v3,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v1,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v31,v0,v3
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v29,v1,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v28,v4,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v4,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v31,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v31,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v3,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v3,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v21,v29,v30
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v19,v27,v28
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vsubshs v20,v24,v25
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubshs v18,v22,v23
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vaddshs v17,v26,v5
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v15,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v16,v21,v20
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vaddshs v14,v19,v18
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vaddshs v3,v15,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsrah v5,v16,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v4,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v2,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vpkshus128 v44,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v31,v2,v5
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v30,v1,v4
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v29,v3,v31
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// stvlx128 v44,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// vaddshs v28,v17,v30
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// stvrx128 v44,r11,r26
	ea = ctx.r11.u32 + r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v44.u8[i]);
	// vsrah v27,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v43,v27,v26
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// stvlx128 v43,r11,r29
	ea = ctx.r11.u32 + r29.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v43,r27,r26
	ea = r27.u32 + r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v43.u8[i]);
	// bdnz 0x823c94c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C94C0;
loc_823C95A4:
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// add r11,r24,r11
	ctx.r11.u64 = r24.u64 + ctx.r11.u64;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bge cr6,0x823c95fc
	if (!ctx.cr6.lt) goto loc_823C95FC;
	// subf r5,r3,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r3.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823C95C4:
	// srawi r5,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 7;
	// clrlwi r29,r11,25
	r29.u64 = ctx.r11.u32 & 0x7F;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// subfic r31,r29,128
	ctx.xer.ca = r29.u32 <= 128;
	r31.u64 = static_cast<uint64_t>(128) - r29.u64;
	// lbzx r28,r5,r23
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + r23.u32);
	// lbzx r5,r19,r5
	ctx.r5.u64 = REX_LOAD_U8(r19.u32 + ctx.r5.u32);
	// mullw r31,r28,r31
	r31.s64 = int64_t(r28.s32) * int64_t(r31.s32);
	// mullw r5,r5,r29
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r29.s32);
	// add r5,r31,r5
	ctx.r5.u64 = r31.u64 + ctx.r5.u64;
	// srawi r5,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 7;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// stbx r5,r3,r4
	REX_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r5.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x823c95c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C95C4;
loc_823C95FC:
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823c9624
	if (!ctx.cr6.lt) goto loc_823C9624;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823C960C:
	// srawi r5,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 7;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// lbzx r5,r5,r23
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + r23.u32);
	// stbx r5,r3,r4
	REX_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r5.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x823c960c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C960C;
loc_823C9624:
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823c9948
	if (!ctx.cr6.lt) goto loc_823C9948;
	// subf r5,r30,r7
	ctx.r5.u64 = ctx.r7.u64 - r30.u64;
	// add r11,r30,r22
	ctx.r11.u64 = r30.u64 + r22.u64;
	// subf r29,r22,r4
	r29.u64 = ctx.r4.u64 - r22.u64;
	// subf r28,r22,r21
	r28.u64 = r21.u64 - r22.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823C9640:
	// lbzx r5,r29,r11
	ctx.r5.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r31,r5,1
	r31.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// rotlwi r30,r3,2
	r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// add r31,r5,r31
	r31.u64 = ctx.r5.u64 + r31.u64;
	// add r5,r3,r30
	ctx.r5.u64 = ctx.r3.u64 + r30.u64;
	// add r5,r31,r5
	ctx.r5.u64 = r31.u64 + ctx.r5.u64;
	// srawi r3,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 3;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// stbx r5,r28,r11
	REX_STORE_U8(r28.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823c9640
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C9640;
	// b 0x823c9948
	goto loc_823C9948;
loc_823C9674:
	// li r24,0
	r24.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x823c9794
	if (!ctx.cr6.gt) goto loc_823C9794;
	// addi r11,r20,-1
	ctx.r11.s64 = r20.s64 + -1;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// subf r30,r4,r22
	r30.u64 = r22.u64 - ctx.r4.u64;
	// rlwinm r3,r31,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r29,r4,r21
	r29.u64 = r21.u64 - ctx.r4.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// mr r25,r26
	r25.u64 = r26.u64;
loc_823C96B0:
	// lvrx128 v42,r25,r5
	temp.u32 = r25.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r31,r5,1
	r31.s64 = ctx.r5.s64 + 1;
	// lvlx128 v41,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r28,r30,r11
	r28.u64 = r30.u64 + ctx.r11.u64;
	// vor128 v63,v41,v42
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// lvlx128 v40,r30,r11
	temp.u32 = r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r27,r29,r11
	r27.u64 = r29.u64 + ctx.r11.u64;
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// lvlx128 v39,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v38,r26,r31
	temp.u32 = r26.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vperm128 v3,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v39,v38
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// lvrx128 v37,r26,r28
	temp.u32 = r26.u32 + r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v4,v40,v37
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vmrghb v1,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v2,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v1,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v31,v0,v2
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v29,v1,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v2,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v28,v3,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v3,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v31,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v2,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v2,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v31,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v21,v29,v30
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v20,v27,v28
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vsubshs v19,v23,v24
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vsubshs v18,v22,v25
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vslh v17,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v14,v21,v18
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vaddshs v2,v20,v19
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vaddshs v1,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vaddshs v31,v15,v26
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vsrah v3,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v30,v1,v4
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v29,v31,v5
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vpkshus128 v36,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v28,v30,v2
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v27,v29,v3
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsrah v26,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvlx128 v36,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// stvrx128 v36,r11,r26
	ea = ctx.r11.u32 + r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v36.u8[i]);
	// vpkshus128 v35,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// stvlx128 v35,r29,r11
	ea = r29.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v35,r27,r26
	ea = r27.u32 + r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v35.u8[i]);
	// bdnz 0x823c96b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C96B0;
loc_823C9794:
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// add r11,r24,r11
	ctx.r11.u64 = r24.u64 + ctx.r11.u64;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bge cr6,0x823c97ec
	if (!ctx.cr6.lt) goto loc_823C97EC;
	// subf r5,r3,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r3.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823C97B4:
	// srawi r5,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 7;
	// clrlwi r29,r11,25
	r29.u64 = ctx.r11.u32 & 0x7F;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// subfic r31,r29,128
	ctx.xer.ca = r29.u32 <= 128;
	r31.u64 = static_cast<uint64_t>(128) - r29.u64;
	// lbzx r28,r5,r23
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + r23.u32);
	// lbzx r5,r19,r5
	ctx.r5.u64 = REX_LOAD_U8(r19.u32 + ctx.r5.u32);
	// mullw r31,r28,r31
	r31.s64 = int64_t(r28.s32) * int64_t(r31.s32);
	// mullw r5,r5,r29
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r29.s32);
	// add r5,r31,r5
	ctx.r5.u64 = r31.u64 + ctx.r5.u64;
	// srawi r5,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 7;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// stbx r5,r3,r4
	REX_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r5.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x823c97b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C97B4;
loc_823C97EC:
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823c9814
	if (!ctx.cr6.lt) goto loc_823C9814;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823C97FC:
	// srawi r5,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 7;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// lbzx r5,r5,r23
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + r23.u32);
	// stbx r5,r3,r4
	REX_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r5.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x823c97fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C97FC;
loc_823C9814:
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823c995c
	if (!ctx.cr6.lt) goto loc_823C995C;
	// subf r5,r30,r7
	ctx.r5.u64 = ctx.r7.u64 - r30.u64;
	// add r11,r30,r4
	ctx.r11.u64 = r30.u64 + ctx.r4.u64;
	// subf r31,r4,r22
	r31.u64 = r22.u64 - ctx.r4.u64;
	// subf r30,r4,r21
	r30.u64 = r21.u64 - ctx.r4.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823C9830:
	// lbzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r29,r3,3
	r29.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// subf r3,r3,r29
	ctx.r3.u64 = r29.u64 - ctx.r3.u64;
	// add r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 + ctx.r5.u64;
	// srawi r3,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 3;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// stbx r5,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823c9830
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C9830;
	// b 0x823c995c
	goto loc_823C995C;
loc_823C985C:
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x823c9904
	if (!ctx.cr6.gt) goto loc_823C9904;
	// addi r5,r20,-1
	ctx.r5.s64 = r20.s64 + -1;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// rlwinm r3,r5,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// subf r5,r4,r22
	ctx.r5.u64 = r22.u64 - ctx.r4.u64;
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// subf r3,r4,r21
	ctx.r3.u64 = r21.u64 - ctx.r4.u64;
	// rlwinm r27,r31,4,0,27
	r27.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r29,r26
	r29.u64 = r26.u64;
	// mr r28,r26
	r28.u64 = r26.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_823C9890:
	// lvrx128 v34,r28,r11
	temp.u32 = r28.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r31,r5,r11
	r31.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lvlx128 v33,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r30,r3,r11
	r30.u64 = ctx.r3.u64 + ctx.r11.u64;
	// vor128 v4,v33,v34
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8)));
	// lvlx128 v32,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v63,r29,r31
	temp.u32 = r29.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v5,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v3,v32,v63
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vmrglb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v2,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v1,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v30,v0,v3
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v29,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v27,v2,v5
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v26,v31,v4
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v25,v27,v28
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v24,v26,v29
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vaddshs v23,v30,v25
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vaddshs v22,v1,v24
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vsrah v21,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v21,v20
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// stvlx128 v62,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v62,r30,r26
	ea = r30.u32 + r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// bdnz 0x823c9890
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C9890;
loc_823C9904:
	// cmpw cr6,r27,r7
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823c9948
	if (!ctx.cr6.lt) goto loc_823C9948;
	// subf r5,r27,r7
	ctx.r5.u64 = ctx.r7.u64 - r27.u64;
	// add r11,r27,r22
	ctx.r11.u64 = r27.u64 + r22.u64;
	// subf r31,r22,r4
	r31.u64 = ctx.r4.u64 - r22.u64;
	// subf r30,r22,r21
	r30.u64 = r21.u64 - r22.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823C9920:
	// lbzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r29,r3,3
	r29.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// subf r3,r3,r29
	ctx.r3.u64 = r29.u64 - ctx.r3.u64;
	// add r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 + ctx.r5.u64;
	// srawi r3,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 3;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// stbx r5,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823c9920
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C9920;
loc_823C9948:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// add r23,r23,r9
	r23.u64 = r23.u64 + ctx.r9.u64;
	// add r19,r19,r9
	r19.u64 = r19.u64 + ctx.r9.u64;
loc_823C995C:
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// add r21,r21,r8
	r21.u64 = r21.u64 + ctx.r8.u64;
	// cmpw cr6,r18,r10
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823c9270
	if (ctx.cr6.lt) goto loc_823C9270;
loc_823C996C:
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_823FF7B8) {
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
	ctx.lr = 0x823FF7C0;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,0(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,456(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// lwz r31,4(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,112(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// lwzx r9,r5,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lwz r29,16(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r28,20(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r27,24(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r26,28(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwzx r5,r31,r7
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + ctx.r7.u32);
	// lwz r10,328(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 328);
	// lwzx r7,r4,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// beq cr6,0x823ff898
	if (ctx.cr6.eq) goto loc_823FF898;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823FF80C:
	// lbz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lbz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// rotlwi r31,r8,2
	r31.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lbz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r25,r6,2
	r25.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lwzx r4,r31,r29
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + r29.u32);
	// lwzx r30,r25,r26
	r30.u64 = REX_LOAD_U32(r25.u32 + r26.u32);
	// lwzx r6,r31,r27
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + r27.u32);
	// add r24,r8,r4
	r24.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lwzx r31,r25,r28
	r31.u64 = REX_LOAD_U32(r25.u32 + r28.u32);
	// add r6,r30,r6
	ctx.r6.u64 = r30.u64 + ctx.r6.u64;
	// add r30,r8,r31
	r30.u64 = ctx.r8.u64 + r31.u64;
	// srawi r6,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 16;
	// lbzx r25,r24,r10
	r25.u64 = REX_LOAD_U8(r24.u32 + ctx.r10.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stb r25,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r25.u8);
	// lbzx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// stb r8,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbzx r8,r30,r10
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + ctx.r10.u32);
	// stb r8,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lbzx r4,r4,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stbu r4,3(r11)
	ea = 3 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r11.u32 = ea;
	// add r4,r8,r31
	ctx.r4.u64 = ctx.r8.u64 + r31.u64;
	// lbzx r8,r6,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stb r8,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbzx r6,r4,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// stb r6,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// bdnz 0x823ff80c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FF80C;
loc_823FF898:
	// lwz r8,112(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// clrlwi r6,r8,31
	ctx.r6.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823ff8f8
	if (ctx.cr6.eq) goto loc_823FF8F8;
	// lbz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r7,0(r5)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// rotlwi r5,r8,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lbz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r4,r7,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwzx r8,r5,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + r29.u32);
	// lwzx r7,r5,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + r27.u32);
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwzx r6,r4,r26
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + r26.u32);
	// lwzx r8,r4,r28
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + r28.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r8,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 16;
	// lbzx r5,r3,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stb r5,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// lbzx r3,r4,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// stb r3,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// lbzx r10,r6,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
loc_823FF8F8:
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82405D80) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82405650
	ctx.lr = 0x82405DA4;
	sub_82405650(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82405940
	ctx.lr = 0x82405DB0;
	sub_82405940(ctx, base);
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

DEFINE_REX_FUNC(sub_82406098) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x824060A0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r4,12
	r31.s64 = ctx.r4.s64 + 12;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
	// li r30,4
	r30.s64 = 4;
	// stvx128 v1,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_824060C0:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// lwzu r11,4(r29)
	ea = 4 + r29.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82409e00
	ctx.lr = 0x824060EC;
	sub_82409E00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwzx r9,r11,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r28
	REX_STORE_U32(ctx.r11.u32 + r28.u32, ctx.r10.u32);
	// bne 0x824060c0
	if (!ctx.cr0.eq) goto loc_824060C0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82408568) {
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
	ctx.lr = 0x82408570;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// subf r9,r10,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r10.u64;
	// subf r7,r10,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r7,r7,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r7.u64;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x824085c8
	if (ctx.cr6.lt) goto loc_824085C8;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_824085C8:
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// subfic r7,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addme r7,r7
	temp.u8 = (ctx.r7.u32 + 0xFFFFFFFFu < ctx.r7.u32) | (ctx.r7.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r7.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r31,r7,r9
	r31.u64 = ctx.r7.u64 & ctx.r9.u64;
	// cmplw cr6,r24,r31
	ctx.cr6.compare<uint32_t>(r24.u32, r31.u32, ctx.xer);
	// bge cr6,0x824085f8
	if (!ctx.cr6.lt) goto loc_824085F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// stw r11,8(r25)
	REX_STORE_U32(r25.u32 + 8, ctx.r11.u32);
	// b 0x82408714
	goto loc_82408714;
loc_824085F8:
	// subf r9,r10,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r10.u64;
	// subf r7,r10,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r7,r7,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r7.u64;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// ble cr6,0x82408640
	if (!ctx.cr6.gt) goto loc_82408640;
	// subf r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// b 0x82408644
	goto loc_82408644;
loc_82408640:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82408644:
	// subf r10,r31,r11
	ctx.r10.u64 = ctx.r11.u64 - r31.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// subfic r6,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r6.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subf r9,r31,r9
	ctx.r9.u64 = ctx.r9.u64 - r31.u64;
	// addme r6,r6
	temp.u8 = (ctx.r6.u32 + 0xFFFFFFFFu < ctx.r6.u32) | (ctx.r6.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ctx.r6.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// subf r7,r31,r7
	ctx.r7.u64 = ctx.r7.u64 - r31.u64;
	// and r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 & ctx.r10.u64;
	// slw r29,r11,r9
	r29.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// slw r28,r11,r7
	r28.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r7.u8 & 0x3F));
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// slw r27,r11,r10
	r27.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r27,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,27512
	ctx.r11.s64 = ctx.r11.s64 + 27512;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lbzx r23,r10,r11
	r23.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// bl 0x82221580
	ctx.lr = 0x824086B0;
	sub_82221580(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// mullw r11,r11,r23
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r23.s32);
	// rlwinm r7,r11,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r8,r7,r10
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// bgt cr6,0x824086d4
	if (ctx.cr6.gt) goto loc_824086D4;
	// addi r11,r8,4095
	ctx.r11.s64 = ctx.r8.s64 + 4095;
	// rlwinm r8,r11,0,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
loc_824086D4:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r3,r31,r24
	ctx.r3.u64 = r24.u64 - r31.u64;
	// bl 0x82221a20
	ctx.lr = 0x82408700;
	sub_82221A20(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r10,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r10.u32);
	// stw r9,8(r25)
	REX_STORE_U32(r25.u32 + 8, ctx.r9.u32);
loc_82408714:
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82412AF0) {
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
	ctx.lr = 0x82412AF8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r10,16880
	r29.s64 = ctx.r10.s64 + 16880;
	// addi r28,r9,28552
	r28.s64 = ctx.r9.s64 + 28552;
	// addi r27,r11,-28800
	r27.s64 = ctx.r11.s64 + -28800;
	// bne cr6,0x82412b3c
	if (!ctx.cr6.eq) goto loc_82412B3C;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,178
	ctx.r7.s64 = 178;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x82412B3C;
	sub_8240E308(ctx, base);
loc_82412B3C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82412bd4
	if (ctx.cr6.eq) goto loc_82412BD4;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r10,r31,24
	ctx.r10.s64 = r31.s64 + 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82412b68
	if (ctx.cr6.eq) goto loc_82412B68;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82412bb4
	goto loc_82412BB4;
loc_82412B68:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82412b88
	if (ctx.cr6.eq) goto loc_82412B88;
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82412b68
	if (ctx.cr6.eq) goto loc_82412B68;
loc_82412B88:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82412b3c
	if (!ctx.cr6.eq) goto loc_82412B3C;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x82412a30
	ctx.lr = 0x82412BAC;
	sub_82412A30(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82412BB4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82412b3c
	if (ctx.cr6.eq) goto loc_82412B3C;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_82412BCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_82412BD4:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,186
	ctx.r7.s64 = 186;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x82412BEC;
	sub_8240E308(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82412bcc
	goto loc_82412BCC;
}

DEFINE_REX_FUNC(sub_824147F8) {
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
	ctx.lr = 0x82414800;
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
	// beq cr6,0x82414838
	if (ctx.cr6.eq) goto loc_82414838;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x82414834;
	sub_82413040(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82414838:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82414854
	if (ctx.cr6.eq) goto loc_82414854;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413dd0
	ctx.lr = 0x82414850;
	sub_82413DD0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82414854:
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
	// bne 0x824148c0
	if (!ctx.cr0.eq) goto loc_824148C0;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x824148c8
	goto loc_824148C8;
loc_824148C0:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_824148C8:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824148e0
	if (ctx.cr6.eq) goto loc_824148E0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x824148E0;
	sub_823DC658(ctx, base);
loc_824148E0:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82414ba8
	if (!ctx.cr6.gt) goto loc_82414BA8;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// rlwinm r25,r30,2,0,29
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
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
	// lfs f0,-13044(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -13044);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,2028(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 2028);
	ctx.f6.f64 = double(temp.f32);
loc_82414944:
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
	// beq cr6,0x82414af4
	if (ctx.cr6.eq) goto loc_82414AF4;
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
loc_82414AF4:
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x82414b04
	if (ctx.cr6.lt) goto loc_82414B04;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82414B04:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82414b1c
	if (!ctx.cr6.gt) goto loc_82414B1C;
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// blt cr6,0x82414b20
	if (ctx.cr6.lt) goto loc_82414B20;
	// li r4,255
	ctx.r4.s64 = 255;
	// b 0x82414b20
	goto loc_82414B20;
loc_82414B1C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82414B20:
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x82414b30
	if (ctx.cr6.lt) goto loc_82414B30;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82414B30:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82414b48
	if (!ctx.cr6.gt) goto loc_82414B48;
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// blt cr6,0x82414b4c
	if (ctx.cr6.lt) goto loc_82414B4C;
	// li r5,255
	ctx.r5.s64 = 255;
	// b 0x82414b4c
	goto loc_82414B4C;
loc_82414B48:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82414B4C:
	// cmpwi cr6,r6,255
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 255, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x82414b5c
	if (ctx.cr6.lt) goto loc_82414B5C;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82414B5C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82414b74
	if (!ctx.cr6.gt) goto loc_82414B74;
	// cmpwi cr6,r6,255
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 255, ctx.xer);
	// blt cr6,0x82414b78
	if (ctx.cr6.lt) goto loc_82414B78;
	// li r6,255
	ctx.r6.s64 = 255;
	// b 0x82414b78
	goto loc_82414B78;
loc_82414B74:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82414B78:
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// stwux r11,r30,r25
	ea = r30.u32 + r25.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r30.u32 = ea;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82414944
	if (ctx.cr6.lt) goto loc_82414944;
loc_82414BA8:
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

DEFINE_REX_FUNC(sub_82420138) {
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
	ctx.lr = 0x82420140;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82420180
	if (!ctx.cr6.eq) goto loc_82420180;
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
	// li r7,2208
	ctx.r7.s64 = 2208;
	// bl 0x8240e308
	ctx.lr = 0x82420180;
	sub_8240E308(ctx, base);
loc_82420180:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e880
	ctx.lr = 0x82420190;
	sub_8240E880(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x824201f8
	if (!ctx.cr6.eq) goto loc_824201F8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824201b4
	if (ctx.cr6.eq) goto loc_824201B4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8240e930
	ctx.lr = 0x824201B4;
	sub_8240E930(ctx, base);
loc_824201B4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824201f0
	if (ctx.cr6.eq) goto loc_824201F0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824201f0
	if (ctx.cr6.eq) goto loc_824201F0;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
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
	// li r6,49
	ctx.r6.s64 = 49;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,196(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 196);
	// bctrl 
	ctx.lr = 0x824201F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824201F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82420254
	goto loc_82420254;
loc_824201F8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82420214
	if (ctx.cr6.eq) goto loc_82420214;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8240e930
	ctx.lr = 0x82420214;
	sub_8240E930(ctx, base);
loc_82420214:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82420250
	if (ctx.cr6.eq) goto loc_82420250;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82420250
	if (ctx.cr6.eq) goto loc_82420250;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
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
	// li r6,49
	ctx.r6.s64 = 49;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,196(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 196);
	// bctrl 
	ctx.lr = 0x82420250;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82420250:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82420254:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824246A8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824246d8
	if (ctx.cr6.eq) goto loc_824246D8;
	// lwz r10,228(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824246d8
	if (ctx.cr0.eq) goto loc_824246D8;
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// stw r10,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// b 0x824246ec
	goto loc_824246EC;
loc_824246D8:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lwz r11,-17044(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -17044);
loc_824246EC:
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// b 0x82423d10
	sub_82423D10(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824269E8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// beq cr6,0x824269fc
	if (ctx.cr6.eq) goto loc_824269FC;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_824269FC:
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r3,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82427100) {
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
	ctx.lr = 0x82427108;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r29,0
	r29.s64 = 0;
	// stw r5,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// addi r11,r11,-5908
	ctx.r11.s64 = ctx.r11.s64 + -5908;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r29,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, r29.u8);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r29,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, r29.u8);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stw r29,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r29.u32);
	// stw r29,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r29.u32);
	// stb r29,28(r3)
	REX_STORE_U8(ctx.r3.u32 + 28, r29.u8);
	// stb r29,29(r3)
	REX_STORE_U8(ctx.r3.u32 + 29, r29.u8);
	// lwz r28,1452(r6)
	r28.u64 = REX_LOAD_U32(ctx.r6.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82412d18
	ctx.lr = 0x8242715C;
	sub_82412D18(ctx, base);
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x82427174
	if (ctx.cr0.eq) goto loc_82427174;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// b 0x82427178
	goto loc_82427178;
loc_82427174:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_82427178:
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r27,1452(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82412d18
	ctx.lr = 0x8242718C;
	sub_82412D18(ctx, base);
	// addic. r28,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r28.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x824271a8
	if (ctx.cr0.eq) goto loc_824271A8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,1452(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 1452);
	// bl 0x82422888
	ctx.lr = 0x824271A4;
	sub_82422888(ctx, base);
	// b 0x824271ac
	goto loc_824271AC;
loc_824271A8:
	// mr r28,r29
	r28.u64 = r29.u64;
loc_824271AC:
	// stw r28,36(r31)
	REX_STORE_U32(r31.u32 + 36, r28.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r27,1452(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82412d18
	ctx.lr = 0x824271C0;
	sub_82412D18(ctx, base);
	// addic. r28,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r28.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x824271dc
	if (ctx.cr0.eq) goto loc_824271DC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,1452(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 1452);
	// bl 0x82422888
	ctx.lr = 0x824271D8;
	sub_82422888(ctx, base);
	// mr r29,r28
	r29.u64 = r28.u64;
loc_824271DC:
	// stw r29,40(r31)
	REX_STORE_U32(r31.u32 + 40, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,1432(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1432);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,1432(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1432);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1432(r30)
	REX_STORE_U32(r30.u32 + 1432, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82429968) {
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
	// lwz r30,1452(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 1452);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82412d18
	ctx.lr = 0x82429990;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// beq 0x824299bc
	if (ctx.cr0.eq) goto loc_824299BC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,143
	ctx.r4.s64 = 143;
	// bl 0x82428f58
	ctx.lr = 0x824299AC;
	sub_82428F58(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-2336
	ctx.r11.s64 = ctx.r11.s64 + -2336;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x824299c0
	goto loc_824299C0;
loc_824299BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824299C0:
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

DEFINE_REX_FUNC(sub_8242BB10) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r9,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8242C7F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8242C7F8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r3,180
	r30.s64 = ctx.r3.s64 + 180;
	// lwz r3,180(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242c868
	if (ctx.cr6.eq) goto loc_8242C868;
	// lwz r4,188(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 188);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8242c834
	if (ctx.cr6.eq) goto loc_8242C834;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242C830;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,188(r31)
	REX_STORE_U32(r31.u32 + 188, r29.u32);
loc_8242C834:
	// lwz r4,184(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 184);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8242c858
	if (ctx.cr6.eq) goto loc_8242C858;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242C854;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,184(r31)
	REX_STORE_U32(r31.u32 + 184, r29.u32);
loc_8242C858:
	// addi r3,r31,604
	ctx.r3.s64 = r31.s64 + 604;
	// bl 0x824347f0
	ctx.lr = 0x8242C860;
	sub_824347F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8242c468
	ctx.lr = 0x8242C868;
	sub_8242C468(ctx, base);
loc_8242C868:
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242c87c
	if (ctx.cr6.eq) goto loc_8242C87C;
	// bl 0x82473600
	ctx.lr = 0x8242C878;
	sub_82473600(ctx, base);
	// stw r29,172(r31)
	REX_STORE_U32(r31.u32 + 172, r29.u32);
loc_8242C87C:
	// stw r29,176(r31)
	REX_STORE_U32(r31.u32 + 176, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8242E970) {
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
	// b 0x8242e9a4
	goto loc_8242E9A4;
loc_8242E98C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8242e9a4
	if (ctx.cr6.eq) goto loc_8242E9A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242e508
	ctx.lr = 0x8242E99C;
	sub_8242E508(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x8242E9A4;
	sub_82473600(ctx, base);
loc_8242E9A4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8242d2c8
	ctx.lr = 0x8242E9AC;
	sub_8242D2C8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8242e98c
	if (!ctx.cr0.eq) goto loc_8242E98C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8242d988
	ctx.lr = 0x8242E9BC;
	sub_8242D988(ctx, base);
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

DEFINE_REX_FUNC(sub_82433C00) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// srawi r9,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 8;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lfs f0,21056(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 21056);
	ctx.f0.f64 = double(temp.f32);
	// std r8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82434548) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r8,32767
	ctx.r8.s64 = 2147418112;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// ori r31,r8,65535
	r31.u64 = ctx.r8.u64 | 65535;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r30,r10,4
	r30.s64 = ctx.r10.s64 + 4;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// bne cr6,0x824345b4
	if (!ctx.cr6.eq) goto loc_824345B4;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82434458
	ctx.lr = 0x824345A0;
	sub_82434458(ctx, base);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r31.s32, ctx.xer);
	// bne cr6,0x824345b0
	if (!ctx.cr6.eq) goto loc_824345B0;
	// li r30,0
	r30.s64 = 0;
	// b 0x824345b4
	goto loc_824345B4;
loc_824345B0:
	// stw r3,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r3.u32);
loc_824345B4:
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

DEFINE_REX_FUNC(sub_824353D0) {
	REX_FUNC_PROLOGUE();
	// lwz r10,92(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lwz r5,120(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824353ec
	if (ctx.cr6.eq) goto loc_824353EC;
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x824353f0
	goto loc_824353F0;
loc_824353EC:
	// lwz r4,100(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
loc_824353F0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,100(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82435808) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82435810;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82435838
	if (ctx.cr6.eq) goto loc_82435838;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r10,76(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
loc_82435838:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8243585c
	if (!ctx.cr6.eq) goto loc_8243585C;
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -4);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243585C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243585C:
	// lwz r3,180(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 180);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82435898
	if (ctx.cr6.eq) goto loc_82435898;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r5,4919
	ctx.r5.s64 = 322371584;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,61441
	ctx.r5.u64 = ctx.r5.u64 | 61441;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82435888;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,180(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 180);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// bl 0x8242c888
	ctx.lr = 0x82435894;
	sub_8242C888(ctx, base);
	// stw r29,180(r31)
	REX_STORE_U32(r31.u32 + 180, r29.u32);
loc_82435898:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82444998
	ctx.lr = 0x824358A0;
	sub_82444998(ctx, base);
	// addi r30,r31,268
	r30.s64 = r31.s64 + 268;
	// b 0x824358b4
	goto loc_824358B4;
loc_824358A8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824358b4
	if (ctx.cr6.eq) goto loc_824358B4;
	// bl 0x82473600
	ctx.lr = 0x824358B4;
	sub_82473600(ctx, base);
loc_824358B4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8242d2c8
	ctx.lr = 0x824358BC;
	sub_8242D2C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824358a8
	if (!ctx.cr0.eq) goto loc_824358A8;
	// lwz r3,264(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824358d8
	if (ctx.cr6.eq) goto loc_824358D8;
	// bl 0x82473600
	ctx.lr = 0x824358D4;
	sub_82473600(ctx, base);
	// stw r29,264(r31)
	REX_STORE_U32(r31.u32 + 264, r29.u32);
loc_824358D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82438088) {
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
	// lwz r3,336(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 336);
	// bl 0x8243c108
	ctx.lr = 0x824380A4;
	sub_8243C108(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82434aa8
	ctx.lr = 0x824380AC;
	sub_82434AA8(ctx, base);
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

DEFINE_REX_FUNC(sub_82438670) {
	REX_FUNC_PROLOGUE();
	// lwz r10,208(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824386c4
	if (ctx.cr6.eq) goto loc_824386C4;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,208(r11)
	REX_STORE_U32(ctx.r11.u32 + 208, ctx.r9.u32);
	// beq cr6,0x824386a0
	if (ctx.cr6.eq) goto loc_824386A0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// b 0x824386a8
	goto loc_824386A8;
loc_824386A0:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,204(r11)
	REX_STORE_U32(ctx.r11.u32 + 204, ctx.r9.u32);
loc_824386A8:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,212(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r10,212(r11)
	REX_STORE_U32(ctx.r11.u32 + 212, ctx.r10.u32);
	// blr 
	return;
loc_824386C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82439570) {
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
	ctx.lr = 0x82439578;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// b 0x824395ac
	goto loc_824395AC;
loc_82439590:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x824395b8
	if (ctx.cr6.eq) goto loc_824395B8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824395c0
	if (ctx.cr6.eq) goto loc_824395C0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_824395AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82439590
	if (!ctx.cr6.eq) goto loc_82439590;
	// b 0x824395c0
	goto loc_824395C0;
loc_824395B8:
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
loc_824395C0:
	// lwz r11,232(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 232);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82439630
	if (ctx.cr6.eq) goto loc_82439630;
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 0);
loc_824395E0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82439604
	if (!ctx.cr6.eq) goto loc_82439604;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// b 0x8243961c
	goto loc_8243961C;
loc_82439604:
	// lwz r8,4(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 4);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8243961c
	if (!ctx.cr6.eq) goto loc_8243961C;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
loc_8243961C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82439630
	if (ctx.cr6.eq) goto loc_82439630;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824395e0
	if (!ctx.cr6.eq) goto loc_824395E0;
loc_82439630:
	// lwz r30,0(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,4(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 4);
	// beq cr6,0x8243965c
	if (ctx.cr6.eq) goto loc_8243965C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x82473600
	ctx.lr = 0x82439650;
	sub_82473600(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r29,124
	ctx.r3.s64 = r29.s64 + 124;
	// bl 0x82438600
	ctx.lr = 0x8243965C;
	sub_82438600(ctx, base);
loc_8243965C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82439680
	if (ctx.cr6.eq) goto loc_82439680;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x82473600
	ctx.lr = 0x82439674;
	sub_82473600(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r29,124
	ctx.r3.s64 = r29.s64 + 124;
	// bl 0x82438600
	ctx.lr = 0x82439680;
	sub_82438600(ctx, base);
loc_82439680:
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r31,4(r28)
	REX_STORE_U32(r28.u32 + 4, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82438600
	ctx.lr = 0x82439694;
	sub_82438600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r29,124
	ctx.r3.s64 = r29.s64 + 124;
	// bl 0x82438e98
	ctx.lr = 0x824396A0;
	sub_82438E98(ctx, base);
	// lwz r11,260(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 260);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bgt cr6,0x824396b0
	if (ctx.cr6.gt) goto loc_824396B0;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_824396B0:
	// stw r11,260(r29)
	REX_STORE_U32(r29.u32 + 260, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8243D850) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x8243D878;
	sub_822D5870(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x8243D88C;
	sub_822D5870(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8243F4C0) {
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
	// bl 0x8243f378
	ctx.lr = 0x8243F4D8;
	sub_8243F378(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242a3f8
	ctx.lr = 0x8243F4E0;
	sub_8242A3F8(ctx, base);
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

DEFINE_REX_FUNC(sub_82440200) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x8243fe20
	sub_8243FE20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824405D0) {
	REX_FUNC_PROLOGUE();
	// lwz r5,228(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// lwz r4,224(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// b 0x8245b368
	sub_8245B368(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82440B10) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,27736
	ctx.r4.s64 = ctx.r11.s64 + 27736;
	// bl 0x8242bb10
	ctx.lr = 0x82440B30;
	sub_8242BB10(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,11492
	ctx.r10.s64 = ctx.r10.s64 + 11492;
	// addi r9,r9,11472
	ctx.r9.s64 = ctx.r9.s64 + 11472;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// stw r9,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// addi r3,r10,7712
	ctx.r3.s64 = ctx.r10.s64 + 7712;
	// stw r11,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r11.u32);
	// stw r11,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r11.u32);
	// stw r11,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r11.u32);
	// stw r11,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r11.u32);
	// stw r11,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r11.u32);
	// stw r11,236(r31)
	REX_STORE_U32(r31.u32 + 236, ctx.r11.u32);
	// stw r11,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r11.u32);
	// bl 0x8242c298
	ctx.lr = 0x82440B80;
	sub_8242C298(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82440B90;
	sub_822D5870(ctx, base);
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

DEFINE_REX_FUNC(sub_82442228) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82441348
	sub_82441348(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82442460) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r11,r11,11664
	ctx.r11.s64 = ctx.r11.s64 + 11664;
	// addi r9,r9,11744
	ctx.r9.s64 = ctx.r9.s64 + 11744;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r7,11640
	ctx.r11.s64 = ctx.r7.s64 + 11640;
	// addi r8,r8,11656
	ctx.r8.s64 = ctx.r8.s64 + 11656;
	// addi r9,r6,11624
	ctx.r9.s64 = ctx.r6.s64 + 11624;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// addi r30,r3,28
	r30.s64 = ctx.r3.s64 + 28;
	// stw r9,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824424CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82442240
	ctx.lr = 0x824424D4;
	sub_82442240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82441ee8
	ctx.lr = 0x824424DC;
	sub_82441EE8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824424F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,340
	ctx.r3.s64 = r31.s64 + 340;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8242d868
	ctx.lr = 0x82442500;
	sub_8242D868(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x8242d988
	ctx.lr = 0x82442508;
	sub_8242D988(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x8242c4b8
	ctx.lr = 0x82442510;
	sub_8242C4B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8242c4b8
	ctx.lr = 0x82442518;
	sub_8242C4B8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,9644
	ctx.r11.s64 = ctx.r11.s64 + 9644;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82445228) {
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
	ctx.lr = 0x82445230;
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
	// beq cr6,0x82445258
	if (ctx.cr6.eq) goto loc_82445258;
	// bl 0x82460ee8
	ctx.lr = 0x82445254;
	sub_82460EE8(ctx, base);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_82445258:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824452d4
	if (ctx.cr6.eq) goto loc_824452D4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824452d4
	if (ctx.cr6.eq) goto loc_824452D4;
	// lhz r11,34(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824452d4
	if (ctx.cr6.eq) goto loc_824452D4;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82445278:
	// mulli r11,r30,1776
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(1776));
	// add. r31,r11,r28
	r31.u64 = ctx.r11.u64 + r28.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x824452bc
	if (ctx.cr0.eq) goto loc_824452BC;
	// lwz r11,424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824452a8
	if (ctx.cr6.eq) goto loc_824452A8;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824452a8
	if (ctx.cr6.eq) goto loc_824452A8;
	// bl 0x82460ee8
	ctx.lr = 0x824452A0;
	sub_82460EE8(ctx, base);
	// lwz r11,424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 424);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
loc_824452A8:
	// lwz r3,424(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824452bc
	if (ctx.cr6.eq) goto loc_824452BC;
	// bl 0x82460ee8
	ctx.lr = 0x824452B8;
	sub_82460EE8(ctx, base);
	// stw r29,424(r31)
	REX_STORE_U32(r31.u32 + 424, r29.u32);
loc_824452BC:
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
	// blt cr6,0x82445278
	if (ctx.cr6.lt) goto loc_82445278;
loc_824452D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8244C838) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8244C848:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8244c848
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244C848;
	// sth r9,0(r4)
	REX_STORE_U16(ctx.r4.u32 + 0, ctx.r9.u16);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// sth r11,2(r4)
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r11.u16);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r8,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r9,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// sth r9,12(r4)
	REX_STORE_U16(ctx.r4.u32 + 12, ctx.r9.u16);
	// lwz r7,12(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// sth r7,14(r4)
	REX_STORE_U16(ctx.r4.u32 + 14, ctx.r7.u16);
	// lwz r5,8(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r5,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r5.u32);
	// sth r9,20(r4)
	REX_STORE_U16(ctx.r4.u32 + 20, ctx.r9.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8244FB18) {
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
	ctx.lr = 0x8244FB20;
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r7,16(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r30,24(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r27,0(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r11,8
	r28.s64 = ctx.r11.s64 + 8;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
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
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f30,21052(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 21052);
	f30.f64 = double(temp.f32);
	// lwz r5,28(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r31,36(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// fsubs f13,f1,f10
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// beq cr6,0x8244fbc0
	if (ctx.cr6.eq) goto loc_8244FBC0;
	// lhz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 0);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f30
	ctx.f9.f64 = double(float(ctx.f10.f64 * f30.f64));
	// stfs f9,0(r28)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
loc_8244FBC0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// lfs f31,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// bge cr6,0x8244fc2c
	if (!ctx.cr6.lt) goto loc_8244FC2C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r4,-4
	ctx.r8.s64 = ctx.r4.s64 + -4;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
loc_8244FBE0:
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8244fc28
	if (!ctx.cr6.lt) goto loc_8244FC28;
	// lfs f12,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// add r31,r9,r31
	r31.u64 = ctx.r9.u64 + r31.u64;
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// fmadds f9,f10,f0,f12
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfsu f9,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x8244fc20
	if (ctx.cr6.lt) goto loc_8244FC20;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8244FC20:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// blt cr6,0x8244fbe0
	if (ctx.cr6.lt) goto loc_8244FBE0;
loc_8244FC28:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_8244FC2C:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subf r5,r10,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r10.u64;
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r3,r11,-2
	ctx.r3.s64 = ctx.r11.s64 + -2;
	// bl 0x8244f6c8
	ctx.lr = 0x8244FC4C;
	sub_8244F6C8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + r31.u64;
	// blt cr6,0x8244fc68
	if (ctx.cr6.lt) goto loc_8244FC68;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_8244FC68:
	// addi r10,r30,-1
	ctx.r10.s64 = r30.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8244fc78
	if (!ctx.cr6.lt) goto loc_8244FC78;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8244FC78:
	// subf r10,r30,r11
	ctx.r10.u64 = ctx.r11.u64 - r30.u64;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// neg r8,r30
	ctx.r8.s64 = static_cast<int64_t>(-r30.u64);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r9,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r9.u32);
	// stw r10,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r10.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8244fd48
	if (!ctx.cr6.lt) goto loc_8244FD48;
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8244fd0c
	if (ctx.cr6.lt) goto loc_8244FD0C;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,-3
	ctx.r7.s64 = ctx.r10.s64 + -3;
	// add r10,r9,r28
	ctx.r10.u64 = ctx.r9.u64 + r28.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r30,2
	ctx.r7.s64 = r30.s64 + 2;
	// addi r6,r30,3
	ctx.r6.s64 = r30.s64 + 3;
	// addi r5,r8,-3
	ctx.r5.s64 = ctx.r8.s64 + -3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
loc_8244FCD0:
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
	// lfsx f13,r4,r28
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r28.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfsx f12,r3,r28
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + r28.u32);
	ctx.f12.f64 = double(temp.f32);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// stfsu f12,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x8244fcd0
	if (ctx.cr6.lt) goto loc_8244FCD0;
loc_8244FD0C:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8244fd48
	if (!ctx.cr6.lt) goto loc_8244FD48;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + r30.u64;
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + r28.u64;
	// addi r7,r9,-4
	ctx.r7.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8244FD3C:
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
	// bdnz 0x8244fd3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244FD3C;
loc_8244FD48:
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8244fe24
	if (ctx.cr6.lt) goto loc_8244FE24;
	// subfic r9,r11,-4
	ctx.xer.ca = ctx.r11.u32 <= 4294967292;
	ctx.r9.u64 = static_cast<uint64_t>(-4) - ctx.r11.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r10,-3
	ctx.r7.s64 = ctx.r10.s64 + -3;
	// add r10,r8,r28
	ctx.r10.u64 = ctx.r8.u64 + r28.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r30,2
	ctx.r7.s64 = r30.s64 + 2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r6,r30,3
	ctx.r6.s64 = r30.s64 + 3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// add r9,r8,r27
	ctx.r9.u64 = ctx.r8.u64 + r27.u64;
loc_8244FD88:
	// add r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lhz r4,6(r9)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 6);
	// add r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lhzu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// std r4,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lhzx r5,r5,r27
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + r27.u32);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhzx r3,r3,r27
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + r27.u32);
	// std r8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// std r3,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r3.u64);
	// lfd f4,104(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f2,f4
	ctx.f2.f64 = double(ctx.f4.s64);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// frsp f0,f2
	ctx.f0.f64 = double(float(ctx.f2.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fmuls f5,f8,f30
	ctx.f5.f64 = double(float(ctx.f8.f64 * f30.f64));
	// stfs f5,8(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmuls f3,f7,f30
	ctx.f3.f64 = double(float(ctx.f7.f64 * f30.f64));
	// stfs f3,4(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * f30.f64));
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmuls f1,f6,f30
	ctx.f1.f64 = double(float(ctx.f6.f64 * f30.f64));
	// stfsu f1,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8244fd88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244FD88;
loc_8244FE24:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8244fe78
	if (!ctx.cr6.lt) goto loc_8244FE78;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r8,r11
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r28
	ctx.r11.u64 = ctx.r9.u64 + r28.u64;
	// add r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 + r27.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8244FE50:
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
	// bdnz 0x8244fe50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244FE50;
loc_8244FE78:
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

DEFINE_REX_FUNC(sub_8245F2C8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245F2F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245F308;
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

DEFINE_REX_FUNC(sub_8245F9E0) {
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
	// lwz r11,212(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,216(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8245fa20
	if (!ctx.cr6.lt) goto loc_8245FA20;
	// bl 0x824d419c
	ctx.lr = 0x8245FA14;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8245fa20
	if (ctx.cr6.eq) goto loc_8245FA20;
	// li r30,1
	r30.s64 = 1;
loc_8245FA20:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245fa34
	if (ctx.cr6.eq) goto loc_8245FA34;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8245faa4
	if (ctx.cr6.eq) goto loc_8245FAA4;
loc_8245FA34:
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8245faa4
	if (ctx.cr6.gt) goto loc_8245FAA4;
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
	// li r4,196
	ctx.r4.s64 = 196;
	// bl 0x8242c3b0
	ctx.lr = 0x8245FA64;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8245faa4
	if (ctx.cr0.eq) goto loc_8245FAA4;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8245FA78:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x8245fa78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8245FA78;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r11,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r11.u32);
loc_8245FAA4:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8245fabc
	if (ctx.cr6.eq) goto loc_8245FABC;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8245fac0
	goto loc_8245FAC0;
loc_8245FABC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8245FAC0:
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

DEFINE_REX_FUNC(sub_82463438) {
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
	ctx.lr = 0x82463440;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lhz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lhz r10,34(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// li r30,0
	r30.s64 = 0;
	// lwz r6,176(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// divwu r7,r7,r11
	ctx.r7.u64 = uint32_t(ctx.r11.u32 ? ctx.r7.u32 / ctx.r11.u32 : 0);
	// lwz r27,740(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 740);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// sth r8,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// mr r25,r30
	r25.u64 = r30.u64;
	// divwu r29,r7,r10
	r29.u64 = uint32_t(ctx.r10.u32 ? ctx.r7.u32 / ctx.r10.u32 : 0);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x824634bc
	if (!ctx.cr6.eq) goto loc_824634BC;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82461fe0
	ctx.lr = 0x8246349C;
	sub_82461FE0(ctx, base);
	// lhz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U16(r24.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x824634bc
	if (!ctx.cr6.lt) goto loc_824634BC;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r8,r11,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r8,0(r24)
	REX_STORE_U16(r24.u32 + 0, ctx.r8.u16);
loc_824634BC:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824634f8
	if (ctx.cr6.eq) goto loc_824634F8;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_824634D0:
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mulli r9,r11,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r7,492(r10)
	REX_STORE_U32(ctx.r10.u32 + 492, ctx.r7.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lhz r6,34(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x824634d0
	if (ctx.cr6.lt) goto loc_824634D0;
loc_824634F8:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82463748
	if (!ctx.cr6.eq) goto loc_82463748;
	// lwz r10,392(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 392);
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// lwz r9,388(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 388);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// blt cr6,0x82463524
	if (ctx.cr6.lt) goto loc_82463524;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_82463524:
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// blt cr6,0x82463530
	if (ctx.cr6.lt) goto loc_82463530;
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_82463530:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82463540
	if (!ctx.cr6.gt) goto loc_82463540;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82463540:
	// lwz r10,460(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 460);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8246355c
	if (ctx.cr6.eq) goto loc_8246355C;
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r9,456(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 456);
	// sraw r27,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	r27.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x8246357c
	goto loc_8246357C;
loc_8246355C:
	// lwz r10,448(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82463578
	if (ctx.cr6.eq) goto loc_82463578;
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r9,456(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 456);
	// slw r27,r10,r9
	r27.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// b 0x8246357c
	goto loc_8246357C;
loc_82463578:
	// lwz r27,256(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 256);
loc_8246357C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82463594
	if (!ctx.cr6.eq) goto loc_82463594;
	// sth r30,0(r24)
	REX_STORE_U16(r24.u32 + 0, r30.u16);
	// b 0x824638b0
	goto loc_824638B0;
loc_82463594:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// lwz r28,0(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8246360c
	if (ctx.cr6.eq) goto loc_8246360C;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r27,r11
	ctx.r10.u64 = r27.u64 + ctx.r11.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r4,r27,1
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1) != 0);
	ctx.r4.s64 = r27.s32 >> 1;
loc_824635BC:
	// lwz r10,468(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 468);
	// mullw r3,r5,r11
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// lwz r8,320(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r6,388(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 388);
	// lwz r9,324(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 324);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// mulli r7,r11,1776
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// subf r10,r10,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r10.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r3,60(r8)
	REX_STORE_U32(ctx.r8.u32 + 60, ctx.r3.u32);
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824635bc
	if (ctx.cr6.lt) goto loc_824635BC;
loc_8246360C:
	// lwz r11,492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82463638
	if (ctx.cr6.eq) goto loc_82463638;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bctrl 
	ctx.lr = 0x82463630;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824638d4
	if (ctx.cr6.lt) goto loc_824638D4;
loc_82463638:
	// lhz r29,34(r31)
	r29.u64 = REX_LOAD_U16(r31.u32 + 34);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// sth r26,34(r31)
	REX_STORE_U16(r31.u32 + 34, r26.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,488(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 488);
	// lhz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82463658;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824638d0
	if (ctx.cr6.lt) goto loc_824638D0;
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r9,388(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 388);
	// sth r29,34(r31)
	REX_STORE_U16(r31.u32 + 34, r29.u16);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r10.u32);
	// sth r11,0(r24)
	REX_STORE_U16(r24.u32 + 0, ctx.r11.u16);
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// lwz r10,388(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 388);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824638b0
	if (ctx.cr6.lt) goto loc_824638B0;
	// lwz r9,392(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 392);
	// subf. r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// srawi r29,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	r29.s64 = ctx.r11.s32 >> 1;
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r10,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r10.u32);
	// stw r8,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r8.u32);
	// blt 0x82463738
	if (ctx.cr0.lt) goto loc_82463738;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82463738
	if (!ctx.cr6.lt) goto loc_82463738;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824638b0
	if (ctx.cr6.eq) goto loc_824638B0;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r28,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	r28.s64 = temp.s64;
	// srawi r27,r27,1
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1) != 0);
	r27.s64 = r27.s32 >> 1;
loc_824636D8:
	// mullw r11,r28,r30
	ctx.r11.s64 = int64_t(r28.s32) * int64_t(r30.s32);
	// lwz r10,388(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 388);
	// lwz r9,468(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 468);
	// lwz r8,324(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 324);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + r27.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r7,r29
	ctx.r3.u64 = r29.u64 - ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822091c8
	ctx.lr = 0x8246371C;
	sub_822091C8(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// lhz r9,34(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x824636d8
	if (ctx.cr6.lt) goto loc_824636D8;
	// b 0x824638b0
	goto loc_824638B0;
loc_82463738:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec4
	return;
loc_82463748:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// rlwinm r7,r29,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r30,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r30.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82463850
	if (ctx.cr6.eq) goto loc_82463850;
	// lwz r5,320(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_82463764:
	// mulli r8,r6,1776
	ctx.r8.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lwz r10,492(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 492);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8246377c
	if (ctx.cr6.lt) goto loc_8246377C;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8246377C:
	// cmplwi cr6,r10,32767
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32767, ctx.xer);
	// blt cr6,0x82463788
	if (ctx.cr6.lt) goto loc_82463788;
	// li r10,32767
	ctx.r10.s64 = 32767;
loc_82463788:
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r9,r27
	REX_STORE_U16(ctx.r9.u32 + r27.u32, ctx.r10.u16);
	// lwz r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lhz r4,210(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 210);
	// rotlwi r10,r4,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r3,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// lwz r5,320(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 320);
	// add r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lwz r11,492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 492);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// blt cr6,0x824637c0
	if (ctx.cr6.lt) goto loc_824637C0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_824637C0:
	// cmplwi cr6,r10,32767
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32767, ctx.xer);
	// bge cr6,0x824637e0
	if (!ctx.cr6.lt) goto loc_824637E0;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x824637d8
	if (!ctx.cr6.lt) goto loc_824637D8;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x824637e4
	goto loc_824637E4;
loc_824637D8:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// b 0x824637e4
	goto loc_824637E4;
loc_824637E0:
	// li r9,32767
	ctx.r9.s64 = 32767;
loc_824637E4:
	// lwz r10,356(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 356);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r4,210(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 210);
	// lwzx r3,r8,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82463808
	if (!ctx.cr6.lt) goto loc_82463808;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82463834
	goto loc_82463834;
loc_82463808:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// blt cr6,0x82463818
	if (ctx.cr6.lt) goto loc_82463818;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82463818:
	// cmplwi cr6,r10,32767
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32767, ctx.xer);
	// bge cr6,0x82463830
	if (!ctx.cr6.lt) goto loc_82463830;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82463834
	if (ctx.cr6.lt) goto loc_82463834;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82463834
	goto loc_82463834;
loc_82463830:
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_82463834:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// lhz r9,34(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 34);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// sth r8,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82463764
	if (ctx.cr6.lt) goto loc_82463764;
loc_82463850:
	// lwz r11,492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8246387c
	if (ctx.cr6.eq) goto loc_8246387C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bctrl 
	ctx.lr = 0x82463874;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824638d4
	if (ctx.cr6.lt) goto loc_824638D4;
loc_8246387C:
	// lhz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 0);
	// mr r25,r30
	r25.u64 = r30.u64;
	// sth r11,0(r24)
	REX_STORE_U16(r24.u32 + 0, ctx.r11.u16);
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824638b0
	if (ctx.cr6.eq) goto loc_824638B0;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8246389C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8246389c
	if (ctx.cr6.lt) goto loc_8246389C;
loc_824638B0:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x824638d4
	if (!ctx.cr6.eq) goto loc_824638D4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec4
	return;
loc_824638D0:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_824638D4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82475A28) {
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
	ctx.lr = 0x82475A30;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,272
	ctx.r4.s64 = 272;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// bl 0x8242c3b0
	ctx.lr = 0x82475A6C;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82475a88
	if (ctx.cr0.eq) goto loc_82475A88;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82475348
	ctx.lr = 0x82475A80;
	sub_82475348(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82475a8c
	goto loc_82475A8C;
loc_82475A88:
	// li r31,0
	r31.s64 = 0;
loc_82475A8C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82475aa0
	if (!ctx.cr6.eq) goto loc_82475AA0;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x82475ae4
	goto loc_82475AE4;
loc_82475AA0:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824754e0
	ctx.lr = 0x82475AB8;
	sub_824754E0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82475ac8
	if (ctx.cr0.lt) goto loc_82475AC8;
	// stw r31,0(r25)
	REX_STORE_U32(r25.u32 + 0, r31.u32);
	// b 0x82475ae4
	goto loc_82475AE4;
loc_82475AC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82475AE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82473600
	ctx.lr = 0x82475AE4;
	sub_82473600(ctx, base);
loc_82475AE4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8247ABF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8247AC00;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,48(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r3,52
	r29.s64 = ctx.r3.s64 + 52;
loc_8247AC10:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8247ac6c
	if (ctx.cr6.lt) goto loc_8247AC6C;
	// beq cr6,0x8247ac98
	if (ctx.cr6.eq) goto loc_8247AC98;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8247ac2c
	if (!ctx.cr6.gt) goto loc_8247AC2C;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_8247AC2C:
	// lwsync 
	// subf r10,r28,r11
	ctx.r10.u64 = ctx.r11.u64 - r28.u64;
loc_8247AC34:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r9,0,r29
	ea = r29.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8247ac58
	if (!ctx.cr6.eq) goto loc_8247AC58;
	// stwcx. r10,0,r29
	ea = r29.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8247ac34
	if (!ctx.cr0.eq) goto loc_8247AC34;
	// b 0x8247ac60
	goto loc_8247AC60;
loc_8247AC58:
	// stwcx. r9,0,r29
	ea = r29.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8247AC60:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8247ac10
	if (!ctx.cr6.eq) goto loc_8247AC10;
loc_8247AC6C:
	// rlwinm r30,r28,4,0,27
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r6,r31,60
	ctx.r6.s64 = r31.s64 + 60;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// bl 0x8247aa28
	ctx.lr = 0x8247AC84;
	sub_8247AA28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8247aca4
	if (!ctx.cr6.eq) goto loc_8247ACA4;
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_8247AC98:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_8247ACA4:
	// addi r11,r31,56
	ctx.r11.s64 = r31.s64 + 56;
loc_8247ACA8:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r28,r10
	ctx.r9.u64 = r28.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8247aca8
	if (!ctx.cr0.eq) goto loc_8247ACA8;
	// addi r7,r28,-1
	ctx.r7.s64 = r28.s64 + -1;
	// add r9,r30,r3
	ctx.r9.u64 = r30.u64 + ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8247ad40
	if (ctx.cr6.eq) goto loc_8247AD40;
loc_8247ACD8:
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// rldicr r8,r9,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
loc_8247ACE0:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwsync 
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrldi r10,r5,33
	ctx.r10.u64 = ctx.r5.u64 & 0x7FFFFFFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_8247AD00:
	// mfmsr r3
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r3.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r4,0,r31
	ea = r31.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r4.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r4,r11
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8247ad24
	if (!ctx.cr6.eq) goto loc_8247AD24;
	// stdcx. r10,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r10.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8247ad00
	if (!ctx.cr0.eq) goto loc_8247AD00;
	// b 0x8247ad2c
	goto loc_8247AD2C;
loc_8247AD24:
	// stdcx. r4,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8247AD2C:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpd cr6,r4,r11
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8247ace0
	if (!ctx.cr6.eq) goto loc_8247ACE0;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8247acd8
	if (!ctx.cr0.eq) goto loc_8247ACD8;
loc_8247AD40:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r30,r9,-16
	r30.s64 = ctx.r9.s64 + -16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247ad9c
	if (ctx.cr6.eq) goto loc_8247AD9C;
	// addi r11,r31,24
	ctx.r11.s64 = r31.s64 + 24;
loc_8247AD54:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r28,r10
	ctx.r9.u64 = r28.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8247ad54
	if (!ctx.cr0.eq) goto loc_8247AD54;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bge cr6,0x8247ad9c
	if (!ctx.cr6.lt) goto loc_8247AD9C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8247ad9c
	if (!ctx.cr6.gt) goto loc_8247AD9C;
	// not r4,r10
	ctx.r4.u64 = ~ctx.r10.u64;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x8247ad94
	if (!ctx.cr6.gt) goto loc_8247AD94;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
loc_8247AD94:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x8247c540
	ctx.lr = 0x8247AD9C;
	sub_8247C540(ctx, base);
loc_8247AD9C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_824903B8) {
	REX_FUNC_PROLOGUE();
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
	// subf r9,r5,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r5.u64;
	// xor r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// srawi r11,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 31;
	// srawi r10,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 31;
	// and r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 & ctx.r4.u64;
	// or r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 | ctx.r10.u64;
	// and r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 & ctx.r3.u64;
	// andc r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 & ~ctx.r6.u64;
	// or r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 | ctx.r4.u64;
	// or r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 | ctx.r7.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82490698) {
	REX_FUNC_PROLOGUE();
	// lwz r10,1368(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1368);
	// srawi r9,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 16;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r10,256
	ctx.r9.s64 = ctx.r10.s64 + 256;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// addi r6,r5,64
	ctx.r6.s64 = ctx.r5.s64 + 64;
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// cmplwi cr6,r3,128
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 128, ctx.xer);
	// blt cr6,0x82490788
	if (ctx.cr6.lt) goto loc_82490788;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// blt cr6,0x82490714
	if (ctx.cr6.lt) goto loc_82490714;
	// lhz r8,62(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 62);
	// neg r4,r8
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// subf r7,r4,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r4.u64;
	// subf r3,r9,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r9.u64;
	// xor r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// srawi r8,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 31;
	// srawi r7,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 31;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// and r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 & ctx.r4.u64;
	// andc r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// or r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 | ctx.r7.u64;
	// or r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 | ctx.r10.u64;
	// b 0x82490724
	goto loc_82490724;
loc_82490714:
	// lwz r10,1484(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1484);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
loc_82490724:
	// cmplwi cr6,r6,128
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 128, ctx.xer);
	// blt cr6,0x82490770
	if (ctx.cr6.lt) goto loc_82490770;
	// lhz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 64);
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// neg r7,r10
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// subf r6,r11,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r5,r7,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r7.u64;
	// xor r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// srawi r10,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 31;
	// srawi r9,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 31;
	// and r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 & ctx.r8.u64;
	// or r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 | ctx.r9.u64;
	// and r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 & ctx.r7.u64;
	// andc r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// or r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 | ctx.r5.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// blr 
	return;
loc_82490770:
	// lwz r11,1480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1480);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// blr 
	return;
loc_82490788:
	// lwz r10,1484(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1484);
	// rlwinm r7,r6,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,1480(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 1480);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// lhzx r5,r8,r7
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824A4AF8) {
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
	ctx.lr = 0x824A4B00;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// lwz r9,3776(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// lwz r10,220(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// stw r8,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r8.u32);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// lwz r5,3784(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 3784);
	// lwz r10,3792(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3792);
	// li r24,0
	r24.s64 = 0;
	// lwz r8,3780(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3780);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r9,3796(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 3796);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r31,272(r19)
	r31.u64 = REX_LOAD_U32(r19.u32 + 272);
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r28,1312(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 1312);
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r26,3812(r19)
	r26.u64 = REX_LOAD_U32(r19.u32 + 3812);
	// add r27,r9,r11
	r27.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r20,r25,20
	r20.s64 = r25.s64 + 20;
	// bne cr6,0x824a4b88
	if (!ctx.cr6.eq) goto loc_824A4B88;
	// lwz r11,22264(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 22264);
	// stw r11,20(r25)
	REX_STORE_U32(r25.u32 + 20, ctx.r11.u32);
	// lwz r10,22276(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 22276);
	// stw r10,24(r25)
	REX_STORE_U32(r25.u32 + 24, ctx.r10.u32);
	// lwz r9,22268(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 22268);
	// stw r9,28(r25)
	REX_STORE_U32(r25.u32 + 28, ctx.r9.u32);
	// lwz r8,22280(r19)
	ctx.r8.u64 = REX_LOAD_U32(r19.u32 + 22280);
	// stw r8,32(r25)
	REX_STORE_U32(r25.u32 + 32, ctx.r8.u32);
	// b 0x824a4bb4
	goto loc_824A4BB4;
loc_824A4B88:
	// addi r11,r6,92
	ctx.r11.s64 = ctx.r6.s64 + 92;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// lwzx r9,r11,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// stw r9,20(r25)
	REX_STORE_U32(r25.u32 + 20, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,24(r25)
	REX_STORE_U32(r25.u32 + 24, ctx.r8.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,28(r25)
	REX_STORE_U32(r25.u32 + 28, ctx.r6.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,32(r25)
	REX_STORE_U32(r25.u32 + 32, ctx.r11.u32);
loc_824A4BB4:
	// lwz r11,616(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 616);
	// cmplw cr6,r7,r23
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r23.u32, ctx.xer);
	// stw r7,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// stw r11,36(r25)
	REX_STORE_U32(r25.u32 + 36, ctx.r11.u32);
	// lwz r10,428(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 428);
	// stw r10,40(r25)
	REX_STORE_U32(r25.u32 + 40, ctx.r10.u32);
	// lwz r9,1164(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 1164);
	// stw r9,44(r25)
	REX_STORE_U32(r25.u32 + 44, ctx.r9.u32);
	// lhz r8,76(r30)
	ctx.r8.u64 = REX_LOAD_U16(r30.u32 + 76);
	// lhz r9,74(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 74);
	// lhz r6,50(r30)
	ctx.r6.u64 = REX_LOAD_U16(r30.u32 + 50);
	// rlwinm r21,r6,31,1,31
	r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r10,r21,r7
	ctx.r10.s64 = int64_t(r21.s32) * int64_t(ctx.r7.s32);
	// stw r21,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r21.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r6,r9,4
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// add r23,r10,r11
	r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r11,r8,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// mullw r9,r6,r7
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// rlwinm r8,r23,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// add r4,r9,r26
	ctx.r4.u64 = ctx.r9.u64 + r26.u64;
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// add r8,r10,r28
	ctx.r8.u64 = ctx.r10.u64 + r28.u64;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bge cr6,0x824a5138
	if (!ctx.cr6.lt) goto loc_824A5138;
	// li r15,16
	r15.s64 = 16;
	// li r14,32
	r14.s64 = 32;
	// li r16,96
	r16.s64 = 96;
	// li r17,112
	r17.s64 = 112;
loc_824A4C5C:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r18,0
	r18.s64 = 0;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r27,88(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r23,84(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r22,92(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// beq cr6,0x824a50c4
	if (ctx.cr6.eq) goto loc_824A50C4;
loc_824A4C8C:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// stw r9,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r6,0,21,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r8,1024
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1024, ctx.xer);
	// beq cr6,0x824a507c
	if (ctx.cr6.eq) goto loc_824A507C;
	// rldicl r10,r11,8,56
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFF;
	// lwz r7,388(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 388);
	// rldicl r9,r11,16,48
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFF;
	// stw r27,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r27.u32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// stw r23,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r23.u32);
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// lhz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 76);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r22,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r22.u32);
	// rlwinm r6,r6,0,15,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10000;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r8,r27,8
	ctx.r8.s64 = r27.s64 + 8;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// clrlwi r21,r9,26
	r21.u64 = ctx.r9.u32 & 0x3F;
	// stw r8,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// add r29,r10,r7
	r29.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lhz r10,74(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 74);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824a4d0c
	if (ctx.cr6.eq) goto loc_824A4D0C;
	// add r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 + r27.u64;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// b 0x824a4d14
	goto loc_824A4D14;
loc_824A4D0C:
	// rotlwi r9,r10,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
loc_824A4D14:
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
	// stw r9,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r7,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// lis r7,-32162
	ctx.r7.s64 = -2107768832;
	// lwz r8,-28604(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + -28604);
	// cmplwi cr6,r8,9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 9, ctx.xer);
	// bgt cr6,0x824a4e74
	if (ctx.cr6.gt) goto loc_824A4E74;
	// lis r12,-32182
	ctx.r12.s64 = -2109079552;
	// rlwinm r0,r8,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,19788
	ctx.r12.s64 = ctx.r12.s64 + 19788;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r8.u32) {
	case 0:
		goto loc_824A4D74;
	case 1:
		goto loc_824A4DC8;
	case 2:
		goto loc_824A4E1C;
	case 3:
		goto loc_824A4E24;
	case 4:
		goto loc_824A4E74;
	case 5:
		goto loc_824A4E74;
	case 6:
		goto loc_824A4E74;
	case 7:
		goto loc_824A4E74;
	case 8:
		goto loc_824A4D74;
	case 9:
		goto loc_824A4DC8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_824A4D74:
	// addi r11,r27,128
	ctx.r11.s64 = r27.s64 + 128;
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
	// b 0x824a4e74
	goto loc_824A4E74;
loc_824A4DC8:
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
	// b 0x824a4e74
	goto loc_824A4E74;
loc_824A4E1C:
	// addi r10,r23,128
	ctx.r10.s64 = r23.s64 + 128;
	// b 0x824a4e28
	goto loc_824A4E28;
loc_824A4E24:
	// addi r10,r22,128
	ctx.r10.s64 = r22.s64 + 128;
loc_824A4E28:
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
loc_824A4E74:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// li r28,0
	r28.s64 = 0;
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
loc_824A4E90:
	// clrlwi r10,r21,31
	ctx.r10.u64 = r21.u32 & 0x1;
	// rldicl r9,r26,20,44
	ctx.r9.u64 = __builtin_rotateleft64(r26.u64, 20) & 0xFFFFF;
	// srawi r24,r28,2
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3) != 0);
	r24.s64 = r28.s32 >> 2;
	// clrlwi r11,r9,29
	ctx.r11.u64 = ctx.r9.u32 & 0x7;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824a5060
	if (ctx.cr6.eq) goto loc_824A5060;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a4ff4
	if (!ctx.cr6.eq) goto loc_824A4FF4;
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// addi r5,r30,168
	ctx.r5.s64 = r30.s64 + 168;
	// lwz r4,444(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 444);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r31,40(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 40);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// stw r3,24(r25)
	REX_STORE_U32(r25.u32 + 24, ctx.r3.u32);
	// dcbzl r0,r31
	ea = (r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x824a4f04
	if (ctx.cr6.lt) goto loc_824A4F04;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235f5b0
	ctx.lr = 0x824A4EFC;
	sub_8235F5B0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x824a4f6c
	goto loc_824A4F6C;
loc_824A4F04:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x824a4f68
	if (!ctx.cr6.gt) goto loc_824A4F68;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824A4F10:
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
	// bdnz 0x824a4f10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A4F10;
	// li r14,32
	r14.s64 = 32;
	// li r15,16
	r15.s64 = 16;
loc_824A4F68:
	// stw r11,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r11.u32);
loc_824A4F6C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824a4fe4
	if (!ctx.cr6.eq) goto loc_824A4FE4;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// li r7,48
	ctx.r7.s64 = 48;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// li r5,64
	ctx.r5.s64 = 64;
	// srawi r10,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 1;
	// li r4,80
	ctx.r4.s64 = 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r10,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
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
	// stvx128 v0,r31,r7
	ea = (r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r4
	ea = (r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r16
	ea = (r31.u32 + r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r17
	ea = (r31.u32 + r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x824a5038
	goto loc_824A5038;
loc_824A4FE4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a5c10
	ctx.lr = 0x824A4FF0;
	sub_824A5C10(ctx, base);
	// b 0x824a5038
	goto loc_824A5038;
loc_824A4FF4:
	// rldicl r10,r26,24,40
	ctx.r10.u64 = __builtin_rotateleft64(r26.u64, 24) & 0xFFFFFF;
	// lwz r7,36(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 36);
	// rlwinm r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// clrlwi r5,r10,28
	ctx.r5.u64 = ctx.r10.u32 & 0xF;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// add r9,r5,r30
	ctx.r9.u64 = ctx.r5.u64 + r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
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
	ctx.lr = 0x824A5038;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824A5038:
	// lwz r11,960(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 960);
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwzx r5,r10,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r4,r8,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bctrl 
	ctx.lr = 0x824A5060;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824A5060:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// rlwinm r21,r21,31,1,31
	r21.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 31) & 0x7FFFFFFF;
	// rldicr r26,r26,8,55
	r26.u64 = __builtin_rotateleft64(r26.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(r28.s32, 6, ctx.xer);
	// blt cr6,0x824a4e90
	if (ctx.cr6.lt) goto loc_824A4E90;
	// lwz r21,128(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824A507C:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r8,r10,24
	ctx.r8.s64 = ctx.r10.s64 + 24;
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// lwz r7,116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// addi r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 8;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// lwz r8,120(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// stw r5,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// addi r23,r23,8
	r23.s64 = r23.s64 + 8;
	// stw r4,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// addi r22,r22,8
	r22.s64 = r22.s64 + 8;
	// cmplw cr6,r18,r21
	ctx.cr6.compare<uint32_t>(r18.u32, r21.u32, ctx.xer);
	// blt cr6,0x824a4c8c
	if (ctx.cr6.lt) goto loc_824A4C8C;
loc_824A50C4:
	// lwz r11,232(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 232);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,228(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 228);
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r7,r6,r10
	ctx.r7.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lwz r31,104(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r10,396(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// blt cr6,0x824a4c5c
	if (ctx.cr6.lt) goto loc_824A4C5C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x822d4ea0
	return;
loc_824A5138:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_824B0B18) {
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
	ctx.lr = 0x824B0B20;
	// li r11,48
	ctx.r11.s64 = 48;
	// vspltish v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x1)));
	// li r10,96
	ctx.r10.s64 = 96;
	// lvx128 v12,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,144
	ctx.r9.s64 = 144;
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// li r8,64
	ctx.r8.s64 = 64;
	// li r31,16
	r31.s64 = 16;
	// vslh v8,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v11,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,160
	r30.s64 = 160;
	// li r11,112
	ctx.r11.s64 = 112;
	// lvx128 v10,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v7,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v6,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v63,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v5,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v62,r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v4,v11,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// lvx128 v60,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v3,v12,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 14));
	// vaddshs v2,v8,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsldoi128 v31,v9,v61,2
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vaddshs v30,v7,v11
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi128 v29,v10,v60,2
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 14));
	// vaddshs v28,v6,v10
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// addi r31,r1,-64
	r31.s64 = ctx.r1.s64 + -64;
	// vaddshs v27,v5,v9
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// addi r30,r1,-48
	r30.s64 = ctx.r1.s64 + -48;
	// vaddshs v26,v2,v3
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// vaddshs v25,v30,v4
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vaddshs v24,v28,v29
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// vaddshs v23,v27,v31
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// add r11,r8,r5
	ctx.r11.u64 = ctx.r8.u64 + ctx.r5.u64;
	// vaddshs v22,v26,v1
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v21,v25,v1
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
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
	// stvx128 v59,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,-56(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// lwz r31,-64(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stvx128 v58,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r30,-48(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r29,-40(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// stw r31,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r31.u32);
	// stwx r6,r4,r5
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r6.u32);
	// stwx r30,r8,r5
	REX_STORE_U32(ctx.r8.u32 + ctx.r5.u32, r30.u32);
	// stwx r29,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, r29.u32);
	// bne cr6,0x824b0c34
	if (!ctx.cr6.eq) goto loc_824B0C34;
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
loc_824B0C34:
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bne cr6,0x824b0d40
	if (!ctx.cr6.eq) goto loc_824B0D40;
	// li r10,192
	ctx.r10.s64 = 192;
	// li r9,240
	ctx.r9.s64 = 240;
	// li r7,288
	ctx.r7.s64 = 288;
	// li r6,336
	ctx.r6.s64 = 336;
	// li r31,256
	r31.s64 = 256;
	// lvx128 v12,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,208
	r30.s64 = 208;
	// lvx128 v11,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,352
	ctx.r10.s64 = 352;
	// li r9,304
	ctx.r9.s64 = 304;
	// lvx128 v10,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v8,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v7,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v57,r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v6,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v56,r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v5,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v55,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v4,v12,v56,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), 14));
	// vsldoi128 v3,v11,v57,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), 14));
	// vaddshs v2,v8,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v31,v7,v11
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi128 v30,v10,v54,2
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), 14));
	// vsldoi128 v29,v9,v55,2
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), 14));
	// vaddshs v28,v6,v10
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v27,v5,v9
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// addi r7,r1,-64
	ctx.r7.s64 = ctx.r1.s64 + -64;
	// vaddshs v26,v2,v4
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// addi r6,r1,-48
	ctx.r6.s64 = ctx.r1.s64 + -48;
	// vaddshs v25,v31,v3
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// vaddshs v24,v28,v30
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v23,v27,v29
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
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
	// lwz r29,-36(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// lwz r3,-60(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
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
loc_824B0D40:
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_824B7F98) {
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
	ctx.lr = 0x824B7FA0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,24(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r4,620(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 620);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lbz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r28,r3,168
	r28.s64 = ctx.r3.s64 + 168;
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r30,40(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r5,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r30
	ea = (r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x824b8008
	if (ctx.cr6.lt) goto loc_824B8008;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x8235f5b0
	ctx.lr = 0x824B8000;
	sub_8235F5B0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x824b8068
	goto loc_824B8068;
loc_824B8008:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x824b8064
	if (!ctx.cr6.gt) goto loc_824B8064;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824B8014:
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
	// lbzx r25,r28,r3
	r25.u64 = REX_LOAD_U8(r28.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r25,r9
	ctx.r9.u64 = r25.u64 | ctx.r9.u64;
	// sthx r8,r3,r30
	REX_STORE_U16(ctx.r3.u32 + r30.u32, ctx.r8.u16);
	// bdnz 0x824b8014
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B8014;
loc_824B8064:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_824B8068:
	// li r23,16
	r23.s64 = 16;
	// li r24,32
	r24.s64 = 32;
	// li r25,48
	r25.s64 = 48;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824b80c8
	if (!ctx.cr6.eq) goto loc_824B80C8;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// srawi r10,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v13,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// stvx128 v13,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r26,r23
	ea = (r26.u32 + r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r26,r24
	ea = (r26.u32 + r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r26,r25
	ea = (r26.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x824b80d4
	goto loc_824B80D4;
loc_824B80C8:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a6278
	ctx.lr = 0x824B80D4;
	sub_824A6278(ctx, base);
loc_824B80D4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,620(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 620);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r30,40(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r5,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r30
	ea = (r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x824b8128
	if (ctx.cr6.lt) goto loc_824B8128;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8235f5b0
	ctx.lr = 0x824B8120;
	sub_8235F5B0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x824b8188
	goto loc_824B8188;
loc_824B8128:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x824b8184
	if (!ctx.cr6.gt) goto loc_824B8184;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824B8134:
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
	// lbzx r29,r28,r3
	r29.u64 = REX_LOAD_U8(r28.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r29,r9
	ctx.r9.u64 = r29.u64 | ctx.r9.u64;
	// sthx r8,r3,r30
	REX_STORE_U16(ctx.r3.u32 + r30.u32, ctx.r8.u16);
	// bdnz 0x824b8134
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B8134;
loc_824B8184:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_824B8188:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824b81e4
	if (!ctx.cr6.eq) goto loc_824B81E4;
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 0);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r11,r26,64
	ctx.r11.s64 = r26.s64 + 64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// srawi r9,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// lvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v13,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r23
	ea = (ctx.r11.u32 + r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r24
	ea = (ctx.r11.u32 + r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r25
	ea = (ctx.r11.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec4
	return;
loc_824B81E4:
	// addi r4,r26,64
	ctx.r4.s64 = r26.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a6278
	ctx.lr = 0x824B81F0;
	sub_824A6278(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_824D2148) {
	REX_FUNC_PROLOGUE();
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-20504
	ctx.r11.s64 = ctx.r11.s64 + -20504;
	// lis r8,-32176
	ctx.r8.s64 = -2108686336;
	// lwz r9,-29316(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -29316);
	// lis r6,512
	ctx.r6.s64 = 33554432;
	// lis r5,512
	ctx.r5.s64 = 33554432;
	// addi r7,r8,-28856
	ctx.r7.s64 = ctx.r8.s64 + -28856;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r6,r6,208
	ctx.r6.u64 = ctx.r6.u64 | 208;
	// stw r9,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r9.u32);
	// ori r5,r5,209
	ctx.r5.u64 = ctx.r5.u64 | 209;
	// sth r10,114(r11)
	REX_STORE_U16(ctx.r11.u32 + 114, ctx.r10.u16);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
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
	// stw r8,132(r11)
	REX_STORE_U32(ctx.r11.u32 + 132, ctx.r8.u32);
	// stw r7,136(r11)
	REX_STORE_U32(ctx.r11.u32 + 136, ctx.r7.u32);
	// stw r6,140(r11)
	REX_STORE_U32(ctx.r11.u32 + 140, ctx.r6.u32);
	// stw r5,144(r11)
	REX_STORE_U32(ctx.r11.u32 + 144, ctx.r5.u32);
	// stw r10,148(r11)
	REX_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D2E58) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-17992
	ctx.r11.s64 = ctx.r11.s64 + -17992;
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// addi r9,r9,11184
	ctx.r9.s64 = ctx.r9.s64 + 11184;
	// lfs f0,-24832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24832);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f11,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f7,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f9,20(r9)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f8,24(r9)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f7,28(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f6,32(r9)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f5,36(r9)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f3,44(r9)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D3BC8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,26004
	ctx.r3.s64 = ctx.r11.s64 + 26004;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3CD8) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D3D20) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,24432
	ctx.r3.s64 = ctx.r11.s64 + 24432;
	// b 0x8224dde0
	sub_8224DDE0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3E78) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,31424
	ctx.r3.s64 = ctx.r11.s64 + 31424;
	// b 0x8228e888
	sub_8228E888(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D4010) {
	REX_FUNC_PROLOGUE();
	// .long 0x200025a
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4170) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100df
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D42F0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010197
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4470) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100b4
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D45F0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101b1
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4770) {
	REX_FUNC_PROLOGUE();
	// .long 0x200004b
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D48F0) {
	REX_FUNC_PROLOGUE();
	// .long 0x200030e
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4A70) {
	REX_FUNC_PROLOGUE();
	// .long 0x201012f
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4BF0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101f5
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

