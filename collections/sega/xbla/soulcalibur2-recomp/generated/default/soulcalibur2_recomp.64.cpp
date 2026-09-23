#include "soulcalibur2_funcs.64.h"

DEFINE_REX_FUNC(sub_820E2590) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,2324
	ctx.r11.s64 = ctx.r11.s64 + 2324;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x820E25BC;
	sub_821E2FD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e25cc
	if (ctx.cr0.eq) goto loc_820E25CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x820E25CC;
	sub_822C80A8(ctx, base);
loc_820E25CC:
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

DEFINE_REX_FUNC(sub_820E7090) {
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
	ctx.lr = 0x820E7098;
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
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
	// stwu r1,-8496(r1)
	ea = -8496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r5,8532(r1)
	REX_STORE_U32(ctx.r1.u32 + 8532, ctx.r5.u32);
	// addi r10,r1,8536
	ctx.r10.s64 = ctx.r1.s64 + 8536;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
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
	ctx.lr = 0x820E70EC;
	sub_822D5598(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x820e6998
	ctx.lr = 0x820E70F8;
	sub_820E6998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x820e7170
	if (!ctx.cr0.gt) goto loc_820E7170;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r27,-32177
	r27.s64 = -2108751872;
	// lfs f30,2000(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	f30.f64 = double(temp.f32);
	// addi r28,r11,15980
	r28.s64 = ctx.r11.s64 + 15980;
loc_820E7120:
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
	ctx.lr = 0x820E7134;
	sub_821EB1A0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f1,f0,f30,f29
	ctx.f1.f64 = double(float(-std::fma(ctx.f0.f64, f30.f64, -f29.f64)));
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
	ctx.lr = 0x820E7158;
	sub_821EACB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821eacb0
	ctx.lr = 0x820E7160;
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
	// bne 0x820e7120
	if (!ctx.cr0.eq) goto loc_820E7120;
loc_820E7170:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r1,8496
	ctx.r1.s64 = ctx.r1.s64 + 8496;
	// lfd f29,-72(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_820EE610) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e7c
	ctx.lr = 0x820EE618;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f2c
	ctx.lr = 0x820EE620;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r28,0
	r28.s64 = 0;
	// addi r30,r11,-28232
	r30.s64 = ctx.r11.s64 + -28232;
	// stw r28,484(r3)
	REX_STORE_U32(ctx.r3.u32 + 484, r28.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r28,488(r3)
	REX_STORE_U32(ctx.r3.u32 + 488, r28.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,492(r31)
	REX_STORE_U32(r31.u32 + 492, r28.u32);
	// lwz r11,-28232(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -28232);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EE658;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x82200ad0
	ctx.lr = 0x820EE660;
	sub_82200AD0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82200ae0
	ctx.lr = 0x820EE668;
	sub_82200AE0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f31,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82200ac8
	ctx.lr = 0x820EE67C;
	sub_82200AC8(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x820ee6a0
	if (!ctx.cr6.eq) goto loc_820EE6A0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200ac8
	ctx.lr = 0x820EE6A0;
	sub_82200AC8(ctx, base);
loc_820EE6A0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82202540
	ctx.lr = 0x820EE6AC;
	sub_82202540(ctx, base);
	// lwz r27,632(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822009c8
	ctx.lr = 0x820EE6B8;
	sub_822009C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x822009d0
	ctx.lr = 0x820EE6C4;
	sub_822009D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82200a38
	ctx.lr = 0x820EE6D0;
	sub_82200A38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// bl 0x82200a08
	ctx.lr = 0x820EE6DC;
	sub_82200A08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// bl 0x82200a10
	ctx.lr = 0x820EE6E8;
	sub_82200A10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	f26.f64 = ctx.f1.f64;
	// bl 0x82200a18
	ctx.lr = 0x820EE6F4;
	sub_82200A18(ctx, base);
	// lwz r11,532(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 532);
	// li r29,1
	r29.s64 = 1;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	f25.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ee720
	if (ctx.cr6.eq) goto loc_820EE720;
	// lwz r10,632(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 632);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820ee71c
	if (!ctx.cr6.eq) goto loc_820EE71C;
	// stw r28,496(r31)
	REX_STORE_U32(r31.u32 + 496, r28.u32);
	// b 0x820ee720
	goto loc_820EE720;
loc_820EE71C:
	// stw r29,496(r31)
	REX_STORE_U32(r31.u32 + 496, r29.u32);
loc_820EE720:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// stfs f30,420(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 420, temp.u32);
	// mr r30,r28
	r30.u64 = r28.u64;
	// stfs f31,424(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 424, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f29,428(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 428, temp.u32);
	// stfs f31,472(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 472, temp.u32);
	// lfs f28,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f28.f64 = double(temp.f32);
	// stfs f28,468(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 468, temp.u32);
	// stfs f28,476(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 476, temp.u32);
	// bne cr6,0x820ee754
	if (!ctx.cr6.eq) goto loc_820EE754;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_820EE754:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r25,4
	r25.s64 = 4;
	// beq 0x820ee85c
	if (ctx.cr0.eq) goto loc_820EE85C;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// beq 0x820ee774
	if (ctx.cr0.eq) goto loc_820EE774;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
loc_820EE774:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820ee78c
	if (ctx.cr0.eq) goto loc_820EE78C;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stwx r29,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r29.u32);
loc_820EE78C:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820ee7a8
	if (ctx.cr0.eq) goto loc_820EE7A8;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_820EE7A8:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820ee7c4
	if (ctx.cr0.eq) goto loc_820EE7C4;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_820EE7C4:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820ee7dc
	if (ctx.cr0.eq) goto loc_820EE7DC;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stwx r25,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r25.u32);
loc_820EE7DC:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820ee7f8
	if (ctx.cr0.eq) goto loc_820EE7F8;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_820EE7F8:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820ee814
	if (ctx.cr0.eq) goto loc_820EE814;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_820EE814:
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820ee830
	if (ctx.cr0.eq) goto loc_820EE830;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_820EE830:
	// bl 0x821ff168
	ctx.lr = 0x820EE834;
	sub_821FF168(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// lis r8,-32170
	ctx.r8.s64 = -2108293120;
	// addi r9,r9,1000
	ctx.r9.s64 = ctx.r9.s64 + 1000;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,-28240(r8)
	REX_STORE_U32(ctx.r8.u32 + -28240, ctx.r11.u32);
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x820eeb40
	goto loc_820EEB40;
loc_820EE85C:
	// rlwinm. r11,r11,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820ee8b4
	if (!ctx.cr0.eq) goto loc_820EE8B4;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821ff168
	ctx.lr = 0x820EE86C;
	sub_821FF168(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x820ee8a8
	if (ctx.cr6.lt) goto loc_820EE8A8;
	// beq cr6,0x820ee89c
	if (ctx.cr6.eq) goto loc_820EE89C;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x820ee890
	if (ctx.cr6.lt) goto loc_820EE890;
	// bne cr6,0x820ee8b4
	if (!ctx.cr6.eq) goto loc_820EE8B4;
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// b 0x820ee8b0
	goto loc_820EE8B0;
loc_820EE890:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// b 0x820ee8b0
	goto loc_820EE8B0;
loc_820EE89C:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x820ee8b0
	goto loc_820EE8B0;
loc_820EE8A8:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_820EE8B0:
	// stw r11,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r11.u32);
loc_820EE8B4:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// rlwinm. r11,r11,0,23,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820ee910
	if (!ctx.cr0.eq) goto loc_820EE910;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821ff168
	ctx.lr = 0x820EE8C8;
	sub_821FF168(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x820ee904
	if (ctx.cr6.lt) goto loc_820EE904;
	// beq cr6,0x820ee8f8
	if (ctx.cr6.eq) goto loc_820EE8F8;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x820ee8ec
	if (ctx.cr6.lt) goto loc_820EE8EC;
	// bne cr6,0x820ee910
	if (!ctx.cr6.eq) goto loc_820EE910;
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// b 0x820ee90c
	goto loc_820EE90C;
loc_820EE8EC:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// b 0x820ee90c
	goto loc_820EE90C;
loc_820EE8F8:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// b 0x820ee90c
	goto loc_820EE90C;
loc_820EE904:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
loc_820EE90C:
	// stw r11,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r11.u32);
loc_820EE910:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// rlwinm. r11,r11,0,20,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820ee95c
	if (!ctx.cr0.eq) goto loc_820EE95C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821ff168
	ctx.lr = 0x820EE924;
	sub_821FF168(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x820ee950
	if (ctx.cr6.lt) goto loc_820EE950;
	// beq cr6,0x820ee944
	if (ctx.cr6.eq) goto loc_820EE944;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x820ee95c
	if (!ctx.cr6.lt) goto loc_820EE95C;
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// b 0x820ee958
	goto loc_820EE958;
loc_820EE944:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// b 0x820ee958
	goto loc_820EE958;
loc_820EE950:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
loc_820EE958:
	// stw r11,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r11.u32);
loc_820EE95C:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// rlwinm. r10,r11,0,16,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x820ee9b0
	if (!ctx.cr0.eq) goto loc_820EE9B0;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820ee9b0
	if (!ctx.cr0.eq) goto loc_820EE9B0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821ff168
	ctx.lr = 0x820EE978;
	sub_821FF168(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x820ee9a4
	if (ctx.cr6.lt) goto loc_820EE9A4;
	// beq cr6,0x820ee998
	if (ctx.cr6.eq) goto loc_820EE998;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x820ee9b0
	if (!ctx.cr6.lt) goto loc_820EE9B0;
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// b 0x820ee9ac
	goto loc_820EE9AC;
loc_820EE998:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// b 0x820ee9ac
	goto loc_820EE9AC;
loc_820EE9A4:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
loc_820EE9AC:
	// stw r11,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r11.u32);
loc_820EE9B0:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// rlwinm. r11,r11,0,13,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820ee9fc
	if (!ctx.cr0.eq) goto loc_820EE9FC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821ff168
	ctx.lr = 0x820EE9C4;
	sub_821FF168(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x820ee9f0
	if (ctx.cr6.lt) goto loc_820EE9F0;
	// beq cr6,0x820ee9e4
	if (ctx.cr6.eq) goto loc_820EE9E4;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x820ee9fc
	if (!ctx.cr6.lt) goto loc_820EE9FC;
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// b 0x820ee9f8
	goto loc_820EE9F8;
loc_820EE9E4:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// b 0x820ee9f8
	goto loc_820EE9F8;
loc_820EE9F0:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
loc_820EE9F8:
	// stw r11,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r11.u32);
loc_820EE9FC:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// rlwinm. r10,r11,0,11,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x180000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x820eea40
	if (!ctx.cr0.eq) goto loc_820EEA40;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820eea40
	if (!ctx.cr0.eq) goto loc_820EEA40;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821ff168
	ctx.lr = 0x820EEA18;
	sub_821FF168(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820eea34
	if (ctx.cr0.eq) goto loc_820EEA34;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x820eea40
	if (!ctx.cr6.eq) goto loc_820EEA40;
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// b 0x820eea3c
	goto loc_820EEA3C;
loc_820EEA34:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
loc_820EEA3C:
	// stw r11,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r11.u32);
loc_820EEA40:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// rlwinm. r11,r11,0,8,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820eea78
	if (!ctx.cr0.eq) goto loc_820EEA78;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821ff168
	ctx.lr = 0x820EEA54;
	sub_821FF168(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x820eea6c
	if (ctx.cr6.lt) goto loc_820EEA6C;
	// bne cr6,0x820eea78
	if (!ctx.cr6.eq) goto loc_820EEA78;
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// b 0x820eea74
	goto loc_820EEA74;
loc_820EEA6C:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
loc_820EEA74:
	// stw r11,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r11.u32);
loc_820EEA78:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// rlwinm. r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820eead4
	if (!ctx.cr0.eq) goto loc_820EEAD4;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821ff168
	ctx.lr = 0x820EEA8C;
	sub_821FF168(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x820eeac8
	if (ctx.cr6.lt) goto loc_820EEAC8;
	// beq cr6,0x820eeabc
	if (ctx.cr6.eq) goto loc_820EEABC;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x820eeab0
	if (ctx.cr6.lt) goto loc_820EEAB0;
	// bne cr6,0x820eead4
	if (!ctx.cr6.eq) goto loc_820EEAD4;
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// b 0x820eead0
	goto loc_820EEAD0;
loc_820EEAB0:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// b 0x820eead0
	goto loc_820EEAD0;
loc_820EEABC:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// b 0x820eead0
	goto loc_820EEAD0;
loc_820EEAC8:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
loc_820EEAD0:
	// stw r11,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r11.u32);
loc_820EEAD4:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// rlwinm. r11,r11,0,2,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820eeb0c
	if (!ctx.cr0.eq) goto loc_820EEB0C;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821ff168
	ctx.lr = 0x820EEAE8;
	sub_821FF168(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x820eeb00
	if (ctx.cr6.lt) goto loc_820EEB00;
	// bne cr6,0x820eeb0c
	if (!ctx.cr6.eq) goto loc_820EEB0C;
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// b 0x820eeb08
	goto loc_820EEB08;
loc_820EEB00:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
loc_820EEB08:
	// stw r11,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r11.u32);
loc_820EEB0C:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// rlwinm. r11,r11,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820eeb44
	if (!ctx.cr0.eq) goto loc_820EEB44;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821ff168
	ctx.lr = 0x820EEB20;
	sub_821FF168(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x820eeb38
	if (ctx.cr6.lt) goto loc_820EEB38;
	// bne cr6,0x820eeb44
	if (!ctx.cr6.eq) goto loc_820EEB44;
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// b 0x820eeb40
	goto loc_820EEB40;
loc_820EEB38:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
loc_820EEB40:
	// stw r11,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r11.u32);
loc_820EEB44:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x820eeb74
	if (!ctx.cr6.eq) goto loc_820EEB74;
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// rlwinm. r10,r11,0,8,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820eeb74
	if (ctx.cr0.eq) goto loc_820EEB74;
	// andis. r10,r11,9
	ctx.r10.u64 = ctx.r11.u64 & 589824;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x820eeb74
	if (ctx.cr0.eq) goto loc_820EEB74;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// rlwimi r11,r10,17,14,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x30000) | (ctx.r11.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwimi r11,r29,17,12,12
	ctx.r11.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 17) & 0x80000) | (ctx.r11.u64 & 0xFFFFFFFFFFF7FFFF);
	// stw r11,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r11.u32);
loc_820EEB74:
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lwz r6,528(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 528);
	// addi r5,r11,32284
	ctx.r5.s64 = ctx.r11.s64 + 32284;
	// rlwinm r11,r6,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1E;
	// rlwinm r10,r6,0,23,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1E0;
	// rlwinm r9,r6,0,20,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xE00;
	// rlwinm r8,r6,0,16,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xE000;
	// rlwinm r7,r6,0,13,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x70000;
	// stw r10,16(r5)
	REX_STORE_U32(ctx.r5.u32 + 16, ctx.r10.u32);
	// stw r11,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// rlwinm r11,r6,0,11,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x180000;
	// stw r9,40(r5)
	REX_STORE_U32(ctx.r5.u32 + 40, ctx.r9.u32);
	// rlwinm r10,r6,0,8,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xE00000;
	// stw r8,28(r5)
	REX_STORE_U32(ctx.r5.u32 + 28, ctx.r8.u32);
	// rlwinm r9,r6,0,4,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xF000000;
	// stw r7,36(r5)
	REX_STORE_U32(ctx.r5.u32 + 36, ctx.r7.u32);
	// rlwinm r8,r6,0,2,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x30000000;
	// rlwinm r7,r6,0,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xC0000000;
	// stw r10,44(r5)
	REX_STORE_U32(ctx.r5.u32 + 44, ctx.r10.u32);
	// stw r11,24(r5)
	REX_STORE_U32(ctx.r5.u32 + 24, ctx.r11.u32);
	// stw r9,20(r5)
	REX_STORE_U32(ctx.r5.u32 + 20, ctx.r9.u32);
	// stw r8,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r7,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// stfs f30,468(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 468, temp.u32);
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// stfs f28,432(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 432, temp.u32);
	// stfs f28,436(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 436, temp.u32);
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f29,476(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 476, temp.u32);
	// stfs f28,440(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 440, temp.u32);
	// beq 0x820eebf4
	if (ctx.cr0.eq) goto loc_820EEBF4;
	// stw r28,412(r31)
	REX_STORE_U32(r31.u32 + 412, r28.u32);
loc_820EEBF4:
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820eec00
	if (ctx.cr0.eq) goto loc_820EEC00;
	// stw r29,412(r31)
	REX_STORE_U32(r31.u32 + 412, r29.u32);
loc_820EEC00:
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820eec0c
	if (ctx.cr0.eq) goto loc_820EEC0C;
	// stw r28,416(r31)
	REX_STORE_U32(r31.u32 + 416, r28.u32);
loc_820EEC0C:
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820eec18
	if (ctx.cr0.eq) goto loc_820EEC18;
	// stw r29,416(r31)
	REX_STORE_U32(r31.u32 + 416, r29.u32);
loc_820EEC18:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820eec2c
	if (ctx.cr0.eq) goto loc_820EEC2C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,16620(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16620);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,432(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 432, temp.u32);
loc_820EEC2C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm. r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f13,2388(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2388);
	ctx.f13.f64 = double(temp.f32);
	// beq 0x820eec40
	if (ctx.cr0.eq) goto loc_820EEC40;
	// stfs f13,432(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 432, temp.u32);
loc_820EEC40:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820eec54
	if (ctx.cr0.eq) goto loc_820EEC54;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,16916(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16916);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,432(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 432, temp.u32);
loc_820EEC54:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820eec60
	if (ctx.cr0.eq) goto loc_820EEC60;
	// stfs f13,436(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 436, temp.u32);
loc_820EEC60:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm. r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f13,16816(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16816);
	ctx.f13.f64 = double(temp.f32);
	// beq 0x820eec74
	if (ctx.cr0.eq) goto loc_820EEC74;
	// stfs f13,436(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 436, temp.u32);
loc_820EEC74:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820eec88
	if (ctx.cr0.eq) goto loc_820EEC88;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,16912(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16912);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,436(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 436, temp.u32);
loc_820EEC88:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm. r9,r11,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f0,16792(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16792);
	ctx.f0.f64 = double(temp.f32);
	// beq 0x820eecb8
	if (ctx.cr0.eq) goto loc_820EECB8;
	// lwz r10,532(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 532);
	// lfs f12,472(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 472);
	ctx.f12.f64 = double(temp.f32);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820eecb0
	if (!ctx.cr6.eq) goto loc_820EECB0;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// b 0x820eecb4
	goto loc_820EECB4;
loc_820EECB0:
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
loc_820EECB4:
	// stfs f12,472(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 472, temp.u32);
loc_820EECB8:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820eece8
	if (ctx.cr0.eq) goto loc_820EECE8;
	// lwz r10,532(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 532);
	// lfs f12,472(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 472);
	ctx.f12.f64 = double(temp.f32);
	// lbz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U8(r27.u32 + 0);
	// lbz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820eece0
	if (!ctx.cr6.eq) goto loc_820EECE0;
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// b 0x820eece4
	goto loc_820EECE4;
loc_820EECE0:
	// fsubs f0,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
loc_820EECE4:
	// stfs f0,472(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 472, temp.u32);
loc_820EECE8:
	// rlwinm. r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820eed00
	if (ctx.cr0.eq) goto loc_820EED00;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,16360(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16360);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 - ctx.f0.f64));
	// stfs f0,468(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 468, temp.u32);
loc_820EED00:
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820eed18
	if (ctx.cr0.eq) goto loc_820EED18;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,16908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16908);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 + ctx.f0.f64));
	// stfs f0,468(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 468, temp.u32);
loc_820EED18:
	// rlwinm. r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820eed24
	if (ctx.cr0.eq) goto loc_820EED24;
	// stfs f29,476(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 476, temp.u32);
loc_820EED24:
	// rlwinm. r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820eed3c
	if (ctx.cr0.eq) goto loc_820EED3C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 + ctx.f0.f64));
	// stfs f0,476(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 476, temp.u32);
loc_820EED3C:
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820eed50
	if (ctx.cr0.eq) goto loc_820EED50;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,16200(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,476(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 476, temp.u32);
loc_820EED50:
	// rlwinm. r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820eed5c
	if (ctx.cr0.eq) goto loc_820EED5C;
	// stfs f28,440(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 440, temp.u32);
loc_820EED5C:
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820eed68
	if (ctx.cr0.eq) goto loc_820EED68;
	// stfs f13,440(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 440, temp.u32);
loc_820EED68:
	// rlwinm. r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820eed7c
	if (ctx.cr0.eq) goto loc_820EED7C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,16904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,440(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 440, temp.u32);
loc_820EED7C:
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820eed90
	if (ctx.cr0.eq) goto loc_820EED90;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,440(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 440, temp.u32);
loc_820EED90:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,476(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 476);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16296(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16296);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820eeda8
	if (ctx.cr6.lt) goto loc_820EEDA8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820EEDA8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,476(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 476, temp.u32);
	// lfs f13,16300(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16300);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820eedc0
	if (ctx.cr6.gt) goto loc_820EEDC0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820EEDC0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,476(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 476, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,468(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 468);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16900(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16900);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,16292(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16292);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// stfs f1,456(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 456, temp.u32);
	// stfs f0,444(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 444, temp.u32);
	// ble cr6,0x820eedec
	if (!ctx.cr6.gt) goto loc_820EEDEC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820EEDEC:
	// stfs f0,468(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 468, temp.u32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x820eedfc
	if (!ctx.cr6.lt) goto loc_820EEDFC;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_820EEDFC:
	// stfs f1,468(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 468, temp.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822006f8
	ctx.lr = 0x820EEE08;
	sub_822006F8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f1,472(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 472);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200700
	ctx.lr = 0x820EEE14;
	sub_82200700(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f1,476(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 476);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200818
	ctx.lr = 0x820EEE20;
	sub_82200818(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fmr f3,f25
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f25.f64;
	// fmr f2,f26
	ctx.f2.f64 = f26.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EEE40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16896);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,532(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 532);
	// lfs f13,8136(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8136);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,480(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 480, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// stfs f28,8(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// bge cr6,0x820eee68
	if (!ctx.cr6.lt) goto loc_820EEE68;
	// stw r25,512(r31)
	REX_STORE_U32(r31.u32 + 512, r25.u32);
	// b 0x820eee6c
	goto loc_820EEE6C;
loc_820EEE68:
	// stw r28,512(r31)
	REX_STORE_U32(r31.u32 + 512, r28.u32);
loc_820EEE6C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f78
	ctx.lr = 0x820EEE78;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8211FA28) {
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
	ctx.lr = 0x8211FA30;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r28,-32176
	r28.s64 = -2108686336;
	// addi r29,r11,13128
	r29.s64 = ctx.r11.s64 + 13128;
	// lbz r10,10648(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 10648);
	// lbz r11,1827(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 1827);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8211fb40
	if (ctx.cr6.eq) goto loc_8211FB40;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r11,7104
	r30.s64 = ctx.r11.s64 + 7104;
	// addi r31,r30,80
	r31.s64 = r30.s64 + 80;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f31,f12,f13
	f31.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fdivs f30,f0,f31
	f30.f64 = double(float(ctx.f0.f64 / f31.f64));
loc_8211FA9C:
	// addi r5,r31,-16
	ctx.r5.s64 = r31.s64 + -16;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x820e1cc0
	ctx.lr = 0x8211FAAC;
	sub_820E1CC0(ctx, base);
	// lha r10,36(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 36));
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f8,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// lfs f0,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// lfs f11,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f7,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f0,f11,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 * f31.f64));
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// fmuls f0,f7,f31
	ctx.f0.f64 = double(float(ctx.f7.f64 * f31.f64));
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// addi r11,r30,2576
	ctx.r11.s64 = r30.s64 + 2576;
	// lfs f13,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lfs f10,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// lfs f9,92(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// fmuls f13,f10,f31
	ctx.f13.f64 = double(float(ctx.f10.f64 * f31.f64));
	// fmuls f0,f8,f30
	ctx.f0.f64 = double(float(ctx.f8.f64 * f30.f64));
	// stfs f12,28(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// fmuls f12,f9,f31
	ctx.f12.f64 = double(float(ctx.f9.f64 * f31.f64));
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f12,92(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lhz r10,94(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// sth r10,36(r31)
	REX_STORE_U16(r31.u32 + 36, ctx.r10.u16);
	// addi r31,r31,192
	r31.s64 = r31.s64 + 192;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8211fa9c
	if (ctx.cr6.lt) goto loc_8211FA9C;
	// lbz r11,1827(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 1827);
	// stb r11,10648(r28)
	REX_STORE_U8(r28.u32 + 10648, ctx.r11.u8);
loc_8211FB40:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82124440) {
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
	ctx.lr = 0x82124448;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// extsb r31,r10
	r31.s64 = ctx.r10.s8;
	// bl 0x8211f870
	ctx.lr = 0x8212447C;
	sub_8211F870(ctx, base);
	// addi r11,r31,98
	ctx.r11.s64 = r31.s64 + 98;
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r10,r31,100
	ctx.r10.s64 = r31.s64 + 100;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + r30.u64;
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stwx r8,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r8.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r11,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stwx r11,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bl 0x820e1c28
	ctx.lr = 0x821244DC;
	sub_820E1C28(ctx, base);
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r31,750
	ctx.r10.s64 = r31.s64 + 750;
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// addi r9,r31,768
	ctx.r9.s64 = r31.s64 + 768;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,1612(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 1612, temp.u32);
	// stwx r28,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, r28.u32);
	// stwx r27,r9,r30
	REX_STORE_U32(ctx.r9.u32 + r30.u32, r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82127D30) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e68
	ctx.lr = 0x82127D38;
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f30.u64);
	// stfd f31,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lbz r10,188(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 188);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// lwz r30,8(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r20,0
	r20.s64 = 0;
	// extsb r22,r11
	r22.s64 = ctx.r11.s8;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82127d78
	if (!ctx.cr0.eq) goto loc_82127D78;
	// lbz r11,188(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 188);
	// li r21,0
	r21.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82127d7c
	if (ctx.cr0.eq) goto loc_82127D7C;
loc_82127D78:
	// li r21,1
	r21.s64 = 1;
loc_82127D7C:
	// rlwinm. r11,r22,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82128434
	if (!ctx.cr0.eq) goto loc_82128434;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,-24048
	ctx.r11.s64 = ctx.r11.s64 + -24048;
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82128434
	if (ctx.cr0.eq) goto loc_82128434;
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82128434
	if (ctx.cr0.eq) goto loc_82128434;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r25,r11,-27136
	r25.s64 = ctx.r11.s64 + -27136;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821259d0
	ctx.lr = 0x82127DB8;
	sub_821259D0(ctx, base);
	// lbz r11,209(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 209);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r31,2812(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 2812);
	// bne 0x82127de4
	if (!ctx.cr0.eq) goto loc_82127DE4;
	// lbz r11,209(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 209);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82127de4
	if (!ctx.cr0.eq) goto loc_82127DE4;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x82127e18
	if (!ctx.cr6.eq) goto loc_82127E18;
	// lbz r11,210(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 210);
	// b 0x82127e0c
	goto loc_82127E0C;
loc_82127DE4:
	// lbz r11,210(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 210);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82127e14
	if (!ctx.cr0.eq) goto loc_82127E14;
	// lbz r11,192(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 192);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82127e08
	if (!ctx.cr0.eq) goto loc_82127E08;
	// lbz r11,164(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 164);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82127e18
	if (ctx.cr0.eq) goto loc_82127E18;
loc_82127E08:
	// lbz r11,209(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 209);
loc_82127E0C:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82127e18
	if (ctx.cr0.eq) goto loc_82127E18;
loc_82127E14:
	// li r23,0
	r23.s64 = 0;
loc_82127E18:
	// lhz r11,586(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 586);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x82127e2c
	if (!ctx.cr6.eq) goto loc_82127E2C;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82124350
	ctx.lr = 0x82127E2C;
	sub_82124350(ctx, base);
loc_82127E2C:
	// rlwinm r24,r22,2,0,29
	r24.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r25,1824
	ctx.r11.s64 = r25.s64 + 1824;
	// lwzx r10,r24,r11
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + ctx.r11.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r9,r24,r11
	REX_STORE_U32(r24.u32 + ctx.r11.u32, ctx.r9.u32);
	// ble 0x82127f90
	if (!ctx.cr0.gt) goto loc_82127F90;
	// lhz r11,720(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82127e60
	if (ctx.cr0.eq) goto loc_82127E60;
	// lhz r11,622(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 622);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82127e80
	if (ctx.cr0.eq) goto loc_82127E80;
loc_82127E60:
	// lhz r11,590(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 590);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82127e80
	if (!ctx.cr6.lt) goto loc_82127E80;
	// lhz r11,586(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 586);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82127e94
	if (ctx.cr6.lt) goto loc_82127E94;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x82127e94
	if (ctx.cr6.gt) goto loc_82127E94;
loc_82127E80:
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82126fe0
	ctx.lr = 0x82127E94;
	sub_82126FE0(ctx, base);
loc_82127E94:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x82128020
	if (!ctx.cr6.gt) goto loc_82128020;
	// addi r27,r25,2616
	r27.s64 = r25.s64 + 2616;
loc_82127EA4:
	// lwz r30,0(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// bne cr6,0x82127ed0
	if (!ctx.cr6.eq) goto loc_82127ED0;
	// lbz r11,163(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 163);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82127ed0
	if (ctx.cr0.eq) goto loc_82127ED0;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82126fe0
	ctx.lr = 0x82127ED0;
	sub_82126FE0(ctx, base);
loc_82127ED0:
	// lbz r11,199(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 199);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82127eec
	if (ctx.cr0.eq) goto loc_82127EEC;
	// cmpwi cr6,r30,33
	ctx.cr6.compare<int32_t>(r30.s32, 33, ctx.xer);
	// blt cr6,0x82127eec
	if (ctx.cr6.lt) goto loc_82127EEC;
	// cmpwi cr6,r30,36
	ctx.cr6.compare<int32_t>(r30.s32, 36, ctx.xer);
	// ble cr6,0x82127f80
	if (!ctx.cr6.gt) goto loc_82127F80;
loc_82127EEC:
	// cmpwi cr6,r30,45
	ctx.cr6.compare<int32_t>(r30.s32, 45, ctx.xer);
	// blt cr6,0x82127f60
	if (ctx.cr6.lt) goto loc_82127F60;
	// lbz r11,163(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 163);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82127f80
	if (!ctx.cr0.eq) goto loc_82127F80;
	// lbz r11,223(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 223);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82127f80
	if (!ctx.cr0.eq) goto loc_82127F80;
	// lbz r11,164(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 164);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82127f80
	if (!ctx.cr0.eq) goto loc_82127F80;
	// lbz r11,192(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 192);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82127f80
	if (!ctx.cr0.eq) goto loc_82127F80;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne cr6,0x82127f60
	if (!ctx.cr6.eq) goto loc_82127F60;
	// lhz r11,606(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 606);
	// cmpwi cr6,r30,48
	ctx.cr6.compare<int32_t>(r30.s32, 48, ctx.xer);
	// bne cr6,0x82127f40
	if (!ctx.cr6.eq) goto loc_82127F40;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82127f80
	if (ctx.cr6.eq) goto loc_82127F80;
loc_82127F40:
	// cmpwi cr6,r30,46
	ctx.cr6.compare<int32_t>(r30.s32, 46, ctx.xer);
	// bne cr6,0x82127f50
	if (!ctx.cr6.eq) goto loc_82127F50;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82127f80
	if (ctx.cr6.eq) goto loc_82127F80;
loc_82127F50:
	// cmpwi cr6,r30,47
	ctx.cr6.compare<int32_t>(r30.s32, 47, ctx.xer);
	// bne cr6,0x82127f60
	if (!ctx.cr6.eq) goto loc_82127F60;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82127f80
	if (ctx.cr6.eq) goto loc_82127F80;
loc_82127F60:
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82126fe0
	ctx.lr = 0x82127F74;
	sub_82126FE0(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x82127f80
	if (!ctx.cr6.eq) goto loc_82127F80;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
loc_82127F80:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(r29.s32, r31.s32, ctx.xer);
	// blt cr6,0x82127ea4
	if (ctx.cr6.lt) goto loc_82127EA4;
loc_82127F90:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x82128020
	if (!ctx.cr6.gt) goto loc_82128020;
	// addi r11,r25,1728
	ctx.r11.s64 = r25.s64 + 1728;
	// rlwinm r10,r22,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0;
	// mulli r26,r22,49
	r26.s64 = static_cast<int64_t>(r22.u64 * static_cast<uint64_t>(49));
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r25,2612
	r30.s64 = r25.s64 + 2612;
	// lfs f31,2384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	f31.f64 = double(temp.f32);
loc_82127FB4:
	// lwzu r29,4(r30)
	ea = 4 + r30.u32;
	r29.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// li r6,456
	ctx.r6.s64 = 456;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8211f870
	ctx.lr = 0x82127FCC;
	sub_8211F870(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// add r29,r29,r26
	r29.u64 = r29.u64 + r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + r25.u64;
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r8,r11,r25
	REX_STORE_U32(ctx.r11.u32 + r25.u32, ctx.r8.u32);
	// stw r7,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r6,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// bl 0x82124a28
	ctx.lr = 0x8212800C;
	sub_82124A28(ctx, base);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r25,2224
	ctx.r10.s64 = r25.s64 + 2224;
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stwx r3,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// bne 0x82127fb4
	if (!ctx.cr0.eq) goto loc_82127FB4;
loc_82128020:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82124f80
	ctx.lr = 0x82128030;
	sub_82124F80(ctx, base);
	// addi r11,r25,2992
	ctx.r11.s64 = r25.s64 + 2992;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfsx f1,r24,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r24.u32 + ctx.r11.u32, temp.u32);
	// lhz r29,604(r28)
	r29.u64 = REX_LOAD_U16(r28.u32 + 604);
	// lfs f31,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
	// cmpwi cr6,r29,17
	ctx.cr6.compare<int32_t>(r29.s32, 17, ctx.xer);
	// beq cr6,0x82128054
	if (ctx.cr6.eq) goto loc_82128054;
	// cmpwi cr6,r29,18
	ctx.cr6.compare<int32_t>(r29.s32, 18, ctx.xer);
	// bne cr6,0x821280e8
	if (!ctx.cr6.eq) goto loc_821280E8;
loc_82128054:
	// lbz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 0);
	// addi r11,r25,1632
	ctx.r11.s64 = r25.s64 + 1632;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821280e8
	if (ctx.cr0.eq) goto loc_821280E8;
	// lfs f2,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0130
	ctx.lr = 0x82128078;
	sub_820E0130(ctx, base);
	// lfs f0,10312(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 10312);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// bl 0x821cd0a0
	ctx.lr = 0x82128088;
	sub_821CD0A0(ctx, base);
	// lbz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 0);
	// addi r11,r25,2976
	ctx.r11.s64 = r25.s64 + 2976;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(r30.s32, 3, ctx.xer);
	// bne cr6,0x821280b4
	if (!ctx.cr6.eq) goto loc_821280B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f1,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821cd0a0
	ctx.lr = 0x821280B4;
	sub_821CD0A0(ctx, base);
loc_821280B4:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// bne cr6,0x821280c8
	if (!ctx.cr6.eq) goto loc_821280C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,2024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	f30.f64 = double(temp.f32);
	// b 0x821280cc
	goto loc_821280CC;
loc_821280C8:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	f30.f64 = f31.f64;
loc_821280CC:
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fnmsubs f0,f1,f1,f31
	ctx.f0.f64 = double(float(-std::fma(ctx.f1.f64, ctx.f1.f64, -f31.f64)));
	// fsqrts f2,f0
	ctx.f2.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x820e0130
	ctx.lr = 0x821280DC;
	sub_820E0130(ctx, base);
	// addi r3,r28,9940
	ctx.r3.s64 = r28.s64 + 9940;
	// fmuls f1,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f30.f64));
	// bl 0x820e06e0
	ctx.lr = 0x821280E8;
	sub_820E06E0(ctx, base);
loc_821280E8:
	// addi r10,r25,3056
	ctx.r10.s64 = r25.s64 + 3056;
	// lwzx r11,r24,r10
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82128110
	if (!ctx.cr6.eq) goto loc_82128110;
	// cmpwi cr6,r29,17
	ctx.cr6.compare<int32_t>(r29.s32, 17, ctx.xer);
	// beq cr6,0x82128108
	if (ctx.cr6.eq) goto loc_82128108;
	// cmpwi cr6,r29,18
	ctx.cr6.compare<int32_t>(r29.s32, 18, ctx.xer);
	// bne cr6,0x82128140
	if (!ctx.cr6.eq) goto loc_82128140;
loc_82128108:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8212813c
	goto loc_8212813C;
loc_82128110:
	// ble cr6,0x8212812c
	if (!ctx.cr6.gt) goto loc_8212812C;
	// cmpwi cr6,r29,17
	ctx.cr6.compare<int32_t>(r29.s32, 17, ctx.xer);
	// beq cr6,0x82128140
	if (ctx.cr6.eq) goto loc_82128140;
	// cmpwi cr6,r29,18
	ctx.cr6.compare<int32_t>(r29.s32, 18, ctx.xer);
	// beq cr6,0x82128140
	if (ctx.cr6.eq) goto loc_82128140;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x8212813c
	goto loc_8212813C;
loc_8212812C:
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x82128140
	if (ctx.cr6.lt) goto loc_82128140;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8212813C:
	// stwx r11,r24,r10
	REX_STORE_U32(r24.u32 + ctx.r10.u32, ctx.r11.u32);
loc_82128140:
	// lwzx r11,r24,r10
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82128304
	if (ctx.cr6.eq) goto loc_82128304;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// ble cr6,0x82128178
	if (!ctx.cr6.gt) goto loc_82128178;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,16372(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16372);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82128198
	goto loc_82128198;
loc_82128178:
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,16220(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16220);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f31,f13,f0,f31
	f31.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, f31.f64)));
loc_82128198:
	// stwx r11,r24,r10
	REX_STORE_U32(r24.u32 + ctx.r10.u32, ctx.r11.u32);
	// lbz r11,178(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 178);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// beq 0x821281b4
	if (ctx.cr0.eq) goto loc_821281B4;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// b 0x821281d4
	goto loc_821281D4;
loc_821281B4:
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// blt cr6,0x821281d0
	if (ctx.cr6.lt) goto loc_821281D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16232(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16232);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// ble cr6,0x821281d4
	if (!ctx.cr6.gt) goto loc_821281D4;
loc_821281D0:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f0.f64;
loc_821281D4:
	// addi r11,r25,2984
	ctx.r11.s64 = r25.s64 + 2984;
	// lwzx r11,r24,r11
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8212820c
	if (ctx.cr6.lt) goto loc_8212820C;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r10,r10,-27676
	ctx.r10.s64 = ctx.r10.s64 + -27676;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lha r9,30(r9)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + 30));
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8212820c
	if (!ctx.cr6.lt) goto loc_8212820C;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82128210
	goto loc_82128210;
loc_8212820C:
	// li r31,0
	r31.s64 = 0;
loc_82128210:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82128304
	if (ctx.cr6.eq) goto loc_82128304;
	// addi r11,r25,2976
	ctx.r11.s64 = r25.s64 + 2976;
	// addi r30,r31,48
	r30.s64 = r31.s64 + 48;
	// lwzx r11,r24,r11
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82128244
	if (ctx.cr6.eq) goto loc_82128244;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8212823c
	if (ctx.cr6.eq) goto loc_8212823C;
loc_82128234:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// b 0x82128438
	goto loc_82128438;
loc_8212823C:
	// li r4,37
	ctx.r4.s64 = 37;
	// b 0x82128248
	goto loc_82128248;
loc_82128244:
	// li r4,38
	ctx.r4.s64 = 38;
loc_82128248:
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8211f870
	ctx.lr = 0x82128258;
	sub_8211F870(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82124038
	ctx.lr = 0x82128264;
	sub_82124038(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f31.f64));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x820e1cc0
	ctx.lr = 0x82128278;
	sub_820E1CC0(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,10140(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 10140);
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r11,r11,20028
	ctx.r11.s64 = ctx.r11.s64 + 20028;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_8212829C:
	// lfs f12,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f12,56(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// fadds f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfsu f12,64(r11)
	ea = 64 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8212829c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8212829C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x82128304
	if (ctx.cr6.eq) goto loc_82128304;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// li r10,32
	ctx.r10.s64 = 32;
	// lfs f0,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,10140(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 10140);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r10,r9,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xFFFFC000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,20028
	ctx.r11.s64 = ctx.r11.s64 + 20028;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_821282E8:
	// lfs f12,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f12,56(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// fadds f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfsu f12,64(r11)
	ea = 64 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821282e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821282E8;
loc_82128304:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82124c98
	ctx.lr = 0x8212830C;
	sub_82124C98(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x82128234
	if (!ctx.cr6.eq) goto loc_82128234;
	// lbz r11,219(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 219);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8212833c
	if (ctx.cr0.eq) goto loc_8212833C;
	// lbz r11,210(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 210);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8212833c
	if (ctx.cr0.eq) goto loc_8212833C;
	// lbz r11,163(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 163);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82128340
	if (ctx.cr0.eq) goto loc_82128340;
loc_8212833C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82128340:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82128358
	if (ctx.cr6.eq) goto loc_82128358;
	// lbz r11,163(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 163);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8212835c
	if (!ctx.cr0.eq) goto loc_8212835C;
loc_82128358:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8212835C:
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lfs f13,10488(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 10488);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-27728(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -27728);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82128380
	if (!ctx.cr6.lt) goto loc_82128380;
	// lbz r9,192(r28)
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + 192);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
loc_82128380:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82128390
	if (!ctx.cr6.eq) goto loc_82128390;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82128234
	if (ctx.cr6.eq) goto loc_82128234;
loc_82128390:
	// rlwinm r10,r22,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r25,1568
	ctx.r11.s64 = r25.s64 + 1568;
	// addi r9,r25,3072
	ctx.r9.s64 = r25.s64 + 3072;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r10,r24,r9
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + ctx.r9.u32);
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// lwz r6,8(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,12(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r9,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// stw r6,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r6.u32);
	// stw r10,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// bne cr6,0x821283e4
	if (!ctx.cr6.eq) goto loc_821283E4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,16600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16600);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821283ec
	goto loc_821283EC;
loc_821283E4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-30104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30104);
	ctx.f1.f64 = double(temp.f32);
loc_821283EC:
	// bl 0x820e1cc0
	ctx.lr = 0x821283F0;
	sub_820E1CC0(ctx, base);
	// lwz r10,10140(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 10140);
	// li r11,32
	ctx.r11.s64 = 32;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r10,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// lfs f13,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,20028
	ctx.r11.s64 = ctx.r10.s64 + 20028;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_82128414:
	// lfs f12,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f12,56(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// fadds f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfsu f12,64(r11)
	ea = 64 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82128414
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82128414;
	// b 0x82128234
	goto loc_82128234;
loc_82128434:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82128438:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_8214C8B0) {
	REX_FUNC_PROLOGUE();
	// lha r11,8(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 8));
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,32(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 32);
	// rotlwi r10,r10,24
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 24);
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214CD48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8214CD50;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 9, ctx.xer);
	// bgt cr6,0x8214cd68
	if (ctx.cr6.gt) goto loc_8214CD68;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x8214cd6c
	if (!ctx.cr6.lt) goto loc_8214CD6C;
loc_8214CD68:
	// li r4,4
	ctx.r4.s64 = 4;
loc_8214CD6C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 200);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stw r4,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r4.u32);
	// addi r29,r11,-7072
	r29.s64 = ctx.r11.s64 + -7072;
	// ori r30,r9,3696
	r30.u64 = ctx.r9.u64 | 3696;
	// addi r11,r29,5596
	ctx.r11.s64 = r29.s64 + 5596;
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// stwx r4,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// lwz r4,212(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 212);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8214cc98
	ctx.lr = 0x8214CD9C;
	sub_8214CC98(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// addi r10,r29,5592
	ctx.r10.s64 = r29.s64 + 5592;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// stfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8214E750) {
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
	ctx.lr = 0x8214E758;
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lha r11,8(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 8));
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lhz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 20);
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
	// bne 0x8214e7e0
	if (!ctx.cr0.eq) goto loc_8214E7E0;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bne cr6,0x8214e79c
	if (!ctx.cr6.eq) goto loc_8214E79C;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r11,24304(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24304);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// b 0x8214e7ac
	goto loc_8214E7AC;
loc_8214E79C:
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,24304(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24304);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_8214E7AC:
	// lwz r10,124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8214eb6c
	if (ctx.cr6.eq) goto loc_8214EB6C;
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r9,109(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 109);
	// slw r10,r10,r20
	ctx.r10.u64 = r20.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r20.u8 & 0x3F));
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// stb r10,109(r11)
	REX_STORE_U8(ctx.r11.u32 + 109, ctx.r10.u8);
	// clrlwi. r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8214eb6c
	if (!ctx.cr0.eq) goto loc_8214EB6C;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// b 0x8214eb6c
	goto loc_8214EB6C;
loc_8214E7E0:
	// rlwinm. r10,r29,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r22,5
	r22.s64 = 5;
	// beq 0x8214e810
	if (ctx.cr0.eq) goto loc_8214E810;
	// lha r10,4(r25)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r25.u32 + 4));
	// addi r31,r11,-5
	r31.s64 = ctx.r11.s64 + -5;
	// li r30,-5
	r30.s64 = -5;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8214e83c
	if (!ctx.cr6.lt) goto loc_8214E83C;
	// lha r10,6(r25)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r25.u32 + 6));
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// addi r31,r10,1
	r31.s64 = ctx.r10.s64 + 1;
	// b 0x8214e83c
	goto loc_8214E83C;
loc_8214E810:
	// rlwinm. r10,r29,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8214e838
	if (ctx.cr0.eq) goto loc_8214E838;
	// lha r10,6(r25)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r25.u32 + 6));
	// addi r31,r11,5
	r31.s64 = ctx.r11.s64 + 5;
	// mr r30,r22
	r30.u64 = r22.u64;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8214e83c
	if (!ctx.cr6.gt) goto loc_8214E83C;
	// subf r10,r10,r31
	ctx.r10.u64 = r31.u64 - ctx.r10.u64;
	// addi r31,r10,-1
	r31.s64 = ctx.r10.s64 + -1;
	// b 0x8214e83c
	goto loc_8214E83C;
loc_8214E838:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_8214E83C:
	// lis r23,-32169
	r23.s64 = -2108227584;
	// b 0x8214e8b0
	goto loc_8214E8B0;
loc_8214E844:
	// lwz r11,24308(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 24308);
	// mulli r10,r31,36
	ctx.r10.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(36));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lha r3,0(r11)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8214e87c
	if (ctx.cr6.eq) goto loc_8214E87C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214e8bc
	if (ctx.cr6.eq) goto loc_8214E8BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E874;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8214e8bc
	if (!ctx.cr0.eq) goto loc_8214E8BC;
loc_8214E87C:
	// lha r11,4(r25)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r25.u32 + 4));
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// lha r11,6(r25)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r25.u32 + 6));
	// bge cr6,0x8214e89c
	if (!ctx.cr6.lt) goto loc_8214E89C;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
	// b 0x8214e8ac
	goto loc_8214E8AC;
loc_8214E89C:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8214e8ac
	if (!ctx.cr6.gt) goto loc_8214E8AC;
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// addi r31,r11,-1
	r31.s64 = ctx.r11.s64 + -1;
loc_8214E8AC:
	// lha r11,8(r25)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r25.u32 + 8));
loc_8214E8B0:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8214e844
	if (!ctx.cr6.eq) goto loc_8214E844;
	// b 0x8214e8c0
	goto loc_8214E8C0;
loc_8214E8BC:
	// sth r31,8(r25)
	REX_STORE_U16(r25.u32 + 8, r31.u16);
loc_8214E8C0:
	// rlwinm. r11,r29,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r24,1
	r24.s64 = 1;
	// li r27,0
	r27.s64 = 0;
	// beq 0x8214e8f8
	if (ctx.cr0.eq) goto loc_8214E8F8;
	// lha r11,8(r25)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r25.u32 + 8));
	// li r27,-1
	r27.s64 = -1;
	// addi r31,r11,-1
	r31.s64 = ctx.r11.s64 + -1;
	// addi r10,r31,5
	ctx.r10.s64 = r31.s64 + 5;
	// divw r9,r10,r22
	ctx.r9.u64 = uint32_t((r22.s32 && !(ctx.r10.s32 == INT32_MIN && r22.s32 == -1)) ? ctx.r10.s32 / r22.s32 : 0);
	// mulli r9,r9,5
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(5));
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bne cr6,0x8214e92c
	if (!ctx.cr6.eq) goto loc_8214E92C;
	// b 0x8214e920
	goto loc_8214E920;
loc_8214E8F8:
	// rlwinm. r11,r29,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lha r11,8(r25)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r25.u32 + 8));
	// beq 0x8214e928
	if (ctx.cr0.eq) goto loc_8214E928;
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
	// mr r27,r24
	r27.u64 = r24.u64;
	// addi r10,r31,-5
	ctx.r10.s64 = r31.s64 + -5;
	// divw r9,r10,r22
	ctx.r9.u64 = uint32_t((r22.s32 && !(ctx.r10.s32 == INT32_MIN && r22.s32 == -1)) ? ctx.r10.s32 / r22.s32 : 0);
	// mulli r9,r9,5
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(5));
	// subf. r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8214e92c
	if (!ctx.cr0.eq) goto loc_8214E92C;
loc_8214E920:
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// b 0x8214e92c
	goto loc_8214E92C;
loc_8214E928:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_8214E92C:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8214e9ec
	if (ctx.cr6.eq) goto loc_8214E9EC;
	// addi r28,r31,-5
	r28.s64 = r31.s64 + -5;
	// addi r29,r31,5
	r29.s64 = r31.s64 + 5;
	// mulli r30,r31,36
	r30.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(36));
	// mulli r26,r27,36
	r26.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(36));
loc_8214E944:
	// lwz r11,24308(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 24308);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lha r3,0(r11)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8214e978
	if (ctx.cr6.eq) goto loc_8214E978;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214e9e8
	if (ctx.cr6.eq) goto loc_8214E9E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E970;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8214e9e8
	if (!ctx.cr0.eq) goto loc_8214E9E8;
loc_8214E978:
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// add r30,r26,r30
	r30.u64 = r26.u64 + r30.u64;
	// add r29,r29,r27
	r29.u64 = r29.u64 + r27.u64;
	// add r28,r28,r27
	r28.u64 = r28.u64 + r27.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bge cr6,0x8214e9b8
	if (!ctx.cr6.lt) goto loc_8214E9B8;
	// divw r11,r29,r22
	ctx.r11.u64 = uint32_t((r22.s32 && !(r29.s32 == INT32_MIN && r22.s32 == -1)) ? r29.s32 / r22.s32 : 0);
	// mulli r11,r11,5
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(5));
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8214e9d8
	if (!ctx.cr6.eq) goto loc_8214E9D8;
	// addi r31,r31,5
	r31.s64 = r31.s64 + 5;
	// addi r30,r30,180
	r30.s64 = r30.s64 + 180;
	// addi r29,r29,5
	r29.s64 = r29.s64 + 5;
	// addi r28,r28,5
	r28.s64 = r28.s64 + 5;
	// b 0x8214e9d8
	goto loc_8214E9D8;
loc_8214E9B8:
	// divw r11,r28,r22
	ctx.r11.u64 = uint32_t((r22.s32 && !(r28.s32 == INT32_MIN && r22.s32 == -1)) ? r28.s32 / r22.s32 : 0);
	// mulli r11,r11,5
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(5));
	// subf. r11,r11,r28
	ctx.r11.u64 = r28.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8214e9d8
	if (!ctx.cr0.eq) goto loc_8214E9D8;
	// addi r31,r31,-5
	r31.s64 = r31.s64 + -5;
	// addi r30,r30,-180
	r30.s64 = r30.s64 + -180;
	// addi r29,r29,-5
	r29.s64 = r29.s64 + -5;
	// addi r28,r28,-5
	r28.s64 = r28.s64 + -5;
loc_8214E9D8:
	// lha r11,8(r25)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r25.u32 + 8));
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8214e944
	if (!ctx.cr6.eq) goto loc_8214E944;
	// b 0x8214e9ec
	goto loc_8214E9EC;
loc_8214E9E8:
	// sth r31,8(r25)
	REX_STORE_U16(r25.u32 + 8, r31.u16);
loc_8214E9EC:
	// cmpw cr6,r31,r21
	ctx.cr6.compare<int32_t>(r31.s32, r21.s32, ctx.xer);
	// beq cr6,0x8214ea84
	if (ctx.cr6.eq) goto loc_8214EA84;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// cmpwi cr6,r21,22
	ctx.cr6.compare<int32_t>(r21.s32, 22, ctx.xer);
	// addi r10,r11,24304
	ctx.r10.s64 = ctx.r11.s64 + 24304;
	// lwz r11,24304(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24304);
	// bne cr6,0x8214ea10
	if (!ctx.cr6.eq) goto loc_8214EA10;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// b 0x8214ea18
	goto loc_8214EA18;
loc_8214EA10:
	// rlwinm r9,r21,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_8214EA18:
	// lwz r9,124(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8214ea44
	if (ctx.cr6.eq) goto loc_8214EA44;
	// lbz r9,109(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 109);
	// slw r8,r24,r20
	ctx.r8.u64 = r20.u8 & 0x20 ? 0 : (r24.u32 << (r20.u8 & 0x3F));
	// andc r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// stb r9,109(r11)
	REX_STORE_U8(ctx.r11.u32 + 109, ctx.r9.u8);
	// clrlwi. r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8214ea44
	if (!ctx.cr0.eq) goto loc_8214EA44;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r9,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r9.u32);
loc_8214EA44:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r31,22
	ctx.cr6.compare<int32_t>(r31.s32, 22, ctx.xer);
	// bne cr6,0x8214ea58
	if (!ctx.cr6.eq) goto loc_8214EA58;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// b 0x8214ea60
	goto loc_8214EA60;
loc_8214EA58:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_8214EA60:
	// lwz r10,124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8214ea84
	if (ctx.cr6.eq) goto loc_8214EA84;
	// lbz r10,109(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 109);
	// slw r9,r24,r20
	ctx.r9.u64 = r20.u8 & 0x20 ? 0 : (r24.u32 << (r20.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r10,109(r11)
	REX_STORE_U8(ctx.r11.u32 + 109, ctx.r10.u8);
	// stw r9,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r9.u32);
loc_8214EA84:
	// lwz r6,12(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 12);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8214eb6c
	if (ctx.cr6.eq) goto loc_8214EB6C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8214d978
	ctx.lr = 0x8214EA9C;
	sub_8214D978(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,196(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 196, temp.u32);
	// lfs f0,16172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,200(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 200, temp.u32);
	// lhz r11,22(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 22);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// bne 0x8214eb14
	if (!ctx.cr0.eq) goto loc_8214EB14;
	// addi r9,r11,13128
	ctx.r9.s64 = ctx.r11.s64 + 13128;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,1856(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 1856);
	// lfs f0,1840(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28428(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28428);
	ctx.f13.f64 = double(temp.f32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x820e0028
	ctx.lr = 0x8214EAFC;
	sub_820E0028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,16272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16272);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,27956(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 27956);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// b 0x8214eb54
	goto loc_8214EB54;
loc_8214EB14:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,24(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f31,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lfs f0,1840(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfs f13,2384(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2384);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f0,f13,f12
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// bl 0x82204b00
	ctx.lr = 0x8214EB3C;
	sub_82204B00(ctx, base);
	// stfs f1,24(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r25.u32 + 24, temp.u32);
	// bl 0x820e0028
	ctx.lr = 0x8214EB44;
	sub_820E0028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fmadds f0,f13,f0,f31
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, f31.f64)));
loc_8214EB54:
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// stfs f0,144(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// stfs f0,148(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// stfs f0,152(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 152, temp.u32);
loc_8214EB6C:
	// lha r3,8(r25)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r25.u32 + 8));
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_82169AA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lha r11,72(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 72));
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82169b20
	if (!ctx.cr0.gt) goto loc_82169B20;
	// extsh r31,r5
	r31.s64 = ctx.r5.s16;
	// addi r11,r3,124
	ctx.r11.s64 = ctx.r3.s64 + 124;
loc_82169ABC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lha r8,2(r10)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 2));
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt 0x82169b08
	if (ctx.cr0.lt) goto loc_82169B08;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82169b08
	if (ctx.cr6.eq) goto loc_82169B08;
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r9,r4,2
	ctx.r9.s64 = ctx.r4.s64 + 2;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82169AF0:
	// lha r7,0(r9)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + 0));
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82169b00
	if (!ctx.cr6.eq) goto loc_82169B00;
	// sth r31,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, r31.u16);
loc_82169B00:
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82169af0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82169AF0;
loc_82169B08:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// sth r31,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, r31.u16);
	// lha r10,72(r3)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 72));
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82169abc
	if (ctx.cr6.lt) goto loc_82169ABC;
loc_82169B20:
	// lha r11,74(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 74));
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82169b58
	if (!ctx.cr0.gt) goto loc_82169B58;
	// addi r11,r3,152
	ctx.r11.s64 = ctx.r3.s64 + 152;
loc_82169B34:
	// lwz r9,84(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stwu r9,84(r11)
	ea = 84 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lha r9,74(r3)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 74));
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82169b34
	if (ctx.cr6.lt) goto loc_82169B34;
loc_82169B58:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216C1B0) {
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
	// li r31,0
	r31.s64 = 0;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// addi r30,r11,2980
	r30.s64 = ctx.r11.s64 + 2980;
loc_8216C1D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82208a68
	ctx.lr = 0x8216C1DC;
	sub_82208A68(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stwu r3,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r30.u32 = ea;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// blt cr6,0x8216c1d4
	if (ctx.cr6.lt) goto loc_8216C1D4;
	// bl 0x821d1ed0
	ctx.lr = 0x8216C1F0;
	sub_821D1ED0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821d9620
	ctx.lr = 0x8216C1FC;
	sub_821D9620(ctx, base);
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

DEFINE_REX_FUNC(sub_8216C880) {
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
	ctx.lr = 0x8216C888;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r10,5616(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 5616);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8216c8bc
	if (!ctx.cr0.eq) goto loc_8216C8BC;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r3,40(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x821b0660
	ctx.lr = 0x8216C8B0;
	sub_821B0660(ctx, base);
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,5616(r10)
	REX_STORE_U16(ctx.r10.u32 + 5616, ctx.r11.u16);
loc_8216C8BC:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,-12748
	ctx.r6.s64 = ctx.r10.s64 + -12748;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x8216C8E4;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8216c914
	if (ctx.cr0.eq) goto loc_8216C914;
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-8592
	ctx.r8.s64 = ctx.r11.s64 + -8592;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,44(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r9,188(r3)
	REX_STORE_U32(ctx.r3.u32 + 188, ctx.r9.u32);
	// stw r10,184(r3)
	REX_STORE_U32(ctx.r3.u32 + 184, ctx.r10.u32);
	// b 0x8216c918
	goto loc_8216C918;
loc_8216C914:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8216C918:
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// lwz r3,204(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 204);
	// bl 0x820e4bb0
	ctx.lr = 0x8216C924;
	sub_820E4BB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r3,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r3.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f12,27896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27896);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f10,19796(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 19796);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,28724(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28724);
	ctx.f11.f64 = double(temp.f32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lfs f31,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
	// addi r30,r31,220
	r30.s64 = r31.s64 + 220;
	// lfs f0,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// li r29,0
	r29.s64 = 0;
	// lfs f13,2344(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2344);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r11,-8520
	ctx.r4.s64 = ctx.r11.s64 + -8520;
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x821761e0
	ctx.lr = 0x8216C9B0;
	sub_821761E0(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r3,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r3.u32);
	// addi r9,r11,-7072
	ctx.r9.s64 = ctx.r11.s64 + -7072;
	// ori r8,r10,3699
	ctx.r8.u64 = ctx.r10.u64 | 3699;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,3(r9)
	REX_STORE_U8(ctx.r9.u32 + 3, ctx.r11.u8);
	// stbx r10,r9,r8
	REX_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u8);
	// bl 0x8216c730
	ctx.lr = 0x8216C9DC;
	sub_8216C730(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822094c0
	ctx.lr = 0x8216C9E4;
	sub_822094C0(ctx, base);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// li r4,30
	ctx.r4.s64 = 30;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// li r3,2
	ctx.r3.s64 = 2;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stb r11,3393(r10)
	REX_STORE_U8(ctx.r10.u32 + 3393, ctx.r11.u8);
	// bl 0x821afa50
	ctx.lr = 0x8216CA10;
	sub_821AFA50(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// bl 0x82191ce0
	ctx.lr = 0x8216CA1C;
	sub_82191CE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216c1b0
	ctx.lr = 0x8216CA24;
	sub_8216C1B0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82172048) {
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
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// addi r11,r11,27576
	ctx.r11.s64 = ctx.r11.s64 + 27576;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r8,r11,264
	ctx.r8.s64 = ctx.r11.s64 + 264;
	// addi r7,r11,240
	ctx.r7.s64 = ctx.r11.s64 + 240;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82171358
	ctx.lr = 0x82172080;
	sub_82171358(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-7160
	ctx.r11.s64 = ctx.r11.s64 + -7160;
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

DEFINE_REX_FUNC(sub_82173BC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82173bd8
	if (!ctx.cr6.lt) goto loc_82173BD8;
loc_82173BD0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82173BD8:
	// ble cr6,0x82173be4
	if (!ctx.cr6.gt) goto loc_82173BE4;
loc_82173BDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82173BE4:
	// lbz r11,1(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r10,1(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82173bd0
	if (ctx.cr6.lt) goto loc_82173BD0;
	// bgt cr6,0x82173bdc
	if (ctx.cr6.gt) goto loc_82173BDC;
	// lbz r11,2(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r10,2(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 2);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82173bd0
	if (ctx.cr6.lt) goto loc_82173BD0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subfze r3,r9
	temp.u8 = ~ctx.r9.u32 + ctx.xer.ca < ~ctx.r9.u32;
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821746F8) {
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
	ctx.lr = 0x82174700;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82173a58
	ctx.lr = 0x82174718;
	sub_82173A58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821747d0
	if (ctx.cr0.eq) goto loc_821747D0;
	// mulli r11,r6,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(28));
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r9,r31,2
	ctx.r9.s64 = r31.s64 + 2;
	// addi r11,r10,9
	ctx.r11.s64 = ctx.r10.s64 + 9;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// stb r8,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r8.u8);
	// lbz r8,1(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stb r8,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r8.u8);
loc_82174744:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stbx r8,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82174744
	if (!ctx.cr0.eq) goto loc_82174744;
	// lbz r9,21(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 21);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r9,13(r31)
	REX_STORE_U8(r31.u32 + 13, ctx.r9.u8);
	// lfs f0,1996(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lbz r9,22(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 22);
	// stb r9,14(r31)
	REX_STORE_U8(r31.u32 + 14, ctx.r9.u8);
	// lbz r9,23(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 23);
	// stb r9,15(r31)
	REX_STORE_U8(r31.u32 + 15, ctx.r9.u8);
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lbz r11,2(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// stb r11,40(r31)
	REX_STORE_U8(r31.u32 + 40, ctx.r11.u8);
	// lbz r11,3(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r11,41(r31)
	REX_STORE_U8(r31.u32 + 41, ctx.r11.u8);
	// lbz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// stb r11,42(r31)
	REX_STORE_U8(r31.u32 + 42, ctx.r11.u8);
	// lbz r11,5(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// stb r11,43(r31)
	REX_STORE_U8(r31.u32 + 43, ctx.r11.u8);
	// lbz r11,6(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// stb r11,44(r31)
	REX_STORE_U8(r31.u32 + 44, ctx.r11.u8);
	// lbz r11,7(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// stb r11,45(r31)
	REX_STORE_U8(r31.u32 + 45, ctx.r11.u8);
	// lbz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// stb r11,46(r31)
	REX_STORE_U8(r31.u32 + 46, ctx.r11.u8);
	// b 0x8217488c
	goto loc_8217488C;
loc_821747D0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b30e0
	ctx.lr = 0x821747D8;
	sub_821B30E0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,255
	ctx.r9.s64 = 255;
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// stb r11,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r11.u8);
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r11,2(r31)
	REX_STORE_U8(r31.u32 + 2, ctx.r11.u8);
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lfs f0,1996(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// stb r7,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r7.u8);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// cmpwi cr6,r28,15
	ctx.cr6.compare<int32_t>(r28.s32, 15, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// addi r29,r10,26800
	r29.s64 = ctx.r10.s64 + 26800;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stb r11,15(r31)
	REX_STORE_U8(r31.u32 + 15, ctx.r11.u8);
	// stb r11,14(r31)
	REX_STORE_U8(r31.u32 + 14, ctx.r11.u8);
	// stb r11,13(r31)
	REX_STORE_U8(r31.u32 + 13, ctx.r11.u8);
	// stb r7,40(r31)
	REX_STORE_U8(r31.u32 + 40, ctx.r7.u8);
	// stb r9,41(r31)
	REX_STORE_U8(r31.u32 + 41, ctx.r9.u8);
	// stb r9,42(r31)
	REX_STORE_U8(r31.u32 + 42, ctx.r9.u8);
	// stb r11,43(r31)
	REX_STORE_U8(r31.u32 + 43, ctx.r11.u8);
	// stb r11,44(r31)
	REX_STORE_U8(r31.u32 + 44, ctx.r11.u8);
	// stb r11,45(r31)
	REX_STORE_U8(r31.u32 + 45, ctx.r11.u8);
	// stb r6,46(r31)
	REX_STORE_U8(r31.u32 + 46, ctx.r6.u8);
	// bne cr6,0x82174858
	if (!ctx.cr6.eq) goto loc_82174858;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8216e2f8
	ctx.lr = 0x82174858;
	sub_8216E2F8(ctx, base);
loc_82174858:
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(r28.s32, 16, ctx.xer);
	// bne cr6,0x82174874
	if (!ctx.cr6.eq) goto loc_82174874;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8216e2f8
	ctx.lr = 0x82174874;
	sub_8216E2F8(ctx, base);
loc_82174874:
	// cmpwi cr6,r28,14
	ctx.cr6.compare<int32_t>(r28.s32, 14, ctx.xer);
	// bne cr6,0x8217488c
	if (!ctx.cr6.eq) goto loc_8217488C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8216e558
	ctx.lr = 0x8217488C;
	sub_8216E558(ctx, base);
loc_8217488C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821795E8) {
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
	ctx.lr = 0x821795F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r10,252(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// addi r29,r3,196
	r29.s64 = ctx.r3.s64 + 196;
	// addi r28,r11,-8304
	r28.s64 = ctx.r11.s64 + -8304;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mulli r4,r10,80
	ctx.r4.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(80));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,496(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 496);
	// bl 0x82190558
	ctx.lr = 0x82179618;
	sub_82190558(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821796e8
	if (ctx.cr6.eq) goto loc_821796E8;
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// addi r30,r31,192
	r30.s64 = r31.s64 + 192;
	// lwz r3,496(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 496);
	// mulli r4,r11,84
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(84));
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82190558
	ctx.lr = 0x8217963C;
	sub_82190558(ctx, base);
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821796e8
	if (ctx.cr6.eq) goto loc_821796E8;
	// lwz r10,252(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 252);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// std r9,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r9.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r9,90(r31)
	REX_STORE_U8(r31.u32 + 90, ctx.r9.u8);
	// sth r10,88(r31)
	REX_STORE_U16(r31.u32 + 88, ctx.r10.u16);
	// bne cr6,0x8217966c
	if (!ctx.cr6.eq) goto loc_8217966C;
	// addi r11,r31,112
	ctx.r11.s64 = r31.s64 + 112;
loc_8217966C:
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-27856
	ctx.r11.s64 = ctx.r11.s64 + -27856;
	// stb r8,105(r31)
	REX_STORE_U8(r31.u32 + 105, ctx.r8.u8);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r8,106(r31)
	REX_STORE_U8(r31.u32 + 106, ctx.r8.u8);
	// stb r8,107(r31)
	REX_STORE_U8(r31.u32 + 107, ctx.r8.u8);
	// stb r8,109(r31)
	REX_STORE_U8(r31.u32 + 109, ctx.r8.u8);
	// beq cr6,0x821796e8
	if (ctx.cr6.eq) goto loc_821796E8;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_821796A4:
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// stb r8,76(r7)
	REX_STORE_U8(ctx.r7.u32 + 76, ctx.r8.u8);
	// lfs f0,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stfs f0,72(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 72, temp.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f0,160(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stfs f0,76(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 76, temp.u32);
	// lwz r7,252(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 252);
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x821796a4
	if (ctx.cr6.lt) goto loc_821796A4;
loc_821796E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8217D690) {
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
	ctx.lr = 0x8217D698;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r29,r11,-7072
	r29.s64 = ctx.r11.s64 + -7072;
	// ori r11,r10,3696
	ctx.r11.u64 = ctx.r10.u64 | 3696;
	// addi r10,r29,104
	ctx.r10.s64 = r29.s64 + 104;
	// mullw r25,r4,r11
	r25.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// lwzx r11,r25,r10
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + ctx.r10.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8217d9a8
	if (ctx.cr6.eq) goto loc_8217D9A8;
	// addi r11,r29,88
	ctx.r11.s64 = r29.s64 + 88;
	// lhax r11,r25,r11
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r25.u32 + ctx.r11.u32));
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8217d6e8
	if (!ctx.cr6.eq) goto loc_8217D6E8;
	// addi r10,r29,100
	ctx.r10.s64 = r29.s64 + 100;
	// lhax r10,r25,r10
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r25.u32 + ctx.r10.u32));
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x8217d9a8
	if (!ctx.cr6.lt) goto loc_8217D9A8;
loc_8217D6E8:
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x8217d700
	if (!ctx.cr6.eq) goto loc_8217D700;
	// addi r10,r29,100
	ctx.r10.s64 = r29.s64 + 100;
	// lhzx r10,r25,r10
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8217d9a8
	if (ctx.cr6.eq) goto loc_8217D9A8;
loc_8217D700:
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bne cr6,0x8217d718
	if (!ctx.cr6.eq) goto loc_8217D718;
	// addi r10,r29,100
	ctx.r10.s64 = r29.s64 + 100;
	// lhzx r10,r25,r10
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + ctx.r10.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8217d9a8
	if (ctx.cr0.eq) goto loc_8217D9A8;
loc_8217D718:
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x8217d730
	if (!ctx.cr6.eq) goto loc_8217D730;
	// addi r10,r29,100
	ctx.r10.s64 = r29.s64 + 100;
	// lhzx r10,r25,r10
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8217d9a8
	if (!ctx.cr6.eq) goto loc_8217D9A8;
loc_8217D730:
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// bne cr6,0x8217d748
	if (!ctx.cr6.eq) goto loc_8217D748;
	// addi r10,r29,100
	ctx.r10.s64 = r29.s64 + 100;
	// lhzx r10,r25,r10
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8217d9a8
	if (ctx.cr6.eq) goto loc_8217D9A8;
loc_8217D748:
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x8217d9a8
	if (ctx.cr6.eq) goto loc_8217D9A8;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// beq cr6,0x8217d9a8
	if (ctx.cr6.eq) goto loc_8217D9A8;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x8217d9a8
	if (ctx.cr6.eq) goto loc_8217D9A8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x8217d9a8
	if (ctx.cr6.eq) goto loc_8217D9A8;
	// lwz r8,208(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 208);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8217d9a8
	if (ctx.cr6.eq) goto loc_8217D9A8;
	// lwz r9,212(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 212);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8217d9a8
	if (ctx.cr6.eq) goto loc_8217D9A8;
	// addi r11,r28,55
	ctx.r11.s64 = r28.s64 + 55;
	// rlwinm r26,r11,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r26,r27
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + r27.u32);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bge cr6,0x8217d9a8
	if (!ctx.cr6.lt) goto loc_8217D9A8;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8217D798:
	// lwz r11,216(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 216);
	// li r6,40
	ctx.r6.s64 = 40;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mulli r10,r11,80
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(80));
	// divwu r6,r5,r6
	ctx.r6.u64 = uint32_t(ctx.r6.u32 ? ctx.r5.u32 / ctx.r6.u32 : 0);
	// add r31,r10,r9
	r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r10,r6,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(40));
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// mulli r11,r11,68
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(68));
	// stw r10,216(r27)
	REX_STORE_U32(r27.u32 + 216, ctx.r10.u32);
	// lbz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 76);
	// add r30,r11,r8
	r30.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8217d7e0
	if (ctx.cr0.eq) goto loc_8217D7E0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r7,40
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 40, ctx.xer);
	// blt cr6,0x8217d798
	if (ctx.cr6.lt) goto loc_8217D798;
	// b 0x8217d9a8
	goto loc_8217D9A8;
loc_8217D7E0:
	// addi r4,r27,112
	ctx.r4.s64 = r27.s64 + 112;
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8217D7F0;
	sub_822D4FA0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r28,0(r30)
	REX_STORE_U16(r30.u32 + 0, r28.u16);
	// sth r10,2(r30)
	REX_STORE_U16(r30.u32 + 2, ctx.r10.u16);
	// bl 0x821fee88
	ctx.lr = 0x8217D800;
	sub_821FEE88(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r11,13128
	r28.s64 = ctx.r11.s64 + 13128;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,16272(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16272);
	ctx.f0.f64 = double(temp.f32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lbz r11,1827(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 1827);
	// li r4,8
	ctx.r4.s64 = 8;
	// lfs f13,16232(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16232);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// fmadds f12,f1,f0,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// lfs f0,2356(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2356);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,26932(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 26932);
	ctx.f13.f64 = double(temp.f32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,4(r30)
	REX_STORE_U16(r30.u32 + 4, ctx.r11.u16);
	// lfs f0,1836(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 1836);
	ctx.f0.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bl 0x8217b018
	ctx.lr = 0x8217D88C;
	sub_8217B018(ctx, base);
	// bl 0x821fecf0
	ctx.lr = 0x8217D890;
	sub_821FECF0(ctx, base);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217d8a4
	if (ctx.cr0.eq) goto loc_8217D8A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8217d8ac
	goto loc_8217D8AC;
loc_8217D8A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f0.f64 = double(temp.f32);
loc_8217D8AC:
	// stfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// add r29,r25,r29
	r29.u64 = r25.u64 + r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,43
	ctx.r4.s64 = 43;
	// bl 0x8211f870
	ctx.lr = 0x8217D8C8;
	sub_8211F870(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8211f870
	ctx.lr = 0x8217D8DC;
	sub_8211F870(ctx, base);
	// addi r29,r30,36
	r29.s64 = r30.s64 + 36;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1ba8
	ctx.lr = 0x8217D8F0;
	sub_820E1BA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e2290
	ctx.lr = 0x8217D8FC;
	sub_820E2290(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1836(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 1836);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f13,16204(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16204);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x820e1cc0
	ctx.lr = 0x8217D918;
	sub_820E1CC0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lis r8,-32170
	ctx.r8.s64 = -2108293120;
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16704);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// lwz r11,29428(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 29428);
	// lwz r10,184(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// addi r9,r11,184
	ctx.r9.s64 = ctx.r11.s64 + 184;
	// stw r10,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r10.u32);
	// lwz r10,188(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// stw r10,56(r30)
	REX_STORE_U32(r30.u32 + 56, ctx.r10.u32);
	// lwz r10,192(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// stw r10,60(r30)
	REX_STORE_U32(r30.u32 + 60, ctx.r10.u32);
	// lwz r11,196(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 196);
	// stw r11,64(r30)
	REX_STORE_U32(r30.u32 + 64, ctx.r11.u32);
	// lwzx r11,r26,r27
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + r27.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r26,r27
	REX_STORE_U32(r26.u32 + r27.u32, ctx.r11.u32);
loc_8217D9A8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82186DE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82186DF0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,60(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r28,r3,60
	r28.s64 = ctx.r3.s64 + 60;
	// b 0x82186e2c
	goto loc_82186E2C;
loc_82186E04:
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82186e28
	if (ctx.cr6.eq) goto loc_82186E28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82184510
	ctx.lr = 0x82186E18;
	sub_82184510(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c80a8
	ctx.lr = 0x82186E20;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82186E28:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82186E2C:
	// lwz r11,64(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 64);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82186e04
	if (!ctx.cr6.eq) goto loc_82186E04;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,4(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x822ba200
	ctx.lr = 0x82186E4C;
	sub_822BA200(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82188300) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,80(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82188448) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82188318
	ctx.lr = 0x82188468;
	sub_82188318(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82188478
	if (!ctx.cr0.eq) goto loc_82188478;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821884b0
	goto loc_821884B0;
loc_82188478:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82184fd0
	ctx.lr = 0x82188484;
	sub_82184FD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821884a4
	if (!ctx.cr0.eq) goto loc_821884A4;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r10,96(r31)
	REX_STORE_U64(r31.u32 + 96, ctx.r10.u64);
	// b 0x821884b0
	goto loc_821884B0;
loc_821884A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_821884B0:
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

DEFINE_REX_FUNC(sub_82189B38) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8218A5D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f5,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f4,16(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8218a604
	if (ctx.cr6.gt) goto loc_8218A604;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
loc_8218A604:
	// fcmpu cr6,f3,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bgt cr6,0x8218a610
	if (ctx.cr6.gt) goto loc_8218A610;
	// fmr f3,f13
	ctx.f3.f64 = ctx.f13.f64;
loc_8218A610:
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// stfs f1,28(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f2,32(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f3,36(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218D470) {
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
	ctx.lr = 0x8218D478;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r31,r11,30696
	r31.s64 = ctx.r11.s64 + 30696;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,30712(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 30712);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lfs f31,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8218d4d8
	if (!ctx.cr0.eq) goto loc_8218D4D8;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f31,12(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lfs f0,-30248(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -30248);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,30712(r10)
	REX_STORE_U32(ctx.r10.u32 + 30712, ctx.r11.u32);
	// lfs f13,17064(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 17064);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16268(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16268);
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
loc_8218D4D8:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,6272
	ctx.r3.s64 = r30.s64 + 6272;
	// bl 0x8215bcc8
	ctx.lr = 0x8218D4EC;
	sub_8215BCC8(ctx, base);
	// stfs f31,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1bf0
	ctx.lr = 0x8218D504;
	sub_820E1BF0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821a6b40
	ctx.lr = 0x8218D50C;
	sub_821A6B40(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8219cb70
	ctx.lr = 0x8218D51C;
	sub_8219CB70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,2008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f1.f64 = double(temp.f32);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218fe60
	ctx.lr = 0x8218D544;
	sub_8218FE60(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8218d568
	if (!ctx.cr6.eq) goto loc_8218D568;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821a13a8
	ctx.lr = 0x8218D568;
	sub_821A13A8(ctx, base);
loc_8218D568:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82191310) {
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
	// lhz r11,82(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 82);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,88(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// sth r11,82(r31)
	REX_STORE_U16(r31.u32 + 82, ctx.r11.u16);
	// beq cr6,0x8219134c
	if (ctx.cr6.eq) goto loc_8219134C;
	// bl 0x8229a710
	ctx.lr = 0x82191344;
	sub_8229A710(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// bl 0x822cb488
	ctx.lr = 0x8219134C;
	sub_822CB488(ctx, base);
loc_8219134C:
	// lhz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82191374
	if (ctx.cr6.lt) goto loc_82191374;
	// bne cr6,0x821913d4
	if (!ctx.cr6.eq) goto loc_821913D4;
	// lha r11,82(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 82));
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x821913d4
	if (!ctx.cr6.gt) goto loc_821913D4;
	// li r11,12
	ctx.r11.s64 = 12;
	// stb r11,36(r31)
	REX_STORE_U8(r31.u32 + 36, ctx.r11.u8);
	// b 0x821913d4
	goto loc_821913D4;
loc_82191374:
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821913d4
	if (ctx.cr6.eq) goto loc_821913D4;
	// bl 0x822caf80
	ctx.lr = 0x82191384;
	sub_822CAF80(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82191394
	if (!ctx.cr0.eq) goto loc_82191394;
	// stw r30,100(r31)
	REX_STORE_U32(r31.u32 + 100, r30.u32);
loc_82191394:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,1888(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1888);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821913ac
	if (!ctx.cr6.eq) goto loc_821913AC;
	// stw r30,100(r31)
	REX_STORE_U32(r31.u32 + 100, r30.u32);
loc_821913AC:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821913d4
	if (ctx.cr6.eq) goto loc_821913D4;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821913c8
	if (!ctx.cr6.eq) goto loc_821913C8;
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// bl 0x822cb430
	ctx.lr = 0x821913C8;
	sub_822CB430(ctx, base);
loc_821913C8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r30,80(r31)
	REX_STORE_U16(r31.u32 + 80, r30.u16);
	// sth r11,82(r31)
	REX_STORE_U16(r31.u32 + 82, ctx.r11.u16);
loc_821913D4:
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

DEFINE_REX_FUNC(sub_82195AA8) {
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
	// lwz r30,136(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82195ae4
	if (ctx.cr6.eq) goto loc_82195AE4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e48c0
	ctx.lr = 0x82195AD4;
	sub_820E48C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c80a8
	ctx.lr = 0x82195ADC;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r11.u32);
loc_82195AE4:
	// lwz r3,280(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 280);
	// bl 0x820e73c0
	ctx.lr = 0x82195AEC;
	sub_820E73C0(ctx, base);
	// lwz r3,284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 284);
	// bl 0x820e73c0
	ctx.lr = 0x82195AF4;
	sub_820E73C0(ctx, base);
	// lwz r3,288(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 288);
	// bl 0x820e73c0
	ctx.lr = 0x82195AFC;
	sub_820E73C0(ctx, base);
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

DEFINE_REX_FUNC(sub_82198A10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82198A18;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,4392
	ctx.r10.s64 = ctx.r10.s64 + 4392;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// bl 0x821943f8
	ctx.lr = 0x82198A50;
	sub_821943F8(ctx, base);
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r29,128(r31)
	REX_STORE_U32(r31.u32 + 128, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82199CF0) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r11,31856(r10)
	REX_STORE_U32(ctx.r10.u32 + 31856, ctx.r11.u32);
	// beq cr6,0x82199d60
	if (ctx.cr6.eq) goto loc_82199D60;
	// lwz r9,40(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r9,r9,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82199d38
	if (ctx.cr0.eq) goto loc_82199D38;
	// blt cr6,0x82199d4c
	if (ctx.cr6.lt) goto loc_82199D4C;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82199d50
	if (!ctx.cr6.gt) goto loc_82199D50;
	// b 0x82199d3c
	goto loc_82199D3C;
loc_82199D38:
	// bge cr6,0x82199d44
	if (!ctx.cr6.lt) goto loc_82199D44;
loc_82199D3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82199d50
	goto loc_82199D50;
loc_82199D44:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82199d50
	if (!ctx.cr6.gt) goto loc_82199D50;
loc_82199D4C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82199D50:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82199d60
	if (ctx.cr6.eq) goto loc_82199D60;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_82199D60:
	// lwz r8,36(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82199e28
	if (ctx.cr6.eq) goto loc_82199E28;
	// lwz r9,40(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm. r7,r9,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82199de8
	if (ctx.cr0.eq) goto loc_82199DE8;
	// beq cr6,0x82199db8
	if (ctx.cr6.eq) goto loc_82199DB8;
	// rlwinm. r9,r9,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82199dac
	if (ctx.cr0.eq) goto loc_82199DAC;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x82199dcc
	goto loc_82199DCC;
loc_82199DAC:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82199dcc
	goto loc_82199DCC;
loc_82199DB8:
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82199DCC:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x82199ddc
	goto loc_82199DDC;
loc_82199DD4:
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwzu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
loc_82199DDC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82199dd4
	if (!ctx.cr6.eq) goto loc_82199DD4;
	// b 0x82199e28
	goto loc_82199E28;
loc_82199DE8:
	// beq cr6,0x82199e0c
	if (ctx.cr6.eq) goto loc_82199E0C;
	// rlwinm. r9,r9,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82199e00
	if (ctx.cr0.eq) goto loc_82199E00;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82199e10
	goto loc_82199E10;
loc_82199E00:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82199e10
	goto loc_82199E10;
loc_82199E0C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82199E10:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x82199e20
	goto loc_82199E20;
loc_82199E18:
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwzu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
loc_82199E20:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82199e18
	if (!ctx.cr6.eq) goto loc_82199E18;
loc_82199E28:
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82199e44
	if (ctx.cr6.eq) goto loc_82199E44;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82199E40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82199e48
	goto loc_82199E48;
loc_82199E44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82199E48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219EE4C) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219EF50) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mulli r10,r4,80
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(80));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// stfs f1,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f2,36(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f3,40(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219FF60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r10,76(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lwz r7,52(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r9,30520
	ctx.r6.s64 = ctx.r9.s64 + 30520;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,32(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// rlwinm r10,r10,8,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	// sth r11,8(r3)
	REX_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// stb r9,11(r3)
	REX_STORE_U8(ctx.r3.u32 + 11, ctx.r9.u8);
	// addi r31,r3,84
	r31.s64 = ctx.r3.s64 + 84;
	// stb r10,10(r3)
	REX_STORE_U8(ctx.r3.u32 + 10, ctx.r10.u8);
	// li r30,8
	r30.s64 = 8;
	// lwz r10,52(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 52);
	// lfs f0,1996(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lfs f13,2012(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 2012);
	ctx.f13.f64 = double(temp.f32);
	// lhz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stb r10,24(r3)
	REX_STORE_U8(ctx.r3.u32 + 24, ctx.r10.u8);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stb r11,25(r3)
	REX_STORE_U8(ctx.r3.u32 + 25, ctx.r11.u8);
	// stb r11,26(r3)
	REX_STORE_U8(ctx.r3.u32 + 26, ctx.r11.u8);
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// stb r8,29(r3)
	REX_STORE_U8(ctx.r3.u32 + 29, ctx.r8.u8);
	// stb r9,30(r3)
	REX_STORE_U8(ctx.r3.u32 + 30, ctx.r9.u8);
	// stb r30,31(r3)
	REX_STORE_U8(ctx.r3.u32 + 31, r30.u8);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A25D8) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x821a2608
	if (!ctx.cr6.gt) goto loc_821A2608;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-18416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18416);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821a2610
	goto loc_821A2610;
loc_821A2608:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-18468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18468);
	ctx.f1.f64 = double(temp.f32);
loc_821A2610:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,15968(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15968);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x821a3a18
	ctx.lr = 0x821A261C;
	sub_821A3A18(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lfs f2,26552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26552);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x821a3a18
	ctx.lr = 0x821A2630;
	sub_821A3A18(ctx, base);
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

DEFINE_REX_FUNC(sub_821A3848) {
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
	ctx.lr = 0x821A3850;
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// addic. r29,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	r29.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r27,r4,256
	r27.s64 = ctx.r4.s64 + 256;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// ble 0x821a3984
	if (!ctx.cr0.gt) goto loc_821A3984;
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r11.u64);
	// lfd f0,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r31,-32256
	r31.s64 = -2113929216;
	// rlwinm r28,r9,4,0,27
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// lfs f12,2008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1996(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1996);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,16172(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16172);
	ctx.f13.f64 = double(temp.f32);
loc_821A38AC:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821a3974
	if (!ctx.cr6.gt) goto loc_821A3974;
	// addi r8,r4,-16
	ctx.r8.s64 = ctx.r4.s64 + -16;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r31,r30,4,0,27
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r4,r28,r4
	ctx.r4.u64 = r28.u64 + ctx.r4.u64;
loc_821A38CC:
	// add r10,r31,r27
	ctx.r10.u64 = r31.u64 + r27.u64;
	// lfsx f9,r31,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + r27.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f7,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f6,f6,f7
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// lfs f5,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// fmadds f9,f9,f12,f5
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f5.f64)));
	// fmadds f8,f4,f0,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f8.f64)));
	// fmadds f8,f8,f0,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f6.f64)));
	// fsubs f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fmadds f9,f9,f0,f7
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f7.f64)));
	// stfs f9,8(r8)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lfs f9,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fsubs f4,f9,f6
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// fmadds f9,f6,f12,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f9.f64)));
	// fsubs f7,f7,f8
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmadds f6,f4,f0,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f5.f64)));
	// fmadds f7,f6,f0,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f7.f64)));
	// fsubs f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fmadds f9,f9,f0,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f8.f64)));
	// stfs f9,12(r8)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lfs f9,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fsubs f4,f9,f6
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// fmadds f9,f6,f12,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f9.f64)));
	// fsubs f7,f7,f8
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmadds f6,f4,f0,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f5.f64)));
	// fmadds f7,f6,f0,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f7.f64)));
	// fsubs f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fmadds f9,f9,f0,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f8.f64)));
	// stfsu f9,16(r8)
	ea = 16 + ctx.r8.u32;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// bdnz 0x821a38cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A38CC;
loc_821A3974:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// blt cr6,0x821a38ac
	if (ctx.cr6.lt) goto loc_821A38AC;
loc_821A3984:
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// lfs f0,-16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,-12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821A9CF8) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a9d28
	if (ctx.cr6.eq) goto loc_821A9D28;
	// bl 0x822c80a8
	ctx.lr = 0x821A9D24;
	sub_822C80A8(ctx, base);
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
loc_821A9D28:
	// lwz r3,312(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 312);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a9d3c
	if (ctx.cr6.eq) goto loc_821A9D3C;
	// bl 0x822c80a8
	ctx.lr = 0x821A9D38;
	sub_822C80A8(ctx, base);
	// stw r30,312(r31)
	REX_STORE_U32(r31.u32 + 312, r30.u32);
loc_821A9D3C:
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

DEFINE_REX_FUNC(sub_821AAA10) {
	REX_FUNC_PROLOGUE();
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AB048) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r8,37
	ctx.r8.s64 = 2424832;
	// lfs f2,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f5,16032(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16032);
	ctx.f5.f64 = double(temp.f32);
	// ori r8,r8,37
	ctx.r8.u64 = ctx.r8.u64 | 37;
	// lfs f4,16036(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16036);
	ctx.f4.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lfs f3,16656(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16656);
	ctx.f3.f64 = double(temp.f32);
	// b 0x821e8688
	sub_821E8688(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821AC9F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821ACA00;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lwz r10,220(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r11,16468(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16468);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x821acae8
	if (ctx.cr6.gt) goto loc_821ACAE8;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// addi r9,r3,2059
	ctx.r9.s64 = ctx.r3.s64 + 2059;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lhax r10,r9,r10
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32));
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f12,8436(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8436);
	ctx.f12.f64 = double(temp.f32);
	// lha r5,16476(r11)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 16476));
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f13,19796(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 19796);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f11,8444(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8444);
	ctx.f11.f64 = double(temp.f32);
	// lha r4,16474(r11)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 16474));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// frsp f10,f0
	ctx.f10.f64 = double(float(ctx.f0.f64));
	// lfs f0,-24240(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -24240);
	ctx.f0.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// fmadds f13,f10,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f13.f64)));
	// lfs f0,1992(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f10,f12,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f11.f64)));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x821aad08
	ctx.lr = 0x821ACAA8;
	sub_821AAD08(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-11288
	ctx.r11.s64 = ctx.r11.s64 + -11288;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r29,1
	r29.s64 = 1;
	// addi r30,r10,-11352
	r30.s64 = ctx.r10.s64 + -11352;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// stb r29,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, r29.u8);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821acae8
	if (!ctx.cr6.eq) goto loc_821ACAE8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,25
	ctx.r3.s64 = 25;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x821ACAE4;
	sub_8212BC38(ctx, base);
	// stwx r29,r31,r30
	REX_STORE_U32(r31.u32 + r30.u32, r29.u32);
loc_821ACAE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821B2DD8) {
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
	ctx.lr = 0x821B2DE0;
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
	// bl 0x821c0618
	ctx.lr = 0x821B2DF4;
	sub_821C0618(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,5768(r31)
	REX_STORE_U32(r31.u32 + 5768, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,5772(r31)
	REX_STORE_U32(r31.u32 + 5772, r29.u32);
	// bl 0x821bf0f8
	ctx.lr = 0x821B2E0C;
	sub_821BF0F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bf0f8
	ctx.lr = 0x821B2E18;
	sub_821BF0F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c3190
	ctx.lr = 0x821B2E20;
	sub_821C3190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e0cc8
	ctx.lr = 0x821B2E28;
	sub_821E0CC8(ctx, base);
	// bl 0x821a4078
	ctx.lr = 0x821B2E2C;
	sub_821A4078(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821cd298
	ctx.lr = 0x821B2E34;
	sub_821CD298(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821cb7d0
	ctx.lr = 0x821B2E3C;
	sub_821CB7D0(ctx, base);
	// addi r3,r31,16540
	ctx.r3.s64 = r31.s64 + 16540;
	// bl 0x821d8b18
	ctx.lr = 0x821B2E44;
	sub_821D8B18(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b2e9c
	if (ctx.cr6.eq) goto loc_821B2E9C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lhz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 25, ctx.xer);
	// bne cr6,0x821b2e74
	if (!ctx.cr6.eq) goto loc_821B2E74;
	// lhz r10,140(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x821b2e9c
	if (ctx.cr6.eq) goto loc_821B2E9C;
loc_821B2E74:
	// lhz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 88);
	// cmplwi cr6,r10,25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 25, ctx.xer);
	// bne cr6,0x821b2e9c
	if (!ctx.cr6.eq) goto loc_821B2E9C;
	// lhz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 140);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x821b2e9c
	if (!ctx.cr6.eq) goto loc_821B2E9C;
	// addi r4,r11,876
	ctx.r4.s64 = ctx.r11.s64 + 876;
	// addi r3,r31,876
	ctx.r3.s64 = r31.s64 + 876;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x822d4fa0
	ctx.lr = 0x821B2E9C;
	sub_822D4FA0(ctx, base);
loc_821B2E9C:
	// lhz r11,5452(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 5452);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsh r28,r11
	r28.s64 = ctx.r11.s16;
	// lfs f31,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// sth r11,5454(r31)
	REX_STORE_U16(r31.u32 + 5454, ctx.r11.u16);
	// lha r11,30(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 30));
	// lfs f30,28724(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28724);
	f30.f64 = double(temp.f32);
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821b2f90
	if (ctx.cr6.eq) goto loc_821B2F90;
	// ble cr6,0x821b2f9c
	if (!ctx.cr6.gt) goto loc_821B2F9C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x821b2f74
	if (!ctx.cr6.gt) goto loc_821B2F74;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821b2f4c
	if (ctx.cr6.eq) goto loc_821B2F4C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x821b2f40
	if (ctx.cr6.eq) goto loc_821B2F40;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x821b2f9c
	if (!ctx.cr6.eq) goto loc_821B2F9C;
	// lwz r11,5424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b2f68
	if (!ctx.cr6.eq) goto loc_821B2F68;
	// lbz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 6);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lha r3,5452(r11)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 5452));
	// bne 0x821b2f20
	if (!ctx.cr0.eq) goto loc_821B2F20;
	// bl 0x82135dc0
	ctx.lr = 0x821B2F10;
	sub_82135DC0(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x821b2f30
	goto loc_821B2F30;
loc_821B2F20:
	// bl 0x82135f60
	ctx.lr = 0x821B2F24;
	sub_82135F60(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
loc_821B2F30:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,5480(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 5480, temp.u32);
	// b 0x821b2f88
	goto loc_821B2F88;
loc_821B2F40:
	// mr r28,r29
	r28.u64 = r29.u64;
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f30.f64;
	// b 0x821b2f9c
	goto loc_821B2F9C;
loc_821B2F4C:
	// lbz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 6);
	// sth r29,5452(r31)
	REX_STORE_U16(r31.u32 + 5452, r29.u16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821b2f9c
	if (!ctx.cr0.eq) goto loc_821B2F9C;
	// lha r11,19272(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 19272));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821b2f9c
	if (!ctx.cr0.gt) goto loc_821B2F9C;
loc_821B2F68:
	// lfs f0,5480(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5480);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x821b2f94
	goto loc_821B2F94;
loc_821B2F74:
	// lwz r11,5424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5424);
	// lfs f0,5480(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5480);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b2f94
	if (!ctx.cr6.eq) goto loc_821B2F94;
loc_821B2F88:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64;
	// b 0x821b2f94
	goto loc_821B2F94;
loc_821B2F90:
	// lfs f13,5480(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5480);
	ctx.f13.f64 = double(temp.f32);
loc_821B2F94:
	// fcmpu cr6,f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
	// blt cr6,0x821b2fa0
	if (ctx.cr6.lt) goto loc_821B2FA0;
loc_821B2F9C:
	// fmr f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f30.f64;
loc_821B2FA0:
	// stfs f13,5480(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 5480, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f31,5488(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5488, temp.u32);
	// stfs f31,7216(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 7216, temp.u32);
	// stfs f31,7208(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 7208, temp.u32);
	// stfs f13,5468(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 5468, temp.u32);
	// stfs f0,5484(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5484, temp.u32);
	// lhz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 260);
	// sth r11,258(r30)
	REX_STORE_U16(r30.u32 + 258, ctx.r11.u16);
	// bl 0x821b1628
	ctx.lr = 0x821B2FC8;
	sub_821B1628(ctx, base);
	// lhz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821b301c
	if (!ctx.cr6.eq) goto loc_821B301C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c54e0
	ctx.lr = 0x821B2FDC;
	sub_821C54E0(ctx, base);
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lis r30,-32168
	r30.s64 = -2108162048;
	// lfs f2,5484(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r10,r10,62
	ctx.r10.s64 = ctx.r10.s64 + 62;
	// lwz r11,-9828(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -9828);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x821e3858
	ctx.lr = 0x821B3008;
	sub_821E3858(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,-9828(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -9828);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x821e5d80
	ctx.lr = 0x821B301C;
	sub_821E5D80(ctx, base);
loc_821B301C:
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

DEFINE_REX_FUNC(sub_821C15B8) {
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
	// lwz r9,5780(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 5780);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821c15ec
	if (!ctx.cr6.eq) goto loc_821C15EC;
	// lwz r11,5784(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c162c
	if (ctx.cr6.eq) goto loc_821C162C;
loc_821C15EC:
	// lwz r11,5788(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5788);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x821c162c
	if (!ctx.cr6.eq) goto loc_821C162C;
	// lwz r11,5792(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5792);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,194(r31)
	REX_STORE_U8(r31.u32 + 194, ctx.r10.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r10,217(r31)
	REX_STORE_U8(r31.u32 + 217, ctx.r10.u8);
	// stb r10,195(r31)
	REX_STORE_U8(r31.u32 + 195, ctx.r10.u8);
	// beq cr6,0x821c1624
	if (ctx.cr6.eq) goto loc_821C1624;
	// lwz r10,5784(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// stw r11,5900(r31)
	REX_STORE_U32(r31.u32 + 5900, ctx.r11.u32);
	// stw r9,5904(r31)
	REX_STORE_U32(r31.u32 + 5904, ctx.r9.u32);
	// stw r10,5908(r31)
	REX_STORE_U32(r31.u32 + 5908, ctx.r10.u32);
loc_821C1624:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,5896(r31)
	REX_STORE_U32(r31.u32 + 5896, ctx.r11.u32);
loc_821C162C:
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r30,520
	ctx.r10.s64 = r30.s64 + 520;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821C1638:
	// li r11,-1
	ctx.r11.s64 = -1;
	// sthu r11,20(r10)
	ea = 20 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x821c1638
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C1638;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bfd38
	ctx.lr = 0x821C1650;
	sub_821BFD38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bfba0
	ctx.lr = 0x821C165C;
	sub_821BFBA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821be4f8
	ctx.lr = 0x821C1664;
	sub_821BE4F8(ctx, base);
	// bl 0x821a4cc8
	ctx.lr = 0x821C1668;
	sub_821A4CC8(ctx, base);
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

DEFINE_REX_FUNC(sub_821C3F50) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// sth r11,16(r10)
	REX_STORE_U16(ctx.r10.u32 + 16, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C4558) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,4
	ctx.r10.s64 = 4;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r9,r11,-12496
	ctx.r9.s64 = ctx.r11.s64 + -12496;
	// addi r11,r3,15404
	ctx.r11.s64 = ctx.r3.s64 + 15404;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
loc_821C457C:
	// lwz r8,10140(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 10140);
	// lhzu r10,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r8,r10,20028
	ctx.r8.s64 = ctx.r10.s64 + 20028;
	// lfs f13,20076(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20076);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f13,20080(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20080);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f13,20084(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20084);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfsu f0,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c457c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C457C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C5770) {
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
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r10,r10,-9448
	ctx.r10.s64 = ctx.r10.s64 + -9448;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// lha r11,80(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 80));
	// mulli r11,r11,120
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(120));
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ld r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U64(r31.u32 + 8);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x821c57b4
	if (ctx.cr6.eq) goto loc_821C57B4;
	// bl 0x821f7908
	ctx.lr = 0x821C57AC;
	sub_821F7908(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
loc_821C57B4:
	// addic. r3,r31,64
	ctx.xer.ca = r31.u32 > 4294967231;
	ctx.r3.s64 = r31.s64 + 64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821c57c0
	if (ctx.cr0.eq) goto loc_821C57C0;
	// bl 0x821f5538
	ctx.lr = 0x821C57C0;
	sub_821F5538(ctx, base);
loc_821C57C0:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-7176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7176);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821c57e8
	if (ctx.cr6.eq) goto loc_821C57E8;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,7856
	ctx.r9.s64 = ctx.r10.s64 + 7856;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,6585(r9)
	REX_STORE_U8(ctx.r9.u32 + 6585, ctx.r11.u8);
	// stb r10,6584(r9)
	REX_STORE_U8(ctx.r9.u32 + 6584, ctx.r10.u8);
loc_821C57E8:
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

DEFINE_REX_FUNC(sub_821C7108) {
	REX_FUNC_PROLOGUE();
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r3,19272
	ctx.r11.s64 = ctx.r3.s64 + 19272;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821C7120:
	// stbx r8,r7,r10
	REX_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x821c7120
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C7120;
	// sth r8,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r8.u16);
	// sth r8,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C78C0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lha r10,30(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 30));
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x821c78dc
	if (ctx.cr6.eq) goto loc_821C78DC;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// bne cr6,0x821c78e8
	if (!ctx.cr6.eq) goto loc_821C78E8;
loc_821C78DC:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x821c78e8
	if (!ctx.cr6.eq) goto loc_821C78E8;
	// li r4,2
	ctx.r4.s64 = 2;
loc_821C78E8:
	// clrlwi. r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stb r9,6(r3)
	REX_STORE_U8(ctx.r3.u32 + 6, ctx.r9.u8);
	// bne 0x821c7910
	if (!ctx.cr0.eq) goto loc_821C7910;
	// lbz r9,6(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x821c7910
	if (!ctx.cr0.eq) goto loc_821C7910;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,18(r11)
	REX_STORE_U8(ctx.r11.u32 + 18, ctx.r10.u8);
	// blr 
	return;
loc_821C7910:
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,18(r11)
	REX_STORE_U8(ctx.r11.u32 + 18, ctx.r9.u8);
	// lbz r9,6(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 6);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x821c792c
	if (!ctx.cr0.eq) goto loc_821C792C;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x821c7934
	goto loc_821C7934;
loc_821C792C:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_821C7934:
	// stw r10,216(r11)
	REX_STORE_U32(ctx.r11.u32 + 216, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,220(r11)
	REX_STORE_U32(ctx.r11.u32 + 220, ctx.r9.u32);
	// lbz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,22(r11)
	REX_STORE_U8(ctx.r11.u32 + 22, ctx.r9.u8);
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// stb r9,21(r11)
	REX_STORE_U8(ctx.r11.u32 + 21, ctx.r9.u8);
	// stb r8,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C9268) {
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
	// cmpwi cr6,r3,19
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 19, ctx.xer);
	// beq cr6,0x821c9288
	if (ctx.cr6.eq) goto loc_821C9288;
	// cmpwi cr6,r3,24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 24, ctx.xer);
	// bne cr6,0x821c9290
	if (!ctx.cr6.eq) goto loc_821C9290;
loc_821C9288:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821c92bc
	goto loc_821C92BC;
loc_821C9290:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// bge cr6,0x821c92a0
	if (!ctx.cr6.lt) goto loc_821C92A0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_821C92A0:
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-17520
	ctx.r10.s64 = ctx.r10.s64 + -17520;
	// lhax r31,r11,r10
	r31.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
	// bl 0x82135908
	ctx.lr = 0x821C92B4;
	sub_82135908(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
loc_821C92BC:
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

DEFINE_REX_FUNC(sub_821CA5E8) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r11,432(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 432);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821ca6d8
	if (!ctx.cr0.eq) goto loc_821CA6D8;
	// lbz r30,188(r3)
	r30.u64 = REX_LOAD_U8(ctx.r3.u32 + 188);
	// cmpwi r30,0
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821ca640
	if (ctx.cr0.eq) goto loc_821CA640;
	// lfs f0,8136(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8136);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8128(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8128);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,16188(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16188);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821ca64c
	if (!ctx.cr6.lt) goto loc_821CA64C;
	// b 0x821ca6d8
	goto loc_821CA6D8;
loc_821CA640:
	// lbz r11,330(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 330);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821ca6d8
	if (!ctx.cr0.eq) goto loc_821CA6D8;
loc_821CA64C:
	// lfs f0,5736(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5736);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,10272(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10272);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bl 0x821af850
	ctx.lr = 0x821CA65C;
	sub_821AF850(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f31,2012(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x821ca684
	if (ctx.cr6.gt) goto loc_821CA684;
	// li r5,0
	ctx.r5.s64 = 0;
loc_821CA684:
	// bl 0x821bf940
	ctx.lr = 0x821CA688;
	sub_821BF940(ctx, base);
	// lfs f0,5740(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5740);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,10272(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10272);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bl 0x821af850
	ctx.lr = 0x821CA698;
	sub_821AF850(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x821ca6b8
	if (ctx.cr6.gt) goto loc_821CA6B8;
	// li r5,0
	ctx.r5.s64 = 0;
loc_821CA6B8:
	// bl 0x821bf940
	ctx.lr = 0x821CA6BC;
	sub_821BF940(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x821ca6d8
	if (ctx.cr6.eq) goto loc_821CA6D8;
	// li r6,4
	ctx.r6.s64 = 4;
	// lbz r5,207(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 207);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bf940
	ctx.lr = 0x821CA6D8;
	sub_821BF940(ctx, base);
loc_821CA6D8:
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

DEFINE_REX_FUNC(sub_821D1468) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D14D8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lbz r11,-8915(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -8915);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r3,60
	ctx.r3.s64 = 60;
	// b 0x821d4528
	sub_821D4528(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D1678) {
	REX_FUNC_PROLOGUE();
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -24, f30.u64);
	// stfd f31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821d16f8
	if (!ctx.cr6.eq) goto loc_821D16F8;
	// bl 0x821dcdc0
	ctx.lr = 0x821D1698;
	sub_821DCDC0(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
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
	// lfs f0,13088(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 13088);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x821fed88
	ctx.lr = 0x821D16BC;
	sub_821FED88(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,16232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16232);
	f31.f64 = double(temp.f32);
	// fmuls f0,f30,f31
	ctx.f0.f64 = double(float(f30.f64 * f31.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x821d16f4
	if (ctx.cr6.lt) goto loc_821D16F4;
	// bl 0x821fedc8
	ctx.lr = 0x821D16D4;
	sub_821FEDC8(ctx, base);
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,26800
	ctx.r3.s64 = ctx.r11.s64 + 26800;
	// ble cr6,0x821d16ec
	if (!ctx.cr6.gt) goto loc_821D16EC;
	// li r4,1
	ctx.r4.s64 = 1;
loc_821D16EC:
	// bl 0x8216e828
	ctx.lr = 0x821D16F0;
	sub_8216E828(ctx, base);
	// b 0x821d16f8
	goto loc_821D16F8;
loc_821D16F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D16F8:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r10,r10,-7176
	ctx.r10.s64 = ctx.r10.s64 + -7176;
	// sth r3,98(r10)
	REX_STORE_U16(ctx.r10.u32 + 98, ctx.r3.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D3938) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-8912(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -8912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-7072
	ctx.r9.s64 = ctx.r11.s64 + -7072;
	// ori r8,r10,23116
	ctx.r8.u64 = ctx.r10.u64 | 23116;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r10,19420(r9)
	REX_STORE_U32(ctx.r9.u32 + 19420, ctx.r10.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stwx r11,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// b 0x821d3060
	sub_821D3060(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D4958) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-8888(r10)
	REX_STORE_U32(ctx.r10.u32 + -8888, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D4DC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r11,5
	ctx.r11.s64 = 5;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r3,576
	ctx.r10.s64 = ctx.r3.s64 + 576;
	// addi r9,r9,13364
	ctx.r9.s64 = ctx.r9.s64 + 13364;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,1996(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_821D4DE8:
	// stfs f0,124(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 124, temp.u32);
	// stw r9,112(r10)
	REX_STORE_U32(ctx.r10.u32 + 112, ctx.r9.u32);
	// stw r11,116(r10)
	REX_STORE_U32(ctx.r10.u32 + 116, ctx.r11.u32);
	// stw r11,120(r10)
	REX_STORE_U32(ctx.r10.u32 + 120, ctx.r11.u32);
	// stdu r11,128(r10)
	ea = 128 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821d4de8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D4DE8;
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// sth r11,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// sth r11,2(r3)
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// sth r11,4(r3)
	REX_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// sth r11,6(r3)
	REX_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
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
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D73E0) {
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
	// bl 0x821c4fd0
	ctx.lr = 0x821D7400;
	sub_821C4FD0(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// beq cr6,0x821d7440
	if (ctx.cr6.eq) goto loc_821D7440;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// beq cr6,0x821d7434
	if (ctx.cr6.eq) goto loc_821D7434;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(r31.s32, 3, ctx.xer);
	// beq cr6,0x821d7420
	if (ctx.cr6.eq) goto loc_821D7420;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821d744c
	goto loc_821D744C;
loc_821D7420:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c7f28
	ctx.lr = 0x821D7430;
	sub_821C7F28(ctx, base);
	// b 0x821d744c
	goto loc_821D744C;
loc_821D7434:
	// lhz r11,126(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 126);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x821d7444
	goto loc_821D7444;
loc_821D7440:
	// lhz r11,126(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 126);
loc_821D7444:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_821D744C:
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

DEFINE_REX_FUNC(sub_821D8830) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r7,r11,432
	ctx.r7.s64 = ctx.r11.s64 + 432;
	// bne cr6,0x821d885c
	if (!ctx.cr6.eq) goto loc_821D885C;
	// lwz r8,220(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 220);
loc_821D885C:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r9,r11,3888
	ctx.r9.s64 = ctx.r11.s64 + 3888;
	// beq cr6,0x821d88f8
	if (ctx.cr6.eq) goto loc_821D88F8;
	// lbz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lha r5,30(r7)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + 30));
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// lwz r10,36(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// mulli r11,r6,36
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(36));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lha r10,88(r8)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + 88));
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lha r10,100(r8)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + 100));
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,17780(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 17780);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r10,17784(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 17784);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r10,17792(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 17792);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821d88c0
	if (ctx.cr6.eq) goto loc_821D88C0;
	// li r10,99
	ctx.r10.s64 = 99;
	// b 0x821d88e4
	goto loc_821D88E4;
loc_821D88C0:
	// lwz r10,17788(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 17788);
	// lwz r5,17772(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 17772);
	// mulli r10,r10,100
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(100));
	// rotlwi r6,r10,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r5
	ctx.r10.u64 = uint32_t((ctx.r5.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r10.s32 / ctx.r5.s32 : 0);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 & ~ctx.r6.u64;
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
loc_821D88E4:
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lha r10,19272(r8)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + 19272));
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lha r10,19312(r8)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + 19312));
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
loc_821D88F8:
	// lbz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mulli r11,r11,36
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(36));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x821d8ab8
	if (ctx.cr6.eq) goto loc_821D8AB8;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x821d8a28
	if (ctx.cr6.eq) goto loc_821D8A28;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x821d89a8
	if (ctx.cr6.eq) goto loc_821D89A8;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bne cr6,0x821d8b00
	if (!ctx.cr6.eq) goto loc_821D8B00;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x821d8968
	if (ctx.cr6.eq) goto loc_821D8968;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x821d8960
	if (ctx.cr6.eq) goto loc_821D8960;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x821d8958
	if (ctx.cr6.eq) goto loc_821D8958;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x821d896c
	goto loc_821D896C;
loc_821D8958:
	// li r5,12
	ctx.r5.s64 = 12;
	// b 0x821d896c
	goto loc_821D896C;
loc_821D8960:
	// li r5,11
	ctx.r5.s64 = 11;
	// b 0x821d896c
	goto loc_821D896C;
loc_821D8968:
	// li r5,10
	ctx.r5.s64 = 10;
loc_821D896C:
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lwz r31,28(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// addi r8,r8,19400
	ctx.r8.s64 = ctx.r8.s64 + 19400;
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r10,28096
	ctx.r3.s64 = ctx.r10.s64 + 28096;
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// clrlwi r6,r30,24
	ctx.r6.u64 = r30.u32 & 0xFF;
	// stb r31,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, r31.u8);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82173c18
	ctx.lr = 0x821D89A4;
	sub_82173C18(ctx, base);
	// b 0x821d8b00
	goto loc_821D8B00;
loc_821D89A8:
	// lwz r9,80(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 80);
	// li r7,3
	ctx.r7.s64 = 3;
	// subfic r6,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r6.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// addi r9,r8,16466
	ctx.r9.s64 = ctx.r8.s64 + 16466;
	// subfe r6,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// rlwinm r7,r6,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8;
	// addi r5,r7,5
	ctx.r5.s64 = ctx.r7.s64 + 5;
loc_821D89C8:
	// lhz r6,6(r9)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + 6);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lhzu r7,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// stbx r6,r10,r3
	REX_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r6.u8);
	// stbx r7,r10,r31
	REX_STORE_U8(ctx.r10.u32 + r31.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x821d89c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D89C8;
	// lwz r30,24(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lwz r31,20(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r9,r8,19400
	ctx.r9.s64 = ctx.r8.s64 + 19400;
	// lwz r6,16468(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 16468);
	// addi r3,r10,28096
	ctx.r3.s64 = ctx.r10.s64 + 28096;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// bl 0x821748e0
	ctx.lr = 0x821D8A24;
	sub_821748E0(ctx, base);
	// b 0x821d8b00
	goto loc_821D8B00;
loc_821D8A28:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x821d8a7c
	if (ctx.cr6.eq) goto loc_821D8A7C;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x821d8a74
	if (ctx.cr6.eq) goto loc_821D8A74;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x821d8a6c
	if (ctx.cr6.eq) goto loc_821D8A6C;
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x821d8a64
	if (ctx.cr6.eq) goto loc_821D8A64;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// beq cr6,0x821d8a5c
	if (ctx.cr6.eq) goto loc_821D8A5C;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x821d8a80
	goto loc_821D8A80;
loc_821D8A5C:
	// li r5,9
	ctx.r5.s64 = 9;
	// b 0x821d8a80
	goto loc_821D8A80;
loc_821D8A64:
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x821d8a80
	goto loc_821D8A80;
loc_821D8A6C:
	// li r5,7
	ctx.r5.s64 = 7;
	// b 0x821d8a80
	goto loc_821D8A80;
loc_821D8A74:
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x821d8a80
	goto loc_821D8A80;
loc_821D8A7C:
	// li r5,2
	ctx.r5.s64 = 2;
loc_821D8A80:
	// lwz r31,24(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r8,r8,19400
	ctx.r8.s64 = ctx.r8.s64 + 19400;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r9,28096
	ctx.r3.s64 = ctx.r9.s64 + 28096;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// stb r10,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r10.u8);
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// bl 0x82173c18
	ctx.lr = 0x821D8AB4;
	sub_82173C18(ctx, base);
	// b 0x821d8b00
	goto loc_821D8B00;
loc_821D8AB8:
	// lwz r6,24(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lis r5,-32175
	ctx.r5.s64 = -2108620800;
	// lwz r9,80(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 80);
	// li r7,6
	ctx.r7.s64 = 6;
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r5,28096
	ctx.r3.s64 = ctx.r5.s64 + 28096;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r8,19400
	ctx.r8.s64 = ctx.r8.s64 + 19400;
	// stb r10,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r10.u8);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r6,r30,24
	ctx.r6.u64 = r30.u32 & 0xFF;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// and r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 & ctx.r7.u64;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi r7,r31,24
	ctx.r7.u64 = r31.u32 & 0xFF;
	// bl 0x82173c18
	ctx.lr = 0x821D8B00;
	sub_82173C18(ctx, base);
loc_821D8B00:
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

DEFINE_REX_FUNC(sub_821E35D0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// lbz r10,336(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 336);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lhz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// ori r10,r10,3072
	ctx.r10.u64 = ctx.r10.u64 | 3072;
	// sth r10,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E44E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x821e44f8
	if (ctx.cr6.eq) goto loc_821E44F8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_821E44F8:
	// lfs f3,124(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// stw r11,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// lfs f2,120(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821e4390
	sub_821E4390(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821E4ED0) {
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
	ctx.lr = 0x821E4ED8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r8,r11,-4408
	ctx.r8.s64 = ctx.r11.s64 + -4408;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r29,-32255
	r29.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f13,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32226
	ctx.r6.s64 = -2111963136;
	// stfs f13,-4408(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -4408, temp.u32);
	// lfs f0,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// li r30,1
	r30.s64 = 1;
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f13,20(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// addi r10,r3,112
	ctx.r10.s64 = ctx.r3.s64 + 112;
	// stfs f13,32(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 32, temp.u32);
	// addi r27,r6,14976
	r27.s64 = ctx.r6.s64 + 14976;
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stfs f0,16(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// li r28,770
	r28.s64 = 770;
	// stfs f0,24(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 24, temp.u32);
	// li r26,4
	r26.s64 = 4;
	// stfs f0,36(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 36, temp.u32);
	// stfs f0,40(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 40, temp.u32);
	// addi r4,r3,164
	ctx.r4.s64 = ctx.r3.s64 + 164;
	// stfs f0,48(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 48, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f0,52(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 52, temp.u32);
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// stfs f0,56(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 56, temp.u32);
	// stw r9,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r9.u32);
	// lfs f13,-18748(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -18748);
	ctx.f13.f64 = double(temp.f32);
	// sth r28,16(r31)
	REX_STORE_U16(r31.u32 + 16, r28.u16);
	// lfs f12,16088(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 16088);
	ctx.f12.f64 = double(temp.f32);
	// stw r27,24(r31)
	REX_STORE_U32(r31.u32 + 24, r27.u32);
	// stfs f13,112(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// std r30,80(r31)
	REX_STORE_U64(r31.u32 + 80, r30.u64);
	// stfs f12,120(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// sth r30,88(r31)
	REX_STORE_U16(r31.u32 + 88, r30.u16);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// stb r7,90(r31)
	REX_STORE_U8(r31.u32 + 90, ctx.r7.u8);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// stw r8,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r8.u32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// stb r30,104(r31)
	REX_STORE_U8(r31.u32 + 104, r30.u8);
	// stb r30,105(r31)
	REX_STORE_U8(r31.u32 + 105, r30.u8);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// stb r11,106(r31)
	REX_STORE_U8(r31.u32 + 106, ctx.r11.u8);
	// stb r11,91(r31)
	REX_STORE_U8(r31.u32 + 91, ctx.r11.u8);
	// stb r11,109(r31)
	REX_STORE_U8(r31.u32 + 109, ctx.r11.u8);
	// stb r26,186(r31)
	REX_STORE_U8(r31.u32 + 186, r26.u8);
	// bl 0x821e3550
	ctx.lr = 0x821E4FC0;
	sub_821E3550(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r30,188(r31)
	REX_STORE_U8(r31.u32 + 188, r30.u8);
	// lfs f13,16640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16640);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16060(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16060);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,168(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821EAA48) {
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
	ctx.lr = 0x821EAA50;
	// stwu r1,-1264(r1)
	ea = -1264 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// stw r5,1300(r1)
	REX_STORE_U32(ctx.r1.u32 + 1300, ctx.r5.u32);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r31,r11,-528
	r31.s64 = ctx.r11.s64 + -528;
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// addi r8,r10,7672
	ctx.r8.s64 = ctx.r10.s64 + 7672;
	// lbz r11,-528(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -528);
	// addi r9,r9,-784
	ctx.r9.s64 = ctx.r9.s64 + -784;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// rotlwi r7,r11,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwzx r9,r7,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// addi r10,r10,-432
	ctx.r10.s64 = ctx.r10.s64 + -432;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r30,0
	r30.s64 = 0;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// stw r6,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// li r25,1
	r25.s64 = 1;
	// lfs f0,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r5,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r5.u32);
	// stw r4,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r4.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// stw r3,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r3.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r30,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// stw r30,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r30.u32);
	// stb r30,160(r1)
	REX_STORE_U8(ctx.r1.u32 + 160, r30.u8);
	// bgt cr6,0x821eab08
	if (ctx.cr6.gt) goto loc_821EAB08;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821e97d8
	ctx.lr = 0x821EAB00;
	sub_821E97D8(ctx, base);
	// neg r27,r27
	r27.s64 = static_cast<int64_t>(-r27.u64);
	// b 0x821eab0c
	goto loc_821EAB0C;
loc_821EAB08:
	// stw r25,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r25.u32);
loc_821EAB0C:
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// std r30,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, r30.u64);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x821eab2c
	if (ctx.cr6.eq) goto loc_821EAB2C;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r26,r10,-26472
	r26.s64 = ctx.r10.s64 + -26472;
	// b 0x821eabfc
	goto loc_821EABFC;
loc_821EAB2C:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r26,r10,-25672
	r26.s64 = ctx.r10.s64 + -25672;
	// lfs f0,17180(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 17180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// b 0x821eabfc
	goto loc_821EABFC;
loc_821EAB44:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplwi cr6,r29,35
	ctx.cr6.compare<uint32_t>(r29.u32, 35, ctx.xer);
	// blt cr6,0x821eabf0
	if (ctx.cr6.lt) goto loc_821EABF0;
	// cmplwi cr6,r29,37
	ctx.cr6.compare<uint32_t>(r29.u32, 37, ctx.xer);
	// ble cr6,0x821eab6c
	if (!ctx.cr6.gt) goto loc_821EAB6C;
	// cmplwi cr6,r29,64
	ctx.cr6.compare<uint32_t>(r29.u32, 64, ctx.xer);
	// bne cr6,0x821eabf0
	if (!ctx.cr6.eq) goto loc_821EABF0;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x821eabf4
	goto loc_821EABF4;
loc_821EAB6C:
	// lbz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 176);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821eab9c
	if (ctx.cr0.eq) goto loc_821EAB9C;
	// stb r30,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r30.u8);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bctrl 
	ctx.lr = 0x821EAB90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// std r30,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, r30.u64);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_821EAB9C:
	// cmplwi cr6,r29,32
	ctx.cr6.compare<uint32_t>(r29.u32, 32, ctx.xer);
	// ble cr6,0x821eabd0
	if (!ctx.cr6.gt) goto loc_821EABD0;
	// addi r11,r28,-1
	ctx.r11.s64 = r28.s64 + -1;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// stw r11,1292(r1)
	REX_STORE_U32(ctx.r1.u32 + 1292, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,1300
	ctx.r5.s64 = ctx.r1.s64 + 1300;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1292
	ctx.r3.s64 = ctx.r1.s64 + 1292;
	// bl 0x821e9d20
	ctx.lr = 0x821EABC4;
	sub_821E9D20(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,1292(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1292);
	// b 0x821eabfc
	goto loc_821EABFC;
loc_821EABD0:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stw r25,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r25.u32);
	// lfs f13,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// b 0x821eabfc
	goto loc_821EABFC;
loc_821EABF0:
	// stb r29,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r29.u8);
loc_821EABF4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_821EABFC:
	// lbz r29,0(r28)
	r29.u64 = REX_LOAD_U8(r28.u32 + 0);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne 0x821eab44
	if (!ctx.cr0.eq) goto loc_821EAB44;
	// stb r30,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r30.u8);
	// lbz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 176);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821eac2c
	if (ctx.cr0.eq) goto loc_821EAC2C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bctrl 
	ctx.lr = 0x821EAC2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EAC2C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x821eac64
	if (ctx.cr6.eq) goto loc_821EAC64;
	// lbz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821eac54
	if (ctx.cr0.eq) goto loc_821EAC54;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stw r25,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r25.u32);
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
loc_821EAC54:
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eaca4
	if (ctx.cr6.eq) goto loc_821EACA4;
	// b 0x821eac98
	goto loc_821EAC98;
loc_821EAC64:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821eac7c
	if (!ctx.cr6.lt) goto loc_821EAC7C;
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821EAC7C:
	// lbz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821eac98
	if (ctx.cr0.eq) goto loc_821EAC98;
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// stw r25,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r25.u32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
loc_821EAC98:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821e97d8
	ctx.lr = 0x821EACA4;
	sub_821E97D8(ctx, base);
loc_821EACA4:
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_821F4D58) {
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
	ctx.lr = 0x821F4D60;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// add r31,r11,r4
	r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821f4cb8
	ctx.lr = 0x821F4D98;
	sub_821F4CB8(ctx, base);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// addi r6,r31,4
	ctx.r6.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// bge cr6,0x821f4df8
	if (!ctx.cr6.lt) goto loc_821F4DF8;
loc_821F4DA8:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// lwz r9,-4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821f4dcc
	if (ctx.cr6.gt) goto loc_821F4DCC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F4DCC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f4df8
	if (!ctx.cr0.eq) goto loc_821F4DF8;
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x821f4de4
	if (ctx.cr6.gt) goto loc_821F4DE4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F4DE4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f4df8
	if (!ctx.cr0.eq) goto loc_821F4DF8;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821f4da8
	if (ctx.cr6.lt) goto loc_821F4DA8;
loc_821F4DF8:
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r29.u32, ctx.xer);
	// bge cr6,0x821f4e4c
	if (!ctx.cr6.lt) goto loc_821F4E4C;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
loc_821F4E08:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821f4e20
	if (ctx.cr6.gt) goto loc_821F4E20;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F4E20:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f4e4c
	if (!ctx.cr0.eq) goto loc_821F4E4C;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x821f4e38
	if (ctx.cr6.gt) goto loc_821F4E38;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F4E38:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f4e4c
	if (!ctx.cr0.eq) goto loc_821F4E4C;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r29.u32, ctx.xer);
	// blt cr6,0x821f4e08
	if (ctx.cr6.lt) goto loc_821F4E08;
loc_821F4E4C:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// b 0x821f4eb0
	goto loc_821F4EB0;
loc_821F4E58:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821f4e78
	if (ctx.cr6.gt) goto loc_821F4E78;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F4E78:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f4eac
	if (!ctx.cr0.eq) goto loc_821F4EAC;
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x821f4e90
	if (ctx.cr6.gt) goto loc_821F4E90;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F4E90:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f4eb8
	if (!ctx.cr0.eq) goto loc_821F4EB8;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r5,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
loc_821F4EA8:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
loc_821F4EAC:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_821F4EB0:
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, ctx.xer);
	// blt cr6,0x821f4e58
	if (ctx.cr6.lt) goto loc_821F4E58;
loc_821F4EB8:
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r30.u32, ctx.xer);
	// ble cr6,0x821f4f24
	if (!ctx.cr6.gt) goto loc_821F4F24;
loc_821F4EC0:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// lwz r5,-4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + -4);
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821f4ee4
	if (ctx.cr6.gt) goto loc_821F4EE4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821F4EE4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821f4f14
	if (!ctx.cr0.eq) goto loc_821F4F14;
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r10,1
	ctx.r10.s64 = 1;
	// bgt cr6,0x821f4efc
	if (ctx.cr6.gt) goto loc_821F4EFC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821F4EFC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821f4f20
	if (!ctx.cr0.eq) goto loc_821F4F20;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzu r10,-4(r8)
	ea = -4 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_821F4F14:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f4ec0
	if (ctx.cr6.lt) goto loc_821F4EC0;
loc_821F4F20:
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r30.u32, ctx.xer);
loc_821F4F24:
	// bne cr6,0x821f4f68
	if (!ctx.cr6.eq) goto loc_821F4F68;
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, ctx.xer);
	// beq cr6,0x821f4fbc
	if (ctx.cr6.eq) goto loc_821F4FBC;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821f4f48
	if (ctx.cr6.eq) goto loc_821F4F48;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
loc_821F4F48:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lwz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r4,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// b 0x821f4ea8
	goto loc_821F4EA8;
loc_821F4F68:
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, ctx.xer);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// bne cr6,0x821f4fa8
	if (!ctx.cr6.eq) goto loc_821F4FA8;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x821f4f94
	if (ctx.cr6.eq) goto loc_821F4F94;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_821F4F94:
	// lwzu r11,-4(r6)
	ea = -4 + ctx.r6.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// b 0x821f4eb0
	goto loc_821F4EB0;
loc_821F4FA8:
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r5,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x821f4eac
	goto loc_821F4EAC;
loc_821F4FBC:
	// stw r8,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r8.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r6,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822008C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822009D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200A68) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82201818) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8220183c
	if (!ctx.cr6.lt) goto loc_8220183C;
	// neg r3,r3
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8220183c
	goto loc_8220183C;
loc_82201830:
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// divw r3,r3,r10
	ctx.r3.u64 = uint32_t((ctx.r10.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r3.s32 / ctx.r10.s32 : 0);
loc_8220183C:
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// bgt cr6,0x82201830
	if (ctx.cr6.gt) goto loc_82201830;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82202C38) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f34
	ctx.lr = 0x82202C50;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f28,f2
	f28.f64 = ctx.f2.f64;
	// fmr f31,f3
	f31.f64 = ctx.f3.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// li r30,0
	r30.s64 = 0;
	// lfs f27,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	f27.f64 = double(temp.f32);
	// lfs f29,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f29.f64 = double(temp.f32);
	// fmr f3,f27
	ctx.f3.f64 = f27.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// bl 0x82204ae0
	ctx.lr = 0x82202C88;
	sub_82204AE0(ctx, base);
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(f30.f64, f31.f64);
	// ble cr6,0x82202ca0
	if (!ctx.cr6.gt) goto loc_82202CA0;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// li r30,1
	r30.s64 = 1;
loc_82202CA0:
	// fcmpu cr6,f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f28.f64, ctx.f0.f64);
	// ble cr6,0x82202cb0
	if (!ctx.cr6.gt) goto loc_82202CB0;
	// fmr f0,f28
	ctx.f0.f64 = f28.f64;
	// li r30,2
	r30.s64 = 2;
loc_82202CB0:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// beq cr6,0x82202d60
	if (ctx.cr6.eq) goto loc_82202D60;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(f30.f64, f31.f64);
	// lfs f12,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// bge cr6,0x82202cd8
	if (!ctx.cr6.lt) goto loc_82202CD8;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
loc_82202CD8:
	// fcmpu cr6,f28,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f28.f64, ctx.f13.f64);
	// bge cr6,0x82202ce4
	if (!ctx.cr6.lt) goto loc_82202CE4;
	// fmr f13,f28
	ctx.f13.f64 = f28.f64;
loc_82202CE4:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fnmsubs f13,f13,f11,f12
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f11.f64, -ctx.f12.f64)));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// beq cr6,0x82202d00
	if (ctx.cr6.eq) goto loc_82202D00;
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// b 0x82202d04
	goto loc_82202D04;
loc_82202D00:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_82202D04:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// blt cr6,0x82202d48
	if (ctx.cr6.lt) goto loc_82202D48;
	// beq cr6,0x82202d24
	if (ctx.cr6.eq) goto loc_82202D24;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// bge cr6,0x82202d6c
	if (!ctx.cr6.lt) goto loc_82202D6C;
	// fsubs f13,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 - f30.f64));
	// fmadds f0,f13,f0,f27
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, f27.f64)));
	// b 0x82202d58
	goto loc_82202D58;
loc_82202D24:
	// fsubs f13,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f28.f64 - f31.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x82202d6c
	if (!ctx.cr6.lt) goto loc_82202D6C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16264(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82202d58
	goto loc_82202D58;
loc_82202D48:
	// fsubs f12,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f30.f64 - f28.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16228);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
loc_82202D58:
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// b 0x82202d6c
	goto loc_82202D6C;
loc_82202D60:
	// stfs f29,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f29,4(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f29,8(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
loc_82202D6C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f80
	ctx.lr = 0x82202D7C;
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

DEFINE_REX_FUNC(sub_822089A0) {
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
	// rlwinm r11,r4,0,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xF0000000;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// stw r6,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// bne cr6,0x822089f4
	if (!ctx.cr6.eq) goto loc_822089F4;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x824d411c
	ctx.lr = 0x822089E4;
	__imp__XexCheckExecutablePrivilege(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822089f4
	if (!ctx.cr0.eq) goto loc_822089F4;
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x82208a44
	goto loc_82208A44;
loc_822089F4:
	// lis r4,11
	ctx.r4.s64 = 720896;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// ori r4,r4,7
	ctx.r4.u64 = ctx.r4.u64 | 7;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x824d3ecc
	ctx.lr = 0x82208A10;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82208a20
	if (!ctx.cr0.lt) goto loc_82208A20;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x82208a44
	goto loc_82208A44;
loc_82208A20:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82208a40
	if (!ctx.cr6.eq) goto loc_82208A40;
	// bl 0x8220a878
	ctx.lr = 0x82208A2C;
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
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x82208a44
	goto loc_82208A44;
loc_82208A40:
	// li r3,997
	ctx.r3.s64 = 997;
loc_82208A44:
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

DEFINE_REX_FUNC(sub_8220BD80) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,1588(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1588);
	// bl 0x824d433c
	ctx.lr = 0x8220BDA4;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220bde4
	if (ctx.cr0.lt) goto loc_8220BDE4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cmpwi cr6,r31,15
	ctx.cr6.compare<int32_t>(r31.s32, 15, ctx.xer);
	// bne cr6,0x8220bdc0
	if (!ctx.cr6.eq) goto loc_8220BDC0;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x8220bdcc
	goto loc_8220BDCC;
loc_8220BDC0:
	// cmpwi cr6,r31,-15
	ctx.cr6.compare<int32_t>(r31.s32, -15, ctx.xer);
	// bne cr6,0x8220bdcc
	if (!ctx.cr6.eq) goto loc_8220BDCC;
	// li r4,-16
	ctx.r4.s64 = -16;
loc_8220BDCC:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824d432c
	ctx.lr = 0x8220BDD4;
	__imp__KeSetBasePriorityThread(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824d431c
	ctx.lr = 0x8220BDDC;
	__imp__ObDereferenceObject(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220bdec
	goto loc_8220BDEC;
loc_8220BDE4:
	// bl 0x8220c390
	ctx.lr = 0x8220BDE8;
	sub_8220C390(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220BDEC:
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

DEFINE_REX_FUNC(sub_8220F894) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822101F0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwimi r11,r4,3,21,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x7F8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF807);
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

DEFINE_REX_FUNC(sub_822105D8) {
	REX_FUNC_PROLOGUE();
	// lbz r11,12280(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 12280);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210700) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10556);
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210810) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10680(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10680);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10680(r3)
	REX_STORE_U32(ctx.r3.u32 + 10680, ctx.r11.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822109C8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,12312(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12312);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822109D0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,7,24,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0x80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF7F);
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

DEFINE_REX_FUNC(sub_82210C48) {
	REX_FUNC_PROLOGUE();
	// stb r4,10493(r3)
	REX_STORE_U8(ctx.r3.u32 + 10493, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210FE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12324(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12324);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211280) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,20,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFFF00000;
	// rlwinm r11,r11,0,12,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
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

DEFINE_REX_FUNC(sub_82211828) {
	REX_FUNC_PROLOGUE();
	// lbz r3,10556(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 10556);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211970) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12284);
	// rlwinm r3,r11,15,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211BF8) {
	REX_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,10890(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 10890);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82212260) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r3,r11,19,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82212580) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,13024(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 13024);
	ctx.f0.f64 = double(temp.f32);
	// li r11,4
	ctx.r11.s64 = 4;
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r4
	REX_STORE_U32(ctx.r4.u32, ctx.f0.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// lfs f0,13028(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 13028);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// li r9,12
	ctx.r9.s64 = 12;
	// stfiwx f0,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.f0.u32);
	// lfs f0,13032(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 13032);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r4,r10
	REX_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.f0.u32);
	// lfs f0,13036(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 13036);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r4,r9
	REX_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.f0.u32);
	// lfs f0,13040(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 13040);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f0,13044(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 13044);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82215148) {
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
	// beq cr6,0x822151c0
	if (ctx.cr6.eq) goto loc_822151C0;
	// bl 0x824d419c
	ctx.lr = 0x8221516C;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82215180
	if (!ctx.cr6.eq) goto loc_82215180;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1496(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1496);
	// b 0x82215188
	goto loc_82215188;
loc_82215180:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1500(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1500);
loc_82215188:
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,11036(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11036);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822151a0
	if (!ctx.cr6.eq) goto loc_822151A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x822151A0;
	sub_82215008(ctx, base);
loc_822151A0:
	// lwz r11,11024(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11024);
	// lwz r10,11036(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 11036);
	// subf r9,r30,r10
	ctx.r9.u64 = ctx.r10.u64 - r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subfc r11,r11,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
loc_822151C0:
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

DEFINE_REX_FUNC(sub_822175F8) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82217470
	ctx.lr = 0x8221761C;
	sub_82217470(ctx, base);
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r10,r31,1022
	ctx.r10.s64 = r31.s64 + 1022;
	// addi r11,r30,512
	ctx.r11.s64 = r30.s64 + 512;
	// subf r8,r30,r31
	ctx.r8.u64 = r31.u64 - r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82217630:
	// lhz r9,-1022(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + -1022);
	// rlwinm r9,r9,27,5,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFE;
	// lhzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r9,r9,6,16,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFC0;
	// sth r9,-512(r11)
	REX_STORE_U16(ctx.r11.u32 + -512, ctx.r9.u16);
	// lhzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r9,r9,27,5,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFE;
	// lhzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r9,r9,6,16,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFC0;
	// sth r9,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// rlwinm r9,r9,27,5,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFE;
	// lhzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r9,r9,6,16,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFC0;
	// sth r9,512(r11)
	REX_STORE_U16(ctx.r11.u32 + 512, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82217630
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82217630;
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

DEFINE_REX_FUNC(sub_8221A910) {
	REX_FUNC_PROLOGUE();
	// eieio 
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,11016(r3)
	REX_STORE_U32(ctx.r3.u32 + 11016, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8221AAE0) {
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
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x823cd118
	ctx.lr = 0x8221AB04;
	sub_823CD118(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,24400(r31)
	REX_STORE_U32(r31.u32 + 24400, ctx.r3.u32);
	// bne 0x8221ab18
	if (!ctx.cr0.eq) goto loc_8221AB18;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8221ac40
	goto loc_8221AC40;
loc_8221AB18:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x823cd118
	ctx.lr = 0x8221AB24;
	sub_823CD118(ctx, base);
	// stw r3,24408(r31)
	REX_STORE_U32(r31.u32 + 24408, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8221ab4c
	if (!ctx.cr0.eq) goto loc_8221AB4C;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,24400(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24400);
	// bl 0x823cd250
	ctx.lr = 0x8221AB3C;
	sub_823CD250(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,24400(r31)
	REX_STORE_U32(r31.u32 + 24400, ctx.r11.u32);
	// b 0x8221ac40
	goto loc_8221AC40;
loc_8221AB4C:
	// lwz r11,24400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24400);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,768
	ctx.r9.s64 = 768;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// ori r10,r10,15104
	ctx.r10.u64 = ctx.r10.u64 | 15104;
	// lis r8,-16359
	ctx.r8.s64 = -1072103424;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r8,r8,11008
	ctx.r8.u64 = ctx.r8.u64 | 11008;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,24
	ctx.r10.s64 = 24;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// li r5,96
	ctx.r5.s64 = 96;
	// addi r4,r6,28312
	ctx.r4.s64 = ctx.r6.s64 + 28312;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// stwu r10,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x822d4fa0
	ctx.lr = 0x8221AB9C;
	sub_822D4FA0(ctx, base);
	// addi r11,r30,96
	ctx.r11.s64 = r30.s64 + 96;
	// li r10,8709
	ctx.r10.s64 = 8709;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r9,r9,8576
	ctx.r9.u64 = ctx.r9.u64 | 8576;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,10568(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10568);
	// rlwinm r10,r10,0,29,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF807;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// lwz r10,24400(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24400);
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
loc_8221ABF4:
	// lis r10,-16381
	ctx.r10.s64 = -1073545216;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r10,r10,8705
	ctx.r10.u64 = ctx.r10.u64 | 8705;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// ori r7,r7,4
	ctx.r7.u64 = ctx.r7.u64 | 4;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8221abf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221ABF4;
	// lwz r11,24400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24400);
	// li r3,1
	ctx.r3.s64 = 1;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r11,24404(r31)
	REX_STORE_U32(r31.u32 + 24404, ctx.r11.u32);
loc_8221AC40:
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

DEFINE_REX_FUNC(sub_82221580) {
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
	ctx.lr = 0x82221588;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subfic r11,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// li r25,32
	r25.s64 = 32;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// addi r24,r11,1
	r24.s64 = ctx.r11.s64 + 1;
	// li r27,4
	r27.s64 = 4;
	// beq cr6,0x822215c8
	if (ctx.cr6.eq) goto loc_822215C8;
	// li r27,1
	r27.s64 = 1;
loc_822215C8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82221460
	ctx.lr = 0x822215D8;
	sub_82221460(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne cr6,0x82221610
	if (!ctx.cr6.eq) goto loc_82221610;
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r26.s32);
	// rlwinm. r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82221610
	if (ctx.cr0.eq) goto loc_82221610;
	// li r8,256
	ctx.r8.s64 = 256;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r10,r8,r10
	ctx.r10.u64 = uint32_t(ctx.r10.u32 ? ctx.r8.u32 / ctx.r10.u32 : 0);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// blt cr6,0x82221610
	if (ctx.cr6.lt) goto loc_82221610;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
loc_82221610:
	// mullw r11,r11,r25
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r25.s32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r11,r9,r24
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r24.s32);
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r8,r27,-1
	ctx.r8.s64 = r27.s64 + -1;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(r28.u32, 2, ctx.xer);
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mullw r9,r9,r26
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r26.s32);
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// beq cr6,0x8222168c
	if (ctx.cr6.eq) goto loc_8222168C;
	// addi r10,r10,4095
	ctx.r10.s64 = ctx.r10.s64 + 4095;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// mullw r3,r10,r11
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x82221698
	goto loc_82221698;
loc_8222168C:
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r3,r11,0,0,19
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
loc_82221698:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82225AC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82225AC8;
	// lis r10,42
	ctx.r10.s64 = 2752512;
	// lis r9,24
	ctx.r9.s64 = 1572864;
	// lis r5,44
	ctx.r5.s64 = 2883584;
	// li r11,0
	ctx.r11.s64 = 0;
	// andi. r7,r3,16398
	ctx.r7.u64 = ctx.r3.u64 & 16398;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ori r6,r10,9145
	ctx.r6.u64 = ctx.r10.u64 | 9145;
	// ori r31,r9,10374
	r31.u64 = ctx.r9.u64 | 10374;
	// ori r30,r5,33700
	r30.u64 = ctx.r5.u64 | 33700;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r10,r4,52
	ctx.r10.s64 = ctx.r4.s64 + 52;
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// beq cr6,0x82225e44
	if (ctx.cr6.eq) goto loc_82225E44;
	// cmplwi cr6,r7,6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 6, ctx.xer);
	// beq cr6,0x82225dbc
	if (ctx.cr6.eq) goto loc_82225DBC;
	// cmplwi cr6,r7,8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8, ctx.xer);
	// beq cr6,0x82225d40
	if (ctx.cr6.eq) goto loc_82225D40;
	// cmplwi cr6,r7,10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 10, ctx.xer);
	// beq cr6,0x82225cac
	if (ctx.cr6.eq) goto loc_82225CAC;
	// cmplwi cr6,r7,12
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 12, ctx.xer);
	// beq cr6,0x82225be8
	if (ctx.cr6.eq) goto loc_82225BE8;
	// cmplwi cr6,r7,14
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 14, ctx.xer);
	// beq cr6,0x82225b44
	if (ctx.cr6.eq) goto loc_82225B44;
	// cmplwi cr6,r7,16386
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16386, ctx.xer);
	// bne cr6,0x82225e68
	if (!ctx.cr6.eq) goto loc_82225E68;
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// ori r7,r9,9126
	ctx.r7.u64 = ctx.r9.u64 | 9126;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// b 0x82225e4c
	goto loc_82225E4C;
loc_82225B44:
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// li r8,12
	ctx.r8.s64 = 12;
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// ori r9,r9,9126
	ctx.r9.u64 = ctx.r9.u64 | 9126;
	// stb r11,8(r10)
	REX_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// rlwinm. r7,r3,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r11,9(r10)
	REX_STORE_U8(ctx.r10.u32 + 9, ctx.r11.u8);
	// li r7,2
	ctx.r7.s64 = 2;
	// stb r11,10(r10)
	REX_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// sthu r11,12(r10)
	ea = 12 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// sth r8,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stb r11,8(r10)
	REX_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r5,9(r10)
	REX_STORE_U8(ctx.r10.u32 + 9, ctx.r5.u8);
	// stb r11,10(r10)
	REX_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stb r7,9(r10)
	REX_STORE_U8(ctx.r10.u32 + 9, ctx.r7.u8);
	// beq 0x82225bb4
	if (ctx.cr0.eq) goto loc_82225BB4;
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// li r8,28
	ctx.r8.s64 = 28;
	// ori r9,r9,8838
	ctx.r9.u64 = ctx.r9.u64 | 8838;
	// sth r8,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// b 0x82225e58
	goto loc_82225E58;
loc_82225BB4:
	// rlwinm. r9,r3,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// li r9,28
	ctx.r9.s64 = 28;
	// stb r11,8(r10)
	REX_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// li r8,3
	ctx.r8.s64 = 3;
	// stb r11,10(r10)
	REX_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,32
	ctx.r9.s64 = 32;
	// beq 0x82225be0
	if (ctx.cr0.eq) goto loc_82225BE0;
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// b 0x82225e64
	goto loc_82225E64;
loc_82225BE0:
	// stw r30,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// b 0x82225e64
	goto loc_82225E64;
loc_82225BE8:
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// rlwinm. r9,r3,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stb r11,8(r10)
	REX_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r11,9(r10)
	REX_STORE_U8(ctx.r10.u32 + 9, ctx.r11.u8);
	// stb r11,10(r10)
	REX_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// stb r11,8(r10)
	REX_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r5,9(r10)
	REX_STORE_U8(ctx.r10.u32 + 9, ctx.r5.u8);
	// stb r11,10(r10)
	REX_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// beq 0x82225c54
	if (ctx.cr0.eq) goto loc_82225C54;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// li r7,24
	ctx.r7.s64 = 24;
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,28
	ctx.r9.s64 = 28;
loc_82225C30:
	// sthu r11,12(r10)
	ea = 12 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// lis r8,26
	ctx.r8.s64 = 1703936;
	// li r28,2
	r28.s64 = 2;
	// ori r29,r8,8838
	r29.u64 = ctx.r8.u64 | 8838;
	// li r8,3
	ctx.r8.s64 = 3;
	// sth r7,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r7.u16);
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// stb r28,9(r10)
	REX_STORE_U8(ctx.r10.u32 + 9, r28.u8);
	// b 0x82225e5c
	goto loc_82225E5C;
loc_82225C54:
	// rlwinm. r9,r3,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82225c8c
	if (ctx.cr0.eq) goto loc_82225C8C;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// li r7,24
	ctx.r7.s64 = 24;
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,28
	ctx.r9.s64 = 28;
loc_82225C70:
	// sthu r11,12(r10)
	ea = 12 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// li r29,2
	r29.s64 = 2;
	// li r8,3
	ctx.r8.s64 = 3;
	// sth r7,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r7.u16);
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// stb r29,9(r10)
	REX_STORE_U8(ctx.r10.u32 + 9, r29.u8);
	// b 0x82225e5c
	goto loc_82225E5C;
loc_82225C8C:
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// li r8,12
	ctx.r8.s64 = 12;
	// ori r9,r9,9126
	ctx.r9.u64 = ctx.r9.u64 | 9126;
	// sth r8,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r9,28
	ctx.r9.s64 = 28;
	// b 0x82225e64
	goto loc_82225E64;
loc_82225CAC:
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// rlwinm. r9,r3,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stb r11,8(r10)
	REX_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r11,9(r10)
	REX_STORE_U8(ctx.r10.u32 + 9, ctx.r11.u8);
	// stb r11,10(r10)
	REX_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// stb r11,8(r10)
	REX_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r5,9(r10)
	REX_STORE_U8(ctx.r10.u32 + 9, ctx.r5.u8);
	// stb r11,10(r10)
	REX_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// beq 0x82225d00
	if (ctx.cr0.eq) goto loc_82225D00;
	// lis r9,44
	ctx.r9.s64 = 2883584;
	// li r8,12
	ctx.r8.s64 = 12;
	// ori r9,r9,9125
	ctx.r9.u64 = ctx.r9.u64 | 9125;
	// sth r8,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// b 0x82225c30
	goto loc_82225C30;
loc_82225D00:
	// rlwinm. r9,r3,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82225d28
	if (ctx.cr0.eq) goto loc_82225D28;
	// lis r9,44
	ctx.r9.s64 = 2883584;
	// li r8,12
	ctx.r8.s64 = 12;
	// ori r9,r9,9125
	ctx.r9.u64 = ctx.r9.u64 | 9125;
	// sth r8,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// b 0x82225c70
	goto loc_82225C70;
loc_82225D28:
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,24
	ctx.r9.s64 = 24;
	// b 0x82225e64
	goto loc_82225E64;
loc_82225D40:
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// rlwinm. r9,r3,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stb r11,8(r10)
	REX_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r11,9(r10)
	REX_STORE_U8(ctx.r10.u32 + 9, ctx.r11.u8);
	// stb r11,10(r10)
	REX_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// stb r11,8(r10)
	REX_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r5,9(r10)
	REX_STORE_U8(ctx.r10.u32 + 9, ctx.r5.u8);
	// stb r11,10(r10)
	REX_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// beq 0x82225d8c
	if (ctx.cr0.eq) goto loc_82225D8C;
	// stw r30,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r30.u32);
loc_82225D78:
	// li r9,12
	ctx.r9.s64 = 12;
	// li r7,16
	ctx.r7.s64 = 16;
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,20
	ctx.r9.s64 = 20;
	// b 0x82225c30
	goto loc_82225C30;
loc_82225D8C:
	// rlwinm. r9,r3,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82225d9c
	if (ctx.cr0.eq) goto loc_82225D9C;
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// b 0x82225d78
	goto loc_82225D78;
loc_82225D9C:
	// lis r9,44
	ctx.r9.s64 = 2883584;
	// li r8,12
	ctx.r8.s64 = 12;
	// ori r9,r9,9125
	ctx.r9.u64 = ctx.r9.u64 | 9125;
	// sth r8,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r9,20
	ctx.r9.s64 = 20;
	// b 0x82225e64
	goto loc_82225E64;
loc_82225DBC:
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// rlwinm. r9,r3,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stb r11,8(r10)
	REX_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r11,9(r10)
	REX_STORE_U8(ctx.r10.u32 + 9, ctx.r11.u8);
	// stb r11,10(r10)
	REX_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// beq 0x82225e04
	if (ctx.cr0.eq) goto loc_82225E04;
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// li r8,2
	ctx.r8.s64 = 2;
	// ori r9,r9,8838
	ctx.r9.u64 = ctx.r9.u64 | 8838;
	// li r7,12
	ctx.r7.s64 = 12;
	// stb r8,9(r10)
	REX_STORE_U8(ctx.r10.u32 + 9, ctx.r8.u8);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// sth r7,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r7.u16);
	// b 0x82225e58
	goto loc_82225E58;
loc_82225E04:
	// rlwinm. r9,r3,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// li r9,12
	ctx.r9.s64 = 12;
	// stb r11,8(r10)
	REX_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r11,10(r10)
	REX_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,16
	ctx.r9.s64 = 16;
	// beq 0x82225e34
	if (ctx.cr0.eq) goto loc_82225E34;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// stb r8,9(r10)
	REX_STORE_U8(ctx.r10.u32 + 9, ctx.r8.u8);
	// b 0x82225e64
	goto loc_82225E64;
loc_82225E34:
	// stw r30,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stb r5,9(r10)
	REX_STORE_U8(ctx.r10.u32 + 9, ctx.r5.u8);
	// b 0x82225e64
	goto loc_82225E64;
loc_82225E44:
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
loc_82225E4C:
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// stb r11,9(r10)
	REX_STORE_U8(ctx.r10.u32 + 9, ctx.r11.u8);
loc_82225E58:
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
loc_82225E5C:
	// stb r11,8(r10)
	REX_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r11,10(r10)
	REX_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
loc_82225E64:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82225E68:
	// rlwinm. r7,r3,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82225ea0
	if (ctx.cr0.eq) goto loc_82225EA0;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,3
	ctx.r9.s64 = 3;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stb r9,9(r10)
	REX_STORE_U8(ctx.r10.u32 + 9, ctx.r9.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r11,8(r10)
	REX_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// stb r11,10(r10)
	REX_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82225EA0:
	// rlwinm. r7,r3,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82225ed8
	if (ctx.cr0.eq) goto loc_82225ED8;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,4
	ctx.r9.s64 = 4;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stw r30,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// stb r9,9(r10)
	REX_STORE_U8(ctx.r10.u32 + 9, ctx.r9.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r11,8(r10)
	REX_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// stb r11,10(r10)
	REX_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82225ED8:
	// rlwinm. r7,r3,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// li r6,10
	ctx.r6.s64 = 10;
	// beq 0x82225f10
	if (ctx.cr0.eq) goto loc_82225F10;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r7,4
	ctx.r9.s64 = ctx.r7.s64 + 4;
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// stb r11,8(r10)
	REX_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r6,9(r10)
	REX_STORE_U8(ctx.r10.u32 + 9, ctx.r6.u8);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stb r11,10(r10)
	REX_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82225F10:
	// rlwinm. r7,r3,0,24,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82225f44
	if (ctx.cr0.eq) goto loc_82225F44;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r7,4
	ctx.r9.s64 = ctx.r7.s64 + 4;
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// stb r11,8(r10)
	REX_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r6,9(r10)
	REX_STORE_U8(ctx.r10.u32 + 9, ctx.r6.u8);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stb r5,10(r10)
	REX_STORE_U8(ctx.r10.u32 + 10, ctx.r5.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82225F44:
	// rlwinm. r5,r3,24,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r7,r3,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// beq 0x82225fb8
	if (ctx.cr0.eq) goto loc_82225FB8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r5,r5,-29736
	ctx.r5.s64 = ctx.r5.s64 + -29736;
loc_82225F64:
	// clrlwi r31,r7,30
	r31.u64 = ctx.r7.u32 & 0x3;
	// addi r30,r5,-4
	r30.s64 = ctx.r5.s64 + -4;
	// clrlwi r3,r9,16
	ctx.r3.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r29,r6,24
	r29.u64 = ctx.r6.u32 & 0xFF;
	// li r28,5
	r28.s64 = 5;
	// rlwinm r7,r7,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// lbzx r31,r31,r30
	r31.u64 = REX_LOAD_U8(r31.u32 + r30.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// rlwinm r9,r31,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFC;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// add r31,r9,r5
	r31.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// lwz r3,-4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -4);
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// stb r11,8(r10)
	REX_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r28,9(r10)
	REX_STORE_U8(ctx.r10.u32 + 9, r28.u8);
	// stb r29,10(r10)
	REX_STORE_U8(ctx.r10.u32 + 10, r29.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bdnz 0x82225f64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82225F64;
loc_82225FB8:
	// li r7,255
	ctx.r7.s64 = 255;
	// sth r11,-62(r1)
	REX_STORE_U16(ctx.r1.u32 + -62, ctx.r11.u16);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stb r11,-56(r1)
	REX_STORE_U8(ctx.r1.u32 + -56, ctx.r11.u8);
	// sth r7,-64(r1)
	REX_STORE_U16(ctx.r1.u32 + -64, ctx.r7.u16);
	// lwz r7,-64(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stb r11,-55(r1)
	REX_STORE_U8(ctx.r1.u32 + -55, ctx.r11.u8);
	// stb r11,-54(r1)
	REX_STORE_U8(ctx.r1.u32 + -54, ctx.r11.u8);
	// lwz r6,-56(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r6,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r8,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r8.u32);
	// stw r11,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// stw r11,48(r4)
	REX_STORE_U32(ctx.r4.u32 + 48, ctx.r11.u32);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82239978) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824d489c
	ctx.lr = 0x82239994;
	__imp__XamUserGetDeviceContext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822399a4
	if (!ctx.cr0.lt) goto loc_822399A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822399ac
	goto loc_822399AC;
loc_822399A4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r3,r11,0,0,3
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
loc_822399AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8223ACF8) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8223ad70
	if (!ctx.cr6.eq) goto loc_8223AD70;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223ad70
	if (ctx.cr6.eq) goto loc_8223AD70;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
loc_8223AD24:
	// lwz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8223ad3c
	if (ctx.cr6.eq) goto loc_8223AD3C;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8223ad60
	if (ctx.cr6.eq) goto loc_8223AD60;
loc_8223AD3C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x8223ad24
	if (ctx.cr6.lt) goto loc_8223AD24;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223AD50:
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8223ad74
	goto loc_8223AD74;
loc_8223AD60:
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8223b5e0
	ctx.lr = 0x8223AD6C;
	sub_8223B5E0(ctx, base);
	// b 0x8223ad50
	goto loc_8223AD50;
loc_8223AD70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223AD74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8223D0B0) {
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
	ctx.lr = 0x8223D0B8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r24,r3,8
	r24.s64 = ctx.r3.s64 + 8;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// lwz r27,8(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// li r21,1
	r21.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
loc_8223D0EC:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223d128
	if (ctx.cr6.eq) goto loc_8223D128;
	// lwz r7,8(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8223d110
	if (!ctx.cr6.eq) goto loc_8223D110;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8223d114
	goto loc_8223D114;
loc_8223D110:
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_8223D114:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223d12c
	if (ctx.cr6.eq) goto loc_8223D12C;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// b 0x8223d12c
	goto loc_8223D12C;
loc_8223D128:
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_8223D12C:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8223d0ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223D0EC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8223d2a0
	if (ctx.cr6.eq) goto loc_8223D2A0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8223d2a0
	if (ctx.cr6.eq) goto loc_8223D2A0;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// b 0x8223d298
	goto loc_8223D298;
loc_8223D150:
	// addi r23,r23,-1
	r23.s64 = r23.s64 + -1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8223d2a0
	if (ctx.cr6.eq) goto loc_8223D2A0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8223d2a0
	if (ctx.cr6.eq) goto loc_8223D2A0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// subf r30,r11,r8
	r30.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_8223D180:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223d1b4
	if (ctx.cr6.eq) goto loc_8223D1B4;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8223d1b4
	if (ctx.cr6.lt) goto loc_8223D1B4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r30,r11,r9
	r30.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_8223D1B4:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8223d180
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223D180;
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// mr r28,r24
	r28.u64 = r24.u64;
	// li r26,2
	r26.s64 = 2;
loc_8223D1C8:
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8223d248
	if (ctx.cr6.eq) goto loc_8223D248;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8223D1FC;
	sub_822D4FA0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8223d218
	if (!ctx.cr6.lt) goto loc_8223D218;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8223D218:
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8223d248
	if (!ctx.cr6.eq) goto loc_8223D248;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x8223b600
	ctx.lr = 0x8223D238;
	sub_8223B600(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8223d248
	if (!ctx.cr0.eq) goto loc_8223D248;
	// addi r22,r22,-1
	r22.s64 = r22.s64 + -1;
loc_8223D248:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x8223d1c8
	if (!ctx.cr0.eq) goto loc_8223D1C8;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8223d274
	if (!ctx.cr6.lt) goto loc_8223D274;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8223D274:
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8223d298
	if (!ctx.cr6.eq) goto loc_8223D298;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 4);
	// bl 0x8223b600
	ctx.lr = 0x8223D294;
	sub_8223B600(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8223D298:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x8223d150
	if (!ctx.cr6.eq) goto loc_8223D150;
loc_8223D2A0:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_82246B98) {
	REX_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x8226e470
	sub_8226E470(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82246BC8) {
	REX_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x822622d8
	sub_822622D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82246C00) {
	REX_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x82268a80
	sub_82268A80(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82246C78) {
	REX_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x8226c088
	sub_8226C088(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82246F68) {
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
	ctx.lr = 0x82246F7C;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// li r4,16
	ctx.r4.s64 = 16;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	f28.f64 = ctx.f4.f64;
	// bl 0x8225da70
	ctx.lr = 0x82246FA0;
	sub_8225DA70(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x82246FAC;
	sub_8227C2B8(ctx, base);
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f30,4(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f29,8(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f28,12(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x822d4f84
	ctx.lr = 0x82246FC8;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82248070) {
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
	ctx.lr = 0x82248088;
	sub_82246220(ctx, base);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822480a0
	if (ctx.cr6.eq) goto loc_822480A0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x822480b0
	goto loc_822480B0;
loc_822480A0:
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
loc_822480B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82248B38) {
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
	ctx.lr = 0x82248B58;
	sub_82246220(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82248b8c
	if (ctx.cr6.eq) goto loc_82248B8C;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82248b8c
	if (!ctx.cr6.eq) goto loc_82248B8C;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82248b8c
	if (ctx.cr6.lt) goto loc_82248B8C;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82248b94
	goto loc_82248B94;
loc_82248B8C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82248B94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224A348) {
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
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// lwz r10,-2144(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -2144);
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// bgt cr6,0x8224a534
	if (ctx.cr6.gt) goto loc_8224A534;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8224a404
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8224A404;
	// bdzf 4*cr6+eq,0x8224a430
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8224A430;
	// bdzf 4*cr6+eq,0x8224a45c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8224A45C;
	// bdzf 4*cr6+eq,0x8224a488
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8224A488;
	// bdzf 4*cr6+eq,0x8224a49c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8224A49C;
	// bdzf 4*cr6+eq,0x8224a4c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8224A4C8;
	// bne cr6,0x8224a4fc
	if (!ctx.cr6.eq) goto loc_8224A4FC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-4492
	ctx.r4.s64 = ctx.r11.s64 + -4492;
	// bl 0x822d7988
	ctx.lr = 0x8224A3B0;
	sub_822D7988(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8224a3c0
	if (!ctx.cr0.eq) goto loc_8224A3C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8224a3dc
	goto loc_8224A3DC;
loc_8224A3C0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-4504
	ctx.r4.s64 = ctx.r11.s64 + -4504;
	// bl 0x822d7988
	ctx.lr = 0x8224A3D0;
	sub_822D7988(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8224a3ec
	if (!ctx.cr0.eq) goto loc_8224A3EC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8224A3DC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227adb0
	ctx.lr = 0x8224A3E4;
	sub_8227ADB0(ctx, base);
loc_8224A3E4:
	// li r31,0
	r31.s64 = 0;
	// b 0x8224a3f4
	goto loc_8224A3F4;
loc_8224A3EC:
	// lis r31,-32720
	r31.s64 = -2144337920;
	// ori r31,r31,3
	r31.u64 = r31.u64 | 3;
loc_8224A3F4:
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x822d7b58
	ctx.lr = 0x8224A3FC;
	sub_822D7B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8224a544
	goto loc_8224A544;
loc_8224A404:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-4480
	ctx.r4.s64 = ctx.r11.s64 + -4480;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d7af8
	ctx.lr = 0x8224A418;
	sub_822D7AF8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x8224a3ec
	if (ctx.cr6.lt) goto loc_8224A3EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8227adf8
	ctx.lr = 0x8224A42C;
	sub_8227ADF8(ctx, base);
	// b 0x8224a3e4
	goto loc_8224A3E4;
loc_8224A430:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-4472
	ctx.r4.s64 = ctx.r11.s64 + -4472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d7af8
	ctx.lr = 0x8224A444;
	sub_822D7AF8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x8224a3ec
	if (ctx.cr6.lt) goto loc_8224A3EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8227ae40
	ctx.lr = 0x8224A458;
	sub_8227AE40(ctx, base);
	// b 0x8224a3e4
	goto loc_8224A3E4;
loc_8224A45C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-4464
	ctx.r4.s64 = ctx.r11.s64 + -4464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d7af8
	ctx.lr = 0x8224A470;
	sub_822D7AF8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x8224a3ec
	if (ctx.cr6.lt) goto loc_8224A3EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8227ae88
	ctx.lr = 0x8224A484;
	sub_8227AE88(ctx, base);
	// b 0x8224a3e4
	goto loc_8224A3E4;
loc_8224A488:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227af18
	ctx.lr = 0x8224A494;
	sub_8227AF18(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8224a3f4
	goto loc_8224A3F4;
loc_8224A49C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-4456
	ctx.r4.s64 = ctx.r11.s64 + -4456;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d7af8
	ctx.lr = 0x8224A4B0;
	sub_822D7AF8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x8224a3ec
	if (ctx.cr6.lt) goto loc_8224A3EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8227aed0
	ctx.lr = 0x8224A4C4;
	sub_8227AED0(ctx, base);
	// b 0x8224a3e4
	goto loc_8224A3E4;
loc_8224A4C8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// addi r4,r11,-4440
	ctx.r4.s64 = ctx.r11.s64 + -4440;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d7af8
	ctx.lr = 0x8224A4E4;
	sub_822D7AF8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x8224a3ec
	if (ctx.cr6.lt) goto loc_8224A3EC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227afa8
	ctx.lr = 0x8224A4F8;
	sub_8227AFA8(ctx, base);
	// b 0x8224a3e4
	goto loc_8224A3E4;
loc_8224A4FC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// addi r4,r11,-4420
	ctx.r4.s64 = ctx.r11.s64 + -4420;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d7af8
	ctx.lr = 0x8224A51C;
	sub_822D7AF8(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x8224a3ec
	if (ctx.cr6.lt) goto loc_8224A3EC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227b300
	ctx.lr = 0x8224A530;
	sub_8227B300(ctx, base);
	// b 0x8224a3e4
	goto loc_8224A3E4;
loc_8224A534:
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x822d7b58
	ctx.lr = 0x8224A53C;
	sub_822D7B58(ctx, base);
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
loc_8224A544:
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

DEFINE_REX_FUNC(sub_82252618) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-5296
	ctx.r3.s64 = ctx.r11.s64 + -5296;
	// b 0x82251550
	sub_82251550(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82252868) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r6,-32220
	ctx.r6.s64 = -2111569920;
	// addi r9,r9,-5196
	ctx.r9.s64 = ctx.r9.s64 + -5196;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lis r5,-32220
	ctx.r5.s64 = -2111569920;
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// std r11,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lis r7,-32219
	ctx.r7.s64 = -2111504384;
	// std r11,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// addi r8,r8,-5840
	ctx.r8.s64 = ctx.r8.s64 + -5840;
	// std r11,32(r10)
	REX_STORE_U64(ctx.r10.u32 + 32, ctx.r11.u64);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r7,r7,-8304
	ctx.r7.s64 = ctx.r7.s64 + -8304;
	// addi r10,r6,27712
	ctx.r10.s64 = ctx.r6.s64 + 27712;
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r9,r5,27752
	ctx.r9.s64 = ctx.r5.s64 + 27752;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r8,-32163
	ctx.r8.s64 = -2107834368;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r4,r8,23640
	ctx.r4.s64 = ctx.r8.s64 + 23640;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x822512d8
	ctx.lr = 0x822528EC;
	sub_822512D8(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82254BC8) {
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
	// li r3,84
	ctx.r3.s64 = 84;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82255b48
	ctx.lr = 0x82254BEC;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82254c00
	if (ctx.cr0.eq) goto loc_82254C00;
	// bl 0x8224c3f0
	ctx.lr = 0x82254BF8;
	sub_8224C3F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82254c04
	goto loc_82254C04;
loc_82254C00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82254C04:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82254c18
	if (!ctx.cr6.eq) goto loc_82254C18;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82254c24
	goto loc_82254C24;
loc_82254C18:
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_82254C24:
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

DEFINE_REX_FUNC(sub_82256380) {
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r4,23592(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23592);
	// bl 0x82255c88
	ctx.lr = 0x8225639C;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822563d0
	if (ctx.cr0.eq) goto loc_822563D0;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r31,r3,20
	r31.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822563cc
	if (!ctx.cr6.eq) goto loc_822563CC;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x822830c0
	ctx.lr = 0x822563CC;
	sub_822830C0(ctx, base);
loc_822563CC:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_822563D0:
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

DEFINE_REX_FUNC(sub_82257270) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,23544(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 23544);
	// bl 0x82255c88
	ctx.lr = 0x82257298;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822572ac
	if (!ctx.cr0.eq) goto loc_822572AC;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x822572b4
	goto loc_822572B4;
loc_822572AC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8225c540
	ctx.lr = 0x822572B4;
	sub_8225C540(ctx, base);
loc_822572B4:
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

DEFINE_REX_FUNC(sub_82258590) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82258598;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r31,29668(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 29668);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822585dc
	if (ctx.cr6.eq) goto loc_822585DC;
	// bl 0x822469c0
	ctx.lr = 0x822585B4;
	sub_822469C0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822585d4
	if (ctx.cr6.eq) goto loc_822585D4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82256fb0
	ctx.lr = 0x822585CC;
	sub_82256FB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822585dc
	if (ctx.cr0.eq) goto loc_822585DC;
loc_822585D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82258630
	goto loc_82258630;
loc_822585DC:
	// li r30,0
	r30.s64 = 0;
loc_822585E0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255fd8
	ctx.lr = 0x822585E8;
	sub_82255FD8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82258618
	if (ctx.cr0.eq) goto loc_82258618;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822469c0
	ctx.lr = 0x822585F8;
	sub_822469C0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822585d4
	if (ctx.cr6.eq) goto loc_822585D4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82256fb0
	ctx.lr = 0x82258610;
	sub_82256FB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822585d4
	if (!ctx.cr0.eq) goto loc_822585D4;
loc_82258618:
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r30,r11,24
	r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// blt cr6,0x822585e0
	if (ctx.cr6.lt) goto loc_822585E0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82258630:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8225C260) {
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
	// li r30,0
	r30.s64 = 0;
	// bl 0x82255c88
	ctx.lr = 0x8225C280;
	sub_82255C88(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,23668(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 23668);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8225c300
	if (ctx.cr6.eq) goto loc_8225C300;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,23672(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 23672);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8225c300
	if (ctx.cr6.eq) goto loc_8225C300;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,23676(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 23676);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8225c300
	if (ctx.cr6.eq) goto loc_8225C300;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,23680(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 23680);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8225c300
	if (ctx.cr6.eq) goto loc_8225C300;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,23684(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 23684);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8225c300
	if (ctx.cr6.eq) goto loc_8225C300;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,23688(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 23688);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8225c300
	if (ctx.cr6.eq) goto loc_8225C300;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,23692(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 23692);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8225c300
	if (ctx.cr6.eq) goto loc_8225C300;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,23696(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 23696);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8225c304
	if (!ctx.cr6.eq) goto loc_8225C304;
loc_8225C300:
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
loc_8225C304:
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

DEFINE_REX_FUNC(sub_8225E160) {
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
	// li r4,2040
	ctx.r4.s64 = 2040;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8225da70
	ctx.lr = 0x8225E188;
	sub_8225DA70(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x8225E194;
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

DEFINE_REX_FUNC(sub_8225EF60) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8225e160
	ctx.lr = 0x8225EF84;
	sub_8225E160(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224da00
	ctx.lr = 0x8225EF90;
	sub_8224DA00(ctx, base);
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

DEFINE_REX_FUNC(sub_822608A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82260920
	if (!ctx.cr6.gt) goto loc_82260920;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f10,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,16172(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16172);
	ctx.f0.f64 = double(temp.f32);
loc_822608D0:
	// lfsx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fsubs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// blt cr6,0x82260910
	if (ctx.cr6.lt) goto loc_82260910;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bgt cr6,0x82260910
	if (ctx.cr6.gt) goto loc_82260910;
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82260910
	if (ctx.cr6.lt) goto loc_82260910;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82260910:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822608d0
	if (ctx.cr6.lt) goto loc_822608D0;
loc_82260920:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82265148) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82265150;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822651d8
	if (ctx.cr6.eq) goto loc_822651D8;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822651d8
	if (ctx.cr6.eq) goto loc_822651D8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822651d8
	if (ctx.cr6.eq) goto loc_822651D8;
	// lwz r3,120(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// addi r30,r31,120
	r30.s64 = r31.s64 + 120;
	// bl 0x82255b70
	ctx.lr = 0x82265188;
	sub_82255B70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f13,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r31,124
	ctx.r10.s64 = r31.s64 + 124;
	// lwz r7,128(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 128);
	// stw r5,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r5.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r6,96(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 92);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// lfs f0,192(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82284a10
	ctx.lr = 0x822651D8;
	sub_82284A10(ctx, base);
loc_822651D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82267E08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f2,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82260768
	sub_82260768(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82268420) {
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
	// lwz r11,200(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82268450
	if (ctx.cr6.eq) goto loc_82268450;
	// bl 0x82268368
	ctx.lr = 0x82268450;
	sub_82268368(ctx, base);
loc_82268450:
	// lfs f0,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f0,192(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
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

DEFINE_REX_FUNC(sub_8226B018) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8226b040
	if (!ctx.cr6.lt) goto loc_8226B040;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8226B040:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8226b050
	if (!ctx.cr6.gt) goto loc_8226B050;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8226B050:
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// bl 0x822d7d50
	ctx.lr = 0x8226B064;
	sub_822D7D50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82264d30
	ctx.lr = 0x8226B06C;
	sub_82264D30(ctx, base);
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

DEFINE_REX_FUNC(sub_8226CED8) {
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
	// lwz r3,244(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226cf08
	if (ctx.cr6.eq) goto loc_8226CF08;
	// bl 0x8228e0d0
	ctx.lr = 0x8226CF04;
	sub_8228E0D0(ctx, base);
	// stw r30,244(r31)
	REX_STORE_U32(r31.u32 + 244, r30.u32);
loc_8226CF08:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822673a8
	ctx.lr = 0x8226CF18;
	sub_822673A8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226cf34
	if (ctx.cr6.eq) goto loc_8226CF34;
	// bl 0x8228cdb0
	ctx.lr = 0x8226CF28;
	sub_8228CDB0(ctx, base);
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 240);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r11.u32);
loc_8226CF34:
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

DEFINE_REX_FUNC(sub_8226E470) {
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
	ctx.lr = 0x8226E478;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,1001
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1001, ctx.xer);
	// bgt cr6,0x8226e6cc
	if (ctx.cr6.gt) goto loc_8226E6CC;
	// beq cr6,0x8226e69c
	if (ctx.cr6.eq) goto loc_8226E69C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8226e598
	if (ctx.cr6.eq) goto loc_8226E598;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x8226e588
	if (ctx.cr6.eq) goto loc_8226E588;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// beq cr6,0x8226e540
	if (ctx.cr6.eq) goto loc_8226E540;
	// cmplwi cr6,r10,40
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 40, ctx.xer);
	// beq cr6,0x8226e520
	if (ctx.cr6.eq) goto loc_8226E520;
	// cmplwi cr6,r10,41
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 41, ctx.xer);
	// beq cr6,0x8226e4dc
	if (ctx.cr6.eq) goto loc_8226E4DC;
	// cmplwi cr6,r10,1000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1000, ctx.xer);
	// bne cr6,0x8226e90c
	if (!ctx.cr6.eq) goto loc_8226E90C;
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8226e90c
	goto loc_8226E90C;
loc_8226E4DC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226e388
	ctx.lr = 0x8226E4E8;
	sub_8226E388(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8226e90c
	if (ctx.cr0.lt) goto loc_8226E90C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226e90c
	if (ctx.cr6.eq) goto loc_8226E90C;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226e90c
	if (ctx.cr6.eq) goto loc_8226E90C;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// lfs f2,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	ctx.f2.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f1,180(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822680f8
	ctx.lr = 0x8226E51C;
	sub_822680F8(ctx, base);
	// b 0x8226e90c
	goto loc_8226E90C;
loc_8226E520:
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8226e90c
	if (!ctx.cr6.eq) goto loc_8226E90C;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x8225c068
	ctx.lr = 0x8226E53C;
	sub_8225C068(ctx, base);
	// b 0x8226e90c
	goto loc_8226E90C;
loc_8226E540:
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r31,20
	ctx.r10.s64 = r31.s64 + 20;
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f0,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,180(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 184, temp.u32);
	// lwz r10,152(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 152);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r10.u32);
	// lwz r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 200);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r10.u32);
	// lwz r10,152(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 152);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r10.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// b 0x8226e90c
	goto loc_8226E90C;
loc_8226E588:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226dfd8
	ctx.lr = 0x8226E594;
	sub_8226DFD8(ctx, base);
	// b 0x8226e910
	goto loc_8226E910;
loc_8226E598:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x8226e90c
	if (ctx.cr6.lt) goto loc_8226E90C;
	// lwz r28,16(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r30,0(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x82257610
	ctx.lr = 0x8226E5C4;
	sub_82257610(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r29,196(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 196);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bne cr6,0x8226e5ec
	if (!ctx.cr6.eq) goto loc_8226E5EC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226e388
	ctx.lr = 0x8226E5E8;
	sub_8226E388(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8226E5EC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8226e688
	if (ctx.cr6.eq) goto loc_8226E688;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226e63c
	if (ctx.cr6.eq) goto loc_8226E63C;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// lfs f2,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	ctx.f2.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f1,180(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822680f8
	ctx.lr = 0x8226E614;
	sub_822680F8(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8226e63c
	if (ctx.cr6.eq) goto loc_8226E63C;
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r5,r11,30,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// bl 0x82288db8
	ctx.lr = 0x8226E630;
	sub_82288DB8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82288e30
	ctx.lr = 0x8226E63C;
	sub_82288E30(ctx, base);
loc_8226E63C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8226e688
	if (ctx.cr6.lt) goto loc_8226E688;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8225ca10
	ctx.lr = 0x8226E65C;
	sub_8225CA10(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8226e688
	if (ctx.cr6.eq) goto loc_8226E688;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8228aa78
	ctx.lr = 0x8226E670;
	sub_8228AA78(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f1,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r6,r11,31,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// bl 0x822889c0
	ctx.lr = 0x8226E688;
	sub_822889C0(ctx, base);
loc_8226E688:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82257670
	ctx.lr = 0x8226E698;
	sub_82257670(ctx, base);
	// b 0x8226e90c
	goto loc_8226E90C;
loc_8226E69C:
	// lwz r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 200);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwimi r10,r9,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// rlwimi r10,r9,0,29,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r10,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r10.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8226c7b0
	ctx.lr = 0x8226E6C8;
	sub_8226C7B0(ctx, base);
	// b 0x8226e90c
	goto loc_8226E90C;
loc_8226E6CC:
	// cmplwi cr6,r10,1002
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1002, ctx.xer);
	// beq cr6,0x8226e8e0
	if (ctx.cr6.eq) goto loc_8226E8E0;
	// cmplwi cr6,r10,1003
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1003, ctx.xer);
	// beq cr6,0x8226e844
	if (ctx.cr6.eq) goto loc_8226E844;
	// cmplwi cr6,r10,1004
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1004, ctx.xer);
	// beq cr6,0x8226e794
	if (ctx.cr6.eq) goto loc_8226E794;
	// ble cr6,0x8226e90c
	if (!ctx.cr6.gt) goto loc_8226E90C;
	// cmplwi cr6,r10,1006
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1006, ctx.xer);
	// ble cr6,0x8226e728
	if (!ctx.cr6.gt) goto loc_8226E728;
	// cmplwi cr6,r10,1007
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1007, ctx.xer);
	// bne cr6,0x8226e90c
	if (!ctx.cr6.eq) goto loc_8226E90C;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822608a8
	ctx.lr = 0x8226E720;
	sub_822608A8(ctx, base);
	// stw r3,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r3.u32);
	// b 0x8226e90c
	goto loc_8226E90C;
loc_8226E728:
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r10,1005
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1005, ctx.xer);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// bne cr6,0x8226e764
	if (!ctx.cr6.eq) goto loc_8226E764;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8226e788
	if (!ctx.cr6.lt) goto loc_8226E788;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x8226e78c
	goto loc_8226E78C;
loc_8226E764:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8226e788
	if (ctx.cr6.lt) goto loc_8226E788;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8226e788
	if (!ctx.cr6.lt) goto loc_8226E788;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8226e78c
	if (!ctx.cr0.lt) goto loc_8226E78C;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// b 0x8226e78c
	goto loc_8226E78C;
loc_8226E788:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8226E78C:
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// b 0x8226e90c
	goto loc_8226E90C;
loc_8226E794:
	// lwz r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 200);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwimi r10,r9,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// rlwimi r10,r9,0,29,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r10,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r10.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8226e90c
	if (!ctx.cr6.lt) goto loc_8226E90C;
	// mulli r8,r9,28
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(28));
loc_8226E7C8:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8226e90c
	if (!ctx.cr6.lt) goto loc_8226E90C;
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mulli r10,r10,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(28));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r8,r8,28
	ctx.r8.s64 = ctx.r8.s64 + 28;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8226e7c8
	if (ctx.cr6.lt) goto loc_8226E7C8;
	// b 0x8226e90c
	goto loc_8226E90C;
loc_8226E844:
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8226e90c
	if (!ctx.cr6.lt) goto loc_8226E90C;
	// mulli r8,r9,28
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(28));
loc_8226E864:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8226e90c
	if (!ctx.cr6.lt) goto loc_8226E90C;
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mulli r10,r10,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(28));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r8,28
	ctx.r8.s64 = ctx.r8.s64 + 28;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8226e864
	if (ctx.cr6.lt) goto loc_8226E864;
	// b 0x8226e90c
	goto loc_8226E90C;
loc_8226E8E0:
	// lwz r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 200);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwimi r10,r9,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// rlwimi r10,r9,0,29,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r10,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r10.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8225d708
	ctx.lr = 0x8226E90C;
	sub_8225D708(ctx, base);
loc_8226E90C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226E910:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82282DB0) {
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
	ctx.lr = 0x82282DB8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82282e4c
	if (ctx.cr0.eq) goto loc_82282E4C;
	// clrlwi r27,r5,24
	r27.u64 = ctx.r5.u32 & 0xFF;
loc_82282DE0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x82282e04
	if (!ctx.cr6.eq) goto loc_82282E04;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lhz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82280e38
	ctx.lr = 0x82282DFC;
	sub_82280E38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82282e4c
	if (!ctx.cr0.eq) goto loc_82282E4C;
loc_82282E04:
	// lhz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10, ctx.xer);
	// beq cr6,0x82282e4c
	if (ctx.cr6.eq) goto loc_82282E4C;
	// cmplwi cr6,r4,13
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 13, ctx.xer);
	// beq cr6,0x82282e4c
	if (ctx.cr6.eq) goto loc_82282E4C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822825e8
	ctx.lr = 0x82282E2C;
	sub_822825E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82282e3c
	if (ctx.cr0.eq) goto loc_82282E3C;
	// lhz r11,2(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
loc_82282E3C:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// lhzu r10,2(r31)
	ea = 2 + r31.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	r31.u32 = ea;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82282de0
	if (!ctx.cr0.eq) goto loc_82282DE0;
loc_82282E4C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82285D00) {
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
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f0,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f0,28(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f0,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// lfs f0,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f0,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f0,44(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lfs f0,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// lfs f0,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// lfs f0,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// lfs f0,60(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// lwz r11,156(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82285da8
	if (!ctx.cr6.gt) goto loc_82285DA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82285DA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82285DA8:
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

DEFINE_REX_FUNC(sub_82288AD0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82288b04
	if (ctx.cr6.eq) goto loc_82288B04;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82288b04
	if (ctx.cr6.eq) goto loc_82288B04;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82288b04
	if (ctx.cr6.eq) goto loc_82288B04;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,224(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82288B04:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82289098) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822890A0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32163
	r31.s64 = -2107834368;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,31388(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 31388);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82289118
	if (ctx.cr6.eq) goto loc_82289118;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822890CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822890DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lwz r11,31388(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 31388);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// and r31,r10,r29
	r31.u64 = ctx.r10.u64 & r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,192(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82289100;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82289118;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82289118:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8228B6C0) {
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
	ctx.lr = 0x8228B6C8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r25,r3,100
	r25.s64 = ctx.r3.s64 + 100;
	// addi r11,r11,8032
	ctx.r11.s64 = ctx.r11.s64 + 8032;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x824d438c
	ctx.lr = 0x8228B6E8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r28,r31
	r28.u64 = r31.u64;
	// li r27,17
	r27.s64 = 17;
	// li r30,0
	r30.s64 = 0;
loc_8228B6F4:
	// lwz r29,4(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8228b720
	if (ctx.cr6.eq) goto loc_8228B720;
loc_8228B700:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r26,60(r29)
	r26.u64 = REX_LOAD_U32(r29.u32 + 60);
	// bl 0x8228b2b0
	ctx.lr = 0x8228B70C;
	sub_8228B2B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82255b70
	ctx.lr = 0x8228B714;
	sub_82255B70(ctx, base);
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x8228b700
	if (!ctx.cr6.eq) goto loc_8228B700;
loc_8228B720:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// stwu r30,4(r28)
	ea = 4 + r28.u32;
	REX_STORE_U32(ea, r30.u32);
	r28.u32 = ea;
	// bne 0x8228b6f4
	if (!ctx.cr0.eq) goto loc_8228B6F4;
	// stw r30,72(r31)
	REX_STORE_U32(r31.u32 + 72, r30.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// bl 0x824d437c
	ctx.lr = 0x8228B748;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8228E4A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8228E4B0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r29,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82288cc0
	ctx.lr = 0x8228E4C8;
	sub_82288CC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8228e59c
	if (ctx.cr0.lt) goto loc_8228E59C;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228E510;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,28(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8228e554
	if (ctx.cr6.eq) goto loc_8228E554;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228E538;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228e554
	if (ctx.cr6.eq) goto loc_8228E554;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82216cc8
	ctx.lr = 0x8228E550;
	sub_82216CC8(ctx, base);
	// stw r29,28(r31)
	REX_STORE_U32(r31.u32 + 28, r29.u32);
loc_8228E554:
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8228e590
	if (ctx.cr6.eq) goto loc_8228E590;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228E574;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228e590
	if (ctx.cr6.eq) goto loc_8228E590;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82216cc8
	ctx.lr = 0x8228E58C;
	sub_82216CC8(ctx, base);
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
loc_8228E590:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8228cb10
	ctx.lr = 0x8228E598;
	sub_8228CB10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8228E59C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82292240) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82292248;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,20(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82292274
	if (ctx.cr6.eq) goto loc_82292274;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x82295568
	ctx.lr = 0x82292268;
	sub_82295568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255b70
	ctx.lr = 0x82292270;
	sub_82255B70(ctx, base);
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
loc_82292274:
	// lwz r30,24(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82292294
	if (ctx.cr6.eq) goto loc_82292294;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x82295488
	ctx.lr = 0x82292288;
	sub_82295488(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255b70
	ctx.lr = 0x82292290;
	sub_82255B70(ctx, base);
	// stw r29,24(r31)
	REX_STORE_U32(r31.u32 + 24, r29.u32);
loc_82292294:
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
	// b 0x822922b8
	goto loc_822922B8;
loc_822922A0:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82291b40
	ctx.lr = 0x822922AC;
	sub_82291B40(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x82255b70
	ctx.lr = 0x822922B4;
	sub_82255B70(ctx, base);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
loc_822922B8:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822922a0
	if (!ctx.cr6.eq) goto loc_822922A0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82293868) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82293870;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x822937f8
	ctx.lr = 0x82293884;
	sub_822937F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822938c0
	if (ctx.cr0.lt) goto loc_822938C0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822938ac
	if (ctx.cr6.eq) goto loc_822938AC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8221a820
	ctx.lr = 0x822938A0;
	sub_8221A820(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82292f08
	ctx.lr = 0x822938A8;
	sub_82292F08(ctx, base);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
loc_822938AC:
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// li r5,124
	ctx.r5.s64 = 124;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x822938BC;
	sub_822D4FA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822938C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82295488) {
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
	// bne cr6,0x822954b0
	if (!ctx.cr6.eq) goto loc_822954B0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// b 0x822954dc
	goto loc_822954DC;
loc_822954B0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// bne 0x822954d8
	if (!ctx.cr0.eq) goto loc_822954D8;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822954d0
	if (ctx.cr6.eq) goto loc_822954D0;
	// bl 0x82255b70
	ctx.lr = 0x822954D0;
	sub_82255B70(ctx, base);
loc_822954D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x822954D8;
	sub_82255B70(ctx, base);
loc_822954D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822954DC:
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

DEFINE_REX_FUNC(sub_82297948) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229796c
	if (ctx.cr6.eq) goto loc_8229796C;
	// bl 0x82255b70
	ctx.lr = 0x8229796C;
	sub_82255B70(ctx, base);
loc_8229796C:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229797c
	if (ctx.cr6.eq) goto loc_8229797C;
	// bl 0x82255b70
	ctx.lr = 0x8229797C;
	sub_82255B70(ctx, base);
loc_8229797C:
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

DEFINE_REX_FUNC(sub_82299AA8) {
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
	ctx.lr = 0x82299AB0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// li r25,2
	r25.s64 = 2;
	// ori r30,r9,65535
	r30.u64 = ctx.r9.u64 | 65535;
	// addi r26,r11,15936
	r26.s64 = ctx.r11.s64 + 15936;
	// addi r27,r10,16448
	r27.s64 = ctx.r10.s64 + 16448;
loc_82299AE0:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,262
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 262, ctx.xer);
	// bge cr6,0x82299b10
	if (!ctx.cr6.lt) goto loc_82299B10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f6f60
	ctx.lr = 0x82299AF4;
	sub_823F6F60(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,262
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 262, ctx.xer);
	// bge cr6,0x82299b08
	if (!ctx.cr6.lt) goto loc_82299B08;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x82299ec0
	if (ctx.cr6.eq) goto loc_82299EC0;
loc_82299B08:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82299ef0
	if (ctx.cr6.eq) goto loc_82299EF0;
loc_82299B10:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82299b78
	if (ctx.cr6.lt) goto loc_82299B78;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r7,76(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 76);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r8,44(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lbz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// lwz r8,60(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 60);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// lhzx r28,r7,r8
	r28.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// sthx r28,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, r28.u16);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r9,r10
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u16);
loc_82299B78:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// stw r25,88(r31)
	REX_STORE_U32(r31.u32 + 88, r25.u32);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// beq cr6,0x82299c10
	if (ctx.cr6.eq) goto loc_82299C10;
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82299c10
	if (!ctx.cr6.lt) goto loc_82299C10;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addi r11,r11,-262
	ctx.r11.s64 = ctx.r11.s64 + -262;
	// subf r10,r28,r10
	ctx.r10.u64 = ctx.r10.u64 - r28.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82299c10
	if (ctx.cr6.gt) goto loc_82299C10;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82299bd8
	if (ctx.cr6.eq) goto loc_82299BD8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82299300
	ctx.lr = 0x82299BD4;
	sub_82299300(ctx, base);
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
loc_82299BD8:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82299c10
	if (ctx.cr6.gt) goto loc_82299C10;
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82299c0c
	if (ctx.cr6.eq) goto loc_82299C0C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82299c10
	if (!ctx.cr6.eq) goto loc_82299C10;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// ble cr6,0x82299c10
	if (!ctx.cr6.gt) goto loc_82299C10;
loc_82299C0C:
	// stw r25,88(r31)
	REX_STORE_U32(r31.u32 + 88, r25.u32);
loc_82299C10:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82299de8
	if (ctx.cr6.lt) goto loc_82299DE8;
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82299de8
	if (ctx.cr6.gt) goto loc_82299DE8;
	// addi r10,r11,253
	ctx.r10.s64 = ctx.r11.s64 + 253;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 92);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// lwz r8,5784(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,5788(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 5788);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r8,r11,-3
	ctx.r8.s64 = ctx.r11.s64 + -3;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + r30.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sthx r10,r5,r6
	REX_STORE_U16(ctx.r5.u32 + ctx.r6.u32, ctx.r10.u16);
	// lwz r10,5784(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// lwz r11,5776(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5776);
	// stbx r7,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r10,5784(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,5784(r31)
	REX_STORE_U32(r31.u32 + 5784, ctx.r11.u32);
	// lbzx r11,r7,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + r27.u32);
	// addi r11,r11,292
	ctx.r11.s64 = ctx.r11.s64 + 292;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + r31.u32, ctx.r10.u16);
	// bge cr6,0x82299cac
	if (!ctx.cr6.lt) goto loc_82299CAC;
	// lbzx r11,r9,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + r26.u32);
	// b 0x82299cb8
	goto loc_82299CB8;
loc_82299CAC:
	// rlwinm r11,r9,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r26,256
	ctx.r10.s64 = r26.s64 + 256;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
loc_82299CB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,608
	ctx.r11.s64 = ctx.r11.s64 + 608;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + r31.u32, ctx.r10.u16);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r7,5784(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// lwz r10,5780(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5780);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r9,r7,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r7.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r10,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
loc_82299D04:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82299d74
	if (ctx.cr6.gt) goto loc_82299D74;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r7,64(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,80(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r5,76(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 76);
	// slw r7,r7,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lbz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
	// lwz r6,60(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 60);
	// xor r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// lwz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 56);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ctx.r5.u64;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// lhzx r28,r5,r6
	r28.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r6.u32);
	// sthx r28,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, r28.u16);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r7,64(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 64);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r7,r10
	REX_STORE_U16(ctx.r7.u32 + ctx.r10.u32, ctx.r11.u16);
loc_82299D74:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// bne 0x82299d04
	if (!ctx.cr0.eq) goto loc_82299D04;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r29,96(r31)
	REX_STORE_U32(r31.u32 + 96, r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r25,88(r31)
	REX_STORE_U32(r31.u32 + 88, r25.u32);
	// stw r10,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// beq cr6,0x82299ae0
	if (ctx.cr6.eq) goto loc_82299AE0;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82299db8
	if (ctx.cr6.lt) goto loc_82299DB8;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x82299dbc
	goto loc_82299DBC;
loc_82299DB8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82299DBC:
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229b558
	ctx.lr = 0x82299DCC;
	sub_8229B558(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// bl 0x82299240
	ctx.lr = 0x82299DDC;
	sub_82299240(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82299eb8
	goto loc_82299EB8;
loc_82299DE8:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82299ecc
	if (ctx.cr6.eq) goto loc_82299ECC;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r9,5784(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,5788(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5788);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,-1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// sthx r29,r9,r10
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, r29.u16);
	// lwz r9,5776(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 5776);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 35;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,5784(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// stbx r8,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwz r10,5784(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,5784(r31)
	REX_STORE_U32(r31.u32 + 5784, ctx.r10.u32);
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + r31.u32, ctx.r10.u16);
	// lwz r10,5784(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// lwz r11,5780(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5780);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82299e98
	if (!ctx.cr6.eq) goto loc_82299E98;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82299e70
	if (ctx.cr6.lt) goto loc_82299E70;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82299e74
	goto loc_82299E74;
loc_82299E70:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82299E74:
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bl 0x8229b558
	ctx.lr = 0x82299E88;
	sub_8229B558(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// bl 0x82299240
	ctx.lr = 0x82299E98;
	sub_82299240(ctx, base);
loc_82299E98:
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
loc_82299EB8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82299ae0
	if (!ctx.cr6.eq) goto loc_82299AE0;
loc_82299EC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82299EC4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_82299ECC:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r9.u32);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// b 0x82299ae0
	goto loc_82299AE0;
loc_82299EF0:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82299f50
	if (ctx.cr6.eq) goto loc_82299F50;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r9,5784(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,5788(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5788);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,-1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// sthx r29,r9,r10
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, r29.u16);
	// lwz r9,5784(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 35;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,5776(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5776);
	// stbx r8,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u8);
	// lwz r10,5784(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,5784(r31)
	REX_STORE_U32(r31.u32 + 5784, ctx.r10.u32);
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + r31.u32, ctx.r10.u16);
	// stw r29,96(r31)
	REX_STORE_U32(r31.u32 + 96, r29.u32);
loc_82299F50:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82299f68
	if (ctx.cr6.lt) goto loc_82299F68;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82299f6c
	goto loc_82299F6C;
loc_82299F68:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82299F6C:
	// addi r10,r24,-4
	ctx.r10.s64 = r24.s64 + -4;
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r5,r11,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r11.u64;
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x8229b558
	ctx.lr = 0x82299F88;
	sub_8229B558(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// bl 0x82299240
	ctx.lr = 0x82299F98;
	sub_82299240(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82299fbc
	if (!ctx.cr6.eq) goto loc_82299FBC;
	// addi r11,r24,-4
	ctx.r11.s64 = r24.s64 + -4;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 & r25.u64;
	// b 0x82299ec4
	goto loc_82299EC4;
loc_82299FBC:
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(r24.s32, 4, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// beq cr6,0x82299ec4
	if (ctx.cr6.eq) goto loc_82299EC4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82299ec4
	goto loc_82299EC4;
}

DEFINE_REX_FUNC(sub_822AECE0) {
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
	ctx.lr = 0x822AECE8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,476(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 476);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r22,480(r3)
	r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 480);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r20,484(r3)
	r20.u64 = REX_LOAD_U32(ctx.r3.u32 + 484);
	// clrlwi. r27,r5,24
	r27.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x822aed2c
	if (ctx.cr0.eq) goto loc_822AED2C;
	// lwz r10,80(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r9,116(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r8,112(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r28,12(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r8,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r8.u64;
	// srawi r22,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r22.s64 = ctx.r11.s32 >> 2;
	// srawi r20,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r20.s64 = ctx.r10.s32 >> 2;
loc_822AED2C:
	// li r31,1
	r31.s64 = 1;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// ble cr6,0x822aed78
	if (!ctx.cr6.gt) goto loc_822AED78;
loc_822AED38:
	// lwz r30,4(r23)
	r30.u64 = REX_LOAD_U32(r23.u32 + 4);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x822aed54
	goto loc_822AED54;
loc_822AED44:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x822aed5c
	if (ctx.cr6.eq) goto loc_822AED5C;
	// lwz r30,12(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 12);
loc_822AED54:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x822aed44
	if (!ctx.cr6.eq) goto loc_822AED44;
loc_822AED5C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822ac4d8
	ctx.lr = 0x822AED64;
	sub_822AC4D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822b1358
	ctx.lr = 0x822AED6C;
	sub_822B1358(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// blt cr6,0x822aed38
	if (ctx.cr6.lt) goto loc_822AED38;
loc_822AED78:
	// li r21,0
	r21.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// mr r29,r21
	r29.u64 = r21.u64;
	// beq cr6,0x822aef0c
	if (ctx.cr6.eq) goto loc_822AEF0C;
loc_822AED88:
	// lwz r30,4(r23)
	r30.u64 = REX_LOAD_U32(r23.u32 + 4);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x822aeda4
	goto loc_822AEDA4;
loc_822AED94:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x822aedac
	if (ctx.cr6.eq) goto loc_822AEDAC;
	// lwz r30,12(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 12);
loc_822AEDA4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x822aed94
	if (!ctx.cr6.eq) goto loc_822AED94;
loc_822AEDAC:
	// lwz r31,4(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x822aedc8
	goto loc_822AEDC8;
loc_822AEDB8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x822aedd0
	if (ctx.cr6.eq) goto loc_822AEDD0;
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_822AEDC8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x822aedb8
	if (!ctx.cr6.eq) goto loc_822AEDB8;
loc_822AEDD0:
	// stw r21,528(r31)
	REX_STORE_U32(r31.u32 + 528, r21.u32);
	// lwz r3,528(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 528);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822aee14
	if (ctx.cr6.eq) goto loc_822AEE14;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// bne cr6,0x822aee14
	if (!ctx.cr6.eq) goto loc_822AEE14;
	// bl 0x822b1d30
	ctx.lr = 0x822AEDF0;
	sub_822B1D30(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// b 0x822aee08
	goto loc_822AEE08;
loc_822AEDF8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// beq cr6,0x822aee10
	if (ctx.cr6.eq) goto loc_822AEE10;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_822AEE08:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822aedf8
	if (!ctx.cr6.eq) goto loc_822AEDF8;
loc_822AEE10:
	// stw r11,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r11.u32);
loc_822AEE14:
	// stw r21,532(r31)
	REX_STORE_U32(r31.u32 + 532, r21.u32);
	// lwz r3,532(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 532);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822aee6c
	if (ctx.cr6.eq) goto loc_822AEE6C;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// bne cr6,0x822aee6c
	if (!ctx.cr6.eq) goto loc_822AEE6C;
	// bl 0x822b1d30
	ctx.lr = 0x822AEE34;
	sub_822B1D30(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x822aee48
	if (!ctx.cr6.eq) goto loc_822AEE48;
	// lwz r11,476(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 476);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822aee6c
	if (!ctx.cr6.lt) goto loc_822AEE6C;
loc_822AEE48:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// b 0x822aee60
	goto loc_822AEE60;
loc_822AEE50:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// beq cr6,0x822aee68
	if (ctx.cr6.eq) goto loc_822AEE68;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_822AEE60:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822aee50
	if (!ctx.cr6.eq) goto loc_822AEE50;
loc_822AEE68:
	// stw r11,532(r31)
	REX_STORE_U32(r31.u32 + 532, ctx.r11.u32);
loc_822AEE6C:
	// stw r21,536(r31)
	REX_STORE_U32(r31.u32 + 536, r21.u32);
	// lwz r3,536(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 536);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822aeeb0
	if (ctx.cr6.eq) goto loc_822AEEB0;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// bne cr6,0x822aeeb0
	if (!ctx.cr6.eq) goto loc_822AEEB0;
	// bl 0x822b1d30
	ctx.lr = 0x822AEE8C;
	sub_822B1D30(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// b 0x822aeea4
	goto loc_822AEEA4;
loc_822AEE94:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// beq cr6,0x822aeeac
	if (ctx.cr6.eq) goto loc_822AEEAC;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_822AEEA4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822aee94
	if (!ctx.cr6.eq) goto loc_822AEE94;
loc_822AEEAC:
	// stw r11,536(r31)
	REX_STORE_U32(r31.u32 + 536, ctx.r11.u32);
loc_822AEEB0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b1268
	ctx.lr = 0x822AEEBC;
	sub_822B1268(ctx, base);
	// lwz r3,540(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 540);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822aef00
	if (ctx.cr6.eq) goto loc_822AEF00;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// bne cr6,0x822aef00
	if (!ctx.cr6.eq) goto loc_822AEF00;
	// bl 0x822b1d30
	ctx.lr = 0x822AEED8;
	sub_822B1D30(ctx, base);
	// lwz r4,4(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 4);
	// b 0x822aeef0
	goto loc_822AEEF0;
loc_822AEEE0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// beq cr6,0x822aeef8
	if (ctx.cr6.eq) goto loc_822AEEF8;
	// lwz r4,12(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
loc_822AEEF0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822aeee0
	if (!ctx.cr6.eq) goto loc_822AEEE0;
loc_822AEEF8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b1268
	ctx.lr = 0x822AEF00;
	sub_822B1268(ctx, base);
loc_822AEF00:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// blt cr6,0x822aed88
	if (ctx.cr6.lt) goto loc_822AED88;
loc_822AEF0C:
	// lwz r11,48(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 48);
	// addi r25,r26,48
	r25.s64 = r26.s64 + 48;
	// lwz r10,52(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 52);
	// addi r31,r23,48
	r31.s64 = r23.s64 + 48;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r4,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
	// bl 0x822ad068
	ctx.lr = 0x822AEF2C;
	sub_822AD068(ctx, base);
	// lwz r11,48(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 48);
	// lwz r10,52(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 52);
	// mr r30,r21
	r30.u64 = r21.u64;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi. r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822aef7c
	if (ctx.cr0.eq) goto loc_822AEF7C;
	// mr r29,r21
	r29.u64 = r21.u64;
loc_822AEF48:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r28,r11,r29
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// bl 0x822ae2a0
	ctx.lr = 0x822AEF54;
	sub_822AE2A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822b3448
	ctx.lr = 0x822AEF5C;
	sub_822B3448(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822aef48
	if (ctx.cr6.lt) goto loc_822AEF48;
loc_822AEF7C:
	// lwz r11,96(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 96);
	// addi r24,r26,96
	r24.s64 = r26.s64 + 96;
	// lwz r10,100(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 100);
	// addi r31,r23,96
	r31.s64 = r23.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r4,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
	// bl 0x822ad068
	ctx.lr = 0x822AEF9C;
	sub_822AD068(ctx, base);
	// lwz r11,96(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 96);
	// lwz r10,100(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 100);
	// mr r30,r21
	r30.u64 = r21.u64;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi. r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822aefec
	if (ctx.cr0.eq) goto loc_822AEFEC;
	// mr r29,r21
	r29.u64 = r21.u64;
loc_822AEFB8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r28,r11,r29
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// bl 0x822ae518
	ctx.lr = 0x822AEFC4;
	sub_822AE518(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822b36b0
	ctx.lr = 0x822AEFCC;
	sub_822B36B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822aefb8
	if (ctx.cr6.lt) goto loc_822AEFB8;
loc_822AEFEC:
	// lwz r11,32(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 32);
	// addi r3,r26,32
	ctx.r3.s64 = r26.s64 + 32;
	// lwz r10,36(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 36);
	// addi r29,r23,32
	r29.s64 = r23.s64 + 32;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r4,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
	// bl 0x822ad068
	ctx.lr = 0x822AF008;
	sub_822AD068(ctx, base);
	// lwz r11,32(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 32);
	// lwz r10,36(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 36);
	// mr r27,r21
	r27.u64 = r21.u64;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi. r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822af1a0
	if (ctx.cr0.eq) goto loc_822AF1A0;
	// mr r28,r21
	r28.u64 = r21.u64;
loc_822AF024:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r30,r11,r28
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// bl 0x822ae1d8
	ctx.lr = 0x822AF030;
	sub_822AE1D8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822AF04C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822af078
	if (ctx.cr6.eq) goto loc_822AF078;
	// bl 0x822b2880
	ctx.lr = 0x822AF05C;
	sub_822B2880(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
	// bl 0x822ab520
	ctx.lr = 0x822AF078;
	sub_822AB520(ctx, base);
loc_822AF078:
	// lwz r3,224(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822af0a4
	if (ctx.cr6.eq) goto loc_822AF0A4;
	// bl 0x822b2880
	ctx.lr = 0x822AF088;
	sub_822B2880(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r11.u32);
	// bl 0x822ab558
	ctx.lr = 0x822AF0A4;
	sub_822AB558(ctx, base);
loc_822AF0A4:
	// lwz r3,232(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 232);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822af0d0
	if (ctx.cr6.eq) goto loc_822AF0D0;
	// bl 0x822b2880
	ctx.lr = 0x822AF0B4;
	sub_822B2880(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r11.u32);
	// bl 0x822ab580
	ctx.lr = 0x822AF0D0;
	sub_822AB580(ctx, base);
loc_822AF0D0:
	// lwz r3,228(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 228);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822af0fc
	if (ctx.cr6.eq) goto loc_822AF0FC;
	// bl 0x822b2880
	ctx.lr = 0x822AF0E0;
	sub_822B2880(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r11.u32);
	// bl 0x822ab5b8
	ctx.lr = 0x822AF0FC;
	sub_822AB5B8(ctx, base);
loc_822AF0FC:
	// lwz r3,236(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822af128
	if (ctx.cr6.eq) goto loc_822AF128;
	// bl 0x822b2880
	ctx.lr = 0x822AF10C;
	sub_822B2880(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,236(r31)
	REX_STORE_U32(r31.u32 + 236, ctx.r11.u32);
	// bl 0x822ab5e0
	ctx.lr = 0x822AF128;
	sub_822AB5E0(ctx, base);
loc_822AF128:
	// lwz r3,248(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 248);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822af154
	if (ctx.cr6.eq) goto loc_822AF154;
	// bl 0x822b2880
	ctx.lr = 0x822AF138;
	sub_822B2880(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r11.u32);
	// bl 0x822ab608
	ctx.lr = 0x822AF154;
	sub_822AB608(ctx, base);
loc_822AF154:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822aacf0
	ctx.lr = 0x822AF15C;
	sub_822AACF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822af178
	if (ctx.cr0.eq) goto loc_822AF178;
	// bl 0x822b3628
	ctx.lr = 0x822AF168;
	sub_822B3628(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r11.u32);
loc_822AF178:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ab3d8
	ctx.lr = 0x822AF180;
	sub_822AB3D8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822af024
	if (ctx.cr6.lt) goto loc_822AF024;
loc_822AF1A0:
	// lwz r11,16(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 16);
	// addi r25,r26,16
	r25.s64 = r26.s64 + 16;
	// lwz r10,20(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 20);
	// addi r31,r23,16
	r31.s64 = r23.s64 + 16;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r4,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
	// bl 0x822ad068
	ctx.lr = 0x822AF1C0;
	sub_822AD068(ctx, base);
	// lwz r11,16(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 16);
	// lwz r10,20(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 20);
	// mr r30,r21
	r30.u64 = r21.u64;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi. r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822af240
	if (ctx.cr0.eq) goto loc_822AF240;
	// mr r29,r21
	r29.u64 = r21.u64;
loc_822AF1DC:
	// li r3,236
	ctx.r3.s64 = 236;
	// lwzx r28,r11,r29
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// bl 0x822c80d0
	ctx.lr = 0x822AF1E8;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822af200
	if (ctx.cr0.eq) goto loc_822AF200;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x822b6d58
	ctx.lr = 0x822AF1F8;
	sub_822B6D58(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x822af204
	goto loc_822AF204;
loc_822AF200:
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
loc_822AF204:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822ad9c0
	ctx.lr = 0x822AF210;
	sub_822AD9C0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822b78a8
	ctx.lr = 0x822AF220;
	sub_822B78A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822af1dc
	if (ctx.cr6.lt) goto loc_822AF1DC;
loc_822AF240:
	// lwz r11,64(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 64);
	// addi r3,r26,64
	ctx.r3.s64 = r26.s64 + 64;
	// lwz r10,68(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 68);
	// addi r31,r23,64
	r31.s64 = r23.s64 + 64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r4,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
	// bl 0x822ad068
	ctx.lr = 0x822AF25C;
	sub_822AD068(ctx, base);
	// lwz r11,64(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 64);
	// lwz r10,68(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 68);
	// mr r30,r21
	r30.u64 = r21.u64;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi. r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822af2c4
	if (ctx.cr0.eq) goto loc_822AF2C4;
	// mr r29,r21
	r29.u64 = r21.u64;
loc_822AF278:
	// lwzx r28,r11,r29
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r3,68(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 68);
	// bl 0x822b41c0
	ctx.lr = 0x822AF284;
	sub_822B41C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x822ae368
	ctx.lr = 0x822AF29C;
	sub_822AE368(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822ba498
	ctx.lr = 0x822AF2A4;
	sub_822BA498(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822af278
	if (ctx.cr6.lt) goto loc_822AF278;
loc_822AF2C4:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r26,80
	ctx.r3.s64 = r26.s64 + 80;
	// bl 0x822ad068
	ctx.lr = 0x822AF2D0;
	sub_822AD068(ctx, base);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x822af348
	if (ctx.cr6.eq) goto loc_822AF348;
	// mr r29,r21
	r29.u64 = r21.u64;
	// mr r28,r22
	r28.u64 = r22.u64;
loc_822AF2E0:
	// lwz r11,80(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 80);
	// lwzx r30,r29,r11
	r30.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// bl 0x822b1d30
	ctx.lr = 0x822AF2F0;
	sub_822B1D30(ctx, base);
	// lwz r31,4(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 4);
	// b 0x822af308
	goto loc_822AF308;
loc_822AF2F8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// beq cr6,0x822af310
	if (ctx.cr6.eq) goto loc_822AF310;
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_822AF308:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x822af2f8
	if (!ctx.cr6.eq) goto loc_822AF2F8;
loc_822AF310:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r27,20(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822ae440
	ctx.lr = 0x822AF320;
	sub_822AE440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822ba928
	ctx.lr = 0x822AF328;
	sub_822BA928(ctx, base);
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(r27.s32, 2, ctx.xer);
	// bne cr6,0x822af33c
	if (!ctx.cr6.eq) goto loc_822AF33C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b11e8
	ctx.lr = 0x822AF33C;
	sub_822B11E8(ctx, base);
loc_822AF33C:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x822af2e0
	if (!ctx.cr0.eq) goto loc_822AF2E0;
loc_822AF348:
	// lwz r11,128(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 128);
	// addi r28,r26,128
	r28.s64 = r26.s64 + 128;
	// lwz r10,132(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 132);
	// addi r31,r23,128
	r31.s64 = r23.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r4,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
	// bl 0x822ad068
	ctx.lr = 0x822AF368;
	sub_822AD068(ctx, base);
	// lwz r11,128(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 128);
	// lwz r10,132(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 132);
	// mr r30,r21
	r30.u64 = r21.u64;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi. r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822af3e4
	if (ctx.cr0.eq) goto loc_822AF3E4;
	// mr r29,r21
	r29.u64 = r21.u64;
loc_822AF384:
	// li r3,92
	ctx.r3.s64 = 92;
	// lwzx r27,r11,r29
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// bl 0x822c80d0
	ctx.lr = 0x822AF390;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822af3a8
	if (ctx.cr0.eq) goto loc_822AF3A8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x822bdff8
	ctx.lr = 0x822AF3A0;
	sub_822BDFF8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x822af3ac
	goto loc_822AF3AC;
loc_822AF3A8:
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
loc_822AF3AC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822ad9c0
	ctx.lr = 0x822AF3B8;
	sub_822AD9C0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822bb798
	ctx.lr = 0x822AF3C4;
	sub_822BB798(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822af384
	if (ctx.cr6.lt) goto loc_822AF384;
loc_822AF3E4:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r26,112
	ctx.r3.s64 = r26.s64 + 112;
	// bl 0x822ad068
	ctx.lr = 0x822AF3F0;
	sub_822AD068(ctx, base);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x822af454
	if (ctx.cr6.eq) goto loc_822AF454;
	// mr r30,r21
	r30.u64 = r21.u64;
	// mr r29,r20
	r29.u64 = r20.u64;
loc_822AF400:
	// lwz r11,112(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 112);
	// lwzx r31,r30,r11
	r31.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r28,32(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x822b1d30
	ctx.lr = 0x822AF414;
	sub_822B1D30(ctx, base);
	// lwz r4,4(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 4);
	// b 0x822af42c
	goto loc_822AF42C;
loc_822AF41C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// beq cr6,0x822af434
	if (ctx.cr6.eq) goto loc_822AF434;
	// lwz r4,12(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
loc_822AF42C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822af41c
	if (!ctx.cr6.eq) goto loc_822AF41C;
loc_822AF434:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822ae5e0
	ctx.lr = 0x822AF440;
	sub_822AE5E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822be238
	ctx.lr = 0x822AF448;
	sub_822BE238(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x822af400
	if (!ctx.cr0.eq) goto loc_822AF400;
loc_822AF454:
	// lwz r11,144(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 144);
	// addi r28,r26,144
	r28.s64 = r26.s64 + 144;
	// lwz r10,148(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 148);
	// addi r31,r23,144
	r31.s64 = r23.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r4,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
	// bl 0x822ad068
	ctx.lr = 0x822AF474;
	sub_822AD068(ctx, base);
	// lwz r11,144(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 144);
	// lwz r10,148(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 148);
	// mr r30,r21
	r30.u64 = r21.u64;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi. r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822af4f0
	if (ctx.cr0.eq) goto loc_822AF4F0;
	// mr r29,r21
	r29.u64 = r21.u64;
loc_822AF490:
	// li r3,60
	ctx.r3.s64 = 60;
	// lwzx r27,r11,r29
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// bl 0x822c80d0
	ctx.lr = 0x822AF49C;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822af4b4
	if (ctx.cr0.eq) goto loc_822AF4B4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x822c2140
	ctx.lr = 0x822AF4AC;
	sub_822C2140(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x822af4b8
	goto loc_822AF4B8;
loc_822AF4B4:
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
loc_822AF4B8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822ad9c0
	ctx.lr = 0x822AF4C4;
	sub_822AD9C0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822c22e0
	ctx.lr = 0x822AF4D0;
	sub_822C22E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822af490
	if (ctx.cr6.lt) goto loc_822AF490;
loc_822AF4F0:
	// lwz r11,160(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 160);
	// addi r28,r26,160
	r28.s64 = r26.s64 + 160;
	// lwz r10,164(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 164);
	// addi r31,r23,160
	r31.s64 = r23.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r4,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
	// bl 0x822ad068
	ctx.lr = 0x822AF510;
	sub_822AD068(ctx, base);
	// lwz r11,160(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 160);
	// lwz r10,164(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 164);
	// mr r30,r21
	r30.u64 = r21.u64;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi. r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822af58c
	if (ctx.cr0.eq) goto loc_822AF58C;
	// mr r29,r21
	r29.u64 = r21.u64;
loc_822AF52C:
	// li r3,96
	ctx.r3.s64 = 96;
	// lwzx r27,r11,r29
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// bl 0x822c80d0
	ctx.lr = 0x822AF538;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822af550
	if (ctx.cr0.eq) goto loc_822AF550;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x822c2780
	ctx.lr = 0x822AF548;
	sub_822C2780(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x822af554
	goto loc_822AF554;
loc_822AF550:
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
loc_822AF554:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822ad9c0
	ctx.lr = 0x822AF560;
	sub_822AD9C0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822c2808
	ctx.lr = 0x822AF56C;
	sub_822C2808(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822af52c
	if (ctx.cr6.lt) goto loc_822AF52C;
loc_822AF58C:
	// lwz r11,476(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 476);
	// addi r31,r26,536
	r31.s64 = r26.s64 + 536;
	// li r30,3
	r30.s64 = 3;
	// stw r11,476(r26)
	REX_STORE_U32(r26.u32 + 476, ctx.r11.u32);
	// lwz r11,480(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 480);
	// stw r11,480(r26)
	REX_STORE_U32(r26.u32 + 480, ctx.r11.u32);
	// lwz r11,484(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 484);
	// stw r11,484(r26)
	REX_STORE_U32(r26.u32 + 484, ctx.r11.u32);
	// lbz r11,469(r23)
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + 469);
	// stb r11,469(r26)
	REX_STORE_U8(r26.u32 + 469, ctx.r11.u8);
	// lwz r11,584(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 584);
	// stw r11,584(r26)
	REX_STORE_U32(r26.u32 + 584, ctx.r11.u32);
loc_822AF5BC:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r3,r31,-48
	ctx.r3.s64 = r31.s64 + -48;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r4,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
	// bl 0x822ad068
	ctx.lr = 0x822AF5D4;
	sub_822AD068(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r4,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
	// bl 0x822ad068
	ctx.lr = 0x822AF5EC;
	sub_822AD068(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x822af5bc
	if (!ctx.cr0.eq) goto loc_822AF5BC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822abe68
	ctx.lr = 0x822AF600;
	sub_822ABE68(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,1452(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,7260(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 7260);
	ctx.f13.f64 = double(temp.f32);
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r30,0(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822af6c8
	if (ctx.cr6.eq) goto loc_822AF6C8;
loc_822AF644:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b5e70
	ctx.lr = 0x822AF654;
	sub_822B5E70(ctx, base);
	// addi r11,r31,168
	ctx.r11.s64 = r31.s64 + 168;
	// li r9,3
	ctx.r9.s64 = 3;
	// lfs f12,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_822AF678:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfsx f11,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x822af690
	if (!ctx.cr6.lt) goto loc_822AF690;
	// stfsx f13,r8,r11
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
loc_822AF690:
	// fadds f0,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfsx f13,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822af6a4
	if (!ctx.cr6.gt) goto loc_822AF6A4;
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
loc_822AF6A4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822af678
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822AF678;
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822af644
	if (!ctx.cr6.eq) goto loc_822AF644;
	// lfs f12,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
loc_822AF6C8:
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f13,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f7,f0,f12
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r26,440
	ctx.r11.s64 = r26.s64 + 440;
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fadds f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// fmuls f12,f8,f8
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,440(r26)
	REX_STORE_U32(r26.u32 + 440, ctx.r11.u32);
	// fmadds f0,f0,f0,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f12.f64)));
	// stw r10,444(r26)
	REX_STORE_U32(r26.u32 + 444, ctx.r10.u32);
	// stw r8,448(r26)
	REX_STORE_U32(r26.u32 + 448, ctx.r8.u32);
	// stw r9,452(r26)
	REX_STORE_U32(r26.u32 + 452, ctx.r9.u32);
	// stfs f13,452(r26)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r26.u32 + 452, temp.u32);
	// fmadds f0,f9,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,456(r26)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r26.u32 + 456, temp.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(__savevmx_118) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__savevmx_121) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_28) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_71) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_822E43A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mflr r31
	r31.u64 = ctx.lr;
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r29,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r29.u64);
	// std r28,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, r28.u64);
	// stwu r1,-5360(r1)
	ea = -5360 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,2624
	ctx.r5.s64 = 2624;
	// bl 0x822d4fa0
	ctx.lr = 0x822E43D4;
	sub_822D4FA0(ctx, base);
	// addi r3,r1,2704
	ctx.r3.s64 = ctx.r1.s64 + 2704;
	// bl 0x824d4a7c
	ctx.lr = 0x822E43DC;
	__imp__RtlCaptureContext(ctx, base);
	// lis r4,-32210
	ctx.r4.s64 = -2110914560;
	// addi r4,r4,17412
	ctx.r4.s64 = ctx.r4.s64 + 17412;
	// stw r4,2712(r1)
	REX_STORE_U32(ctx.r1.u32 + 2712, ctx.r4.u32);
	// bl 0x822d91e0
	ctx.lr = 0x822E43EC;
	sub_822D91E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lis r4,-32210
	ctx.r4.s64 = -2110914560;
	// addi r4,r4,17412
	ctx.r4.s64 = ctx.r4.s64 + 17412;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824d4a8c
	ctx.lr = 0x822E4404;
	__imp__RtlUnwind(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,2624
	ctx.r5.s64 = 2624;
	// bl 0x822d4fa0
	ctx.lr = 0x822E4414;
	sub_822D4FA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822d91e0
	ctx.lr = 0x822E441C;
	sub_822D91E0(ctx, base);
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r5,r4,0,31,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r5,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r5.u32);
	// mtlr r31
	ctx.lr = r31.u64;
	// ld r28,5328(r1)
	r28.u64 = REX_LOAD_U64(ctx.r1.u32 + 5328);
	// ld r29,5336(r1)
	r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 5336);
	// ld r30,5344(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 5344);
	// ld r31,5352(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 5352);
	// addi r1,r1,5360
	ctx.r1.s64 = ctx.r1.s64 + 5360;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E8D48) {
	REX_FUNC_PROLOGUE();
	// stw r4,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E8D68) {
	REX_FUNC_PROLOGUE();
	// lwz r3,60(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E8EB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E9180) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e91b8
	if (ctx.cr6.eq) goto loc_822E91B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E91B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
loc_822E91B8:
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

DEFINE_REX_FUNC(sub_822EA538) {
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
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lwz r8,44(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822EA570;
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

DEFINE_REX_FUNC(sub_822EB878) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822eb8ac
	if (ctx.cr6.eq) goto loc_822EB8AC;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32791
	ctx.r4.u64 = ctx.r4.u64 | 32791;
	// bl 0x823cd250
	ctx.lr = 0x822EB8A4;
	sub_823CD250(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
loc_822EB8AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EB8C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,80(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822EB8D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,132(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 132);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822EB8E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_822ED090) {
	REX_FUNC_PROLOGUE();
	// lwz r10,328(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 328);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,328(r3)
	REX_STORE_U32(ctx.r3.u32 + 328, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,324(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,324(r11)
	REX_STORE_U32(ctx.r11.u32 + 324, ctx.r10.u32);
	// lwz r10,320(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 320);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,320(r11)
	REX_STORE_U32(ctx.r11.u32 + 320, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822ED560) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ed590
	if (ctx.cr6.eq) goto loc_822ED590;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// ori r4,r4,32781
	ctx.r4.u64 = ctx.r4.u64 | 32781;
	// bl 0x823cd250
	ctx.lr = 0x822ED590;
	sub_823CD250(ctx, base);
loc_822ED590:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822EEF08) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EFC08) {
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
	ctx.lr = 0x822EFC10;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stb r31,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,572(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 572);
	// bl 0x822f9928
	ctx.lr = 0x822EFC44;
	sub_822F9928(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r29,r11,22
	r29.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// beq cr6,0x822efc94
	if (ctx.cr6.eq) goto loc_822EFC94;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822efd90
	if (ctx.cr6.lt) goto loc_822EFD90;
loc_822EFC5C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822efd90
	if (ctx.cr6.lt) goto loc_822EFD90;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822fa4a0
	ctx.lr = 0x822EFC70;
	sub_822FA4A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822efd90
	if (ctx.cr6.lt) goto loc_822EFD90;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,572(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 572);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x822f9990
	ctx.lr = 0x822EFC8C;
	sub_822F9990(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// bne cr6,0x822efc5c
	if (!ctx.cr6.eq) goto loc_822EFC5C;
loc_822EFC94:
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,572(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 572);
	// bl 0x822f99f8
	ctx.lr = 0x822EFCA0;
	sub_822F99F8(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x822f9928
	ctx.lr = 0x822EFCB4;
	sub_822F9928(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// beq cr6,0x822efd48
	if (ctx.cr6.eq) goto loc_822EFD48;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822efd90
	if (ctx.cr6.lt) goto loc_822EFD90;
loc_822EFCC8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822efd90
	if (ctx.cr6.lt) goto loc_822EFD90;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x822efce8
	if (!ctx.cr6.eq) goto loc_822EFCE8;
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// b 0x822efcf4
	goto loc_822EFCF4;
loc_822EFCE8:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x822efcf8
	if (!ctx.cr6.eq) goto loc_822EFCF8;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
loc_822EFCF4:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_822EFCF8:
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,20(r11)
	REX_STORE_U8(ctx.r11.u32 + 20, r31.u8);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r31.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, r31.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,80(r8)
	REX_STORE_U32(ctx.r8.u32 + 80, r31.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,24(r7)
	REX_STORE_U32(ctx.r7.u32 + 24, r31.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, r31.u32);
	// lwz r3,568(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 568);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x822f9990
	ctx.lr = 0x822EFD40;
	sub_822F9990(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// bne cr6,0x822efcc8
	if (!ctx.cr6.eq) goto loc_822EFCC8;
loc_822EFD48:
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,568(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 568);
	// bl 0x822f99f8
	ctx.lr = 0x822EFD54;
	sub_822F99F8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EFD6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822efd90
	if (ctx.cr6.lt) goto loc_822EFD90;
	// li r11,2
	ctx.r11.s64 = 2;
	// std r27,560(r30)
	REX_STORE_U64(r30.u32 + 560, r27.u64);
	// stw r31,536(r30)
	REX_STORE_U32(r30.u32 + 536, r31.u32);
	// stw r11,532(r30)
	REX_STORE_U32(r30.u32 + 532, ctx.r11.u32);
	// stw r28,556(r30)
	REX_STORE_U32(r30.u32 + 556, r28.u32);
	// stw r31,588(r30)
	REX_STORE_U32(r30.u32 + 588, r31.u32);
	// stw r31,632(r30)
	REX_STORE_U32(r30.u32 + 632, r31.u32);
loc_822EFD90:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822F8BB0) {
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
	// addi r10,r11,-25952
	ctx.r10.s64 = ctx.r11.s64 + -25952;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x822f6df8
	ctx.lr = 0x822F8BDC;
	sub_822F6DF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822eece8
	ctx.lr = 0x822F8BE4;
	sub_822EECE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822f8c04
	if (ctx.cr6.eq) goto loc_822F8C04;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32818
	ctx.r4.u64 = ctx.r4.u64 | 32818;
	// bl 0x823cd250
	ctx.lr = 0x822F8C00;
	sub_823CD250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822F8C04:
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

DEFINE_REX_FUNC(sub_822F9900) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FC;
	// lis r10,-32688
	ctx.r10.s64 = -2142240768;
	// ori r8,r10,22
	ctx.r8.u64 = ctx.r10.u64 | 22;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r9,r11,0
	ctx.r9.s64 = ctx.r11.s64 + 0;
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r5,r8
	ctx.r3.u64 = ctx.r5.u64 & ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FA9B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822FA9C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822f9490
	ctx.lr = 0x822FA9E4;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822faa48
	if (ctx.cr6.lt) goto loc_822FAA48;
	// li r5,104
	ctx.r5.s64 = 104;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x822FAA00;
	sub_822D5870(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r4,r11,-22720
	ctx.r4.s64 = ctx.r11.s64 + -22720;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r30,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r29.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r5,72
	ctx.r7.s64 = ctx.r5.s64 + 72;
	// bl 0x822f9760
	ctx.lr = 0x822FAA2C;
	sub_822F9760(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822faa48
	if (ctx.cr6.lt) goto loc_822FAA48;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_822FAA48:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822faa64
	if (ctx.cr6.eq) goto loc_822FAA64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f94e8
	ctx.lr = 0x822FAA64;
	sub_822F94E8(ctx, base);
loc_822FAA64:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822FFD08) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// beq cr6,0x822ffe18
	if (ctx.cr6.eq) goto loc_822FFE18;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ffe18
	if (ctx.cr6.eq) goto loc_822FFE18;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822ffd50
	if (!ctx.cr6.eq) goto loc_822FFD50;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822ffe18
	if (!ctx.cr6.eq) goto loc_822FFE18;
loc_822FFD50:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822ffe18
	if (ctx.cr6.eq) goto loc_822FFE18;
	// lwz r10,704(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 704);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822ffd90
	if (ctx.cr6.eq) goto loc_822FFD90;
	// lwz r10,696(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 696);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822ffd90
	if (ctx.cr6.eq) goto loc_822FFD90;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x822ffd90
	if (!ctx.cr6.eq) goto loc_822FFD90;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ffe20
	if (!ctx.cr6.eq) goto loc_822FFE20;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,692(r31)
	REX_STORE_U32(r31.u32 + 692, ctx.r11.u32);
	// b 0x822ffe20
	goto loc_822FFE20;
loc_822FFD90:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,228(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// stw r11,692(r31)
	REX_STORE_U32(r31.u32 + 692, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// beq cr6,0x822ffde0
	if (ctx.cr6.eq) goto loc_822FFDE0;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_822FFDE0:
	// lwz r11,712(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 712);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FFDF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822ffe20
	if (ctx.cr6.lt) goto loc_822FFE20;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,820(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 820);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822ffe20
	if (!ctx.cr6.eq) goto loc_822FFE20;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,692(r31)
	REX_STORE_U32(r31.u32 + 692, ctx.r11.u32);
	// b 0x822ffe20
	goto loc_822FFE20;
loc_822FFE18:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_822FFE20:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822ffe38
	if (ctx.cr6.eq) goto loc_822FFE38;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822ffe38
	if (ctx.cr6.eq) goto loc_822FFE38;
	// lwz r11,692(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 692);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_822FFE38:
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

DEFINE_REX_FUNC(sub_82305D68) {
	REX_FUNC_PROLOGUE();
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r10,r11,5
	ctx.r10.u64 = ctx.r11.u64 | 5;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf r7,r8,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r8.u64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82307048) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82307050;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,28(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r30,0
	r30.s64 = 0;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lhz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230714c
	if (ctx.cr6.eq) goto loc_8230714C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// bl 0x822f9900
	ctx.lr = 0x82307080;
	sub_822F9900(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82307154
	if (ctx.cr6.lt) goto loc_82307154;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823070c8
	if (ctx.cr6.eq) goto loc_823070C8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823070c8
	if (ctx.cr6.eq) goto loc_823070C8;
	// lwz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8230714c
	if (!ctx.cr6.eq) goto loc_8230714C;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x823070d8
	if (ctx.cr6.eq) goto loc_823070D8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823070ec
	if (ctx.cr6.eq) goto loc_823070EC;
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
	// b 0x823070ec
	goto loc_823070EC;
loc_823070C8:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,188
	ctx.r3.u64 = ctx.r3.u64 | 188;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_823070D8:
	// lwz r9,72(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x823070ec
	if (!ctx.cr6.lt) goto loc_823070EC;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
loc_823070EC:
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8230710c
	if (!ctx.cr6.gt) goto loc_8230710C;
loc_823070FC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_8230710C:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x823070fc
	if (ctx.cr6.gt) goto loc_823070FC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// ld r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 16);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r9,0(r28)
	REX_STORE_U64(r28.u32 + 0, ctx.r9.u64);
	// stw r30,220(r31)
	REX_STORE_U32(r31.u32 + 220, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_8230714C:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,187
	ctx.r3.u64 = ctx.r3.u64 | 187;
loc_82307154:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8230C900) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8230C908;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 76);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// addi r28,r4,76
	r28.s64 = ctx.r4.s64 + 76;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230c974
	if (ctx.cr6.eq) goto loc_8230C974;
	// lhz r11,72(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230c964
	if (ctx.cr6.eq) goto loc_8230C964;
	// li r31,0
	r31.s64 = 0;
loc_8230C934:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 224);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x822f94e8
	ctx.lr = 0x8230C950;
	sub_822F94E8(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// lhz r10,72(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 72);
	// clrlwi r31,r11,16
	r31.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8230c934
	if (ctx.cr6.lt) goto loc_8230C934;
loc_8230C964:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,224(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f94e8
	ctx.lr = 0x8230C974;
	sub_822F94E8(ctx, base);
loc_8230C974:
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// addi r28,r30,80
	r28.s64 = r30.s64 + 80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230c9d4
	if (ctx.cr6.eq) goto loc_8230C9D4;
	// lhz r11,74(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230c9c4
	if (ctx.cr6.eq) goto loc_8230C9C4;
	// li r31,0
	r31.s64 = 0;
loc_8230C994:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mulli r11,r31,28
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(28));
	// lwz r3,224(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 224);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// bl 0x822f94e8
	ctx.lr = 0x8230C9B0;
	sub_822F94E8(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// lhz r10,74(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 74);
	// clrlwi r31,r11,16
	r31.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8230c994
	if (ctx.cr6.lt) goto loc_8230C994;
loc_8230C9C4:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,224(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f94e8
	ctx.lr = 0x8230C9D4;
	sub_822F94E8(ctx, base);
loc_8230C9D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82310A18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82310A20;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r28,0
	r28.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82310a4c
	if (!ctx.cr6.eq) goto loc_82310A4C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_82310A4C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82310b28
	if (ctx.cr6.eq) goto loc_82310B28;
loc_82310A60:
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// cmpld cr6,r10,r29
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, r29.u64, ctx.xer);
	// bgt cr6,0x82310b28
	if (ctx.cr6.gt) goto loc_82310B28;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82310b18
	if (!ctx.cr6.eq) goto loc_82310B18;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82310A94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82310b28
	if (ctx.cr6.lt) goto loc_82310B28;
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82310adc
	if (ctx.cr6.eq) goto loc_82310ADC;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// b 0x82310ae4
	goto loc_82310AE4;
loc_82310ADC:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_82310AE4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// bne 0x82310b00
	if (!ctx.cr0.eq) goto loc_82310B00;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r28.u32);
	// stw r28,20(r31)
	REX_STORE_U32(r31.u32 + 20, r28.u32);
loc_82310B00:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x822f94e8
	ctx.lr = 0x82310B10;
	sub_822F94E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82310b28
	if (ctx.cr6.lt) goto loc_82310B28;
loc_82310B18:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82310a60
	if (!ctx.cr6.eq) goto loc_82310A60;
loc_82310B28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823125C8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82312630
	if (ctx.cr6.eq) goto loc_82312630;
loc_823125E8:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// bgt cr6,0x82312610
	if (ctx.cr6.gt) goto loc_82312610;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x82312624
	if (ctx.cr6.lt) goto loc_82312624;
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// blt cr6,0x82312630
	if (ctx.cr6.lt) goto loc_82312630;
loc_82312610:
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823125e8
	if (!ctx.cr6.eq) goto loc_823125E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82312624:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
loc_82312630:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82313660) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82313668;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r28,0
	r28.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82313694
	if (!ctx.cr6.eq) goto loc_82313694;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_82313694:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82313770
	if (ctx.cr6.eq) goto loc_82313770;
loc_823136A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82313770
	if (ctx.cr6.eq) goto loc_82313770;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// cmpld cr6,r10,r29
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, r29.u64, ctx.xer);
	// bge cr6,0x82313770
	if (!ctx.cr6.lt) goto loc_82313770;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823136D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82313770
	if (ctx.cr6.lt) goto loc_82313770;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82313720
	if (ctx.cr6.eq) goto loc_82313720;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// b 0x82313728
	goto loc_82313728;
loc_82313720:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_82313728:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// bne 0x82313744
	if (!ctx.cr0.eq) goto loc_82313744;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// stw r28,20(r31)
	REX_STORE_U32(r31.u32 + 20, r28.u32);
loc_82313744:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x822f94e8
	ctx.lr = 0x82313754;
	sub_822F94E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82313770
	if (ctx.cr6.lt) goto loc_82313770;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823136a8
	if (!ctx.cr6.eq) goto loc_823136A8;
loc_82313770:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82317F98) {
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
	ctx.lr = 0x82317FA0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,580(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 580);
	// li r28,0
	r28.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r28,716(r3)
	REX_STORE_U32(ctx.r3.u32 + 716, r28.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,648(r3)
	REX_STORE_U32(ctx.r3.u32 + 648, ctx.r10.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82318070
	if (!ctx.cr6.gt) goto loc_82318070;
	// mr r27,r28
	r27.u64 = r28.u64;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_82317FD4:
	// lwz r10,584(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 584);
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mulli r11,r8,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(1776));
	// add r31,r11,r26
	r31.u64 = ctx.r11.u64 + r26.u64;
	// addi r3,r31,1616
	ctx.r3.s64 = r31.s64 + 1616;
	// bl 0x822d5870
	ctx.lr = 0x82317FF8;
	sub_822D5870(ctx, base);
	// stw r28,468(r31)
	REX_STORE_U32(r31.u32 + 468, r28.u32);
	// stw r28,472(r31)
	REX_STORE_U32(r31.u32 + 472, r28.u32);
	// stw r28,476(r31)
	REX_STORE_U32(r31.u32 + 476, r28.u32);
	// stw r28,480(r31)
	REX_STORE_U32(r31.u32 + 480, r28.u32);
	// lhz r7,182(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 182);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8231804c
	if (!ctx.cr6.gt) goto loc_8231804C;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8231801C:
	// mulli r11,r30,56
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(56));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,200
	ctx.r4.s64 = ctx.r11.s64 + 200;
	// bl 0x82328658
	ctx.lr = 0x82318030;
	sub_82328658(ctx, base);
	// lhz r9,182(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 182);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8231801c
	if (ctx.cr6.lt) goto loc_8231801C;
loc_8231804C:
	// addi r11,r27,1
	ctx.r11.s64 = r27.s64 + 1;
	// stw r28,188(r31)
	REX_STORE_U32(r31.u32 + 188, r28.u32);
	// lhz r10,580(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 580);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x82317fd4
	if (ctx.cr6.lt) goto loc_82317FD4;
loc_82318070:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82320670) {
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
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822d5870
	ctx.lr = 0x82320690;
	sub_822D5870(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-96
	ctx.r9.s64 = -6291456;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// li r8,500
	ctx.r8.s64 = 500;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// li r7,200
	ctx.r7.s64 = 200;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// std r11,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r11.u64);
	// stw r10,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// stw r9,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// stw r10,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// stw r8,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r8.u32);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// stw r7,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r7.u32);
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// stw r6,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r6.u32);
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// stw r10,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_823241F0) {
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
	ctx.lr = 0x823241F8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// lwz r27,0(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r3,224
	r29.s64 = ctx.r3.s64 + 224;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r28,r4,1776
	r28.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// lwz r11,320(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 320);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r24,r9,r10
	r24.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r25,r11,r28
	r25.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x8246e538
	ctx.lr = 0x82324234;
	sub_8246E538(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82324344
	if (ctx.cr6.lt) goto loc_82324344;
	// lhz r11,114(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 114);
	// li r23,1
	r23.s64 = 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82324270
	if (ctx.cr6.gt) goto loc_82324270;
	// lwz r11,132(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 132);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82324270
	if (ctx.cr6.eq) goto loc_82324270;
	// lwz r11,424(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 424);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stb r23,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r23.u8);
	// b 0x823242a0
	goto loc_823242A0;
loc_82324270:
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82319780
	ctx.lr = 0x82324284;
	sub_82319780(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82324344
	if (ctx.cr6.lt) goto loc_82324344;
	// lwz r11,424(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 424);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stb r10,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
loc_823242A0:
	// lwz r11,424(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 424);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x823242f4
	if (!ctx.cr6.eq) goto loc_823242F4;
	// lwz r11,444(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823242f4
	if (!ctx.cr6.eq) goto loc_823242F4;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82319780
	ctx.lr = 0x823242D4;
	sub_82319780(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82324344
	if (ctx.cr6.lt) goto loc_82324344;
	// lwz r11,320(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 320);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + r28.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,436(r9)
	REX_STORE_U32(ctx.r9.u32 + 436, ctx.r8.u32);
loc_823242F4:
	// lwz r11,424(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 424);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82324340
	if (!ctx.cr6.eq) goto loc_82324340;
	// lwz r11,444(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 444);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82324340
	if (!ctx.cr6.eq) goto loc_82324340;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// sth r26,32(r11)
	REX_STORE_U16(ctx.r11.u32 + 32, r26.u16);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r26,124(r31)
	REX_STORE_U32(r31.u32 + 124, r26.u32);
	// lwz r9,304(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 304);
	// lwz r11,320(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 320);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822d4fa0
	ctx.lr = 0x82324340;
	sub_822D4FA0(ctx, base);
loc_82324340:
	// stw r23,4(r24)
	REX_STORE_U32(r24.u32 + 4, r23.u32);
loc_82324344:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82328740) {
	REX_FUNC_PROLOGUE();
	// lwz r10,120(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r11,40(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8232875c
	if (!ctx.cr6.eq) goto loc_8232875C;
	// lwz r10,32(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8232875C:
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x823287b8
	if (!ctx.cr6.eq) goto loc_823287B8;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,16
	ctx.r8.s64 = 16;
	// sth r9,28(r4)
	REX_STORE_U16(ctx.r4.u32 + 28, ctx.r9.u16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r8,30(r4)
	REX_STORE_U16(ctx.r4.u32 + 30, ctx.r8.u16);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82328784:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lhzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// sthx r3,r9,r11
	REX_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r3.u16);
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82328784
	if (ctx.cr6.lt) goto loc_82328784;
	// blr 
	return;
loc_823287B8:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,8
	ctx.r8.s64 = 8;
	// sth r9,28(r4)
	REX_STORE_U16(ctx.r4.u32 + 28, ctx.r9.u16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r8,30(r4)
	REX_STORE_U16(ctx.r4.u32 + 30, ctx.r8.u16);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823287D4:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lhzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// sthx r5,r9,r11
	REX_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u16);
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x823287d4
	if (ctx.cr6.lt) goto loc_823287D4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232B818) {
	REX_FUNC_PROLOGUE();
	// b 0x8232b788
	sub_8232B788(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8232B820) {
	REX_FUNC_PROLOGUE();
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// mulld r11,r11,r11
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r11.u64);
	// mulld r10,r10,r10
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r10.u64);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rldicl r11,r9,12,52
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 12) & 0xFFF;
	// rldicl r8,r9,44,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 44) & 0xFFFFFFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b860
	if (!ctx.cr6.eq) goto loc_8232B860;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// li r10,32
	ctx.r10.s64 = 32;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b860
	if (!ctx.cr6.eq) goto loc_8232B860;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8232B860:
	// rlwinm r8,r11,0,0,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8232b880
	if (!ctx.cr6.eq) goto loc_8232B880;
loc_8232B86C:
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// rlwinm r8,r11,0,0,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8232b86c
	if (ctx.cr6.eq) goto loc_8232B86C;
loc_8232B880:
	// lis r8,-32161
	ctx.r8.s64 = -2107703296;
	// rlwinm r7,r11,7,25,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// addi r6,r8,5376
	ctx.r6.s64 = ctx.r8.s64 + 5376;
	// rlwinm r5,r11,10,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x4;
	// lbzx r4,r7,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// srw r3,r4,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi r11,r3,28
	ctx.r11.u64 = ctx.r3.u32 & 0xF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,-20
	ctx.r11.s64 = ctx.r10.s64 + -20;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x8232b8c4
	if (!ctx.cr6.gt) goto loc_8232B8C4;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// slw r11,r9,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// b 0x8232b8d4
	goto loc_8232B8D4;
loc_8232B8C4:
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// srd r7,r9,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r8.u8 & 0x7F));
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
loc_8232B8D4:
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// rlwinm r8,r11,10,22,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3FC;
	// addi r9,r9,22160
	ctx.r9.s64 = ctx.r9.s64 + 22160;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwzx r3,r8,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r11,r5,23192
	ctx.r11.s64 = ctx.r5.s64 + 23192;
	// lwzx r10,r8,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// subf r9,r10,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r10.u64;
	// lwzx r8,r4,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// mulld r5,r6,r7
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// rldicl r4,r5,32,32
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF;
	// subf r3,r4,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r4.u64;
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mulld r10,r11,r8
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r8.u64);
	// rldicl r3,r10,32,32
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82332C58) {
	REX_FUNC_PROLOGUE();
	// lwz r10,3964(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 3964);
	// addi r11,r3,200
	ctx.r11.s64 = ctx.r3.s64 + 200;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r10,200(r3)
	REX_STORE_U32(ctx.r3.u32 + 200, ctx.r10.u32);
	// lwz r8,21932(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 21932);
	// stw r8,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r8.u32);
	// lwz r7,21864(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 21864);
	// stw r7,208(r3)
	REX_STORE_U32(ctx.r3.u32 + 208, ctx.r7.u32);
	// lfd f0,21560(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r4.u32 + 21560);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.f13.u32);
	// lwz r6,3716(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 3716);
	// stw r6,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// lbz r5,640(r3)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 640);
	// ori r4,r5,128
	ctx.r4.u64 = ctx.r5.u64 | 128;
	// stb r4,640(r3)
	REX_STORE_U8(ctx.r3.u32 + 640, ctx.r4.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82334E40) {
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
	ctx.lr = 0x82334E48;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r24,0
	r24.s64 = 0;
	// li r5,31
	ctx.r5.s64 = 31;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r24,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r24.u8);
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x822d5870
	ctx.lr = 0x82334E70;
	sub_822D5870(ctx, base);
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,1
	r30.s64 = 1;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82334ee4
	if (!ctx.cr6.lt) goto loc_82334EE4;
loc_82334E8C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82334ee4
	if (ctx.cr6.eq) goto loc_82334EE4;
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
	// bge 0x82334ed4
	if (!ctx.cr0.lt) goto loc_82334ED4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82334ED4;
	sub_823380C8(ctx, base);
loc_82334ED4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82334e8c
	if (ctx.cr6.gt) goto loc_82334E8C;
loc_82334EE4:
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
	// bge 0x82334f1c
	if (!ctx.cr0.lt) goto loc_82334F1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82334F1C;
	sub_823380C8(ctx, base);
loc_82334F1C:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,1
	r30.s64 = 1;
	// stw r29,22068(r27)
	REX_STORE_U32(r27.u32 + 22068, r29.u32);
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82334f94
	if (!ctx.cr6.lt) goto loc_82334F94;
loc_82334F3C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82334f94
	if (ctx.cr6.eq) goto loc_82334F94;
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
	// bge 0x82334f84
	if (!ctx.cr0.lt) goto loc_82334F84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82334F84;
	sub_823380C8(ctx, base);
loc_82334F84:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82334f3c
	if (ctx.cr6.gt) goto loc_82334F3C;
loc_82334F94:
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
	// bge 0x82334fcc
	if (!ctx.cr0.lt) goto loc_82334FCC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82334FCC;
	sub_823380C8(ctx, base);
loc_82334FCC:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,1
	r30.s64 = 1;
	// stw r29,22072(r27)
	REX_STORE_U32(r27.u32 + 22072, r29.u32);
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82335044
	if (!ctx.cr6.lt) goto loc_82335044;
loc_82334FEC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335044
	if (ctx.cr6.eq) goto loc_82335044;
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
	// bge 0x82335034
	if (!ctx.cr0.lt) goto loc_82335034;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82335034;
	sub_823380C8(ctx, base);
loc_82335034:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82334fec
	if (ctx.cr6.gt) goto loc_82334FEC;
loc_82335044:
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
	// bge 0x8233507c
	if (!ctx.cr0.lt) goto loc_8233507C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8233507C;
	sub_823380C8(ctx, base);
loc_8233507C:
	// stw r30,22076(r27)
	REX_STORE_U32(r27.u32 + 22076, r30.u32);
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,1
	r30.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x823350f4
	if (!ctx.cr6.lt) goto loc_823350F4;
loc_8233509C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823350f4
	if (ctx.cr6.eq) goto loc_823350F4;
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
	// bge 0x823350e4
	if (!ctx.cr0.lt) goto loc_823350E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823350E4;
	sub_823380C8(ctx, base);
loc_823350E4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8233509c
	if (ctx.cr6.gt) goto loc_8233509C;
loc_823350F4:
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
	// bge 0x8233512c
	if (!ctx.cr0.lt) goto loc_8233512C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8233512C;
	sub_823380C8(ctx, base);
loc_8233512C:
	// stw r30,22080(r27)
	REX_STORE_U32(r27.u32 + 22080, r30.u32);
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,1
	r30.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x823351a4
	if (!ctx.cr6.lt) goto loc_823351A4;
loc_8233514C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823351a4
	if (ctx.cr6.eq) goto loc_823351A4;
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
	// bge 0x82335194
	if (!ctx.cr0.lt) goto loc_82335194;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82335194;
	sub_823380C8(ctx, base);
loc_82335194:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8233514c
	if (ctx.cr6.gt) goto loc_8233514C;
loc_823351A4:
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
	// bge 0x823351dc
	if (!ctx.cr0.lt) goto loc_823351DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823351DC;
	sub_823380C8(ctx, base);
loc_823351DC:
	// stw r30,3948(r27)
	REX_STORE_U32(r27.u32 + 3948, r30.u32);
	// li r30,1
	r30.s64 = 1;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82335254
	if (!ctx.cr6.lt) goto loc_82335254;
loc_823351FC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335254
	if (ctx.cr6.eq) goto loc_82335254;
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
	// bge 0x82335244
	if (!ctx.cr0.lt) goto loc_82335244;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82335244;
	sub_823380C8(ctx, base);
loc_82335244:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823351fc
	if (ctx.cr6.gt) goto loc_823351FC;
loc_82335254:
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
	// bge 0x8233528c
	if (!ctx.cr0.lt) goto loc_8233528C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8233528C;
	sub_823380C8(ctx, base);
loc_8233528C:
	// stw r30,1796(r27)
	REX_STORE_U32(r27.u32 + 1796, r30.u32);
	// li r30,1
	r30.s64 = 1;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82335304
	if (!ctx.cr6.lt) goto loc_82335304;
loc_823352AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335304
	if (ctx.cr6.eq) goto loc_82335304;
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
	// bge 0x823352f4
	if (!ctx.cr0.lt) goto loc_823352F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823352F4;
	sub_823380C8(ctx, base);
loc_823352F4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823352ac
	if (ctx.cr6.gt) goto loc_823352AC;
loc_82335304:
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
	// add r28,r11,r29
	r28.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8233533c
	if (!ctx.cr0.lt) goto loc_8233533C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8233533C;
	sub_823380C8(ctx, base);
loc_8233533C:
	// stw r28,21568(r27)
	REX_STORE_U32(r27.u32 + 21568, r28.u32);
	// li r30,2
	r30.s64 = 2;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823353b4
	if (!ctx.cr6.lt) goto loc_823353B4;
loc_8233535C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823353b4
	if (ctx.cr6.eq) goto loc_823353B4;
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
	// bge 0x823353a4
	if (!ctx.cr0.lt) goto loc_823353A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823353A4;
	sub_823380C8(ctx, base);
loc_823353A4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8233535c
	if (ctx.cr6.gt) goto loc_8233535C;
loc_823353B4:
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
	// bge 0x823353ec
	if (!ctx.cr0.lt) goto loc_823353EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823353EC;
	sub_823380C8(ctx, base);
loc_823353EC:
	// stw r30,4040(r27)
	REX_STORE_U32(r27.u32 + 4040, r30.u32);
	// li r30,1
	r30.s64 = 1;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82335464
	if (!ctx.cr6.lt) goto loc_82335464;
loc_8233540C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335464
	if (ctx.cr6.eq) goto loc_82335464;
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
	// bge 0x82335454
	if (!ctx.cr0.lt) goto loc_82335454;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82335454;
	sub_823380C8(ctx, base);
loc_82335454:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8233540c
	if (ctx.cr6.gt) goto loc_8233540C;
loc_82335464:
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
	// bge 0x8233549c
	if (!ctx.cr0.lt) goto loc_8233549C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8233549C;
	sub_823380C8(ctx, base);
loc_8233549C:
	// stw r30,440(r27)
	REX_STORE_U32(r27.u32 + 440, r30.u32);
	// li r30,1
	r30.s64 = 1;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82335514
	if (!ctx.cr6.lt) goto loc_82335514;
loc_823354BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335514
	if (ctx.cr6.eq) goto loc_82335514;
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
	// bge 0x82335504
	if (!ctx.cr0.lt) goto loc_82335504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82335504;
	sub_823380C8(ctx, base);
loc_82335504:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823354bc
	if (ctx.cr6.gt) goto loc_823354BC;
loc_82335514:
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
	// bge 0x8233554c
	if (!ctx.cr0.lt) goto loc_8233554C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8233554C;
	sub_823380C8(ctx, base);
loc_8233554C:
	// stw r30,3008(r27)
	REX_STORE_U32(r27.u32 + 3008, r30.u32);
	// li r30,1
	r30.s64 = 1;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x823355c4
	if (!ctx.cr6.lt) goto loc_823355C4;
loc_8233556C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823355c4
	if (ctx.cr6.eq) goto loc_823355C4;
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
	// bge 0x823355b4
	if (!ctx.cr0.lt) goto loc_823355B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823355B4;
	sub_823380C8(ctx, base);
loc_823355B4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8233556c
	if (ctx.cr6.gt) goto loc_8233556C;
loc_823355C4:
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
	// bge 0x823355fc
	if (!ctx.cr0.lt) goto loc_823355FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823355FC;
	sub_823380C8(ctx, base);
loc_823355FC:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r30,3476(r27)
	REX_STORE_U32(r27.u32 + 3476, r30.u32);
	// li r30,1
	r30.s64 = 1;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x823356c4
	if (ctx.cr6.eq) goto loc_823356C4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8233567c
	if (!ctx.cr6.lt) goto loc_8233567C;
loc_82335624:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233567c
	if (ctx.cr6.eq) goto loc_8233567C;
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
	// bge 0x8233566c
	if (!ctx.cr0.lt) goto loc_8233566C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8233566C;
	sub_823380C8(ctx, base);
loc_8233566C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82335624
	if (ctx.cr6.gt) goto loc_82335624;
loc_8233567C:
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
	// bge 0x823356b4
	if (!ctx.cr0.lt) goto loc_823356B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823356B4;
	sub_823380C8(ctx, base);
loc_823356B4:
	// addi r11,r30,2
	ctx.r11.s64 = r30.s64 + 2;
	// stw r30,3468(r27)
	REX_STORE_U32(r27.u32 + 3468, r30.u32);
	// stw r11,22228(r27)
	REX_STORE_U32(r27.u32 + 22228, ctx.r11.u32);
	// b 0x82335764
	goto loc_82335764;
loc_823356C4:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82335724
	if (!ctx.cr6.lt) goto loc_82335724;
loc_823356CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335724
	if (ctx.cr6.eq) goto loc_82335724;
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
	// bge 0x82335714
	if (!ctx.cr0.lt) goto loc_82335714;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82335714;
	sub_823380C8(ctx, base);
loc_82335714:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823356cc
	if (ctx.cr6.gt) goto loc_823356CC;
loc_82335724:
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
	// bge 0x8233575c
	if (!ctx.cr0.lt) goto loc_8233575C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8233575C;
	sub_823380C8(ctx, base);
loc_8233575C:
	// stw r30,3480(r27)
	REX_STORE_U32(r27.u32 + 3480, r30.u32);
	// stw r30,22228(r27)
	REX_STORE_U32(r27.u32 + 22228, r30.u32);
loc_82335764:
	// lwz r11,21908(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233584c
	if (ctx.cr6.eq) goto loc_8233584C;
	// mr r28,r24
	r28.u64 = r24.u64;
loc_82335774:
	// lwz r11,21912(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21912);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x82335784
	if (ctx.cr6.lt) goto loc_82335784;
	// li r11,32
	ctx.r11.s64 = 32;
loc_82335784:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8233584c
	if (!ctx.cr6.lt) goto loc_8233584C;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,8
	r30.s64 = 8;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82335800
	if (!ctx.cr6.lt) goto loc_82335800;
loc_823357A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335800
	if (ctx.cr6.eq) goto loc_82335800;
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
	// bge 0x823357f0
	if (!ctx.cr0.lt) goto loc_823357F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823357F0;
	sub_823380C8(ctx, base);
loc_823357F0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823357a8
	if (ctx.cr6.gt) goto loc_823357A8;
loc_82335800:
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
	// bge 0x82335838
	if (!ctx.cr0.lt) goto loc_82335838;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82335838;
	sub_823380C8(ctx, base);
loc_82335838:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// clrlwi r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	// stbx r10,r28,r11
	REX_STORE_U8(r28.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x82335774
	goto loc_82335774;
loc_8233584C:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,1
	r30.s64 = 1;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x823358c0
	if (!ctx.cr6.lt) goto loc_823358C0;
loc_82335868:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823358c0
	if (ctx.cr6.eq) goto loc_823358C0;
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
	// bge 0x823358b0
	if (!ctx.cr0.lt) goto loc_823358B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823358B0;
	sub_823380C8(ctx, base);
loc_823358B0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82335868
	if (ctx.cr6.gt) goto loc_82335868;
loc_823358C0:
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
	// bge 0x823358f8
	if (!ctx.cr0.lt) goto loc_823358F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823358F8;
	sub_823380C8(ctx, base);
loc_823358F8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82335ab0
	if (ctx.cr6.eq) goto loc_82335AB0;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,12
	r30.s64 = 12;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bge cr6,0x82335974
	if (!ctx.cr6.lt) goto loc_82335974;
loc_8233591C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335974
	if (ctx.cr6.eq) goto loc_82335974;
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
	// bge 0x82335964
	if (!ctx.cr0.lt) goto loc_82335964;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82335964;
	sub_823380C8(ctx, base);
loc_82335964:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8233591c
	if (ctx.cr6.gt) goto loc_8233591C;
loc_82335974:
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
	// bge 0x823359ac
	if (!ctx.cr0.lt) goto loc_823359AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823359AC;
	sub_823380C8(ctx, base);
loc_823359AC:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// li r30,12
	r30.s64 = 12;
	// rlwinm r28,r11,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bge cr6,0x82335a28
	if (!ctx.cr6.lt) goto loc_82335A28;
loc_823359D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335a28
	if (ctx.cr6.eq) goto loc_82335A28;
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
	// bge 0x82335a18
	if (!ctx.cr0.lt) goto loc_82335A18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82335A18;
	sub_823380C8(ctx, base);
loc_82335A18:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823359d0
	if (ctx.cr6.gt) goto loc_823359D0;
loc_82335A28:
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
	// bge 0x82335a60
	if (!ctx.cr0.lt) goto loc_82335A60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82335A60;
	sub_823380C8(ctx, base);
loc_82335A60:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// beq cr6,0x82335a80
	if (ctx.cr6.eq) goto loc_82335A80;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82335a80
	if (ctx.cr6.eq) goto loc_82335A80;
	// stw r28,0(r26)
	REX_STORE_U32(r26.u32 + 0, r28.u32);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
loc_82335A80:
	// lwz r10,22056(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 22056);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82335aa4
	if (ctx.cr6.gt) goto loc_82335AA4;
	// lwz r10,22060(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 22060);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82335aa4
	if (ctx.cr6.gt) goto loc_82335AA4;
	// stw r28,156(r27)
	REX_STORE_U32(r27.u32 + 156, r28.u32);
	// stw r11,160(r27)
	REX_STORE_U32(r27.u32 + 160, ctx.r11.u32);
	// b 0x82335ac0
	goto loc_82335AC0;
loc_82335AA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec8
	return;
loc_82335AB0:
	// lwz r11,22056(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 22056);
	// lwz r10,22060(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 22060);
	// stw r11,156(r27)
	REX_STORE_U32(r27.u32 + 156, ctx.r11.u32);
	// stw r10,160(r27)
	REX_STORE_U32(r27.u32 + 160, ctx.r10.u32);
loc_82335AC0:
	// lwz r11,21568(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82335b7c
	if (ctx.cr6.eq) goto loc_82335B7C;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,1
	r30.s64 = 1;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82335b40
	if (!ctx.cr6.lt) goto loc_82335B40;
loc_82335AE8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335b40
	if (ctx.cr6.eq) goto loc_82335B40;
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
	// bge 0x82335b30
	if (!ctx.cr0.lt) goto loc_82335B30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82335B30;
	sub_823380C8(ctx, base);
loc_82335B30:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82335ae8
	if (ctx.cr6.gt) goto loc_82335AE8;
loc_82335B40:
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
	// bge 0x82335b78
	if (!ctx.cr0.lt) goto loc_82335B78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82335B78;
	sub_823380C8(ctx, base);
loc_82335B78:
	// stw r30,21660(r27)
	REX_STORE_U32(r27.u32 + 21660, r30.u32);
loc_82335B7C:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,1
	r30.s64 = 1;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82335bf0
	if (!ctx.cr6.lt) goto loc_82335BF0;
loc_82335B98:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335bf0
	if (ctx.cr6.eq) goto loc_82335BF0;
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
	// bge 0x82335be0
	if (!ctx.cr0.lt) goto loc_82335BE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82335BE0;
	sub_823380C8(ctx, base);
loc_82335BE0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82335b98
	if (ctx.cr6.gt) goto loc_82335B98;
loc_82335BF0:
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
	// bge 0x82335c28
	if (!ctx.cr0.lt) goto loc_82335C28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82335C28;
	sub_823380C8(ctx, base);
loc_82335C28:
	// stw r30,21916(r27)
	REX_STORE_U32(r27.u32 + 21916, r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82335cec
	if (ctx.cr6.eq) goto loc_82335CEC;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,3
	r30.s64 = 3;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82335ca8
	if (!ctx.cr6.lt) goto loc_82335CA8;
loc_82335C50:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335ca8
	if (ctx.cr6.eq) goto loc_82335CA8;
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
	// bge 0x82335c98
	if (!ctx.cr0.lt) goto loc_82335C98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82335C98;
	sub_823380C8(ctx, base);
loc_82335C98:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82335c50
	if (ctx.cr6.gt) goto loc_82335C50;
loc_82335CA8:
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
	// bge 0x82335ce0
	if (!ctx.cr0.lt) goto loc_82335CE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82335CE0;
	sub_823380C8(ctx, base);
loc_82335CE0:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// stw r11,21924(r27)
	REX_STORE_U32(r27.u32 + 21924, ctx.r11.u32);
	// b 0x82335cf0
	goto loc_82335CF0;
loc_82335CEC:
	// stw r24,21924(r27)
	REX_STORE_U32(r27.u32 + 21924, r24.u32);
loc_82335CF0:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,1
	r30.s64 = 1;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82335d64
	if (!ctx.cr6.lt) goto loc_82335D64;
loc_82335D0C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335d64
	if (ctx.cr6.eq) goto loc_82335D64;
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
	// bge 0x82335d54
	if (!ctx.cr0.lt) goto loc_82335D54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82335D54;
	sub_823380C8(ctx, base);
loc_82335D54:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82335d0c
	if (ctx.cr6.gt) goto loc_82335D0C;
loc_82335D64:
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
	// bge 0x82335d9c
	if (!ctx.cr0.lt) goto loc_82335D9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82335D9C;
	sub_823380C8(ctx, base);
loc_82335D9C:
	// stw r30,21920(r27)
	REX_STORE_U32(r27.u32 + 21920, r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82335e60
	if (ctx.cr6.eq) goto loc_82335E60;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,3
	r30.s64 = 3;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82335e1c
	if (!ctx.cr6.lt) goto loc_82335E1C;
loc_82335DC4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335e1c
	if (ctx.cr6.eq) goto loc_82335E1C;
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
	// bge 0x82335e0c
	if (!ctx.cr0.lt) goto loc_82335E0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82335E0C;
	sub_823380C8(ctx, base);
loc_82335E0C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82335dc4
	if (ctx.cr6.gt) goto loc_82335DC4;
loc_82335E1C:
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
	// bge 0x82335e54
	if (!ctx.cr0.lt) goto loc_82335E54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82335E54;
	sub_823380C8(ctx, base);
loc_82335E54:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// stw r11,21928(r27)
	REX_STORE_U32(r27.u32 + 21928, ctx.r11.u32);
	// b 0x82335e64
	goto loc_82335E64;
loc_82335E60:
	// stw r24,21928(r27)
	REX_STORE_U32(r27.u32 + 21928, r24.u32);
loc_82335E64:
	// lwz r11,84(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82335aa4
	if (!ctx.cr6.eq) goto loc_82335AA4;
	// lwz r11,14836(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 14836);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r9,3476(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 3476);
	// addi r8,r10,-28976
	ctx.r8.s64 = ctx.r10.s64 + -28976;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r6,r7,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r6,14840(r27)
	REX_STORE_U32(r27.u32 + 14840, ctx.r6.u32);
	// bne cr6,0x82335ea8
	if (!ctx.cr6.eq) goto loc_82335EA8;
	// lwz r11,3480(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// beq cr6,0x82335eac
	if (ctx.cr6.eq) goto loc_82335EAC;
loc_82335EA8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82335EAC:
	// stw r11,3472(r27)
	REX_STORE_U32(r27.u32 + 3472, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r24,288(r27)
	REX_STORE_U32(r27.u32 + 288, r24.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8233cca0
	ctx.lr = 0x82335EC0;
	sub_8233CCA0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r31,24688(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 24688);
	// addi r3,r31,436
	ctx.r3.s64 = r31.s64 + 436;
	// bl 0x82332aa8
	ctx.lr = 0x82335ED4;
	sub_82332AA8(ctx, base);
	// lbz r11,640(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 640);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,640(r31)
	REX_STORE_U8(r31.u32 + 640, ctx.r10.u8);
	// bl 0x82332ed0
	ctx.lr = 0x82335EEC;
	sub_82332ED0(ctx, base);
	// cmpwi cr6,r3,-7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -7, ctx.xer);
	// beq cr6,0x82335f08
	if (ctx.cr6.eq) goto loc_82335F08;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82335f14
	if (!ctx.cr6.eq) goto loc_82335F14;
	// stw r24,22040(r27)
	REX_STORE_U32(r27.u32 + 22040, r24.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec8
	return;
loc_82335F08:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,22040(r27)
	REX_STORE_U32(r27.u32 + 22040, ctx.r11.u32);
loc_82335F14:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8238C668) {
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
	ctx.lr = 0x8238C670;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// mr r20,r9
	r20.u64 = ctx.r9.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8238c8fc
	if (ctx.cr6.lt) goto loc_8238C8FC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x8238c8fc
	if (ctx.cr6.lt) goto loc_8238C8FC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt cr6,0x8238c8fc
	if (ctx.cr6.lt) goto loc_8238C8FC;
	// lwz r25,276(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// blt cr6,0x8238c8fc
	if (ctx.cr6.lt) goto loc_8238C8FC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x8238c8fc
	if (ctx.cr6.lt) goto loc_8238C8FC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x8238c8fc
	if (ctx.cr6.lt) goto loc_8238C8FC;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// add r9,r6,r28
	ctx.r9.u64 = ctx.r6.u64 + r28.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8238c8fc
	if (ctx.cr6.gt) goto loc_8238C8FC;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// add r9,r7,r25
	ctx.r9.u64 = ctx.r7.u64 + r25.u64;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x8238c8fc
	if (ctx.cr6.gt) goto loc_8238C8FC;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// add r9,r21,r28
	ctx.r9.u64 = r21.u64 + r28.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8238c8fc
	if (ctx.cr6.gt) goto loc_8238C8FC;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// add r9,r20,r25
	ctx.r9.u64 = r20.u64 + r25.u64;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x8238c8fc
	if (ctx.cr6.gt) goto loc_8238C8FC;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238c744
	if (!ctx.cr6.eq) goto loc_8238C744;
	// lhz r9,14(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 14);
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bne cr6,0x8238c744
	if (!ctx.cr6.eq) goto loc_8238C744;
	// li r10,1024
	ctx.r10.s64 = 1024;
	// b 0x8238c750
	goto loc_8238C750;
loc_8238C744:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8238c750
	if (!ctx.cr6.eq) goto loc_8238C750;
	// li r10,12
	ctx.r10.s64 = 12;
loc_8238C750:
	// addi r31,r10,40
	r31.s64 = ctx.r10.s64 + 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8233d448
	ctx.lr = 0x8238C760;
	sub_8233D448(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8238c77c
	if (!ctx.cr6.eq) goto loc_8238C77C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
loc_8238C77C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8238C78C;
	sub_822D4FA0(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238c7ac
	if (!ctx.cr6.eq) goto loc_8238C7AC;
	// lhz r10,14(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 14);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x8238c7ac
	if (!ctx.cr6.eq) goto loc_8238C7AC;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x8238c7c0
	goto loc_8238C7C0;
loc_8238C7AC:
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// li r10,12
	ctx.r10.s64 = 12;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 & ctx.r10.u64;
loc_8238C7C0:
	// addi r31,r11,40
	r31.s64 = ctx.r11.s64 + 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8233d448
	ctx.lr = 0x8238C7D0;
	sub_8233D448(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8238c7f8
	if (!ctx.cr6.eq) goto loc_8238C7F8;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// bl 0x8233d4c0
	ctx.lr = 0x8238C7EC;
	sub_8233D4C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
loc_8238C7F8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8238C808;
	sub_822D4FA0(ctx, base);
	// stw r28,4(r29)
	REX_STORE_U32(r29.u32 + 4, r28.u32);
	// stw r28,4(r30)
	REX_STORE_U32(r30.u32 + 4, r28.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// bgt cr6,0x8238c824
	if (ctx.cr6.gt) goto loc_8238C824;
	// neg r11,r25
	ctx.r11.s64 = static_cast<int64_t>(-r25.u64);
loc_8238C824:
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// bgt cr6,0x8238c83c
	if (ctx.cr6.gt) goto loc_8238C83C;
	// neg r11,r25
	ctx.r11.s64 = static_cast<int64_t>(-r25.u64);
loc_8238C83C:
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,284(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8238c5e0
	ctx.lr = 0x8238C854;
	sub_8238C5E0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233d4c0
	ctx.lr = 0x8238C860;
	sub_8233D4C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8233d4c0
	ctx.lr = 0x8238C868;
	sub_8233D4C0(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238c8e0
	if (!ctx.cr6.eq) goto loc_8238C8E0;
	// lwz r4,292(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,300(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r10,308(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r24,14604(r31)
	REX_STORE_U32(r31.u32 + 14604, r24.u32);
	// stw r9,14584(r31)
	REX_STORE_U32(r31.u32 + 14584, ctx.r9.u32);
	// stw r22,14608(r31)
	REX_STORE_U32(r31.u32 + 14608, r22.u32);
	// stw r21,14612(r31)
	REX_STORE_U32(r31.u32 + 14612, r21.u32);
	// stw r20,14616(r31)
	REX_STORE_U32(r31.u32 + 14616, r20.u32);
	// stw r4,14624(r31)
	REX_STORE_U32(r31.u32 + 14624, ctx.r4.u32);
	// stw r11,14628(r31)
	REX_STORE_U32(r31.u32 + 14628, ctx.r11.u32);
	// stw r10,14632(r31)
	REX_STORE_U32(r31.u32 + 14632, ctx.r10.u32);
	// beq cr6,0x8238c8bc
	if (ctx.cr6.eq) goto loc_8238C8BC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238c8bc
	if (ctx.cr6.eq) goto loc_8238C8BC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8238c8c0
	if (!ctx.cr6.eq) goto loc_8238C8C0;
loc_8238C8BC:
	// lwz r4,4(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 4);
loc_8238C8C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,8(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwz r6,4(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r5,8(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 8);
	// bl 0x823bdc28
	ctx.lr = 0x8238C8D4;
	sub_823BDC28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
loc_8238C8E0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8238c904
	if (ctx.cr6.eq) goto loc_8238C904;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8233d4c0
	ctx.lr = 0x8238C8F0;
	sub_8233D4C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
loc_8238C8FC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
loc_8238C904:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_82393D50) {
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
	ctx.lr = 0x82393D58;
	// rlwinm r31,r7,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r9,r4,r7
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// lbz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r7,r31
	r29.u64 = ctx.r7.u64 + r31.u64;
	// add r30,r8,r9
	r30.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r24,r6,-2
	r24.s64 = ctx.r6.s64 + -2;
	// mulli r30,r30,14
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(14));
	// lbzx r31,r11,r4
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbzx r29,r29,r4
	r29.u64 = REX_LOAD_U8(r29.u32 + ctx.r4.u32);
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// add r30,r29,r9
	r30.u64 = r29.u64 + ctx.r9.u64;
	// add r9,r31,r8
	ctx.r9.u64 = r31.u64 + ctx.r8.u64;
	// mulli r31,r30,11
	r31.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(11));
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(r24.s32, 2, ctx.xer);
	// subf r9,r31,r9
	ctx.r9.u64 = ctx.r9.u64 - r31.u64;
	// addi r8,r9,63
	ctx.r8.s64 = ctx.r9.s64 + 63;
	// srawi r9,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 7;
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// ble cr6,0x82393e3c
	if (!ctx.cr6.gt) goto loc_82393E3C;
	// addi r9,r24,-3
	ctx.r9.s64 = r24.s64 + -3;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// add r31,r7,r8
	r31.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r11,r31
	r30.u64 = r31.u64 - ctx.r11.u64;
	// subf r31,r11,r9
	r31.u64 = ctx.r9.u64 - ctx.r11.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// add r30,r30,r4
	r30.u64 = r30.u64 + ctx.r4.u64;
	// add r31,r31,r4
	r31.u64 = r31.u64 + ctx.r4.u64;
loc_82393DE8:
	// lbzx r8,r10,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// lbz r28,0(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r25,r9,r7
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// add r27,r8,r28
	r27.u64 = ctx.r8.u64 + r28.u64;
	// lbzux r8,r31,r11
	ea = r31.u32 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
	// lbzux r28,r30,r11
	ea = r30.u32 + ctx.r11.u32;
	r28.u64 = REX_LOAD_U8(ea);
	r30.u32 = ea;
	// mulli r26,r27,14
	r26.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(14));
	// lbz r27,0(r9)
	r27.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// add r26,r26,r25
	r26.u64 = r26.u64 + r25.u64;
	// add r27,r28,r27
	r27.u64 = r28.u64 + r27.u64;
	// add r8,r26,r8
	ctx.r8.u64 = r26.u64 + ctx.r8.u64;
	// mulli r27,r27,11
	r27.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(11));
	// rlwinm r28,r8,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + r28.u64;
	// subf r8,r27,r8
	ctx.r8.u64 = ctx.r8.u64 - r27.u64;
	// addi r8,r8,63
	ctx.r8.s64 = ctx.r8.s64 + 63;
	// srawi r8,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 7;
	// stwu r8,8(r29)
	ea = 8 + r29.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	r29.u32 = ea;
	// bdnz 0x82393de8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393DE8;
loc_82393E3C:
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// mullw r9,r24,r7
	ctx.r9.s64 = int64_t(r24.s32) * int64_t(ctx.r7.s32);
	// lbzx r9,r9,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// mullw r8,r10,r7
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// lbzx r10,r8,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// addi r8,r6,-3
	ctx.r8.s64 = ctx.r6.s64 + -3;
	// addi r31,r6,-4
	r31.s64 = ctx.r6.s64 + -4;
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// lbzx r8,r8,r4
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// mullw r31,r31,r7
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r7.s32);
	// lbzx r4,r31,r4
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + ctx.r4.u32);
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// mulli r31,r30,14
	r31.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(14));
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mulli r8,r4,11
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(11));
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r24,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r9,r10,63
	ctx.r9.s64 = ctx.r10.s64 + 63;
	// srawi r8,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 7;
	// stwx r8,r4,r5
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r8.u32);
	// ble cr6,0x82393ef0
	if (!ctx.cr6.gt) goto loc_82393EF0;
	// addi r9,r6,-1
	ctx.r9.s64 = ctx.r6.s64 + -1;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82393EC0:
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// ble cr6,0x82393ed8
	if (!ctx.cr6.gt) goto loc_82393ED8;
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
loc_82393ED8:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// stbx r8,r10,r7
	REX_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r8.u8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x82393ec0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393EC0;
loc_82393EF0:
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82395D40) {
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
	ctx.lr = 0x82395D48;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r5.u32);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// addi r8,r5,10
	ctx.r8.s64 = ctx.r5.s64 + 10;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r4,r10
	ctx.r7.u64 = ctx.r4.u64 + ctx.r10.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r31,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r31.s64 = ctx.r8.s32 >> 3;
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// subf r7,r7,r22
	ctx.r7.u64 = r22.u64 - ctx.r7.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// rlwinm r29,r31,1,0,30
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// subf r18,r4,r22
	r18.u64 = r22.u64 - ctx.r4.u64;
	// subf r16,r9,r22
	r16.u64 = r22.u64 - ctx.r9.u64;
	// add r17,r11,r22
	r17.u64 = ctx.r11.u64 + r22.u64;
	// subf r15,r11,r22
	r15.u64 = r22.u64 - ctx.r11.u64;
	// subf r14,r6,r22
	r14.u64 = r22.u64 - ctx.r6.u64;
	// li r28,-1
	r28.s64 = -1;
	// b 0x82395db8
	goto loc_82395DB8;
loc_82395DB0:
	// lwz r3,308(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_82395DB8:
	// lbz r4,0(r15)
	ctx.r4.u64 = REX_LOAD_U8(r15.u32 + 0);
	// add r21,r22,r20
	r21.u64 = r22.u64 + r20.u64;
	// lbz r24,0(r14)
	r24.u64 = REX_LOAD_U8(r14.u32 + 0);
	// lbz r25,0(r16)
	r25.u64 = REX_LOAD_U8(r16.u32 + 0);
	// subf r11,r4,r24
	ctx.r11.u64 = r24.u64 - ctx.r4.u64;
	// lbz r6,0(r18)
	ctx.r6.u64 = REX_LOAD_U8(r18.u32 + 0);
	// subf r10,r25,r4
	ctx.r10.u64 = ctx.r4.u64 - r25.u64;
	// lbz r27,0(r22)
	r27.u64 = REX_LOAD_U8(r22.u32 + 0);
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + r31.u64;
	// lbz r23,0(r17)
	r23.u64 = REX_LOAD_U8(r17.u32 + 0);
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + r31.u64;
	// lbzx r26,r22,r20
	r26.u64 = REX_LOAD_U8(r22.u32 + r20.u32);
	// subfc r11,r5,r29
	ctx.xer.ca = r29.u32 >= ctx.r5.u32;
	ctx.r11.u64 = r29.u64 - ctx.r5.u64;
	// lbzx r30,r21,r20
	r30.u64 = REX_LOAD_U8(r21.u32 + r20.u32);
	// subf r10,r6,r25
	ctx.r10.u64 = r25.u64 - ctx.r6.u64;
	// subfze r9,r28
	temp.u8 = ~r28.u32 + ctx.xer.ca < ~r28.u32;
	ctx.r9.u64 = ~r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r11,r8,r29
	ctx.xer.ca = r29.u32 >= ctx.r8.u32;
	ctx.r11.u64 = r29.u64 - ctx.r8.u64;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + r31.u64;
	// subf r19,r27,r6
	r19.u64 = ctx.r6.u64 - r27.u64;
	// subfze r10,r28
	temp.u8 = ~r28.u32 + ctx.xer.ca < ~r28.u32;
	ctx.r10.u64 = ~r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r11,r5,r29
	ctx.xer.ca = r29.u32 >= ctx.r5.u32;
	ctx.r11.u64 = r29.u64 - ctx.r5.u64;
	// add r5,r19,r31
	ctx.r5.u64 = r19.u64 + r31.u64;
	// subfze r8,r28
	temp.u8 = ~r28.u32 + ctx.xer.ca < ~r28.u32;
	ctx.r8.u64 = ~r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subfc r11,r5,r29
	ctx.xer.ca = r29.u32 >= ctx.r5.u32;
	ctx.r11.u64 = r29.u64 - ctx.r5.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subfze r11,r28
	temp.u8 = ~r28.u32 + ctx.xer.ca < ~r28.u32;
	ctx.r11.u64 = ~r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82395ea0
	if (ctx.cr0.eq) goto loc_82395EA0;
	// lbzx r10,r17,r20
	ctx.r10.u64 = REX_LOAD_U8(r17.u32 + r20.u32);
	// subf r8,r23,r30
	ctx.r8.u64 = r30.u64 - r23.u64;
	// lbz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// subf r10,r10,r23
	ctx.r10.u64 = r23.u64 - ctx.r10.u64;
	// subf r9,r24,r7
	ctx.r9.u64 = ctx.r7.u64 - r24.u64;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + r31.u64;
	// add r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 + r31.u64;
	// subfc r10,r5,r29
	ctx.xer.ca = r29.u32 >= ctx.r5.u32;
	ctx.r10.u64 = r29.u64 - ctx.r5.u64;
	// subfze r9,r28
	temp.u8 = ~r28.u32 + ctx.xer.ca < ~r28.u32;
	ctx.r9.u64 = ~r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r10,r7,r29
	ctx.xer.ca = r29.u32 >= ctx.r7.u32;
	ctx.r10.u64 = r29.u64 - ctx.r7.u64;
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + r31.u64;
	// subf r8,r30,r26
	ctx.r8.u64 = r26.u64 - r30.u64;
	// subfze r5,r28
	temp.u8 = ~r28.u32 + ctx.xer.ca < ~r28.u32;
	ctx.r5.u64 = ~r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// subfc r10,r7,r29
	ctx.xer.ca = r29.u32 >= ctx.r7.u32;
	ctx.r10.u64 = r29.u64 - ctx.r7.u64;
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// subf r8,r26,r27
	ctx.r8.u64 = r27.u64 - r26.u64;
	// subfze r7,r28
	temp.u8 = ~r28.u32 + ctx.xer.ca < ~r28.u32;
	ctx.r7.u64 = ~r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// subfc r10,r10,r29
	ctx.xer.ca = r29.u32 >= ctx.r10.u32;
	ctx.r10.u64 = r29.u64 - ctx.r10.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r5,r8,r31
	ctx.r5.u64 = ctx.r8.u64 + r31.u64;
	// subfze r8,r28
	temp.u8 = ~r28.u32 + ctx.xer.ca < ~r28.u32;
	ctx.r8.u64 = ~r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// subfc r10,r5,r29
	ctx.xer.ca = r29.u32 >= ctx.r5.u32;
	ctx.r10.u64 = r29.u64 - ctx.r5.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subfze r10,r28
	temp.u8 = ~r28.u32 + ctx.xer.ca < ~r28.u32;
	ctx.r10.u64 = ~r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82395EA0:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x82395f68
	if (ctx.cr6.lt) goto loc_82395F68;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82395ba0
	ctx.lr = 0x82395ECC;
	sub_82395BA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82395f68
	if (ctx.cr6.eq) goto loc_82395F68;
	// add r10,r4,r25
	ctx.r10.u64 = ctx.r4.u64 + r25.u64;
	// lwz r25,108(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// add r9,r30,r26
	ctx.r9.u64 = r30.u64 + r26.u64;
	// add r11,r30,r4
	ctx.r11.u64 = r30.u64 + ctx.r4.u64;
	// rlwinm r7,r6,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r27,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r9,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r6,r27,r5
	ctx.r6.u64 = r27.u64 + ctx.r5.u64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + r26.u64;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// add r11,r8,r30
	ctx.r11.u64 = ctx.r8.u64 + r30.u64;
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// srawi r4,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 3;
	// subf r3,r25,r22
	ctx.r3.u64 = r22.u64 - r25.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// srawi r10,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 3;
	// srawi r9,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 3;
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// srawi r7,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 3;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// stb r8,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// stb r6,0(r21)
	REX_STORE_U8(r21.u32 + 0, ctx.r6.u8);
	// stb r5,0(r18)
	REX_STORE_U8(r18.u32 + 0, ctx.r5.u8);
	// stb r4,0(r22)
	REX_STORE_U8(r22.u32 + 0, ctx.r4.u8);
	// b 0x82396058
	goto loc_82396058;
loc_82395F68:
	// subf r10,r26,r25
	ctx.r10.u64 = r25.u64 - r26.u64;
	// lwz r9,308(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// rlwinm r11,r19,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// add r7,r19,r11
	ctx.r7.u64 = r19.u64 + ctx.r11.u64;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// srawi r5,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 3;
	// srawi r11,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 31;
	// xor r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// subf r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82396058
	if (!ctx.cr6.lt) goto loc_82396058;
	// subf r8,r6,r24
	ctx.r8.u64 = r24.u64 - ctx.r6.u64;
	// subf r10,r4,r25
	ctx.r10.u64 = r25.u64 - ctx.r4.u64;
	// subf r11,r26,r30
	ctx.r11.u64 = r30.u64 - r26.u64;
	// subf r9,r23,r27
	ctx.r9.u64 = r27.u64 - r23.u64;
	// addi r4,r8,2
	ctx.r4.s64 = ctx.r8.s64 + 2;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r9,2
	r30.s64 = ctx.r9.s64 + 2;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
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
	// srawi r4,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 31;
	// xor r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// xor r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// subf r11,r7,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r7.u64;
	// subf r10,r4,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r4.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82396000
	if (!ctx.cr6.lt) goto loc_82396000;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82396000:
	// subf. r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82396058
	if (!ctx.cr0.gt) goto loc_82396058;
	// xor r10,r5,r19
	ctx.r10.u64 = ctx.r5.u64 ^ r19.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82396058
	if (!ctx.cr6.lt) goto loc_82396058;
	// srawi r10,r19,31
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = r19.s32 >> 31;
	// srawi r8,r19,31
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = r19.s32 >> 31;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r7,r19,r8
	ctx.r7.u64 = r19.u64 ^ ctx.r8.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r4,r8,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r8.u64;
	// srawi r9,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 1;
	// srawi r11,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 3;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82396040
	if (!ctx.cr6.gt) goto loc_82396040;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82396040:
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r10,r11,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + r27.u64;
	// stb r10,0(r18)
	REX_STORE_U8(r18.u32 + 0, ctx.r10.u8);
	// stb r9,0(r22)
	REX_STORE_U8(r22.u32 + 0, ctx.r9.u8);
loc_82396058:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// bne 0x82395db0
	if (!ctx.cr0.eq) goto loc_82395DB0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823A82C0) {
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
	ctx.lr = 0x823A82C8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823a82fc
	if (!ctx.cr6.eq) goto loc_823A82FC;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r28,r24
	r28.u64 = r24.u64;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x823a842c
	goto loc_823A842C;
loc_823A82FC:
	// lbz r4,8(r5)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r5)
	r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
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
	// blt cr6,0x823a83e8
	if (ctx.cr6.lt) goto loc_823A83E8;
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
	// bge cr6,0x823a83e0
	if (!ctx.cr6.lt) goto loc_823A83E0;
loc_823A8348:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823a8374
	if (ctx.cr6.lt) goto loc_823A8374;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x823A8364;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823a8348
	if (ctx.cr6.eq) goto loc_823A8348;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x823a8428
	goto loc_823A8428;
loc_823A8374:
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
loc_823A83E0:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x823a8428
	goto loc_823A8428;
loc_823A83E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x823A83F0;
	sub_82337F50(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	r29.u64 = ctx.r11.u64 | 32768;
loc_823A83F8:
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
	ctx.lr = 0x823A8410;
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
	// blt cr6,0x823a83f8
	if (ctx.cr6.lt) goto loc_823A83F8;
loc_823A8428:
	// mr r28,r30
	r28.u64 = r30.u64;
loc_823A842C:
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823a86b0
	if (!ctx.cr6.eq) goto loc_823A86B0;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(r28.s32, r27.s32, ctx.xer);
	// beq cr6,0x823a86c0
	if (ctx.cr6.eq) goto loc_823A86C0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x823a8698
	if (ctx.cr6.eq) goto loc_823A8698;
	// lwz r11,14820(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 14820);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a8654
	if (ctx.cr6.eq) goto loc_823A8654;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// beq cr6,0x823a8580
	if (ctx.cr6.eq) goto loc_823A8580;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(r26.s32, 4, ctx.xer);
	// beq cr6,0x823a84ac
	if (ctx.cr6.eq) goto loc_823A84AC;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bge 0x823a8490
	if (!ctx.cr0.lt) goto loc_823A8490;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A8490;
	sub_823380C8(ctx, base);
loc_823A8490:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// neg r11,r28
	ctx.r11.s64 = static_cast<int64_t>(-r28.u64);
	// bne cr6,0x823a868c
	if (!ctx.cr6.eq) goto loc_823A868C;
	// lwz r10,1764(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 1764);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// stw r28,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r28.u32);
	// b 0x823a86a0
	goto loc_823A86A0;
loc_823A84AC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,2
	r30.s64 = 2;
	// mr r29,r24
	r29.u64 = r24.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823a851c
	if (!ctx.cr6.lt) goto loc_823A851C;
loc_823A84C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a851c
	if (ctx.cr6.eq) goto loc_823A851C;
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
	// bge 0x823a850c
	if (!ctx.cr0.lt) goto loc_823A850C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A850C;
	sub_823380C8(ctx, base);
loc_823A850C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a84c4
	if (ctx.cr6.gt) goto loc_823A84C4;
loc_823A851C:
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
	// bge 0x823a8554
	if (!ctx.cr0.lt) goto loc_823A8554;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A8554;
	sub_823380C8(ctx, base);
loc_823A8554:
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r30,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x823a8648
	if (ctx.cr6.eq) goto loc_823A8648;
	// lwz r10,1764(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 1764);
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x823a86a0
	goto loc_823A86A0;
loc_823A8580:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,3
	r30.s64 = 3;
	// mr r29,r24
	r29.u64 = r24.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x823a85f0
	if (!ctx.cr6.lt) goto loc_823A85F0;
loc_823A8598:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a85f0
	if (ctx.cr6.eq) goto loc_823A85F0;
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
	// bge 0x823a85e0
	if (!ctx.cr0.lt) goto loc_823A85E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A85E0;
	sub_823380C8(ctx, base);
loc_823A85E0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a8598
	if (ctx.cr6.gt) goto loc_823A8598;
loc_823A85F0:
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
	// bge 0x823a8628
	if (!ctx.cr0.lt) goto loc_823A8628;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A8628;
	sub_823380C8(ctx, base);
loc_823A8628:
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r30,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// beq cr6,0x823a8648
	if (ctx.cr6.eq) goto loc_823A8648;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_823A8648:
	// lwz r10,1764(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 1764);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x823a86a0
	goto loc_823A86A0;
loc_823A8654:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bge 0x823a867c
	if (!ctx.cr0.lt) goto loc_823A867C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A867C;
	sub_823380C8(ctx, base);
loc_823A867C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// neg r11,r28
	ctx.r11.s64 = static_cast<int64_t>(-r28.u64);
	// bne cr6,0x823a868c
	if (!ctx.cr6.eq) goto loc_823A868C;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_823A868C:
	// lwz r10,1764(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 1764);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x823a86a0
	goto loc_823A86A0;
loc_823A8698:
	// lwz r11,1764(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 1764);
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r24.u32);
loc_823A86A0:
	// lwz r11,84(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823a87c8
	if (ctx.cr6.eq) goto loc_823A87C8;
loc_823A86B0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
loc_823A86C0:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(r26.s32, 4, ctx.xer);
	// bgt cr6,0x823a86e0
	if (ctx.cr6.gt) goto loc_823A86E0;
	// lwz r10,14820(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 14820);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823a86e0
	if (ctx.cr6.eq) goto loc_823A86E0;
	// srawi r11,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	ctx.r11.s64 = r26.s32 >> 1;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.u64 = static_cast<uint64_t>(3) - ctx.r11.u64;
loc_823A86E0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r30,r11,9
	r30.s64 = ctx.r11.s64 + 9;
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x823a8700
	if (!ctx.cr6.gt) goto loc_823A8700;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// b 0x823a87ac
	goto loc_823A87AC;
loc_823A8700:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823a8710
	if (!ctx.cr6.eq) goto loc_823A8710;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// b 0x823a87ac
	goto loc_823A87AC;
loc_823A8710:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823a8770
	if (!ctx.cr6.gt) goto loc_823A8770;
loc_823A8718:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a8770
	if (ctx.cr6.eq) goto loc_823A8770;
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
	// bge 0x823a8760
	if (!ctx.cr0.lt) goto loc_823A8760;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A8760;
	sub_823380C8(ctx, base);
loc_823A8760:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a8718
	if (ctx.cr6.gt) goto loc_823A8718;
loc_823A8770:
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
	// bge 0x823a87a8
	if (!ctx.cr0.lt) goto loc_823A87A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A87A8;
	sub_823380C8(ctx, base);
loc_823A87A8:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_823A87AC:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a87c0
	if (ctx.cr6.eq) goto loc_823A87C0;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_823A87C0:
	// lwz r10,1764(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 1764);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_823A87C8:
	// stw r24,0(r23)
	REX_STORE_U32(r23.u32 + 0, r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_823C0890) {
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
	ctx.lr = 0x823C0898;
	// lwz r28,92(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lis r11,0
	ctx.r11.s64 = 0;
	// rlwinm r8,r8,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// srawi r7,r28,4
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0xF) != 0);
	ctx.r7.s64 = r28.s32 >> 4;
	// ori r18,r11,32768
	r18.u64 = ctx.r11.u64 | 32768;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// mr r24,r18
	r24.u64 = r18.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// li r26,0
	r26.s64 = 0;
	// subf r21,r18,r11
	r21.u64 = ctx.r11.u64 - r18.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823c09bc
	if (!ctx.cr6.gt) goto loc_823C09BC;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r23,84(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r17,r23,4,0,27
	r17.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r10.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_823C08E0:
	// addi r19,r26,16
	r19.s64 = r26.s64 + 16;
	// mr r25,r19
	r25.u64 = r19.u64;
	// cmpw cr6,r19,r9
	ctx.cr6.compare<int32_t>(r19.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x823c08f4
	if (!ctx.cr6.gt) goto loc_823C08F4;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
loc_823C08F4:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// cmpw cr6,r21,r18
	ctx.cr6.compare<int32_t>(r21.s32, r18.s32, ctx.xer);
	// ble cr6,0x823c09a4
	if (!ctx.cr6.gt) goto loc_823C09A4;
	// subf r20,r26,r25
	r20.u64 = r25.u64 - r26.u64;
	// mullw r22,r20,r6
	r22.s64 = int64_t(r20.s32) * int64_t(ctx.r6.s32);
loc_823C0908:
	// sraw r8,r11,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r8.s64 = ctx.r11.s32 >> temp.u32;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// mullw r31,r8,r5
	r31.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// sraw r7,r11,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r7.s64 = ctx.r11.s32 >> temp.u32;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// mullw r7,r7,r5
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// add r27,r11,r28
	r27.u64 = ctx.r11.u64 + r28.u64;
	// sraw r11,r11,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r11.s64 = ctx.r11.s32 >> temp.u32;
	// sraw r30,r27,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r27.s32 < 0) & (((r27.s32 >> temp.u32) << temp.u32) != r27.s32);
	r30.s64 = r27.s32 >> temp.u32;
	// mullw r8,r11,r5
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// mullw r11,r30,r5
	ctx.r11.s64 = int64_t(r30.s32) * int64_t(ctx.r5.s32);
	// add r30,r8,r4
	r30.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r31,r31,r4
	r31.u64 = r31.u64 + ctx.r4.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r29,r11,r4
	r29.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(r26.s32, r25.s32, ctx.xer);
	// bge cr6,0x823c0990
	if (!ctx.cr6.lt) goto loc_823C0990;
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
loc_823C0954:
	// sraw r11,r8,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r11.s64 = ctx.r8.s32 >> temp.u32;
	// lbzx r16,r29,r11
	r16.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// add r8,r8,r23
	ctx.r8.u64 = ctx.r8.u64 + r23.u64;
	// lbzx r15,r30,r11
	r15.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// rotlwi r16,r16,8
	r16.u64 = __builtin_rotateleft32(r16.u32, 8);
	// lbzx r14,r7,r11
	r14.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lbzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// or r16,r16,r15
	r16.u64 = r16.u64 | r15.u64;
	// rlwinm r16,r16,8,0,23
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 8) & 0xFFFFFF00;
	// or r16,r16,r14
	r16.u64 = r16.u64 | r14.u64;
	// rlwinm r16,r16,8,0,23
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r16,r11
	ctx.r11.u64 = r16.u64 | ctx.r11.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// bdnz 0x823c0954
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C0954;
loc_823C0990:
	// subf r8,r22,r3
	ctx.r8.u64 = ctx.r3.u64 - r22.u64;
	// add r11,r27,r28
	ctx.r11.u64 = r27.u64 + r28.u64;
	// addi r3,r8,4
	ctx.r3.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r21.s32, ctx.xer);
	// blt cr6,0x823c0908
	if (ctx.cr6.lt) goto loc_823C0908;
loc_823C09A4:
	// lwz r11,-160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// add r24,r17,r24
	r24.u64 = r17.u64 + r24.u64;
	// mr r26,r19
	r26.u64 = r19.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r19,r9
	ctx.cr6.compare<int32_t>(r19.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823c08e0
	if (ctx.cr6.lt) goto loc_823C08E0;
loc_823C09BC:
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823C37F0) {
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
	ctx.lr = 0x823C37F8;
	// lwz r31,92(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// rlwinm r8,r8,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// stw r9,68(r1)
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r9.u32);
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// stw r6,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// subf r9,r11,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r11.u64;
	// stw r10,76(r1)
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r10.u32);
	// addi r6,r31,-1
	ctx.r6.s64 = r31.s64 + -1;
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// rlwinm r10,r7,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// divw r4,r9,r6
	ctx.r4.u64 = uint32_t((ctx.r6.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r9.s32 / ctx.r6.s32 : 0);
	// subf r30,r11,r10
	r30.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rotlwi r7,r9,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// stw r4,-164(r1)
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r4.u32);
	// srawi r10,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 4;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// addze r7,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r7.s64 = temp.s64;
	// rotlwi r11,r30,1
	ctx.r11.u64 = __builtin_rotateleft32(r30.u32, 1);
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// addi r28,r25,-1
	r28.s64 = r25.s64 + -1;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// andc r7,r28,r29
	ctx.r7.u64 = r28.u64 & ~r29.u64;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// subf r3,r10,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r10.u64;
	// divw r20,r30,r28
	r20.u64 = uint32_t((r28.s32 && !(r30.s32 == INT32_MIN && r28.s32 == -1)) ? r30.s32 / r28.s32 : 0);
	// twllei r28,0
	if (r28.s32 == 0 || r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r3,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r3.u32);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823c39f8
	if (!ctx.cr6.eq) goto loc_823C39F8;
	// mr r15,r10
	r15.u64 = ctx.r10.u64;
	// li r18,0
	r18.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x823c3b64
	if (!ctx.cr6.gt) goto loc_823C3B64;
	// lwz r19,108(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r6,r20,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r19,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r8,r31
	ctx.r9.u64 = ctx.r8.u64 + r31.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r8.u32);
loc_823C38BC:
	// addi r9,r18,16
	ctx.r9.s64 = r18.s64 + 16;
	// mr r17,r9
	r17.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r25.s32, ctx.xer);
	// ble cr6,0x823c38d0
	if (!ctx.cr6.gt) goto loc_823C38D0;
	// mr r17,r25
	r17.u64 = r25.u64;
loc_823C38D0:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823c39dc
	if (!ctx.cr6.gt) goto loc_823C39DC;
	// subf r16,r18,r17
	r16.u64 = r17.u64 - r18.u64;
	// mullw r10,r16,r19
	ctx.r10.s64 = int64_t(r16.s32) * int64_t(r19.s32);
	// subfic r7,r10,-2
	ctx.xer.ca = ctx.r10.u32 <= 4294967294;
	ctx.r7.u64 = static_cast<uint64_t>(-2) - ctx.r10.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
loc_823C38EC:
	// srawi r7,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 17;
	// srawi r31,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	r31.s64 = ctx.r8.s32 >> 16;
	// add r21,r8,r4
	r21.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mullw r8,r31,r26
	ctx.r8.s64 = int64_t(r31.s32) * int64_t(r26.s32);
	// srawi r31,r21,16
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0xFFFF) != 0);
	r31.s64 = r21.s32 >> 16;
	// add r30,r8,r27
	r30.u64 = ctx.r8.u64 + r27.u64;
	// mullw r8,r31,r26
	ctx.r8.s64 = int64_t(r31.s32) * int64_t(r26.s32);
	// add r29,r8,r27
	r29.u64 = ctx.r8.u64 + r27.u64;
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// cmpw cr6,r18,r17
	ctx.cr6.compare<int32_t>(r18.s32, r17.s32, ctx.xer);
	// bge cr6,0x823c39c4
	if (!ctx.cr6.lt) goto loc_823C39C4;
	// lwz r3,76(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// addi r31,r16,-1
	r31.s64 = r16.s64 + -1;
	// lwz r28,44(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// rlwinm r24,r19,1,0,30
	r24.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r26,r7,r3
	r26.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// rlwinm r7,r31,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// add r25,r26,r28
	r25.u64 = r26.u64 + r28.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// rlwinm r23,r20,1,0,30
	r23.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r22,r19,2,0,29
	r22.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823C3944:
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// add r31,r8,r20
	r31.u64 = ctx.r8.u64 + r20.u64;
	// srawi r3,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 1;
	// add r8,r23,r8
	ctx.r8.u64 = r23.u64 + ctx.r8.u64;
	// add r14,r26,r3
	r14.u64 = r26.u64 + ctx.r3.u64;
	// lbzx r28,r7,r30
	r28.u64 = REX_LOAD_U8(ctx.r7.u32 + r30.u32);
	// lbzx r27,r7,r29
	r27.u64 = REX_LOAD_U8(ctx.r7.u32 + r29.u32);
	// srawi r7,r31,16
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = r31.s32 >> 16;
	// lbzx r3,r25,r3
	ctx.r3.u64 = REX_LOAD_U8(r25.u32 + ctx.r3.u32);
	// rotlwi r28,r28,16
	r28.u64 = __builtin_rotateleft32(r28.u32, 16);
	// rotlwi r3,r3,24
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 24);
	// lbzx r31,r14,r5
	r31.u64 = REX_LOAD_U8(r14.u32 + ctx.r5.u32);
	// add r28,r28,r3
	r28.u64 = r28.u64 + ctx.r3.u64;
	// lbzx r14,r7,r30
	r14.u64 = REX_LOAD_U8(ctx.r7.u32 + r30.u32);
	// rotlwi r31,r31,8
	r31.u64 = __builtin_rotateleft32(r31.u32, 8);
	// lbzx r7,r7,r29
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + r29.u32);
	// stw r28,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, r28.u32);
	// rotlwi r28,r14,16
	r28.u64 = __builtin_rotateleft32(r14.u32, 16);
	// add r27,r27,r31
	r27.u64 = r27.u64 + r31.u64;
	// lwz r14,-168(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + r31.u64;
	// add r3,r28,r3
	ctx.r3.u64 = r28.u64 + ctx.r3.u64;
	// or r31,r14,r27
	r31.u64 = r14.u64 | r27.u64;
	// or r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 | ctx.r7.u64;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// stwx r3,r11,r24
	REX_STORE_U32(ctx.r11.u32 + r24.u32, ctx.r3.u32);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + r22.u64;
	// bdnz 0x823c3944
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C3944;
	// lwz r3,-172(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r27,28(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r26,68(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_823C39C4:
	// add r8,r21,r4
	ctx.r8.u64 = r21.u64 + ctx.r4.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x823c38ec
	if (ctx.cr6.lt) goto loc_823C38EC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
loc_823C39DC:
	// lwz r8,-176(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// add r15,r15,r6
	r15.u64 = r15.u64 + ctx.r6.u64;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r25.s32, ctx.xer);
	// blt cr6,0x823c38bc
	if (ctx.cr6.lt) goto loc_823C38BC;
	// b 0x822d4ea0
	return;
loc_823C39F8:
	// mr r14,r10
	r14.u64 = ctx.r10.u64;
	// li r17,0
	r17.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x823c3b64
	if (!ctx.cr6.gt) goto loc_823C3B64;
	// lwz r18,108(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r6,r20,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r18,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r8,r31
	ctx.r9.u64 = ctx.r8.u64 + r31.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r8.u32);
loc_823C3A20:
	// addi r9,r17,16
	ctx.r9.s64 = r17.s64 + 16;
	// mr r16,r9
	r16.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r25.s32, ctx.xer);
	// ble cr6,0x823c3a34
	if (!ctx.cr6.gt) goto loc_823C3A34;
	// mr r16,r25
	r16.u64 = r25.u64;
loc_823C3A34:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823c3b4c
	if (!ctx.cr6.gt) goto loc_823C3B4C;
	// subf r15,r17,r16
	r15.u64 = r16.u64 - r17.u64;
	// mullw r10,r15,r18
	ctx.r10.s64 = int64_t(r15.s32) * int64_t(r18.s32);
	// subfic r7,r10,-2
	ctx.xer.ca = ctx.r10.u32 <= 4294967294;
	ctx.r7.u64 = static_cast<uint64_t>(-2) - ctx.r10.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
loc_823C3A50:
	// srawi r7,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 17;
	// srawi r31,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	r31.s64 = ctx.r8.s32 >> 16;
	// add r19,r8,r4
	r19.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mullw r8,r31,r26
	ctx.r8.s64 = int64_t(r31.s32) * int64_t(r26.s32);
	// srawi r31,r19,16
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0xFFFF) != 0);
	r31.s64 = r19.s32 >> 16;
	// add r29,r8,r27
	r29.u64 = ctx.r8.u64 + r27.u64;
	// mullw r8,r31,r26
	ctx.r8.s64 = int64_t(r31.s32) * int64_t(r26.s32);
	// add r28,r8,r27
	r28.u64 = ctx.r8.u64 + r27.u64;
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// cmpw cr6,r17,r16
	ctx.cr6.compare<int32_t>(r17.s32, r16.s32, ctx.xer);
	// bge cr6,0x823c3b34
	if (!ctx.cr6.lt) goto loc_823C3B34;
	// lwz r4,76(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// addi r3,r15,-1
	ctx.r3.s64 = r15.s64 + -1;
	// lwz r31,44(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// rlwinm r30,r18,1,0,30
	r30.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r24,r7,r4
	r24.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// rlwinm r7,r3,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// add r23,r24,r31
	r23.u64 = r24.u64 + r31.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// rlwinm r22,r20,1,0,30
	r22.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r21,r18,2,0,29
	r21.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823C3AA8:
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// add r4,r8,r20
	ctx.r4.u64 = ctx.r8.u64 + r20.u64;
	// srawi r3,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 1;
	// add r31,r11,r30
	r31.u64 = ctx.r11.u64 + r30.u64;
	// add r27,r24,r3
	r27.u64 = r24.u64 + ctx.r3.u64;
	// lbzx r26,r7,r29
	r26.u64 = REX_LOAD_U8(ctx.r7.u32 + r29.u32);
	// add r8,r22,r8
	ctx.r8.u64 = r22.u64 + ctx.r8.u64;
	// lbzx r25,r7,r28
	r25.u64 = REX_LOAD_U8(ctx.r7.u32 + r28.u32);
	// srawi r7,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 16;
	// lbzx r3,r23,r3
	ctx.r3.u64 = REX_LOAD_U8(r23.u32 + ctx.r3.u32);
	// stw r31,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, r31.u32);
	// lbzx r4,r27,r5
	ctx.r4.u64 = REX_LOAD_U8(r27.u32 + ctx.r5.u32);
	// rotlwi r31,r3,8
	r31.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// rotlwi r3,r4,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// lbzx r27,r7,r28
	r27.u64 = REX_LOAD_U8(ctx.r7.u32 + r28.u32);
	// lbzx r7,r7,r29
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + r29.u32);
	// add r4,r25,r31
	ctx.r4.u64 = r25.u64 + r31.u64;
	// add r26,r26,r3
	r26.u64 = r26.u64 + ctx.r3.u64;
	// add r31,r27,r31
	r31.u64 = r27.u64 + r31.u64;
	// sth r4,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lwz r4,-168(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// clrlwi r7,r26,16
	ctx.r7.u64 = r26.u32 & 0xFFFF;
	// clrlwi r31,r31,16
	r31.u64 = r31.u32 & 0xFFFF;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// sthx r31,r11,r30
	REX_STORE_U16(ctx.r11.u32 + r30.u32, r31.u16);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + r21.u64;
	// sth r3,2(r4)
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r3.u16);
	// bdnz 0x823c3aa8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C3AA8;
	// lwz r4,-164(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// lwz r3,-172(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r27,28(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r26,68(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_823C3B34:
	// add r8,r19,r4
	ctx.r8.u64 = r19.u64 + ctx.r4.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x823c3a50
	if (ctx.cr6.lt) goto loc_823C3A50;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
loc_823C3B4C:
	// lwz r8,-176(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// add r14,r14,r6
	r14.u64 = r14.u64 + ctx.r6.u64;
	// mr r17,r9
	r17.u64 = ctx.r9.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r25.s32, ctx.xer);
	// blt cr6,0x823c3a20
	if (ctx.cr6.lt) goto loc_823C3A20;
loc_823C3B64:
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823D14C0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r10,r11,-13776
	ctx.r10.s64 = ctx.r11.s64 + -13776;
	// addi r8,r10,40
	ctx.r8.s64 = ctx.r10.s64 + 40;
	// addi r11,r10,40
	ctx.r11.s64 = ctx.r10.s64 + 40;
	// lwz r9,9636(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 9636);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823d14f8
	if (!ctx.cr6.lt) goto loc_823D14F8;
loc_823D14E0:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x823d1500
	if (ctx.cr6.eq) goto loc_823D1500;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823d14e0
	if (ctx.cr6.lt) goto loc_823D14E0;
loc_823D14F8:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
loc_823D1500:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D3720) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823D3728;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823d3744
	if (ctx.cr6.eq) goto loc_823D3744;
	// stw r31,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r31.u32);
loc_823D3744:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823d3758
	if (!ctx.cr6.eq) goto loc_823D3758;
loc_823D374C:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x823d3800
	goto loc_823D3800;
loc_823D3758:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823d374c
	if (ctx.cr6.eq) goto loc_823D374C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,4138
	ctx.r10.s64 = 271187968;
	// ori r10,r10,4352
	ctx.r10.u64 = ctx.r10.u64 | 4352;
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823d3794
	if (ctx.cr6.eq) goto loc_823D3794;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823d3794
	if (ctx.cr6.eq) goto loc_823D3794;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823d37f8
	if (!ctx.cr6.eq) goto loc_823D37F8;
loc_823D3794:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x823cd118
	ctx.lr = 0x823D37A0;
	sub_823CD118(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823d37b0
	if (ctx.cr0.eq) goto loc_823D37B0;
	// bl 0x823eb988
	ctx.lr = 0x823D37AC;
	sub_823EB988(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_823D37B0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x823d37c4
	if (!ctx.cr6.eq) goto loc_823D37C4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823d3800
	goto loc_823D3800;
loc_823D37C4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ebea8
	ctx.lr = 0x823D37D4;
	sub_823EBEA8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x823d37f8
	if (!ctx.cr0.lt) goto loc_823D37F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823eab68
	ctx.lr = 0x823D37E4;
	sub_823EAB68(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cd250
	ctx.lr = 0x823D37F0;
	sub_823CD250(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x823d3800
	goto loc_823D3800;
loc_823D37F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
loc_823D3800:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823D6AE0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
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
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
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
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
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
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
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
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
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
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
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
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
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
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
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
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D9660) {
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
	ctx.lr = 0x823D9668;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f1c
	ctx.lr = 0x823D9670;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r16,0
	r16.s64 = 0;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// li r20,0
	r20.s64 = 0;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x823d969c
	if (ctx.cr6.eq) goto loc_823D969C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x823d9b7c
	goto loc_823D9B7C;
loc_823D969C:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// not r7,r11
	ctx.r7.u64 = ~ctx.r11.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r5,r9,16,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x1;
	// rlwinm r30,r7,15,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0x1;
	// lwz r3,104(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// rlwinm r29,r11,14,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// lwz r4,104(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 104);
	// bl 0x823d91e8
	ctx.lr = 0x823D96C8;
	sub_823D91E8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// lwz r4,108(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r3,108(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// bl 0x823d91e8
	ctx.lr = 0x823D96E4;
	sub_823D91E8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// lwz r4,112(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r3,112(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// bl 0x823d91e8
	ctx.lr = 0x823D9700;
	sub_823D91E8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x823d9b34
	if (ctx.cr6.eq) goto loc_823D9B34;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x823d9b34
	if (ctx.cr6.eq) goto loc_823D9B34;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d9b34
	if (ctx.cr6.eq) goto loc_823D9B34;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823cd118
	ctx.lr = 0x823D9734;
	sub_823CD118(ctx, base);
	// mr. r16,r3
	r16.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq 0x823d9b34
	if (ctx.cr0.eq) goto loc_823D9B34;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r3,r11,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x823cd118
	ctx.lr = 0x823D9750;
	sub_823CD118(ctx, base);
	// mr. r20,r3
	r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq 0x823d9b34
	if (ctx.cr0.eq) goto loc_823D9B34;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r20
	r30.u64 = r20.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r17,0
	r17.s64 = 0;
	// lwz r8,104(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// lwz r7,112(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// mulli r8,r8,48
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(48));
	// add r29,r10,r20
	r29.u64 = ctx.r10.u64 + r20.u64;
	// add r28,r9,r20
	r28.u64 = ctx.r9.u64 + r20.u64;
	// add r27,r8,r20
	r27.u64 = ctx.r8.u64 + r20.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// ble cr6,0x823d9b2c
	if (!ctx.cr6.gt) goto loc_823D9B2C;
	// addi r24,r26,8
	r24.s64 = r26.s64 + 8;
	// li r18,-1
	r18.s64 = -1;
loc_823D9798:
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// li r19,0
	r19.s64 = 0;
	// mr r21,r18
	r21.u64 = r18.u64;
	// mr r22,r18
	r22.u64 = r18.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x823d9b18
	if (!ctx.cr6.gt) goto loc_823D9B18;
	// addi r26,r14,8
	r26.s64 = r14.s64 + 8;
loc_823D97B4:
	// lwz r23,-8(r26)
	r23.u64 = REX_LOAD_U32(r26.u32 + -8);
	// li r25,0
	r25.s64 = 0;
	// cmplw cr6,r23,r21
	ctx.cr6.compare<uint32_t>(r23.u32, r21.u32, ctx.xer);
	// beq cr6,0x823d9834
	if (ctx.cr6.eq) goto loc_823D9834;
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(r23.u32, r22.u32, ctx.xer);
	// beq cr6,0x823d9814
	if (ctx.cr6.eq) goto loc_823D9814;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r5,-8(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + -8);
	// mr r21,r23
	r21.u64 = r23.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D97F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r5,0(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D9810;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823d9834
	goto loc_823D9834;
loc_823D9814:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// mr r21,r22
	r21.u64 = r22.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// mr r22,r18
	r22.u64 = r18.u64;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_823D9834:
	// lwz r23,0(r26)
	r23.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(r23.u32, r22.u32, ctx.xer);
	// beq cr6,0x823d9884
	if (ctx.cr6.eq) goto loc_823D9884;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r5,-8(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + -8);
	// mr r22,r23
	r22.u64 = r23.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D9864;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r5,0(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D9884;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D9884:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823d9adc
	if (!ctx.cr6.gt) goto loc_823D9ADC;
	// addi r9,r15,-12
	ctx.r9.s64 = r15.s64 + -12;
	// addi r8,r16,-4
	ctx.r8.s64 = r16.s64 + -4;
loc_823D989C:
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lfs f13,24(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,12(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lfs f12,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f11,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f10,-4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + r27.u64;
	// lfs f9,4(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// add r6,r10,r27
	ctx.r6.u64 = ctx.r10.u64 + r27.u64;
	// lfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + r28.u64;
	// add r4,r10,r28
	ctx.r4.u64 = ctx.r10.u64 + r28.u64;
	// lfsx f8,r11,r27
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r10,r27
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f4,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f1,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f6,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f1,f1,f12
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// lfs f5,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f3,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f2,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f3,f3,f12
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f31,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	f31.f64 = double(temp.f32);
	// fmuls f2,f2,f12
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// lfs f30,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	f30.f64 = double(temp.f32);
	// fmuls f31,f31,f13
	f31.f64 = double(float(f31.f64 * ctx.f13.f64));
	// lfs f29,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	f29.f64 = double(temp.f32);
	// fmuls f30,f30,f13
	f30.f64 = double(float(f30.f64 * ctx.f13.f64));
	// lfs f28,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	f28.f64 = double(temp.f32);
	// fmuls f29,f29,f13
	f29.f64 = double(float(f29.f64 * ctx.f13.f64));
	// lfs f27,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	f27.f64 = double(temp.f32);
	// fmuls f28,f28,f12
	f28.f64 = double(float(f28.f64 * ctx.f12.f64));
	// lfs f26,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	f26.f64 = double(temp.f32);
	// fmuls f27,f27,f12
	f27.f64 = double(float(f27.f64 * ctx.f12.f64));
	// lfsx f25,r11,r28
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	f25.f64 = double(temp.f32);
	// fmuls f26,f26,f12
	f26.f64 = double(float(f26.f64 * ctx.f12.f64));
	// lfsx f24,r10,r28
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	f24.f64 = double(temp.f32);
	// fmuls f25,f25,f13
	f25.f64 = double(float(f25.f64 * ctx.f13.f64));
	// fmuls f24,f24,f12
	f24.f64 = double(float(f24.f64 * ctx.f12.f64));
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + r29.u64;
	// fadds f4,f1,f4
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// add r6,r10,r29
	ctx.r6.u64 = ctx.r10.u64 + r29.u64;
	// fadds f5,f2,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + r30.u64;
	// fadds f6,f3,f6
	ctx.f6.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// lfsx f3,r10,r29
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	ctx.f3.f64 = double(temp.f32);
	// fadds f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lfsx f7,r11,r29
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f2,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fadds f1,f28,f31
	ctx.f1.f64 = double(float(f28.f64 + f31.f64));
	// lfs f31,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	f31.f64 = double(temp.f32);
	// fadds f30,f27,f30
	f30.f64 = double(float(f27.f64 + f30.f64));
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + r30.u64;
	// fadds f29,f26,f29
	f29.f64 = double(float(f26.f64 + f29.f64));
	// fmuls f2,f2,f13
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fadds f28,f24,f25
	f28.f64 = double(float(f24.f64 + f25.f64));
	// fmuls f4,f4,f11
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f5,f5,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f6,f6,f11
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f1,f1,f10
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmuls f30,f30,f10
	f30.f64 = double(float(f30.f64 * ctx.f10.f64));
	// fmuls f29,f29,f10
	f29.f64 = double(float(f29.f64 * ctx.f10.f64));
	// fmuls f28,f28,f10
	f28.f64 = double(float(f28.f64 * ctx.f10.f64));
	// fadds f6,f1,f6
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// fadds f5,f30,f5
	ctx.f5.f64 = double(float(f30.f64 + ctx.f5.f64));
	// fadds f4,f29,f4
	ctx.f4.f64 = double(float(f29.f64 + ctx.f4.f64));
	// fadds f8,f28,f8
	ctx.f8.f64 = double(float(f28.f64 + ctx.f8.f64));
	// fmuls f6,f6,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmuls f5,f5,f9
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fmuls f4,f4,f9
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// fmuls f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lfsx f8,r11,r30
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f1,f31,f13
	ctx.f1.f64 = double(float(f31.f64 * ctx.f13.f64));
	// lfsx f31,r10,r30
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	f31.f64 = double(temp.f32);
	// lfs f30,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	f30.f64 = double(temp.f32);
	// fmuls f3,f3,f12
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f29,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	f29.f64 = double(temp.f32);
	// fmuls f8,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f28,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	f28.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	f31.f64 = double(float(f31.f64 * ctx.f0.f64));
	// lfs f26,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	f26.f64 = double(temp.f32);
	// fmuls f30,f30,f12
	f30.f64 = double(float(f30.f64 * ctx.f12.f64));
	// fmuls f29,f29,f12
	f29.f64 = double(float(f29.f64 * ctx.f12.f64));
	// lfs f27,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	f27.f64 = double(temp.f32);
	// lfs f25,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	f25.f64 = double(temp.f32);
	// fmuls f28,f28,f13
	f28.f64 = double(float(f28.f64 * ctx.f13.f64));
	// lfs f24,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	f24.f64 = double(temp.f32);
	// fmuls f26,f26,f0
	f26.f64 = double(float(f26.f64 * ctx.f0.f64));
	// lfs f23,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	f23.f64 = double(temp.f32);
	// fmuls f27,f27,f13
	f27.f64 = double(float(f27.f64 * ctx.f13.f64));
	// lfs f22,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	f22.f64 = double(temp.f32);
	// fmuls f24,f24,f13
	f24.f64 = double(float(f24.f64 * ctx.f13.f64));
	// lfs f21,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	f21.f64 = double(temp.f32);
	// fmuls f25,f25,f0
	f25.f64 = double(float(f25.f64 * ctx.f0.f64));
	// fmuls f13,f22,f13
	ctx.f13.f64 = double(float(f22.f64 * ctx.f13.f64));
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// fmuls f0,f21,f0
	ctx.f0.f64 = double(float(f21.f64 * ctx.f0.f64));
	// fmuls f12,f23,f12
	ctx.f12.f64 = double(float(f23.f64 * ctx.f12.f64));
	// lfs f23,-4(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + -4);
	f23.f64 = double(temp.f32);
	// fadds f7,f3,f7
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// fadds f3,f30,f2
	ctx.f3.f64 = double(float(f30.f64 + ctx.f2.f64));
	// fadds f8,f31,f8
	ctx.f8.f64 = double(float(f31.f64 + ctx.f8.f64));
	// fadds f2,f29,f1
	ctx.f2.f64 = double(float(f29.f64 + ctx.f1.f64));
	// fadds f1,f26,f28
	ctx.f1.f64 = double(float(f26.f64 + f28.f64));
	// fadds f31,f25,f27
	f31.f64 = double(float(f25.f64 + f27.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fadds f12,f12,f24
	ctx.f12.f64 = double(float(ctx.f12.f64 + f24.f64));
	// fmuls f13,f7,f11
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f7,f3,f11
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmuls f8,f8,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f3,f2,f11
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f2,f1,f10
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmuls f1,f31,f10
	ctx.f1.f64 = double(float(f31.f64 * ctx.f10.f64));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// fadds f11,f2,f7
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f7.f64));
	// fadds f10,f1,f3
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fmuls f13,f13,f23
	ctx.f13.f64 = double(float(ctx.f13.f64 * f23.f64));
	// fmuls f12,f11,f23
	ctx.f12.f64 = double(float(ctx.f11.f64 * f23.f64));
	// fmuls f11,f10,f23
	ctx.f11.f64 = double(float(ctx.f10.f64 * f23.f64));
	// fmuls f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 * f23.f64));
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// fadds f13,f12,f6
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f13,8(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// fadds f13,f11,f5
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// stfs f13,12(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// fadds f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// stfsu f0,16(r8)
	ea = 16 + ctx.r8.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823d989c
	if (ctx.cr6.lt) goto loc_823D989C;
loc_823D9ADC:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D9AFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// addi r26,r26,16
	r26.s64 = r26.s64 + 16;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r19,r10
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823d97b4
	if (ctx.cr6.lt) goto loc_823D97B4;
	// lwz r26,80(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823D9B18:
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// addi r24,r24,16
	r24.s64 = r24.s64 + 16;
	// cmplw cr6,r17,r10
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823d9798
	if (ctx.cr6.lt) goto loc_823D9798;
loc_823D9B2C:
	// li r31,0
	r31.s64 = 0;
	// b 0x823d9b3c
	goto loc_823D9B3C;
loc_823D9B34:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
loc_823D9B3C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x823cd250
	ctx.lr = 0x823D9B48;
	sub_823CD250(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x823cd250
	ctx.lr = 0x823D9B54;
	sub_823CD250(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823cd250
	ctx.lr = 0x823D9B60;
	sub_823CD250(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x823cd250
	ctx.lr = 0x823D9B6C;
	sub_823CD250(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x823cd250
	ctx.lr = 0x823D9B78;
	sub_823CD250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823D9B7C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f68
	ctx.lr = 0x823D9B88;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823E59A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823E59B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r10,244(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-6640
	ctx.r11.s64 = ctx.r11.s64 + -6640;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x823e5a24
	if (ctx.cr6.eq) goto loc_823E5A24;
	// lwz r11,248(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e5a24
	if (ctx.cr6.eq) goto loc_823E5A24;
	// lwz r28,212(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// lwz r10,216(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823e5a24
	if (!ctx.cr6.lt) goto loc_823E5A24;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
loc_823E59F0:
	// lwz r30,200(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 200);
	// b 0x823e5a08
	goto loc_823E5A08;
loc_823E59F8:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwzu r3,8(r29)
	ea = 8 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// bl 0x823cd250
	ctx.lr = 0x823E5A04;
	sub_823CD250(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_823E5A08:
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823e59f8
	if (ctx.cr6.lt) goto loc_823E59F8;
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823e59f0
	if (ctx.cr6.lt) goto loc_823E59F0;
loc_823E5A24:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,240(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 240);
	// bl 0x823cd250
	ctx.lr = 0x823E5A30;
	sub_823CD250(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,248(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 248);
	// bl 0x823cd250
	ctx.lr = 0x823E5A3C;
	sub_823CD250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbd38
	ctx.lr = 0x823E5A44;
	sub_823DBD38(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823E7B18) {
	REX_FUNC_PROLOGUE();
	// not r11,r4
	ctx.r11.u64 = ~ctx.r4.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lhz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lhz r3,10(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E7D08) {
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
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// rlwinm. r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e7d3c
	if (ctx.cr0.eq) goto loc_823E7D3C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_823E7D28:
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	REX_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823e7d28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E7D28;
loc_823E7D3C:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x822265f0
	ctx.lr = 0x823E7D44;
	sub_822265F0(ctx, base);
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

DEFINE_REX_FUNC(sub_823EAB68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823EAB70;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,9288
	ctx.r11.s64 = ctx.r11.s64 + 9288;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x823eabe8
	if (ctx.cr6.eq) goto loc_823EABE8;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823eabdc
	if (!ctx.cr6.gt) goto loc_823EABDC;
	// li r30,0
	r30.s64 = 0;
loc_823EABA4:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r29,r11,r30
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823eabc8
	if (ctx.cr6.eq) goto loc_823EABC8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e7960
	ctx.lr = 0x823EABBC;
	sub_823E7960(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823cd250
	ctx.lr = 0x823EABC8;
	sub_823CD250(ctx, base);
loc_823EABC8:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823eaba4
	if (ctx.cr6.lt) goto loc_823EABA4;
loc_823EABDC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x823cd250
	ctx.lr = 0x823EABE8;
	sub_823CD250(ctx, base);
loc_823EABE8:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x823cd250
	ctx.lr = 0x823EABF4;
	sub_823CD250(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x823cd250
	ctx.lr = 0x823EAC00;
	sub_823CD250(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823EDD20) {
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
	ctx.lr = 0x823EDD28;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,24(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823edd6c
	if (!ctx.cr6.eq) goto loc_823EDD6C;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EDD50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823edd64
	if (!ctx.cr6.eq) goto loc_823EDD64;
loc_823EDD58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb4
	return;
loc_823EDD64:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
loc_823EDD6C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r31,r9,8
	r31.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// bne 0x823edda0
	if (!ctx.cr0.eq) goto loc_823EDDA0;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EDD90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823edd58
	if (ctx.cr6.eq) goto loc_823EDD58;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
loc_823EDDA0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
	// addi r27,r10,-1
	r27.s64 = ctx.r10.s64 + -1;
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + r31.u64;
	// addic. r21,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	r21.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// ble 0x823edff4
	if (!ctx.cr0.gt) goto loc_823EDFF4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r20,81
	r20.s64 = 81;
	// li r19,31
	r19.s64 = 31;
	// li r22,93
	r22.s64 = 93;
	// addi r23,r11,1768
	r23.s64 = ctx.r11.s64 + 1768;
loc_823EDDCC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x823eddf4
	if (!ctx.cr6.eq) goto loc_823EDDF4;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EDDE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823edd58
	if (ctx.cr6.eq) goto loc_823EDD58;
	// lwz r29,0(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r27,4(r26)
	r27.u64 = REX_LOAD_U32(r26.u32 + 4);
loc_823EDDF4:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// clrlwi r31,r10,28
	r31.u64 = ctx.r10.u32 & 0xF;
	// srawi r24,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	r24.s64 = ctx.r10.s32 >> 4;
	// stw r20,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r20.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r31,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, r31.u32);
	// lwz r8,0(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r24,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, r24.u32);
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823EDE38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// blt cr6,0x823ede64
	if (ctx.cr6.lt) goto loc_823EDE64;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r19,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r19.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r31,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r31.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823EDE64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823EDE64:
	// addi r11,r31,42
	ctx.r11.s64 = r31.s64 + 42;
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823ede84
	if (!ctx.cr6.eq) goto loc_823EDE84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823f62c8
	ctx.lr = 0x823EDE80;
	sub_823F62C8(ctx, base);
	// stwx r3,r31,r28
	REX_STORE_U32(r31.u32 + r28.u32, ctx.r3.u32);
loc_823EDE84:
	// lwzx r25,r31,r28
	r25.u64 = REX_LOAD_U32(r31.u32 + r28.u32);
	// mr r30,r23
	r30.u64 = r23.u64;
loc_823EDE8C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x823edf04
	if (ctx.cr6.eq) goto loc_823EDF04;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x823edebc
	if (!ctx.cr6.eq) goto loc_823EDEBC;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EDEAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823edd58
	if (ctx.cr6.eq) goto loc_823EDD58;
	// lwz r29,0(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r27,4(r26)
	r27.u64 = REX_LOAD_U32(r26.u32 + 4);
loc_823EDEBC:
	// lbz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 0);
	// addic. r10,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	ctx.r10.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// rotlwi r31,r9,8
	r31.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// bne 0x823edef0
	if (!ctx.cr0.eq) goto loc_823EDEF0;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EDEE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823edd58
	if (ctx.cr6.eq) goto loc_823EDD58;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
loc_823EDEF0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
	// addi r27,r10,-1
	r27.s64 = ctx.r10.s64 + -1;
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + r31.u64;
	// b 0x823edf38
	goto loc_823EDF38;
loc_823EDF04:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x823edf2c
	if (!ctx.cr6.eq) goto loc_823EDF2C;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EDF1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823edd58
	if (ctx.cr6.eq) goto loc_823EDD58;
	// lwz r29,0(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r27,4(r26)
	r27.u64 = REX_LOAD_U32(r26.u32 + 4);
loc_823EDF2C:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_823EDF38:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r23,256
	ctx.r7.s64 = r23.s64 + 256;
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r7.s32, ctx.xer);
	// sthx r9,r8,r25
	REX_STORE_U16(ctx.r8.u32 + r25.u32, ctx.r9.u16);
	// blt cr6,0x823ede8c
	if (ctx.cr6.lt) goto loc_823EDE8C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x823edfdc
	if (ctx.cr6.lt) goto loc_823EDFDC;
	// addi r31,r25,-2
	r31.s64 = r25.s64 + -2;
	// li r30,8
	r30.s64 = 8;
loc_823EDF70:
	// lhz r9,2(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 2);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r9,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lhz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 4);
	// stw r7,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// lhz r5,6(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 6);
	// stw r5,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// lhz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 8);
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lhz r7,10(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 10);
	// stw r7,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// lhz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 12);
	// stw r5,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// lhz r9,14(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 14);
	// stw r9,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// lhzu r8,16(r31)
	ea = 16 + r31.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	r31.u32 = ea;
	// stw r8,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r22,20(r7)
	REX_STORE_U32(ctx.r7.u32 + 20, r22.u32);
	// lwz r6,0(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823EDFD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x823edf70
	if (!ctx.cr0.eq) goto loc_823EDF70;
loc_823EDFDC:
	// addi r21,r21,-65
	r21.s64 = r21.s64 + -65;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x823edfec
	if (ctx.cr6.eq) goto loc_823EDFEC;
	// addi r21,r21,-64
	r21.s64 = r21.s64 + -64;
loc_823EDFEC:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bgt cr6,0x823eddcc
	if (ctx.cr6.gt) goto loc_823EDDCC;
loc_823EDFF4:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x823ee01c
	if (ctx.cr6.eq) goto loc_823EE01C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r10,11
	ctx.r10.s64 = 11;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823EE01C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823EE01C:
	// stw r29,0(r26)
	REX_STORE_U32(r26.u32 + 0, r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r27,4(r26)
	REX_STORE_U32(r26.u32 + 4, r27.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_823F6C60) {
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
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F6C8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r3,424(r31)
	REX_STORE_U32(r31.u32 + 424, ctx.r3.u32);
	// lis r8,-32193
	ctx.r8.s64 = -2109800448;
	// lis r7,-32193
	ctx.r7.s64 = -2109800448;
	// addi r6,r8,27120
	ctx.r6.s64 = ctx.r8.s64 + 27120;
	// addi r5,r7,27664
	ctx.r5.s64 = ctx.r7.s64 + 27664;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r6,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r4.u32);
	// bl 0x823f66a0
	ctx.lr = 0x823F6CBC;
	sub_823F66A0(ctx, base);
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

DEFINE_REX_FUNC(sub_823F90A0) {
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
	ctx.lr = 0x823F90A8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1368(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1368);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f90d0
	if (ctx.cr6.eq) goto loc_823F90D0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,2872
	ctx.r4.s64 = ctx.r11.s64 + 2872;
	// bl 0x823ec3e0
	ctx.lr = 0x823F90D0;
	sub_823EC3E0(ctx, base);
loc_823F90D0:
	// cmplwi cr6,r30,13
	ctx.cr6.compare<uint32_t>(r30.u32, 13, ctx.xer);
	// beq cr6,0x823f90e8
	if (ctx.cr6.eq) goto loc_823F90E8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,2852
	ctx.r4.s64 = ctx.r11.s64 + 2852;
	// bl 0x823ec3e0
	ctx.lr = 0x823F90E8;
	sub_823EC3E0(ctx, base);
loc_823F90E8:
	// lwz r11,1368(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1368);
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,1368(r31)
	REX_STORE_U32(r31.u32 + 1368, ctx.r11.u32);
	// bl 0x823f2248
	ctx.lr = 0x823F9104;
	sub_823F2248(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ec5f8
	ctx.lr = 0x823F9114;
	sub_823EC5F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f8fa8
	ctx.lr = 0x823F9120;
	sub_823F8FA8(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// lbz r9,97(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 97);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lbz r7,101(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 101);
	// rotlwi r9,r8,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r6,98(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 98);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r5,102(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 102);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lbz r4,103(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 103);
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r27,r11,r4
	r27.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r7,99(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 99);
	// lbz r28,104(r1)
	r28.u64 = REX_LOAD_U8(ctx.r1.u32 + 104);
	// lbz r29,105(r1)
	r29.u64 = REX_LOAD_U8(ctx.r1.u32 + 105);
	// add. r30,r8,r7
	r30.u64 = ctx.r8.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lbz r25,106(r1)
	r25.u64 = REX_LOAD_U8(ctx.r1.u32 + 106);
	// lbz r24,107(r1)
	r24.u64 = REX_LOAD_U8(ctx.r1.u32 + 107);
	// lbz r26,108(r1)
	r26.u64 = REX_LOAD_U8(ctx.r1.u32 + 108);
	// beq 0x823f91b0
	if (ctx.cr0.eq) goto loc_823F91B0;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823f91b0
	if (ctx.cr6.gt) goto loc_823F91B0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x823f91b0
	if (ctx.cr6.eq) goto loc_823F91B0;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823f91c0
	if (!ctx.cr6.gt) goto loc_823F91C0;
loc_823F91B0:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,2824
	ctx.r4.s64 = ctx.r11.s64 + 2824;
	// bl 0x823ec3e0
	ctx.lr = 0x823F91C0;
	sub_823EC3E0(ctx, base);
loc_823F91C0:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// beq cr6,0x823f91f8
	if (ctx.cr6.eq) goto loc_823F91F8;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// beq cr6,0x823f91f8
	if (ctx.cr6.eq) goto loc_823F91F8;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(r28.s32, 4, ctx.xer);
	// beq cr6,0x823f91f8
	if (ctx.cr6.eq) goto loc_823F91F8;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(r28.s32, 8, ctx.xer);
	// beq cr6,0x823f91f8
	if (ctx.cr6.eq) goto loc_823F91F8;
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(r28.s32, 16, ctx.xer);
	// beq cr6,0x823f91f8
	if (ctx.cr6.eq) goto loc_823F91F8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,2796
	ctx.r4.s64 = ctx.r11.s64 + 2796;
	// bl 0x823ec3e0
	ctx.lr = 0x823F91F8;
	sub_823EC3E0(ctx, base);
loc_823F91F8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x823f9218
	if (ctx.cr6.lt) goto loc_823F9218;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// beq cr6,0x823f9218
	if (ctx.cr6.eq) goto loc_823F9218;
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(r29.s32, 5, ctx.xer);
	// beq cr6,0x823f9218
	if (ctx.cr6.eq) goto loc_823F9218;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(r29.s32, 6, ctx.xer);
	// ble cr6,0x823f9228
	if (!ctx.cr6.gt) goto loc_823F9228;
loc_823F9218:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,2768
	ctx.r4.s64 = ctx.r11.s64 + 2768;
	// bl 0x823ec3e0
	ctx.lr = 0x823F9228;
	sub_823EC3E0(ctx, base);
loc_823F9228:
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(r29.s32, 3, ctx.xer);
	// bne cr6,0x823f9238
	if (!ctx.cr6.eq) goto loc_823F9238;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(r28.s32, 8, ctx.xer);
	// bgt cr6,0x823f9258
	if (ctx.cr6.gt) goto loc_823F9258;
loc_823F9238:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// beq cr6,0x823f9250
	if (ctx.cr6.eq) goto loc_823F9250;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// beq cr6,0x823f9250
	if (ctx.cr6.eq) goto loc_823F9250;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(r29.s32, 6, ctx.xer);
	// bne cr6,0x823f9268
	if (!ctx.cr6.eq) goto loc_823F9268;
loc_823F9250:
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(r28.s32, 8, ctx.xer);
	// bge cr6,0x823f9268
	if (!ctx.cr6.lt) goto loc_823F9268;
loc_823F9258:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,2716
	ctx.r4.s64 = ctx.r11.s64 + 2716;
	// bl 0x823ec3e0
	ctx.lr = 0x823F9268;
	sub_823EC3E0(ctx, base);
loc_823F9268:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// blt cr6,0x823f9280
	if (ctx.cr6.lt) goto loc_823F9280;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,2680
	ctx.r4.s64 = ctx.r11.s64 + 2680;
	// bl 0x823ec3e0
	ctx.lr = 0x823F9280;
	sub_823EC3E0(ctx, base);
loc_823F9280:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x823f9298
	if (ctx.cr6.eq) goto loc_823F9298;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,2644
	ctx.r4.s64 = ctx.r11.s64 + 2644;
	// bl 0x823ec3e0
	ctx.lr = 0x823F9298;
	sub_823EC3E0(ctx, base);
loc_823F9298:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x823f92b0
	if (ctx.cr6.eq) goto loc_823F92B0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,2612
	ctx.r4.s64 = ctx.r11.s64 + 2612;
	// bl 0x823ec3e0
	ctx.lr = 0x823F92B0;
	sub_823EC3E0(ctx, base);
loc_823F92B0:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,1464(r31)
	REX_STORE_U32(r31.u32 + 1464, r30.u32);
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// stw r27,1468(r31)
	REX_STORE_U32(r31.u32 + 1468, r27.u32);
	// stb r11,1558(r31)
	REX_STORE_U8(r31.u32 + 1558, ctx.r11.u8);
	// stb r10,1559(r31)
	REX_STORE_U8(r31.u32 + 1559, ctx.r10.u8);
	// stb r26,1555(r31)
	REX_STORE_U8(r31.u32 + 1555, r26.u8);
	// beq 0x823f9308
	if (ctx.cr0.eq) goto loc_823F9308;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x823f9300
	if (ctx.cr6.eq) goto loc_823F9300;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x823f9308
	if (ctx.cr6.eq) goto loc_823F9308;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x823f92f8
	if (ctx.cr6.eq) goto loc_823F92F8;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x823f9310
	if (!ctx.cr6.eq) goto loc_823F9310;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x823f930c
	goto loc_823F930C;
loc_823F92F8:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x823f930c
	goto loc_823F930C;
loc_823F9300:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x823f930c
	goto loc_823F930C;
loc_823F9308:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823F930C:
	// stb r11,1562(r31)
	REX_STORE_U8(r31.u32 + 1562, ctx.r11.u8);
loc_823F9310:
	// lbz r11,1562(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1562);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,1561(r31)
	REX_STORE_U8(r31.u32 + 1561, ctx.r11.u8);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stw r11,1480(r31)
	REX_STORE_U32(r31.u32 + 1480, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef3f0
	ctx.lr = 0x823F935C;
	sub_823EF3F0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82403F70) {
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
	ctx.lr = 0x82403F78;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,19
	ctx.r4.s64 = 19;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,40(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82403FB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82403fc0
	if (!ctx.cr0.eq) goto loc_82403FC0;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x82404044
	goto loc_82404044;
loc_82403FC0:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,19
	ctx.r5.s64 = 19;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82403ad0
	ctx.lr = 0x82403FF0;
	sub_82403AD0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -3, ctx.xer);
	// bne cr6,0x82404008
	if (!ctx.cr6.eq) goto loc_82404008;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,22332
	ctx.r11.s64 = ctx.r11.s64 + 22332;
	// b 0x82404028
	goto loc_82404028;
loc_82404008:
	// cmpwi cr6,r30,-5
	ctx.cr6.compare<int32_t>(r30.s32, -5, ctx.xer);
	// beq cr6,0x8240401c
	if (ctx.cr6.eq) goto loc_8240401C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8240402c
	if (!ctx.cr6.eq) goto loc_8240402C;
loc_8240401C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,-3
	r30.s64 = -3;
	// addi r11,r11,22296
	ctx.r11.s64 = ctx.r11.s64 + 22296;
loc_82404028:
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_8240402C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82404040;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82404044:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82405C58) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r11,1996
	ctx.r11.s64 = ctx.r11.s64 + 1996;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r10,r10,16464
	ctx.r10.s64 = ctx.r10.s64 + 16464;
	// addi r9,r9,16320
	ctx.r9.s64 = ctx.r9.s64 + 16320;
	// vupkd3d128 v61,v62,0
	vTemp.u32[0] = ctx.v62.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v62.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v62.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v62.u8[2] | 0x3F800000;
	ctx.v61 = vTemp;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// vupkd3d128 v60,v62,0
	vTemp.u32[0] = ctx.v62.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v62.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v62.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v62.u8[2] | 0x3F800000;
	ctx.v60 = vTemp;
	// lvlx128 v59,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// vrlimi128 v63,v59,4,3
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v59.f32), 57), 4));
	// addi r8,r8,16448
	ctx.r8.s64 = ctx.r8.s64 + 16448;
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16432
	ctx.r11.s64 = ctx.r11.s64 + 16432;
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// vperm128 v63,v63,v63,v1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// addi r10,r10,16416
	ctx.r10.s64 = ctx.r10.s64 + 16416;
	// lvx128 v12,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,16400
	ctx.r9.s64 = ctx.r9.s64 + 16400;
	// lvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// vcuxwfp128 v8,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v8.f32, rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// lvx128 v10,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v8,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vor128 v63,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vspltw128 v0,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v13,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vspltw128 v8,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v7,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vmaddfp v0,v0,v11,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v0,v13,v10,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v8,v9,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v63,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v7,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vor128 v59,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vmaxfp128 v63,v62,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxfp128 v62,v62,v59
	simde_mm_store_ps(ctx.v62.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v59.f32)));
	// vminfp128 v63,v61,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vminfp128 v62,v60,v62
	simde_mm_store_ps(ctx.v62.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v62.f32)));
	// stvx128 v63,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8240E880) {
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
	ctx.lr = 0x8240E888;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,72(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// addi r28,r11,16880
	r28.s64 = ctx.r11.s64 + 16880;
	// addi r27,r10,16984
	r27.s64 = ctx.r10.s64 + 16984;
	// blt cr6,0x8240e8d0
	if (ctx.cr6.lt) goto loc_8240E8D0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,17144
	ctx.r5.s64 = ctx.r11.s64 + 17144;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,634
	ctx.r7.s64 = 634;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x8240E8D0;
	sub_8240E308(ctx, base);
loc_8240E8D0:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mulli r30,r30,12
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(12));
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8240e904
	if (ctx.cr6.lt) goto loc_8240E904;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,17072
	ctx.r5.s64 = ctx.r11.s64 + 17072;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,634
	ctx.r7.s64 = 634;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x8240E904;
	sub_8240E308(ctx, base);
loc_8240E904:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r9,r29
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r29.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8240e810
	ctx.lr = 0x8240E924;
	sub_8240E810(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824101D0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e78
	ctx.lr = 0x824101D8;
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,11(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 11);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x824106ac
	if (!ctx.cr6.eq) goto loc_824106AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r7,104(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r9,104(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// rlwinm r8,r7,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8241021c
	if (ctx.cr6.eq) goto loc_8241021C;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x824106ac
	if (!ctx.cr6.eq) goto loc_824106AC;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x824106ac
	if (!ctx.cr6.eq) goto loc_824106AC;
loc_8241021C:
	// lwz r8,108(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r9,108(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// rlwinm r6,r8,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82410240
	if (ctx.cr6.eq) goto loc_82410240;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x824106ac
	if (!ctx.cr6.eq) goto loc_824106AC;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x824106ac
	if (!ctx.cr6.eq) goto loc_824106AC;
loc_82410240:
	// lwz r10,112(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x824106ac
	if (!ctx.cr6.eq) goto loc_824106AC;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x824106ac
	if (!ctx.cr6.eq) goto loc_824106AC;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// ble cr6,0x82410288
	if (!ctx.cr6.gt) goto loc_82410288;
	// clrlwi. r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82410288
	if (ctx.cr0.eq) goto loc_82410288;
	// lwz r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r9,120(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r10,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
loc_82410288:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x824102a4
	if (!ctx.cr6.gt) goto loc_824102A4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
loc_824102A4:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8241042c
	if (!ctx.cr0.eq) goto loc_8241042C;
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// xor r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// rlwinm. r8,r8,0,24,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8241042c
	if (!ctx.cr0.eq) goto loc_8241042C;
	// lwz r5,104(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// blt cr6,0x8241042c
	if (ctx.cr6.lt) goto loc_8241042C;
	// lwz r6,108(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// blt cr6,0x8241042c
	if (ctx.cr6.lt) goto loc_8241042C;
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8241042c
	if (!ctx.cr6.eq) goto loc_8241042C;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8241042c
	if (!ctx.cr6.eq) goto loc_8241042C;
	// lis r9,10240
	ctx.r9.s64 = 671088640;
	// ori r9,r9,258
	ctx.r9.u64 = ctx.r9.u64 | 258;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x824103b4
	if (ctx.cr6.gt) goto loc_824103B4;
	// beq cr6,0x824103a8
	if (ctx.cr6.eq) goto loc_824103A8;
	// lis r9,1168
	ctx.r9.s64 = 76546048;
	// ori r9,r9,258
	ctx.r9.u64 = ctx.r9.u64 | 258;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824103a8
	if (ctx.cr6.eq) goto loc_824103A8;
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// ori r9,r9,330
	ctx.r9.u64 = ctx.r9.u64 | 330;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8241039c
	if (ctx.cr6.eq) goto loc_8241039C;
	// addis r10,r10,-6184
	ctx.r10.s64 = ctx.r10.s64 + -405274624;
	// addic. r10,r10,-323
	ctx.xer.ca = ctx.r10.u32 > 322;
	ctx.r10.s64 = ctx.r10.s64 + -323;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82410390
	if (ctx.cr0.eq) goto loc_82410390;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// beq cr6,0x82410384
	if (ctx.cr6.eq) goto loc_82410384;
	// cmplwi cr6,r10,67
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 67, ctx.xer);
	// beq cr6,0x8241035c
	if (ctx.cr6.eq) goto loc_8241035C;
	// lis r9,504
	ctx.r9.s64 = 33030144;
	// ori r9,r9,67
	ctx.r9.u64 = ctx.r9.u64 | 67;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8241042c
	if (!ctx.cr6.eq) goto loc_8241042C;
loc_8241035C:
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lwz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,96(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,22596(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 22596);
loc_8241036C:
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r3,32(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r8,96(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 96);
	// bctrl 
	ctx.lr = 0x82410380;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8241041c
	goto loc_8241041C;
loc_82410384:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d7d70
	ctx.lr = 0x8241038C;
	sub_823D7D70(ctx, base);
	// b 0x8241041c
	goto loc_8241041C;
loc_82410390:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d7c68
	ctx.lr = 0x82410398;
	sub_823D7C68(ctx, base);
	// b 0x8241041c
	goto loc_8241041C;
loc_8241039C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d8038
	ctx.lr = 0x824103A4;
	sub_823D8038(ctx, base);
	// b 0x8241041c
	goto loc_8241041C;
loc_824103A8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d7e70
	ctx.lr = 0x824103B0;
	sub_823D7E70(ctx, base);
	// b 0x8241041c
	goto loc_8241041C;
loc_824103B4:
	// addis r10,r10,-10280
	ctx.r10.s64 = ctx.r10.s64 + -673710080;
	// addic. r10,r10,-323
	ctx.xer.ca = ctx.r10.u32 > 322;
	ctx.r10.s64 = ctx.r10.s64 + -323;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82410414
	if (ctx.cr0.eq) goto loc_82410414;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82410408
	if (ctx.cr6.eq) goto loc_82410408;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// beq cr6,0x824103fc
	if (ctx.cr6.eq) goto loc_824103FC;
	// cmplwi cr6,r10,67
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 67, ctx.xer);
	// beq cr6,0x824103e8
	if (ctx.cr6.eq) goto loc_824103E8;
	// lis r9,504
	ctx.r9.s64 = 33030144;
	// ori r9,r9,67
	ctx.r9.u64 = ctx.r9.u64 | 67;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8241042c
	if (!ctx.cr6.eq) goto loc_8241042C;
loc_824103E8:
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lwz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,96(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,22600(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 22600);
	// b 0x8241036c
	goto loc_8241036C;
loc_824103FC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d7f38
	ctx.lr = 0x82410404;
	sub_823D7F38(ctx, base);
	// b 0x8241041c
	goto loc_8241041C;
loc_82410408:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8240f958
	ctx.lr = 0x82410410;
	sub_8240F958(ctx, base);
	// b 0x8241041c
	goto loc_8241041C;
loc_82410414:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d7b68
	ctx.lr = 0x8241041C;
	sub_823D7B68(ctx, base);
loc_8241041C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8241042c
	if (ctx.cr6.lt) goto loc_8241042C;
loc_82410424:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824106b4
	goto loc_824106B4;
loc_8241042C:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// li r30,-1
	r30.s64 = -1;
	// ori r31,r10,65535
	r31.u64 = ctx.r10.u64 | 65535;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x82410450
	if (!ctx.cr6.gt) goto loc_82410450;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82410450:
	// bl 0x822c80d0
	ctx.lr = 0x82410454;
	sub_822C80D0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8241046c
	if (!ctx.cr6.eq) goto loc_8241046C;
loc_82410460:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824106b4
	goto loc_824106B4;
loc_8241046C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x824104a0
	if (!ctx.cr6.eq) goto loc_824104A0;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x82410490
	if (!ctx.cr6.gt) goto loc_82410490;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82410490:
	// bl 0x822c80d0
	ctx.lr = 0x82410494;
	sub_822C80D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x824104cc
	goto loc_824104CC;
loc_824104A0:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x824104b4
	if (!ctx.cr6.gt) goto loc_824104B4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824104B4:
	// bl 0x822c80d0
	ctx.lr = 0x824104B8;
	sub_822C80D0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r3
	r30.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_824104CC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824104e0
	if (!ctx.cr6.eq) goto loc_824104E0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822c80a8
	ctx.lr = 0x824104DC;
	sub_822C80A8(ctx, base);
	// b 0x82410460
	goto loc_82410460;
loc_824104E0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x824104fc
	if (!ctx.cr6.eq) goto loc_824104FC;
	// mr r27,r31
	r27.u64 = r31.u64;
	// mr r26,r30
	r26.u64 = r30.u64;
	// b 0x82410504
	goto loc_82410504;
loc_824104FC:
	// addi r27,r31,16
	r27.s64 = r31.s64 + 16;
	// addi r26,r30,16
	r26.s64 = r30.s64 + 16;
loc_82410504:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r25,0
	r25.s64 = 0;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82410698
	if (!ctx.cr6.gt) goto loc_82410698;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	f31.f64 = double(temp.f32);
loc_82410520:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r28,r25,1,0,30
	r28.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82410544;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// beq cr6,0x8241056c
	if (ctx.cr6.eq) goto loc_8241056C;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r28,1
	ctx.r4.s64 = r28.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8241056C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241056C:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82410664
	if (!ctx.cr6.gt) goto loc_82410664;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_82410584:
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + r27.u64;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + r31.u64;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + r30.u64;
	// lfsx f13,r11,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	ctx.f13.f64 = double(temp.f32);
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + r26.u64;
	// lfsx f0,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f11,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f10,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfsx f10,r11,r30
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfsx f10,r11,r26
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f9,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fadds f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fadds f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fadds f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f0,f11,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 * f31.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,8(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r7,12(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r6,0(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82410584
	if (ctx.cr6.lt) goto loc_82410584;
loc_82410664:
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82410684;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82410520
	if (ctx.cr6.lt) goto loc_82410520;
loc_82410698:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x824106A0;
	sub_822C80A8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822c80a8
	ctx.lr = 0x824106A8;
	sub_822C80A8(ctx, base);
	// b 0x82410424
	goto loc_82410424;
loc_824106AC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_824106B4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8241FEE8) {
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
	ctx.lr = 0x8241FEF0;
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
	// bne cr6,0x8241ff30
	if (!ctx.cr6.eq) goto loc_8241FF30;
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
	// li r7,2102
	ctx.r7.s64 = 2102;
	// bl 0x8240e308
	ctx.lr = 0x8241FF30;
	sub_8240E308(ctx, base);
loc_8241FF30:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e880
	ctx.lr = 0x8241FF40;
	sub_8240E880(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8241ffa8
	if (!ctx.cr6.eq) goto loc_8241FFA8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8241ff64
	if (ctx.cr6.eq) goto loc_8241FF64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8240e930
	ctx.lr = 0x8241FF64;
	sub_8240E930(ctx, base);
loc_8241FF64:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8241ffa0
	if (ctx.cr6.eq) goto loc_8241FFA0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8241ffa0
	if (ctx.cr6.eq) goto loc_8241FFA0;
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
	// li r6,47
	ctx.r6.s64 = 47;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,188(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// bctrl 
	ctx.lr = 0x8241FFA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241FFA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82420004
	goto loc_82420004;
loc_8241FFA8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8241ffc4
	if (ctx.cr6.eq) goto loc_8241FFC4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8240e930
	ctx.lr = 0x8241FFC4;
	sub_8240E930(ctx, base);
loc_8241FFC4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82420000
	if (ctx.cr6.eq) goto loc_82420000;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82420000
	if (ctx.cr6.eq) goto loc_82420000;
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
	// li r6,47
	ctx.r6.s64 = 47;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,188(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// bctrl 
	ctx.lr = 0x82420000;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82420000:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82420004:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82422960) {
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
	ctx.lr = 0x82422968;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,16(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r23,r11,16880
	r23.s64 = ctx.r11.s64 + 16880;
	// addi r22,r10,-17264
	r22.s64 = ctx.r10.s64 + -17264;
	// beq cr6,0x82422a2c
	if (ctx.cr6.eq) goto loc_82422A2C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,172(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// bl 0x824246f8
	ctx.lr = 0x8242299C;
	sub_824246F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824229d4
	if (!ctx.cr0.eq) goto loc_824229D4;
	// lwz r5,56(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 56);
	// lwz r4,80(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 80);
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// bl 0x82424730
	ctx.lr = 0x824229B4;
	sub_82424730(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,128(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 128);
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824229D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824229ec
	goto loc_824229EC;
loc_824229D4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,128(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 128);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824229EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824229EC:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82422a10
	if (!ctx.cr6.eq) goto loc_82422A10;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// addi r5,r11,-17072
	ctx.r5.s64 = ctx.r11.s64 + -17072;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,649
	ctx.r7.s64 = 649;
	// bl 0x8240e308
	ctx.lr = 0x82422A10;
	sub_8240E308(ctx, base);
loc_82422A10:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82427208
	ctx.lr = 0x82422A1C;
	sub_82427208(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824288c8
	ctx.lr = 0x82422A2C;
	sub_824288C8(ctx, base);
loc_82422A2C:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// li r26,1
	r26.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82422cec
	if (ctx.cr6.lt) goto loc_82422CEC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r28,r29,84
	r28.s64 = r29.s64 + 84;
	// addi r27,r11,-17276
	r27.s64 = ctx.r11.s64 + -17276;
	// addi r24,r10,13408
	r24.s64 = ctx.r10.s64 + 13408;
	// addi r25,r9,-17088
	r25.s64 = ctx.r9.s64 + -17088;
loc_82422A58:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r10,26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 26, ctx.xer);
	// beq cr6,0x82422a6c
	if (ctx.cr6.eq) goto loc_82422A6C;
	// cmpwi cr6,r10,27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 27, ctx.xer);
	// bne cr6,0x82422a84
	if (!ctx.cr6.eq) goto loc_82422A84;
loc_82422A6C:
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,1508(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 1508);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1508(r9)
	REX_STORE_U32(ctx.r9.u32 + 1508, ctx.r11.u32);
	// stw r11,-24(r28)
	REX_STORE_U32(r28.u32 + -24, ctx.r11.u32);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
loc_82422A84:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824246f8
	ctx.lr = 0x82422A94;
	sub_824246F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82422acc
	if (!ctx.cr0.eq) goto loc_82422ACC;
	// lwz r5,-24(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + -24);
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// bl 0x82424730
	ctx.lr = 0x82422AAC;
	sub_82424730(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,-16(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + -16);
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82422AC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82422ae4
	goto loc_82422AE4;
loc_82422ACC:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,-16(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + -16);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82422AE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82422AE4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82427258
	ctx.lr = 0x82422AF4;
	sub_82427258(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824288c8
	ctx.lr = 0x82422B04;
	sub_824288C8(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bne cr6,0x82422b88
	if (!ctx.cr6.eq) goto loc_82422B88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82422918
	ctx.lr = 0x82422B18;
	sub_82422918(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// li r3,62
	ctx.r3.s64 = 62;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x824284c0
	ctx.lr = 0x82422B28;
	sub_824284C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stb r11,2073(r31)
	REX_STORE_U8(r31.u32 + 2073, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// bl 0x824288c8
	ctx.lr = 0x82422B40;
	sub_824288C8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824288c8
	ctx.lr = 0x82422B50;
	sub_824288C8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,132(r20)
	REX_STORE_U32(r20.u32 + 132, ctx.r11.u32);
	// bl 0x82422960
	ctx.lr = 0x82422B64;
	sub_82422960(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 164);
	// bl 0x82429bb0
	ctx.lr = 0x82422B70;
	sub_82429BB0(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x824284f0
	ctx.lr = 0x82422B78;
	sub_824284F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82422c48
	if (!ctx.cr0.eq) goto loc_82422C48;
	// li r7,704
	ctx.r7.s64 = 704;
	// b 0x82422c34
	goto loc_82422C34;
loc_82422B88:
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bne cr6,0x82422c48
	if (!ctx.cr6.eq) goto loc_82422C48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82422918
	ctx.lr = 0x82422B98;
	sub_82422918(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x824284c0
	ctx.lr = 0x82422BA8;
	sub_824284C0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// bl 0x824288c8
	ctx.lr = 0x82422BB8;
	sub_824288C8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824288c8
	ctx.lr = 0x82422BC8;
	sub_824288C8(ctx, base);
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82422BE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82422C08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82422960
	ctx.lr = 0x82422C14;
	sub_82422960(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 164);
	// bl 0x82429bb0
	ctx.lr = 0x82422C20;
	sub_82429BB0(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x824284f0
	ctx.lr = 0x82422C28;
	sub_824284F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82422c48
	if (!ctx.cr0.eq) goto loc_82422C48;
	// li r7,718
	ctx.r7.s64 = 718;
loc_82422C34:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x82422C48;
	sub_8240E308(ctx, base);
loc_82422C48:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// lwzx r11,r11,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r24.u32);
	// rlwinm. r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82422cd8
	if (!ctx.cr0.eq) goto loc_82422CD8;
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82422cd8
	if (ctx.cr0.eq) goto loc_82422CD8;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82422cd8
	if (ctx.cr6.eq) goto loc_82422CD8;
	// lbz r11,128(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 128);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82422c84
	if (!ctx.cr6.eq) goto loc_82422C84;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82422c88
	goto loc_82422C88;
loc_82422C84:
	// lbz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 48);
loc_82422C88:
	// stb r11,48(r28)
	REX_STORE_U8(r28.u32 + 48, ctx.r11.u8);
	// lbz r11,129(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 129);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82422c9c
	if (ctx.cr6.eq) goto loc_82422C9C;
	// lbz r11,49(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 49);
loc_82422C9C:
	// stb r11,49(r28)
	REX_STORE_U8(r28.u32 + 49, ctx.r11.u8);
	// lbz r11,130(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 130);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82422cb4
	if (!ctx.cr6.eq) goto loc_82422CB4;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82422cb8
	goto loc_82422CB8;
loc_82422CB4:
	// lbz r11,50(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 50);
loc_82422CB8:
	// stb r11,50(r28)
	REX_STORE_U8(r28.u32 + 50, ctx.r11.u8);
	// lbz r11,131(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 131);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82422cd0
	if (!ctx.cr6.eq) goto loc_82422CD0;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82422cd4
	goto loc_82422CD4;
loc_82422CD0:
	// lbz r11,51(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 51);
loc_82422CD4:
	// stb r11,51(r28)
	REX_STORE_U8(r28.u32 + 51, ctx.r11.u8);
loc_82422CD8:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82422a58
	if (!ctx.cr6.gt) goto loc_82422A58;
loc_82422CEC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_824345D0) {
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
	// bl 0x8242d020
	ctx.lr = 0x824345F0;
	sub_8242D020(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82434634
	if (ctx.cr0.eq) goto loc_82434634;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82434620
	if (ctx.cr6.eq) goto loc_82434620;
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// b 0x82434624
	goto loc_82434624;
loc_82434620:
	// stw r3,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r3.u32);
loc_82434624:
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// stw r3,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r11.u32);
loc_82434634:
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

DEFINE_REX_FUNC(sub_82435250) {
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
	ctx.lr = 0x82435258;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// li r27,0
	r27.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r27
	r30.u64 = r27.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824353c4
	if (ctx.cr6.eq) goto loc_824353C4;
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8243528c
	if (ctx.cr0.eq) goto loc_8243528C;
	// lis r30,-30570
	r30.s64 = -2003435520;
	// ori r30,r30,1
	r30.u64 = r30.u64 | 1;
	// b 0x824353c4
	goto loc_824353C4;
loc_8243528C:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r4.u32);
	// stw r4,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r4.u32);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// bl 0x824447b8
	ctx.lr = 0x824352A4;
	sub_824447B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824353c4
	if (ctx.cr0.lt) goto loc_824353C4;
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824352c4
	if (ctx.cr6.eq) goto loc_824352C4;
	// bl 0x824428f8
	ctx.lr = 0x824352BC;
	sub_824428F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x824352c8
	goto loc_824352C8;
loc_824352C4:
	// mr r30,r27
	r30.u64 = r27.u64;
loc_824352C8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x824353c4
	if (ctx.cr6.lt) goto loc_824353C4;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lis r10,4919
	ctx.r10.s64 = 322371584;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r28,r10,61441
	r28.u64 = ctx.r10.u64 | 61441;
	// beq 0x82435398
	if (ctx.cr0.eq) goto loc_82435398;
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r31,172
	r29.s64 = r31.s64 + 172;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82435304;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,172(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// bl 0x8242c888
	ctx.lr = 0x82435310;
	sub_8242C888(ctx, base);
	// stw r27,172(r31)
	REX_STORE_U32(r31.u32 + 172, r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// bl 0x8242f340
	ctx.lr = 0x82435320;
	sub_8242F340(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824353c4
	if (ctx.cr0.lt) goto loc_824353C4;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// li r8,32
	ctx.r8.s64 = 32;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,180(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 180);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82443700
	ctx.lr = 0x8243534C;
	sub_82443700(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82435368;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x824353c4
	if (ctx.cr6.lt) goto loc_824353C4;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82435398
	if (!ctx.cr6.eq) goto loc_82435398;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82435394;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82435398:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x824353c4
	if (ctx.cr6.lt) goto loc_824353C4;
	// lwz r3,180(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 180);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824353C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_824353C4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82438F18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82438F20;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
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
	ctx.lr = 0x82438F44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82435b40
	ctx.lr = 0x82438F4C;
	sub_82435B40(ctx, base);
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
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x8242c3b0
	ctx.lr = 0x82438F68;
	sub_8242C3B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82438f84
	if (ctx.cr0.eq) goto loc_82438F84;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82438F80;
	sub_822D4FA0(ctx, base);
	// b 0x82438f88
	goto loc_82438F88;
loc_82438F84:
	// li r31,0
	r31.s64 = 0;
loc_82438F88:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82438ffc
	if (ctx.cr6.eq) goto loc_82438FFC;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82438fc8
	if (ctx.cr6.eq) goto loc_82438FC8;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82438fc8
	if (!ctx.cr6.eq) goto loc_82438FC8;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82438fc8
	if (ctx.cr6.eq) goto loc_82438FC8;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_82438FC8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,536(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 536);
	// bl 0x8247c0e8
	ctx.lr = 0x82438FD4;
	sub_8247C0E8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x82438fe8
	if (!ctx.cr0.lt) goto loc_82438FE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x82438FE4;
	sub_82473600(ctx, base);
	// b 0x82439024
	goto loc_82439024;
loc_82438FE8:
	// addi r3,r29,188
	ctx.r3.s64 = r29.s64 + 188;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x82435ac0
	ctx.lr = 0x82438FF4;
	sub_82435AC0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82439008
	if (!ctx.cr0.eq) goto loc_82439008;
loc_82438FFC:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x82439024
	goto loc_82439024;
loc_82439008:
	// lwz r3,184(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 184);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82439020;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82439024:
	// lwz r11,88(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 88);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243903C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8243C8F0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,176(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243CA2C) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243CBD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,56(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243D768) {
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
	ctx.lr = 0x8243D770;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8243d7e0
	if (!ctx.cr6.eq) goto loc_8243D7E0;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r28,0(r5)
	r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r27,0(r7)
	r27.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243D7A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r9,40(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 40);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mullw r5,r10,r9
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243D7CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bctrl 
	ctx.lr = 0x8243D7E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243D7E0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8243FEB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8243FEC0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x8242b7d0
	ctx.lr = 0x8243FEDC;
	sub_8242B7D0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x8243ff58
	if (ctx.cr0.lt) goto loc_8243FF58;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,36(r31)
	REX_STORE_U16(r31.u32 + 36, ctx.r10.u16);
	// lhz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,38(r31)
	REX_STORE_U16(r31.u32 + 38, ctx.r11.u16);
	// lhz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 12);
	// sth r11,40(r31)
	REX_STORE_U16(r31.u32 + 40, ctx.r11.u16);
	// bl 0x824536e0
	ctx.lr = 0x8243FF10;
	sub_824536E0(ctx, base);
	// lhz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 40);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// mullw r4,r11,r10
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r4,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r4.u32);
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// addi r3,r9,7712
	ctx.r3.s64 = ctx.r9.s64 + 7712;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,10
	ctx.r5.u64 = ctx.r5.u64 | 10;
	// bl 0x8242c3b0
	ctx.lr = 0x8243FF38;
	sub_8242C3B0(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8243ff64
	if (ctx.cr0.eq) goto loc_8243FF64;
	// lhz r4,14(r30)
	ctx.r4.u64 = REX_LOAD_U16(r30.u32 + 14);
	// li r28,0
	r28.s64 = 0;
	// lhz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 36);
	// bl 0x82453678
	ctx.lr = 0x8243FF54;
	sub_82453678(ctx, base);
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
loc_8243FF58:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_8243FF64:
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
	// b 0x8243ff58
	goto loc_8243FF58;
}

DEFINE_REX_FUNC(sub_82441FD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82441FE0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82442008
	if (ctx.cr6.eq) goto loc_82442008;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82442068
	goto loc_82442068;
loc_82442008:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822d5870
	ctx.lr = 0x82442020;
	sub_822D5870(ctx, base);
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// stw r30,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// li r9,52
	ctx.r9.s64 = 52;
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// addi r11,r11,4912
	ctx.r11.s64 = ctx.r11.s64 + 4912;
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// addi r10,r10,-29184
	ctx.r10.s64 = ctx.r10.s64 + -29184;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247c1f0
	ctx.lr = 0x82442058;
	sub_8247C1F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82442068
	if (ctx.cr0.lt) goto loc_82442068;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_82442068:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_824439A8) {
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
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824439D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824439F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// bl 0x8242c6e0
	ctx.lr = 0x824439F8;
	sub_8242C6E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82443a0c
	if (!ctx.cr0.eq) goto loc_82443A0C;
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82443a3c
	if (ctx.cr6.eq) goto loc_82443A3C;
loc_82443A0C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82443A20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
	ctx.lr = 0x82443A38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82443b04
	goto loc_82443B04;
loc_82443A3C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82443A50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x82443a64
	if (!ctx.cr6.eq) goto loc_82443A64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// bl 0x8242cb40
	ctx.lr = 0x82443A64;
	sub_8242CB40(ctx, base);
loc_82443A64:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// bl 0x8242e260
	ctx.lr = 0x82443A70;
	sub_8242E260(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82443A84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
	ctx.lr = 0x82443A9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r3,180(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82443AB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82443AC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// bl 0x8242c890
	ctx.lr = 0x82443AD0;
	sub_8242C890(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r3,180(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82443AE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82443B00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82473600
	ctx.lr = 0x82443B04;
	sub_82473600(ctx, base);
loc_82443B04:
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

DEFINE_REX_FUNC(sub_8244FE88) {
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
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e6c
	ctx.lr = 0x8244FE90;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// dcbt r0,r3
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f13,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r11,4
	ctx.r11.s64 = 4;
	// vspltisw128 v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// rlwinm r9,r5,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF0;
	// lfd f0,-25984(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -25984);
	// li r7,16
	ctx.r7.s64 = 16;
	// fmul f12,f1,f0
	ctx.f12.f64 = ctx.f1.f64 * ctx.f0.f64;
	// rlwinm r26,r5,0,28,29
	r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xC;
	// fmul f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 * ctx.f0.f64;
	// clrlwi r25,r5,30
	r25.u64 = ctx.r5.u32 & 0x3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// fctidz f10,f12
	ctx.f10.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fctidz f9,f11
	ctx.f9.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// stfd f9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lvlx128 v56,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// ld r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// rldicr r28,r10,2,61
	r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// vspltw128 v27,v56,0
	simde_mm_store_si128((simde__m128i*)v27.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), 0xFF));
	// lvlx128 v55,r11,r6
	temp.u32 = ctx.r11.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v55,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0xFF));
	// vsldoi128 v54,v59,v27,4
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)v27.u8), 12));
	// vadduwm v28,v27,v27
	simde_mm_store_si128((simde__m128i*)v28.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)v27.u32), simde_mm_load_si128((simde__m128i*)v27.u32)));
	// vsldoi128 v0,v54,v27,4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)v27.u8), 12));
	// vadduwm v10,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)v28.u32), simde_mm_load_si128((simde__m128i*)v28.u32)));
	// vadduwm v12,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)v28.u32)));
	// vadduwm v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vadduwm v12,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vadduwm v13,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vadduwm v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vadduwm v10,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// beq cr6,0x82450140
	if (ctx.cr6.eq) goto loc_82450140;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// vspltisw128 v59,1
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_set1_epi32(int(0x1)));
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// rlwinm r8,r8,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// li r27,128
	r27.s64 = 128;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8244FF58:
	// add r8,r28,r3
	ctx.r8.u64 = r28.u64 + ctx.r3.u64;
	// rldicl r30,r3,32,32
	r30.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// clrldi r5,r8,32
	ctx.r5.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// rldicl r8,r8,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF;
	// add r6,r10,r3
	ctx.r6.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rldicl r29,r5,32,32
	r29.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + r31.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// rldicl r22,r5,32,32
	r22.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF;
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r22,2,0,29
	r29.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r30,r8
	r30.u64 = r30.u64 + ctx.r8.u64;
	// lvlx128 v53,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v52,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r3,r29,r8
	ctx.r3.u64 = r29.u64 + ctx.r8.u64;
	// rldicl r22,r6,32,32
	r22.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF;
	// vsldoi128 v51,v61,v53,4
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), 12));
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// vsldoi128 v50,v60,v52,4
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), 12));
	// lvlx128 v49,r29,r8
	temp.u32 = r29.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lvlx128 v48,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rldicl r29,r5,32,32
	r29.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF;
	// lvlx128 v47,r30,r11
	temp.u32 = r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r30,r22,2,0,29
	r30.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v46,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r3,r30,r31
	ctx.r3.u64 = r30.u64 + r31.u64;
	// vsldoi128 v45,v63,v48,4
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), 12));
	// rldicl r22,r5,32,32
	r22.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF;
	// vsldoi128 v44,v62,v47,4
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), 12));
	// rldicl r21,r6,32,32
	r21.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF;
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// vsldoi128 v43,v45,v49,4
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), 12));
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lvlx128 v42,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r30,r29,r8
	r30.u64 = r29.u64 + ctx.r8.u64;
	// lvlx128 v41,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r3,r22,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// vsldoi128 v40,v44,v46,4
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), 12));
	// rldicl r22,r5,32,32
	r22.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// lvlx128 v37,r29,r8
	temp.u32 = r29.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v39,v51,v42,4
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), 12));
	// vsldoi128 v38,v50,v41,4
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 12));
	// lvlx128 v36,r30,r11
	temp.u32 = r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v35,v43,v37,4
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), 12));
	// rlwinm r30,r22,2,0,29
	r30.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// vsldoi128 v34,v40,v36,4
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8), 12));
	// lvlx128 v33,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v32,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r3,r10,r6
	ctx.r3.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r6,r21,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// vsldoi128 v63,v35,v33,4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8), 12));
	// rldicl r29,r3,32,32
	r29.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// vsldoi128 v62,v34,v32,4
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8), 12));
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + r31.u64;
	// clrldi r3,r5,32
	ctx.r3.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// lvlx128 v61,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// vsldoi128 v56,v39,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + r31.u64;
	// vsldoi128 v55,v38,v60,4
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 12));
	// add r31,r30,r8
	r31.u64 = r30.u64 + ctx.r8.u64;
	// lvlx128 v54,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v53,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v61,v56,v54,4
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), 12));
	// vsldoi128 v60,v55,v53,4
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), 12));
	// dcbt r31,r27
	// vupkhsb128 v52,v61,v96
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v61.s16), simde_mm_load_si128((simde__m128i*)ctx.v61.s16))));
	// vsrw128 v51,v0,v59
	ctx.v51.u32[0] = ctx.v0.u32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v51.u32[1] = ctx.v0.u32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v51.u32[2] = ctx.v0.u32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v51.u32[3] = ctx.v0.u32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vupkhsb128 v50,v60,v96
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v60.s16), simde_mm_load_si128((simde__m128i*)ctx.v60.s16))));
	// vsrw128 v49,v12,v59
	ctx.v49.u32[0] = ctx.v12.u32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v49.u32[1] = ctx.v12.u32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v49.u32[2] = ctx.v12.u32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v49.u32[3] = ctx.v12.u32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vupklsb128 v48,v61,v96
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.s16)));
	// vsrw128 v47,v11,v59
	ctx.v47.u32[0] = ctx.v11.u32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v47.u32[1] = ctx.v11.u32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v47.u32[2] = ctx.v11.u32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v47.u32[3] = ctx.v11.u32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vupklsb128 v46,v60,v96
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.s16)));
	// vcsxwfp128 v9,v52,15
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vupkhsb128 v45,v63,v96
	simde_mm_store_si128((simde__m128i*)ctx.v45.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v63.s16), simde_mm_load_si128((simde__m128i*)ctx.v63.s16))));
	// vcsxwfp128 v44,v50,15
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vupkhsb128 v43,v62,v96
	simde_mm_store_si128((simde__m128i*)ctx.v43.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v62.s16), simde_mm_load_si128((simde__m128i*)ctx.v62.s16))));
	// vcsxwfp128 v8,v48,15
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vupklsb128 v42,v63,v96
	simde_mm_store_si128((simde__m128i*)ctx.v42.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.s16)));
	// vcsxwfp128 v41,v46,15
	simde_mm_store_ps(ctx.v41.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vupklsb128 v40,v62,v96
	simde_mm_store_si128((simde__m128i*)ctx.v40.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.s16)));
	// vcuxwfp128 v4,v51,31
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v51.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v7,v45,15
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v45.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vsrw128 v39,v10,v59
	ctx.v39.u32[0] = ctx.v10.u32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v39.u32[1] = ctx.v10.u32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v39.u32[2] = ctx.v10.u32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v39.u32[3] = ctx.v10.u32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vcsxwfp128 v38,v43,15
	simde_mm_store_ps(ctx.v38.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// addi r8,r9,-16
	ctx.r8.s64 = ctx.r9.s64 + -16;
	// vcsxwfp128 v6,v42,15
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v42.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// addi r6,r9,16
	ctx.r6.s64 = ctx.r9.s64 + 16;
	// vcsxwfp128 v37,v40,15
	simde_mm_store_ps(ctx.v37.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v40.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vadduwm v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vcuxwfp128 v2,v49,31
	simde_mm_store_ps(ctx.v2.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v49.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// vadduwm v12,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vcuxwfp128 v31,v47,31
	simde_mm_store_ps(v31.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v47.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// vadduwm v11,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vcuxwfp128 v29,v39,31
	simde_mm_store_ps(v29.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v39.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// vadduwm v10,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vsubfp128 v5,v44,v9
	simde_mm_store_ps(ctx.v5.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vsubfp128 v3,v41,v8
	simde_mm_store_ps(ctx.v3.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vsubfp128 v1,v38,v7
	simde_mm_store_ps(ctx.v1.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v7.f32)));
	// vsubfp128 v30,v37,v6
	simde_mm_store_ps(v30.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v9,v5,v4,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v8,v3,v2,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp v7,v1,v31,v7
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(v31.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v6,v30,v29,v6
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v30.f32), simde_mm_load_ps(v29.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// stvlx v9,0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvrx v9,r4,r7
	ea = ctx.r4.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v9.u8[i]);
	// addi r4,r4,64
	ctx.r4.s64 = ctx.r4.s64 + 64;
	// stvlx v8,0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// stvrx v8,r8,r7
	ea = ctx.r8.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v8.u8[i]);
	// stvlx v7,0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// stvrx v7,r9,r7
	ea = ctx.r9.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v7.u8[i]);
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// stvlx v6,0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvrx v6,r6,r7
	ea = ctx.r6.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v6.u8[i]);
	// bdnz 0x8244ff58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244FF58;
loc_82450140:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824501e8
	if (ctx.cr6.eq) goto loc_824501E8;
	// addi r9,r26,-1
	ctx.r9.s64 = r26.s64 + -1;
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x1)));
	// li r6,32
	ctx.r6.s64 = 32;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82450160:
	// rldicl r8,r3,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rldicl r5,r9,32,32
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rldicl r30,r9,32,32
	r30.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// clrldi r3,r9,32
	ctx.r3.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lvlx128 v36,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v35,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// vsldoi128 v34,v58,v36,4
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8), 12));
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// vsldoi128 v33,v57,v35,4
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8), 12));
	// add r31,r9,r31
	r31.u64 = ctx.r9.u64 + r31.u64;
	// lvlx128 v32,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v58,v34,v32,4
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8), 12));
	// vsldoi128 v57,v33,v62,4
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 12));
	// dcbt r31,r6
	// vupklsb128 v61,v58,v96
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.s16)));
	// vsrw128 v60,v0,v63
	ctx.v60.u32[0] = ctx.v0.u32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v60.u32[1] = ctx.v0.u32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v60.u32[2] = ctx.v0.u32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v60.u32[3] = ctx.v0.u32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vupklsb128 v59,v57,v96
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.s16)));
	// vadduwm v0,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)v28.u32)));
	// vcsxwfp128 v13,v61,15
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v56,v59,15
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vcuxwfp128 v11,v60,31
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// vsubfp128 v12,v56,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v12,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvlx v13,0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvrx v13,r4,r7
	ea = ctx.r4.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// bdnz 0x82450160
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82450160;
loc_824501E8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82450268
	if (ctx.cr6.eq) goto loc_82450268;
	// addi r9,r25,-1
	ctx.r9.s64 = r25.s64 + -1;
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x1)));
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82450204:
	// rldicl r8,r3,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// vsrw128 v55,v0,v63
	ctx.v55.u32[0] = ctx.v0.u32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v55.u32[1] = ctx.v0.u32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v55.u32[2] = ctx.v0.u32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v55.u32[3] = ctx.v0.u32[3] >> (ctx.v63.u8[12] & 0x1F);
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vadduwm v0,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)v27.u32)));
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rldicl r7,r9,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// vcuxwfp128 v11,v55,31
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// clrldi r3,r9,32
	ctx.r3.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r9,r31
	r31.u64 = ctx.r9.u64 + r31.u64;
	// lvlx128 v54,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v53,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v52,v54,v96
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v54.s16), simde_mm_load_si128((simde__m128i*)ctx.v54.s16))));
	// vupkhsb128 v51,v53,v96
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v53.s16), simde_mm_load_si128((simde__m128i*)ctx.v53.s16))));
	// vcsxwfp128 v13,v52,15
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v50,v51,15
	simde_mm_store_ps(ctx.v50.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v51.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vsubfp128 v12,v50,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v12,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vspltw128 v49,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vspltw128 v48,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xAA));
	// stvewx128 v49,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v48,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// bdnz 0x82450204
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82450204;
loc_82450268:
	// bl 0x822d7620
	ctx.lr = 0x8245026C;
	sub_822D7620(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// subf r10,r23,r31
	ctx.r10.u64 = r31.u64 - r23.u64;
	// srawi r3,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 1;
	// lfd f0,-4424(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -4424);
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,0(r24)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r24.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_824730B8) {
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
	ctx.lr = 0x824730C0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824730EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8247329c
	if (ctx.cr0.lt) goto loc_8247329C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8243a608
	ctx.lr = 0x824730FC;
	sub_8243A608(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// beq 0x824732a4
	if (ctx.cr0.eq) goto loc_824732A4;
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// mulli r4,r25,12
	ctx.r4.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(12));
	// ori r11,r11,21845
	ctx.r11.u64 = ctx.r11.u64 | 21845;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82473120
	if (!ctx.cr6.gt) goto loc_82473120;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_82473120:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// addi r26,r11,7712
	r26.s64 = ctx.r11.s64 + 7712;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8242c3b0
	ctx.lr = 0x8247313C;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// beq 0x824732a4
	if (ctx.cr0.eq) goto loc_824732A4;
	// stw r27,60(r31)
	REX_STORE_U32(r31.u32 + 60, r27.u32);
	// clrldi r11,r29,32
	ctx.r11.u64 = r29.u64 & 0xFFFFFFFF;
	// lhz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 12);
	// clrldi r9,r28,32
	ctx.r9.u64 = r28.u64 & 0xFFFFFFFF;
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mulld r11,r8,r11
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r11.u64);
	// divdu r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 ? ctx.r11.u64 / ctx.r9.u64 : 0;
	// tdllei r9,0
	if (ctx.r9.s64 == 0ll || ctx.r9.u64 < 0ull) ppc_trap(ctx, base, 0);
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// lhz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 12);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x824731a0
	if (ctx.cr6.lt) goto loc_824731A0;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// and. r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x824731a0
	if (!ctx.cr0.eq) goto loc_824731A0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824731a4
	if (!ctx.cr6.eq) goto loc_824731A4;
loc_824731A0:
	// li r8,16
	ctx.r8.s64 = 16;
loc_824731A4:
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// divwu r7,r10,r8
	ctx.r7.u64 = uint32_t(ctx.r8.u32 ? ctx.r10.u32 / ctx.r8.u32 : 0);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// subf r8,r8,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r8.u64;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// add r30,r8,r10
	r30.u64 = ctx.r8.u64 + ctx.r10.u64;
	// blt cr6,0x824731dc
	if (ctx.cr6.lt) goto loc_824731DC;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824731dc
	if (!ctx.cr0.eq) goto loc_824731DC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824731e0
	if (!ctx.cr6.eq) goto loc_824731E0;
loc_824731DC:
	// li r11,16
	ctx.r11.s64 = 16;
loc_824731E0:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// mullw r4,r30,r25
	ctx.r4.s64 = int64_t(r30.s32) * int64_t(r25.s32);
	// bl 0x8242c3b0
	ctx.lr = 0x824731F8;
	sub_8242C3B0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824732a4
	if (ctx.cr6.eq) goto loc_824732A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82473270
	if (ctx.cr6.eq) goto loc_82473270;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82473228:
	// lwz r8,56(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r3,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
	// lwz r7,52(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r8,44(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lhz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 12);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r8,r7,r8
	ctx.r8.u64 = uint32_t(ctx.r8.u32 ? ctx.r7.u32 / ctx.r8.u32 : 0);
	// stw r8,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// bdnz 0x82473228
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82473228;
loc_82473270:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r8,r11,-13032
	ctx.r8.s64 = ctx.r11.s64 + -13032;
loc_82473278:
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
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
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
	// bne 0x82473278
	if (!ctx.cr0.eq) goto loc_82473278;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
loc_8247329C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_824732A4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8247329c
	goto loc_8247329C;
}

DEFINE_REX_FUNC(sub_8247ADA8) {
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
	ctx.lr = 0x8247ADB0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8247add4
	if (!ctx.cr6.eq) goto loc_8247ADD4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8247ADD4:
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// beq cr6,0x8247ae04
	if (ctx.cr6.eq) goto loc_8247AE04;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8247ae04
	if (ctx.cr6.eq) goto loc_8247AE04;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8247ae10
	if (ctx.cr6.eq) goto loc_8247AE10;
loc_8247AE04:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec4
	return;
loc_8247AE10:
	// li r23,0
	r23.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// li r5,96
	ctx.r5.s64 = 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r27,r31
	r27.u64 = r31.u64;
	// bl 0x8247a968
	ctx.lr = 0x8247AE30;
	sub_8247A968(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247af54
	if (ctx.cr6.eq) goto loc_8247AF54;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8247AE4C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8247ae4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247AE4C;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r24,88(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r31,80
	ctx.r11.s64 = r31.s64 + 80;
	// addi r25,r31,60
	r25.s64 = r31.s64 + 60;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(r30.s32, 16, ctx.xer);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r24,68(r31)
	REX_STORE_U32(r31.u32 + 68, r24.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r5,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r5.u32);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// stw r9,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r9.u32);
	// stw r8,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r8.u32);
	// stw r7,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r7.u32);
	// stw r6,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r6.u32);
	// bge cr6,0x8247aea4
	if (!ctx.cr6.lt) goto loc_8247AEA4;
	// li r30,16
	r30.s64 = 16;
	// b 0x8247aeb4
	goto loc_8247AEB4;
loc_8247AEA4:
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8247aeb4
	if (!ctx.cr6.gt) goto loc_8247AEB4;
	// lis r30,256
	r30.s64 = 16777216;
loc_8247AEB4:
	// lis r11,2047
	ctx.r11.s64 = 134152192;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8247af2c
	if (ctx.cr6.lt) goto loc_8247AF2C;
	// lis r28,2047
	r28.s64 = 134152192;
	// ori r28,r28,65534
	r28.u64 = r28.u64 | 65534;
loc_8247AECC:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// ble cr6,0x8247aed8
	if (!ctx.cr6.gt) goto loc_8247AED8;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8247AED8:
	// addi r29,r31,52
	r29.s64 = r31.s64 + 52;
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// stw r28,52(r31)
	REX_STORE_U32(r31.u32 + 52, r28.u32);
	// beq cr6,0x8247af60
	if (ctx.cr6.eq) goto loc_8247AF60;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// bl 0x8247c528
	ctx.lr = 0x8247AEF4;
	sub_8247C528(ctx, base);
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8247af60
	if (!ctx.cr6.eq) goto loc_8247AF60;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247af40
	if (ctx.cr6.eq) goto loc_8247AF40;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8247AF20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec4
	return;
loc_8247AF2C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bgt cr6,0x8247aecc
	if (ctx.cr6.gt) goto loc_8247AECC;
	// li r28,-1
	r28.s64 = -1;
	// mr r27,r23
	r27.u64 = r23.u64;
	// b 0x8247aed8
	goto loc_8247AED8;
loc_8247AF40:
	// bl 0x8220fda0
	ctx.lr = 0x8247AF44;
	sub_8220FDA0(ctx, base);
	// bl 0x8220fda0
	ctx.lr = 0x8247AF48;
	sub_8220FDA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// bl 0x8220ecf0
	ctx.lr = 0x8247AF54;
	sub_8220ECF0(ctx, base);
loc_8247AF54:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec4
	return;
loc_8247AF60:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x8247afb8
	if (ctx.cr6.eq) goto loc_8247AFB8;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x8247c528
	ctx.lr = 0x8247AF70;
	sub_8247C528(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8247afb8
	if (!ctx.cr6.eq) goto loc_8247AFB8;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247af8c
	if (ctx.cr6.eq) goto loc_8247AF8C;
	// bl 0x82209660
	ctx.lr = 0x8247AF8C;
	sub_82209660(ctx, base);
loc_8247AF8C:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247af40
	if (ctx.cr6.eq) goto loc_8247AF40;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8247AFAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec4
	return;
loc_8247AFB8:
	// lwz r28,48(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 48);
loc_8247AFBC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8247b018
	if (ctx.cr6.lt) goto loc_8247B018;
	// beq cr6,0x8247b140
	if (ctx.cr6.eq) goto loc_8247B140;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8247afd8
	if (!ctx.cr6.gt) goto loc_8247AFD8;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_8247AFD8:
	// lwsync 
	// subf r10,r28,r11
	ctx.r10.u64 = ctx.r11.u64 - r28.u64;
loc_8247AFE0:
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
	// bne cr6,0x8247b004
	if (!ctx.cr6.eq) goto loc_8247B004;
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
	// bne 0x8247afe0
	if (!ctx.cr0.eq) goto loc_8247AFE0;
	// b 0x8247b00c
	goto loc_8247B00C;
loc_8247B004:
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
loc_8247B00C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8247afbc
	if (!ctx.cr6.eq) goto loc_8247AFBC;
loc_8247B018:
	// rlwinm r30,r28,4,0,27
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// bl 0x8247aa28
	ctx.lr = 0x8247B030;
	sub_8247AA28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8247b040
	if (!ctx.cr6.eq) goto loc_8247B040;
	// stw r23,0(r29)
	REX_STORE_U32(r29.u32 + 0, r23.u32);
	// b 0x8247b140
	goto loc_8247B140;
loc_8247B040:
	// addi r11,r31,56
	ctx.r11.s64 = r31.s64 + 56;
loc_8247B044:
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
	// bne 0x8247b044
	if (!ctx.cr0.eq) goto loc_8247B044;
	// addi r7,r28,-1
	ctx.r7.s64 = r28.s64 + -1;
	// add r9,r30,r3
	ctx.r9.u64 = r30.u64 + ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8247b0dc
	if (ctx.cr6.eq) goto loc_8247B0DC;
loc_8247B074:
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// rldicr r8,r9,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
loc_8247B07C:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwsync 
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrldi r10,r5,33
	ctx.r10.u64 = ctx.r5.u64 & 0x7FFFFFFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_8247B09C:
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
	// bne cr6,0x8247b0c0
	if (!ctx.cr6.eq) goto loc_8247B0C0;
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
	// bne 0x8247b09c
	if (!ctx.cr0.eq) goto loc_8247B09C;
	// b 0x8247b0c8
	goto loc_8247B0C8;
loc_8247B0C0:
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
loc_8247B0C8:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpd cr6,r4,r11
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8247b07c
	if (!ctx.cr6.eq) goto loc_8247B07C;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8247b074
	if (!ctx.cr0.eq) goto loc_8247B074;
loc_8247B0DC:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r30,r9,-16
	r30.s64 = ctx.r9.s64 + -16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247b138
	if (ctx.cr6.eq) goto loc_8247B138;
	// addi r11,r31,24
	ctx.r11.s64 = r31.s64 + 24;
loc_8247B0F0:
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
	// bne 0x8247b0f0
	if (!ctx.cr0.eq) goto loc_8247B0F0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bge cr6,0x8247b138
	if (!ctx.cr6.lt) goto loc_8247B138;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8247b138
	if (!ctx.cr6.gt) goto loc_8247B138;
	// not r4,r10
	ctx.r4.u64 = ~ctx.r10.u64;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x8247b130
	if (!ctx.cr6.gt) goto loc_8247B130;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
loc_8247B130:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x8247c540
	ctx.lr = 0x8247B138;
	sub_8247C540(ctx, base);
loc_8247B138:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8247b18c
	if (!ctx.cr6.eq) goto loc_8247B18C;
loc_8247B140:
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247b150
	if (ctx.cr6.eq) goto loc_8247B150;
	// bl 0x82209660
	ctx.lr = 0x8247B150;
	sub_82209660(ctx, base);
loc_8247B150:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247b160
	if (ctx.cr6.eq) goto loc_8247B160;
	// bl 0x82209660
	ctx.lr = 0x8247B160;
	sub_82209660(ctx, base);
loc_8247B160:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247af40
	if (ctx.cr6.eq) goto loc_8247AF40;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8247B180;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec4
	return;
loc_8247B18C:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247b1a4
	if (ctx.cr6.eq) goto loc_8247B1A4;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_8247B1A4:
	// stw r23,0(r30)
	REX_STORE_U32(r30.u32 + 0, r23.u32);
	// lis r11,19558
	ctx.r11.s64 = 1281753088;
	// stw r23,4(r30)
	REX_STORE_U32(r30.u32 + 4, r23.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// ori r10,r11,20853
	ctx.r10.u64 = ctx.r11.u64 | 20853;
	// stw r23,20(r31)
	REX_STORE_U32(r31.u32 + 20, r23.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r23,12(r31)
	REX_STORE_U32(r31.u32 + 12, r23.u32);
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// lwsync 
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_824A7450) {
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
	// vspltish v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x8)));
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// vspltish v12,-1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// vspltisb v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v31,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v11,4
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x4)));
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// vspltish v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x0)));
	// bne cr6,0x824a7508
	if (!ctx.cr6.eq) goto loc_824A7508;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x824a75f0
	if (!ctx.cr6.gt) goto loc_824A75F0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,16
	ctx.r10.s64 = 16;
loc_824A7498:
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v9,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v12,v0,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v10,v0,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// vsldoi128 v4,v0,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// vsubshs v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vslh v30,v12,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
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
	// vadduhm v25,v29,v30
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
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
	// vadduhm v17,v19,v2
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v16,v17,v18
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vsrah v15,v16,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v15,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v8,v8,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bdnz 0x824a7498
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A7498;
	// b 0x824a75f0
	goto loc_824A75F0;
loc_824A7508:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x824a75f0
	if (!ctx.cr6.gt) goto loc_824A75F0;
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
loc_824A7524:
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v62,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v10,v12,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// vsldoi128 v9,v0,v62,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 12));
	// vsldoi v4,v12,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// vsubshs v29,v0,v3
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi128 v3,v0,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 14));
	// vsubshs v28,v12,v30
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vslh v27,v10,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v26,v12,v0,6
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 10));
	// vslh v25,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v24,v0,v62,6
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 10));
	// vslh v23,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v9,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v25,v27
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v16,v23,v10
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v19,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v4,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v0,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v12,v20,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v14,v3,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v9,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v4,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vslh v10,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v30,v14,v15
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vslh v3,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v12,v0
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vsubshs v26,v7,v10
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vadduhm v25,v4,v9
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubshs v24,v7,v3
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vadduhm v23,v27,v30
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v22,v28,v26
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v21,v25,v2
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v20,v29,v24
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vadduhm v19,v23,v2
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v18,v21,v22
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v17,v19,v20
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vsrah v16,v18,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v17,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v61,v8,v16
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// stvx128 v16,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v15,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// vor128 v8,v61,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// bdnz 0x824a7524
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A7524;
loc_824A75F0:
	// vand v0,v8,v31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
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

DEFINE_REX_FUNC(sub_824AF438) {
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
	ctx.lr = 0x824AF440;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// li r9,1120
	ctx.r9.s64 = 1120;
	// vspltish v8,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x3)));
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// lwz r30,1164(r6)
	r30.u64 = REX_LOAD_U32(ctx.r6.u32 + 1164);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v26,7
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_set1_epi16(short(0x7)));
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vrlh v10,v12,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, result);
	}
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// li r31,1
	r31.s64 = 1;
	// lvx128 v11,r6,r9
	ea = (ctx.r6.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// vspltish v3,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_set1_epi16(short(0x1)));
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// vaddshs v4,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// li r28,-32
	r28.s64 = -32;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// li r29,-16
	r29.s64 = -16;
	// vsubshs v25,v10,v11
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vspltish v2,5
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_set1_epi16(short(0x5)));
	// slw r9,r31,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r8.u8 & 0x3F));
	// li r3,16
	ctx.r3.s64 = 16;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// bne cr6,0x824af5f4
	if (!ctx.cr6.eq) goto loc_824AF5F4;
	// lvx128 v60,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
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
	// lvsl v7,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v10,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v59,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v7,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v5,v58,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v9,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x824af7d0
	if (!ctx.cr6.gt) goto loc_824AF7D0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_824AF50C:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v1,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// vor v11,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vor v31,v7,v7
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// vor v7,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lvx128 v57,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v10,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v5,v11,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v29,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// vperm128 v6,v56,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v27,v10,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v29,v5
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vmrglb v22,v0,v6
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v9,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v24,v27
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v19,v28,v11
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v18,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v7,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v23,v10
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v5,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)v22.u8));
	// vadduhm v28,v21,v30
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vslh v14,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v19,v20
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v24,v17,v18
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v23,v15,v16
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vslh v22,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v20,v1,v14
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vadduhm v19,v27,v28
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vsubshs v18,v31,v29
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vadduhm v17,v23,v24
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vsubshs v16,v0,v22
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vsubshs v15,v0,v21
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vadduhm v14,v19,v4
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v1,v17,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v31,v20,v16
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vadduhm v30,v18,v15
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v29,v14,v31
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v28,v1,v30
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vsrah v27,v29,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v28,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v27,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// blt cr6,0x824af50c
	if (ctx.cr6.lt) goto loc_824AF50C;
	// b 0x824af7d0
	goto loc_824AF7D0;
loc_824AF5F4:
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
	// vor128 v9,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v51,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvrx128 v49,r31,r10
	temp.u32 = r31.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v31,v50,v51
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvlx128 v48,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v10,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vor128 v5,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v7,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v9,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v30,v46,v47
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v1,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v31,v0,v30
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v30,v0,v30
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v1,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x824af7d0
	if (!ctx.cr6.gt) goto loc_824AF7D0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
loc_824AF678:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v29,v7,v7
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vor v28,v6,v6
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vor v7,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor128 v42,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vor v11,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v31.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v6,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v10,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v30.u8));
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v27,v5,v5
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vslh v30,v11,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v41,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v43,v63,v4
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vslh v24,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v5,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v21,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v10,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v19,v63,v41,v5
	simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v20,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v18,v0,v31
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v17,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v31,v0,v31
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v7,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v24,v30
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v14,v23,v11
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v22,v21,v22
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vor v5,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vslh v24,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v6,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v9,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vmrghb v1,v0,v19
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v21,v20,v10
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v30,v18,v18
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)v18.u8));
	// vadduhm v18,v16,v17
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v17,v14,v15
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v16,v23,v24
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vslh v19,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v21,v22
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vslh v20,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v9,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v18,v17,v18
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vslh v22,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v17,v28,v19
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vslh v21,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v15,v16
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vadduhm v28,v24,v14
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vsubshs v20,v29,v20
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vor128 v4,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// vadduhm v24,v23,v9
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v29,v5,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v0,v22
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vsubshs v22,v0,v21
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vadduhm v19,v16,v4
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v21,v18,v4
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v14,v24,v28
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v15,v29,v15
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vslh v18,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v20,v23
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v28,v17,v22
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v22,v14,v15
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vsubshs v24,v0,v18
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vsubshs v23,v27,v16
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vadduhm v20,v19,v28
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v21,v21,v29
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v18,v22,v4
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v19,v23,v24
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vsrah v16,v20,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v15,v18,v19
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// stvx128 v16,r10,r29
	ea = (ctx.r10.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r10,r28
	ea = (ctx.r10.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v14,v15,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// stvx128 v14,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x824af678
	if (ctx.cr6.lt) goto loc_824AF678;
loc_824AF7D0:
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// li r11,0
	ctx.r11.s64 = 0;
	// vspltish v12,-1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// vspltish v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x0)));
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// vslh v9,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// bne cr6,0x824af858
	if (!ctx.cr6.eq) goto loc_824AF858;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824af8f4
	if (!ctx.cr6.gt) goto loc_824AF8F4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_824AF804:
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v12,v13,v40,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 12));
	// vsldoi128 v10,v13,v40,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 14));
	// vsldoi128 v7,v13,v40,6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 10));
	// vadduhm v12,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v6,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v5,v12,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v4,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vadduhm v3,v12,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v2,v3,v25
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v1,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsrah v31,v1,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v39,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vor v11,v11,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// stvewx128 v39,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x824af804
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AF804;
	// b 0x824af8f4
	goto loc_824AF8F4;
loc_824AF858:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824af8f4
	if (!ctx.cr6.gt) goto loc_824AF8F4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_824AF870:
	// lvx128 v13,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v10,v13,v38,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 12));
	// vsldoi128 v7,v13,v38,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 14));
	// vsldoi128 v6,v13,v38,6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 10));
	// vsldoi v5,v12,v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 12));
	// vsldoi v4,v12,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 14));
	// vadduhm v3,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsldoi v2,v12,v13,6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 10));
	// vadduhm v1,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v10,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vor v13,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vadduhm v31,v12,v2
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsubshs v30,v0,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v10,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v13,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v27,v0,v31
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vadduhm v24,v10,v29
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v23,v13,v28
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v22,v24,v25
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v21,v23,v25
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v12,v22,v27
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v20,v21,v30
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vsrah v19,v12,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v20,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v37,v11,v19
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)v19.u8)));
	// vpkshus128 v36,v19,v18
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vor128 v11,v37,v18
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)v18.u8)));
	// stvx128 v36,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x824af870
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AF870;
loc_824AF8F4:
	// vand v13,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
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

