#include "soulcalibur2_funcs.57.h"

DEFINE_REX_FUNC(sub_820E2308) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fsqrts f1,f0
	ctx.f1.f64 = double(float(sqrt(ctx.f0.f64)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E4D88) {
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
	ctx.lr = 0x820E4D90;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r3,88
	r31.s64 = ctx.r3.s64 + 88;
	// li r29,3
	r29.s64 = 3;
	// li r27,0
	r27.s64 = 0;
loc_820E4DA4:
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x820e4dc4
	if (ctx.cr6.eq) goto loc_820E4DC4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e48c0
	ctx.lr = 0x820E4DB8;
	sub_820E48C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c80a8
	ctx.lr = 0x820E4DC0;
	sub_822C80A8(ctx, base);
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
loc_820E4DC4:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x820e4da4
	if (!ctx.cr0.eq) goto loc_820E4DA4;
	// lwz r3,80(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e4de4
	if (ctx.cr6.eq) goto loc_820E4DE4;
	// bl 0x822c80a8
	ctx.lr = 0x820E4DE0;
	sub_822C80A8(ctx, base);
	// stw r27,80(r28)
	REX_STORE_U32(r28.u32 + 80, r27.u32);
loc_820E4DE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_820E7D50) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822009d0
	ctx.lr = 0x820E7D70;
	sub_822009D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,404(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 404);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// stw r11,408(r31)
	REX_STORE_U32(r31.u32 + 408, ctx.r11.u32);
	// bl 0x820e0028
	ctx.lr = 0x820E7D84;
	sub_820E0028(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x820e0088
	ctx.lr = 0x820E7D8C;
	sub_820E0088(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f31,f0
	f31.f64 = double(float(f31.f64 - ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820e0028
	ctx.lr = 0x820E7DA0;
	sub_820E0028(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x820e0088
	ctx.lr = 0x820E7DA8;
	sub_820E0088(ctx, base);
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e7e08
	if (ctx.cr6.eq) goto loc_820E7E08;
	// lwz r10,10140(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 10140);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 400);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r9,68(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 68);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r10,r11,20028
	ctx.r10.s64 = ctx.r11.s64 + 20028;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lfs f3,20084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20084);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,20080(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20080);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20076(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20076);
	ctx.f1.f64 = double(temp.f32);
	// bctrl 
	ctx.lr = 0x820E7DF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e7e08
	if (ctx.cr6.eq) goto loc_820E7E08;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,396(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 396);
	// bl 0x822005c0
	ctx.lr = 0x820E7E08;
	sub_822005C0(ctx, base);
loc_820E7E08:
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

DEFINE_REX_FUNC(sub_820EF908) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lwz r11,-32480(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,32336
	ctx.r11.s64 = ctx.r11.s64 + 32336;
	// lwz r11,4892(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4892);
	// stw r9,140(r11)
	REX_STORE_U32(ctx.r11.u32 + 140, ctx.r9.u32);
	// lwz r11,-32480(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// sth r9,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r9.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F0760) {
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
	ctx.lr = 0x820F0768;
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
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r31,r11,32336
	r31.s64 = ctx.r11.s64 + 32336;
	// stw r3,4896(r31)
	REX_STORE_U32(r31.u32 + 4896, ctx.r3.u32);
	// blt cr6,0x820f0ca4
	if (ctx.cr6.lt) goto loc_820F0CA4;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x820f0af8
	if (!ctx.cr6.gt) goto loc_820F0AF8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x820f0ca4
	if (!ctx.cr6.gt) goto loc_820F0CA4;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// ble cr6,0x820f0a5c
	if (!ctx.cr6.gt) goto loc_820F0A5C;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x820f0ca4
	if (!ctx.cr6.eq) goto loc_820F0CA4;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,-28232
	r31.s64 = ctx.r11.s64 + -28232;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f2838
	ctx.lr = 0x820F07C0;
	sub_820F2838(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820f2838
	ctx.lr = 0x820F07CC;
	sub_820F2838(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x820f2838
	ctx.lr = 0x820F07D8;
	sub_820F2838(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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
	ctx.lr = 0x820F0804;
	sub_820F3460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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
	ctx.lr = 0x820F0820;
	sub_820F3460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x820f2838
	ctx.lr = 0x820F082C;
	sub_820F2838(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 144);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// beq cr6,0x820f092c
	if (ctx.cr6.eq) goto loc_820F092C;
	// li r5,5
	ctx.r5.s64 = 5;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820f3460
	ctx.lr = 0x820F085C;
	sub_820F3460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82202540
	ctx.lr = 0x820F0868;
	sub_82202540(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820e8598
	ctx.lr = 0x820F087C;
	sub_820E8598(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820e85a8
	ctx.lr = 0x820F0890;
	sub_820E85A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,280(r30)
	REX_STORE_U32(r30.u32 + 280, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820e8458
	ctx.lr = 0x820F08A4;
	sub_820E8458(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200838
	ctx.lr = 0x820F08B4;
	sub_82200838(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82200ab8
	ctx.lr = 0x820F08C8;
	sub_82200AB8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,17024
	ctx.r5.s64 = ctx.r11.s64 + 17024;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822025e0
	ctx.lr = 0x820F08DC;
	sub_822025E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// li r5,7
	ctx.r5.s64 = 7;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x820f3460
	ctx.lr = 0x820F08F8;
	sub_820F3460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82202540
	ctx.lr = 0x820F0904;
	sub_82202540(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x820e9af8
	ctx.lr = 0x820F0910;
	sub_820E9AF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e9af0
	ctx.lr = 0x820F091C;
	sub_820E9AF0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,17008
	ctx.r5.s64 = ctx.r11.s64 + 17008;
	// b 0x820f09d4
	goto loc_820F09D4;
loc_820F092C:
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x820f3460
	ctx.lr = 0x820F093C;
	sub_820F3460(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F0954;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lfs f29,16260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16260);
	f29.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x82200848
	ctx.lr = 0x820F0968;
	sub_82200848(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x82200850
	ctx.lr = 0x820F0974;
	sub_82200850(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,17004(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17004);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200818
	ctx.lr = 0x820F0984;
	sub_82200818(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,316(r30)
	REX_STORE_U32(r30.u32 + 316, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r9,16988
	ctx.r5.s64 = ctx.r9.s64 + 16988;
	// lfs f0,2012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stfs f0,320(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 320, temp.u32);
	// bl 0x822025e0
	ctx.lr = 0x820F09AC;
	sub_822025E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820f3460
	ctx.lr = 0x820F09C8;
	sub_820F3460(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,16972
	ctx.r5.s64 = ctx.r11.s64 + 16972;
loc_820F09D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822025e0
	ctx.lr = 0x820F09DC;
	sub_822025E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x820f2d80
	ctx.lr = 0x820F09E8;
	sub_820F2D80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F0A00;
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
	ctx.lr = 0x820F0A24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822006f8
	ctx.lr = 0x820F0A30;
	sub_822006F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200700
	ctx.lr = 0x820F0A3C;
	sub_82200700(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200708
	ctx.lr = 0x820F0A48;
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
	ctx.lr = 0x820F0A58;
	sub_82200818(ctx, base);
	// b 0x820f0ca4
	goto loc_820F0CA4;
loc_820F0A5C:
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,-28232
	r31.s64 = ctx.r11.s64 + -28232;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820f2e70
	ctx.lr = 0x820F0A7C;
	sub_820F2E70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,4
	ctx.r4.s64 = 4;
	// lfs f30,2332(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2332);
	f30.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x820f3460
	ctx.lr = 0x820F0AA0;
	sub_820F3460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82202540
	ctx.lr = 0x820F0AAC;
	sub_82202540(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-7072
	ctx.r4.s64 = ctx.r11.s64 + -7072;
	// bl 0x820e7d48
	ctx.lr = 0x820F0ABC;
	sub_820E7D48(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,2008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200818
	ctx.lr = 0x820F0ACC;
	sub_82200818(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e7e70
	ctx.lr = 0x820F0AD8;
	sub_820E7E70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820f3460
	ctx.lr = 0x820F0AF4;
	sub_820F3460(ctx, base);
	// b 0x820f0ca4
	goto loc_820F0CA4;
loc_820F0AF8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r30,-32170
	r30.s64 = -2108293120;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r29,r30,-28232
	r29.s64 = r30.s64 + -28232;
	// lfs f30,2332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2332);
	f30.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f29,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f29.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x820f3460
	ctx.lr = 0x820F0B2C;
	sub_820F3460(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f31,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820f3460
	ctx.lr = 0x820F0B50;
	sub_820F3460(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x820f2838
	ctx.lr = 0x820F0B5C;
	sub_820F2838(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820f2838
	ctx.lr = 0x820F0B68;
	sub_820F2838(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x820f3460
	ctx.lr = 0x820F0B84;
	sub_820F3460(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x820f3460
	ctx.lr = 0x820F0BA0;
	sub_820F3460(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x820f3460
	ctx.lr = 0x820F0BBC;
	sub_820F3460(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x820f2838
	ctx.lr = 0x820F0BC8;
	sub_820F2838(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x820f2e70
	ctx.lr = 0x820F0BD8;
	sub_820F2E70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82202540
	ctx.lr = 0x820F0BE4;
	sub_82202540(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,-7072
	ctx.r4.s64 = ctx.r11.s64 + -7072;
	// bl 0x820e7d48
	ctx.lr = 0x820F0BF4;
	sub_820E7D48(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f1,2008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200818
	ctx.lr = 0x820F0C04;
	sub_82200818(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x820e7e70
	ctx.lr = 0x820F0C10;
	sub_820E7E70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x820f3460
	ctx.lr = 0x820F0C2C;
	sub_820F3460(ctx, base);
	// lwz r11,-28232(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -28232);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F0C44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x82200838
	ctx.lr = 0x820F0C50;
	sub_82200838(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,17004(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17004);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200818
	ctx.lr = 0x820F0C60;
	sub_82200818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x820efe58
	ctx.lr = 0x820F0C70;
	sub_820EFE58(ctx, base);
	// lwz r11,4888(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4888);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r8,16956
	ctx.r5.s64 = ctx.r8.s64 + 16956;
	// stfs f31,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stfs f31,36(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stfs f31,32(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bl 0x822025e0
	ctx.lr = 0x820F0CA4;
	sub_822025E0(ctx, base);
loc_820F0CA4:
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

DEFINE_REX_FUNC(sub_8210B058) {
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
	ctx.lr = 0x8210B060;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// lfs f7,16228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16228);
	ctx.f7.f64 = double(temp.f32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// addi r31,r10,-30112
	r31.s64 = ctx.r10.s64 + -30112;
	// lfs f5,28268(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28268);
	ctx.f5.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f4,28264(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 28264);
	ctx.f4.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f31,28196(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 28196);
	f31.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// addi r8,r31,48
	ctx.r8.s64 = r31.s64 + 48;
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
	// addi r7,r31,16
	ctx.r7.s64 = r31.s64 + 16;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lfs f2,28260(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28260);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28256(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 28256);
	ctx.f1.f64 = double(temp.f32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bl 0x82109328
	ctx.lr = 0x8210B0D4;
	sub_82109328(ctx, base);
	// extsw r11,r29
	ctx.r11.s64 = r29.s32;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// extsw r10,r28
	ctx.r10.s64 = r28.s32;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// lfs f0,28252(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28252);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,28244(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 28244);
	ctx.f13.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r31,48
	ctx.r8.s64 = r31.s64 + 48;
	// lfs f4,-8492(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8492);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,28248(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 28248);
	ctx.f1.f64 = double(temp.f32);
	// fdivs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f2,f11,f0,f13
	ctx.f2.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x821e86d8
	ctx.lr = 0x8210B14C;
	sub_821E86D8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82110B68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82110B70;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lha r11,128(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 128));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lha r6,134(r3)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 134));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lha r4,148(r11)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 148));
	// bne 0x82110c70
	if (!ctx.cr0.eq) goto loc_82110C70;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82110B9C:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x821ca270
	ctx.lr = 0x82110BA8;
	sub_821CA270(ctx, base);
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// lha r11,128(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 128));
	// addi r30,r10,-17296
	r30.s64 = ctx.r10.s64 + -17296;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lfsx f12,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,29356(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 29356);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28292(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 28292);
	ctx.f13.f64 = double(temp.f32);
	// fadds f2,f11,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f1,f12,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// bl 0x821c5850
	ctx.lr = 0x82110BE4;
	sub_821C5850(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f2,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lha r11,128(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 128));
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfsx f3,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x821c5840
	ctx.lr = 0x82110C08;
	sub_821C5840(ctx, base);
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82110c1c
	if (ctx.cr6.eq) goto loc_82110C1C;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
loc_82110C1C:
	// lha r11,128(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 128));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r6,r10,29344
	ctx.r6.s64 = ctx.r10.s64 + 29344;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lha r30,150(r11)
	r30.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 150));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x82110C50;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82110c78
	if (ctx.cr0.eq) goto loc_82110C78;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lha r5,134(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 134));
	// lha r4,128(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 128));
	// lwz r6,88(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 88);
	// bl 0x821105e0
	ctx.lr = 0x82110C6C;
	sub_821105E0(ctx, base);
	// b 0x82110c7c
	goto loc_82110C7C;
loc_82110C70:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82110b9c
	goto loc_82110B9C;
loc_82110C78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82110C7C:
	// stw r3,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82114BB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r7,4
	ctx.r7.s64 = 4;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r11,r11,23968
	ctx.r11.s64 = ctx.r11.s64 + 23968;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82114BDC:
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r8,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// stb r7,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// stb r6,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// stb r8,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// stb r7,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// stb r8,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r8.u8);
	// stb r9,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r9.u8);
	// stb r10,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// stb r9,9(r11)
	REX_STORE_U8(ctx.r11.u32 + 9, ctx.r9.u8);
	// stb r9,10(r11)
	REX_STORE_U8(ctx.r11.u32 + 10, ctx.r9.u8);
	// stb r10,11(r11)
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r10.u8);
	// stbu r10,12(r11)
	ea = 12 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82114bdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82114BDC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82116710) {
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
	ctx.lr = 0x82116718;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r11,932
	r30.s64 = ctx.r11.s64 + 932;
	// addi r27,r3,92
	r27.s64 = ctx.r3.s64 + 92;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// addi r28,r27,-4
	r28.s64 = r27.s64 + -4;
	// mr r31,r30
	r31.u64 = r30.u64;
	// addi r26,r11,31624
	r26.s64 = ctx.r11.s64 + 31624;
loc_82116748:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d55f8
	ctx.lr = 0x82116758;
	sub_822D55F8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x82116768;
	sub_821EB1A0(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r30,16
	ctx.r11.s64 = r30.s64 + 16;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r28)
	ea = 4 + r28.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	r28.u32 = ea;
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82116748
	if (ctx.cr6.lt) goto loc_82116748;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,84(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 84);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,15632(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15632);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f13,f31,f0,f13
	ctx.f13.f64 = double(float(-std::fma(f31.f64, ctx.f0.f64, -ctx.f13.f64)));
	// stfs f13,112(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 112, temp.u32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f0,116(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 116, temp.u32);
	// beq cr6,0x821167c0
	if (ctx.cr6.eq) goto loc_821167C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x8212bd08
	ctx.lr = 0x821167C0;
	sub_8212BD08(ctx, base);
loc_821167C0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2348);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 120, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-64(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82118898) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,32176
	ctx.r6.s64 = ctx.r11.s64 + 32176;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,768
	ctx.r4.s64 = 768;
	// bl 0x821f7d50
	ctx.lr = 0x821188C8;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821188dc
	if (ctx.cr0.eq) goto loc_821188DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,32104
	ctx.r11.s64 = ctx.r11.s64 + 32104;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_821188DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821192A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r3,260
	ctx.r9.s64 = ctx.r3.s64 + 260;
	// stw r11,260(r3)
	REX_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,264(r3)
	REX_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,268(r3)
	REX_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,272(r3)
	REX_STORE_U32(ctx.r3.u32 + 272, ctx.r11.u32);
	// stfs f0,272(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 272, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8211A5F0) {
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e74
	ctx.lr = 0x8211A5F8;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f38
	ctx.lr = 0x8211A600;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// sth r4,1554(r3)
	REX_STORE_U16(ctx.r3.u32 + 1554, ctx.r4.u16);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r11,r11,3112
	ctx.r11.s64 = ctx.r11.s64 + 3112;
	// cmpwi cr6,r4,268
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 268, ctx.xer);
	// bgt cr6,0x8211a6f8
	if (ctx.cr6.gt) goto loc_8211A6F8;
	// beq cr6,0x8211a6d4
	if (ctx.cr6.eq) goto loc_8211A6D4;
	// cmplwi cr6,r4,16
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16, ctx.xer);
	// bgt cr6,0x8211a868
	if (ctx.cr6.gt) goto loc_8211A868;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-31080
	ctx.r12.s64 = ctx.r12.s64 + -31080;
	// lbzx r0,r12,r4
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r4.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// nop 
	// addi r12,r12,-22960
	ctx.r12.s64 = ctx.r12.s64 + -22960;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_8211A868;
	case 1:
		goto loc_8211A650;
	case 2:
		goto loc_8211A65C;
	case 3:
		goto loc_8211A668;
	case 4:
		goto loc_8211A674;
	case 5:
		goto loc_8211A680;
	case 6:
		goto loc_8211A68C;
	case 7:
		goto loc_8211A698;
	case 8:
		goto loc_8211A6A4;
	case 9:
		goto loc_8211A6B0;
	case 10:
		goto loc_8211A6BC;
	case 11:
		goto loc_8211A6C8;
	case 12:
		goto loc_8211A6D4;
	case 13:
		goto loc_8211A6E0;
	case 14:
		goto loc_8211A6EC;
	case 15:
		goto loc_8211A788;
	case 16:
		goto loc_8211A788;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8211A650:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,3272
	ctx.r11.s64 = ctx.r11.s64 + 3272;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A65C:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,3380
	ctx.r11.s64 = ctx.r11.s64 + 3380;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A668:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,3480
	ctx.r11.s64 = ctx.r11.s64 + 3480;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A674:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,3568
	ctx.r11.s64 = ctx.r11.s64 + 3568;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A680:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,3648
	ctx.r11.s64 = ctx.r11.s64 + 3648;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A68C:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,3752
	ctx.r11.s64 = ctx.r11.s64 + 3752;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A698:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,3924
	ctx.r11.s64 = ctx.r11.s64 + 3924;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A6A4:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,4116
	ctx.r11.s64 = ctx.r11.s64 + 4116;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A6B0:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,4244
	ctx.r11.s64 = ctx.r11.s64 + 4244;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A6BC:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,4400
	ctx.r11.s64 = ctx.r11.s64 + 4400;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A6C8:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,4508
	ctx.r11.s64 = ctx.r11.s64 + 4508;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A6D4:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A6E0:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,4672
	ctx.r11.s64 = ctx.r11.s64 + 4672;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A6EC:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A6F8:
	// cmpwi cr6,r4,1039
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1039, ctx.xer);
	// bgt cr6,0x8211a7b8
	if (ctx.cr6.gt) goto loc_8211A7B8;
	// beq cr6,0x8211a7ac
	if (ctx.cr6.eq) goto loc_8211A7AC;
	// cmpwi cr6,r4,527
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 527, ctx.xer);
	// bgt cr6,0x8211a768
	if (ctx.cr6.gt) goto loc_8211A768;
	// beq cr6,0x8211a788
	if (ctx.cr6.eq) goto loc_8211A788;
	// cmpwi cr6,r4,269
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 269, ctx.xer);
	// beq cr6,0x8211a75c
	if (ctx.cr6.eq) goto loc_8211A75C;
	// cmpwi cr6,r4,270
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 270, ctx.xer);
	// beq cr6,0x8211a750
	if (ctx.cr6.eq) goto loc_8211A750;
	// cmpwi cr6,r4,271
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 271, ctx.xer);
	// beq cr6,0x8211a744
	if (ctx.cr6.eq) goto loc_8211A744;
	// cmpwi cr6,r4,272
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 272, ctx.xer);
	// beq cr6,0x8211a744
	if (ctx.cr6.eq) goto loc_8211A744;
	// cmpwi cr6,r4,526
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 526, ctx.xer);
	// bne cr6,0x8211a868
	if (!ctx.cr6.eq) goto loc_8211A868;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,4960
	ctx.r11.s64 = ctx.r11.s64 + 4960;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A744:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,5248
	ctx.r11.s64 = ctx.r11.s64 + 5248;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A750:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,4888
	ctx.r11.s64 = ctx.r11.s64 + 4888;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A75C:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,4744
	ctx.r11.s64 = ctx.r11.s64 + 4744;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A768:
	// cmpwi cr6,r4,528
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 528, ctx.xer);
	// beq cr6,0x8211a788
	if (ctx.cr6.eq) goto loc_8211A788;
	// cmpwi cr6,r4,782
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 782, ctx.xer);
	// beq cr6,0x8211a7a0
	if (ctx.cr6.eq) goto loc_8211A7A0;
	// cmpwi cr6,r4,783
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 783, ctx.xer);
	// beq cr6,0x8211a794
	if (ctx.cr6.eq) goto loc_8211A794;
	// cmpwi cr6,r4,784
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 784, ctx.xer);
	// bne cr6,0x8211a868
	if (!ctx.cr6.eq) goto loc_8211A868;
loc_8211A788:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,5148
	ctx.r11.s64 = ctx.r11.s64 + 5148;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A794:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,5344
	ctx.r11.s64 = ctx.r11.s64 + 5344;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A7A0:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,5040
	ctx.r11.s64 = ctx.r11.s64 + 5040;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A7AC:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,5440
	ctx.r11.s64 = ctx.r11.s64 + 5440;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A7B8:
	// cmpwi cr6,r4,1807
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1807, ctx.xer);
	// bgt cr6,0x8211a81c
	if (ctx.cr6.gt) goto loc_8211A81C;
	// beq cr6,0x8211a810
	if (ctx.cr6.eq) goto loc_8211A810;
	// cmpwi cr6,r4,1040
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1040, ctx.xer);
	// beq cr6,0x8211a788
	if (ctx.cr6.eq) goto loc_8211A788;
	// cmpwi cr6,r4,1295
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1295, ctx.xer);
	// beq cr6,0x8211a804
	if (ctx.cr6.eq) goto loc_8211A804;
	// cmpwi cr6,r4,1296
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1296, ctx.xer);
	// beq cr6,0x8211a788
	if (ctx.cr6.eq) goto loc_8211A788;
	// cmpwi cr6,r4,1551
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1551, ctx.xer);
	// beq cr6,0x8211a7f8
	if (ctx.cr6.eq) goto loc_8211A7F8;
	// cmpwi cr6,r4,1552
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1552, ctx.xer);
	// bne cr6,0x8211a868
	if (!ctx.cr6.eq) goto loc_8211A868;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,6248
	ctx.r11.s64 = ctx.r11.s64 + 6248;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A7F8:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,5632
	ctx.r11.s64 = ctx.r11.s64 + 5632;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A804:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,5536
	ctx.r11.s64 = ctx.r11.s64 + 5536;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A810:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,5792
	ctx.r11.s64 = ctx.r11.s64 + 5792;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A81C:
	// cmpwi cr6,r4,1808
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1808, ctx.xer);
	// beq cr6,0x8211a860
	if (ctx.cr6.eq) goto loc_8211A860;
	// cmpwi cr6,r4,2063
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2063, ctx.xer);
	// beq cr6,0x8211a854
	if (ctx.cr6.eq) goto loc_8211A854;
	// cmpwi cr6,r4,2064
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2064, ctx.xer);
	// beq cr6,0x8211a848
	if (ctx.cr6.eq) goto loc_8211A848;
	// cmpwi cr6,r4,2319
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2319, ctx.xer);
	// bne cr6,0x8211a868
	if (!ctx.cr6.eq) goto loc_8211A868;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,6148
	ctx.r11.s64 = ctx.r11.s64 + 6148;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A848:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,6520
	ctx.r11.s64 = ctx.r11.s64 + 6520;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A854:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,5960
	ctx.r11.s64 = ctx.r11.s64 + 5960;
	// b 0x8211a868
	goto loc_8211A868;
loc_8211A860:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,6424
	ctx.r11.s64 = ctx.r11.s64 + 6424;
loc_8211A868:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r28,4(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r30,r23,16
	r30.s64 = r23.s64 + 16;
	// addi r9,r23,528
	ctx.r9.s64 = r23.s64 + 528;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f31,1996(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	f31.f64 = double(temp.f32);
	// stw r10,1556(r23)
	REX_STORE_U32(r23.u32 + 1556, ctx.r10.u32);
	// lfs f30,1992(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1992);
	f30.f64 = double(temp.f32);
	// fmr f29,f31
	f29.f64 = f31.f64;
	// bne cr6,0x8211a8b0
	if (!ctx.cr6.eq) goto loc_8211A8B0;
	// stfs f31,0(r23)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r23.u32 + 0, temp.u32);
	// stfs f31,4(r23)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r23.u32 + 4, temp.u32);
	// stfs f31,8(r23)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r23.u32 + 8, temp.u32);
	// stfs f30,12(r23)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r23.u32 + 12, temp.u32);
	// b 0x8211a8d0
	goto loc_8211A8D0;
loc_8211A8B0:
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r7.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,4(r23)
	REX_STORE_U32(r23.u32 + 4, ctx.r7.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,8(r23)
	REX_STORE_U32(r23.u32 + 8, ctx.r7.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,12(r23)
	REX_STORE_U32(r23.u32 + 12, ctx.r10.u32);
loc_8211A8D0:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// clrlwi. r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,1552(r23)
	REX_STORE_U16(r23.u32 + 1552, ctx.r11.u16);
	// beq 0x8211aa0c
	if (ctx.cr0.eq) goto loc_8211AA0C;
	// addi r31,r9,16
	r31.s64 = ctx.r9.s64 + 16;
	// addi r25,r9,-32
	r25.s64 = ctx.r9.s64 + -32;
	// addi r24,r8,-1
	r24.s64 = ctx.r8.s64 + -1;
loc_8211A8F0:
	// clrlwi r26,r29,16
	r26.u64 = r29.u32 & 0xFFFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// sth r26,-10(r31)
	REX_STORE_U16(r31.u32 + -10, r26.u16);
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f31,4(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f30,12(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// beq cr6,0x8211a994
	if (ctx.cr6.eq) goto loc_8211A994;
	// addi r27,r30,-16
	r27.s64 = r30.s64 + -16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e1ba8
	ctx.lr = 0x8211A92C;
	sub_820E1BA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e22e8
	ctx.lr = 0x8211A934;
	sub_820E22E8(ctx, base);
	// fdivs f0,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 / ctx.f1.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1bf0
	ctx.lr = 0x8211A94C;
	sub_820E1BF0(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1bf0
	ctx.lr = 0x8211A95C;
	sub_820E1BF0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e1c28
	ctx.lr = 0x8211A968;
	sub_820E1C28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// bl 0x820e1c28
	ctx.lr = 0x8211A978;
	sub_820E1C28(ctx, base);
	// fcmpu cr6,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f28.f64, f31.f64);
	// blt cr6,0x8211a98c
	if (ctx.cr6.lt) goto loc_8211A98C;
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// li r11,0
	ctx.r11.s64 = 0;
	// bge cr6,0x8211a990
	if (!ctx.cr6.lt) goto loc_8211A990;
loc_8211A98C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8211A990:
	// stb r11,-11(r31)
	REX_STORE_U8(r31.u32 + -11, ctx.r11.u8);
loc_8211A994:
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f2,f13,f12
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f1,f0,f11
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// bl 0x820e0130
	ctx.lr = 0x8211A9B0;
	sub_820E0130(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// bge cr6,0x8211a9bc
	if (!ctx.cr6.lt) goto loc_8211A9BC;
	// fadds f1,f1,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 + f30.f64));
loc_8211A9BC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8211a9d0
	if (ctx.cr6.eq) goto loc_8211A9D0;
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// bne cr6,0x8211a9d0
	if (!ctx.cr6.eq) goto loc_8211A9D0;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
loc_8211A9D0:
	// sth r26,-14(r31)
	REX_STORE_U16(r31.u32 + -14, r26.u16);
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// sthu r11,32(r25)
	ea = 32 + r25.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	r25.u32 = ea;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// lbzu r11,1(r24)
	ea = 1 + r24.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r24.u32 = ea;
	// stfs f29,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + -8, temp.u32);
	// stfs f1,-4(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + -4, temp.u32);
	// stb r11,-12(r31)
	REX_STORE_U8(r31.u32 + -12, ctx.r11.u8);
	// lhz r11,1552(r23)
	ctx.r11.u64 = REX_LOAD_U16(r23.u32 + 1552);
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8211a8f0
	if (ctx.cr6.lt) goto loc_8211A8F0;
loc_8211AA0C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f84
	ctx.lr = 0x8211AA18;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82129DB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82129DC0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r31,r11,-24000
	r31.s64 = ctx.r11.s64 + -24000;
	// mulli r30,r10,76
	r30.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(76));
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// add r29,r30,r31
	r29.u64 = r30.u64 + r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82129df4
	if (ctx.cr6.eq) goto loc_82129DF4;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x82129df8
	goto loc_82129DF8;
loc_82129DF4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82129DF8:
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82129e1c
	if (!ctx.cr6.lt) goto loc_82129E1C;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821296d0
	ctx.lr = 0x82129E10;
	sub_821296D0(ctx, base);
	// addi r11,r31,152
	ctx.r11.s64 = r31.s64 + 152;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// b 0x82129e34
	goto loc_82129E34;
loc_82129E1C:
	// addi r11,r31,152
	ctx.r11.s64 = r31.s64 + 152;
	// subf r5,r10,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r10.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x821296d0
	ctx.lr = 0x82129E30;
	sub_821296D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82129E34:
	// bl 0x82129750
	ctx.lr = 0x82129E38;
	sub_82129750(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8212A8E0) {
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
	// beq cr6,0x8212a924
	if (ctx.cr6.eq) goto loc_8212A924;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,-29208
	ctx.r4.s64 = ctx.r11.s64 + -29208;
	// bl 0x822d60a0
	ctx.lr = 0x8212A90C;
	sub_822D60A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8212a924
	if (!ctx.cr0.eq) goto loc_8212A924;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// beq cr6,0x8212a928
	if (ctx.cr6.eq) goto loc_8212A928;
loc_8212A924:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8212A928:
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

DEFINE_REX_FUNC(sub_8212BB18) {
	REX_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// addi r11,r10,20148
	ctx.r11.s64 = ctx.r10.s64 + 20148;
	// mulli r10,r8,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(12));
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r9,15284
	ctx.r3.s64 = ctx.r9.s64 + 15284;
	// b 0x82246ca8
	sub_82246CA8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8212C018) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82203138
	ctx.lr = 0x8212C02C;
	sub_82203138(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82203138
	ctx.lr = 0x8212C034;
	sub_82203138(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212C708) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x8212c728
	if (!ctx.cr6.lt) goto loc_8212C728;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,-22928
	ctx.r11.s64 = ctx.r11.s64 + -22928;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x8212c74c
	goto loc_8212C74C;
loc_8212C728:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// addi r11,r11,-22928
	ctx.r11.s64 = ctx.r11.s64 + -22928;
	// ble cr6,0x8212c748
	if (!ctx.cr6.gt) goto loc_8212C748;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x8212c74c
	goto loc_8212C74C;
loc_8212C748:
	// stfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8212C74C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212E6B0) {
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
	ctx.lr = 0x8212E6B8;
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,-23696
	ctx.r10.s64 = ctx.r11.s64 + -23696;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,-23696(r11)
	REX_STORE_U32(ctx.r11.u32 + -23696, r30.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r30,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// stw r30,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r30.u32);
	// lbz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 0);
	// extsb r22,r10
	r22.s64 = ctx.r10.s8;
	// lha r24,98(r28)
	r24.s64 = int16_t(REX_LOAD_U16(r28.u32 + 98));
	// bl 0x8212aea0
	ctx.lr = 0x8212E6F0;
	sub_8212AEA0(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r11,31432
	r29.s64 = ctx.r11.s64 + 31432;
	// li r11,31
	ctx.r11.s64 = 31;
	// li r9,30
	ctx.r9.s64 = 30;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r27,r22,3,0,28
	r27.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 3) & 0xFFFFFFF8;
	// ld r11,-29132(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + -29132);
	// addi r23,r29,36
	r23.s64 = r29.s64 + 36;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// mr r31,r30
	r31.u64 = r30.u64;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// std r11,368(r1)
	REX_STORE_U64(ctx.r1.u32 + 368, ctx.r11.u64);
	// lis r11,10
	ctx.r11.s64 = 655360;
	// ori r26,r11,10240
	r26.u64 = ctx.r11.u64 | 10240;
loc_8212E730:
	// addi r11,r29,32
	ctx.r11.s64 = r29.s64 + 32;
	// lwzx r10,r27,r23
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + r23.u32);
	// rlwinm r21,r31,2,0,29
	r21.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,184
	ctx.r9.s64 = ctx.r1.s64 + 184;
	// addi r8,r1,196
	ctx.r8.s64 = ctx.r1.s64 + 196;
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// lwzx r6,r27,r11
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	// mullw r11,r31,r26
	ctx.r11.s64 = int64_t(r31.s32) * int64_t(r26.s32);
	// stwx r6,r21,r9
	REX_STORE_U32(r21.u32 + ctx.r9.u32, ctx.r6.u32);
	// stwx r10,r21,r8
	REX_STORE_U32(r21.u32 + ctx.r8.u32, ctx.r10.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,5
	ctx.r9.s64 = 5;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// stwx r9,r21,r7
	REX_STORE_U32(r21.u32 + ctx.r7.u32, ctx.r9.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stwx r11,r21,r10
	REX_STORE_U32(r21.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwzx r4,r21,r9
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + ctx.r9.u32);
	// bl 0x821c2d80
	ctx.lr = 0x8212E77C;
	sub_821C2D80(ctx, base);
	// addi r10,r1,220
	ctx.r10.s64 = ctx.r1.s64 + 220;
	// addi r11,r31,-2
	ctx.r11.s64 = r31.s64 + -2;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r1,244
	ctx.r8.s64 = ctx.r1.s64 + 244;
	// stwx r3,r21,r10
	REX_STORE_U32(r21.u32 + ctx.r10.u32, ctx.r3.u32);
	// addi r7,r1,232
	ctx.r7.s64 = ctx.r1.s64 + 232;
	// addi r9,r9,-12640
	ctx.r9.s64 = ctx.r9.s64 + -12640;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r10,r1,344
	ctx.r10.s64 = ctx.r1.s64 + 344;
	// addi r6,r1,356
	ctx.r6.s64 = ctx.r1.s64 + 356;
	// stwx r30,r21,r8
	REX_STORE_U32(r21.u32 + ctx.r8.u32, r30.u32);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// stwx r30,r21,r7
	REX_STORE_U32(r21.u32 + ctx.r7.u32, r30.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stwx r11,r21,r10
	REX_STORE_U32(r21.u32 + ctx.r10.u32, ctx.r11.u32);
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(r31.s32, 3, ctx.xer);
	// stwx r30,r21,r6
	REX_STORE_U32(r21.u32 + ctx.r6.u32, r30.u32);
	// blt cr6,0x8212e730
	if (ctx.cr6.lt) goto loc_8212E730;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r22,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, r22.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, r30.u32);
	// stb r11,328(r1)
	REX_STORE_U8(ctx.r1.u32 + 328, ctx.r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,329(r1)
	REX_STORE_U8(ctx.r1.u32 + 329, ctx.r11.u8);
	// stb r10,330(r1)
	REX_STORE_U8(ctx.r1.u32 + 330, ctx.r10.u8);
	// stw r28,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, r28.u32);
	// stw r26,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, r26.u32);
	// bl 0x8212cc18
	ctx.lr = 0x8212E7F4;
	sub_8212CC18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_82132DC8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// mulli r10,r4,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(24));
	// addi r8,r11,14448
	ctx.r8.s64 = ctx.r11.s64 + 14448;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwzx r8,r10,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r10,r10,22984
	ctx.r10.s64 = ctx.r10.s64 + 22984;
	// lbzx r10,r4,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
loc_82132DFC:
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// rlwinm. r6,r6,0,4,4
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82132e14
	if (ctx.cr0.eq) goto loc_82132E14;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82132E14:
	// addi r10,r10,58
	ctx.r10.s64 = ctx.r10.s64 + 58;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82132e2c
	if (ctx.cr0.eq) goto loc_82132E2C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82132E2C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82132dfc
	if (ctx.cr6.lt) goto loc_82132DFC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82133FE8) {
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
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// bl 0x82133b28
	ctx.lr = 0x82134008;
	sub_82133B28(ctx, base);
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x821340d4
	if (!ctx.cr6.lt) goto loc_821340D4;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mulli r11,r11,10
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(10));
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,614
	ctx.r11.s64 = ctx.r11.s64 + 614;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r11,r9
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mulli r11,r11,10
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(10));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,614
	ctx.r11.s64 = ctx.r11.s64 + 614;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r11,r9
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,21(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mulli r11,r11,10
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(10));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,614
	ctx.r11.s64 = ctx.r11.s64 + 614;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r11,r9
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,22(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 22);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x821340e4
	goto loc_821340E4;
loc_821340D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_821340E4:
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8213B0C8) {
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
	ctx.lr = 0x8213B0D0;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f24
	ctx.lr = 0x8213B0D8;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// stw r7,420(r1)
	REX_STORE_U32(ctx.r1.u32 + 420, ctx.r7.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r8,428(r1)
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r8.u32);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// stw r9,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r9.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mr r31,r30
	r31.u64 = r30.u64;
	// mr r26,r30
	r26.u64 = r30.u64;
	// mr r14,r30
	r14.u64 = r30.u64;
	// ble cr6,0x8213b3f8
	if (!ctx.cr6.gt) goto loc_8213B3F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// subf r16,r3,r5
	r16.u64 = ctx.r5.u64 - ctx.r3.u64;
	// subf r15,r3,r6
	r15.u64 = ctx.r6.u64 - ctx.r3.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f29,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f29.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f31,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lfs f30,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	f30.f64 = double(temp.f32);
	// addi r10,r10,-24252
	ctx.r10.s64 = ctx.r10.s64 + -24252;
	// lfs f26,28728(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 28728);
	f26.f64 = double(temp.f32);
	// addi r9,r9,-24260
	ctx.r9.s64 = ctx.r9.s64 + -24260;
	// lfs f25,-24244(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -24244);
	f25.f64 = double(temp.f32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// subf r21,r3,r4
	r21.u64 = ctx.r4.u64 - ctx.r3.u64;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r29,1
	r29.s64 = 1;
	// li r20,4
	r20.s64 = 4;
	// lis r23,-32169
	r23.s64 = -2108227584;
	// addi r18,r11,-8304
	r18.s64 = ctx.r11.s64 + -8304;
loc_8213B16C:
	// lfs f13,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r16,r28
	temp.u32 = REX_LOAD_U32(r16.u32 + r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfsx f13,r15,r28
	temp.u32 = REX_LOAD_U32(r15.u32 + r28.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r21,r28
	temp.u32 = REX_LOAD_U32(r21.u32 + r28.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmuls f1,f0,f25
	ctx.f1.f64 = double(float(ctx.f0.f64 * f25.f64));
	// bl 0x822d60f0
	ctx.lr = 0x8213B198;
	sub_822D60F0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f12,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f13,r16,r28
	temp.u32 = REX_LOAD_U32(r16.u32 + r28.u32);
	ctx.f13.f64 = double(temp.f32);
	// mr r24,r30
	r24.u64 = r30.u64;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfsx f11,r15,r28
	temp.u32 = REX_LOAD_U32(r15.u32 + r28.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f12,r21,r28
	temp.u32 = REX_LOAD_U32(r21.u32 + r28.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r19,100(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// extsw r11,r19
	ctx.r11.s64 = r19.s32;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f28,f13,f0
	f28.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fdivs f27,f12,f0
	f27.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// blt cr6,0x8213b3e8
	if (ctx.cr6.lt) goto loc_8213B3E8;
	// add r11,r19,r31
	ctx.r11.u64 = r19.u64 + r31.u64;
	// mulli r17,r31,-6
	r17.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(-6));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r22,r14,2,0,29
	r22.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_8213B1FC:
	// lwz r11,436(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213b230
	if (ctx.cr6.eq) goto loc_8213B230;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,428(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// addi r8,r11,-29824
	ctx.r8.s64 = ctx.r11.s64 + -29824;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821366d8
	ctx.lr = 0x8213B22C;
	sub_821366D8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_8213B230:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,428(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// addi r8,r11,-29824
	ctx.r8.s64 = ctx.r11.s64 + -29824;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821366d8
	ctx.lr = 0x8213B254;
	sub_821366D8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x8213b3d0
	if (ctx.cr0.eq) goto loc_8213B3D0;
	// extsw r11,r24
	ctx.r11.s64 = r24.s32;
	// lfsx f0,r22,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r22.u32 + r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f24,f13
	f24.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f24,f28,f0
	ctx.f1.f64 = double(float(std::fma(f24.f64, f28.f64, ctx.f0.f64)));
	// bl 0x822d6130
	ctx.lr = 0x8213B27C;
	sub_822D6130(ctx, base);
	// lfsx f0,r21,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r21.u32 + r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// frsp f23,f1
	f23.f64 = double(float(ctx.f1.f64));
	// fmadds f1,f24,f27,f0
	ctx.f1.f64 = double(float(std::fma(f24.f64, f27.f64, ctx.f0.f64)));
	// bl 0x822d6130
	ctx.lr = 0x8213B28C;
	sub_822D6130(ctx, base);
	// sth r29,18(r27)
	REX_STORE_U16(r27.u32 + 18, r29.u16);
	// addi r31,r27,80
	r31.s64 = r27.s64 + 80;
	// sth r29,88(r27)
	REX_STORE_U16(r27.u32 + 88, r29.u16);
	// li r10,55
	ctx.r10.s64 = 55;
	// addi r11,r31,32
	ctx.r11.s64 = r31.s64 + 32;
	// std r29,80(r27)
	REX_STORE_U64(r27.u32 + 80, r29.u64);
	// stb r29,90(r27)
	REX_STORE_U8(r27.u32 + 90, r29.u8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stb r30,91(r27)
	REX_STORE_U8(r27.u32 + 91, r30.u8);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stw r11,92(r27)
	REX_STORE_U32(r27.u32 + 92, ctx.r11.u32);
	// li r6,55
	ctx.r6.s64 = 55;
	// stw r30,96(r27)
	REX_STORE_U32(r27.u32 + 96, r30.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r20,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r20.u32);
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// lwz r11,23876(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 23876);
	// stfs f23,112(r27)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(r27.u32 + 112, temp.u32);
	// stw r11,100(r27)
	REX_STORE_U32(r27.u32 + 100, ctx.r11.u32);
	// stfs f0,116(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 116, temp.u32);
	// stfs f26,120(r27)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r27.u32 + 120, temp.u32);
	// stb r10,104(r27)
	REX_STORE_U8(r27.u32 + 104, ctx.r10.u8);
	// stfs f30,124(r27)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r27.u32 + 124, temp.u32);
	// stb r29,105(r27)
	REX_STORE_U8(r27.u32 + 105, r29.u8);
	// stfs f31,128(r27)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r27.u32 + 128, temp.u32);
	// stb r30,106(r27)
	REX_STORE_U8(r27.u32 + 106, r30.u8);
	// stfs f31,132(r27)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r27.u32 + 132, temp.u32);
	// stb r30,107(r27)
	REX_STORE_U8(r27.u32 + 107, r30.u8);
	// stfs f31,136(r27)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r27.u32 + 136, temp.u32);
	// stb r30,108(r27)
	REX_STORE_U8(r27.u32 + 108, r30.u8);
	// stfs f31,140(r27)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r27.u32 + 140, temp.u32);
	// stb r29,109(r27)
	REX_STORE_U8(r27.u32 + 109, r29.u8);
	// stb r30,110(r27)
	REX_STORE_U8(r27.u32 + 110, r30.u8);
	// stb r30,111(r27)
	REX_STORE_U8(r27.u32 + 111, r30.u8);
	// stw r9,144(r27)
	REX_STORE_U32(r27.u32 + 144, ctx.r9.u32);
	// lwz r5,23876(r23)
	ctx.r5.u64 = REX_LOAD_U32(r23.u32 + 23876);
	// bl 0x820e72c8
	ctx.lr = 0x8213B324;
	sub_820E72C8(ctx, base);
	// lwa r10,84(r1)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 84));
	// std r10,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f13,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// lwa r11,80(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 80));
	// stfs f30,168(r27)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r27.u32 + 168, temp.u32);
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfs f31,172(r27)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r27.u32 + 172, temp.u32);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// stfs f30,176(r27)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r27.u32 + 176, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f30,180(r27)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r27.u32 + 180, temp.u32);
	// sth r30,184(r27)
	REX_STORE_U16(r27.u32 + 184, r30.u16);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// stb r30,186(r27)
	REX_STORE_U8(r27.u32 + 186, r30.u8);
	// stb r29,188(r27)
	REX_STORE_U8(r27.u32 + 188, r29.u8);
	// stb r30,189(r27)
	REX_STORE_U8(r27.u32 + 189, r30.u8);
	// stb r29,187(r27)
	REX_STORE_U8(r27.u32 + 187, r29.u8);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// stfs f0,160(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 160, temp.u32);
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * f29.f64));
	// stfs f13,164(r27)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r27.u32 + 164, temp.u32);
	// stw r30,276(r27)
	REX_STORE_U32(r27.u32 + 276, r30.u32);
	// stw r30,284(r27)
	REX_STORE_U32(r27.u32 + 284, r30.u32);
	// lwz r11,48(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 48);
	// addis r11,r11,85
	ctx.r11.s64 = ctx.r11.s64 + 5570560;
	// addi r11,r11,29696
	ctx.r11.s64 = ctx.r11.s64 + 29696;
	// stw r11,256(r27)
	REX_STORE_U32(r27.u32 + 256, ctx.r11.u32);
	// beq cr6,0x8213b3d0
	if (ctx.cr6.eq) goto loc_8213B3D0;
	// addi r27,r26,80
	r27.s64 = r26.s64 + 80;
	// li r5,304
	ctx.r5.s64 = 304;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8213B3B4;
	sub_822D4FA0(ctx, base);
	// addi r11,r27,32
	ctx.r11.s64 = r27.s64 + 32;
	// li r10,56
	ctx.r10.s64 = 56;
	// stw r11,92(r26)
	REX_STORE_U32(r26.u32 + 92, ctx.r11.u32);
	// stb r10,104(r26)
	REX_STORE_U8(r26.u32 + 104, ctx.r10.u8);
	// sth r29,18(r26)
	REX_STORE_U16(r26.u32 + 18, r29.u16);
	// stw r29,276(r26)
	REX_STORE_U32(r26.u32 + 276, r29.u32);
	// stw r17,280(r26)
	REX_STORE_U32(r26.u32 + 280, r17.u32);
loc_8213B3D0:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r17,r17,-6
	r17.s64 = r17.s64 + -6;
	// cmpw cr6,r24,r19
	ctx.cr6.compare<int32_t>(r24.s32, r19.s32, ctx.xer);
	// ble cr6,0x8213b1fc
	if (!ctx.cr6.gt) goto loc_8213B1FC;
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r27,420(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
loc_8213B3E8:
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r14,r27
	ctx.cr6.compare<int32_t>(r14.s32, r27.s32, ctx.xer);
	// blt cr6,0x8213b16c
	if (ctx.cr6.lt) goto loc_8213B16C;
loc_8213B3F8:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f70
	ctx.lr = 0x8213B404;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8214FA28) {
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
	ctx.lr = 0x8214FA30;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f38
	ctx.lr = 0x8214FA38;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,192(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,-18816(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18816);
	f31.f64 = double(temp.f32);
	// lfd f29,-18824(r9)
	f29.u64 = REX_LOAD_U64(ctx.r9.u32 + -18824);
	// lfd f30,-18832(r8)
	f30.u64 = REX_LOAD_U64(ctx.r8.u32 + -18832);
	// beq cr6,0x8214fb0c
	if (ctx.cr6.eq) goto loc_8214FB0C;
	// lbz r11,188(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 188);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214fb0c
	if (ctx.cr0.eq) goto loc_8214FB0C;
	// addi r6,r3,112
	ctx.r6.s64 = ctx.r3.s64 + 112;
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r9,116(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r7,120(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r6,124(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lfs f13,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8214fb0c
	if (ctx.cr6.lt) goto loc_8214FB0C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-24180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24180);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8214fb0c
	if (ctx.cr6.gt) goto loc_8214FB0C;
	// stfd f30,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f30.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// addi r30,r11,-23788
	r30.s64 = ctx.r11.s64 + -23788;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821eacb0
	ctx.lr = 0x8214FAE0;
	sub_821EACB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f2,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8214c9c8
	ctx.lr = 0x8214FAF8;
	sub_8214C9C8(ctx, base);
	// stfd f29,24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 24, f29.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x821eacb0
	ctx.lr = 0x8214FB0C;
	sub_821EACB0(ctx, base);
loc_8214FB0C:
	// lbz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 188);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214fc04
	if (ctx.cr0.eq) goto loc_8214FC04;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r29,r11,432
	r29.s64 = ctx.r11.s64 + 432;
	// lha r11,30(r29)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r29.u32 + 30));
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8214fc04
	if (ctx.cr6.eq) goto loc_8214FC04;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x8214fc04
	if (ctx.cr6.eq) goto loc_8214FC04;
	// lbz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 104);
	// cmpwi cr6,r11,146
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 146, ctx.xer);
	// beq cr6,0x8214fb68
	if (ctx.cr6.eq) goto loc_8214FB68;
	// cmpwi cr6,r11,147
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 147, ctx.xer);
	// beq cr6,0x8214fb5c
	if (ctx.cr6.eq) goto loc_8214FB5C;
	// cmpwi cr6,r11,149
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 149, ctx.xer);
	// bne cr6,0x8214fc04
	if (!ctx.cr6.eq) goto loc_8214FC04;
	// lis r30,1792
	r30.s64 = 117440512;
	// ori r30,r30,91
	r30.u64 = r30.u64 | 91;
	// b 0x8214fb70
	goto loc_8214FB70;
loc_8214FB5C:
	// lis r30,1792
	r30.s64 = 117440512;
	// ori r30,r30,92
	r30.u64 = r30.u64 | 92;
	// b 0x8214fb70
	goto loc_8214FB70;
loc_8214FB68:
	// lis r30,1792
	r30.s64 = 117440512;
	// ori r30,r30,93
	r30.u64 = r30.u64 | 93;
loc_8214FB70:
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r8,120(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 120);
	// addi r7,r31,112
	ctx.r7.s64 = r31.s64 + 112;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r7,124(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 124);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r7,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// bl 0x821eb2c0
	ctx.lr = 0x8214FBA8;
	sub_821EB2C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,344(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 344);
	// lfs f28,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	f28.f64 = double(temp.f32);
	// bl 0x820e68b8
	ctx.lr = 0x8214FBB8;
	sub_820E68B8(ctx, base);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stfd f28,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f28.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f30,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f30.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfs f31,28(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// stfd f29,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, f29.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f4,f28
	ctx.f4.f64 = f28.f64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// addi r5,r11,-18852
	ctx.r5.s64 = ctx.r11.s64 + -18852;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f5,f29
	ctx.f5.f64 = f29.f64;
	// bl 0x821eaf80
	ctx.lr = 0x8214FC04;
	sub_821EAF80(ctx, base);
loc_8214FC04:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f84
	ctx.lr = 0x8214FC10;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8215C370) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r8,2(r4)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// sld r8,r10,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r8.u8 & 0x7F));
	// std r8,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r8.u64);
	// addi r9,r9,-16908
	ctx.r9.s64 = ctx.r9.s64 + -16908;
	// lwz r8,4(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r8,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// sth r10,20(r3)
	REX_STORE_U16(ctx.r3.u32 + 20, ctx.r10.u16);
	// lfs f0,1992(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lhz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// stb r10,22(r3)
	REX_STORE_U8(ctx.r3.u32 + 22, ctx.r10.u8);
	// lhz r10,2(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// stb r10,23(r3)
	REX_STORE_U8(ctx.r3.u32 + 23, ctx.r10.u8);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lfs f13,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f13,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f13,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f13,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f13,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f13,28(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f13,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f13,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f13,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lwz r11,44(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215DD28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8215DD30;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lha r3,8(r3)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 8));
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// rlwinm. r11,r4,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// beq 0x8215dde8
	if (ctx.cr0.eq) goto loc_8215DDE8;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
loc_8215DD54:
	// lhz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 8);
	// lha r10,4(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// sth r11,8(r31)
	REX_STORE_U16(r31.u32 + 8, ctx.r11.u16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8215dd7c
	if (!ctx.cr6.lt) goto loc_8215DD7C;
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 6);
	// sth r11,8(r31)
	REX_STORE_U16(r31.u32 + 8, ctx.r11.u16);
loc_8215DD7C:
	// lha r3,8(r31)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r31.u32 + 8));
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8215de88
	if (ctx.cr6.eq) goto loc_8215DE88;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215DDA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215dd54
	if (ctx.cr0.eq) goto loc_8215DD54;
	// lha r3,8(r31)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r31.u32 + 8));
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8215ddcc
	if (ctx.cr6.eq) goto loc_8215DDCC;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// blt cr6,0x8215dd54
	if (ctx.cr6.lt) goto loc_8215DD54;
loc_8215DDCC:
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215de88
	if (ctx.cr6.eq) goto loc_8215DE88;
	// lbz r11,2970(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 2970);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8215dd54
	if (!ctx.cr0.eq) goto loc_8215DD54;
	// b 0x8215de88
	goto loc_8215DE88;
loc_8215DDE8:
	// rlwinm. r11,r4,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215de88
	if (ctx.cr0.eq) goto loc_8215DE88;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
loc_8215DDF8:
	// lhz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 8);
	// lha r10,6(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// sth r11,8(r31)
	REX_STORE_U16(r31.u32 + 8, ctx.r11.u16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8215de20
	if (!ctx.cr6.gt) goto loc_8215DE20;
	// lhz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 4);
	// sth r11,8(r31)
	REX_STORE_U16(r31.u32 + 8, ctx.r11.u16);
loc_8215DE20:
	// lha r3,8(r31)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r31.u32 + 8));
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8215de88
	if (ctx.cr6.eq) goto loc_8215DE88;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215DE44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215ddf8
	if (ctx.cr0.eq) goto loc_8215DDF8;
	// lha r3,8(r31)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r31.u32 + 8));
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8215de70
	if (ctx.cr6.eq) goto loc_8215DE70;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// blt cr6,0x8215ddf8
	if (ctx.cr6.lt) goto loc_8215DDF8;
loc_8215DE70:
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215de88
	if (ctx.cr6.eq) goto loc_8215DE88;
	// lbz r11,2970(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 2970);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8215ddf8
	if (!ctx.cr0.eq) goto loc_8215DDF8;
loc_8215DE88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82169B60) {
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
	// bl 0x820e01b0
	ctx.lr = 0x82169B78;
	sub_820E01B0(ctx, base);
	// lha r10,72(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 72));
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82169ba0
	if (!ctx.cr0.gt) goto loc_82169BA0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82169B90:
	// stb r10,65(r11)
	REX_STORE_U8(ctx.r11.u32 + 65, ctx.r10.u8);
	// stb r10,64(r11)
	REX_STORE_U8(ctx.r11.u32 + 64, ctx.r10.u8);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bdnz 0x82169b90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82169B90;
loc_82169BA0:
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

DEFINE_REX_FUNC(sub_8216A468) {
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
	ctx.lr = 0x8216A470;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f38
	ctx.lr = 0x8216A478;
	// li r12,-25104
	ctx.r12.s64 = -25104;
	// bl 0x822d6634
	ctx.lr = 0x8216A480;
	sub_822D6634(ctx, base);
	// stwux r1,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// stw r3,25124(r1)
	REX_STORE_U32(ctx.r1.u32 + 25124, ctx.r3.u32);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// stw r4,25132(r1)
	REX_STORE_U32(ctx.r1.u32 + 25132, ctx.r4.u32);
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// lwz r11,24584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24584);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8216ae94
	if (!ctx.cr6.eq) goto loc_8216AE94;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lha r29,72(r3)
	r29.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 72));
	// lwz r30,68(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// lfs f29,2000(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	f29.f64 = double(temp.f32);
	// li r21,0
	r21.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// addi r31,r1,368
	r31.s64 = ctx.r1.s64 + 368;
	// cmpwi r29,0
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble 0x8216a524
	if (!ctx.cr0.gt) goto loc_8216A524;
loc_8216A4C8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x8216a4fc
	if (!ctx.cr6.eq) goto loc_8216A4FC;
	// lbz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 64);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8216a4fc
	if (ctx.cr0.eq) goto loc_8216A4FC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82169368
	ctx.lr = 0x8216A4E8;
	sub_82169368(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// bl 0x82169478
	ctx.lr = 0x8216A4F4;
	sub_82169478(ctx, base);
	// addi r31,r31,76
	r31.s64 = r31.s64 + 76;
	// b 0x8216a510
	goto loc_8216A510;
loc_8216A4FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r28,1
	r28.s64 = 1;
	// addi r31,r31,76
	r31.s64 = r31.s64 + 76;
	// bl 0x82169368
	ctx.lr = 0x8216A510;
	sub_82169368(ctx, base);
loc_8216A510:
	// lwz r30,24(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 24);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bgt 0x8216a4c8
	if (ctx.cr0.gt) goto loc_8216A4C8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x8216ad60
	if (!ctx.cr6.eq) goto loc_8216AD60;
loc_8216A524:
	// lha r26,72(r16)
	r26.s64 = int16_t(REX_LOAD_U16(r16.u32 + 72));
	// addi r31,r1,368
	r31.s64 = ctx.r1.s64 + 368;
	// cmpwi r26,0
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble 0x8216a600
	if (!ctx.cr0.gt) goto loc_8216A600;
loc_8216A534:
	// lbz r27,26(r31)
	r27.u64 = REX_LOAD_U8(r31.u32 + 26);
	// addi r11,r31,48
	ctx.r11.s64 = r31.s64 + 48;
	// addi r29,r11,16
	r29.s64 = ctx.r11.s64 + 16;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmpwi r27,0
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble 0x8216a5f4
	if (!ctx.cr0.gt) goto loc_8216A5F4;
loc_8216A54C:
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 0);
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	f31.f64 = double(temp.f32);
	// mulli r10,r10,76
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(76));
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x820e2148
	ctx.lr = 0x8216A56C;
	sub_820E2148(ctx, base);
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 * f31.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x8216a5e4
	if (!ctx.cr6.lt) goto loc_8216A5E4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fsqrts f30,f1
	f30.f64 = double(float(sqrt(ctx.f1.f64)));
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x820e1ba8
	ctx.lr = 0x8216A58C;
	sub_820E1BA8(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 - f31.f64));
	// fdivs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 / f30.f64));
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * f29.f64));
	// bl 0x820e1cc0
	ctx.lr = 0x8216A5A4;
	sub_820E1CC0(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e1ba8
	ctx.lr = 0x8216A5B4;
	sub_820E1BA8(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e1b28
	ctx.lr = 0x8216A5C4;
	sub_820E1B28(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82169478
	ctx.lr = 0x8216A5D4;
	sub_82169478(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82169478
	ctx.lr = 0x8216A5E4;
	sub_82169478(ctx, base);
loc_8216A5E4:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bgt 0x8216a54c
	if (ctx.cr0.gt) goto loc_8216A54C;
loc_8216A5F4:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r31,r31,76
	r31.s64 = r31.s64 + 76;
	// bgt 0x8216a534
	if (ctx.cr0.gt) goto loc_8216A534;
loc_8216A600:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lha r22,72(r16)
	r22.s64 = int16_t(REX_LOAD_U16(r16.u32 + 72));
	// lfs f30,2020(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2020);
	f30.f64 = double(temp.f32);
	// cmpwi r22,0
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble 0x8216a998
	if (!ctx.cr0.gt) goto loc_8216A998;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r1,388
	r28.s64 = ctx.r1.s64 + 388;
	// lfs f31,-11656(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11656);
	f31.f64 = double(temp.f32);
loc_8216A620:
	// lbz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 4);
	// lwz r23,8(r28)
	r23.u64 = REX_LOAD_U32(r28.u32 + 8);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8216a644
	if (!ctx.cr0.lt) goto loc_8216A644;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x821692c0
	ctx.lr = 0x8216A640;
	sub_821692C0(ctx, base);
	// b 0x8216a674
	goto loc_8216A674;
loc_8216A644:
	// mulli r10,r11,76
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(76));
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r8,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
loc_8216A674:
	// lbz r11,52(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 52);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8216a700
	if (ctx.cr0.eq) goto loc_8216A700;
	// lbz r10,44(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 44);
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// mulli r10,r10,76
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(76));
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 24);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8216a6b0
	if (!ctx.cr0.lt) goto loc_8216A6B0;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x821692c0
	ctx.lr = 0x8216A6AC;
	sub_821692C0(ctx, base);
	// b 0x8216a6e0
	goto loc_8216A6E0;
loc_8216A6B0:
	// mulli r10,r11,76
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(76));
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r8,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
loc_8216A6E0:
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r28,-20
	ctx.r3.s64 = r28.s64 + -20;
	// bl 0x820e1ba8
	ctx.lr = 0x8216A6F0;
	sub_820E1BA8(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x820e1b28
	ctx.lr = 0x8216A6FC;
	sub_820E1B28(ctx, base);
	// b 0x8216a98c
	goto loc_8216A98C;
loc_8216A700:
	// addi r27,r28,-20
	r27.s64 = r28.s64 + -20;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r26,r28,12
	r26.s64 = r28.s64 + 12;
	// addi r25,r28,48
	r25.s64 = r28.s64 + 48;
	// bl 0x82169478
	ctx.lr = 0x8216A71C;
	sub_82169478(ctx, base);
	// lbz r24,5(r28)
	r24.u64 = REX_LOAD_U8(r28.u32 + 5);
	// cmpwi r24,0
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble 0x8216a98c
	if (!ctx.cr0.gt) goto loc_8216A98C;
loc_8216A728:
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r1,16720
	ctx.r11.s64 = ctx.r1.s64 + 16720;
	// lwz r31,0(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rotlwi r10,r10,7
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 7);
	// sld r30,r9,r8
	r30.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// and r9,r30,r21
	ctx.r9.u64 = r30.u64 & r21.u64;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x8216a778
	if (!ctx.cr6.eq) goto loc_8216A778;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8216A764;
	sub_822D4FA0(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x822d4fa0
	ctx.lr = 0x8216A774;
	sub_822D4FA0(ctx, base);
	// or r21,r30,r21
	r21.u64 = r30.u64 | r21.u64;
loc_8216A778:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1df8
	ctx.lr = 0x8216A788;
	sub_820E1DF8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x820e1b28
	ctx.lr = 0x8216A798;
	sub_820E1B28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x820e1cc0
	ctx.lr = 0x8216A7A4;
	sub_820E1CC0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x820e1ba8
	ctx.lr = 0x8216A7B4;
	sub_820E1BA8(ctx, base);
	// bl 0x820e2128
	ctx.lr = 0x8216A7B8;
	sub_820E2128(ctx, base);
	// fsqrts f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f1.f64)));
	// lfs f13,-4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bl 0x820e1cc0
	ctx.lr = 0x8216A7D0;
	sub_820E1CC0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x820e1b28
	ctx.lr = 0x8216A7DC;
	sub_820E1B28(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r20,r1,160
	r20.s64 = ctx.r1.s64 + 160;
	// addi r30,r29,64
	r30.s64 = r29.s64 + 64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r19,0(r11)
	r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r18,4(r11)
	r18.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r15,8(r11)
	r15.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r19,0(r20)
	REX_STORE_U32(r20.u32 + 0, r19.u32);
	// stw r18,4(r20)
	REX_STORE_U32(r20.u32 + 4, r18.u32);
	// stw r15,8(r20)
	REX_STORE_U32(r20.u32 + 8, r15.u32);
	// stw r11,12(r20)
	REX_STORE_U32(r20.u32 + 12, ctx.r11.u32);
	// bl 0x8216a2a8
	ctx.lr = 0x8216A82C;
	sub_8216A2A8(ctx, base);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216a8cc
	if (ctx.cr0.eq) goto loc_8216A8CC;
	// lbz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 4);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8216a8cc
	if (ctx.cr0.lt) goto loc_8216A8CC;
	// mulli r9,r11,76
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(76));
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// lbz r9,25(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 25);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x8216a880
	if (!ctx.cr0.gt) goto loc_8216A880;
loc_8216A860:
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r31.u32, ctx.xer);
	// beq cr6,0x8216a880
	if (ctx.cr6.eq) goto loc_8216A880;
	// lbz r7,25(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 25);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8216a860
	if (ctx.cr6.lt) goto loc_8216A860;
loc_8216A880:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8216a8cc
	if (ctx.cr6.lt) goto loc_8216A8CC;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bge cr6,0x8216a8cc
	if (!ctx.cr6.lt) goto loc_8216A8CC;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// lwz r7,20(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mulli r9,r10,84
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(84));
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r8,25(r11)
	REX_STORE_U8(ctx.r11.u32 + 25, ctx.r8.u8);
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// sth r8,74(r7)
	REX_STORE_U16(ctx.r7.u32 + 74, ctx.r8.u16);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, r31.u32);
	// stwx r31,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, r31.u32);
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// stb r11,68(r5)
	REX_STORE_U8(ctx.r5.u32 + 68, ctx.r11.u8);
loc_8216A8CC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216a8f0
	if (ctx.cr6.eq) goto loc_8216A8F0;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x8216a8f0
	if (!ctx.cr6.gt) goto loc_8216A8F0;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8216a8f0
	if (!ctx.cr6.lt) goto loc_8216A8F0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// b 0x8216a95c
	goto loc_8216A95C;
loc_8216A8F0:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r20,r1,160
	r20.s64 = ctx.r1.s64 + 160;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r29,4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r19,8(r11)
	r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r20)
	REX_STORE_U32(r20.u32 + 0, r30.u32);
	// stw r29,4(r20)
	REX_STORE_U32(r20.u32 + 4, r29.u32);
	// stw r19,8(r20)
	REX_STORE_U32(r20.u32 + 8, r19.u32);
	// stw r11,12(r20)
	REX_STORE_U32(r20.u32 + 12, ctx.r11.u32);
	// bl 0x8216a2a8
	ctx.lr = 0x8216A93C;
	sub_8216A2A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8216a978
	if (ctx.cr0.eq) goto loc_8216A978;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x8216a978
	if (!ctx.cr6.gt) goto loc_8216A978;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8216a978
	if (!ctx.cr6.lt) goto loc_8216A978;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_8216A95C:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x820e1b28
	ctx.lr = 0x8216A968;
	sub_820E1B28(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82169478
	ctx.lr = 0x8216A978;
	sub_82169478(ctx, base);
loc_8216A978:
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r23,r23,84
	r23.s64 = r23.s64 + 84;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// bgt 0x8216a728
	if (ctx.cr0.gt) goto loc_8216A728;
loc_8216A98C:
	// addic. r22,r22,-1
	ctx.xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// addi r28,r28,76
	r28.s64 = r28.s64 + 76;
	// bgt 0x8216a620
	if (ctx.cr0.gt) goto loc_8216A620;
loc_8216A998:
	// lha r26,72(r16)
	r26.s64 = int16_t(REX_LOAD_U16(r16.u32 + 72));
	// addi r31,r1,368
	r31.s64 = ctx.r1.s64 + 368;
	// cmpwi r26,0
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble 0x8216aa74
	if (!ctx.cr0.gt) goto loc_8216AA74;
loc_8216A9A8:
	// lbz r27,26(r31)
	r27.u64 = REX_LOAD_U8(r31.u32 + 26);
	// addi r11,r31,48
	ctx.r11.s64 = r31.s64 + 48;
	// addi r29,r11,16
	r29.s64 = ctx.r11.s64 + 16;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmpwi r27,0
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble 0x8216aa68
	if (!ctx.cr0.gt) goto loc_8216AA68;
loc_8216A9C0:
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 0);
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	f31.f64 = double(temp.f32);
	// mulli r10,r10,76
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(76));
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x820e2148
	ctx.lr = 0x8216A9E0;
	sub_820E2148(ctx, base);
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 * f31.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x8216aa58
	if (!ctx.cr6.lt) goto loc_8216AA58;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fsqrts f28,f1
	f28.f64 = double(float(sqrt(ctx.f1.f64)));
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x820e1ba8
	ctx.lr = 0x8216AA00;
	sub_820E1BA8(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// fsubs f0,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f28.f64 - f31.f64));
	// fdivs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 / f28.f64));
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * f29.f64));
	// bl 0x820e1cc0
	ctx.lr = 0x8216AA18;
	sub_820E1CC0(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e1ba8
	ctx.lr = 0x8216AA28;
	sub_820E1BA8(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e1b28
	ctx.lr = 0x8216AA38;
	sub_820E1B28(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82169478
	ctx.lr = 0x8216AA48;
	sub_82169478(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82169478
	ctx.lr = 0x8216AA58;
	sub_82169478(ctx, base);
loc_8216AA58:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bgt 0x8216a9c0
	if (ctx.cr0.gt) goto loc_8216A9C0;
loc_8216AA68:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r31,r31,76
	r31.s64 = r31.s64 + 76;
	// bgt 0x8216a9a8
	if (ctx.cr0.gt) goto loc_8216A9A8;
loc_8216AA74:
	// lha r18,72(r16)
	r18.s64 = int16_t(REX_LOAD_U16(r16.u32 + 72));
	// cmpwi r18,0
	ctx.cr0.compare<int32_t>(r18.s32, 0, ctx.xer);
	// ble 0x8216ad60
	if (!ctx.cr0.gt) goto loc_8216AD60;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r1,400
	r31.s64 = ctx.r1.s64 + 400;
	// lfs f31,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
loc_8216AA8C:
	// lbz r19,-5(r31)
	r19.u64 = REX_LOAD_U8(r31.u32 + -5);
	// mr r22,r31
	r22.u64 = r31.u64;
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -4);
	// addi r21,r31,36
	r21.s64 = r31.s64 + 36;
	// cmpwi r19,0
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// ble 0x8216ad54
	if (!ctx.cr0.gt) goto loc_8216AD54;
	// addi r20,r11,16
	r20.s64 = ctx.r11.s64 + 16;
loc_8216AAA8:
	// lbz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U8(r21.u32 + 0);
	// addi r11,r1,16720
	ctx.r11.s64 = ctx.r1.s64 + 16720;
	// lbz r9,-6(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + -6);
	// li r27,0
	r27.s64 = 0;
	// rotlwi r10,r10,7
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 7);
	// lwz r24,0(r22)
	r24.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq 0x8216ad40
	if (ctx.cr0.eq) goto loc_8216AD40;
	// addi r23,r31,32
	r23.s64 = r31.s64 + 32;
	// addi r25,r28,64
	r25.s64 = r28.s64 + 64;
	// mr r26,r20
	r26.u64 = r20.u64;
loc_8216AAD8:
	// lbzx r11,r23,r27
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + r27.u32);
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// lbz r8,-8(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + -8);
	// mulli r9,r11,76
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(76));
	// extsb. r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r29,r9,r10
	r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bge 0x8216ab08
	if (!ctx.cr0.lt) goto loc_8216AB08;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// lwz r3,-12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -12);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x821692c0
	ctx.lr = 0x8216AB04;
	sub_821692C0(ctx, base);
	// b 0x8216ab38
	goto loc_8216AB38;
loc_8216AB08:
	// mulli r10,r11,76
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(76));
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r8,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
loc_8216AB38:
	// lbz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 24);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8216ab58
	if (!ctx.cr0.lt) goto loc_8216AB58;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// lwz r3,20(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 20);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x821692c0
	ctx.lr = 0x8216AB54;
	sub_821692C0(ctx, base);
	// b 0x8216ab88
	goto loc_8216AB88;
loc_8216AB58:
	// mulli r10,r11,76
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(76));
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r8,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
loc_8216AB88:
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x820e1b28
	ctx.lr = 0x8216AB98;
	sub_820E1B28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x820e1cc0
	ctx.lr = 0x8216ABA4;
	sub_820E1CC0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1df8
	ctx.lr = 0x8216ABB4;
	sub_820E1DF8(ctx, base);
	// addi r30,r31,-32
	r30.s64 = r31.s64 + -32;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x820e1b28
	ctx.lr = 0x8216ABC8;
	sub_820E1B28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x820e1cc0
	ctx.lr = 0x8216ABD4;
	sub_820E1CC0(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x820e1b28
	ctx.lr = 0x8216ABE4;
	sub_820E1B28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x820e1cc0
	ctx.lr = 0x8216ABF0;
	sub_820E1CC0(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r17,r1,96
	r17.s64 = ctx.r1.s64 + 96;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r16,0(r11)
	r16.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r15,4(r11)
	r15.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r14,8(r11)
	r14.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r16,0(r17)
	REX_STORE_U32(r17.u32 + 0, r16.u32);
	// stw r15,4(r17)
	REX_STORE_U32(r17.u32 + 4, r15.u32);
	// stw r14,8(r17)
	REX_STORE_U32(r17.u32 + 8, r14.u32);
	// stw r11,12(r17)
	REX_STORE_U32(r17.u32 + 12, ctx.r11.u32);
	// bl 0x8216a2a8
	ctx.lr = 0x8216AC3C;
	sub_8216A2A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8216acbc
	if (ctx.cr0.eq) goto loc_8216ACBC;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x8216acbc
	if (!ctx.cr6.gt) goto loc_8216ACBC;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8216acbc
	if (!ctx.cr6.lt) goto loc_8216ACBC;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1b28
	ctx.lr = 0x8216AC68;
	sub_820E1B28(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x820e1ba8
	ctx.lr = 0x8216AC74;
	sub_820E1BA8(ctx, base);
loc_8216AC74:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e1b28
	ctx.lr = 0x8216AC84;
	sub_820E1B28(ctx, base);
	// lwz r17,25132(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 25132);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82169478
	ctx.lr = 0x8216AC98;
	sub_82169478(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e1b28
	ctx.lr = 0x8216ACA8;
	sub_820E1B28(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82169478
	ctx.lr = 0x8216ACB8;
	sub_82169478(ctx, base);
	// b 0x8216ad28
	goto loc_8216AD28;
loc_8216ACBC:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r17,r1,96
	r17.s64 = ctx.r1.s64 + 96;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r16,0(r11)
	r16.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r15,4(r11)
	r15.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r14,8(r11)
	r14.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r16,0(r17)
	REX_STORE_U32(r17.u32 + 0, r16.u32);
	// stw r15,4(r17)
	REX_STORE_U32(r17.u32 + 4, r15.u32);
	// stw r14,8(r17)
	REX_STORE_U32(r17.u32 + 8, r14.u32);
	// stw r11,12(r17)
	REX_STORE_U32(r17.u32 + 12, ctx.r11.u32);
	// bl 0x8216a2a8
	ctx.lr = 0x8216AD08;
	sub_8216A2A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8216ad24
	if (ctx.cr0.eq) goto loc_8216AD24;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x8216ad24
	if (!ctx.cr6.gt) goto loc_8216AD24;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x8216ac74
	if (ctx.cr6.lt) goto loc_8216AC74;
loc_8216AD24:
	// lwz r17,25132(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 25132);
loc_8216AD28:
	// lbz r11,-6(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + -6);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,16
	r26.s64 = r26.s64 + 16;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8216aad8
	if (ctx.cr6.lt) goto loc_8216AAD8;
	// lwz r16,25124(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 25124);
loc_8216AD40:
	// addic. r19,r19,-1
	ctx.xer.ca = r19.u32 > 0;
	r19.s64 = r19.s64 + -1;
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// addi r20,r20,84
	r20.s64 = r20.s64 + 84;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// bgt 0x8216aaa8
	if (ctx.cr0.gt) goto loc_8216AAA8;
loc_8216AD54:
	// addic. r18,r18,-1
	ctx.xer.ca = r18.u32 > 0;
	r18.s64 = r18.s64 + -1;
	ctx.cr0.compare<int32_t>(r18.s32, 0, ctx.xer);
	// addi r31,r31,76
	r31.s64 = r31.s64 + 76;
	// bgt 0x8216aa8c
	if (ctx.cr0.gt) goto loc_8216AA8C;
loc_8216AD60:
	// lha r30,72(r16)
	r30.s64 = int16_t(REX_LOAD_U16(r16.u32 + 72));
	// cmpwi r30,0
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x8216adec
	if (!ctx.cr0.gt) goto loc_8216ADEC;
	// addi r31,r1,388
	r31.s64 = ctx.r1.s64 + 388;
loc_8216AD70:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r9,r31,-20
	ctx.r9.s64 = r31.s64 + -20;
	// lwz r10,-20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + -20);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r9,r11,92
	ctx.r9.s64 = ctx.r11.s64 + 92;
	// stw r10,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// lwz r10,-16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + -16);
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r10,-12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + -12);
	// stw r10,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// lwz r10,-8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + -8);
	// stw r10,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216ADB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r31,-20
	ctx.r10.s64 = r31.s64 + -20;
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r9,r11,92
	ctx.r9.s64 = ctx.r11.s64 + 92;
	// addi r31,r31,76
	r31.s64 = r31.s64 + 76;
	// lwz r9,92(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,96(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,100(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bgt 0x8216ad70
	if (ctx.cr0.gt) goto loc_8216AD70;
loc_8216ADEC:
	// lha r24,72(r16)
	r24.s64 = int16_t(REX_LOAD_U16(r16.u32 + 72));
	// cmpwi r24,0
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble 0x8216ae94
	if (!ctx.cr0.gt) goto loc_8216AE94;
	// addi r29,r1,393
	r29.s64 = ctx.r1.s64 + 393;
loc_8216ADFC:
	// lbz r26,0(r29)
	r26.u64 = REX_LOAD_U8(r29.u32 + 0);
	// lwz r11,3(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 3);
	// cmpwi r26,0
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble 0x8216ae88
	if (!ctx.cr0.gt) goto loc_8216AE88;
	// addi r25,r29,39
	r25.s64 = r29.s64 + 39;
	// addi r27,r11,80
	r27.s64 = ctx.r11.s64 + 80;
loc_8216AE14:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// addi r30,r27,-64
	r30.s64 = r27.s64 + -64;
	// bl 0x822d4fa0
	ctx.lr = 0x8216AE2C;
	sub_822D4FA0(ctx, base);
	// lbz r31,1(r29)
	r31.u64 = REX_LOAD_U8(r29.u32 + 1);
	// cmpwi r31,0
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble 0x8216ae7c
	if (!ctx.cr0.gt) goto loc_8216AE7C;
	// addi r28,r25,-1
	r28.s64 = r25.s64 + -1;
loc_8216AE3C:
	// lbzu r11,1(r28)
	ea = 1 + r28.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r28.u32 = ea;
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// addi r4,r29,-25
	ctx.r4.s64 = r29.s64 + -25;
	// mulli r11,r11,76
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(76));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x820e1b28
	ctx.lr = 0x8216AE58;
	sub_820E1B28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x820e1cc0
	ctx.lr = 0x8216AE64;
	sub_820E1CC0(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x820e1df8
	ctx.lr = 0x8216AE70;
	sub_820E1DF8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// bgt 0x8216ae3c
	if (ctx.cr0.gt) goto loc_8216AE3C;
loc_8216AE7C:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r27,r27,84
	r27.s64 = r27.s64 + 84;
	// bgt 0x8216ae14
	if (ctx.cr0.gt) goto loc_8216AE14;
loc_8216AE88:
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r29,r29,76
	r29.s64 = r29.s64 + 76;
	// bgt 0x8216adfc
	if (ctx.cr0.gt) goto loc_8216ADFC;
loc_8216AE94:
	// addi r1,r1,25104
	ctx.r1.s64 = ctx.r1.s64 + 25104;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f84
	ctx.lr = 0x8216AEA0;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8218A490) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218a4a4
	if (ctx.cr6.eq) goto loc_8218A4A4;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x8218a4a8
	goto loc_8218A4A8;
loc_8218A4A4:
	// li r11,2
	ctx.r11.s64 = 2;
loc_8218A4A8:
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// mulli r11,r11,48
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(48));
	// addi r10,r10,27824
	ctx.r10.s64 = ctx.r10.s64 + 27824;
	// li r9,2
	ctx.r9.s64 = 2;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// fsubs f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// stfs f2,24(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f1,44(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f3,12(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218C160) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218c190
	if (ctx.cr6.eq) goto loc_8218C190;
	// lbz r10,103(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 103);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8218c190
	if (ctx.cr0.eq) goto loc_8218C190;
	// lha r10,16(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 16));
	// rlwinm r10,r10,0,21,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// b 0x8218c198
	goto loc_8218C198;
loc_8218C190:
	// lhz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
loc_8218C198:
	// sth r10,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218DD78) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218ddb0
	if (ctx.cr6.eq) goto loc_8218DDB0;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x8218ddb4
	goto loc_8218DDB4;
loc_8218DDB0:
	// li r11,6
	ctx.r11.s64 = 6;
loc_8218DDB4:
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,30520
	ctx.r10.s64 = ctx.r10.s64 + 30520;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r8,2536
	ctx.r6.s64 = ctx.r8.s64 + 2536;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x8218DDE4;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8218de38
	if (ctx.cr0.eq) goto loc_8218DE38;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r11,r11,2516
	ctx.r11.s64 = ctx.r11.s64 + 2516;
	// lfs f0,16308(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16308);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f13,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,7792(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 7792);
	// lfs f10,5016(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5016);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,26528(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 26528);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-30168(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -30168);
	ctx.f11.f64 = double(temp.f32);
	// stfs f10,80(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f13,88(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f12,92(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f11,96(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 96, temp.u32);
loc_8218DE38:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a7bb0
	ctx.lr = 0x8218DE48;
	sub_821A7BB0(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	r31.s64 = 0;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// lfs f30,-8496(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -8496);
	f30.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// li r4,8
	ctx.r4.s64 = 8;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// li r3,53
	ctx.r3.s64 = 53;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// bl 0x8219f6e0
	ctx.lr = 0x8218DE90;
	sub_8219F6E0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a7bb0
	ctx.lr = 0x8218DEA0;
	sub_821A7BB0(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// li r3,54
	ctx.r3.s64 = 54;
	// bl 0x8219f6e0
	ctx.lr = 0x8218DED4;
	sub_8219F6E0(ctx, base);
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

DEFINE_REX_FUNC(sub_82193DF8) {
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
	ctx.lr = 0x82193E10;
	sub_82192ED8(ctx, base);
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r10,r10,-32576
	ctx.r10.s64 = ctx.r10.s64 + -32576;
	// stw r11,140(r10)
	REX_STORE_U32(ctx.r10.u32 + 140, ctx.r11.u32);
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// bl 0x82102738
	ctx.lr = 0x82193E28;
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
	ctx.lr = 0x82193E40;
	sub_82106460(ctx, base);
	// stw r3,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_82195C40) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e80
	ctx.lr = 0x82195C48;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f28
	ctx.lr = 0x82195C50;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,4056
	ctx.r11.s64 = ctx.r11.s64 + 4056;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// bl 0x820e4bb0
	ctx.lr = 0x82195C7C;
	sub_820E4BB0(ctx, base);
	// stw r3,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r29,r31,100
	r29.s64 = r31.s64 + 100;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x82195CB4;
	sub_822D4FA0(ctx, base);
	// stb r26,164(r31)
	REX_STORE_U8(r31.u32 + 164, r26.u8);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82191bb0
	ctx.lr = 0x82195CC0;
	sub_82191BB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fmr f12,f1
	ctx.f12.f64 = ctx.f1.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f1,88(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f26,28312(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28312);
	f26.f64 = double(temp.f32);
	// lfs f28,28556(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28556);
	f28.f64 = double(temp.f32);
	// fadds f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 + f26.f64));
	// lfs f25,4008(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4008);
	f25.f64 = double(temp.f32);
	// fadds f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 + f28.f64));
	// lfs f24,-24932(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -24932);
	f24.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f30,1996(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	f30.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f31,1992(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 1992);
	f31.f64 = double(temp.f32);
	// li r4,86
	ctx.r4.s64 = 86;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 132);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f25,80(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f24,84(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x821918a0
	ctx.lr = 0x82195D40;
	sub_821918A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r3.u32);
	// stfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r3,11
	ctx.r3.s64 = 11;
	// lfs f27,15968(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15968);
	f27.f64 = double(temp.f32);
	// stfs f27,80(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f27,84(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82191bb0
	ctx.lr = 0x82195D64;
	sub_82191BB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,120(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 120);
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f13,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 132);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f0,26840(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26840);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821919e8
	ctx.lr = 0x82195DA0;
	sub_821919E8(ctx, base);
	// lbz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 164);
	// stw r3,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r3.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82195e2c
	if (ctx.cr0.eq) goto loc_82195E2C;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x82191bb0
	ctx.lr = 0x82195DB8;
	sub_82191BB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f13,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,29456(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 29456);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-32480(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x82195E04;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82195e24
	if (ctx.cr0.eq) goto loc_82195E24;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 132);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82199aa8
	ctx.lr = 0x82195E20;
	sub_82199AA8(ctx, base);
	// b 0x82195e28
	goto loc_82195E28;
loc_82195E24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82195E28:
	// stw r3,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r3.u32);
loc_82195E2C:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822c80d0
	ctx.lr = 0x82195E34;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82195e4c
	if (ctx.cr0.eq) goto loc_82195E4C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x820e7330
	ctx.lr = 0x82195E48;
	sub_820E7330(ctx, base);
	// b 0x82195e50
	goto loc_82195E50;
loc_82195E4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82195E50:
	// stw r3,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f2,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// li r28,-1
	r28.s64 = -1;
	// lfs f1,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lfs f31,-30184(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30184);
	f31.f64 = double(temp.f32);
	// lfs f30,-12892(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -12892);
	f30.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// bl 0x820e7428
	ctx.lr = 0x82195E84;
	sub_820E7428(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,168(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f26
	ctx.f12.f64 = double(float(ctx.f0.f64 + f26.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f29,-8492(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8492);
	f29.f64 = double(temp.f32);
	// lfs f13,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 + f29.f64));
	// lfs f0,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fnmsubs f1,f0,f13,f12
	ctx.f1.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f12.f64)));
	// lfs f11,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x820e7380
	ctx.lr = 0x82195EC0;
	sub_820E7380(ctx, base);
	// lis r10,15
	ctx.r10.s64 = 983040;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// ori r10,r10,16959
	ctx.r10.u64 = ctx.r10.u64 | 16959;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82195ed8
	if (ctx.cr6.lt) goto loc_82195ED8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82195ED8:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r29,r10,4052
	r29.s64 = ctx.r10.s64 + 4052;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822d55f8
	ctx.lr = 0x82195EF0;
	sub_822D55F8(ctx, base);
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822c80d0
	ctx.lr = 0x82195EF8;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82195f10
	if (ctx.cr0.eq) goto loc_82195F10;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x820e7330
	ctx.lr = 0x82195F0C;
	sub_820E7330(ctx, base);
	// b 0x82195f14
	goto loc_82195F14;
loc_82195F10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82195F14:
	// stw r3,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r3.u32);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f2,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// bl 0x820e7428
	ctx.lr = 0x82195F34;
	sub_820E7428(ctx, base);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// fadds f11,f0,f25
	ctx.f11.f64 = double(float(ctx.f0.f64 + f25.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,4048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4048);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2332(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2332);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f0,f28
	ctx.f10.f64 = double(float(ctx.f0.f64 + f28.f64));
	// lfs f0,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - f29.f64));
	// fsubs f2,f13,f12
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f9,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f1,f0,f27
	ctx.f1.f64 = double(float(ctx.f0.f64 - f27.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x820e7380
	ctx.lr = 0x82195F80;
	sub_820E7380(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// ori r30,r10,34463
	r30.u64 = ctx.r10.u64 | 34463;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// blt cr6,0x82195f98
	if (ctx.cr6.lt) goto loc_82195F98;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82195F98:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d55f8
	ctx.lr = 0x82195FA8;
	sub_822D55F8(ctx, base);
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822c80d0
	ctx.lr = 0x82195FB0;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82195fc8
	if (ctx.cr0.eq) goto loc_82195FC8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x820e7330
	ctx.lr = 0x82195FC4;
	sub_820E7330(ctx, base);
	// b 0x82195fcc
	goto loc_82195FCC;
loc_82195FC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82195FCC:
	// stw r3,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r3.u32);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f2,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// bl 0x820e7428
	ctx.lr = 0x82195FEC;
	sub_820E7428(ctx, base);
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f24
	ctx.f12.f64 = double(float(ctx.f0.f64 + f24.f64));
	// lwz r3,176(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 176);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,20484(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20484);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 - f31.f64));
	// lfs f0,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f0,f26
	ctx.f11.f64 = double(float(ctx.f0.f64 + f26.f64));
	// lfs f0,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 - f29.f64));
	// lfs f10,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f2,f12,f30
	ctx.f2.f64 = double(float(ctx.f12.f64 - f30.f64));
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x820e7380
	ctx.lr = 0x82196030;
	sub_820E7380(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// blt cr6,0x82196040
	if (ctx.cr6.lt) goto loc_82196040;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82196040:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d55f8
	ctx.lr = 0x82196050;
	sub_822D55F8(ctx, base);
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822c80d0
	ctx.lr = 0x82196058;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82196070
	if (ctx.cr0.eq) goto loc_82196070;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x820e7330
	ctx.lr = 0x8219606C;
	sub_820E7330(ctx, base);
	// b 0x82196074
	goto loc_82196074;
loc_82196070:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82196074:
	// stw r3,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r3.u32);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f2,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// bl 0x820e7428
	ctx.lr = 0x82196094;
	sub_820E7428(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 180);
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fadds f11,f0,f24
	ctx.f11.f64 = double(float(ctx.f0.f64 + f24.f64));
	// lfs f12,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f25
	ctx.f12.f64 = double(float(ctx.f12.f64 + f25.f64));
	// lfs f13,-8488(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8488);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 - f31.f64));
	// lfs f0,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f12,f11,f29
	ctx.f12.f64 = double(float(ctx.f11.f64 - f29.f64));
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - f29.f64));
	// fsubs f2,f12,f30
	ctx.f2.f64 = double(float(ctx.f12.f64 - f30.f64));
	// lfs f11,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x820e7380
	ctx.lr = 0x821960DC;
	sub_820E7380(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,61(r31)
	REX_STORE_U8(r31.u32 + 61, ctx.r11.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f74
	ctx.lr = 0x821960F4;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821A9410) {
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
	// beq cr6,0x821a9468
	if (ctx.cr6.eq) goto loc_821A9468;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82208d78
	ctx.lr = 0x821A9440;
	sub_82208D78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821a947c
	if (!ctx.cr0.eq) goto loc_821A947C;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a9468
	if (!ctx.cr6.eq) goto loc_821A9468;
loc_821A9454:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r11,156(r31)
	REX_STORE_U8(r31.u32 + 156, ctx.r11.u8);
loc_821A9460:
	// stb r11,88(r31)
	REX_STORE_U8(r31.u32 + 88, ctx.r11.u8);
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
loc_821A9468:
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
loc_821A947C:
	// cmplwi cr6,r3,1223
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1223, ctx.xer);
	// beq cr6,0x821a9454
	if (ctx.cr6.eq) goto loc_821A9454;
	// cmplwi cr6,r3,1627
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1627, ctx.xer);
	// beq cr6,0x821a9454
	if (ctx.cr6.eq) goto loc_821A9454;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,9
	ctx.r10.s64 = 9;
	// b 0x821a9460
	goto loc_821A9460;
}

DEFINE_REX_FUNC(sub_821AA580) {
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
	ctx.lr = 0x821AA588;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,432
	r29.s64 = ctx.r11.s64 + 432;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, r30.u32);
	// stw r30,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, r30.u32);
	// addi r28,r29,2984
	r28.s64 = r29.s64 + 2984;
	// stw r30,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, r30.u32);
	// li r27,1
	r27.s64 = 1;
loc_821AA5B0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82208a68
	ctx.lr = 0x821AA5B8;
	sub_82208A68(ctx, base);
	// stw r3,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821aa610
	if (ctx.cr0.eq) goto loc_821AA610;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// slw r8,r27,r30
	ctx.r8.u64 = r30.u8 & 0x20 ? 0 : (r27.u32 << (r30.u8 & 0x3F));
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r7,92(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 92);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r7.u32, ctx.xer);
	// slw r10,r11,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r30.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// bne cr6,0x821aa604
	if (!ctx.cr6.eq) goto loc_821AA604;
	// stw r30,2980(r29)
	REX_STORE_U32(r29.u32 + 2980, r30.u32);
	// stb r11,3392(r29)
	REX_STORE_U8(r29.u32 + 3392, ctx.r11.u8);
loc_821AA604:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
loc_821AA610:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// blt cr6,0x821aa5b0
	if (ctx.cr6.lt) goto loc_821AA5B0;
	// bl 0x821d1ed0
	ctx.lr = 0x821AA624;
	sub_821D1ED0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821d9620
	ctx.lr = 0x821AA630;
	sub_821D9620(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// slw r11,r27,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r11.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,156(r31)
	REX_STORE_U8(r31.u32 + 156, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821B0D30) {
	REX_FUNC_PROLOGUE();
	// b 0x821b0c90
	sub_821B0C90(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B0D90) {
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
	// addi r11,r11,9804
	ctx.r11.s64 = ctx.r11.s64 + 9804;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821B0DBC;
	sub_821E2FD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b0dcc
	if (ctx.cr0.eq) goto loc_821B0DCC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821B0DCC;
	sub_822C80A8(ctx, base);
loc_821B0DCC:
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

DEFINE_REX_FUNC(sub_821B1C88) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,5424(r3)
	REX_STORE_U32(ctx.r3.u32 + 5424, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B1FA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821B1FA8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,432
	r29.s64 = ctx.r11.s64 + 432;
	// lis r30,-32168
	r30.s64 = -2108162048;
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 40);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x821b202c
	if (!ctx.cr6.eq) goto loc_821B202C;
	// lwz r11,-9904(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -9904);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-9904(r30)
	REX_STORE_U32(r30.u32 + -9904, ctx.r11.u32);
	// bge 0x821b202c
	if (!ctx.cr0.lt) goto loc_821B202C;
	// lbz r10,2(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r3,-10044(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + -10044);
	// bl 0x8219a7d8
	ctx.lr = 0x821B2008;
	sub_8219A7D8(ctx, base);
	// lwz r10,5444(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5444);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bgt cr6,0x821b2028
	if (ctx.cr6.gt) goto loc_821B2028;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// clrlwi. r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821b2028
	if (ctx.cr0.eq) goto loc_821B2028;
	// stw r11,5448(r31)
	REX_STORE_U32(r31.u32 + 5448, ctx.r11.u32);
loc_821B2028:
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
loc_821B202C:
	// lwz r11,5448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5448);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,5448(r31)
	REX_STORE_U32(r31.u32 + 5448, ctx.r11.u32);
	// bge 0x821b2080
	if (!ctx.cr0.lt) goto loc_821B2080;
	// lwz r11,5444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5444);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,90
	ctx.r9.s64 = 90;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,-9904(r30)
	REX_STORE_U32(r30.u32 + -9904, ctx.r10.u32);
	// stw r9,5448(r31)
	REX_STORE_U32(r31.u32 + 5448, ctx.r9.u32);
	// stw r11,5444(r31)
	REX_STORE_U32(r31.u32 + 5444, ctx.r11.u32);
	// lwz r10,40(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 40);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x821b2080
	if (!ctx.cr6.eq) goto loc_821B2080;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821b2080
	if (ctx.cr0.lt) goto loc_821B2080;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bgt cr6,0x821b2080
	if (ctx.cr6.gt) goto loc_821B2080;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x8212bd08
	ctx.lr = 0x821B2080;
	sub_8212BD08(ctx, base);
loc_821B2080:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821BB5D8) {
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
	ctx.lr = 0x821BB5E0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// sth r10,28(r31)
	REX_STORE_U16(r31.u32 + 28, ctx.r10.u16);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// bl 0x821d6f88
	ctx.lr = 0x821BB620;
	sub_821D6F88(ctx, base);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// sth r24,8(r31)
	REX_STORE_U16(r31.u32 + 8, r24.u16);
	// addi r30,r9,-7072
	r30.s64 = ctx.r9.s64 + -7072;
	// sth r28,30(r31)
	REX_STORE_U16(r31.u32 + 30, r28.u16);
	// addi r11,r11,-9940
	ctx.r11.s64 = ctx.r11.s64 + -9940;
	// extsh r10,r23
	ctx.r10.s64 = r23.s16;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// sth r10,88(r30)
	REX_STORE_U16(r30.u32 + 88, ctx.r10.u16);
	// sth r10,24(r11)
	REX_STORE_U16(ctx.r11.u32 + 24, ctx.r10.u16);
	// bgt cr6,0x821bb650
	if (ctx.cr6.gt) goto loc_821BB650;
	// li r29,1
	r29.s64 = 1;
loc_821BB650:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r6,244(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// extsh r10,r26
	ctx.r10.s64 = r26.s16;
	// sth r29,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, r29.u16);
	// ori r5,r9,3784
	ctx.r5.u64 = ctx.r9.u64 | 3784;
	// sth r27,20(r11)
	REX_STORE_U16(ctx.r11.u32 + 20, r27.u16);
	// sth r10,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// sth r25,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, r25.u16);
	// sthx r10,r30,r5
	REX_STORE_U16(r30.u32 + ctx.r5.u32, ctx.r10.u16);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x821bb684
	if (!ctx.cr6.gt) goto loc_821BB684;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_821BB684:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r29,252(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// sth r10,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r7,r9,9120
	ctx.r7.u64 = ctx.r9.u64 | 9120;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,5424(r30)
	REX_STORE_U32(r30.u32 + 5424, ctx.r10.u32);
	// cmpwi cr6,r28,9
	ctx.cr6.compare<int32_t>(r28.s32, 9, ctx.xer);
	// sth r29,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r29.u16);
	// stwx r8,r30,r7
	REX_STORE_U32(r30.u32 + ctx.r7.u32, ctx.r8.u32);
	// beq cr6,0x821bb714
	if (ctx.cr6.eq) goto loc_821BB714;
	// cmpwi cr6,r28,14
	ctx.cr6.compare<int32_t>(r28.s32, 14, ctx.xer);
	// bne cr6,0x821bb72c
	if (!ctx.cr6.eq) goto loc_821BB72C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,220(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 220);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,116(r30)
	REX_STORE_U32(r30.u32 + 116, ctx.r11.u32);
	// bl 0x821c78c0
	ctx.lr = 0x821BB6CC;
	sub_821C78C0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r10,3812
	ctx.r8.u64 = ctx.r10.u64 | 3812;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// stwx r10,r30,r8
	REX_STORE_U32(r30.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r3,216(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 216);
	// bl 0x821c78c0
	ctx.lr = 0x821BB6F4;
	sub_821C78C0(ctx, base);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// addi r8,r10,320
	ctx.r8.s64 = ctx.r10.s64 + 320;
	// li r9,3
	ctx.r9.s64 = 3;
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// stw r9,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// stw r10,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// b 0x821bb72c
	goto loc_821BB72C;
loc_821BB714:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,3702
	ctx.r9.u64 = ctx.r10.u64 | 3702;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,6(r30)
	REX_STORE_U8(r30.u32 + 6, ctx.r11.u8);
	// stbx r10,r30,r9
	REX_STORE_U8(r30.u32 + ctx.r9.u32, ctx.r10.u8);
loc_821BB72C:
	// bl 0x821bb560
	ctx.lr = 0x821BB730;
	sub_821BB560(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_821BF940) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821BF948;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// stb r5,160(r11)
	REX_STORE_U8(ctx.r11.u32 + 160, ctx.r5.u8);
	// blt cr6,0x821bf968
	if (ctx.cr6.lt) goto loc_821BF968;
	// cmpwi cr6,r4,20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 20, ctx.xer);
	// ble cr6,0x821bf9a0
	if (!ctx.cr6.gt) goto loc_821BF9A0;
loc_821BF968:
	// cmpwi cr6,r4,45
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 45, ctx.xer);
	// beq cr6,0x821bf9a0
	if (ctx.cr6.eq) goto loc_821BF9A0;
	// cmpwi cr6,r4,65
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 65, ctx.xer);
	// beq cr6,0x821bf9a0
	if (ctx.cr6.eq) goto loc_821BF9A0;
	// cmpwi cr6,r4,51
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 51, ctx.xer);
	// bne cr6,0x821bfa20
	if (!ctx.cr6.eq) goto loc_821BFA20;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x821bfa20
	if (ctx.cr6.eq) goto loc_821BFA20;
	// lbz r11,201(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 201);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821bfa20
	if (!ctx.cr0.eq) goto loc_821BFA20;
	// lfs f0,8128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10236(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10236, temp.u32);
	// b 0x821bfa20
	goto loc_821BFA20;
loc_821BF9A0:
	// lbz r10,205(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 205);
	// li r6,4
	ctx.r6.s64 = 4;
	// lbz r11,225(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 225);
	// li r4,14
	ctx.r4.s64 = 14;
	// lbz r9,180(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 180);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r10,179(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 179);
	// lbz r8,178(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 178);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// lbz r9,177(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 177);
	// lbz r7,176(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 176);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r10,175(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 175);
	// lbz r30,174(r31)
	r30.u64 = REX_LOAD_U8(r31.u32 + 174);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// or r29,r11,r10
	r29.u64 = ctx.r11.u64 | ctx.r10.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x821bf940
	ctx.lr = 0x821BF9F4;
	sub_821BF940(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x821bfa20
	if (!ctx.cr6.eq) goto loc_821BFA20;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x821bfa20
	if (ctx.cr6.eq) goto loc_821BFA20;
	// lhz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 604);
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x821bfa18
	if (ctx.cr6.eq) goto loc_821BFA18;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,604(r31)
	REX_STORE_U16(r31.u32 + 604, ctx.r11.u16);
loc_821BFA18:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,5636(r31)
	REX_STORE_U32(r31.u32 + 5636, ctx.r11.u32);
loc_821BFA20:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821C2818) {
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
	// addi r11,r11,12176
	ctx.r11.s64 = ctx.r11.s64 + 12176;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821C2844;
	sub_821E2FD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c2854
	if (ctx.cr0.eq) goto loc_821C2854;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821C2854;
	sub_822C80A8(ctx, base);
loc_821C2854:
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

DEFINE_REX_FUNC(sub_821C39A8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,6216(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 6216);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,5576(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 5576);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lhz r9,606(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 606);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// blt cr6,0x821c39e4
	if (ctx.cr6.lt) goto loc_821C39E4;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bgt cr6,0x821c39e4
	if (ctx.cr6.gt) goto loc_821C39E4;
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_821C39E4:
	// lhz r8,624(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 624);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x821c39f8
	if (ctx.cr0.eq) goto loc_821C39F8;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_821C39F8:
	// lbz r8,174(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 174);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne 0x821c3a2c
	if (!ctx.cr0.eq) goto loc_821C3A2C;
	// lwz r8,872(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 872);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm. r8,r8,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x821c3a24
	if (!ctx.cr0.eq) goto loc_821C3A24;
	// lwz r10,872(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 872);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821c3a2c
	if (ctx.cr0.eq) goto loc_821C3A2C;
loc_821C3A24:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_821C3A2C:
	// lbz r10,187(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 187);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821c3a5c
	if (ctx.cr0.eq) goto loc_821C3A5C;
	// lbz r10,195(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 195);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821c3a5c
	if (!ctx.cr0.eq) goto loc_821C3A5C;
	// lbz r10,217(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 217);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821c3a5c
	if (!ctx.cr0.eq) goto loc_821C3A5C;
	// lbz r10,194(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 194);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821c3a24
	if (ctx.cr0.eq) goto loc_821C3A24;
loc_821C3A5C:
	// lbz r11,165(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 165);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c3a70
	if (ctx.cr0.eq) goto loc_821C3A70;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_821C3A70:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C58F8) {
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
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-9660
	ctx.r11.s64 = ctx.r11.s64 + -9660;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r9,12256
	ctx.r4.s64 = ctx.r9.s64 + 12256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d55f8
	ctx.lr = 0x821C592C;
	sub_822D55F8(ctx, base);
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

DEFINE_REX_FUNC(sub_821C6508) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,10584(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10584);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,10584(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 10584, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C6C00) {
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
	ctx.lr = 0x821C6C08;
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,6192(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 6192);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c6fac
	if (ctx.cr6.eq) goto loc_821C6FAC;
	// lwz r11,6224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 6224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c6fac
	if (ctx.cr6.eq) goto loc_821C6FAC;
	// lwz r24,8(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r26,1
	r26.s64 = 1;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// li r23,0
	r23.s64 = 0;
	// lwz r8,10140(r24)
	ctx.r8.u64 = REX_LOAD_U32(r24.u32 + 10140);
	// lfs f30,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f30.f64 = double(temp.f32);
	// lfs f31,16628(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16628);
	f31.f64 = double(temp.f32);
	// sth r26,15242(r3)
	REX_STORE_U16(ctx.r3.u32 + 15242, r26.u16);
	// rlwinm r10,r8,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0xFFFFC000;
	// sth r26,15240(r3)
	REX_STORE_U16(ctx.r3.u32 + 15240, r26.u16);
	// lhz r11,600(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 600);
	// lis r28,-32166
	r28.s64 = -2108030976;
	// add r27,r10,r24
	r27.u64 = ctx.r10.u64 + r24.u64;
	// addi r29,r3,10676
	r29.s64 = ctx.r3.s64 + 10676;
	// addi r30,r3,10692
	r30.s64 = ctx.r3.s64 + 10692;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// addi r22,r9,432
	r22.s64 = ctx.r9.s64 + 432;
	// blt cr6,0x821c6d54
	if (ctx.cr6.lt) goto loc_821C6D54;
	// beq cr6,0x821c6ca8
	if (ctx.cr6.eq) goto loc_821C6CA8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821c6d38
	if (ctx.cr6.lt) goto loc_821C6D38;
	// bne cr6,0x821c6d78
	if (!ctx.cr6.eq) goto loc_821C6D78;
	// lwz r11,116(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821c6d5c
	if (!ctx.cr6.eq) goto loc_821C6D5C;
	// sth r23,15242(r3)
	REX_STORE_U16(ctx.r3.u32 + 15242, r23.u16);
	// sth r23,15240(r3)
	REX_STORE_U16(ctx.r3.u32 + 15240, r23.u16);
	// b 0x821c6d78
	goto loc_821C6D78;
loc_821C6CA8:
	// sth r26,15242(r31)
	REX_STORE_U16(r31.u32 + 15242, r26.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r26,15240(r31)
	REX_STORE_U16(r31.u32 + 15240, r26.u16);
	// bl 0x821c6a30
	ctx.lr = 0x821C6CB8;
	sub_821C6A30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821c6cdc
	if (ctx.cr0.eq) goto loc_821C6CDC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x821c6cd4
	if (ctx.cr6.eq) goto loc_821C6CD4;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x821c6ce4
	if (!ctx.cr6.eq) goto loc_821C6CE4;
	// b 0x821c6ce0
	goto loc_821C6CE0;
loc_821C6CD4:
	// sth r23,15240(r31)
	REX_STORE_U16(r31.u32 + 15240, r23.u16);
	// b 0x821c6ce4
	goto loc_821C6CE4;
loc_821C6CDC:
	// sth r23,15240(r31)
	REX_STORE_U16(r31.u32 + 15240, r23.u16);
loc_821C6CE0:
	// sth r23,15242(r31)
	REX_STORE_U16(r31.u32 + 15242, r23.u16);
loc_821C6CE4:
	// lfs f0,20396(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 20396);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f0,20400(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 20400);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f0,20404(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 20404);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f30,12(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// lhz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 88);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x821c6d78
	if (ctx.cr6.eq) goto loc_821C6D78;
	// lwz r11,76(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c6d78
	if (ctx.cr6.eq) goto loc_821C6D78;
	// lwz r11,220(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 220);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// li r11,80
	ctx.r11.s64 = 80;
	// beq cr6,0x821c6d2c
	if (ctx.cr6.eq) goto loc_821C6D2C;
	// li r11,60
	ctx.r11.s64 = 60;
loc_821C6D2C:
	// lwz r10,512(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 512);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821c6d78
	if (!ctx.cr6.gt) goto loc_821C6D78;
loc_821C6D38:
	// lwz r11,7792(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 7792);
	// lfs f0,1712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1712);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f0,1716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f0,1720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1720);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821c6d74
	goto loc_821C6D74;
loc_821C6D54:
	// sth r23,15242(r31)
	REX_STORE_U16(r31.u32 + 15242, r23.u16);
	// sth r23,15240(r31)
	REX_STORE_U16(r31.u32 + 15240, r23.u16);
loc_821C6D5C:
	// lfs f0,20396(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 20396);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f0,20400(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 20400);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f0,20404(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 20404);
	ctx.f0.f64 = double(temp.f32);
	// stfs f30,12(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
loc_821C6D74:
	// stfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
loc_821C6D78:
	// li r6,4
	ctx.r6.s64 = 4;
	// lha r5,15240(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 15240));
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bf940
	ctx.lr = 0x821C6D8C;
	sub_821BF940(ctx, base);
	// lwz r11,10244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821c6d9c
	if (!ctx.cr6.eq) goto loc_821C6D9C;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
loc_821C6D9C:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r31,15224
	ctx.r10.s64 = r31.s64 + 15224;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r25,r31,10644
	r25.s64 = r31.s64 + 10644;
	// lfs f0,2352(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2352);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f12,f31,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f13.f64)));
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fmadds f13,f13,f31,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f11.f64)));
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// lfs f13,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fmadds f13,f13,f31,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f10.f64)));
	// stfs f13,8(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// stw r11,15224(r31)
	REX_STORE_U32(r31.u32 + 15224, ctx.r11.u32);
	// addi r30,r31,10660
	r30.s64 = r31.s64 + 10660;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
	// stw r11,15228(r31)
	REX_STORE_U32(r31.u32 + 15228, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r11,15232(r31)
	REX_STORE_U32(r31.u32 + 15232, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// stw r11,15236(r31)
	REX_STORE_U32(r31.u32 + 15236, ctx.r11.u32);
	// lhz r11,602(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 602);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821c6ee4
	if (ctx.cr6.lt) goto loc_821C6EE4;
	// beq cr6,0x821c6e58
	if (ctx.cr6.eq) goto loc_821C6E58;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821c6ec4
	if (ctx.cr6.lt) goto loc_821C6EC4;
	// bne cr6,0x821c6ee8
	if (!ctx.cr6.eq) goto loc_821C6EE8;
	// lwz r11,116(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c6ee4
	if (ctx.cr6.eq) goto loc_821C6EE4;
	// lfs f0,20396(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 20396);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f0,20400(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 20400);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f0,20404(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 20404);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f30,12(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// b 0x821c6ee8
	goto loc_821C6EE8;
loc_821C6E58:
	// lwz r11,116(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c6ee4
	if (ctx.cr6.eq) goto loc_821C6EE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c6b48
	ctx.lr = 0x821C6E6C;
	sub_821C6B48(ctx, base);
	// lfs f0,20396(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 20396);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lfs f0,20400(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 20400);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f0,20404(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 20404);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f30,12(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// bl 0x821d81c8
	ctx.lr = 0x821C6E90;
	sub_821D81C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821c6ee4
	if (!ctx.cr0.eq) goto loc_821C6EE4;
	// lwz r11,76(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c6ee8
	if (ctx.cr6.eq) goto loc_821C6EE8;
	// lwz r11,220(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 220);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// li r11,80
	ctx.r11.s64 = 80;
	// beq cr6,0x821c6eb8
	if (ctx.cr6.eq) goto loc_821C6EB8;
	// li r11,60
	ctx.r11.s64 = 60;
loc_821C6EB8:
	// lwz r10,512(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 512);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821c6ee8
	if (!ctx.cr6.gt) goto loc_821C6EE8;
loc_821C6EC4:
	// lwz r11,7792(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 7792);
	// lfs f0,1712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1712);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f0,1716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f0,1720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1720);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// b 0x821c6ee8
	goto loc_821C6EE8;
loc_821C6EE4:
	// mr r26,r23
	r26.u64 = r23.u64;
loc_821C6EE8:
	// lwz r11,11668(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11668);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r31,10984
	r29.s64 = r31.s64 + 10984;
	// stw r26,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r26.u32);
	// lwz r11,11664(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11664);
	// stw r26,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r26.u32);
	// bl 0x821bf940
	ctx.lr = 0x821C6F10;
	sub_821BF940(ctx, base);
	// lwz r11,10244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10244);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x821c6f20
	if (!ctx.cr6.lt) goto loc_821C6F20;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
loc_821C6F20:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,4(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, ctx.f13.f64)));
	// stfs f0,0(r25)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r25.u32 + 0, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmadds f0,f0,f31,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, ctx.f12.f64)));
	// stfs f0,4(r25)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r25.u32 + 4, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fmadds f0,f0,f31,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, ctx.f11.f64)));
	// stfs f0,8(r25)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r25.u32 + 8, temp.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r10,684(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 684);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,680(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 680);
	// lwz r10,684(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 684);
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
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x821c6fc8
	goto loc_821C6FC8;
loc_821C6FAC:
	// li r23,0
	r23.s64 = 0;
	// sth r23,15240(r31)
	REX_STORE_U16(r31.u32 + 15240, r23.u16);
	// sth r23,15242(r31)
	REX_STORE_U16(r31.u32 + 15242, r23.u16);
	// lwz r11,11668(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11668);
	// stw r23,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r23.u32);
	// lwz r11,11664(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11664);
	// stw r23,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r23.u32);
loc_821C6FC8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_821D9090) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r10,3872
	ctx.r10.s64 = ctx.r10.s64 + 3872;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821D90A8:
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x821d90a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D90A8;
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_821D90BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,6(r3)
	REX_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// lhau r11,8(r3)
	ea = 8 + ctx.r3.u32;
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r3.u32 = ea;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821d90bc
	if (!ctx.cr6.eq) goto loc_821D90BC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DB528) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821DB530;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r31,r11,-7072
	r31.s64 = ctx.r11.s64 + -7072;
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r30,r11,3696
	r30.s64 = ctx.r11.s64 + 3696;
	// beq cr6,0x821db55c
	if (ctx.cr6.eq) goto loc_821DB55C;
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// mr r30,r31
	r30.u64 = r31.u64;
	// addi r4,r11,3696
	ctx.r4.s64 = ctx.r11.s64 + 3696;
loc_821DB55C:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r29,r11,432
	r29.s64 = ctx.r11.s64 + 432;
	// addi r9,r10,320
	ctx.r9.s64 = ctx.r10.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,360(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 360);
	// lwz r10,372(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 372);
	// sth r11,30(r29)
	REX_STORE_U16(r29.u32 + 30, ctx.r11.u16);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bl 0x821d86d8
	ctx.lr = 0x821DB584;
	sub_821D86D8(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821d86d8
	ctx.lr = 0x821DB594;
	sub_821D86D8(ctx, base);
	// lhz r11,30(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 30);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821db5ac
	if (!ctx.cr0.eq) goto loc_821DB5AC;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821d3060
	ctx.lr = 0x821DB5AC;
	sub_821D3060(ctx, base);
loc_821DB5AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821DD2D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x821dd344
	if (ctx.cr6.eq) goto loc_821DD344;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x821dd33c
	if (ctx.cr6.eq) goto loc_821DD33C;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x821dd334
	if (ctx.cr6.eq) goto loc_821DD334;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x821dd32c
	if (ctx.cr6.eq) goto loc_821DD32C;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x821dd34c
	if (!ctx.cr6.eq) goto loc_821DD34C;
	// li r11,87
	ctx.r11.s64 = 87;
loc_821DD308:
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
loc_821DD32C:
	// li r11,86
	ctx.r11.s64 = 86;
	// b 0x821dd308
	goto loc_821DD308;
loc_821DD334:
	// li r11,85
	ctx.r11.s64 = 85;
	// b 0x821dd308
	goto loc_821DD308;
loc_821DD33C:
	// li r11,84
	ctx.r11.s64 = 84;
	// b 0x821dd308
	goto loc_821DD308;
loc_821DD344:
	// li r11,83
	ctx.r11.s64 = 83;
	// b 0x821dd308
	goto loc_821DD308;
loc_821DD34C:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DFDF8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r3,5472(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 5472);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E0040) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r30,r11,5452
	r30.s64 = ctx.r11.s64 + 5452;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r10,15388
	ctx.r4.s64 = ctx.r10.s64 + 15388;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d55f8
	ctx.lr = 0x821E0074;
	sub_822D55F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x822d55f8
	ctx.lr = 0x821E0080;
	sub_822D55F8(ctx, base);
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

DEFINE_REX_FUNC(sub_821E0F98) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r3,2548(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2548);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E1180) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821E1188;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// li r30,1
	r30.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// addi r10,r10,-5488
	ctx.r10.s64 = ctx.r10.s64 + -5488;
	// lwz r31,-32480(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// addi r11,r31,80
	ctx.r11.s64 = r31.s64 + 80;
	// addi r9,r9,-8304
	ctx.r9.s64 = ctx.r9.s64 + -8304;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stb r30,106(r31)
	REX_STORE_U8(r31.u32 + 106, r30.u8);
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// std r29,80(r31)
	REX_STORE_U64(r31.u32 + 80, r29.u64);
	// sth r30,88(r31)
	REX_STORE_U16(r31.u32 + 88, r30.u16);
	// stb r29,90(r31)
	REX_STORE_U8(r31.u32 + 90, r29.u8);
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// stb r30,109(r31)
	REX_STORE_U8(r31.u32 + 109, r30.u8);
	// lwz r3,772(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 772);
	// bl 0x820e4bb0
	ctx.lr = 0x821E11D8;
	sub_820E4BB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,15632(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15632);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stb r29,104(r31)
	REX_STORE_U8(r31.u32 + 104, r29.u8);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stb r30,105(r31)
	REX_STORE_U8(r31.u32 + 105, r30.u8);
	// lis r7,-32166
	ctx.r7.s64 = -2108030976;
	// stb r29,91(r31)
	REX_STORE_U8(r31.u32 + 91, r29.u8);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// lfs f12,15628(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15628);
	ctx.f12.f64 = double(temp.f32);
	// stb r30,188(r31)
	REX_STORE_U8(r31.u32 + 188, r30.u8);
	// lfs f11,16172(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16172);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
	// lfs f0,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stb r29,189(r31)
	REX_STORE_U8(r31.u32 + 189, r29.u8);
	// stfs f13,112(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// stw r3,5592(r7)
	REX_STORE_U32(ctx.r7.u32 + 5592, ctx.r3.u32);
	// stfs f12,116(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// stb r30,187(r31)
	REX_STORE_U8(r31.u32 + 187, r30.u8);
	// stfs f11,120(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// stfs f13,160(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f12,164(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821E30E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,108
	ctx.r3.s64 = ctx.r3.s64 + 108;
	// bl 0x82208d78
	ctx.lr = 0x821E3104;
	sub_82208D78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,996
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 996, ctx.xer);
	// beq cr6,0x821e3168
	if (ctx.cr6.eq) goto loc_821E3168;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3128
	if (ctx.cr6.eq) goto loc_821E3128;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15812
	ctx.r4.s64 = ctx.r11.s64 + 15812;
	// bl 0x822d55f8
	ctx.lr = 0x821E3128;
	sub_822D55F8(ctx, base);
loc_821E3128:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e3158
	if (!ctx.cr6.eq) goto loc_821E3158;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,84(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15736
	ctx.r4.s64 = ctx.r11.s64 + 15736;
	// bl 0x822d55f8
	ctx.lr = 0x821E3148;
	sub_822D55F8(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 104);
	// bl 0x82208848
	ctx.lr = 0x821E3150;
	sub_82208848(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x821e3164
	goto loc_821E3164;
loc_821E3158:
	// lwz r3,104(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 104);
	// bl 0x82208848
	ctx.lr = 0x821E3160;
	sub_82208848(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
loc_821E3164:
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_821E3168:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E5820) {
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
	// bl 0x822d4e74
	ctx.lr = 0x821E5828;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f30
	ctx.lr = 0x821E5830;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// lwz r8,8(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r7,12(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// bl 0x82204da8
	ctx.lr = 0x821E5874;
	sub_82204DA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e589c
	if (ctx.cr0.eq) goto loc_821E589C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,16120(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16120);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,16116(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16116);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x821e58a0
	goto loc_821E58A0;
loc_821E589C:
	// lfs f11,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
loc_821E58A0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// lfs f0,31036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 31036);
	ctx.f0.f64 = double(temp.f32);
	// lfs f26,-18304(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -18304);
	f26.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// beq cr6,0x821e58c4
	if (ctx.cr6.eq) goto loc_821E58C4;
	// fmr f28,f26
	f28.f64 = f26.f64;
	// b 0x821e58cc
	goto loc_821E58CC;
loc_821E58C4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f28,16276(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16276);
	f28.f64 = double(temp.f32);
loc_821E58CC:
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(r28.s32, 5, ctx.xer);
	// bgt cr6,0x821e59a8
	if (ctx.cr6.gt) goto loc_821E59A8;
	// addi r11,r28,-1
	ctx.r11.s64 = r28.s64 + -1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,2008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f13,f26,f0
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, f26.f64, ctx.f0.f64)));
	// bne cr6,0x821e5904
	if (!ctx.cr6.eq) goto loc_821E5904;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
loc_821E5904:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,26932(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26932);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f31,f12,f0,f11
	f31.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f11.f64)));
	// fsubs f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ble cr6,0x821e5aec
	if (!ctx.cr6.gt) goto loc_821E5AEC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// subf r29,r30,r29
	r29.u64 = r29.u64 - r30.u64;
	// addi r30,r28,-1
	r30.s64 = r28.s64 + -1;
	// lfs f30,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f30.f64 = double(temp.f32);
	// addi r28,r11,16268
	r28.s64 = ctx.r11.s64 + 16268;
loc_821E594C:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x821f7d50
	ctx.lr = 0x821E596C;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e5990
	if (ctx.cr0.eq) goto loc_821E5990;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwzx r7,r29,r31
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x821e5680
	ctx.lr = 0x821E5990;
	sub_821E5680(ctx, base);
loc_821E5990:
	// fadds f31,f28,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f28.f64 + f31.f64));
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x821e594c
	if (!ctx.cr0.eq) goto loc_821E594C;
	// b 0x821e5aec
	goto loc_821E5AEC;
loc_821E59A8:
	// cmpwi cr6,r28,7
	ctx.cr6.compare<int32_t>(r28.s32, 7, ctx.xer);
	// bgt cr6,0x821e59bc
	if (ctx.cr6.gt) goto loc_821E59BC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,16264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f12.f64 = double(temp.f32);
	// b 0x821e59c4
	goto loc_821E59C4;
loc_821E59BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,16184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16184);
	ctx.f12.f64 = double(temp.f32);
loc_821E59C4:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x821e59d0
	if (!ctx.cr6.eq) goto loc_821E59D0;
	// fneg f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
loc_821E59D0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// subf r27,r30,r29
	r27.u64 = r29.u64 - r30.u64;
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// li r29,3
	r29.s64 = 3;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f9,f28,f0
	ctx.f9.f64 = double(float(f28.f64 * ctx.f0.f64));
	// lfs f13,16260(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16260);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f30,f10,f13
	f30.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r26,r11,16268
	r26.s64 = ctx.r11.s64 + 16268;
	// lfs f27,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f27.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f9.f64)));
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fadds f31,f28,f0
	f31.f64 = double(float(f28.f64 + ctx.f0.f64));
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f29,f9,f0
	f29.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
loc_821E5A20:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x821f7d50
	ctx.lr = 0x821E5A40;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e5a64
	if (ctx.cr0.eq) goto loc_821E5A64;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwzx r7,r31,r27
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + r27.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// bl 0x821e5680
	ctx.lr = 0x821E5A64;
	sub_821E5680(ctx, base);
loc_821E5A64:
	// fadds f31,f28,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f28.f64 + f31.f64));
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x821e5a20
	if (!ctx.cr0.eq) goto loc_821E5A20;
	// fadds f0,f30,f26
	ctx.f0.f64 = double(float(f30.f64 + f26.f64));
	// stfs f29,96(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(r28.s32, 4, ctx.xer);
	// ble cr6,0x821e5aec
	if (!ctx.cr6.gt) goto loc_821E5AEC;
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// addi r30,r28,-4
	r30.s64 = r28.s64 + -4;
loc_821E5A94:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x821f7d50
	ctx.lr = 0x821E5AB4;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e5ad8
	if (ctx.cr0.eq) goto loc_821E5AD8;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwzx r7,r31,r27
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + r27.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// bl 0x821e5680
	ctx.lr = 0x821E5AD8;
	sub_821E5680(ctx, base);
loc_821E5AD8:
	// fadds f29,f28,f29
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(f28.f64 + f29.f64));
	// stfs f29,96(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x821e5a94
	if (!ctx.cr0.eq) goto loc_821E5A94;
loc_821E5AEC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f7c
	ctx.lr = 0x821E5AF8;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_821F21C0) {
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
	ctx.lr = 0x821F21C8;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x822a2298
	ctx.lr = 0x821F21E0;
	sub_822A2298(ctx, base);
	// lbz r11,49(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 49);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821f2208
	if (!ctx.cr0.eq) goto loc_821F2208;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,36(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 36);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a3120
	ctx.lr = 0x821F2200;
	sub_822A3120(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,48(r27)
	REX_STORE_U8(r27.u32 + 48, ctx.r11.u8);
loc_821F2208:
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r7,26(r27)
	ctx.r7.u64 = REX_LOAD_U16(r27.u32 + 26);
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r6,24(r27)
	ctx.r6.u64 = REX_LOAD_U16(r27.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// bl 0x822a11e8
	ctx.lr = 0x821F2224;
	sub_822A11E8(ctx, base);
	// rlwinm. r11,r31,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f2324
	if (!ctx.cr0.eq) goto loc_821F2324;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,1825(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1825);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821f2324
	if (!ctx.cr0.eq) goto loc_821F2324;
	// lis r29,-32166
	r29.s64 = -2108030976;
	// clrlwi. r30,r31,17
	r30.u64 = r31.u32 & 0x7FFF;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lwz r11,7844(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 7844);
	// bne 0x821f2268
	if (!ctx.cr0.eq) goto loc_821F2268;
	// lbz r10,199(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 199);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821f2268
	if (!ctx.cr0.eq) goto loc_821F2268;
	// lbz r10,200(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 200);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821f2324
	if (ctx.cr0.eq) goto loc_821F2324;
loc_821F2268:
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,108
	ctx.r8.s64 = ctx.r11.s64 + 108;
	// lis r31,-32173
	r31.s64 = -2108489728;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// li r28,32
	r28.s64 = 32;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// lwz r26,508(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 508);
	// bl 0x821fa860
	ctx.lr = 0x821F22A8;
	sub_821FA860(ctx, base);
	// addi r11,r3,51
	ctx.r11.s64 = ctx.r3.s64 + 51;
	// lwz r31,508(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 508);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// lfsx f31,r11,r26
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	f31.f64 = double(temp.f32);
	// bl 0x821fa860
	ctx.lr = 0x821F22C4;
	sub_821FA860(ctx, base);
	// addi r11,r3,35
	ctx.r11.s64 = ctx.r3.s64 + 35;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfsx f0,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x820e1cf8
	ctx.lr = 0x821F22E0;
	sub_820E1CF8(ctx, base);
	// lwz r11,7844(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 7844);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x821f22f8
	if (!ctx.cr6.eq) goto loc_821F22F8;
	// lbz r10,199(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 199);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821f2304
	if (ctx.cr0.eq) goto loc_821F2304;
loc_821F22F8:
	// li r28,47
	r28.s64 = 47;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x821f2310
	if (!ctx.cr6.eq) goto loc_821F2310;
loc_821F2304:
	// lbz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 200);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f2314
	if (ctx.cr0.eq) goto loc_821F2314;
loc_821F2310:
	// ori r28,r28,48
	r28.u64 = r28.u64 | 48;
loc_821F2314:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821f1d70
	ctx.lr = 0x821F2324;
	sub_821F1D70(ctx, base);
loc_821F2324:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821F9CF8) {
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
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// fmr f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f1.f64;
	// li r10,9
	ctx.r10.s64 = 9;
	// fmr f11,f2
	ctx.f11.f64 = ctx.f2.f64;
	// addi r5,r11,528
	ctx.r5.s64 = ctx.r11.s64 + 528;
	// fmr f10,f3
	ctx.f10.f64 = ctx.f3.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lhz r11,18(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 18);
	// stb r10,54(r3)
	REX_STORE_U8(ctx.r3.u32 + 54, ctx.r10.u8);
	// stb r11,52(r3)
	REX_STORE_U8(ctx.r3.u32 + 52, ctx.r11.u8);
	// bl 0x821f9c68
	ctx.lr = 0x821F9D38;
	sub_821F9C68(ctx, base);
	// li r10,10
	ctx.r10.s64 = 10;
	// stfs f4,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lhz r11,20(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 20);
	// stb r11,52(r4)
	REX_STORE_U8(ctx.r4.u32 + 52, ctx.r11.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r10,54(r4)
	REX_STORE_U8(ctx.r4.u32 + 54, ctx.r10.u8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x821f9c68
	ctx.lr = 0x821F9D5C;
	sub_821F9C68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FB210) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821fb234
	if (!ctx.cr6.lt) goto loc_821FB234;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,340(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// slw r11,r11,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x821fb240
	goto loc_821FB240;
loc_821FB234:
	// lwz r11,340(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_821FB240:
	// stw r11,340(r3)
	REX_STORE_U32(ctx.r3.u32 + 340, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FE550) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e84
	ctx.lr = 0x821FE558;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f38
	ctx.lr = 0x821FE560;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// fmr f28,f4
	f28.f64 = ctx.f4.f64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lbz r11,1823(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1823);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821fe660
	if (!ctx.cr0.eq) goto loc_821FE660;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r31,r11,10408
	r31.s64 = ctx.r11.s64 + 10408;
	// lbz r11,10408(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 10408);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821fe5ac
	if (!ctx.cr0.eq) goto loc_821FE5AC;
	// bl 0x821fe078
	ctx.lr = 0x821FE5AC;
	sub_821FE078(ctx, base);
loc_821FE5AC:
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x821fe5c0
	if (!ctx.cr6.lt) goto loc_821FE5C0;
	// li r28,0
	r28.s64 = 0;
	// b 0x821fe5cc
	goto loc_821FE5CC;
loc_821FE5C0:
	// cmpwi cr6,r4,11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 11, ctx.xer);
	// ble cr6,0x821fe5cc
	if (!ctx.cr6.gt) goto loc_821FE5CC;
	// li r28,11
	r28.s64 = 11;
loc_821FE5CC:
	// bl 0x82202740
	ctx.lr = 0x821FE5D0;
	sub_82202740(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,-32032
	r30.s64 = ctx.r11.s64 + -32032;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r30,332
	ctx.r3.s64 = r30.s64 + 332;
	// bl 0x821f1818
	ctx.lr = 0x821FE5E8;
	sub_821F1818(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,0(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfs f30,4(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,32280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32280);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f29,f0,f31
	ctx.f11.f64 = double(float(std::fma(f29.f64, ctx.f0.f64, f31.f64)));
	// fmadds f0,f28,f0,f30
	ctx.f0.f64 = double(float(std::fma(f28.f64, ctx.f0.f64, f30.f64)));
	// stfs f11,16(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x821fe630
	if (!ctx.cr6.eq) goto loc_821FE630;
	// bl 0x821e9ce8
	ctx.lr = 0x821FE624;
	sub_821E9CE8(ctx, base);
	// stfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// b 0x821fe638
	goto loc_821FE638;
loc_821FE630:
	// stfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
loc_821FE638:
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// stw r28,40(r31)
	REX_STORE_U32(r31.u32 + 40, r28.u32);
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r4,r31,44
	ctx.r4.s64 = r31.s64 + 44;
	// addi r3,r30,332
	ctx.r3.s64 = r30.s64 + 332;
	// lfs f1,16628(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16628);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821f1a48
	ctx.lr = 0x821FE660;
	sub_821F1A48(ctx, base);
loc_821FE660:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f84
	ctx.lr = 0x821FE66C;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822021F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,696(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 696, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82202560) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82202594;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x822025ac
	if (!ctx.cr6.lt) goto loc_822025AC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82202148
	ctx.lr = 0x822025AC;
	sub_82202148(ctx, base);
loc_822025AC:
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

DEFINE_REX_FUNC(sub_82204910) {
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
	ctx.lr = 0x82204918;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x82204ad4
	if (ctx.cr6.lt) goto loc_82204AD4;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82204ad4
	if (ctx.cr6.gt) goto loc_82204AD4;
	// addi r11,r4,37
	ctx.r11.s64 = ctx.r4.s64 + 37;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// add r30,r11,r5
	r30.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x822032e0
	ctx.lr = 0x82204958;
	sub_822032E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82204ad4
	if (ctx.cr0.lt) goto loc_82204AD4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82203370
	ctx.lr = 0x82204968;
	sub_82203370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82204ad4
	if (ctx.cr0.lt) goto loc_82204AD4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82204ad4
	if (ctx.cr6.lt) goto loc_82204AD4;
	// li r28,0
	r28.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// bl 0x82209f88
	ctx.lr = 0x822049A0;
	sub_82209F88(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x822049B0;
	sub_822D4FA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82203958
	ctx.lr = 0x822049B8;
	sub_82203958(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x822049d4
	if (ctx.cr6.eq) goto loc_822049D4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82204608
	ctx.lr = 0x822049D4;
	sub_82204608(ctx, base);
loc_822049D4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 184);
	// bl 0x822cc970
	ctx.lr = 0x822049E0;
	sub_822CC970(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r29,r11,18608
	r29.s64 = ctx.r11.s64 + 18608;
	// beq 0x82204a0c
	if (ctx.cr0.eq) goto loc_82204A0C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 184);
	// bl 0x822cce48
	ctx.lr = 0x822049FC;
	sub_822CCE48(ctx, base);
	// rlwinm r27,r30,2,0,29
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r27,r29
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + r29.u32);
	// bl 0x8220a088
	ctx.lr = 0x82204A08;
	sub_8220A088(ctx, base);
	// stwx r28,r27,r29
	REX_STORE_U32(r27.u32 + r29.u32, r28.u32);
loc_82204A0C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822045a0
	ctx.lr = 0x82204A18;
	sub_822045A0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 184);
	// bl 0x822cd3f8
	ctx.lr = 0x82204A28;
	sub_822CD3F8(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// stwx r26,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, r26.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x82204a5c
	if (!ctx.cr6.gt) goto loc_82204A5C;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82204A58;
	sub_822D4FA0(ctx, base);
	// b 0x82204ab8
	goto loc_82204AB8;
loc_82204A5C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 184);
	// bl 0x822cc9a0
	ctx.lr = 0x82204A68;
	sub_822CC9A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 184);
	// bl 0x822cc9a0
	ctx.lr = 0x82204A74;
	sub_822CC9A0(ctx, base);
	// addi r11,r29,16
	ctx.r11.s64 = r29.s64 + 16;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// stw r3,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82204ab8
	if (!ctx.cr0.gt) goto loc_82204AB8;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
loc_82204A8C:
	// stw r28,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r28.u32);
	// li r9,127
	ctx.r9.s64 = 127;
	// stw r28,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r28.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r28,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r28.u32);
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r28,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r28.u32);
	// stwu r28,32(r11)
	ea = 32 + ctx.r11.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r11.u32 = ea;
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82204a8c
	if (ctx.cr6.lt) goto loc_82204A8C;
loc_82204AB8:
	// lwz r30,12(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// bl 0x82203958
	ctx.lr = 0x82204ACC;
	sub_82203958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82204ad8
	goto loc_82204AD8;
loc_82204AD4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82204AD8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8220AA10) {
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
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r10,80
	ctx.r10.s64 = 80;
	// li r11,96
	ctx.r11.s64 = 96;
	// li r12,112
	ctx.r12.s64 = 112;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// blt cr6,0x8220acd8
	if (ctx.cr6.lt) goto loc_8220ACD8;
loc_8220AA34:
	// addi r0,r5,-1024
	ctx.r0.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r0,1024
	ctx.cr6.compare<uint32_t>(ctx.r0.u32, 1024, ctx.xer);
	// blt cr6,0x8220aa44
	if (ctx.cr6.lt) goto loc_8220AA44;
	// li r0,1024
	ctx.r0.s64 = 1024;
loc_8220AA44:
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v9,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v14,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v15,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v16,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v17,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v18,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v19,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v20,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v21,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v22,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v23,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v24,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v25,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v26,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v27,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v28,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v29,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v30,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v31,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v32,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v33,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v34,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v35,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v37,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v39,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v41,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v42,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v43,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v44,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v45,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v47,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v48,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v49,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v57,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvlx128 v1,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// stvlx128 v8,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v9,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx128 v10,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvlx128 v11,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvlx128 v12,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvlx128 v13,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvlx128 v14,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v14.u8[15 - i]);
	// stvlx128 v15,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v15.u8[15 - i]);
	// stvlx128 v16,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v16.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v17,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v17.u8[15 - i]);
	// stvlx128 v18,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v18.u8[15 - i]);
	// stvlx128 v19,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v19.u8[15 - i]);
	// stvlx128 v20,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v20.u8[15 - i]);
	// stvlx128 v21,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v21.u8[15 - i]);
	// stvlx128 v22,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v22.u8[15 - i]);
	// stvlx128 v23,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v23.u8[15 - i]);
	// stvlx128 v24,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v24.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v25,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v25.u8[15 - i]);
	// stvlx128 v26,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v26.u8[15 - i]);
	// stvlx128 v27,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v27.u8[15 - i]);
	// stvlx128 v28,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v28.u8[15 - i]);
	// stvlx128 v29,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v29.u8[15 - i]);
	// stvlx128 v30,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v30.u8[15 - i]);
	// stvlx128 v31,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v31.u8[15 - i]);
	// stvlx128 v32,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v32.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v33,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// stvlx128 v34,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v34.u8[15 - i]);
	// stvlx128 v35,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// stvlx128 v36,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// stvlx128 v37,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// stvlx128 v38,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v38.u8[15 - i]);
	// stvlx128 v39,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// stvlx128 v40,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v41,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v41.u8[15 - i]);
	// stvlx128 v42,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v42.u8[15 - i]);
	// stvlx128 v43,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// stvlx128 v44,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// stvlx128 v45,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v45.u8[15 - i]);
	// stvlx128 v46,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// stvlx128 v47,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v47.u8[15 - i]);
	// stvlx128 v48,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v49,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v49.u8[15 - i]);
	// stvlx128 v50,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// stvlx128 v51,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvlx128 v52,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvlx128 v53,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// stvlx128 v54,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvlx128 v55,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// stvlx128 v56,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v57,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// stvlx128 v58,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvlx128 v59,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvlx128 v60,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvlx128 v61,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvlx128 v62,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvlx128 v63,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvlx128 v0,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-1024
	ctx.r5.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// bge cr6,0x8220aa34
	if (!ctx.cr6.lt) goto loc_8220AA34;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8220ACD8:
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvlx128 v1,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// stvlx128 v8,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bgt cr6,0x8220acd8
	if (ctx.cr6.gt) goto loc_8220ACD8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82228FF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82228FF8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,22068(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22068);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,16968(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16968);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82229018
	if (!ctx.cr6.eq) goto loc_82229018;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82229044
	goto loc_82229044;
loc_82229018:
	// bl 0x824d419c
	ctx.lr = 0x8222901C;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82229040
	if (ctx.cr6.eq) goto loc_82229040;
	// lwz r11,22056(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22056);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8222904c
	if (ctx.cr6.eq) goto loc_8222904C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82229040
	if (!ctx.cr6.eq) goto loc_82229040;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,22056(r31)
	REX_STORE_U32(r31.u32 + 22056, ctx.r11.u32);
loc_82229040:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82229044:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_8222904C:
	// lwz r10,22064(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22064);
	// lwz r11,22060(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22060);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82229040
	if (ctx.cr6.eq) goto loc_82229040;
	// lwz r10,22048(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22048);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82218400
	ctx.lr = 0x8222906C;
	sub_82218400(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82229040
	if (!ctx.cr0.eq) goto loc_82229040;
	// lis r29,-32163
	r29.s64 = -2107834368;
	// li r5,480
	ctx.r5.s64 = 480;
	// addi r30,r29,-7164
	r30.s64 = r29.s64 + -7164;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// addi r4,r30,484
	ctx.r4.s64 = r30.s64 + 484;
	// bl 0x822d4fa0
	ctx.lr = 0x8222908C;
	sub_822D4FA0(ctx, base);
	// lwz r11,-7164(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -7164);
	// lwz r10,22048(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22048);
	// addi r4,r30,484
	ctx.r4.s64 = r30.s64 + 484;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,-4(r30)
	REX_STORE_U32(r30.u32 + -4, ctx.r11.u32);
	// lwz r11,22060(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22060);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8221a278
	ctx.lr = 0x822290B4;
	sub_8221A278(ctx, base);
	// lwz r11,22060(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22060);
	// lwz r10,22052(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22052);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r10,-7164(r29)
	REX_STORE_U32(r29.u32 + -7164, ctx.r10.u32);
	// bne cr6,0x822290e4
	if (!ctx.cr6.eq) goto loc_822290E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822290e8
	goto loc_822290E8;
loc_822290E4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822290E8:
	// lwz r10,16968(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16968);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,22060(r31)
	REX_STORE_U32(r31.u32 + 22060, ctx.r11.u32);
	// stw r10,22068(r31)
	REX_STORE_U32(r31.u32 + 22068, ctx.r10.u32);
	// b 0x82229044
	goto loc_82229044;
}

DEFINE_REX_FUNC(sub_8222E3C8) {
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
	ctx.lr = 0x8222E3D0;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8222e3f4
	if (ctx.cr6.eq) goto loc_8222E3F4;
	// stw r26,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r26.u32);
loc_8222E3F4:
	// lwz r11,412(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8222e410
	if (ctx.cr6.eq) goto loc_8222E410;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8222e328
	ctx.lr = 0x8222E410;
	sub_8222E328(ctx, base);
loc_8222E410:
	// mulli r11,r27,36
	ctx.r11.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(36));
	// lis r10,1
	ctx.r10.s64 = 65536;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r10,r10,34174
	ctx.r10.u64 = ctx.r10.u64 | 34174;
	// ori r9,r9,77
	ctx.r9.u64 = ctx.r9.u64 | 77;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r30,r11,24476
	r30.s64 = ctx.r11.s64 + 24476;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r10,24476(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24476);
	// li r25,1
	r25.s64 = 1;
	// lwz r11,24488(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24488);
	// li r9,1480
	ctx.r9.s64 = 1480;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,16(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r6,3584
	ctx.r6.s64 = 3584;
	// li r24,3648
	r24.s64 = 3648;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// mulli r11,r11,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// add r28,r11,r10
	r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r23,r26
	r23.u64 = r26.u64;
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r6,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// stw r25,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r25.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r24,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r24.u32);
	// stw r25,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r25.u32);
	// bl 0x82213768
	ctx.lr = 0x8222E498;
	sub_82213768(ctx, base);
	// lwz r11,396(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 396);
	// subf r11,r27,r11
	ctx.r11.u64 = ctx.r11.u64 - r27.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r24,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	r24.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq 0x8222e4b4
	if (ctx.cr0.eq) goto loc_8222E4B4;
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// stw r11,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r11.u32);
loc_8222E4B4:
	// mr r22,r26
	r22.u64 = r26.u64;
loc_8222E4B8:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// and r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ctx.r9.u64;
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// mulli r11,r9,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(28));
	// add r28,r11,r10
	r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222e4e8
	if (ctx.cr0.eq) goto loc_8222E4E8;
	// stw r25,428(r29)
	REX_STORE_U32(r29.u32 + 428, r25.u32);
loc_8222E4E8:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne cr6,0x8222e648
	if (!ctx.cr6.eq) goto loc_8222E648;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222e548
	if (ctx.cr6.eq) goto loc_8222E548;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8222e520
	if (ctx.cr0.eq) goto loc_8222E520;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r22,r25
	r22.u64 = r25.u64;
	// stw r27,416(r29)
	REX_STORE_U32(r29.u32 + 416, r27.u32);
	// stw r25,412(r29)
	REX_STORE_U32(r29.u32 + 412, r25.u32);
	// stw r11,420(r29)
	REX_STORE_U32(r29.u32 + 420, ctx.r11.u32);
	// b 0x8222e648
	goto loc_8222E648;
loc_8222E520:
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222e530
	if (ctx.cr0.eq) goto loc_8222E530;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x8222e648
	if (ctx.cr6.eq) goto loc_8222E648;
loc_8222E530:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8222e238
	ctx.lr = 0x8222E544;
	sub_8222E238(ctx, base);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
loc_8222E548:
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222e648
	if (ctx.cr0.eq) goto loc_8222E648;
	// lwz r10,20(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 20);
	// addi r11,r27,25
	ctx.r11.s64 = r27.s64 + 25;
	// li r8,1403
	ctx.r8.s64 = 1403;
	// stw r26,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// lis r7,-16383
	ctx.r7.s64 = -1073676288;
	// lis r6,-16382
	ctx.r6.s64 = -1073610752;
	// stw r10,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// lwz r9,20(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lis r4,-8531
	ctx.r4.s64 = -559087616;
	// lwz r10,11024(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 11024);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,116
	ctx.r10.s64 = ctx.r10.s64 + 116;
	// stw r9,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// addi r3,r8,512
	ctx.r3.s64 = ctx.r8.s64 + 512;
	// addi r20,r9,512
	r20.s64 = ctx.r9.s64 + 512;
	// clrlwi r8,r11,3
	ctx.r8.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r11,r20,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x1000;
	// rlwinm r9,r3,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r10,r7,15616
	ctx.r10.u64 = ctx.r7.u64 | 15616;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r10,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// ori r7,r5,3
	ctx.r7.u64 = ctx.r5.u64 | 3;
	// ori r10,r4,48879
	ctx.r10.u64 = ctx.r4.u64 | 48879;
	// ori r8,r6,22528
	ctx.r8.u64 = ctx.r6.u64 | 22528;
	// stw r7,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stw r10,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r8,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stw r9,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r11,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82213768
	ctx.lr = 0x8222E5FC;
	sub_82213768(ctx, base);
	// lwz r10,48(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 48);
	// lwz r9,52(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 52);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// clrlwi r9,r9,8
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// oris r9,r9,33024
	ctx.r9.u64 = ctx.r9.u64 | 2164260864;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82214098
	ctx.lr = 0x8222E638;
	sub_82214098(ctx, base);
	// lwz r11,11564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11564);
	// stw r26,11504(r31)
	REX_STORE_U32(r31.u32 + 11504, r26.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,11564(r31)
	REX_STORE_U32(r31.u32 + 11564, ctx.r11.u32);
loc_8222E648:
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222e4b8
	if (ctx.cr0.eq) goto loc_8222E4B8;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne cr6,0x8222e66c
	if (!ctx.cr6.eq) goto loc_8222E66C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8222db98
	ctx.lr = 0x8222E66C;
	sub_8222DB98(ctx, base);
loc_8222E66C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8222e678
	if (ctx.cr6.eq) goto loc_8222E678;
	// stw r23,0(r21)
	REX_STORE_U32(r21.u32 + 0, r23.u32);
loc_8222E678:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_82238E88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82238E90;
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x824d438c
	ctx.lr = 0x82238EAC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82238f30
	if (!ctx.cr6.gt) goto loc_82238F30;
	// addi r10,r31,100
	ctx.r10.s64 = r31.s64 + 100;
	// addi r9,r29,-8
	ctx.r9.s64 = r29.s64 + -8;
loc_82238EC8:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82238f1c
	if (ctx.cr6.eq) goto loc_82238F1C;
	// lis r12,-1057
	ctx.r12.s64 = -69271552;
	// lis r7,-5413
	ctx.r7.s64 = -354746368;
	// ori r12,r12,221
	ctx.r12.u64 = ctx.r12.u64 | 221;
	// lis r6,-1057
	ctx.r6.s64 = -69271552;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// ori r7,r7,61168
	ctx.r7.u64 = ctx.r7.u64 | 61168;
	// oris r12,r12,60123
	ctx.r12.u64 = ctx.r12.u64 | 3940220928;
	// ori r6,r6,221
	ctx.r6.u64 = ctx.r6.u64 | 221;
	// ori r12,r12,61168
	ctx.r12.u64 = ctx.r12.u64 | 61168;
	// rldimi r7,r6,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// and r5,r11,r12
	ctx.r5.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpld cr6,r5,r7
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x82238f1c
	if (ctx.cr6.eq) goto loc_82238F1C;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_82238F1C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82238ec8
	if (ctx.cr6.lt) goto loc_82238EC8;
loc_82238F30:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d437c
	ctx.lr = 0x82238F38;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8223BA48) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// ld r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// li r9,20
	ctx.r9.s64 = 20;
	// lhz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// divdu r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 ? ctx.r10.u64 / ctx.r9.u64 : 0;
	// lhz r9,70(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 70);
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// std r6,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r6.u64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// srawi r10,r11,11
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 11;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r10,r11,2048
	ctx.r10.s64 = ctx.r11.s64 + 2048;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r10,r7,11
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 11;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r3,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 11;
	// rlwinm r10,r10,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// subf r10,r10,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r10.u64;
	// rlwinm r7,r3,11,0,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0xFFFFF800;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// bge cr6,0x8223baf4
	if (!ctx.cr6.lt) goto loc_8223BAF4;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8223bae0
	if (ctx.cr6.lt) goto loc_8223BAE0;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8223bb30
	if (!ctx.cr6.gt) goto loc_8223BB30;
loc_8223BAE0:
	// lwz r11,376(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 376);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,376(r8)
	REX_STORE_U32(ctx.r8.u32 + 376, ctx.r11.u32);
	// blr 
	return;
loc_8223BAF4:
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8223bb04
	if (!ctx.cr6.lt) goto loc_8223BB04;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8223bae0
	if (ctx.cr6.gt) goto loc_8223BAE0;
loc_8223BB04:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8223bb28
	if (!ctx.cr6.lt) goto loc_8223BB28;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8223bb1c
	if (ctx.cr6.gt) goto loc_8223BB1C;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8223bb38
	if (!ctx.cr6.gt) goto loc_8223BB38;
loc_8223BB1C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8223BB20:
	// stw r6,376(r8)
	REX_STORE_U32(ctx.r8.u32 + 376, ctx.r6.u32);
	// blr 
	return;
loc_8223BB28:
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8223bb38
	if (ctx.cr6.gt) goto loc_8223BB38;
loc_8223BB30:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223bb1c
	if (ctx.cr6.lt) goto loc_8223BB1C;
loc_8223BB38:
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// ld r10,16(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 16);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// srawi r9,r11,11
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 11;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mulli r11,r11,20
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(20));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// b 0x8223bb20
	goto loc_8223BB20;
}

DEFINE_REX_FUNC(sub_82245530) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822455ac
	if (ctx.cr6.eq) goto loc_822455AC;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// rlwinm. r11,r11,0,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822455ac
	if (ctx.cr0.eq) goto loc_822455AC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x822830c0
	ctx.lr = 0x82245580;
	sub_822830C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822455a4
	if (ctx.cr0.lt) goto loc_822455A4;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82245598
	if (ctx.cr6.eq) goto loc_82245598;
	// bl 0x82282a68
	ctx.lr = 0x82245598;
	sub_82282A68(ctx, base);
loc_82245598:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_822455A4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822455b4
	if (ctx.cr6.lt) goto loc_822455B4;
loc_822455AC:
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822455B4:
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

DEFINE_REX_FUNC(sub_822464A0) {
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
	ctx.lr = 0x822464A8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822465b0
	if (ctx.cr6.eq) goto loc_822465B0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822465b0
	if (ctx.cr6.eq) goto loc_822465B0;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82246528
	if (ctx.cr6.eq) goto loc_82246528;
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
	// bge cr6,0x82246528
	if (!ctx.cr6.lt) goto loc_82246528;
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
	// bne cr6,0x82246528
	if (!ctx.cr6.eq) goto loc_82246528;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r9,r3,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82246528
	if (!ctx.cr6.eq) goto loc_82246528;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82246534
	if (!ctx.cr6.eq) goto loc_82246534;
loc_82246528:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x822465b8
	goto loc_822465B8;
loc_82246534:
	// lwz r29,24(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x82246584
	goto loc_82246584;
loc_8224653C:
	// lwz r27,28(r29)
	r27.u64 = REX_LOAD_U32(r29.u32 + 28);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82246580
	if (ctx.cr6.eq) goto loc_82246580;
	// lwz r28,32(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 32);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82246580
	if (ctx.cr6.eq) goto loc_82246580;
	// addi r30,r27,16
	r30.s64 = r27.s64 + 16;
loc_8224655C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822d7938
	ctx.lr = 0x82246568;
	sub_822D7938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82246598
	if (ctx.cr0.eq) goto loc_82246598;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// blt cr6,0x8224655c
	if (ctx.cr6.lt) goto loc_8224655C;
loc_82246580:
	// lwz r29,40(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 40);
loc_82246584:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8224653c
	if (!ctx.cr6.eq) goto loc_8224653C;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,7
	ctx.r3.u64 = ctx.r3.u64 | 7;
	// b 0x822465b8
	goto loc_822465B8;
loc_82246598:
	// mulli r11,r31,48
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(48));
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// b 0x822465b8
	goto loc_822465B8;
loc_822465B0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_822465B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82248A48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82248A50;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82248a84
	if (!ctx.cr6.eq) goto loc_82248A84;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82248a7c
	if (!ctx.cr6.eq) goto loc_82248A7C;
loc_82248A74:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82248ab8
	goto loc_82248AB8;
loc_82248A7C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82248a9c
	if (ctx.cr6.eq) goto loc_82248A9C;
loc_82248A84:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82248a9c
	if (ctx.cr6.eq) goto loc_82248A9C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822d7938
	ctx.lr = 0x82248A94;
	sub_822D7938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82248a74
	if (ctx.cr0.eq) goto loc_82248A74;
loc_82248A9C:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,12(r29)
	REX_STORE_U8(r29.u32 + 12, ctx.r11.u8);
	// bl 0x8225d438
	ctx.lr = 0x82248AAC;
	sub_8225D438(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82246a38
	ctx.lr = 0x82248AB8;
	sub_82246A38(ctx, base);
loc_82248AB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8224A760) {
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
	// li r3,288
	ctx.r3.s64 = 288;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82255b48
	ctx.lr = 0x8224A784;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224a798
	if (ctx.cr0.eq) goto loc_8224A798;
	// bl 0x8226cc40
	ctx.lr = 0x8224A790;
	sub_8226CC40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8224a79c
	goto loc_8224A79C;
loc_8224A798:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8224A79C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8224a7b0
	if (!ctx.cr6.eq) goto loc_8224A7B0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8224a7bc
	goto loc_8224A7BC;
loc_8224A7B0:
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_8224A7BC:
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

DEFINE_REX_FUNC(sub_8224BCD0) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-4260
	ctx.r11.s64 = ctx.r11.s64 + -4260;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x82255b70
	ctx.lr = 0x8224BCFC;
	sub_82255B70(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224bd14
	if (ctx.cr6.eq) goto loc_8224BD14;
	// bl 0x82288ee8
	ctx.lr = 0x8224BD10;
	sub_82288EE8(ctx, base);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
loc_8224BD14:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r31,20
	ctx.r11.s64 = r31.s64 + 20;
	// addi r11,r10,-4748
	ctx.r11.s64 = ctx.r10.s64 + -4748;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// bl 0x82255b70
	ctx.lr = 0x8224BD2C;
	sub_82255B70(ctx, base);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
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

DEFINE_REX_FUNC(sub_8224DD10) {
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
	// addi r31,r11,26720
	r31.s64 = ctx.r11.s64 + 26720;
	// lwz r11,26740(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 26740);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8224dd54
	if (!ctx.cr0.eq) goto loc_8224DD54;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,26740(r10)
	REX_STORE_U32(ctx.r10.u32 + 26740, ctx.r11.u32);
	// bl 0x8227acf8
	ctx.lr = 0x8224DD48;
	sub_8227ACF8(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15616
	ctx.r3.s64 = ctx.r11.s64 + 15616;
	// bl 0x822d5848
	ctx.lr = 0x8224DD54;
	sub_822D5848(ctx, base);
loc_8224DD54:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
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

DEFINE_REX_FUNC(sub_8224FAD0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// bl 0x8224c660
	ctx.lr = 0x8224FB14;
	sub_8224C660(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// bl 0x8224c6c8
	ctx.lr = 0x8224FB20;
	sub_8224C6C8(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// bl 0x8224c730
	ctx.lr = 0x8224FB2C;
	sub_8224C730(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
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

DEFINE_REX_FUNC(sub_82252578) {
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
	// lis r6,-32219
	ctx.r6.s64 = -2111504384;
	// addi r9,r9,-5296
	ctx.r9.s64 = ctx.r9.s64 + -5296;
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
	// addi r8,r8,-5364
	ctx.r8.s64 = ctx.r8.s64 + -5364;
	// std r11,32(r10)
	REX_STORE_U64(ctx.r10.u32 + 32, ctx.r11.u64);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r7,r7,-21080
	ctx.r7.s64 = ctx.r7.s64 + -21080;
	// addi r10,r6,-20720
	ctx.r10.s64 = ctx.r6.s64 + -20720;
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r9,r5,27680
	ctx.r9.s64 = ctx.r5.s64 + 27680;
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
	// addi r4,r8,23632
	ctx.r4.s64 = ctx.r8.s64 + 23632;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x822512d8
	ctx.lr = 0x822525FC;
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

DEFINE_REX_FUNC(sub_82254918) {
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
	// addi r10,r10,-5044
	ctx.r10.s64 = ctx.r10.s64 + -5044;
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
	// addi r8,r8,13088
	ctx.r8.s64 = ctx.r8.s64 + 13088;
	// addi r11,r7,-21984
	ctx.r11.s64 = ctx.r7.s64 + -21984;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r10,r6,27800
	ctx.r10.s64 = ctx.r6.s64 + 27800;
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
	// bl 0x82250d50
	ctx.lr = 0x8225498C;
	sub_82250D50(ctx, base);
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23664
	ctx.r4.s64 = ctx.r11.s64 + 23664;
	// bl 0x822512d8
	ctx.lr = 0x822549A4;
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

DEFINE_REX_FUNC(sub_82256688) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822566b0
	if (!ctx.cr6.eq) goto loc_822566B0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x822566dc
	goto loc_822566DC;
loc_822566B0:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r4,23612(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23612);
	// bl 0x82255c88
	ctx.lr = 0x822566BC;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822566d0
	if (!ctx.cr0.eq) goto loc_822566D0;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x822566dc
	goto loc_822566DC;
loc_822566D0:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_822566DC:
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

DEFINE_REX_FUNC(sub_82257680) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82257688;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x8225da70
	ctx.lr = 0x822576A8;
	sub_8225DA70(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x822576B4;
	sub_8227C2B8(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82258B88) {
	REX_FUNC_PROLOGUE();
	PPCRegister f30{};
	PPCRegister f31{};
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// lwz r4,23544(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23544);
	// bl 0x82255c88
	ctx.lr = 0x82258BB0;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82258bc4
	if (!ctx.cr0.eq) goto loc_82258BC4;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x82258bd8
	goto loc_82258BD8;
loc_82258BC4:
	// li r6,3
	ctx.r6.s64 = 3;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8224e9f8
	ctx.lr = 0x82258BD4;
	sub_8224E9F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82258BD8:
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

DEFINE_REX_FUNC(sub_8225B588) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8225B590;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// li r28,0
	r28.s64 = 0;
	// addi r30,r11,29620
	r30.s64 = ctx.r11.s64 + 29620;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8225b5e4
	if (!ctx.cr6.gt) goto loc_8225B5E4;
	// li r29,0
	r29.s64 = 0;
loc_8225B5B0:
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwzx r31,r29,r10
	r31.u64 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8225b5d4
	if (ctx.cr6.eq) goto loc_8225B5D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225a4e8
	ctx.lr = 0x8225B5C8;
	sub_8225A4E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8225B5D0;
	sub_82255B70(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
loc_8225B5D4:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8225b5b0
	if (ctx.cr6.lt) goto loc_8225B5B0;
loc_8225B5E4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227ac70
	ctx.lr = 0x8225B5EC;
	sub_8227AC70(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8225CEA0) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r31,-32163
	r31.s64 = -2107834368;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_8225CEBC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82256918
	ctx.lr = 0x8225CEC4;
	sub_82256918(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225ceec
	if (ctx.cr6.eq) goto loc_8225CEEC;
	// lwz r4,23620(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 23620);
	// bl 0x82246920
	ctx.lr = 0x8225CED8;
	sub_82246920(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bne 0x8225ceec
	if (!ctx.cr0.eq) goto loc_8225CEEC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225cebc
	if (!ctx.cr6.eq) goto loc_8225CEBC;
loc_8225CEEC:
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

DEFINE_REX_FUNC(sub_8225DE30) {
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
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x822d5870
	ctx.lr = 0x8225DE60;
	sub_822D5870(ctx, base);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
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

DEFINE_REX_FUNC(sub_8225E8A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8225E8B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// bl 0x8225ddf0
	ctx.lr = 0x8225E8CC;
	sub_8225DDF0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225de30
	ctx.lr = 0x8225E8DC;
	sub_8225DE30(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r28,4(r30)
	REX_STORE_U32(r30.u32 + 4, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8225F3F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8225F3F8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8225eb40
	ctx.lr = 0x8225F408;
	sub_8225EB40(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8225f434
	if (ctx.cr0.lt) goto loc_8225F434;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225f390
	ctx.lr = 0x8225F41C;
	sub_8225F390(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225f434
	if (!ctx.cr0.eq) goto loc_8225F434;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225ed40
	ctx.lr = 0x8225F430;
	sub_8225ED40(ctx, base);
	// b 0x8225f438
	goto loc_8225F438;
loc_8225F434:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8225F438:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822627E0) {
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
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e50
	ctx.lr = 0x822627E8;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f14
	ctx.lr = 0x822627F0;
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// stw r4,668(r1)
	REX_STORE_U32(ctx.r1.u32 + 668, ctx.r4.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r5,676(r1)
	REX_STORE_U32(ctx.r1.u32 + 676, ctx.r5.u32);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// fmr f20,f1
	ctx.fpscr.disableFlushMode();
	f20.f64 = ctx.f1.f64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r8,700(r1)
	REX_STORE_U32(ctx.r1.u32 + 700, ctx.r8.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r10,716(r1)
	REX_STORE_U32(ctx.r1.u32 + 716, ctx.r10.u32);
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
	// stw r11,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, ctx.r11.u32);
	// bl 0x8225e988
	ctx.lr = 0x82262840;
	sub_8225E988(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x82262858
	if (!ctx.cr0.lt) goto loc_82262858;
loc_82262848:
	// lwz r3,368(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x822d7b58
	ctx.lr = 0x82262850;
	sub_822D7B58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82262f9c
	goto loc_82262F9C;
loc_82262858:
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lwz r18,0(r20)
	r18.u64 = REX_LOAD_U32(r20.u32 + 0);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82257610
	ctx.lr = 0x8226286C;
	sub_82257610(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r4,16(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 16);
	// addi r16,r23,16
	r16.s64 = r23.s64 + 16;
	// bl 0x82288de0
	ctx.lr = 0x8226287C;
	sub_82288DE0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x82262898
	if (!ctx.cr0.lt) goto loc_82262898;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82257670
	ctx.lr = 0x82262894;
	sub_82257670(ctx, base);
	// b 0x82262848
	goto loc_82262848;
loc_82262898:
	// addi r11,r20,4
	ctx.r11.s64 = r20.s64 + 4;
	// lfs f25,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	f25.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f27,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	f27.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// stfs f25,136(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// stfs f27,140(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f31,-13044(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -13044);
	f31.f64 = double(temp.f32);
	// rlwinm r10,r11,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// lfs f30,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f30.f64 = double(temp.f32);
	// rlwinm r8,r11,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stfs f30,128(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// rlwinm r9,r11,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// std r8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r9,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r9.u64);
	// lfd f13,160(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f11,104(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfs f30,132(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f21,f0,f31
	f21.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f23,f12,f31
	f23.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fmuls f24,f13,f31
	f24.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f22,f11,f31
	f22.f64 = double(float(ctx.f11.f64 * f31.f64));
	// bne cr6,0x82262a40
	if (!ctx.cr6.eq) goto loc_82262A40;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// vspltisw128 v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x3)));
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r8,r11,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// rlwinm r9,r11,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// rlwinm r11,r11,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// std r8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r9,168(r1)
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r9.u64);
	// lfd f11,168(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// vcsxwfp128 v12,v63,0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// fcfid f11,f11
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f11.f64 = double(ctx.f11.s64);
	// addi r11,r10,112
	ctx.r11.s64 = ctx.r10.s64 + 112;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// addi r8,r1,159
	ctx.r8.s64 = ctx.r1.s64 + 159;
	// lvsl v0,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fmuls f0,f0,f22
	ctx.f0.f64 = double(float(ctx.f0.f64 * f22.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f0,f11,f24
	ctx.f0.f64 = double(float(ctx.f11.f64 * f24.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f12,f12,f23
	ctx.f12.f64 = double(float(ctx.f12.f64 * f23.f64));
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f0,f13,f21
	ctx.f0.f64 = double(float(ctx.f13.f64 * f21.f64));
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v0,v62,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vnmsubfp v12,v0,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor128 v63,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vpkd3d128 v63,v12,0,1,3
	vTemp.u32[0] = 0x404000FF;
	vTemp.f32[0] = !(ctx.v12.f32[0] >= 3.0f) ? 3.0f : (ctx.v12.f32[0] > vTemp.f32[0] ? vTemp.f32[0] : ctx.v12.f32[0]);
	temp.u32 = uint32_t(vTemp.u8[0]) << 24;
	vTemp.u32[1] = 0x404000FF;
	vTemp.f32[1] = !(ctx.v12.f32[1] >= 3.0f) ? 3.0f : (ctx.v12.f32[1] > vTemp.f32[1] ? vTemp.f32[1] : ctx.v12.f32[1]);
	temp.u32 |= uint32_t(vTemp.u8[4]) << 0;
	vTemp.u32[2] = 0x404000FF;
	vTemp.f32[2] = !(ctx.v12.f32[2] >= 3.0f) ? 3.0f : (ctx.v12.f32[2] > vTemp.f32[2] ? vTemp.f32[2] : ctx.v12.f32[2]);
	temp.u32 |= uint32_t(vTemp.u8[8]) << 8;
	vTemp.u32[3] = 0x404000FF;
	vTemp.f32[3] = !(ctx.v12.f32[3] >= 3.0f) ? 3.0f : (ctx.v12.f32[3] > vTemp.f32[3] ? vTemp.f32[3] : ctx.v12.f32[3]);
	temp.u32 |= uint32_t(vTemp.u8[12]) << 16;
	ctx.v63.u32[3] = temp.u32;
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvewx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82288f58
	ctx.lr = 0x82262A0C;
	sub_82288F58(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r4,4(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 4);
	// bl 0x82288f30
	ctx.lr = 0x82262A18;
	sub_82288F30(ctx, base);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r7,24(r23)
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + 24);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// fmr f1,f20
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f20.f64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82284458
	ctx.lr = 0x82262A38;
	sub_82284458(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x82262f7c
	goto loc_82262F7C;
loc_82262A40:
	// li r15,0
	r15.s64 = 0;
	// lwz r3,0(r16)
	ctx.r3.u64 = REX_LOAD_U32(r16.u32 + 0);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r7,24(r23)
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + 24);
	// stw r15,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r15.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r15,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r15.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// fmr f29,f30
	ctx.fpscr.disableFlushMode();
	f29.f64 = f30.f64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r19,r23,24
	r19.s64 = r23.s64 + 24;
	// li r26,-1
	r26.s64 = -1;
	// mr r24,r15
	r24.u64 = r15.u64;
	// bl 0x82284a10
	ctx.lr = 0x82262A88;
	sub_82284A10(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bge 0x82262ab0
	if (!ctx.cr0.lt) goto loc_82262AB0;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82257670
	ctx.lr = 0x82262AA0;
	sub_82257670(ctx, base);
	// lwz r3,368(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x822d7b58
	ctx.lr = 0x82262AA8;
	sub_822D7B58(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x82262f9c
	goto loc_82262F9C;
loc_82262AB0:
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// bl 0x82256bc0
	ctx.lr = 0x82262AB8;
	sub_82256BC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,0(r16)
	ctx.r3.u64 = REX_LOAD_U32(r16.u32 + 0);
	// bl 0x82281000
	ctx.lr = 0x82262AC4;
	sub_82281000(ctx, base);
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// mr r22,r15
	r22.u64 = r15.u64;
	// ori r14,r31,32
	r14.u64 = r31.u64 | 32;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// add r17,r10,r11
	r17.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ble cr6,0x82262b00
	if (!ctx.cr6.gt) goto loc_82262B00;
loc_82262AE0:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82262b00
	if (!ctx.cr6.lt) goto loc_82262B00;
	// addic. r11,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	ctx.r11.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// stw r11,700(r1)
	REX_STORE_U32(ctx.r1.u32 + 700, ctx.r11.u32);
	// rotlwi r27,r11,0
	r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bgt 0x82262ae0
	if (ctx.cr0.gt) goto loc_82262AE0;
loc_82262B00:
	// subfic r11,r27,0
	ctx.xer.ca = r27.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r27.u64;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// and r21,r11,r29
	r21.u64 = ctx.r11.u64 & r29.u64;
	// ble cr6,0x82262f68
	if (!ctx.cr6.gt) goto loc_82262F68;
	// extsw r11,r17
	ctx.r11.s64 = r17.s32;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r27,r15
	r27.u64 = r15.u64;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// frsp f28,f0
	f28.f64 = double(float(ctx.f0.f64));
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// mr r20,r15
	r20.u64 = r15.u64;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// fadds f0,f28,f27
	ctx.f0.f64 = double(float(f28.f64 + f27.f64));
	// fadds f19,f0,f20
	f19.f64 = double(float(ctx.f0.f64 + f20.f64));
loc_82262B4C:
	// extsw r11,r22
	ctx.r11.s64 = r22.s32;
	// std r11,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f26,f0,f28
	f26.f64 = double(float(ctx.f0.f64 * f28.f64));
	// fcmpu cr6,f26,f19
	ctx.cr6.compare(f26.f64, f19.f64);
	// bge cr6,0x82262f64
	if (!ctx.cr6.lt) goto loc_82262F64;
	// fcmpu cr6,f29,f25
	ctx.cr6.compare(f29.f64, f25.f64);
	// blt cr6,0x82262b8c
	if (ctx.cr6.lt) goto loc_82262B8C;
	// fmr f29,f30
	f29.f64 = f30.f64;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// add r20,r20,r17
	r20.u64 = r20.u64 + r17.u64;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// li r26,-1
	r26.s64 = -1;
	// b 0x82262f50
	goto loc_82262F50;
loc_82262B8C:
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(r26.s32, -1, ctx.xer);
	// bne cr6,0x82262bf0
	if (!ctx.cr6.eq) goto loc_82262BF0;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82262bb4
	if (!ctx.cr6.lt) goto loc_82262BB4;
	// add r11,r27,r10
	ctx.r11.u64 = r27.u64 + ctx.r10.u64;
	// lwzx r9,r27,r10
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r26,r9,r11
	r26.u64 = ctx.r11.u64 - ctx.r9.u64;
	// b 0x82262bd0
	goto loc_82262BD0;
loc_82262BB4:
	// lwzx r11,r27,r10
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + ctx.r10.u32);
	// lwz r10,676(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 676);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822d6a10
	ctx.lr = 0x82262BC8;
	sub_822D6A10(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_82262BD0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x82262bf0
	if (!ctx.cr6.eq) goto loc_82262BF0;
	// li r26,-1
	r26.s64 = -1;
	// fmr f29,f30
	ctx.fpscr.disableFlushMode();
	f29.f64 = f30.f64;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// add r20,r20,r17
	r20.u64 = r20.u64 + r17.u64;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// b 0x82262f50
	goto loc_82262F50;
loc_82262BF0:
	// lwzx r11,r27,r10
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + ctx.r10.u32);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// bne cr6,0x82262cfc
	if (!ctx.cr6.eq) goto loc_82262CFC;
	// lwz r29,0(r23)
	r29.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r25,r15
	r25.u64 = r15.u64;
loc_82262C04:
	// subf r10,r24,r11
	ctx.r10.u64 = ctx.r11.u64 - r24.u64;
	// add r31,r10,r26
	r31.u64 = ctx.r10.u64 + r26.u64;
loc_82262C0C:
	// subf r11,r11,r24
	ctx.r11.u64 = r24.u64 - ctx.r11.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// beq cr6,0x82262c68
	if (ctx.cr6.eq) goto loc_82262C68;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x82262c68
	if (!ctx.cr6.gt) goto loc_82262C68;
	// add r11,r24,r31
	ctx.r11.u64 = r24.u64 + r31.u64;
	// lwz r10,676(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 676);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_82262C3C:
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// beq cr6,0x82262c50
	if (ctx.cr6.eq) goto loc_82262C50;
	// cmplwi cr6,r10,12288
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12288, ctx.xer);
	// bne cr6,0x82262c5c
	if (!ctx.cr6.eq) goto loc_82262C5C;
loc_82262C50:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// bgt 0x82262c3c
	if (ctx.cr0.gt) goto loc_82262C3C;
loc_82262C5C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82262c68
	if (!ctx.cr6.gt) goto loc_82262C68;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
loc_82262C68:
	// stfs f28,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r10,676(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 676);
	// stfs f29,128(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// stfs f25,136(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,0(r19)
	ctx.r7.u64 = REX_LOAD_U32(r19.u32 + 0);
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// lwz r3,0(r16)
	ctx.r3.u64 = REX_LOAD_U32(r16.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82284870
	ctx.lr = 0x82262C9C;
	sub_82284870(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x82262f60
	if (ctx.cr0.lt) goto loc_82262F60;
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, f25.f64);
	// ble cr6,0x82262cb8
	if (!ctx.cr6.gt) goto loc_82262CB8;
	// stfs f25,136(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmr f0,f25
	ctx.f0.f64 = f25.f64;
loc_82262CB8:
	// extsw r11,r20
	ctx.r11.s64 = r20.s32;
	// fmr f29,f0
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f0.f64;
	// std r11,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r11.u64);
	// lfd f0,184(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f20
	ctx.f0.f64 = double(float(ctx.f0.f64 - f20.f64));
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
	// bge cr6,0x82262ee8
	if (!ctx.cr6.lt) goto loc_82262EE8;
	// fadds f13,f28,f0
	ctx.f13.f64 = double(float(f28.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
	// ble cr6,0x82262ee8
	if (!ctx.cr6.gt) goto loc_82262EE8;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82262d50
	if (!ctx.cr6.lt) goto loc_82262D50;
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// b 0x82262d54
	goto loc_82262D54;
loc_82262CFC:
	// lwz r9,0(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 0);
	// cmpw cr6,r24,r9
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82262d28
	if (!ctx.cr6.lt) goto loc_82262D28;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + r26.u64;
	// lwz r29,0(r23)
	r29.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r25,r15
	r25.u64 = r15.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82262c04
	if (ctx.cr6.gt) goto loc_82262C04;
	// subf r31,r24,r9
	r31.u64 = ctx.r9.u64 - r24.u64;
	// b 0x82262c0c
	goto loc_82262C0C;
loc_82262D28:
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + r26.u64;
	// lwz r10,4(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 4);
	// lwz r29,12(r21)
	r29.u64 = REX_LOAD_U32(r21.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r25,8(r21)
	r25.u64 = REX_LOAD_U32(r21.u32 + 8);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82262c04
	if (ctx.cr6.gt) goto loc_82262C04;
	// subf r10,r24,r10
	ctx.r10.u64 = ctx.r10.u64 - r24.u64;
	// addi r31,r10,1
	r31.s64 = ctx.r10.s64 + 1;
	// b 0x82262c0c
	goto loc_82262C0C;
loc_82262D50:
	// stfs f30,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
loc_82262D54:
	// fcmpu cr6,f13,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f27.f64);
	// ble cr6,0x82262d68
	if (!ctx.cr6.gt) goto loc_82262D68;
	// fsubs f0,f27,f0
	ctx.f0.f64 = double(float(f27.f64 - ctx.f0.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// b 0x82262d6c
	goto loc_82262D6C;
loc_82262D68:
	// stfs f28,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_82262D6C:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// fsubs f2,f26,f20
	ctx.f2.f64 = double(float(f26.f64 - f20.f64));
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x822911a8
	ctx.lr = 0x82262D80;
	sub_822911A8(ctx, base);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82291210
	ctx.lr = 0x82262D90;
	sub_82291210(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82288d40
	ctx.lr = 0x82262D9C;
	sub_82288D40(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82262ddc
	if (ctx.cr6.eq) goto loc_82262DDC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8228aa78
	ctx.lr = 0x82262DB0;
	sub_8228AA78(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x82262f60
	if (ctx.cr0.lt) goto loc_82262F60;
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82288f58
	ctx.lr = 0x82262DC8;
	sub_82288F58(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82288e08
	ctx.lr = 0x82262DD4;
	sub_82288E08(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x82262f60
	if (ctx.cr0.lt) goto loc_82262F60;
loc_82262DDC:
	// rlwinm r11,r29,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFF;
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r29,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 24) & 0xFF;
	// vspltisw128 v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x3)));
	// std r11,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r11.u64);
	// clrlwi r8,r29,24
	ctx.r8.u64 = r29.u32 & 0xFF;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lfd f0,176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// std r8,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r8.u64);
	// lfd f13,224(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
	// std r11,232(r1)
	REX_STORE_U64(ctx.r1.u32 + 232, ctx.r11.u64);
	// lfd f11,232(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 232);
	// rlwinm r11,r29,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xFF;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// std r11,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.r11.u64);
	// lfd f12,200(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// vcsxwfp128 v12,v63,0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// frsp f0,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// addi r11,r1,159
	ctx.r11.s64 = ctx.r1.s64 + 159;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 * f24.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f0,f11,f23
	ctx.f0.f64 = double(float(ctx.f11.f64 * f23.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f12,f12,f21
	ctx.f12.f64 = double(float(ctx.f12.f64 * f21.f64));
	// stfs f12,156(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f0,f13,f22
	ctx.f0.f64 = double(float(ctx.f13.f64 * f22.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v13,v62,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vnmsubfp v12,v13,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor128 v63,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vpkd3d128 v63,v12,0,1,3
	vTemp.u32[0] = 0x404000FF;
	vTemp.f32[0] = !(ctx.v12.f32[0] >= 3.0f) ? 3.0f : (ctx.v12.f32[0] > vTemp.f32[0] ? vTemp.f32[0] : ctx.v12.f32[0]);
	temp.u32 = uint32_t(vTemp.u8[0]) << 24;
	vTemp.u32[1] = 0x404000FF;
	vTemp.f32[1] = !(ctx.v12.f32[1] >= 3.0f) ? 3.0f : (ctx.v12.f32[1] > vTemp.f32[1] ? vTemp.f32[1] : ctx.v12.f32[1]);
	temp.u32 |= uint32_t(vTemp.u8[4]) << 0;
	vTemp.u32[2] = 0x404000FF;
	vTemp.f32[2] = !(ctx.v12.f32[2] >= 3.0f) ? 3.0f : (ctx.v12.f32[2] > vTemp.f32[2] ? vTemp.f32[2] : ctx.v12.f32[2]);
	temp.u32 |= uint32_t(vTemp.u8[8]) << 8;
	vTemp.u32[3] = 0x404000FF;
	vTemp.f32[3] = !(ctx.v12.f32[3] >= 3.0f) ? 3.0f : (ctx.v12.f32[3] > vTemp.f32[3] ? vTemp.f32[3] : ctx.v12.f32[3]);
	temp.u32 |= uint32_t(vTemp.u8[12]) << 16;
	ctx.v63.u32[3] = temp.u32;
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvewx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82288f58
	ctx.lr = 0x82262EB4;
	sub_82288F58(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r4,4(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 4);
	// bl 0x82288f30
	ctx.lr = 0x82262EC0;
	sub_82288F30(ctx, base);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r7,0(r19)
	ctx.r7.u64 = REX_LOAD_U32(r19.u32 + 0);
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82284458
	ctx.lr = 0x82262EE0;
	sub_82284458(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x82262f60
	if (ctx.cr0.lt) goto loc_82262F60;
loc_82262EE8:
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r24,r24,r31
	r24.u64 = r24.u64 + r31.u64;
	// lwzx r11,r27,r10
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + ctx.r10.u32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82262f14
	if (!ctx.cr6.eq) goto loc_82262F14;
	// fmr f29,f30
	ctx.fpscr.disableFlushMode();
	f29.f64 = f30.f64;
	// li r26,-1
	r26.s64 = -1;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// add r20,r20,r17
	r20.u64 = r20.u64 + r17.u64;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
loc_82262F14:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82262f4c
	if (ctx.cr6.eq) goto loc_82262F4C;
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82262f4c
	if (!ctx.cr6.gt) goto loc_82262F4C;
	// lwz r11,700(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 700);
	// lwz r25,668(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,700(r1)
	REX_STORE_U32(ctx.r1.u32 + 700, ctx.r11.u32);
	// bgt 0x82262f44
	if (ctx.cr0.gt) goto loc_82262F44;
	// mr r21,r15
	r21.u64 = r15.u64;
	// b 0x82262f50
	goto loc_82262F50;
loc_82262F44:
	// addi r21,r21,16
	r21.s64 = r21.s64 + 16;
	// b 0x82262f50
	goto loc_82262F50;
loc_82262F4C:
	// lwz r25,668(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
loc_82262F50:
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpw cr6,r22,r9
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82262b4c
	if (ctx.cr6.lt) goto loc_82262B4C;
	// b 0x82262f64
	goto loc_82262F64;
loc_82262F60:
	// lwz r25,668(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
loc_82262F64:
	// lwz r20,716(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
loc_82262F68:
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82288d40
	ctx.lr = 0x82262F74;
	sub_82288D40(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82255b70
	ctx.lr = 0x82262F7C;
	sub_82255B70(ctx, base);
loc_82262F7C:
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82257670
	ctx.lr = 0x82262F8C;
	sub_82257670(ctx, base);
	// lwz r3,368(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// srawi r31,r28,31
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7FFFFFFF) != 0);
	r31.s64 = r28.s32 >> 31;
	// bl 0x822d7b58
	ctx.lr = 0x82262F98;
	sub_822D7B58(ctx, base);
	// and r3,r31,r28
	ctx.r3.u64 = r31.u64 & r28.u64;
loc_82262F9C:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f60
	ctx.lr = 0x82262FA8;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82288BE8) {
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
	// bne cr6,0x82288c14
	if (!ctx.cr6.eq) goto loc_82288C14;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82288c5c
	goto loc_82288C5C;
loc_82288C14:
	// lis r31,-32163
	r31.s64 = -2107834368;
	// lwz r3,31388(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 31388);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// bne cr6,0x82288c44
	if (!ctx.cr6.eq) goto loc_82288C44;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82288c3c
	if (ctx.cr6.eq) goto loc_82288C3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288C3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82288C3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,31388(r31)
	REX_STORE_U32(r31.u32 + 31388, ctx.r11.u32);
loc_82288C44:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288C58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82288C5C:
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

DEFINE_REX_FUNC(sub_8228AAA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8228AAA8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r31.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82255b48
	ctx.lr = 0x8228AAC4;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228aaec
	if (ctx.cr0.eq) goto loc_8228AAEC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,7920
	ctx.r11.s64 = ctx.r11.s64 + 7920;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8228aaf0
	goto loc_8228AAF0;
loc_8228AAEC:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_8228AAF0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8228ab04
	if (!ctx.cr6.eq) goto loc_8228AB04;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8228ab34
	goto loc_8228AB34;
loc_8228AB04:
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// stw r30,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, r30.u32);
	// lwz r10,-6316(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -6316);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addic. r10,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r10.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,-6316(r11)
	REX_STORE_U32(ctx.r11.u32 + -6316, ctx.r10.u32);
	// bne 0x8228ab28
	if (!ctx.cr0.eq) goto loc_8228AB28;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-6316(r11)
	REX_STORE_U32(ctx.r11.u32 + -6316, ctx.r10.u32);
loc_8228AB28:
	// stw r8,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
loc_8228AB34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8228CB68) {
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
	ctx.lr = 0x8228CB70;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r6,42
	ctx.r6.s64 = 2752512;
	// lis r11,44
	ctx.r11.s64 = 2883584;
	// li r31,0
	r31.s64 = 0;
	// ori r11,r11,9125
	ctx.r11.u64 = ctx.r11.u64 | 9125;
	// lwz r5,-2144(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + -2144);
	// li r8,5
	ctx.r8.s64 = 5;
	// li r9,255
	ctx.r9.s64 = 255;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// ori r6,r6,9145
	ctx.r6.u64 = ctx.r6.u64 | 9145;
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// sth r31,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r31.u16);
	// li r29,8
	r29.s64 = 8;
	// sth r31,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, r31.u16);
	// stb r31,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, r31.u8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stb r31,89(r1)
	REX_STORE_U8(ctx.r1.u32 + 89, r31.u8);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stb r31,90(r1)
	REX_STORE_U8(ctx.r1.u32 + 90, r31.u8);
	// sth r31,92(r1)
	REX_STORE_U16(ctx.r1.u32 + 92, r31.u16);
	// sth r4,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r4.u16);
	// stb r31,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, r31.u8);
	// stb r8,101(r1)
	REX_STORE_U8(ctx.r1.u32 + 101, ctx.r8.u8);
	// stb r31,102(r1)
	REX_STORE_U8(ctx.r1.u32 + 102, r31.u8);
	// sth r9,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, ctx.r9.u16);
	// sth r31,106(r1)
	REX_STORE_U16(ctx.r1.u32 + 106, r31.u16);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stb r31,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, r31.u8);
	// stb r31,113(r1)
	REX_STORE_U8(ctx.r1.u32 + 113, r31.u8);
	// stb r31,114(r1)
	REX_STORE_U8(ctx.r1.u32 + 114, r31.u8);
	// sth r31,128(r1)
	REX_STORE_U16(ctx.r1.u32 + 128, r31.u16);
	// sth r31,130(r1)
	REX_STORE_U16(ctx.r1.u32 + 130, r31.u16);
	// stb r31,136(r1)
	REX_STORE_U8(ctx.r1.u32 + 136, r31.u8);
	// stb r31,137(r1)
	REX_STORE_U8(ctx.r1.u32 + 137, r31.u8);
	// stb r31,138(r1)
	REX_STORE_U8(ctx.r1.u32 + 138, r31.u8);
	// sth r31,140(r1)
	REX_STORE_U16(ctx.r1.u32 + 140, r31.u16);
	// sth r29,142(r1)
	REX_STORE_U16(ctx.r1.u32 + 142, r29.u16);
	// stb r31,148(r1)
	REX_STORE_U8(ctx.r1.u32 + 148, r31.u8);
	// stb r8,149(r1)
	REX_STORE_U8(ctx.r1.u32 + 149, ctx.r8.u8);
	// stb r31,150(r1)
	REX_STORE_U8(ctx.r1.u32 + 150, r31.u8);
	// sth r9,152(r1)
	REX_STORE_U16(ctx.r1.u32 + 152, ctx.r9.u16);
	// sth r31,154(r1)
	REX_STORE_U16(ctx.r1.u32 + 154, r31.u16);
	// stw r10,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stb r31,160(r1)
	REX_STORE_U8(ctx.r1.u32 + 160, r31.u8);
	// stb r31,161(r1)
	REX_STORE_U8(ctx.r1.u32 + 161, r31.u8);
	// stb r31,162(r1)
	REX_STORE_U8(ctx.r1.u32 + 162, r31.u8);
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r5,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228CC4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82226c00
	ctx.lr = 0x8228CC54;
	sub_82226C00(ctx, base);
	// rotlwi r9,r3,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// lis r27,-32163
	r27.s64 = -2107834368;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// ori r28,r10,14
	r28.u64 = ctx.r10.u64 | 14;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r3,31420(r27)
	REX_STORE_U32(r27.u32 + 31420, ctx.r3.u32);
	// lis r25,-32163
	r25.s64 = -2107834368;
	// addi r24,r11,31416
	r24.s64 = ctx.r11.s64 + 31416;
	// and. r29,r9,r28
	r29.u64 = ctx.r9.u64 & r28.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r26,r10,31408
	r26.s64 = ctx.r10.s64 + 31408;
	// blt 0x8228cd38
	if (ctx.cr0.lt) goto loc_8228CD38;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228CCA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82226c00
	ctx.lr = 0x8228CCA8;
	sub_82226C00(ctx, base);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,31404(r25)
	REX_STORE_U32(r25.u32 + 31404, ctx.r3.u32);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r29,r11,r28
	r29.u64 = ctx.r11.u64 & r28.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8228cd38
	if (ctx.cr0.lt) goto loc_8228CD38;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r28,r11,8096
	r28.s64 = ctx.r11.s64 + 8096;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r28,688
	ctx.r4.s64 = r28.s64 + 688;
	// lwz r11,96(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228CCE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8228cd38
	if (ctx.cr0.lt) goto loc_8228CD38;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r28,224
	ctx.r4.s64 = r28.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228CD08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8228cd38
	if (ctx.cr0.lt) goto loc_8228CD38;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r5,r10,31412
	ctx.r5.s64 = ctx.r10.s64 + 31412;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228CD30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x8228cd9c
	if (!ctx.cr0.lt) goto loc_8228CD9C;
loc_8228CD38:
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228cd50
	if (ctx.cr6.eq) goto loc_8228CD50;
	// bl 0x82216cc8
	ctx.lr = 0x8228CD48;
	sub_82216CC8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r31,0(r26)
	REX_STORE_U32(r26.u32 + 0, r31.u32);
loc_8228CD50:
	// lwz r11,31404(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 31404);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228cd6c
	if (ctx.cr6.eq) goto loc_8228CD6C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82216cc8
	ctx.lr = 0x8228CD64;
	sub_82216CC8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r31,31404(r25)
	REX_STORE_U32(r25.u32 + 31404, r31.u32);
loc_8228CD6C:
	// lwz r3,0(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228cd84
	if (ctx.cr6.eq) goto loc_8228CD84;
	// bl 0x82216cc8
	ctx.lr = 0x8228CD7C;
	sub_82216CC8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r31,0(r24)
	REX_STORE_U32(r24.u32 + 0, r31.u32);
loc_8228CD84:
	// lwz r11,31420(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 31420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228cd9c
	if (ctx.cr6.eq) goto loc_8228CD9C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82216cc8
	ctx.lr = 0x8228CD98;
	sub_82216CC8(ctx, base);
	// stw r31,31420(r27)
	REX_STORE_U32(r27.u32 + 31420, r31.u32);
loc_8228CD9C:
	// lwz r3,164(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x822d7b58
	ctx.lr = 0x8228CDA4;
	sub_822D7B58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82295900) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82255b70
	sub_82255B70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82297398) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822973A0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82296c08
	ctx.lr = 0x822973C0;
	sub_82296C08(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x822973d0
	if (!ctx.cr0.eq) goto loc_822973D0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822973e4
	goto loc_822973E4;
loc_822973D0:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822973f0
	ctx.lr = 0x822973E4;
	sub_822973F0(ctx, base);
loc_822973E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82299300) {
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
	ctx.lr = 0x82299308;
	// lwz r8,36(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r27,48(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// addi r6,r8,-262
	ctx.r6.s64 = ctx.r8.s64 + -262;
	// lwz r7,112(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r30,116(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// add r10,r27,r11
	ctx.r10.u64 = r27.u64 + ctx.r11.u64;
	// lwz r26,136(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82299344
	if (!ctx.cr6.gt) goto loc_82299344;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// addi r25,r11,262
	r25.s64 = ctx.r11.s64 + 262;
	// b 0x82299348
	goto loc_82299348;
loc_82299344:
	// li r25,0
	r25.s64 = 0;
loc_82299348:
	// add r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lwz r29,56(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 56);
	// lwz r28,44(r9)
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// addi r5,r10,258
	ctx.r5.s64 = ctx.r10.s64 + 258;
	// lbzx r6,r3,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lbz r31,-1(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// beq cr6,0x822994b8
	if (ctx.cr6.eq) goto loc_822994B8;
	// lwz r11,132(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 132);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82299378
	if (ctx.cr6.lt) goto loc_82299378;
	// rlwinm r30,r30,30,2,31
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x3FFFFFFF;
loc_82299378:
	// lwz r7,108(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 108);
	// cmplw cr6,r26,r7
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82299388
	if (!ctx.cr6.gt) goto loc_82299388;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
loc_82299388:
	// add r8,r27,r4
	ctx.r8.u64 = r27.u64 + ctx.r4.u64;
	// clrlwi r24,r6,24
	r24.u64 = ctx.r6.u32 & 0xFF;
	// add r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lbzx r23,r8,r3
	r23.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(r23.u32, r24.u32, ctx.xer);
	// bne cr6,0x82299490
	if (!ctx.cr6.eq) goto loc_82299490;
	// lbz r11,-1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// clrlwi r24,r31,24
	r24.u64 = r31.u32 & 0xFF;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// bne cr6,0x82299490
	if (!ctx.cr6.eq) goto loc_82299490;
	// lbz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r24,0(r10)
	r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// bne cr6,0x82299490
	if (!ctx.cr6.eq) goto loc_82299490;
	// lbz r11,1(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbzu r24,1(r8)
	ea = 1 + ctx.r8.u32;
	r24.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82299490
	if (!ctx.cr6.eq) goto loc_82299490;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
loc_822993D8:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbzu r24,1(r11)
	ea = 1 + ctx.r11.u32;
	r24.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplw cr6,r24,r8
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82299460
	if (!ctx.cr6.eq) goto loc_82299460;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbzu r24,1(r11)
	ea = 1 + ctx.r11.u32;
	r24.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplw cr6,r24,r8
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82299460
	if (!ctx.cr6.eq) goto loc_82299460;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbzu r24,1(r11)
	ea = 1 + ctx.r11.u32;
	r24.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplw cr6,r24,r8
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82299460
	if (!ctx.cr6.eq) goto loc_82299460;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbzu r24,1(r11)
	ea = 1 + ctx.r11.u32;
	r24.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplw cr6,r24,r8
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82299460
	if (!ctx.cr6.eq) goto loc_82299460;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbzu r24,1(r11)
	ea = 1 + ctx.r11.u32;
	r24.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplw cr6,r24,r8
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82299460
	if (!ctx.cr6.eq) goto loc_82299460;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbzu r24,1(r11)
	ea = 1 + ctx.r11.u32;
	r24.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplw cr6,r24,r8
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82299460
	if (!ctx.cr6.eq) goto loc_82299460;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbzu r24,1(r11)
	ea = 1 + ctx.r11.u32;
	r24.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplw cr6,r24,r8
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82299460
	if (!ctx.cr6.eq) goto loc_82299460;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbzu r24,1(r11)
	ea = 1 + ctx.r11.u32;
	r24.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplw cr6,r24,r8
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82299460
	if (!ctx.cr6.eq) goto loc_82299460;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x822993d8
	if (ctx.cr6.lt) goto loc_822993D8;
loc_82299460:
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// addi r10,r5,-258
	ctx.r10.s64 = ctx.r5.s64 + -258;
	// addi r11,r11,258
	ctx.r11.s64 = ctx.r11.s64 + 258;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82299490
	if (!ctx.cr6.gt) goto loc_82299490;
	// stw r4,104(r9)
	REX_STORE_U32(ctx.r9.u32 + 104, ctx.r4.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// bge cr6,0x822994ac
	if (!ctx.cr6.lt) goto loc_822994AC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbz r31,-1(r8)
	r31.u64 = REX_LOAD_U8(ctx.r8.u32 + -1);
loc_82299490:
	// and r11,r28,r4
	ctx.r11.u64 = r28.u64 & ctx.r4.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r11,r29
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + r29.u32);
	// cmplw cr6,r4,r25
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r25.u32, ctx.xer);
	// ble cr6,0x822994ac
	if (!ctx.cr6.gt) goto loc_822994AC;
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82299388
	if (!ctx.cr0.eq) goto loc_82299388;
loc_822994AC:
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x822994b8
	if (!ctx.cr6.gt) goto loc_822994B8;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
loc_822994B8:
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_822A12D0) {
	REX_FUNC_PROLOGUE();
	// lbz r10,372(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 372);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822a1310
	if (!ctx.cr6.eq) goto loc_822A1310;
	// lbz r10,373(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 373);
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822a1310
	if (!ctx.cr6.eq) goto loc_822A1310;
	// lbz r10,374(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 374);
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822a1310
	if (!ctx.cr6.eq) goto loc_822A1310;
	// lbz r10,375(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 375);
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822A1310:
	// lbz r10,228(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 228);
	// stb r4,372(r3)
	REX_STORE_U8(ctx.r3.u32 + 372, ctx.r4.u8);
	// stb r5,373(r3)
	REX_STORE_U8(ctx.r3.u32 + 373, ctx.r5.u8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r6,374(r3)
	REX_STORE_U8(ctx.r3.u32 + 374, ctx.r6.u8);
	// stb r7,375(r3)
	REX_STORE_U8(ctx.r3.u32 + 375, ctx.r7.u8);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a133c
	if (ctx.cr6.eq) goto loc_822A133C;
	// li r4,1
	ctx.r4.s64 = 1;
loc_822A133C:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a1348
	if (ctx.cr0.eq) goto loc_822A1348;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
loc_822A1348:
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a1354
	if (ctx.cr0.eq) goto loc_822A1354;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
loc_822A1354:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a1360
	if (ctx.cr0.eq) goto loc_822A1360;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
loc_822A1360:
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x82210e88
	sub_82210E88(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822A3E30) {
	REX_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822a3e48
	if (!ctx.cr6.lt) goto loc_822A3E48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_822A3E48:
	// stw r4,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// stw r5,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A4A30) {
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
	ctx.lr = 0x822A4A48;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fmr f28,f2
	f28.f64 = ctx.f2.f64;
	// fmr f31,f3
	f31.f64 = ctx.f3.f64;
	// fmr f30,f4
	f30.f64 = ctx.f4.f64;
	// bl 0x822a4590
	ctx.lr = 0x822A4A68;
	sub_822A4590(ctx, base);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lbz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 96);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfs f29,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f28,4(r11)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822a4a94
	if (!ctx.cr0.eq) goto loc_822A4A94;
	// stfs f31,8(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_822A4A94:
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822a4aa4
	if (ctx.cr0.eq) goto loc_822A4AA4;
	// stfs f30,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_822A4AA4:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822a4ab8
	if (!ctx.cr6.eq) goto loc_822A4AB8;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x82216020
	ctx.lr = 0x822A4AB8;
	sub_82216020(ctx, base);
loc_822A4AB8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f84
	ctx.lr = 0x822A4AC4;
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

DEFINE_REX_FUNC(sub_822A9220) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822A9228;
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
	// beq cr6,0x822a9280
	if (ctx.cr6.eq) goto loc_822A9280;
	// li r30,0
	r30.s64 = 0;
loc_822A9240:
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// beq cr6,0x822a926c
	if (ctx.cr6.eq) goto loc_822A926C;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// bl 0x822a80a0
	ctx.lr = 0x822A926C;
	sub_822A80A0(ctx, base);
loc_822A926C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a7b10
	ctx.lr = 0x822A9274;
	sub_822A7B10(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x822a9240
	if (!ctx.cr0.eq) goto loc_822A9240;
loc_822A9280:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822A9CD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,18
	ctx.r11.s64 = ctx.r4.s64 + 18;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// mulli r11,r11,80
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(80));
	// lwz r10,31464(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 31464);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stb r9,1540(r10)
	REX_STORE_U8(ctx.r10.u32 + 1540, ctx.r9.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822AA6A8) {
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
	// lwz r11,1428(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1428);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822aa6d8
	if (ctx.cr0.eq) goto loc_822AA6D8;
	// bl 0x822aa3a0
	ctx.lr = 0x822AA6CC;
	sub_822AA3A0(ctx, base);
	// lwz r11,1428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1428);
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,1428(r31)
	REX_STORE_U32(r31.u32 + 1428, ctx.r11.u32);
loc_822AA6D8:
	// addi r3,r31,1360
	ctx.r3.s64 = r31.s64 + 1360;
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

DEFINE_REX_FUNC(sub_822AB5B8) {
	REX_FUNC_PROLOGUE();
	// lbz r10,256(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 256);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stb r4,256(r3)
	REX_STORE_U8(ctx.r3.u32 + 256, ctx.r4.u8);
	// b 0x822ab3d8
	sub_822AB3D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822AC200) {
	REX_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822AC808) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,31516(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 31516);
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r8,r8,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// lwzx r7,r7,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lfs f0,188(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f13,188(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822ac844
	if (ctx.cr6.lt) goto loc_822AC844;
	// li r8,0
	ctx.r8.s64 = 0;
loc_822AC844:
	// clrlwi. r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822ac854
	if (ctx.cr0.eq) goto loc_822AC854;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_822AC854:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwzx r8,r6,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lfs f0,188(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822ac888
	if (ctx.cr6.lt) goto loc_822AC888;
	// li r8,0
	ctx.r8.s64 = 0;
loc_822AC888:
	// clrlwi. r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822ac898
	if (ctx.cr0.eq) goto loc_822AC898;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_822AC898:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r9,r7,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lfs f0,188(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822ac8cc
	if (ctx.cr6.lt) goto loc_822AC8CC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822AC8CC:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B0EB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,512(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 512, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,516(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 516, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,520(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 520, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,524(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 524, temp.u32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,512(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 512);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822b0f08
	if (!ctx.cr6.eq) goto loc_822B0F08;
	// lfs f13,516(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 516);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822b0f08
	if (!ctx.cr6.eq) goto loc_822B0F08;
	// lfs f13,520(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 520);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822b0f08
	if (!ctx.cr6.eq) goto loc_822B0F08;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// b 0x822b0f10
	goto loc_822B0F10;
loc_822B0F08:
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
loc_822B0F10:
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B3B30) {
	REX_FUNC_PROLOGUE();
	// lwz r3,112(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// b 0x822c4da0
	sub_822C4DA0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822B3B80) {
	REX_FUNC_PROLOGUE();
	// stw r4,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r4.u32);
	// b 0x822b39d0
	sub_822B39D0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822B3C08) {
	REX_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B5078) {
	REX_FUNC_PROLOGUE();
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi. r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_822B5098:
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r9.u32);
	// stw r9,116(r10)
	REX_STORE_U32(ctx.r10.u32 + 116, ctx.r9.u32);
	// bdnz 0x822b5098
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B5098;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B6808) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
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
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822b6830
	if (ctx.cr6.lt) goto loc_822B6830;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822B6830:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822b6840
	if (ctx.cr0.eq) goto loc_822B6840;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_822B6840:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
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
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822b6868
	if (ctx.cr6.lt) goto loc_822B6868;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822B6868:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822b6878
	if (ctx.cr0.eq) goto loc_822B6878;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_822B6878:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
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
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822b68a0
	if (ctx.cr6.lt) goto loc_822B68A0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822B68A0:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B95D0) {
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
	// bl 0x822c72d0
	ctx.lr = 0x822B95E8;
	sub_822C72D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,23604
	ctx.r11.s64 = ctx.r11.s64 + 23604;
	// sth r10,80(r31)
	REX_STORE_U16(r31.u32 + 80, ctx.r10.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_822B9E58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822B9E60;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b9e80
	if (ctx.cr6.eq) goto loc_822B9E80;
	// bl 0x822c5b40
	ctx.lr = 0x822B9E80;
	sub_822C5B40(ctx, base);
loc_822B9E80:
	// lwz r3,52(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b9e98
	if (ctx.cr6.eq) goto loc_822B9E98;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822c5b40
	ctx.lr = 0x822B9E98;
	sub_822C5B40(ctx, base);
loc_822B9E98:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822BA5B8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822BA7E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822BA7F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,40(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r3,40
	r29.s64 = ctx.r3.s64 + 40;
	// b 0x822ba81c
	goto loc_822BA81C;
loc_822BA804:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,820(r10)
	REX_STORE_U32(ctx.r10.u32 + 820, ctx.r11.u32);
	// bl 0x822c80a8
	ctx.lr = 0x822BA818;
	sub_822C80A8(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_822BA81C:
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822ba804
	if (!ctx.cr6.eq) goto loc_822BA804;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x822ba200
	ctx.lr = 0x822BA83C;
	sub_822BA200(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822BD3F0) {
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
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BD414;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bd424
	if (ctx.cr0.eq) goto loc_822BD424;
	// lwz r3,196(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 196);
	// b 0x822bd428
	goto loc_822BD428;
loc_822BD424:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822BD428:
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

DEFINE_REX_FUNC(sub_822BF510) {
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
	ctx.lr = 0x822BF528;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bf564
	if (ctx.cr6.eq) goto loc_822BF564;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x822bf568
	if (ctx.cr0.eq) goto loc_822BF568;
loc_822BF564:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822BF568:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bf76c
	if (ctx.cr0.eq) goto loc_822BF76C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bf598
	if (ctx.cr6.eq) goto loc_822BF598;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x822bf59c
	if (ctx.cr0.eq) goto loc_822BF59C;
loc_822BF598:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822BF59C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bf76c
	if (ctx.cr0.eq) goto loc_822BF76C;
	// lfs f0,56(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r5,48
	ctx.r11.s64 = ctx.r5.s64 + 48;
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,52(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// fsubs f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,132(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,48(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fadds f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f13,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f31,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	f31.f64 = double(temp.f32);
	// lfs f12,2000(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2000);
	ctx.f12.f64 = double(temp.f32);
	// lfs f30,128(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 128);
	f30.f64 = double(temp.f32);
	// fmuls f9,f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f7,f7,f12,f31
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, f31.f64)));
	// fmadds f9,f8,f8,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f8.f64, ctx.f9.f64)));
	// fadds f8,f7,f30
	ctx.f8.f64 = double(float(ctx.f7.f64 + f30.f64));
	// fmadds f9,f6,f6,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f6.f64, ctx.f6.f64, ctx.f9.f64)));
	// fsqrts f9,f9
	ctx.f9.f64 = double(float(sqrt(ctx.f9.f64)));
	// fcmpu cr6,f9,f8
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// bgt cr6,0x822bf76c
	if (ctx.cr6.gt) goto loc_822BF76C;
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f9,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f11,20(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,24(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lfs f7,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lfs f6,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lfs f4,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f5,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f3,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f2,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f9,f10,f9
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f29,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f29.f64 = double(temp.f32);
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f28,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	f28.f64 = double(temp.f32);
	// fmuls f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// stfs f29,92(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f8,f12,f7
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// stfs f29,108(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f7,f6,f12
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// stfs f28,124(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// stfs f28,140(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fadds f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f0,f11,f4
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f4.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f8,f13
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f0,f10,f3
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f0,f4,f11
	ctx.f0.f64 = double(float(ctx.f4.f64 - ctx.f11.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f0,f3,f10
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f0,f7,f2
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f12,f1
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f0,f2,f7
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f0,f1,f12
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x822bbfd0
	ctx.lr = 0x822BF6E8;
	sub_822BBFD0(ctx, base);
	// fadds f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 + f30.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x822bf76c
	if (ctx.cr6.gt) goto loc_822BF76C;
	// fsqrts f13,f1
	ctx.f13.f64 = double(float(sqrt(ctx.f1.f64)));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f6,172(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f6.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f6,12(r30)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// lfs f11,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,24124(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fadds f5,f31,f30
	ctx.f5.f64 = double(float(f31.f64 + f30.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsubs f11,f10,f9
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fsubs f10,f8,f7
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fsel f0,f6,f13,f0
	ctx.f0.f64 = ctx.f6.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsubs f13,f0,f5
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// stw r31,188(r9)
	REX_STORE_U32(ctx.r9.u32 + 188, r31.u32);
	// stw r9,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r9.u32);
	// b 0x822bf770
	goto loc_822BF770;
loc_822BF76C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822BF770:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f84
	ctx.lr = 0x822BF77C;
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

DEFINE_REX_FUNC(sub_822CB2A0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cb378
	if (ctx.cr6.eq) goto loc_822CB378;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cb378
	if (ctx.cr6.eq) goto loc_822CB378;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822e76d8
	ctx.lr = 0x822CB2D0;
	sub_822E76D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822cb378
	if (!ctx.cr0.eq) goto loc_822CB378;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822cb344
	if (ctx.cr6.eq) goto loc_822CB344;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822cb33c
	if (ctx.cr6.eq) goto loc_822CB33C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822cb334
	if (ctx.cr6.eq) goto loc_822CB334;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x822cb32c
	if (ctx.cr6.eq) goto loc_822CB32C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x822cb324
	if (ctx.cr6.eq) goto loc_822CB324;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822cb31c
	if (ctx.cr6.eq) goto loc_822CB31C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x822cb378
	if (!ctx.cr6.eq) goto loc_822CB378;
	// stw r11,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r11.u32);
	// b 0x822cb378
	goto loc_822CB378;
loc_822CB31C:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x822cb348
	goto loc_822CB348;
loc_822CB324:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x822cb348
	goto loc_822CB348;
loc_822CB32C:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x822cb348
	goto loc_822CB348;
loc_822CB334:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x822cb348
	goto loc_822CB348;
loc_822CB33C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822cb348
	goto loc_822CB348;
loc_822CB344:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822CB348:
	// stw r11,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822cb210
	ctx.lr = 0x822CB354;
	sub_822CB210(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2388);
	ctx.f0.f64 = double(temp.f32);
	// lwa r11,84(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 84));
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
	// stfs f0,228(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 228, temp.u32);
loc_822CB378:
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

DEFINE_REX_FUNC(sub_822CE220) {
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
	// lbz r11,42(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 42);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822ce26c
	if (ctx.cr0.eq) goto loc_822CE26C;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r30,40(r31)
	REX_STORE_U8(r31.u32 + 40, r30.u8);
	// beq cr6,0x822ce25c
	if (ctx.cr6.eq) goto loc_822CE25C;
	// bl 0x82209660
	ctx.lr = 0x822CE25C;
	sub_82209660(ctx, base);
loc_822CE25C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stb r30,42(r31)
	REX_STORE_U8(r31.u32 + 42, r30.u8);
	// stb r11,43(r31)
	REX_STORE_U8(r31.u32 + 43, ctx.r11.u8);
loc_822CE26C:
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

DEFINE_REX_FUNC(sub_822CFF30) {
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
	ctx.lr = 0x822CFF38;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822cff5c
	if (ctx.cr6.lt) goto loc_822CFF5C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d0074
	goto loc_822D0074;
loc_822CFF5C:
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
	ctx.lr = 0x822CFF74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// mulli r11,r28,100
	ctx.r11.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(100));
	// lfs f13,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,2024(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2024);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,92(r10)
	REX_STORE_U32(ctx.r10.u32 + 92, ctx.r9.u32);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lfs f13,200(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,96(r10)
	REX_STORE_U32(ctx.r10.u32 + 96, ctx.r9.u32);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lfs f13,204(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, ctx.r9.u32);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lfs f13,208(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, ctx.r9.u32);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lfs f13,212(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,64(r10)
	REX_STORE_U32(ctx.r10.u32 + 64, ctx.r9.u32);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lfs f13,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r9.u32);
	// lfs f13,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// li r5,12
	ctx.r5.s64 = 12;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x822d4fa0
	ctx.lr = 0x822D005C;
	sub_822D4FA0(ctx, base);
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D0070;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_822D0074:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822D4D68) {
	REX_FUNC_PROLOGUE();
	PPCRegister f31{};
	PPCRegister temp{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -8, f31.u64);
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-2448
	ctx.r11.s64 = ctx.r11.s64 + -2448;
	// lfd f31,26664(r10)
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 26664);
	// lfd f13,0(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// lfs f11,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfd f10,40(r11)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// fadd f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 + ctx.f0.f64;
	// lfd f13,8(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
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
	// lfd f1,56(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// fmul f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 * ctx.f12.f64;
	// fctid f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fsub f11,f13,f11
	ctx.f11.f64 = ctx.f13.f64 - ctx.f11.f64;
	// fctidz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// ld r9,-16(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// clrldi r8,r9,63
	ctx.r8.u64 = ctx.r9.u64 & 0x1;
	// fnmsub f10,f10,f11,f0
	ctx.f10.f64 = -std::fma(ctx.f10.f64, ctx.f11.f64, -ctx.f0.f64);
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// fnmsub f9,f9,f11,f10
	ctx.f9.f64 = -std::fma(ctx.f9.f64, ctx.f11.f64, -ctx.f10.f64);
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
	// fmadd f4,f5,f13,f1
	ctx.f4.f64 = std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f1.f64);
	// fmadd f3,f4,f13,f31
	ctx.f3.f64 = std::fma(ctx.f4.f64, ctx.f13.f64, f31.f64);
	// fmul f13,f3,f9
	ctx.f13.f64 = ctx.f3.f64 * ctx.f9.f64;
	// beq cr6,0x822d4e14
	if (ctx.cr6.eq) goto loc_822D4E14;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_822D4E14:
	// lfs f11,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bne cr6,0x822d4e2c
	if (!ctx.cr6.eq) goto loc_822D4E2C;
	// lfs f1,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfd f31,-8(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_822D4E2C:
	// lfd f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// fsub f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 - ctx.f0.f64;
	// lfd f0,-2064(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -2064);
	// fsel f1,f12,f0,f13
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// lfd f31,-8(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D84A0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d84dc
	if (!ctx.cr6.eq) goto loc_822D84DC;
loc_822D84C4:
	// bl 0x822db6c0
	ctx.lr = 0x822D84C8;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822D84D4;
	sub_822D6910(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x822d8530
	goto loc_822D8530;
loc_822D84DC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822dea70
	ctx.lr = 0x822D84E8;
	sub_822DEA70(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// blt cr6,0x822d84fc
	if (ctx.cr6.lt) goto loc_822D84FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
	// b 0x822d84c4
	goto loc_822D84C4;
loc_822D84FC:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// b 0x822d8524
	goto loc_822D8524;
loc_822D8504:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x822d8520
	if (ctx.cr6.lt) goto loc_822D8520;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// bgt cr6,0x822d8520
	if (ctx.cr6.gt) goto loc_822D8520;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
loc_822D8520:
	// lhzu r11,2(r31)
	ea = 2 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r31.u32 = ea;
loc_822D8524:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822d8504
	if (!ctx.cr0.eq) goto loc_822D8504;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D8530:
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

DEFINE_REX_FUNC(__savevmx_89) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_94) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_822DC700) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822dc74c
	if (!ctx.cr6.eq) goto loc_822DC74C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f1
	ctx.f3.f64 = ctx.f1.f64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f2,31912(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 31912);
	// bl 0x822dc5f8
	ctx.lr = 0x822DC748;
	sub_822DC5F8(ctx, base);
	// b 0x822dc770
	goto loc_822DC770;
loc_822DC74C:
	// bl 0x822db6c0
	ctx.lr = 0x822DC750;
	sub_822DB6C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,33
	ctx.r10.s64 = 33;
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x822dc9d0
	ctx.lr = 0x822DC76C;
	sub_822DC9D0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_822DC770:
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

DEFINE_REX_FUNC(sub_822E0970) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r10,r11,88
	ctx.r10.s64 = ctx.r11.s64 + 88;
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822e4498
	ctx.lr = 0x822E09B0;
	sub_822E4498(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822e2a60
	ctx.lr = 0x822E09C0;
	sub_822E2A60(ctx, base);
	// clrlwi. r11,r31,30
	ctx.r11.u64 = r31.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e09e8
	if (!ctx.cr0.eq) goto loc_822E09E8;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822e09d8
	if (!ctx.cr6.eq) goto loc_822E09D8;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x822e0a00
	goto loc_822E0A00;
loc_822E09D8:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822e09fc
	if (!ctx.cr6.eq) goto loc_822E09FC;
loc_822E09E0:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x822e0a00
	goto loc_822E0A00;
loc_822E09E8:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e09e0
	if (!ctx.cr0.eq) goto loc_822E09E0;
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// bne 0x822e0a00
	if (!ctx.cr0.eq) goto loc_822E0A00;
loc_822E09FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822E0A00:
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

DEFINE_REX_FUNC(sub_822E5B20) {
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
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x822e5b58
	if (!ctx.cr6.eq) goto loc_822E5B58;
	// bl 0x822db6f8
	ctx.lr = 0x822E5B38;
	sub_822DB6F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822db6c0
	ctx.lr = 0x822E5B44;
	sub_822DB6C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822e5bc4
	goto loc_822E5BC4;
loc_822E5B58:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822e5b70
	if (ctx.cr6.lt) goto loc_822E5B70;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r11,-11596(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11596);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e5b94
	if (ctx.cr6.lt) goto loc_822E5B94;
loc_822E5B70:
	// bl 0x822db6f8
	ctx.lr = 0x822E5B74;
	sub_822DB6F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822db6c0
	ctx.lr = 0x822E5B80;
	sub_822DB6C0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822E5B8C;
	sub_822D6910(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822e5bc4
	goto loc_822E5BC4;
loc_822E5B94:
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
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822e5b70
	if (ctx.cr0.eq) goto loc_822E5B70;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_822E5BC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E9678) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r4,640
	ctx.r11.s64 = ctx.r4.s64 + 640;
loc_822E967C:
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
	// bne 0x822e967c
	if (!ctx.cr0.eq) goto loc_822E967C;
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,52(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822EA890) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// addi r3,r3,520
	ctx.r3.s64 = ctx.r3.s64 + 520;
	// lwz r11,520(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ea8e8
	if (ctx.cr6.eq) goto loc_822EA8E8;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x822f0418
	ctx.lr = 0x822EA8CC;
	sub_822F0418(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x822ea8e0
	goto loc_822EA8E0;
loc_822EA8E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,520(r30)
	REX_STORE_U32(r30.u32 + 520, ctx.r11.u32);
loc_822EA8E8:
	// lwz r3,52(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ea90c
	if (ctx.cr6.eq) goto loc_822EA90C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EA904;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r9.u32);
loc_822EA90C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
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

DEFINE_REX_FUNC(sub_822ECE28) {
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
	ctx.lr = 0x822ECE30;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822ece68
	if (ctx.cr6.eq) goto loc_822ECE68;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// addi r29,r3,68
	r29.s64 = ctx.r3.s64 + 68;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822ECE64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
loc_822ECE68:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822ece8c
	if (ctx.cr6.eq) goto loc_822ECE8C;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r30,r31,140
	r30.s64 = r31.s64 + 140;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822ECE88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
loc_822ECE8C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x822eceb0
	if (ctx.cr6.eq) goto loc_822ECEB0;
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// addi r31,r31,212
	r31.s64 = r31.s64 + 212;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822ECEAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,0(r27)
	REX_STORE_U32(r27.u32 + 0, r31.u32);
loc_822ECEB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822EE650) {
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
	ctx.lr = 0x822EE658;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	r22.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r22,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, r22.u32);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// stw r22,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r22.u32);
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// ld r9,88(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 88);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// ld r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 64);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// ld r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 56);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r24,r22
	r24.u64 = r22.u64;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// blt cr6,0x822ee6ac
	if (ctx.cr6.lt) goto loc_822EE6AC;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb4
	return;
loc_822EE6AC:
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// clrldi r7,r21,32
	ctx.r7.u64 = r21.u64 & 0xFFFFFFFF;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpld cr6,r6,r7
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r7.u64, ctx.xer);
	// bge cr6,0x822ee6d4
	if (!ctx.cr6.lt) goto loc_822EE6D4;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r10,r9,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r26,r10,r11
	r26.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822EE6D4:
	// li r20,1
	r20.s64 = 1;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x822eeb74
	if (ctx.cr6.eq) goto loc_822EEB74;
loc_822EE6E0:
	// ld r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 64);
	// ld r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 56);
	// ld r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 88);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// bge cr6,0x822eeb70
	if (!ctx.cr6.lt) goto loc_822EEB70;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// stw r22,112(r31)
	REX_STORE_U32(r31.u32 + 112, r22.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// ble cr6,0x822ee794
	if (!ctx.cr6.gt) goto loc_822EE794;
loc_822EE710:
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 128);
	// ld r30,88(r31)
	r30.u64 = REX_LOAD_U64(r31.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EE728;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpld cr6,r30,r3
	ctx.cr6.compare<uint64_t>(r30.u64, ctx.r3.u64, ctx.xer);
	// blt cr6,0x822ee758
	if (ctx.cr6.lt) goto loc_822EE758;
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 128);
	// ld r30,88(r31)
	r30.u64 = REX_LOAD_U64(r31.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EE748;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 104);
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// cmpld cr6,r30,r8
	ctx.cr6.compare<uint64_t>(r30.u64, ctx.r8.u64, ctx.xer);
	// blt cr6,0x822ee794
	if (ctx.cr6.lt) goto loc_822EE794;
loc_822EE758:
	// ld r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 72);
	// cmpld cr6,r30,r11
	ctx.cr6.compare<uint64_t>(r30.u64, ctx.r11.u64, ctx.xer);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// blt cr6,0x822ee770
	if (ctx.cr6.lt) goto loc_822EE770;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x822ee774
	goto loc_822EE774;
loc_822EE770:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_822EE774:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// stw r10,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822ee710
	if (ctx.cr6.lt) goto loc_822EE710;
loc_822EE794:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822ee7f4
	if (ctx.cr6.lt) goto loc_822EE7F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EE7B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822eeb74
	if (ctx.cr6.lt) goto loc_822EEB74;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EE7D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822eeb74
	if (ctx.cr6.lt) goto loc_822EEB74;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822eeb74
	if (!ctx.cr6.eq) goto loc_822EEB74;
	// b 0x822eeb64
	goto loc_822EEB64;
loc_822EE7F4:
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EE808;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822eeb70
	if (!ctx.cr6.eq) goto loc_822EEB70;
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 128);
	// stw r3,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EE828;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r30,128(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 128);
	// mr r27,r22
	r27.u64 = r22.u64;
	// addic. r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// std r3,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r3.u64);
	// beq 0x822eea60
	if (ctx.cr0.eq) goto loc_822EEA60;
loc_822EE840:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EE854;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r28,128(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 128);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822EE874;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r6,72(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822EE88C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpld cr6,r19,r3
	ctx.cr6.compare<uint64_t>(r19.u64, ctx.r3.u64, ctx.xer);
	// bgt cr6,0x822ee9f8
	if (ctx.cr6.gt) goto loc_822EE9F8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r28,128(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EE8AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822EE8C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,116(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 116);
	// subf r6,r19,r3
	ctx.r6.u64 = ctx.r3.u64 - r19.u64;
	// cmpld cr6,r7,r6
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r6.u64, ctx.xer);
	// bgt cr6,0x822eea60
	if (ctx.cr6.gt) goto loc_822EEA60;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EE8E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823cdf60
	ctx.lr = 0x822EE900;
	sub_823CDF60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822eea10
	if (ctx.cr6.eq) goto loc_822EEA10;
	// ld r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 64);
	// ld r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 56);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
	// cmpld cr6,r29,r9
	ctx.cr6.compare<uint64_t>(r29.u64, ctx.r9.u64, ctx.xer);
	// blt cr6,0x822ee938
	if (ctx.cr6.lt) goto loc_822EE938;
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822eea60
	if (ctx.cr6.eq) goto loc_822EEA60;
	// rldicr r29,r11,0,52
	r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF800;
loc_822EE938:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EE950;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,60(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822EE968;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r7,r4,1
	ctx.r7.s64 = ctx.r4.s64 + 1;
	// std r7,96(r31)
	REX_STORE_U64(r31.u32 + 96, ctx.r7.u64);
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r5,68(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 68);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x822EE988;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rldicl r11,r29,32,32
	ctx.r11.u64 = __builtin_rotateleft64(r29.u64, 32) & 0xFFFFFFFF;
	// stw r29,8(r28)
	REX_STORE_U32(r28.u32 + 8, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,12(r28)
	REX_STORE_U32(r28.u32 + 12, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822EE9A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,104(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82209bf0
	ctx.lr = 0x822EE9C0;
	sub_82209BF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ee9f8
	if (!ctx.cr6.eq) goto loc_822EE9F8;
	// bl 0x822098c8
	ctx.lr = 0x822EE9CC;
	sub_822098C8(ctx, base);
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// bne cr6,0x822ee9f0
	if (!ctx.cr6.eq) goto loc_822EE9F0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EE9EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822ee9f8
	goto loc_822EE9F8;
loc_822EE9F0:
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x822eea30
	if (!ctx.cr6.eq) goto loc_822EEA30;
loc_822EE9F8:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822ee840
	if (ctx.cr6.lt) goto loc_822EE840;
	// b 0x822eea60
	goto loc_822EEA60;
loc_822EEA10:
	// bl 0x822098c8
	ctx.lr = 0x822EEA14;
	sub_822098C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EEA28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// b 0x822eea60
	goto loc_822EEA60;
loc_822EEA30:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EEA44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,52(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822EEA60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822EEA60:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt cr6,0x822eeb74
	if (ctx.cr6.lt) goto loc_822EEB74;
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EEA7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,128(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 128);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,40(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822EEA98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x823cdf60
	ctx.lr = 0x822EEAB4;
	sub_823CDF60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822eeae0
	if (!ctx.cr6.eq) goto loc_822EEAE0;
	// bl 0x822098c8
	ctx.lr = 0x822EEAC0;
	sub_822098C8(ctx, base);
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// beq cr6,0x822eeae0
	if (ctx.cr6.eq) goto loc_822EEAE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EEADC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
loc_822EEAE0:
	// ld r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 72);
	// ld r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 88);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,104(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 104);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r10,r7,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subf r30,r10,r8
	r30.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// ble cr6,0x822eeb08
	if (!ctx.cr6.gt) goto loc_822EEB08;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_822EEB08:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822eeb70
	if (ctx.cr6.lt) goto loc_822EEB70;
	// subf. r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822eeb70
	if (ctx.cr0.eq) goto loc_822EEB70;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822eeb28
	if (!ctx.cr6.gt) goto loc_822EEB28;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_822EEB28:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + r29.u64;
	// add r3,r11,r23
	ctx.r3.u64 = ctx.r11.u64 + r23.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x822EEB3C;
	sub_822D4FA0(ctx, base);
	// ld r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 88);
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// subf r26,r30,r26
	r26.u64 = r26.u64 - r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// std r11,88(r31)
	REX_STORE_U64(r31.u32 + 88, ctx.r11.u64);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// blt cr6,0x822eeb74
	if (ctx.cr6.lt) goto loc_822EEB74;
loc_822EEB64:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x822ee6e0
	if (!ctx.cr6.eq) goto loc_822EE6E0;
	// b 0x822eeb74
	goto loc_822EEB74;
loc_822EEB70:
	// stw r20,48(r31)
	REX_STORE_U32(r31.u32 + 48, r20.u32);
loc_822EEB74:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// blt cr6,0x822eeb88
	if (ctx.cr6.lt) goto loc_822EEB88;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bge cr6,0x822eeb8c
	if (!ctx.cr6.lt) goto loc_822EEB8C;
loc_822EEB88:
	// stw r20,48(r31)
	REX_STORE_U32(r31.u32 + 48, r20.u32);
loc_822EEB8C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_8230B420) {
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
	ctx.lr = 0x8230B428;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// lwz r27,28(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r26,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// stb r26,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r26.u8);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230B45C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b7c0
	if (ctx.cr6.lt) goto loc_8230B7C0;
	// lwz r31,48(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 48);
	// li r25,1
	r25.s64 = 1;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(r29.u32, 1, ctx.xer);
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// stw r26,68(r31)
	REX_STORE_U32(r31.u32 + 68, r26.u32);
	// stw r26,72(r31)
	REX_STORE_U32(r31.u32 + 72, r26.u32);
	// blt cr6,0x8230b638
	if (ctx.cr6.lt) goto loc_8230B638;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// bl 0x82307660
	ctx.lr = 0x8230B49C;
	sub_82307660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b7c0
	if (ctx.cr6.lt) goto loc_8230B7C0;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// rlwinm r9,r10,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// stw r26,12(r31)
	REX_STORE_U32(r31.u32 + 12, r26.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r26,16(r31)
	REX_STORE_U8(r31.u32 + 16, r26.u8);
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8230b578
	if (ctx.cr6.eq) goto loc_8230B578;
	// rlwinm r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230b4e4
	if (ctx.cr6.eq) goto loc_8230B4E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,0(r31)
	REX_STORE_U32(r31.u32 + 0, r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_8230B4E4:
	// rlwinm r10,r11,0,25,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230b638
	if (!ctx.cr6.eq) goto loc_8230B638;
	// clrlwi r30,r11,28
	r30.u64 = ctx.r11.u32 & 0xF;
	// stb r30,16(r31)
	REX_STORE_U8(r31.u32 + 16, r30.u8);
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// bne cr6,0x8230b638
	if (!ctx.cr6.eq) goto loc_8230B638;
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
	ctx.lr = 0x8230B518;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b7c0
	if (ctx.cr6.lt) goto loc_8230B7C0;
	// ld r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U64(r27.u32 + 8);
	// clrldi r9,r30,32
	ctx.r9.u64 = r30.u64 & 0xFFFFFFFF;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r10,8(r27)
	REX_STORE_U64(r27.u32 + 8, ctx.r10.u64);
	// lbz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 16);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// bgt cr6,0x8230b638
	if (ctx.cr6.gt) goto loc_8230B638;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// bl 0x82307660
	ctx.lr = 0x8230B56C;
	sub_82307660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b7c0
	if (ctx.cr6.lt) goto loc_8230B7C0;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
loc_8230B578:
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r10,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r11,17(r31)
	REX_STORE_U8(r31.u32 + 17, ctx.r11.u8);
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// beq cr6,0x8230b59c
	if (ctx.cr6.eq) goto loc_8230B59C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8230b638
	if (!ctx.cr6.eq) goto loc_8230B638;
loc_8230B59C:
	// rlwinm r11,r10,29,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// stb r11,18(r31)
	REX_STORE_U8(r31.u32 + 18, ctx.r11.u8);
	// beq cr6,0x8230b638
	if (ctx.cr6.eq) goto loc_8230B638;
	// rlwinm r11,r10,31,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x3;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stb r11,19(r31)
	REX_STORE_U8(r31.u32 + 19, ctx.r11.u8);
	// addi r8,r30,1
	ctx.r8.s64 = r30.s64 + 1;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, ctx.xer);
	// bgt cr6,0x8230b638
	if (ctx.cr6.gt) goto loc_8230B638;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82307660
	ctx.lr = 0x8230B5EC;
	sub_82307660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b7c0
	if (ctx.cr6.lt) goto loc_8230B7C0;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,3
	ctx.r8.s64 = 3;
	// stb r9,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r9.u8);
	// cmplwi cr6,r10,93
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 93, ctx.xer);
	// stb r8,25(r31)
	REX_STORE_U8(r31.u32 + 25, ctx.r8.u8);
	// beq cr6,0x8230b660
	if (ctx.cr6.eq) goto loc_8230B660;
	// rlwinm r11,r10,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x8230b638
	if (!ctx.cr6.eq) goto loc_8230B638;
	// rlwinm r11,r10,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x8230b638
	if (!ctx.cr6.eq) goto loc_8230B638;
	// rlwinm r11,r10,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// stb r11,25(r31)
	REX_STORE_U8(r31.u32 + 25, ctx.r11.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230b648
	if (!ctx.cr6.eq) goto loc_8230B648;
loc_8230B638:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,23
	ctx.r3.u64 = ctx.r3.u64 | 23;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_8230B648:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8230b654
	if (!ctx.cr6.lt) goto loc_8230B654;
	// stb r11,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r11.u8);
loc_8230B654:
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8230b638
	if (!ctx.cr6.eq) goto loc_8230B638;
loc_8230B660:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lbz r11,17(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 17);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// stw r9,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r9.u32);
	// beq cr6,0x8230b6b0
	if (ctx.cr6.eq) goto loc_8230B6B0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8230b6a4
	if (ctx.cr6.eq) goto loc_8230B6A4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8230b6bc
	if (!ctx.cr6.eq) goto loc_8230B6BC;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8230b6b8
	goto loc_8230B6B8;
loc_8230B6A4:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x8230b6b8
	goto loc_8230B6B8;
loc_8230B6B0:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8230B6B8:
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
loc_8230B6BC:
	// lbz r11,19(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 19);
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8230b6f4
	if (ctx.cr6.eq) goto loc_8230B6F4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8230b6e8
	if (ctx.cr6.eq) goto loc_8230B6E8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8230b700
	if (!ctx.cr6.eq) goto loc_8230B700;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8230b6fc
	goto loc_8230B6FC;
loc_8230B6E8:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x8230b6fc
	goto loc_8230B6FC;
loc_8230B6F4:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8230B6FC:
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
loc_8230B700:
	// lbz r11,18(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 18);
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8230b738
	if (ctx.cr6.eq) goto loc_8230B738;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8230b72c
	if (ctx.cr6.eq) goto loc_8230B72C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8230b744
	if (!ctx.cr6.eq) goto loc_8230B744;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8230b740
	goto loc_8230B740;
loc_8230B72C:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x8230b740
	goto loc_8230B740;
loc_8230B738:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8230B740:
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
loc_8230B744:
	// lbz r11,25(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 25);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8230b770
	if (ctx.cr6.eq) goto loc_8230B770;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8230b768
	if (ctx.cr6.eq) goto loc_8230B768;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8230b778
	if (!ctx.cr6.eq) goto loc_8230B778;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// b 0x8230b774
	goto loc_8230B774;
loc_8230B768:
	// addi r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 2;
	// b 0x8230b774
	goto loc_8230B774;
loc_8230B770:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
loc_8230B774:
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
loc_8230B778:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// beq cr6,0x8230b79c
	if (ctx.cr6.eq) goto loc_8230B79C;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8230b638
	if (!ctx.cr6.eq) goto loc_8230B638;
loc_8230B79C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r26,56(r31)
	REX_STORE_U32(r31.u32 + 56, r26.u32);
	// stb r26,26(r31)
	REX_STORE_U8(r31.u32 + 26, r26.u8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r26,27(r31)
	REX_STORE_U8(r31.u32 + 27, r26.u8);
	// stw r25,60(r31)
	REX_STORE_U32(r31.u32 + 60, r25.u32);
	// beq cr6,0x8230b7c0
	if (ctx.cr6.eq) goto loc_8230B7C0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
loc_8230B7C0:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8230b7ec
	if (!ctx.cr6.eq) goto loc_8230B7EC;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// li r9,5
	ctx.r9.s64 = 5;
	// ld r10,24(r27)
	ctx.r10.u64 = REX_LOAD_U64(r27.u32 + 24);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,80(r27)
	REX_STORE_U32(r27.u32 + 80, ctx.r9.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r8,32(r27)
	REX_STORE_U64(r27.u32 + 32, ctx.r8.u64);
loc_8230B7EC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82317A38) {
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
	ctx.lr = 0x82317A40;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mulli r30,r4,152
	r30.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(152));
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r25,r29
	r25.u64 = r29.u64;
	// bl 0x823143c0
	ctx.lr = 0x82317A64;
	sub_823143C0(ctx, base);
	// stw r3,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82317a80
	if (!ctx.cr6.eq) goto loc_82317A80;
loc_82317A70:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_82317A80:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82317A8C;
	sub_822D5870(ctx, base);
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x82317b24
	if (!ctx.cr6.gt) goto loc_82317B24;
	// rlwinm r26,r31,2,0,29
	r26.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_82317A9C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// add r30,r11,r29
	r30.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x823143c0
	ctx.lr = 0x82317AAC;
	sub_823143C0(ctx, base);
	// stw r3,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317a70
	if (ctx.cr6.eq) goto loc_82317A70;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// ble cr6,0x82317af4
	if (!ctx.cr6.gt) goto loc_82317AF4;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// mullw r10,r11,r31
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r3,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r3.s64 = temp.s64;
	// bl 0x823143c0
	ctx.lr = 0x82317AD4;
	sub_823143C0(ctx, base);
	// stw r3,136(r30)
	REX_STORE_U32(r30.u32 + 136, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317a70
	if (ctx.cr6.eq) goto loc_82317A70;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r10,r11,r31
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// rlwinm r5,r10,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x822d5870
	ctx.lr = 0x82317AF4;
	sub_822D5870(ctx, base);
loc_82317AF4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823143c0
	ctx.lr = 0x82317AFC;
	sub_823143C0(ctx, base);
	// stw r3,140(r30)
	REX_STORE_U32(r30.u32 + 140, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317a70
	if (ctx.cr6.eq) goto loc_82317A70;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82317B14;
	sub_822D5870(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,152
	r29.s64 = r29.s64 + 152;
	// cmpw cr6,r28,r31
	ctx.cr6.compare<int32_t>(r28.s32, r31.s32, ctx.xer);
	// blt cr6,0x82317a9c
	if (ctx.cr6.lt) goto loc_82317A9C;
loc_82317B24:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82320728) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,6
	ctx.r9.s64 = 6;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,-8
	ctx.r10.s64 = ctx.r3.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82320738:
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82320738
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82320738;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
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
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82321AF0) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e64
	ctx.lr = 0x82321AF8;
	// stfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, f29.u64);
	// stfd f30,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, f30.u64);
	// stfd f31,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,284(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// li r19,0
	r19.s64 = 0;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x8232203c
	if (ctx.cr6.lt) goto loc_8232203C;
	// beq cr6,0x82321b50
	if (ctx.cr6.eq) goto loc_82321B50;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// blt cr6,0x82321b48
	if (ctx.cr6.lt) goto loc_82321B48;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f29,-136(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x822d4eb4
	return;
loc_82321B48:
	// li r20,1
	r20.s64 = 1;
	// b 0x82321b54
	goto loc_82321B54;
loc_82321B50:
	// li r20,0
	r20.s64 = 0;
loc_82321B54:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82321b6c
	if (!ctx.cr6.eq) goto loc_82321B6C;
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8232203c
	if (ctx.cr6.eq) goto loc_8232203C;
loc_82321B6C:
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82321b80
	if (!ctx.cr6.eq) goto loc_82321B80;
	// lis r22,16
	r22.s64 = 1048576;
	// b 0x82321b90
	goto loc_82321B90;
loc_82321B80:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// rlwinm r10,r5,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FC;
	// addi r9,r11,5504
	ctx.r9.s64 = ctx.r11.s64 + 5504;
	// lwzx r22,r10,r9
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_82321B90:
	// lwz r24,120(r27)
	r24.u64 = REX_LOAD_U32(r27.u32 + 120);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x82321bc8
	if (!ctx.cr6.gt) goto loc_82321BC8;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82321BA8:
	// lwz r9,320(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// lwz r6,392(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 392);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// lwz r4,60(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// stwx r4,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82321ba8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82321BA8;
loc_82321BC8:
	// srawi r11,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bge cr6,0x82321be0
	if (!ctx.cr6.lt) goto loc_82321BE0;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82321bec
	goto loc_82321BEC;
loc_82321BE0:
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// ble cr6,0x82321bec
	if (!ctx.cr6.gt) goto loc_82321BEC;
	// li r10,16
	ctx.r10.s64 = 16;
loc_82321BEC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8232203c
	if (ctx.cr6.lt) goto loc_8232203C;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82321C04:
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r6,r11,r10
	ctx.r6.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// andc r4,r10,r5
	ctx.r4.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bdnz 0x82321c04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82321C04;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8232203c
	if (!ctx.cr6.gt) goto loc_8232203C;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,127
	ctx.r8.s64 = 8323072;
	// addi r26,r1,148
	r26.s64 = ctx.r1.s64 + 148;
	// lfs f31,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f31.f64 = double(temp.f32);
	// ori r21,r8,65535
	r21.u64 = ctx.r8.u64 | 65535;
	// lfs f30,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f30.f64 = double(temp.f32);
	// lfs f29,-25476(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -25476);
	f29.f64 = double(temp.f32);
loc_82321C58:
	// lwz r29,-4(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + -4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r28,0(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x82321cd0
	if (!ctx.cr6.gt) goto loc_82321CD0;
	// lwz r8,392(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 392);
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
loc_82321C78:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// bge cr6,0x82321cb8
	if (!ctx.cr6.lt) goto loc_82321CB8;
	// subf r11,r29,r28
	ctx.r11.u64 = r28.u64 - r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82321C94:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82321ca4
	if (ctx.cr6.gt) goto loc_82321CA4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_82321CA4:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82321cb0
	if (!ctx.cr6.gt) goto loc_82321CB0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82321CB0:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82321c94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82321C94;
loc_82321CB8:
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x82321cc4
	if (!ctx.cr6.gt) goto loc_82321CC4;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_82321CC4:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82321c78
	if (!ctx.cr0.eq) goto loc_82321C78;
loc_82321CD0:
	// lwz r11,124(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82321ce4
	if (!ctx.cr6.gt) goto loc_82321CE4;
	// slw r5,r5,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x82321cf0
	goto loc_82321CF0;
loc_82321CE4:
	// bge cr6,0x82321cf0
	if (!ctx.cr6.lt) goto loc_82321CF0;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// sraw r5,r5,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r5.s64 = ctx.r5.s32 >> temp.u32;
loc_82321CF0:
	// cmpw cr6,r5,r21
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r21.s32, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// blt cr6,0x82321d00
	if (ctx.cr6.lt) goto loc_82321D00;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_82321D00:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82321dac
	if (ctx.cr6.eq) goto loc_82321DAC;
	// lwz r9,196(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 196);
	// rlwinm r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// extsw r9,r22
	ctx.r9.s64 = r22.s32;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82321d88
	if (ctx.cr6.eq) goto loc_82321D88;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lwz r6,260(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 260);
	// lwz r10,280(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 280);
	// mulld r3,r7,r9
	ctx.r3.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r9.u64);
	// lwz r8,264(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 264);
	// lwz r4,296(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 296);
	// lwzx r7,r6,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// sradi r3,r3,20
	ctx.xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0xFFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s64 >> 20;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// srawi r11,r10,13
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 13;
	// clrlwi r3,r10,19
	ctx.r3.u64 = ctx.r10.u32 & 0x1FFF;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r11,r7,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// mullw r8,r10,r3
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// sraw r10,r8,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r10.s64 = ctx.r8.s32 >> temp.u32;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// mulld r3,r4,r9
	ctx.r3.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r9.u64);
	// sradi r11,r3,20
	ctx.xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s64 >> 20;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// b 0x82321db8
	goto loc_82321DB8;
loc_82321D88:
	// lwz r10,192(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 192);
	// lwz r8,280(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 280);
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r6,r8,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// mulld r3,r4,r9
	ctx.r3.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r9.u64);
	// sradi r11,r3,20
	ctx.xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s64 >> 20;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// b 0x82321db8
	goto loc_82321DB8;
loc_82321DAC:
	// lis r6,127
	ctx.r6.s64 = 8323072;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// ori r6,r6,65534
	ctx.r6.u64 = ctx.r6.u64 | 65534;
loc_82321DB8:
	// subf r30,r29,r28
	r30.u64 = r28.u64 - r29.u64;
	// lwz r31,172(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 172);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82321a08
	ctx.lr = 0x82321DCC;
	sub_82321A08(ctx, base);
	// srawi. r11,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r11.s64 = r30.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82321df0
	if (ctx.cr0.eq) goto loc_82321DF0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82321df0
	if (!ctx.cr6.gt) goto loc_82321DF0;
loc_82321DE0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82321de0
	if (ctx.cr6.gt) goto loc_82321DE0;
loc_82321DF0:
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r31.s32, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// bgt cr6,0x82321e00
	if (ctx.cr6.gt) goto loc_82321E00;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82321E00:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82321e0c
	if (ctx.cr6.gt) goto loc_82321E0C;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82321E0C:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82321e2c
	if (!ctx.cr6.gt) goto loc_82321E2C;
loc_82321E1C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82321e1c
	if (ctx.cr6.gt) goto loc_82321E1C;
loc_82321E2C:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f12,f29
	ctx.f13.f64 = double(float(ctx.f12.f64 * f29.f64));
	// ble cr6,0x8232202c
	if (!ctx.cr6.gt) goto loc_8232202C;
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
loc_82321E58:
	// lwz r11,392(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 392);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bge cr6,0x82322020
	if (!ctx.cr6.lt) goto loc_82322020;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x82321fbc
	if (ctx.cr6.lt) goto loc_82321FBC;
	// addi r8,r28,-3
	ctx.r8.s64 = r28.s64 + -3;
loc_82321E7C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r4,r10
	ctx.r4.s64 = ctx.r10.s32;
	// std r4,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82321eb4
	if (!ctx.cr6.lt) goto loc_82321EB4;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82321ec4
	goto loc_82321EC4;
loc_82321EB4:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_82321EC4:
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82321f00
	if (!ctx.cr6.lt) goto loc_82321F00;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82321f10
	goto loc_82321F10;
loc_82321F00:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_82321F10:
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82321f4c
	if (!ctx.cr6.lt) goto loc_82321F4C;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82321f5c
	goto loc_82321F5C;
loc_82321F4C:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_82321F5C:
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r10,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82321f98
	if (!ctx.cr6.lt) goto loc_82321F98;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82321fa8
	goto loc_82321FA8;
loc_82321F98:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_82321FA8:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82321e7c
	if (ctx.cr6.lt) goto loc_82321E7C;
loc_82321FBC:
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r28.s32, ctx.xer);
	// bge cr6,0x82322020
	if (!ctx.cr6.lt) goto loc_82322020;
	// subf r10,r9,r28
	ctx.r10.u64 = r28.u64 - ctx.r9.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82321FD0:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82322008
	if (!ctx.cr6.lt) goto loc_82322008;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82322018
	goto loc_82322018;
loc_82322008:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_82322018:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82321fd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82321FD0;
loc_82322020:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x82321e58
	if (!ctx.cr0.eq) goto loc_82321E58;
loc_8232202C:
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// stw r3,172(r27)
	REX_STORE_U32(r27.u32 + 172, ctx.r3.u32);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// bne 0x82321c58
	if (!ctx.cr0.eq) goto loc_82321C58;
loc_8232203C:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_82345070) {
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
	ctx.lr = 0x82345078;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// li r23,0
	r23.s64 = 0;
	// lwz r11,15536(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15536);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r29,r23
	r29.u64 = r23.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bne cr6,0x82345800
	if (!ctx.cr6.eq) goto loc_82345800;
	// li r30,8
	r30.s64 = 8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82345118
	if (!ctx.cr6.lt) goto loc_82345118;
loc_823450C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82345118
	if (ctx.cr6.eq) goto loc_82345118;
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
	// bge 0x82345108
	if (!ctx.cr0.lt) goto loc_82345108;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82345108;
	sub_823380C8(ctx, base);
loc_82345108:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823450c0
	if (ctx.cr6.gt) goto loc_823450C0;
loc_82345118:
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
	// bge 0x82345150
	if (!ctx.cr0.lt) goto loc_82345150;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82345150;
	sub_823380C8(ctx, base);
loc_82345150:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x823452d0
	if (!ctx.cr6.eq) goto loc_823452D0;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// li r30,8
	r30.s64 = 8;
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x823451cc
	if (!ctx.cr6.lt) goto loc_823451CC;
loc_82345174:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823451cc
	if (ctx.cr6.eq) goto loc_823451CC;
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
	// bge 0x823451bc
	if (!ctx.cr0.lt) goto loc_823451BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823451BC;
	sub_823380C8(ctx, base);
loc_823451BC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82345174
	if (ctx.cr6.gt) goto loc_82345174;
loc_823451CC:
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
	// bge 0x82345204
	if (!ctx.cr0.lt) goto loc_82345204;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82345204;
	sub_823380C8(ctx, base);
loc_82345204:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x823452d0
	if (!ctx.cr6.eq) goto loc_823452D0;
loc_8234520C:
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// li r30,8
	r30.s64 = 8;
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82345280
	if (!ctx.cr6.lt) goto loc_82345280;
loc_82345228:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82345280
	if (ctx.cr6.eq) goto loc_82345280;
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
	// bge 0x82345270
	if (!ctx.cr0.lt) goto loc_82345270;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82345270;
	sub_823380C8(ctx, base);
loc_82345270:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82345228
	if (ctx.cr6.gt) goto loc_82345228;
loc_82345280:
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
	// bge 0x823452b8
	if (!ctx.cr0.lt) goto loc_823452B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823452B8;
	sub_823380C8(ctx, base);
loc_823452B8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x823452dc
	if (!ctx.cr6.eq) goto loc_823452DC;
	// lwz r11,84(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8234520c
	if (ctx.cr6.eq) goto loc_8234520C;
loc_823452D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
loc_823452DC:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x823452d0
	if (!ctx.cr6.eq) goto loc_823452D0;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823452d0
	if (!ctx.cr6.eq) goto loc_823452D0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,8
	r30.s64 = 8;
	// mr r29,r23
	r29.u64 = r23.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82345364
	if (!ctx.cr6.lt) goto loc_82345364;
loc_8234530C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82345364
	if (ctx.cr6.eq) goto loc_82345364;
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
	// bge 0x82345354
	if (!ctx.cr0.lt) goto loc_82345354;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82345354;
	sub_823380C8(ctx, base);
loc_82345354:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234530c
	if (ctx.cr6.gt) goto loc_8234530C;
loc_82345364:
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
	// bge 0x8234539c
	if (!ctx.cr0.lt) goto loc_8234539C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234539C;
	sub_823380C8(ctx, base);
loc_8234539C:
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(r30.s32, 15, ctx.xer);
	// bne cr6,0x823452d0
	if (!ctx.cr6.eq) goto loc_823452D0;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823432e8
	ctx.lr = 0x823453C0;
	sub_823432E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82346bb8
	if (!ctx.cr6.eq) goto loc_82346BB8;
	// lwz r10,22060(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 22060);
	// li r27,1
	r27.s64 = 1;
	// lwz r11,22056(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 22056);
	// lwz r9,21880(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 21880);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x823453fc
	if (ctx.cr6.gt) goto loc_823453FC;
	// lwz r9,21896(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 21896);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x823453fc
	if (ctx.cr6.gt) goto loc_823453FC;
	// lwz r11,21900(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 21900);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82345480
	if (!ctx.cr6.gt) goto loc_82345480;
loc_823453FC:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8232ed78
	ctx.lr = 0x82345404;
	sub_8232ED78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82345418
	if (!ctx.cr6.eq) goto loc_82345418;
	// li r3,-8
	ctx.r3.s64 = -8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
loc_82345418:
	// lwz r11,22060(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 22060);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,22056(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 22056);
	// addi r3,r24,3772
	ctx.r3.s64 = r24.s64 + 3772;
	// stw r27,3732(r24)
	REX_STORE_U32(r24.u32 + 3732, r27.u32);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r9,21880(r24)
	REX_STORE_U32(r24.u32 + 21880, ctx.r9.u32);
	// stw r10,21896(r24)
	REX_STORE_U32(r24.u32 + 21896, ctx.r10.u32);
	// stw r11,21900(r24)
	REX_STORE_U32(r24.u32 + 21900, ctx.r11.u32);
	// bl 0x82353018
	ctx.lr = 0x82345440;
	sub_82353018(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823397e0
	ctx.lr = 0x82345448;
	sub_823397E0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r5,22060(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 22060);
	// lwz r4,22056(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 22056);
	// bl 0x8233aa80
	ctx.lr = 0x82345458;
	sub_8233AA80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82346bb8
	if (!ctx.cr6.eq) goto loc_82346BB8;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r5,22060(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 22060);
	// lwz r4,22056(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 22056);
	// bl 0x8233d6b0
	ctx.lr = 0x82345470;
	sub_8233D6B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82346bb8
	if (!ctx.cr6.eq) goto loc_82346BB8;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233b340
	ctx.lr = 0x82345480;
	sub_8233B340(ctx, base);
loc_82345480:
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82345508
	if (ctx.cr6.eq) goto loc_82345508;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r30,r27
	r30.u64 = r27.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x823454e4
	if (!ctx.cr6.lt) goto loc_823454E4;
loc_823454A4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823454e4
	if (ctx.cr6.eq) goto loc_823454E4;
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
	// bge 0x823454d4
	if (!ctx.cr0.lt) goto loc_823454D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823454D4;
	sub_823380C8(ctx, base);
loc_823454D4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823454a4
	if (ctx.cr6.gt) goto loc_823454A4;
loc_823454E4:
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
	// bge 0x82345508
	if (!ctx.cr0.lt) goto loc_82345508;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82345508;
	sub_823380C8(ctx, base);
loc_82345508:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// bl 0x82337f50
	ctx.lr = 0x82345518;
	sub_82337F50(ctx, base);
	// li r30,8
	r30.s64 = 8;
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x8234558c
	if (!ctx.cr6.lt) goto loc_8234558C;
loc_82345534:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234558c
	if (ctx.cr6.eq) goto loc_8234558C;
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
	// bge 0x8234557c
	if (!ctx.cr0.lt) goto loc_8234557C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234557C;
	sub_823380C8(ctx, base);
loc_8234557C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82345534
	if (ctx.cr6.gt) goto loc_82345534;
loc_8234558C:
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
	// bge 0x823455c4
	if (!ctx.cr0.lt) goto loc_823455C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823455C4;
	sub_823380C8(ctx, base);
loc_823455C4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x823452d0
	if (!ctx.cr6.eq) goto loc_823452D0;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// li r30,8
	r30.s64 = 8;
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82345640
	if (!ctx.cr6.lt) goto loc_82345640;
loc_823455E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82345640
	if (ctx.cr6.eq) goto loc_82345640;
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
	// bge 0x82345630
	if (!ctx.cr0.lt) goto loc_82345630;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82345630;
	sub_823380C8(ctx, base);
loc_82345630:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823455e8
	if (ctx.cr6.gt) goto loc_823455E8;
loc_82345640:
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
	// bge 0x82345678
	if (!ctx.cr0.lt) goto loc_82345678;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82345678;
	sub_823380C8(ctx, base);
loc_82345678:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x823452d0
	if (!ctx.cr6.eq) goto loc_823452D0;
loc_82345680:
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// li r30,8
	r30.s64 = 8;
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x823456f4
	if (!ctx.cr6.lt) goto loc_823456F4;
loc_8234569C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823456f4
	if (ctx.cr6.eq) goto loc_823456F4;
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
	// bge 0x823456e4
	if (!ctx.cr0.lt) goto loc_823456E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823456E4;
	sub_823380C8(ctx, base);
loc_823456E4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234569c
	if (ctx.cr6.gt) goto loc_8234569C;
loc_823456F4:
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
	// bge 0x8234572c
	if (!ctx.cr0.lt) goto loc_8234572C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234572C;
	sub_823380C8(ctx, base);
loc_8234572C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82345680
	if (ctx.cr6.eq) goto loc_82345680;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x823452d0
	if (!ctx.cr6.eq) goto loc_823452D0;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// li r30,8
	r30.s64 = 8;
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x823457b0
	if (!ctx.cr6.lt) goto loc_823457B0;
loc_82345758:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823457b0
	if (ctx.cr6.eq) goto loc_823457B0;
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
	// bge 0x823457a0
	if (!ctx.cr0.lt) goto loc_823457A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823457A0;
	sub_823380C8(ctx, base);
loc_823457A0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82345758
	if (ctx.cr6.gt) goto loc_82345758;
loc_823457B0:
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
	// bge 0x823457e8
	if (!ctx.cr0.lt) goto loc_823457E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823457E8;
	sub_823380C8(ctx, base);
loc_823457E8:
	// cmpwi cr6,r30,14
	ctx.cr6.compare<int32_t>(r30.s32, 14, ctx.xer);
	// bne cr6,0x823452d0
	if (!ctx.cr6.eq) goto loc_823452D0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82336dc8
	ctx.lr = 0x823457F8;
	sub_82336DC8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
loc_82345800:
	// li r30,2
	r30.s64 = 2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82345864
	if (!ctx.cr6.lt) goto loc_82345864;
loc_8234580C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82345864
	if (ctx.cr6.eq) goto loc_82345864;
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
	// bge 0x82345854
	if (!ctx.cr0.lt) goto loc_82345854;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82345854;
	sub_823380C8(ctx, base);
loc_82345854:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234580c
	if (ctx.cr6.gt) goto loc_8234580C;
loc_82345864:
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
	// bge 0x8234589c
	if (!ctx.cr0.lt) goto loc_8234589C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234589C;
	sub_823380C8(ctx, base);
loc_8234589C:
	// li r27,1
	r27.s64 = 1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x823458b0
	if (!ctx.cr6.eq) goto loc_823458B0;
	// stw r23,3964(r24)
	REX_STORE_U32(r24.u32 + 3964, r23.u32);
	// b 0x823458d0
	goto loc_823458D0;
loc_823458B0:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x823458c0
	if (!ctx.cr6.eq) goto loc_823458C0;
	// stw r27,3964(r24)
	REX_STORE_U32(r24.u32 + 3964, r27.u32);
	// b 0x823458d0
	goto loc_823458D0;
loc_823458C0:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// bne cr6,0x823458d0
	if (!ctx.cr6.eq) goto loc_823458D0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,3964(r24)
	REX_STORE_U32(r24.u32 + 3964, ctx.r11.u32);
loc_823458D0:
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82345944
	if (!ctx.cr6.lt) goto loc_82345944;
loc_823458EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82345944
	if (ctx.cr6.eq) goto loc_82345944;
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
	// bge 0x82345934
	if (!ctx.cr0.lt) goto loc_82345934;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82345934;
	sub_823380C8(ctx, base);
loc_82345934:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823458ec
	if (ctx.cr6.gt) goto loc_823458EC;
loc_82345944:
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
	// bge 0x8234597c
	if (!ctx.cr0.lt) goto loc_8234597C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234597C;
	sub_823380C8(ctx, base);
loc_8234597C:
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r30,r27
	r30.u64 = r27.u64;
	// stw r28,3980(r24)
	REX_STORE_U32(r24.u32 + 3980, r28.u32);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x823459f4
	if (!ctx.cr6.lt) goto loc_823459F4;
loc_8234599C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823459f4
	if (ctx.cr6.eq) goto loc_823459F4;
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
	// bge 0x823459e4
	if (!ctx.cr0.lt) goto loc_823459E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823459E4;
	sub_823380C8(ctx, base);
loc_823459E4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234599c
	if (ctx.cr6.gt) goto loc_8234599C;
loc_823459F4:
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
	// bge 0x82345a2c
	if (!ctx.cr0.lt) goto loc_82345A2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82345A2C;
	sub_823380C8(ctx, base);
loc_82345A2C:
	// lwz r11,3980(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3980);
	// lwz r10,3992(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 3992);
	// stw r30,15364(r24)
	REX_STORE_U32(r24.u32 + 15364, r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823452d0
	if (!ctx.cr6.eq) goto loc_823452D0;
	// lwz r11,3996(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3996);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823452d0
	if (!ctx.cr6.eq) goto loc_823452D0;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// li r30,3
	r30.s64 = 3;
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82345ac0
	if (!ctx.cr6.lt) goto loc_82345AC0;
loc_82345A68:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82345ac0
	if (ctx.cr6.eq) goto loc_82345AC0;
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
	// bge 0x82345ab0
	if (!ctx.cr0.lt) goto loc_82345AB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82345AB0;
	sub_823380C8(ctx, base);
loc_82345AB0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82345a68
	if (ctx.cr6.gt) goto loc_82345A68;
loc_82345AC0:
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
	// bge 0x82345af8
	if (!ctx.cr0.lt) goto loc_82345AF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82345AF8;
	sub_823380C8(ctx, base);
loc_82345AF8:
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// li r30,5
	r30.s64 = 5;
	// stw r28,3712(r24)
	REX_STORE_U32(r24.u32 + 3712, r28.u32);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x82345b70
	if (!ctx.cr6.lt) goto loc_82345B70;
loc_82345B18:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82345b70
	if (ctx.cr6.eq) goto loc_82345B70;
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
	// bge 0x82345b60
	if (!ctx.cr0.lt) goto loc_82345B60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82345B60;
	sub_823380C8(ctx, base);
loc_82345B60:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82345b18
	if (ctx.cr6.gt) goto loc_82345B18;
loc_82345B70:
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
	// bge 0x82345ba8
	if (!ctx.cr0.lt) goto loc_82345BA8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82345BA8;
	sub_823380C8(ctx, base);
loc_82345BA8:
	// lwz r11,3712(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3712);
	// rlwinm r10,r30,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r30,r27
	r30.u64 = r27.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r27,3956(r24)
	REX_STORE_U32(r24.u32 + 3956, r27.u32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r10,3716(r24)
	REX_STORE_U32(r24.u32 + 3716, ctx.r10.u32);
	// mr r29,r23
	r29.u64 = r23.u64;
	// stw r9,3712(r24)
	REX_STORE_U32(r24.u32 + 3712, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82345c3c
	if (!ctx.cr6.lt) goto loc_82345C3C;
loc_82345BE4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82345c3c
	if (ctx.cr6.eq) goto loc_82345C3C;
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
	// bge 0x82345c2c
	if (!ctx.cr0.lt) goto loc_82345C2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82345C2C;
	sub_823380C8(ctx, base);
loc_82345C2C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82345be4
	if (ctx.cr6.gt) goto loc_82345BE4;
loc_82345C3C:
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
	// bge 0x82345c74
	if (!ctx.cr0.lt) goto loc_82345C74;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82345C74;
	sub_823380C8(ctx, base);
loc_82345C74:
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r30,r27
	r30.u64 = r27.u64;
	// stw r28,3948(r24)
	REX_STORE_U32(r24.u32 + 3948, r28.u32);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82345cec
	if (!ctx.cr6.lt) goto loc_82345CEC;
loc_82345C94:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82345cec
	if (ctx.cr6.eq) goto loc_82345CEC;
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
	// bge 0x82345cdc
	if (!ctx.cr0.lt) goto loc_82345CDC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82345CDC;
	sub_823380C8(ctx, base);
loc_82345CDC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82345c94
	if (ctx.cr6.gt) goto loc_82345C94;
loc_82345CEC:
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
	// bge 0x82345d24
	if (!ctx.cr0.lt) goto loc_82345D24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82345D24;
	sub_823380C8(ctx, base);
loc_82345D24:
	// stw r28,3940(r24)
	REX_STORE_U32(r24.u32 + 3940, r28.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82345d9c
	if (!ctx.cr6.lt) goto loc_82345D9C;
loc_82345D44:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82345d9c
	if (ctx.cr6.eq) goto loc_82345D9C;
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
	// bge 0x82345d8c
	if (!ctx.cr0.lt) goto loc_82345D8C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82345D8C;
	sub_823380C8(ctx, base);
loc_82345D8C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82345d44
	if (ctx.cr6.gt) goto loc_82345D44;
loc_82345D9C:
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
	// bge 0x82345dd4
	if (!ctx.cr0.lt) goto loc_82345DD4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82345DD4;
	sub_823380C8(ctx, base);
loc_82345DD4:
	// stw r28,14884(r24)
	REX_STORE_U32(r24.u32 + 14884, r28.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82345e4c
	if (!ctx.cr6.lt) goto loc_82345E4C;
loc_82345DF4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82345e4c
	if (ctx.cr6.eq) goto loc_82345E4C;
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
	// bge 0x82345e3c
	if (!ctx.cr0.lt) goto loc_82345E3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82345E3C;
	sub_823380C8(ctx, base);
loc_82345E3C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82345df4
	if (ctx.cr6.gt) goto loc_82345DF4;
loc_82345E4C:
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
	// bge 0x82345e84
	if (!ctx.cr0.lt) goto loc_82345E84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82345E84;
	sub_823380C8(ctx, base);
loc_82345E84:
	// stw r28,1792(r24)
	REX_STORE_U32(r24.u32 + 1792, r28.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82345efc
	if (!ctx.cr6.lt) goto loc_82345EFC;
loc_82345EA4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82345efc
	if (ctx.cr6.eq) goto loc_82345EFC;
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
	// bge 0x82345eec
	if (!ctx.cr0.lt) goto loc_82345EEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82345EEC;
	sub_823380C8(ctx, base);
loc_82345EEC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82345ea4
	if (ctx.cr6.gt) goto loc_82345EA4;
loc_82345EFC:
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
	// bge 0x82345f34
	if (!ctx.cr0.lt) goto loc_82345F34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82345F34;
	sub_823380C8(ctx, base);
loc_82345F34:
	// stw r28,1796(r24)
	REX_STORE_U32(r24.u32 + 1796, r28.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82345fac
	if (!ctx.cr6.lt) goto loc_82345FAC;
loc_82345F54:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82345fac
	if (ctx.cr6.eq) goto loc_82345FAC;
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
	// bge 0x82345f9c
	if (!ctx.cr0.lt) goto loc_82345F9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82345F9C;
	sub_823380C8(ctx, base);
loc_82345F9C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82345f54
	if (ctx.cr6.gt) goto loc_82345F54;
loc_82345FAC:
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
	// bge 0x82345fe4
	if (!ctx.cr0.lt) goto loc_82345FE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82345FE4;
	sub_823380C8(ctx, base);
loc_82345FE4:
	// stw r28,21568(r24)
	REX_STORE_U32(r24.u32 + 21568, r28.u32);
	// li r30,2
	r30.s64 = 2;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8234605c
	if (!ctx.cr6.lt) goto loc_8234605C;
loc_82346004:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234605c
	if (ctx.cr6.eq) goto loc_8234605C;
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
	// bge 0x8234604c
	if (!ctx.cr0.lt) goto loc_8234604C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234604C;
	sub_823380C8(ctx, base);
loc_8234604C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82346004
	if (ctx.cr6.gt) goto loc_82346004;
loc_8234605C:
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
	// bge 0x82346094
	if (!ctx.cr0.lt) goto loc_82346094;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82346094;
	sub_823380C8(ctx, base);
loc_82346094:
	// stw r28,4040(r24)
	REX_STORE_U32(r24.u32 + 4040, r28.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234610c
	if (!ctx.cr6.lt) goto loc_8234610C;
loc_823460B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234610c
	if (ctx.cr6.eq) goto loc_8234610C;
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
	// bge 0x823460fc
	if (!ctx.cr0.lt) goto loc_823460FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823460FC;
	sub_823380C8(ctx, base);
loc_823460FC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823460b4
	if (ctx.cr6.gt) goto loc_823460B4;
loc_8234610C:
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
	// bge 0x82346144
	if (!ctx.cr0.lt) goto loc_82346144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82346144;
	sub_823380C8(ctx, base);
loc_82346144:
	// stw r28,440(r24)
	REX_STORE_U32(r24.u32 + 440, r28.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x823461bc
	if (!ctx.cr6.lt) goto loc_823461BC;
loc_82346164:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823461bc
	if (ctx.cr6.eq) goto loc_823461BC;
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
	// bge 0x823461ac
	if (!ctx.cr0.lt) goto loc_823461AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823461AC;
	sub_823380C8(ctx, base);
loc_823461AC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82346164
	if (ctx.cr6.gt) goto loc_82346164;
loc_823461BC:
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
	// bge 0x823461f4
	if (!ctx.cr0.lt) goto loc_823461F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823461F4;
	sub_823380C8(ctx, base);
loc_823461F4:
	// stw r28,400(r24)
	REX_STORE_U32(r24.u32 + 400, r28.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234626c
	if (!ctx.cr6.lt) goto loc_8234626C;
loc_82346214:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234626c
	if (ctx.cr6.eq) goto loc_8234626C;
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
	// bge 0x8234625c
	if (!ctx.cr0.lt) goto loc_8234625C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234625C;
	sub_823380C8(ctx, base);
loc_8234625C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82346214
	if (ctx.cr6.gt) goto loc_82346214;
loc_8234626C:
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
	// bge 0x823462a4
	if (!ctx.cr0.lt) goto loc_823462A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823462A4;
	sub_823380C8(ctx, base);
loc_823462A4:
	// stw r30,3008(r24)
	REX_STORE_U32(r24.u32 + 3008, r30.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234631c
	if (!ctx.cr6.lt) goto loc_8234631C;
loc_823462C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234631c
	if (ctx.cr6.eq) goto loc_8234631C;
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
	// bge 0x8234630c
	if (!ctx.cr0.lt) goto loc_8234630C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234630C;
	sub_823380C8(ctx, base);
loc_8234630C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823462c4
	if (ctx.cr6.gt) goto loc_823462C4;
loc_8234631C:
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
	// bge 0x82346354
	if (!ctx.cr0.lt) goto loc_82346354;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82346354;
	sub_823380C8(ctx, base);
loc_82346354:
	// stw r28,3988(r24)
	REX_STORE_U32(r24.u32 + 3988, r28.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x823463cc
	if (!ctx.cr6.lt) goto loc_823463CC;
loc_82346374:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823463cc
	if (ctx.cr6.eq) goto loc_823463CC;
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
	// bge 0x823463bc
	if (!ctx.cr0.lt) goto loc_823463BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823463BC;
	sub_823380C8(ctx, base);
loc_823463BC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82346374
	if (ctx.cr6.gt) goto loc_82346374;
loc_823463CC:
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
	// bge 0x82346404
	if (!ctx.cr0.lt) goto loc_82346404;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82346404;
	sub_823380C8(ctx, base);
loc_82346404:
	// stw r28,14856(r24)
	REX_STORE_U32(r24.u32 + 14856, r28.u32);
	// li r30,3
	r30.s64 = 3;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8234647c
	if (!ctx.cr6.lt) goto loc_8234647C;
loc_82346424:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234647c
	if (ctx.cr6.eq) goto loc_8234647C;
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
	// bge 0x8234646c
	if (!ctx.cr0.lt) goto loc_8234646C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234646C;
	sub_823380C8(ctx, base);
loc_8234646C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82346424
	if (ctx.cr6.gt) goto loc_82346424;
loc_8234647C:
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
	// bge 0x823464b4
	if (!ctx.cr0.lt) goto loc_823464B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823464B4;
	sub_823380C8(ctx, base);
loc_823464B4:
	// stw r28,14836(r24)
	REX_STORE_U32(r24.u32 + 14836, r28.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234652c
	if (!ctx.cr6.lt) goto loc_8234652C;
loc_823464D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234652c
	if (ctx.cr6.eq) goto loc_8234652C;
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
	// bge 0x8234651c
	if (!ctx.cr0.lt) goto loc_8234651C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234651C;
	sub_823380C8(ctx, base);
loc_8234651C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823464d4
	if (ctx.cr6.gt) goto loc_823464D4;
loc_8234652C:
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
	// bge 0x82346564
	if (!ctx.cr0.lt) goto loc_82346564;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82346564;
	sub_823380C8(ctx, base);
loc_82346564:
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r30,3476(r24)
	REX_STORE_U32(r24.u32 + 3476, r30.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x8234662c
	if (ctx.cr6.eq) goto loc_8234662C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x823465e4
	if (!ctx.cr6.lt) goto loc_823465E4;
loc_8234658C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823465e4
	if (ctx.cr6.eq) goto loc_823465E4;
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
	// bge 0x823465d4
	if (!ctx.cr0.lt) goto loc_823465D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823465D4;
	sub_823380C8(ctx, base);
loc_823465D4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234658c
	if (ctx.cr6.gt) goto loc_8234658C;
loc_823465E4:
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
	// bge 0x8234661c
	if (!ctx.cr0.lt) goto loc_8234661C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234661C;
	sub_823380C8(ctx, base);
loc_8234661C:
	// addi r11,r30,2
	ctx.r11.s64 = r30.s64 + 2;
	// stw r30,3468(r24)
	REX_STORE_U32(r24.u32 + 3468, r30.u32);
	// stw r11,22228(r24)
	REX_STORE_U32(r24.u32 + 22228, ctx.r11.u32);
	// b 0x823466cc
	goto loc_823466CC;
loc_8234662C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234668c
	if (!ctx.cr6.lt) goto loc_8234668C;
loc_82346634:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234668c
	if (ctx.cr6.eq) goto loc_8234668C;
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
	// bge 0x8234667c
	if (!ctx.cr0.lt) goto loc_8234667C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234667C;
	sub_823380C8(ctx, base);
loc_8234667C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82346634
	if (ctx.cr6.gt) goto loc_82346634;
loc_8234668C:
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
	// bge 0x823466c4
	if (!ctx.cr0.lt) goto loc_823466C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823466C4;
	sub_823380C8(ctx, base);
loc_823466C4:
	// stw r30,3480(r24)
	REX_STORE_U32(r24.u32 + 3480, r30.u32);
	// stw r30,22228(r24)
	REX_STORE_U32(r24.u32 + 22228, r30.u32);
loc_823466CC:
	// lwz r11,3476(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823466e8
	if (!ctx.cr6.eq) goto loc_823466E8;
	// lwz r11,3480(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// beq cr6,0x823466ec
	if (ctx.cr6.eq) goto loc_823466EC;
loc_823466E8:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_823466EC:
	// stw r11,3472(r24)
	REX_STORE_U32(r24.u32 + 3472, ctx.r11.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82346764
	if (!ctx.cr6.lt) goto loc_82346764;
loc_8234670C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82346764
	if (ctx.cr6.eq) goto loc_82346764;
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
	// bge 0x82346754
	if (!ctx.cr0.lt) goto loc_82346754;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82346754;
	sub_823380C8(ctx, base);
loc_82346754:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234670c
	if (ctx.cr6.gt) goto loc_8234670C;
loc_82346764:
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
	// bge 0x8234679c
	if (!ctx.cr0.lt) goto loc_8234679C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234679C;
	sub_823380C8(ctx, base);
loc_8234679C:
	// lwz r11,15364(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 15364);
	// stw r30,3484(r24)
	REX_STORE_U32(r24.u32 + 3484, r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82346868
	if (!ctx.cr6.eq) goto loc_82346868;
	// lwz r11,3964(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3964);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234683c
	if (!ctx.cr6.eq) goto loc_8234683C;
	// lwz r11,3940(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234685c
	if (!ctx.cr6.eq) goto loc_8234685C;
	// lwz r11,1792(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1792);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8234685c
	if (!ctx.cr6.eq) goto loc_8234685C;
	// lwz r11,1796(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1796);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8234685c
	if (!ctx.cr6.eq) goto loc_8234685C;
	// lwz r11,3988(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234685c
	if (!ctx.cr6.eq) goto loc_8234685C;
	// lwz r11,21568(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 21568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234685c
	if (!ctx.cr6.eq) goto loc_8234685C;
	// lwz r11,3948(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234685c
	if (!ctx.cr6.eq) goto loc_8234685C;
	// lwz r11,3980(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234685c
	if (!ctx.cr6.eq) goto loc_8234685C;
	// lwz r11,14884(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 14884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234685c
	if (!ctx.cr6.eq) goto loc_8234685C;
	// lwz r11,4040(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4040);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234685c
	if (!ctx.cr6.eq) goto loc_8234685C;
	// lwz r11,14836(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234685c
	if (!ctx.cr6.eq) goto loc_8234685C;
	// lwz r11,14856(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 14856);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82346858
	goto loc_82346858;
loc_8234683C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82346868
	if (!ctx.cr6.eq) goto loc_82346868;
	// lwz r11,3940(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234685c
	if (!ctx.cr6.eq) goto loc_8234685C;
	// lwz r11,1792(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1792);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
loc_82346858:
	// beq cr6,0x82346868
	if (ctx.cr6.eq) goto loc_82346868;
loc_8234685C:
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
loc_82346868:
	// lwz r11,14836(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 14836);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r9,3980(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 3980);
	// addi r8,r10,-28976
	ctx.r8.s64 = ctx.r10.s64 + -28976;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r6,r7,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r6,14840(r24)
	REX_STORE_U32(r24.u32 + 14840, ctx.r6.u32);
	// beq cr6,0x82346894
	if (ctx.cr6.eq) goto loc_82346894;
	// stw r23,4004(r24)
	REX_STORE_U32(r24.u32 + 4004, r23.u32);
	// stw r23,3940(r24)
	REX_STORE_U32(r24.u32 + 3940, r23.u32);
loc_82346894:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233cca0
	ctx.lr = 0x823468A0;
	sub_8233CCA0(ctx, base);
	// lwz r11,1792(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1792);
	// stw r23,448(r24)
	REX_STORE_U32(r24.u32 + 448, r23.u32);
	// stw r23,3944(r24)
	REX_STORE_U32(r24.u32 + 3944, r23.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823468e8
	if (ctx.cr6.eq) goto loc_823468E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233ce58
	ctx.lr = 0x823468C0;
	sub_8233CE58(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233cf70
	ctx.lr = 0x823468C8;
	sub_8233CF70(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233d0f0
	ctx.lr = 0x823468D0;
	sub_8233D0F0(ctx, base);
	// lwz r9,1968(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 1968);
	// lwz r8,3216(r24)
	ctx.r8.u64 = REX_LOAD_U32(r24.u32 + 3216);
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// addi r10,r11,-8752
	ctx.r10.s64 = ctx.r11.s64 + -8752;
	// stw r8,52(r9)
	REX_STORE_U32(ctx.r9.u32 + 52, ctx.r8.u32);
	// stw r10,3192(r24)
	REX_STORE_U32(r24.u32 + 3192, ctx.r10.u32);
loc_823468E8:
	// lwz r11,15364(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 15364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823469ac
	if (ctx.cr6.eq) goto loc_823469AC;
	// lwz r11,3940(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823452d0
	if (!ctx.cr6.eq) goto loc_823452D0;
	// lwz r11,400(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823452d0
	if (!ctx.cr6.eq) goto loc_823452D0;
	// lwz r11,3980(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823452d0
	if (!ctx.cr6.eq) goto loc_823452D0;
	// lwz r11,3948(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823452d0
	if (!ctx.cr6.eq) goto loc_823452D0;
	// lwz r11,21568(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 21568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823452d0
	if (!ctx.cr6.eq) goto loc_823452D0;
	// lwz r11,14884(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 14884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823452d0
	if (!ctx.cr6.eq) goto loc_823452D0;
	// lwz r11,1796(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823452d0
	if (!ctx.cr6.eq) goto loc_823452D0;
	// lwz r11,4040(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4040);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823452d0
	if (!ctx.cr6.eq) goto loc_823452D0;
	// lwz r11,440(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823452d0
	if (!ctx.cr6.eq) goto loc_823452D0;
	// lwz r11,3988(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823452d0
	if (!ctx.cr6.eq) goto loc_823452D0;
	// lwz r11,14856(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 14856);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823452d0
	if (!ctx.cr6.eq) goto loc_823452D0;
	// lwz r11,3476(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823452d0
	if (!ctx.cr6.eq) goto loc_823452D0;
	// lwz r11,3468(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3468);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823452d0
	if (!ctx.cr6.eq) goto loc_823452D0;
	// lwz r11,3480(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823452d0
	if (!ctx.cr6.eq) goto loc_823452D0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82342ea8
	ctx.lr = 0x823469A4;
	sub_82342EA8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
loc_823469AC:
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r30,r27
	r30.u64 = r27.u64;
	// stw r27,3400(r24)
	REX_STORE_U32(r24.u32 + 3400, r27.u32);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82346a24
	if (!ctx.cr6.lt) goto loc_82346A24;
loc_823469CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82346a24
	if (ctx.cr6.eq) goto loc_82346A24;
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
	// bge 0x82346a14
	if (!ctx.cr0.lt) goto loc_82346A14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82346A14;
	sub_823380C8(ctx, base);
loc_82346A14:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823469cc
	if (ctx.cr6.gt) goto loc_823469CC;
loc_82346A24:
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
	// bge 0x82346a5c
	if (!ctx.cr0.lt) goto loc_82346A5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82346A5C;
	sub_823380C8(ctx, base);
loc_82346A5C:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x82346a80
	if (!ctx.cr6.eq) goto loc_82346A80;
	// lwz r11,84(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82346a80
	if (!ctx.cr6.eq) goto loc_82346A80;
	// stw r27,3408(r24)
	REX_STORE_U32(r24.u32 + 3408, r27.u32);
	// stw r23,3404(r24)
	REX_STORE_U32(r24.u32 + 3404, r23.u32);
	// stw r23,3400(r24)
	REX_STORE_U32(r24.u32 + 3400, r23.u32);
loc_82346A80:
	// cmplwi cr6,r22,5
	ctx.cr6.compare<uint32_t>(r22.u32, 5, ctx.xer);
	// bne cr6,0x82346bb4
	if (!ctx.cr6.eq) goto loc_82346BB4;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82346afc
	if (!ctx.cr6.lt) goto loc_82346AFC;
loc_82346AA4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82346afc
	if (ctx.cr6.eq) goto loc_82346AFC;
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
	// bge 0x82346aec
	if (!ctx.cr0.lt) goto loc_82346AEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82346AEC;
	sub_823380C8(ctx, base);
loc_82346AEC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82346aa4
	if (ctx.cr6.gt) goto loc_82346AA4;
loc_82346AFC:
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
	// bge 0x82346b34
	if (!ctx.cr0.lt) goto loc_82346B34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82346B34;
	sub_823380C8(ctx, base);
loc_82346B34:
	// stw r29,21572(r24)
	REX_STORE_U32(r24.u32 + 21572, r29.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82346b90
	if (!ctx.cr6.lt) goto loc_82346B90;
loc_82346B50:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82346b90
	if (ctx.cr6.eq) goto loc_82346B90;
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
	// bge 0x82346b80
	if (!ctx.cr0.lt) goto loc_82346B80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82346B80;
	sub_823380C8(ctx, base);
loc_82346B80:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82346b50
	if (ctx.cr6.gt) goto loc_82346B50;
loc_82346B90:
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
	// bge 0x82346bb4
	if (!ctx.cr0.lt) goto loc_82346BB4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82346BB4;
	sub_823380C8(ctx, base);
loc_82346BB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82346BB8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_823C0380) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823c039c
	if (ctx.cr6.eq) goto loc_823C039C;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// bne cr6,0x823c03a0
	if (!ctx.cr6.eq) goto loc_823C03A0;
loc_823C039C:
	// li r6,1
	ctx.r6.s64 = 1;
loc_823C03A0:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// lis r8,12338
	ctx.r8.s64 = 808583168;
	// ori r10,r10,22105
	ctx.r10.u64 = ctx.r10.u64 | 22105;
	// lis r7,22101
	ctx.r7.s64 = 1448411136;
	// ori r8,r8,13385
	ctx.r8.u64 = ctx.r8.u64 | 13385;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// ori r7,r7,22857
	ctx.r7.u64 = ctx.r7.u64 | 22857;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823c0448
	if (ctx.cr6.gt) goto loc_823C0448;
	// beq cr6,0x823c0468
	if (ctx.cr6.eq) goto loc_823C0468;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823c0468
	if (ctx.cr6.eq) goto loc_823C0468;
	// lis r10,12593
	ctx.r10.s64 = 825294848;
	// ori r7,r10,13392
	ctx.r7.u64 = ctx.r10.u64 | 13392;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x823c0460
	if (!ctx.cr6.eq) goto loc_823C0460;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x823c0470
	if (!ctx.cr6.eq) goto loc_823C0470;
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r10,r11,21849
	ctx.r10.u64 = ctx.r11.u64 | 21849;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823c0410
	if (!ctx.cr6.eq) goto loc_823C0410;
	// lis r11,-32196
	ctx.r11.s64 = -2109997056;
	// addi r10,r11,-2600
	ctx.r10.s64 = ctx.r11.s64 + -2600;
	// stw r10,14664(r3)
	REX_STORE_U32(ctx.r3.u32 + 14664, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823C0410:
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r10,r11,22857
	ctx.r10.u64 = ctx.r11.u64 | 22857;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823c0428
	if (ctx.cr6.eq) goto loc_823C0428;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823c0470
	if (!ctx.cr6.eq) goto loc_823C0470;
loc_823C0428:
	// lwz r11,14620(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14620);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823c0470
	if (ctx.cr6.eq) goto loc_823C0470;
	// lis r11,-32196
	ctx.r11.s64 = -2109997056;
	// addi r10,r11,-7224
	ctx.r10.s64 = ctx.r11.s64 + -7224;
	// stw r10,14660(r3)
	REX_STORE_U32(ctx.r3.u32 + 14660, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823C0448:
	// lis r5,12850
	ctx.r5.s64 = 842137600;
	// ori r4,r5,13392
	ctx.r4.u64 = ctx.r5.u64 | 13392;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823c04e8
	if (ctx.cr6.eq) goto loc_823C04E8;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x823c0468
	if (ctx.cr6.eq) goto loc_823C0468;
loc_823C0460:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_823C0468:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x823c0478
	if (ctx.cr6.eq) goto loc_823C0478;
loc_823C0470:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_823C0478:
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r6,r11,21849
	ctx.r6.u64 = ctx.r11.u64 | 21849;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x823c04bc
	if (!ctx.cr6.eq) goto loc_823C04BC;
	// lwz r11,14620(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14620);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823c04a8
	if (!ctx.cr6.eq) goto loc_823C04A8;
	// lis r11,-32196
	ctx.r11.s64 = -2109997056;
	// addi r10,r11,-2272
	ctx.r10.s64 = ctx.r11.s64 + -2272;
	// stw r10,14664(r3)
	REX_STORE_U32(ctx.r3.u32 + 14664, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823C04A8:
	// lis r11,-32196
	ctx.r11.s64 = -2109997056;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// stw r10,14664(r3)
	REX_STORE_U32(ctx.r3.u32 + 14664, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823C04BC:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823c04d4
	if (ctx.cr6.eq) goto loc_823C04D4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x823c04d4
	if (ctx.cr6.eq) goto loc_823C04D4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823c0470
	if (!ctx.cr6.eq) goto loc_823C0470;
loc_823C04D4:
	// lis r11,-32196
	ctx.r11.s64 = -2109997056;
	// addi r10,r11,18376
	ctx.r10.s64 = ctx.r11.s64 + 18376;
	// stw r10,14660(r3)
	REX_STORE_U32(ctx.r3.u32 + 14660, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823C04E8:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x823c0470
	if (!ctx.cr6.eq) goto loc_823C0470;
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r8,r11,21849
	ctx.r8.u64 = ctx.r11.u64 | 21849;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823c0514
	if (!ctx.cr6.eq) goto loc_823C0514;
	// lis r11,-32196
	ctx.r11.s64 = -2109997056;
	// addi r10,r11,-1144
	ctx.r10.s64 = ctx.r11.s64 + -1144;
	// stw r10,14664(r3)
	REX_STORE_U32(ctx.r3.u32 + 14664, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823C0514:
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// ori r8,r11,13385
	ctx.r8.u64 = ctx.r11.u64 | 13385;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823c053c
	if (ctx.cr6.eq) goto loc_823C053C;
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r8,r11,22857
	ctx.r8.u64 = ctx.r11.u64 | 22857;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823c053c
	if (ctx.cr6.eq) goto loc_823C053C;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823c0470
	if (!ctx.cr6.eq) goto loc_823C0470;
loc_823C053C:
	// lis r11,-32196
	ctx.r11.s64 = -2109997056;
	// addi r10,r11,-4776
	ctx.r10.s64 = ctx.r11.s64 + -4776;
	// stw r10,14660(r3)
	REX_STORE_U32(ctx.r3.u32 + 14660, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823C3578) {
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
	ctx.lr = 0x823C3580;
	// rlwinm r11,r7,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// stw r10,76(r1)
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lwz r31,92(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r8,r8,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// subf r27,r7,r11
	r27.u64 = ctx.r11.u64 - ctx.r7.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r26,r7,r8
	r26.u64 = ctx.r8.u64 - ctx.r7.u64;
	// divw r28,r27,r10
	r28.u64 = uint32_t((ctx.r10.s32 && !(r27.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? r27.s32 / ctx.r10.s32 : 0);
	// addi r25,r31,-1
	r25.s64 = r31.s64 + -1;
	// srawi r7,r28,4
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0xF) != 0);
	ctx.r7.s64 = r28.s32 >> 4;
	// divw r29,r26,r25
	r29.u64 = uint32_t((r25.s32 && !(r26.s32 == INT32_MIN && r25.s32 == -1)) ? r26.s32 / r25.s32 : 0);
	// addze r30,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	r30.s64 = temp.s64;
	// rotlwi r7,r27,1
	ctx.r7.u64 = __builtin_rotateleft32(r27.u32, 1);
	// stw r29,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, r29.u32);
	// srawi r27,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r27.s64 = r29.s32 >> 4;
	// addi r24,r7,-1
	r24.s64 = ctx.r7.s64 + -1;
	// addze r7,r27
	temp.s64 = r27.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r27.u32;
	ctx.r7.s64 = temp.s64;
	// lis r23,0
	r23.s64 = 0;
	// rotlwi r31,r26,1
	r31.u64 = __builtin_rotateleft32(r26.u32, 1);
	// addi r14,r3,-2
	r14.s64 = ctx.r3.s64 + -2;
	// add r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 + ctx.r8.u64;
	// ori r18,r23,32768
	r18.u64 = r23.u64 | 32768;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 & ~r24.u64;
	// andc r8,r25,r31
	ctx.r8.u64 = r25.u64 & ~r31.u64;
	// clrlwi r7,r14,30
	ctx.r7.u64 = r14.u32 & 0x3;
	// subf r30,r18,r3
	r30.u64 = ctx.r3.u64 - r18.u64;
	// twllei r25,0
	if (r25.s32 == 0 || r25.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r30,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, r30.u32);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// subf r22,r18,r11
	r22.u64 = ctx.r11.u64 - r18.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x823c36fc
	if (!ctx.cr6.eq) goto loc_823C36FC;
	// mr r17,r18
	r17.u64 = r18.u64;
	// cmpw cr6,r30,r18
	ctx.cr6.compare<int32_t>(r30.s32, r18.s32, ctx.xer);
	// blt cr6,0x823c37ec
	if (ctx.cr6.lt) goto loc_823C37EC;
	// lwz r16,100(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r15,r29,1,0,30
	r15.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r16,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
loc_823C3630:
	// srawi r8,r17,16
	ctx.xer.ca = (r17.s32 < 0) & ((r17.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = r17.s32 >> 16;
	// add r11,r17,r29
	ctx.r11.u64 = r17.u64 + r29.u64;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// srawi r31,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	r31.s64 = ctx.r11.s32 >> 16;
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// cmpw cr6,r22,r18
	ctx.cr6.compare<int32_t>(r22.s32, r18.s32, ctx.xer);
	// blt cr6,0x823c36e8
	if (ctx.cr6.lt) goto loc_823C36E8;
	// lwz r30,76(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mullw r23,r3,r30
	r23.s64 = int64_t(ctx.r3.s32) * int64_t(r30.s32);
	// mullw r3,r31,r9
	ctx.r3.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// add r21,r23,r6
	r21.u64 = r23.u64 + ctx.r6.u64;
	// add r30,r8,r4
	r30.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r29,r3,r4
	r29.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r20,r16,1,0,30
	r20.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r28,1,0,30
	r19.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_823C3674:
	// srawi r8,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 16;
	// add r31,r11,r28
	r31.u64 = ctx.r11.u64 + r28.u64;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// add r11,r19,r11
	ctx.r11.u64 = r19.u64 + ctx.r11.u64;
	// add r27,r23,r3
	r27.u64 = r23.u64 + ctx.r3.u64;
	// lbzx r26,r30,r8
	r26.u64 = REX_LOAD_U8(r30.u32 + ctx.r8.u32);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// lbzx r24,r29,r8
	r24.u64 = REX_LOAD_U8(r29.u32 + ctx.r8.u32);
	// srawi r8,r31,16
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = r31.s32 >> 16;
	// lbzx r3,r21,r3
	ctx.r3.u64 = REX_LOAD_U8(r21.u32 + ctx.r3.u32);
	// rotlwi r25,r26,16
	r25.u64 = __builtin_rotateleft32(r26.u32, 16);
	// rotlwi r26,r24,16
	r26.u64 = __builtin_rotateleft32(r24.u32, 16);
	// lbzx r31,r27,r5
	r31.u64 = REX_LOAD_U8(r27.u32 + ctx.r5.u32);
	// rotlwi r3,r3,24
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 24);
	// lbzx r24,r30,r8
	r24.u64 = REX_LOAD_U8(r30.u32 + ctx.r8.u32);
	// rotlwi r31,r31,8
	r31.u64 = __builtin_rotateleft32(r31.u32, 8);
	// lbzx r27,r29,r8
	r27.u64 = REX_LOAD_U8(r29.u32 + ctx.r8.u32);
	// add r8,r25,r3
	ctx.r8.u64 = r25.u64 + ctx.r3.u64;
	// add r25,r24,r31
	r25.u64 = r24.u64 + r31.u64;
	// add r3,r26,r3
	ctx.r3.u64 = r26.u64 + ctx.r3.u64;
	// add r31,r27,r31
	r31.u64 = r27.u64 + r31.u64;
	// or r8,r25,r8
	ctx.r8.u64 = r25.u64 | ctx.r8.u64;
	// or r3,r31,r3
	ctx.r3.u64 = r31.u64 | ctx.r3.u64;
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stwx r3,r20,r7
	REX_STORE_U32(r20.u32 + ctx.r7.u32, ctx.r3.u32);
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// ble cr6,0x823c3674
	if (!ctx.cr6.gt) goto loc_823C3674;
	// lwz r29,-176(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r30,-172(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
loc_823C36E8:
	// add r17,r15,r17
	r17.u64 = r15.u64 + r17.u64;
	// add r14,r10,r14
	r14.u64 = ctx.r10.u64 + r14.u64;
	// cmpw cr6,r17,r30
	ctx.cr6.compare<int32_t>(r17.s32, r30.s32, ctx.xer);
	// ble cr6,0x823c3630
	if (!ctx.cr6.gt) goto loc_823C3630;
	// b 0x822d4ea0
	return;
loc_823C36FC:
	// mr r19,r18
	r19.u64 = r18.u64;
	// cmpw cr6,r30,r18
	ctx.cr6.compare<int32_t>(r30.s32, r18.s32, ctx.xer);
	// blt cr6,0x823c37ec
	if (ctx.cr6.lt) goto loc_823C37EC;
	// lwz r17,100(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r16,r29,1,0,30
	r16.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r15,r17,2,0,29
	r15.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0xFFFFFFFC;
loc_823C3714:
	// srawi r7,r19,16
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = r19.s32 >> 16;
	// add r11,r19,r29
	ctx.r11.u64 = r19.u64 + r29.u64;
	// srawi r3,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 1;
	// srawi r31,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	r31.s64 = ctx.r11.s32 >> 16;
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// cmpw cr6,r22,r18
	ctx.cr6.compare<int32_t>(r22.s32, r18.s32, ctx.xer);
	// blt cr6,0x823c37dc
	if (ctx.cr6.lt) goto loc_823C37DC;
	// lwz r10,76(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// rlwinm r27,r17,1,0,30
	r27.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r28,1,0,30
	r20.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r23,r3,r10
	r23.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// mullw r3,r7,r9
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// mullw r7,r31,r9
	ctx.r7.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// add r21,r23,r6
	r21.u64 = r23.u64 + ctx.r6.u64;
	// add r30,r3,r4
	r30.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r29,r7,r4
	r29.u64 = ctx.r7.u64 + ctx.r4.u64;
loc_823C3758:
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// add r10,r8,r28
	ctx.r10.u64 = ctx.r8.u64 + r28.u64;
	// srawi r3,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 1;
	// add r31,r27,r11
	r31.u64 = r27.u64 + ctx.r11.u64;
	// add r26,r23,r3
	r26.u64 = r23.u64 + ctx.r3.u64;
	// lbzx r24,r30,r7
	r24.u64 = REX_LOAD_U8(r30.u32 + ctx.r7.u32);
	// add r8,r20,r8
	ctx.r8.u64 = r20.u64 + ctx.r8.u64;
	// lbzx r25,r29,r7
	r25.u64 = REX_LOAD_U8(r29.u32 + ctx.r7.u32);
	// srawi r7,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 16;
	// lbzx r3,r21,r3
	ctx.r3.u64 = REX_LOAD_U8(r21.u32 + ctx.r3.u32);
	// cmpw cr6,r8,r22
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r22.s32, ctx.xer);
	// stw r31,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, r31.u32);
	// lbzx r10,r26,r5
	ctx.r10.u64 = REX_LOAD_U8(r26.u32 + ctx.r5.u32);
	// rotlwi r3,r3,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// rotlwi r31,r10,8
	r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbzx r26,r30,r7
	r26.u64 = REX_LOAD_U8(r30.u32 + ctx.r7.u32);
	// lbzx r7,r29,r7
	ctx.r7.u64 = REX_LOAD_U8(r29.u32 + ctx.r7.u32);
	// add r10,r24,r31
	ctx.r10.u64 = r24.u64 + r31.u64;
	// add r31,r25,r31
	r31.u64 = r25.u64 + r31.u64;
	// add r26,r26,r3
	r26.u64 = r26.u64 + ctx.r3.u64;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// clrlwi r3,r31,16
	ctx.r3.u64 = r31.u32 & 0xFFFF;
	// lwz r31,-168(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// clrlwi r10,r26,16
	ctx.r10.u64 = r26.u32 & 0xFFFF;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r3,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r3.u16);
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// sthx r7,r27,r11
	REX_STORE_U16(r27.u32 + ctx.r11.u32, ctx.r7.u16);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// ble cr6,0x823c3758
	if (!ctx.cr6.gt) goto loc_823C3758;
	// lwz r29,-176(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r30,-172(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
loc_823C37DC:
	// add r19,r16,r19
	r19.u64 = r16.u64 + r19.u64;
	// add r14,r15,r14
	r14.u64 = r15.u64 + r14.u64;
	// cmpw cr6,r19,r30
	ctx.cr6.compare<int32_t>(r19.s32, r30.s32, ctx.xer);
	// ble cr6,0x823c3714
	if (!ctx.cr6.gt) goto loc_823C3714;
loc_823C37EC:
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823CDCC0) {
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
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x824d42bc
	ctx.lr = 0x823CDCDC;
	__imp__NtDuplicateObject(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823cdcec
	if (ctx.cr0.lt) goto loc_823CDCEC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823cdcf4
	goto loc_823CDCF4;
loc_823CDCEC:
	// bl 0x8220a840
	ctx.lr = 0x823CDCF0;
	sub_8220A840(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823CDCF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CE008) {
	REX_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x823ce5d8
	sub_823CE5D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823CE2B0) {
	REX_FUNC_PROLOGUE();
	// b 0x824d41dc
	__imp__KeQuerySystemTime(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823CE2F8) {
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
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,4384(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4384);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CE330;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823ce344
	if (!ctx.cr0.lt) goto loc_823CE344;
	// bl 0x8220a840
	ctx.lr = 0x823CE33C;
	sub_8220A840(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823ce350
	goto loc_823CE350;
loc_823CE344:
	// ld r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
loc_823CE350:
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

DEFINE_REX_FUNC(sub_823CF230) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,11968(r3)
	REX_STORE_U32(ctx.r3.u32 + 11968, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CF6A8) {
	REX_FUNC_PROLOGUE();
	// b 0x823cf648
	sub_823CF648(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823CF7C0) {
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
	ctx.lr = 0x823CF7C8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,11012(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 11012);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r11,11016(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 11016);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r24,0(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r21,r3,11012
	r21.s64 = ctx.r3.s64 + 11012;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// lwz r20,4(r3)
	r20.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r22,r4,r5
	r22.u64 = ctx.r4.u64 + ctx.r5.u64;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823cf7fc
	if (ctx.cr6.lt) goto loc_823CF7FC;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_823CF7FC:
	// add r29,r24,r27
	r29.u64 = r24.u64 + r27.u64;
	// li r8,16
	ctx.r8.s64 = 16;
	// add r23,r22,r24
	r23.u64 = r22.u64 + r24.u64;
	// add r26,r29,r5
	r26.u64 = r29.u64 + ctx.r5.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// blt cr6,0x823cf83c
	if (ctx.cr6.lt) goto loc_823CF83C;
	// addi r11,r30,64
	ctx.r11.s64 = r30.s64 + 64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823cf83c
	if (!ctx.cr6.lt) goto loc_823CF83C;
	// addi r11,r30,16
	ctx.r11.s64 = r30.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823cf918
	if (ctx.cr6.lt) goto loc_823CF918;
	// rlwinm r11,r5,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF0;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + r29.u64;
	// b 0x823cf8dc
	goto loc_823CF8DC;
loc_823CF83C:
	// rlwinm r11,r5,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r10,r5,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// add r7,r10,r29
	ctx.r7.u64 = ctx.r10.u64 + r29.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823cf8dc
	if (!ctx.cr6.lt) goto loc_823CF8DC;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,64
	ctx.r9.s64 = 64;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,48
	ctx.r11.s64 = 48;
loc_823CF874:
	// li r6,128
	ctx.r6.s64 = 128;
	// dcbt r6,r30
	// dcbt r6,r31
	// lvrx128 v62,r8,r30
	temp.u32 = ctx.r8.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v63,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvrx128 v61,r10,r30
	temp.u32 = ctx.r10.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r8,r30
	temp.u32 = ctx.r8.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v62,v61
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvrx128 v60,r11,r30
	temp.u32 = ctx.r11.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v61,r10,r30
	temp.u32 = ctx.r10.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v61,v61,v60
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// lvrx128 v59,r9,r30
	temp.u32 = ctx.r9.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v60,r11,r30
	temp.u32 = ctx.r11.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// stvlx128 v63,r0,r31
	ea = r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// vor128 v60,v60,v59
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// stvrx128 v63,r31,r8
	ea = r31.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// stvlx128 v62,r31,r8
	ea = r31.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvrx128 v62,r31,r10
	ea = r31.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// stvlx128 v61,r31,r10
	ea = r31.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvrx128 v61,r31,r11
	ea = r31.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// stvlx128 v60,r31,r11
	ea = r31.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvrx128 v60,r31,r9
	ea = r31.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// bdnz 0x823cf874
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF874;
loc_823CF8DC:
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x823cf918
	if (!ctx.cr6.lt) goto loc_823CF918;
	// subf r11,r31,r7
	ctx.r11.u64 = ctx.r7.u64 - r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823CF8F8:
	// lvlx128 v63,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r8,r30
	temp.u32 = ctx.r8.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// stvlx128 v63,r0,r31
	ea = r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r31,r8
	ea = r31.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bdnz 0x823cf8f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF8F8;
loc_823CF918:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// bge cr6,0x823cf93c
	if (!ctx.cr6.lt) goto loc_823CF93C;
	// subf r28,r31,r26
	r28.u64 = r26.u64 - r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5428
	ctx.lr = 0x823CF934;
	sub_822D5428(ctx, base);
	// add r30,r28,r30
	r30.u64 = r28.u64 + r30.u64;
	// add r31,r28,r31
	r31.u64 = r28.u64 + r31.u64;
loc_823CF93C:
	// subf r11,r29,r31
	ctx.r11.u64 = r31.u64 - r29.u64;
	// cmplw cr6,r26,r23
	ctx.cr6.compare<uint32_t>(r26.u32, r23.u32, ctx.xer);
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
	// beq cr6,0x823cf954
	if (ctx.cr6.eq) goto loc_823CF954;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823cf99c
	goto loc_823CF99C;
loc_823CF954:
	// stw r30,0(r21)
	REX_STORE_U32(r21.u32 + 0, r30.u32);
	// cmpwi cr6,r22,257
	ctx.cr6.compare<int32_t>(r22.s32, 257, ctx.xer);
	// li r11,257
	ctx.r11.s64 = 257;
	// bgt cr6,0x823cf968
	if (ctx.cr6.gt) goto loc_823CF968;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_823CF968:
	// add r10,r27,r20
	ctx.r10.u64 = r27.u64 + r20.u64;
	// subf r11,r27,r11
	ctx.r11.u64 = ctx.r11.u64 - r27.u64;
	// add r3,r10,r24
	ctx.r3.u64 = ctx.r10.u64 + r24.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823cf98c
	if (!ctx.cr6.lt) goto loc_823CF98C;
	// subf r4,r20,r3
	ctx.r4.u64 = ctx.r3.u64 - r20.u64;
	// subf r5,r3,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r3.u64;
	// bl 0x822d5428
	ctx.lr = 0x823CF98C;
	sub_822D5428(ctx, base);
loc_823CF98C:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// subf r3,r22,r31
	ctx.r3.u64 = r31.u64 - r22.u64;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & r31.u64;
	// stw r11,11960(r25)
	REX_STORE_U32(r25.u32 + 11960, ctx.r11.u32);
loc_823CF99C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_823D8310) {
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
	ctx.lr = 0x823D8318;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,104(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r9,104(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823d8438
	if (!ctx.cr6.eq) goto loc_823D8438;
	// lwz r8,108(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// lwz r7,108(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x823d8438
	if (!ctx.cr6.eq) goto loc_823D8438;
	// lwz r10,112(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823d8438
	if (!ctx.cr6.eq) goto loc_823D8438;
	// rlwinm r3,r9,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x823cd118
	ctx.lr = 0x823D8364;
	sub_823CD118(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x823d8438
	if (ctx.cr0.eq) goto loc_823D8438;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r27,0
	r27.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823d839c
	if (ctx.cr6.eq) goto loc_823D839C;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823d839c
	if (ctx.cr6.eq) goto loc_823D839C;
	// stw r27,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r27.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r27,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r27.u32);
loc_823D839C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r29,r27
	r29.u64 = r27.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x823d8424
	if (!ctx.cr6.gt) goto loc_823D8424;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
loc_823D83B4:
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d8414
	if (ctx.cr6.eq) goto loc_823D8414;
loc_823D83C0:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D83E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D8400;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823d83c0
	if (ctx.cr6.lt) goto loc_823D83C0;
loc_823D8414:
	// lwz r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823d83b4
	if (ctx.cr6.lt) goto loc_823D83B4;
loc_823D8424:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823cd250
	ctx.lr = 0x823D8430;
	sub_823CD250(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823d8440
	goto loc_823D8440;
loc_823D8438:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_823D8440:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823DC658) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,104(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823dc6d4
	if (ctx.cr6.eq) goto loc_823DC6D4;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// subfic r7,r4,-8
	ctx.xer.ca = ctx.r4.u32 <= 4294967288;
	ctx.r7.u64 = static_cast<uint64_t>(-8) - ctx.r4.u64;
loc_823DC670:
	// lwz r8,92(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f13,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// lfs f10,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,-8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f0,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f0,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r10,104(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823dc670
	if (ctx.cr6.lt) goto loc_823DC670;
loc_823DC6D4:
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// lwz r3,92(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x822d5870
	sub_822D5870(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823DFA20) {
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e74
	ctx.lr = 0x823DFA28;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f38
	ctx.lr = 0x823DFA30;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
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
	// beq cr6,0x823dfa5c
	if (ctx.cr6.eq) goto loc_823DFA5C;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x823DFA58;
	sub_82413040(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_823DFA5C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823dfa78
	if (ctx.cr6.eq) goto loc_823DFA78;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc0b0
	ctx.lr = 0x823DFA74;
	sub_823DC0B0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_823DFA78:
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
	// bne 0x823dfae8
	if (!ctx.cr0.eq) goto loc_823DFAE8;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x823dfaf0
	goto loc_823DFAF0;
loc_823DFAE8:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_823DFAF0:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823dfb08
	if (ctx.cr6.eq) goto loc_823DFB08;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x823DFB08;
	sub_823DC658(ctx, base);
loc_823DFB08:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823dfea4
	if (!ctx.cr6.gt) goto loc_823DFEA4;
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
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f11,16288(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16288);
	ctx.f11.f64 = double(temp.f32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lfd f10,-9120(r10)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r10.u32 + -9120);
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// rlwinm r25,r30,3,0,28
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f12,-7224(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -7224);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lfs f13,17176(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17176);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f0,-30028(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -30028);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r29,r30,4,0,27
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f5,21104(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 21104);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// subf r28,r25,r28
	r28.u64 = r28.u64 - r25.u64;
	// ori r30,r10,65535
	r30.u64 = ctx.r10.u64 | 65535;
loc_823DFB74:
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
	// beq cr6,0x823dfdac
	if (ctx.cr6.eq) goto loc_823DFDAC;
	// extsw r7,r4
	ctx.r7.s64 = ctx.r4.s32;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r23,r3
	r23.s64 = ctx.r3.s32;
	// std r7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f4,104(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r23,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r23.u64);
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
	// extsw r23,r6
	r23.s64 = ctx.r6.s32;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// std r23,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, r23.u64);
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
loc_823DFDAC:
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// blt cr6,0x823dfdbc
	if (ctx.cr6.lt) goto loc_823DFDBC;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_823DFDBC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823dfdd4
	if (!ctx.cr6.gt) goto loc_823DFDD4;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// blt cr6,0x823dfdd8
	if (ctx.cr6.lt) goto loc_823DFDD8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x823dfdd8
	goto loc_823DFDD8;
loc_823DFDD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823DFDD8:
	// cmpw cr6,r4,r30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r30.s32, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt cr6,0x823dfde8
	if (ctx.cr6.lt) goto loc_823DFDE8;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_823DFDE8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823dfe00
	if (!ctx.cr6.gt) goto loc_823DFE00;
	// cmpw cr6,r4,r30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r30.s32, ctx.xer);
	// blt cr6,0x823dfe04
	if (ctx.cr6.lt) goto loc_823DFE04;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x823dfe04
	goto loc_823DFE04;
loc_823DFE00:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823DFE04:
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r30.s32, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// blt cr6,0x823dfe14
	if (ctx.cr6.lt) goto loc_823DFE14;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_823DFE14:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823dfe2c
	if (!ctx.cr6.gt) goto loc_823DFE2C;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r30.s32, ctx.xer);
	// blt cr6,0x823dfe30
	if (ctx.cr6.lt) goto loc_823DFE30;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// b 0x823dfe30
	goto loc_823DFE30;
loc_823DFE2C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_823DFE30:
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r30.s32, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// blt cr6,0x823dfe40
	if (ctx.cr6.lt) goto loc_823DFE40;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_823DFE40:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823dfe58
	if (!ctx.cr6.gt) goto loc_823DFE58;
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r30.s32, ctx.xer);
	// blt cr6,0x823dfe5c
	if (ctx.cr6.lt) goto loc_823DFE5C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// b 0x823dfe5c
	goto loc_823DFE5C;
loc_823DFE58:
	// li r6,0
	ctx.r6.s64 = 0;
loc_823DFE5C:
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// extsw r7,r4
	ctx.r7.s64 = ctx.r4.s32;
	// rldicr r10,r10,16,47
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFFFFFFFFFF0000;
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// extsw r7,r6
	ctx.r7.s64 = ctx.r6.s32;
	// rldicr r10,r10,16,47
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFFFFFFFFFF0000;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// rldicr r10,r10,16,47
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFFFFFFFFFF0000;
	// add r9,r29,r9
	ctx.r9.u64 = r29.u64 + ctx.r9.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// add r8,r29,r8
	ctx.r8.u64 = r29.u64 + ctx.r8.u64;
	// stdux r10,r28,r25
	ea = r28.u32 + r25.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	r28.u32 = ea;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823dfb74
	if (ctx.cr6.lt) goto loc_823DFB74;
loc_823DFEA4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f84
	ctx.lr = 0x823DFEB0;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_823EA610) {
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
	ctx.lr = 0x823EA618;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,24(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// lhz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x823ea90c
	if (ctx.cr6.lt) goto loc_823EA90C;
	// beq cr6,0x823ea884
	if (ctx.cr6.eq) goto loc_823EA884;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x823ea7e8
	if (ctx.cr6.lt) goto loc_823EA7E8;
	// beq cr6,0x823ea744
	if (ctx.cr6.eq) goto loc_823EA744;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x823ea668
	if (ctx.cr6.eq) goto loc_823EA668;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x823eab0c
	goto loc_823EAB0C;
loc_823EA668:
	// lwz r10,52(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 52);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 8);
	// divwu r27,r9,r10
	r27.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823ea688
	if (!ctx.cr6.gt) goto loc_823EA688;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_823EA688:
	// mullw. r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r27.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x823ea6c4
	if (ctx.cr0.eq) goto loc_823EA6C4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
loc_823EA69C:
	// rlwinm r8,r11,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// rlwinm r9,r11,30,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// rlwinm r7,r11,30,2,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r7,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823ea69c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EA69C;
loc_823EA6C4:
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x823ea73c
	if (ctx.cr6.eq) goto loc_823EA73C;
loc_823EA6D4:
	// lhz r11,10(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 10);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823ea730
	if (ctx.cr0.eq) goto loc_823EA730;
	// li r30,0
	r30.s64 = 0;
loc_823EA6E8:
	// lwz r11,56(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 56);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwzx r31,r11,r30
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x823e8d70
	ctx.lr = 0x823EA708;
	sub_823E8D70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823eab0c
	if (ctx.cr0.lt) goto loc_823EAB0C;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lhz r10,10(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 10);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// blt cr6,0x823ea6e8
	if (ctx.cr6.lt) goto loc_823EA6E8;
loc_823EA730:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(r26.u32, r27.u32, ctx.xer);
	// blt cr6,0x823ea6d4
	if (ctx.cr6.lt) goto loc_823EA6D4;
loc_823EA73C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823eab0c
	goto loc_823EAB0C;
loc_823EA744:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823ea758
	if (!ctx.cr6.gt) goto loc_823EA758;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_823EA758:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823ea95c
	if (ctx.cr6.eq) goto loc_823EA95C;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
loc_823EA768:
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823ea7dc
	if (ctx.cr0.eq) goto loc_823EA7DC;
	// lhz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
loc_823EA780:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ea7c8
	if (ctx.cr6.eq) goto loc_823EA7C8;
loc_823EA78C:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823ea7b0
	if (ctx.cr6.gt) goto loc_823EA7B0;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bgt cr6,0x823ea7b0
	if (ctx.cr6.gt) goto loc_823EA7B0;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r5,0(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// b 0x823ea7b4
	goto loc_823EA7B4;
loc_823EA7B0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823EA7B4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// lhz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823ea78c
	if (ctx.cr6.lt) goto loc_823EA78C;
loc_823EA7C8:
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823ea780
	if (ctx.cr6.lt) goto loc_823EA780;
loc_823EA7DC:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bdnz 0x823ea768
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EA768;
	// b 0x823ea95c
	goto loc_823EA95C;
loc_823EA7E8:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823ea7fc
	if (!ctx.cr6.gt) goto loc_823EA7FC;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_823EA7FC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823ea95c
	if (ctx.cr6.eq) goto loc_823EA95C;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
loc_823EA80C:
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823ea878
	if (ctx.cr0.eq) goto loc_823EA878;
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
loc_823EA820:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ea868
	if (ctx.cr6.eq) goto loc_823EA868;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_823EA830:
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// bgt cr6,0x823ea84c
	if (ctx.cr6.gt) goto loc_823EA84C;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x823ea84c
	if (ctx.cr6.gt) goto loc_823EA84C;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x823ea850
	goto loc_823EA850;
loc_823EA84C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823EA850:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823ea830
	if (ctx.cr6.lt) goto loc_823EA830;
loc_823EA868:
	// lhz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 4);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823ea820
	if (ctx.cr6.lt) goto loc_823EA820;
loc_823EA878:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bdnz 0x823ea80c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EA80C;
	// b 0x823ea95c
	goto loc_823EA95C;
loc_823EA884:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823ea898
	if (!ctx.cr6.gt) goto loc_823EA898;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_823EA898:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823ea95c
	if (ctx.cr6.eq) goto loc_823EA95C;
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
loc_823EA8AC:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ea8fc
	if (ctx.cr6.eq) goto loc_823EA8FC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823EA8BC:
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// ble cr6,0x823ea8cc
	if (!ctx.cr6.gt) goto loc_823EA8CC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823ea8e4
	goto loc_823EA8E4;
loc_823EA8CC:
	// clrlwi r11,r8,30
	ctx.r11.u64 = ctx.r8.u32 & 0x3;
	// rlwinm r5,r8,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r4
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// lwzx r11,r5,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
loc_823EA8E4:
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823ea8bc
	if (ctx.cr6.lt) goto loc_823EA8BC;
loc_823EA8FC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r31.u32, ctx.xer);
	// blt cr6,0x823ea8ac
	if (ctx.cr6.lt) goto loc_823EA8AC;
	// b 0x823ea95c
	goto loc_823EA95C;
loc_823EA90C:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// rlwinm r31,r11,4,0,27
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823ea920
	if (!ctx.cr6.gt) goto loc_823EA920;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_823EA920:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823ea95c
	if (ctx.cr6.eq) goto loc_823EA95C;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
loc_823EA934:
	// rlwinm r8,r11,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// rlwinm r9,r11,30,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// rlwinm r7,r11,30,2,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r7,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823ea934
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EA934;
loc_823EA95C:
	// lhz r10,2(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 2);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x823ea9e0
	if (ctx.cr6.eq) goto loc_823EA9E0;
	// lwz r11,52(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 52);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// beq cr6,0x823ea9ac
	if (ctx.cr6.eq) goto loc_823EA9AC;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x823ea9e0
	if (!ctx.cr6.eq) goto loc_823EA9E0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ea9e0
	if (ctx.cr6.eq) goto loc_823EA9E0;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823EA990:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823ea990
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EA990;
	// b 0x823ea9e0
	goto loc_823EA9E0;
loc_823EA9AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ea9e0
	if (ctx.cr6.eq) goto loc_823EA9E0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_823EA9C4:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x823ea9d8
	if (!ctx.cr6.eq) goto loc_823EA9D8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823EA9D8:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823ea9c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EA9C4;
loc_823EA9E0:
	// lhz r9,8(r24)
	ctx.r9.u64 = REX_LOAD_U16(r24.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x823eaabc
	if (ctx.cr0.eq) goto loc_823EAABC;
	// lhz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x823eaa04
	if (ctx.cr6.eq) goto loc_823EAA04;
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// lhz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 4);
	// b 0x823eaa0c
	goto loc_823EAA0C;
loc_823EAA04:
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
loc_823EAA0C:
	// clrlwi. r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x823eaabc
	if (ctx.cr0.eq) goto loc_823EAABC;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x823eaa28
	if (!ctx.cr6.eq) goto loc_823EAA28;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r3,r9,9268
	ctx.r3.s64 = ctx.r9.s64 + 9268;
	// b 0x823eaa30
	goto loc_823EAA30;
loc_823EAA28:
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r3,r9,9252
	ctx.r3.s64 = ctx.r9.s64 + 9252;
loc_823EAA30:
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// mullw. r9,r10,r31
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r7,r8,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// beq 0x823eaabc
	if (ctx.cr0.eq) goto loc_823EAABC;
	// mullw r8,r9,r7
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// mullw r4,r9,r11
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
loc_823EAA48:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823eaa84
	if (!ctx.cr6.gt) goto loc_823EAA84;
	// subf r5,r11,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r11.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823EAA68:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r5,r10,2,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// add r30,r10,r8
	r30.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r3
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// stwx r5,r30,r6
	REX_STORE_U32(r30.u32 + ctx.r6.u32, ctx.r5.u32);
	// bdnz 0x823eaa68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EAA68;
loc_823EAA84:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823eaab4
	if (ctx.cr6.eq) goto loc_823EAAB4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823EAA94:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r30,r10,r8
	r30.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// stwx r5,r30,r6
	REX_STORE_U32(r30.u32 + ctx.r6.u32, ctx.r5.u32);
	// bdnz 0x823eaa94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EAA94;
loc_823EAAB4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823eaa48
	if (!ctx.cr6.eq) goto loc_823EAA48;
loc_823EAABC:
	// lwz r10,44(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 44);
	// lhz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 12);
	// mullw r7,r10,r31
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823eaad4
	if (!ctx.cr6.gt) goto loc_823EAAD4;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_823EAAD4:
	// lwz r10,28(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823eaaec
	if (!ctx.cr6.eq) goto loc_823EAAEC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x823eab0c
	goto loc_823EAB0C;
loc_823EAAEC:
	// lhz r11,10(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 10);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + r22.u64;
	// bctrl 
	ctx.lr = 0x823EAB04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_823EAB0C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_823FD3D0) {
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
	ctx.lr = 0x823FD3D8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,404(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 404);
	// li r22,0
	r22.s64 = 0;
	// lwz r24,448(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// rlwinm r23,r10,27,31,31
	r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x823fd40c
	if (ctx.cr6.eq) goto loc_823FD40C;
	// lwz r11,408(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x823fd42c
	goto loc_823FD42C;
loc_823FD40C:
	// lwz r10,408(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 408);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823fd420
	if (ctx.cr6.gt) goto loc_823FD420;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// blt cr6,0x823fd424
	if (ctx.cr6.lt) goto loc_823FD424;
loc_823FD420:
	// li r9,1
	ctx.r9.s64 = 1;
loc_823FD424:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
loc_823FD42C:
	// beq cr6,0x823fd434
	if (ctx.cr6.eq) goto loc_823FD434;
	// li r9,1
	ctx.r9.s64 = 1;
loc_823FD434:
	// lwz r11,412(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823fd454
	if (ctx.cr6.eq) goto loc_823FD454;
	// lwz r10,416(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 416);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x823fd454
	if (ctx.cr6.eq) goto loc_823FD454;
	// li r9,1
	ctx.r9.s64 = 1;
loc_823FD454:
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 416);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bgt cr6,0x823fd468
	if (ctx.cr6.gt) goto loc_823FD468;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823fd4b8
	if (ctx.cr6.eq) goto loc_823FD4B8;
loc_823FD468:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,404(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 404);
	// stw r8,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r6,408(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 408);
	// stw r6,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r6.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,412(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 412);
	// stw r4,32(r5)
	REX_STORE_U32(ctx.r5.u32 + 32, ctx.r4.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,416(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 416);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823FD4B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FD4B8:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// mr r25,r22
	r25.u64 = r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823fd5bc
	if (!ctx.cr6.gt) goto loc_823FD5BC;
	// addi r26,r31,336
	r26.s64 = r31.s64 + 336;
	// li r27,115
	r27.s64 = 115;
loc_823FD4D0:
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// lwz r28,4(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r28,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 8) & 0xFFFFFF00;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x823fd528
	if (!ctx.cr6.eq) goto loc_823FD528;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x823fd528
	if (!ctx.cr6.lt) goto loc_823FD528;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r27,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r27.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r28,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r28.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r22,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, r22.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823FD528;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FD528:
	// lwz r30,404(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 404);
	// lwz r11,408(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 408);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x823fd5a8
	if (ctx.cr6.gt) goto loc_823FD5A8;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
loc_823FD544:
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r9,412(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 412);
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x823fd590
	if (ctx.cr6.eq) goto loc_823FD590;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r27,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r27.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r28,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r28.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, r30.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823FD590;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FD590:
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 416);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwu r11,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r29.u32 = ea;
	// lwz r10,408(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 408);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823fd544
	if (!ctx.cr6.gt) goto loc_823FD544;
loc_823FD5A8:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823fd4d0
	if (ctx.cr6.lt) goto loc_823FD4D0;
loc_823FD5BC:
	// lwz r11,412(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823fd5e8
	if (!ctx.cr6.eq) goto loc_823FD5E8;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x823fd5dc
	if (ctx.cr6.eq) goto loc_823FD5DC;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// addi r10,r11,-13904
	ctx.r10.s64 = ctx.r11.s64 + -13904;
	// b 0x823fd604
	goto loc_823FD604;
loc_823FD5DC:
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// addi r10,r11,-13312
	ctx.r10.s64 = ctx.r11.s64 + -13312;
	// b 0x823fd604
	goto loc_823FD604;
loc_823FD5E8:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x823fd5fc
	if (ctx.cr6.eq) goto loc_823FD5FC;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// addi r10,r11,-12704
	ctx.r10.s64 = ctx.r11.s64 + -12704;
	// b 0x823fd604
	goto loc_823FD604;
loc_823FD5FC:
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// addi r10,r11,-12424
	ctx.r10.s64 = ctx.r11.s64 + -12424;
loc_823FD604:
	// stw r10,4(r24)
	REX_STORE_U32(r24.u32 + 4, ctx.r10.u32);
	// mr r28,r22
	r28.u64 = r22.u64;
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823fd698
	if (!ctx.cr6.gt) goto loc_823FD698;
	// addi r27,r24,20
	r27.s64 = r24.s64 + 20;
	// addi r29,r31,336
	r29.s64 = r31.s64 + 336;
loc_823FD620:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x823fd658
	if (ctx.cr6.eq) goto loc_823FD658;
	// lwz r10,412(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 412);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823fd680
	if (!ctx.cr6.eq) goto loc_823FD680;
	// lwz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r5,11
	ctx.r11.s64 = ctx.r5.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r24
	ctx.r6.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x823fbc20
	ctx.lr = 0x823FD654;
	sub_823FBC20(ctx, base);
	// b 0x823fd680
	goto loc_823FD680;
loc_823FD658:
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r5,11
	ctx.r11.s64 = ctx.r5.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r24
	r30.u64 = ctx.r11.u64 + r24.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x823fbc20
	ctx.lr = 0x823FD678;
	sub_823FBC20(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r10,60(r24)
	REX_STORE_U32(r24.u32 + 60, ctx.r10.u32);
loc_823FD680:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stwu r22,4(r27)
	ea = 4 + r27.u32;
	REX_STORE_U32(ea, r22.u32);
	r27.u32 = ea;
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823fd620
	if (ctx.cr6.lt) goto loc_823FD620;
loc_823FD698:
	// stw r22,8(r24)
	REX_STORE_U32(r24.u32 + 8, r22.u32);
	// stw r22,16(r24)
	REX_STORE_U32(r24.u32 + 16, r22.u32);
	// stw r22,12(r24)
	REX_STORE_U32(r24.u32 + 12, r22.u32);
	// stw r22,20(r24)
	REX_STORE_U32(r24.u32 + 20, r22.u32);
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// stw r11,40(r24)
	REX_STORE_U32(r24.u32 + 40, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82407028) {
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
	PPCRegister f31{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e50
	ctx.lr = 0x82407030;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// addi r12,r1,-160
	ctx.r12.s64 = ctx.r1.s64 + -160;
	// bl 0x822d8a9c
	ctx.lr = 0x8240703C;
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// stw r10,812(r1)
	REX_STORE_U32(ctx.r1.u32 + 812, ctx.r10.u32);
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// lwz r20,828(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 828);
	// mr r14,r10
	r14.u64 = ctx.r10.u64;
	// stw r4,764(r1)
	REX_STORE_U32(ctx.r1.u32 + 764, ctx.r4.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r11,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
	// stw r10,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r10.u32);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// stw r11,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// mr r15,r4
	r15.u64 = ctx.r4.u64;
	// stw r9,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r9.u32);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// stw r11,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// stw r8,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r8.u32);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// stw r11,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// bne cr6,0x824070c4
	if (!ctx.cr6.eq) goto loc_824070C4;
	// stw r5,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r5.u32);
	// addi r20,r1,320
	r20.s64 = ctx.r1.s64 + 320;
	// stw r6,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r6.u32);
	// stw r11,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// stw r11,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r11.u32);
loc_824070C4:
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 0);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// lwz r9,8(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 8);
	// lwz r8,12(r20)
	ctx.r8.u64 = REX_LOAD_U32(r20.u32 + 12);
	// lwz r7,4(r20)
	ctx.r7.u64 = REX_LOAD_U32(r20.u32 + 4);
	// subf r28,r10,r9
	r28.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subf r10,r7,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r7.u64;
	// stw r28,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, r28.u32);
	// stw r10,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// bne cr6,0x824070f8
	if (!ctx.cr6.eq) goto loc_824070F8;
	// stw r11,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// addi r25,r1,304
	r25.s64 = ctx.r1.s64 + 304;
	// stw r11,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r11.u32);
loc_824070F8:
	// lwz r31,820(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 820);
	// clrlwi r26,r27,26
	r26.u64 = r27.u32 & 0x3F;
	// clrlwi. r19,r31,26
	r19.u64 = r31.u32 & 0x3F;
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq 0x82407b2c
	if (ctx.cr0.eq) goto loc_82407B2C;
	// cmplwi cr6,r19,1
	ctx.cr6.compare<uint32_t>(r19.u32, 1, ctx.xer);
	// beq cr6,0x82407b2c
	if (ctx.cr6.eq) goto loc_82407B2C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82407b2c
	if (ctx.cr6.eq) goto loc_82407B2C;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(r26.u32, 1, ctx.xer);
	// beq cr6,0x82407b2c
	if (ctx.cr6.eq) goto loc_82407B2C;
	// addi r5,r1,276
	ctx.r5.s64 = ctx.r1.s64 + 276;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82408748
	ctx.lr = 0x82407130;
	sub_82408748(ctx, base);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82408748
	ctx.lr = 0x82407140;
	sub_82408748(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r6,272(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// cmpw cr6,r27,r31
	ctx.cr6.compare<int32_t>(r27.s32, r31.s32, ctx.xer);
	// addi r9,r11,22352
	ctx.r9.s64 = ctx.r11.s64 + 22352;
	// lwz r5,276(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r10,164(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r18,836(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 836);
	// lbzx r8,r26,r9
	ctx.r8.u64 = REX_LOAD_U8(r26.u32 + ctx.r9.u32);
	// mullw r8,r8,r6
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// mullw r8,r8,r5
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// lbzx r9,r19,r9
	ctx.r9.u64 = REX_LOAD_U8(r19.u32 + ctx.r9.u32);
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r16,r8,29,3,31
	r16.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r17,r9,29,3,31
	r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r16,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r16.u32);
	// stw r17,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r17.u32);
	// bne cr6,0x824072ac
	if (!ctx.cr6.eq) goto loc_824072AC;
	// rlwinm r9,r18,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 ^ r18.u64;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824072ac
	if (!ctx.cr0.eq) goto loc_824072AC;
	// rlwinm r9,r18,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 ^ r18.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824072ac
	if (!ctx.cr0.eq) goto loc_824072AC;
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r9,r6,-1
	ctx.r9.s64 = ctx.r6.s64 + -1;
	// and. r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 & ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824072ac
	if (!ctx.cr0.eq) goto loc_824072AC;
	// lwz r4,4(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r9,r5,-1
	ctx.r9.s64 = ctx.r5.s64 + -1;
	// and. r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 & ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824072ac
	if (!ctx.cr0.eq) goto loc_824072AC;
	// lwz r7,0(r20)
	ctx.r7.u64 = REX_LOAD_U32(r20.u32 + 0);
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
	// and. r9,r30,r7
	ctx.r9.u64 = r30.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824072ac
	if (!ctx.cr0.eq) goto loc_824072AC;
	// lwz r8,4(r20)
	ctx.r8.u64 = REX_LOAD_U32(r20.u32 + 4);
	// addi r29,r10,-1
	r29.s64 = ctx.r10.s64 + -1;
	// and. r9,r29,r8
	ctx.r9.u64 = r29.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824072ac
	if (!ctx.cr0.eq) goto loc_824072AC;
	// lwz r9,8(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 8);
	// and. r30,r30,r9
	r30.u64 = r30.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82407200
	if (ctx.cr0.eq) goto loc_82407200;
	// cmplw cr6,r9,r24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r24.u32, ctx.xer);
	// bne cr6,0x824072ac
	if (!ctx.cr6.eq) goto loc_824072AC;
loc_82407200:
	// lwz r9,12(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 12);
	// and. r30,r29,r9
	r30.u64 = r29.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82407214
	if (ctx.cr0.eq) goto loc_82407214;
	// cmplw cr6,r9,r23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r23.u32, ctx.xer);
	// bne cr6,0x824072ac
	if (!ctx.cr6.eq) goto loc_824072AC;
loc_82407214:
	// lwz r9,172(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// divwu r30,r7,r11
	r30.u64 = uint32_t(ctx.r11.u32 ? ctx.r7.u32 / ctx.r11.u32 : 0);
	// divwu r7,r3,r6
	ctx.r7.u64 = uint32_t(ctx.r6.u32 ? ctx.r3.u32 / ctx.r6.u32 : 0);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r6,r4,r5
	ctx.r6.u64 = uint32_t(ctx.r5.u32 ? ctx.r4.u32 / ctx.r5.u32 : 0);
	// divwu r31,r8,r10
	r31.u64 = uint32_t(ctx.r10.u32 ? ctx.r8.u32 / ctx.r10.u32 : 0);
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + r28.u64;
	// mullw r9,r6,r15
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(r15.s32);
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r5,r30,r17
	ctx.r5.s64 = int64_t(r30.s32) * int64_t(r17.s32);
	// mullw r6,r31,r14
	ctx.r6.s64 = int64_t(r31.s32) * int64_t(r14.s32);
	// mullw r7,r7,r16
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r16.s32);
	// addi r3,r8,-1
	ctx.r3.s64 = ctx.r8.s64 + -1;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu. r10,r4,r10
	ctx.r10.u64 = uint32_t(ctx.r10.u32 ? ctx.r4.u32 / ctx.r10.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// divwu r11,r3,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r3.u32 / ctx.r11.u32 : 0);
	// add r31,r9,r21
	r31.u64 = ctx.r9.u64 + r21.u64;
	// add r30,r8,r22
	r30.u64 = ctx.r8.u64 + r22.u64;
	// beq 0x824072a4
	if (ctx.cr0.eq) goto loc_824072A4;
	// mullw r28,r11,r17
	r28.s64 = int64_t(ctx.r11.s32) * int64_t(r17.s32);
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
loc_82407284:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82407294;
	sub_822D4FA0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r31,r31,r15
	r31.u64 = r31.u64 + r15.u64;
	// add r30,r30,r14
	r30.u64 = r30.u64 + r14.u64;
	// bne 0x82407284
	if (!ctx.cr0.eq) goto loc_82407284;
loc_824072A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82407b34
	goto loc_82407B34;
loc_824072AC:
	// srawi r8,r27,17
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1FFFF) != 0);
	ctx.r8.s64 = r27.s32 >> 17;
	// srawi r7,r31,17
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = r31.s32 >> 17;
	// srawi r9,r27,6
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3F) != 0);
	ctx.r9.s64 = r27.s32 >> 6;
	// srawi r6,r31,6
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3F) != 0);
	ctx.r6.s64 = r31.s32 >> 6;
	// srawi r5,r27,9
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1FF) != 0);
	ctx.r5.s64 = r27.s32 >> 9;
	// srawi r4,r27,11
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x7FF) != 0);
	ctx.r4.s64 = r27.s32 >> 11;
	// srawi r3,r27,13
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1FFF) != 0);
	ctx.r3.s64 = r27.s32 >> 13;
	// srawi r30,r27,15
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x7FFF) != 0);
	r30.s64 = r27.s32 >> 15;
	// clrlwi r5,r5,30
	ctx.r5.u64 = ctx.r5.u32 & 0x3;
	// clrlwi r4,r4,30
	ctx.r4.u64 = ctx.r4.u32 & 0x3;
	// srawi r29,r31,9
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1FF) != 0);
	r29.s64 = r31.s32 >> 9;
	// stw r5,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r5.u32);
	// srawi r28,r31,11
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FF) != 0);
	r28.s64 = r31.s32 >> 11;
	// stw r4,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r4.u32);
	// clrlwi r5,r30,30
	ctx.r5.u64 = r30.u32 & 0x3;
	// clrlwi r4,r29,30
	ctx.r4.u64 = r29.u32 & 0x3;
	// srawi r15,r31,13
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1FFF) != 0);
	r15.s64 = r31.s32 >> 13;
	// stw r5,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r5.u32);
	// clrlwi r3,r3,30
	ctx.r3.u64 = ctx.r3.u32 & 0x3;
	// stw r4,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r4.u32);
	// srawi r14,r31,15
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FFF) != 0);
	r14.s64 = r31.s32 >> 15;
	// stw r3,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r3.u32);
	// clrlwi r3,r28,30
	ctx.r3.u64 = r28.u32 & 0x3;
	// clrlwi r5,r15,30
	ctx.r5.u64 = r15.u32 & 0x3;
	// clrlwi r4,r14,30
	ctx.r4.u64 = r14.u32 & 0x3;
	// stw r3,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
	// clrlwi r30,r8,31
	r30.u64 = ctx.r8.u32 & 0x1;
	// stw r5,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r5.u32);
	// clrlwi. r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r4,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// clrlwi r29,r7,31
	r29.u64 = ctx.r7.u32 & 0x1;
	// clrlwi r8,r6,30
	ctx.r8.u64 = ctx.r6.u32 & 0x3;
	// beq 0x82407340
	if (ctx.cr0.eq) goto loc_82407340;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// b 0x82407344
	goto loc_82407344;
loc_82407340:
	// rlwinm r9,r16,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 16) & 0xFFFF0000;
loc_82407344:
	// stw r9,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82407360
	if (ctx.cr6.eq) goto loc_82407360;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// b 0x82407364
	goto loc_82407364;
loc_82407360:
	// rlwinm r9,r17,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 16) & 0xFFFF0000;
loc_82407364:
	// stw r9,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// mulli r7,r26,60
	ctx.r7.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(60));
	// addi r9,r9,12424
	ctx.r9.s64 = ctx.r9.s64 + 12424;
	// mulli r8,r19,60
	ctx.r8.s64 = static_cast<int64_t>(r19.u64 * static_cast<uint64_t>(60));
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r15,r8,r9
	r15.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r7,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r7.u32);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x8240747c
	if (!ctx.cr6.eq) goto loc_8240747C;
	// add r8,r11,r24
	ctx.r8.u64 = ctx.r11.u64 + r24.u64;
	// add r9,r10,r23
	ctx.r9.u64 = ctx.r10.u64 + r23.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// andc r29,r8,r11
	r29.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// andc r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823cd118
	ctx.lr = 0x824073C0;
	sub_823CD118(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x824073d4
	if (!ctx.cr0.eq) goto loc_824073D4;
loc_824073C8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82407b34
	goto loc_82407B34;
loc_824073D4:
	// lwz r5,0(r20)
	ctx.r5.u64 = REX_LOAD_U32(r20.u32 + 0);
	// lis r11,6690
	ctx.r11.s64 = 438435840;
	// lwz r4,4(r20)
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + 4);
	// rlwinm r29,r29,4,0,27
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r28,r11,43686
	r28.u64 = ctx.r11.u64 | 43686;
	// lwz r10,812(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 812);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// stw r18,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r18.u32);
	// stw r5,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r5.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r4,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r4.u32);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82407028
	ctx.lr = 0x82407424;
	sub_82407028(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x82407440
	if (!ctx.cr0.lt) goto loc_82407440;
loc_8240742C:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823cd250
	ctx.lr = 0x82407438;
	sub_823CD250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82407b34
	goto loc_82407B34;
loc_82407440:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lwz r4,764(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 764);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r18,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r18.u32);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8240da50
	ctx.lr = 0x82407474;
	sub_8240DA50(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8240742c
	goto loc_8240742C;
loc_8240747C:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82407488:
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x824074a4
	if (!ctx.cr6.eq) goto loc_824074A4;
	// cntlzw r11,r30
	ctx.r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
loc_824074A4:
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x824074c0
	if (!ctx.cr6.eq) goto loc_824074C0;
	// cntlzw r11,r29
	ctx.r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
loc_824074C0:
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r9,184(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// xor. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824074d8
	if (ctx.cr0.eq) goto loc_824074D8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
loc_824074D8:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82407488
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82407488;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82405278
	ctx.lr = 0x824074E8;
	sub_82405278(ctx, base);
	// srawi r11,r31,18
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3FFFF) != 0);
	ctx.r11.s64 = r31.s32 >> 18;
	// srawi r10,r31,21
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1FFFFF) != 0);
	ctx.r10.s64 = r31.s32 >> 21;
	// srawi r9,r31,24
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFFFFFF) != 0);
	ctx.r9.s64 = r31.s32 >> 24;
	// srawi r8,r31,27
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FFFFFF) != 0);
	ctx.r8.s64 = r31.s32 >> 27;
	// lwz r31,208(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// rlwinm r11,r11,2,27,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// addi r7,r7,16512
	ctx.r7.s64 = ctx.r7.s64 + 16512;
	// rlwinm r10,r10,2,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1C;
	// rlwinm r9,r9,2,27,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1C;
	// rlwinm r8,r8,2,27,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x1C;
	// addi r6,r1,416
	ctx.r6.s64 = ctx.r1.s64 + 416;
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stvx128 v1,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// stw r10,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r10.u32);
	// stw r9,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r9.u32);
	// stw r8,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r8.u32);
	// bl 0x82406468
	ctx.lr = 0x82407544;
	sub_82406468(ctx, base);
	// stw r3,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r3.u32);
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r9,r1,400
	ctx.r9.s64 = ctx.r1.s64 + 400;
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// addi r7,r1,432
	ctx.r7.s64 = ctx.r1.s64 + 432;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82406870
	ctx.lr = 0x82407574;
	sub_82406870(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82406250
	ctx.lr = 0x82407580;
	sub_82406250(ctx, base);
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v125,v63,v1
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v125.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v1.f32)));
	// bl 0x824062d0
	ctx.lr = 0x82407594;
	sub_824062D0(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// vor128 v124,v1,v1
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// bl 0x824062d0
	ctx.lr = 0x824075A0;
	sub_824062D0(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r8,160(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r9,4(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 4);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r28,764(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 764);
	// divwu r6,r10,r8
	ctx.r6.u64 = uint32_t(ctx.r8.u32 ? ctx.r10.u32 / ctx.r8.u32 : 0);
	// divwu r9,r9,r11
	ctx.r9.u64 = uint32_t(ctx.r11.u32 ? ctx.r9.u32 / ctx.r11.u32 : 0);
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mullw r3,r11,r28
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r7,4(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 4);
	// vor128 v123,v1,v1
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// lwz r24,180(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r23,812(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 812);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r9,r23
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r23.s32);
	// mullw r10,r7,r28
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(r28.s32);
	// mullw r11,r6,r24
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(r24.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r14,r10,r21
	r14.u64 = ctx.r10.u64 + r21.u64;
	// add r17,r11,r22
	r17.u64 = ctx.r11.u64 + r22.u64;
	// bl 0x823cd118
	ctx.lr = 0x82407608;
	sub_823CD118(ctx, base);
	// mr. r16,r3
	r16.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq 0x824073c8
	if (ctx.cr0.eq) goto loc_824073C8;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823cd118
	ctx.lr = 0x8240761C;
	sub_823CD118(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// stw r25,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, r25.u32);
	// bne 0x82407638
	if (!ctx.cr0.eq) goto loc_82407638;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
loc_8240762C:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// bl 0x823cd250
	ctx.lr = 0x82407634;
	sub_823CD250(ctx, base);
	// b 0x824073c8
	goto loc_824073C8;
loc_82407638:
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82407938
	if (!ctx.cr6.eq) goto loc_82407938;
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823cd118
	ctx.lr = 0x8240765C;
	sub_823CD118(ctx, base);
	// mr. r22,r3
	r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// stw r22,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, r22.u32);
	// bne 0x8240767c
	if (!ctx.cr0.eq) goto loc_8240767C;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x823cd250
	ctx.lr = 0x82407674;
	sub_823CD250(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x8240762c
	goto loc_8240762C;
loc_8240767C:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82406ee8
	ctx.lr = 0x82407688;
	sub_82406EE8(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,4(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 4);
	// li r18,0
	r18.s64 = 0;
	// lwz r19,172(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r3,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// and r21,r11,r10
	r21.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x82407928
	if (ctx.cr6.eq) goto loc_82407928;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lwz r15,188(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r10,r10,16672
	ctx.r10.s64 = ctx.r10.s64 + 16672;
	// stw r10,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
loc_824076C0:
	// add r10,r11,r15
	ctx.r10.u64 = ctx.r11.u64 + r15.u64;
	// lwz r5,192(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r6,r5,16,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF;
	// divwu r11,r10,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mullw r11,r11,r24
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r24.s32);
	// divwu r7,r11,r6
	ctx.r7.u64 = uint32_t(ctx.r6.u32 ? ctx.r11.u32 / ctx.r6.u32 : 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// bl 0x8240a328
	ctx.lr = 0x824076F0;
	sub_8240A328(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r9,0(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r26,r16
	r26.u64 = r16.u64;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// and r29,r10,r9
	r29.u64 = ctx.r10.u64 & ctx.r9.u64;
	// beq cr6,0x8240789c
	if (ctx.cr6.eq) goto loc_8240789C;
loc_82407710:
	// lwz r11,224(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82407724;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,164(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// mr r24,r21
	r24.u64 = r21.u64;
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplw cr6,r21,r8
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8240785c
	if (!ctx.cr6.lt) goto loc_8240785C;
	// li r23,0
	r23.s64 = 0;
	// subf r19,r21,r18
	r19.u64 = r18.u64 - r21.u64;
loc_82407740:
	// lwz r10,172(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// add r9,r19,r24
	ctx.r9.u64 = r19.u64 + r24.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8240785c
	if (!ctx.cr6.lt) goto loc_8240785C;
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8240784c
	if (!ctx.cr6.lt) goto loc_8240784C;
	// li r30,0
	r30.s64 = 0;
	// subf r22,r29,r27
	r22.u64 = r27.u64 - r29.u64;
loc_82407764:
	// add r10,r22,r31
	ctx.r10.u64 = r22.u64 + r31.u64;
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r15.u32, ctx.xer);
	// bge cr6,0x82407848
	if (!ctx.cr6.lt) goto loc_82407848;
	// lwz r10,188(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// mullw r11,r24,r11
	ctx.r11.s64 = int64_t(r24.s32) * int64_t(ctx.r11.s32);
	// lwz r9,200(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r8,204(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lvx128 v126,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v127,v63,v126,v0
	simde_mm_store_si128((simde__m128i*)v127.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// beq cr6,0x824077e4
	if (ctx.cr6.eq) goto loc_824077E4;
	// lwz r11,184(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824077c4
	if (ctx.cr6.eq) goto loc_824077C4;
	// vor128 v1,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)v127.u8));
	// bl 0x82405310
	ctx.lr = 0x824077B8;
	sub_82405310(ctx, base);
	// vor128 v0,v123,v123
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)v123.u8));
	// vsel128 v0,v127,v1,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)v127.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8))));
	// vor128 v127,v0,v0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
loc_824077C4:
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824077e4
	if (ctx.cr6.eq) goto loc_824077E4;
	// vor128 v1,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)v127.u8));
	// bl 0x82230a48
	ctx.lr = 0x824077D8;
	sub_82230A48(ctx, base);
	// vor128 v0,v124,v124
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)v124.u8));
	// vsel128 v0,v127,v1,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)v127.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8))));
	// vor128 v127,v0,v0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
loc_824077E4:
	// addi r11,r1,416
	ctx.r11.s64 = ctx.r1.s64 + 416;
	// vor128 v4,v125,v125
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)v125.u8));
	// addi r10,r1,384
	ctx.r10.s64 = ctx.r1.s64 + 384;
	// lwz r5,240(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// lwz r4,208(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r8,r1,400
	ctx.r8.s64 = ctx.r1.s64 + 400;
	// addi r7,r1,432
	ctx.r7.s64 = ctx.r1.s64 + 432;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// add r11,r23,r30
	ctx.r11.u64 = r23.u64 + r30.u64;
	// lvx128 v7,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v127,v126,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// lvx128 v5,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824061b0
	ctx.lr = 0x82407830;
	sub_824061B0(ctx, base);
	// lwz r10,168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r30,r30,r10
	r30.u64 = r30.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82407764
	if (ctx.cr6.lt) goto loc_82407764;
loc_82407848:
	// lwz r8,164(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
loc_8240784C:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// add r23,r23,r28
	r23.u64 = r23.u64 + r28.u64;
	// cmplw cr6,r24,r8
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82407740
	if (ctx.cr6.lt) goto loc_82407740;
loc_8240785C:
	// subf r10,r29,r27
	ctx.r10.u64 = r27.u64 - r29.u64;
	// lwz r9,168(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// subf r7,r29,r11
	ctx.r7.u64 = ctx.r11.u64 - r29.u64;
	// lwz r24,180(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r22,200(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// mullw r10,r7,r9
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r26,r10,r26
	r26.u64 = ctx.r10.u64 + r26.u64;
	// add r25,r25,r24
	r25.u64 = r25.u64 + r24.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplw cr6,r27,r15
	ctx.cr6.compare<uint32_t>(r27.u32, r15.u32, ctx.xer);
	// blt cr6,0x82407710
	if (ctx.cr6.lt) goto loc_82407710;
	// lwz r25,196(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r19,172(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r23,812(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 812);
	// b 0x824078a0
	goto loc_824078A0;
loc_8240789C:
	// lwz r8,164(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
loc_824078A0:
	// mr r30,r21
	r30.u64 = r21.u64;
	// cmplw cr6,r21,r8
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82407904
	if (!ctx.cr6.lt) goto loc_82407904;
	// lwz r26,212(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// mr r31,r14
	r31.u64 = r14.u64;
	// subf r29,r14,r16
	r29.u64 = r16.u64 - r14.u64;
	// subf r27,r21,r18
	r27.u64 = r18.u64 - r21.u64;
loc_824078BC:
	// add r11,r27,r30
	ctx.r11.u64 = r27.u64 + r30.u64;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// bge cr6,0x82407900
	if (!ctx.cr6.lt) goto loc_82407900;
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// rlwinm r6,r26,16,16,31
	ctx.r6.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 16) & 0xFFFF;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mullw r11,r11,r15
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r15.s32);
	// divwu r7,r11,r6
	ctx.r7.u64 = uint32_t(ctx.r6.u32 ? ctx.r11.u32 / ctx.r6.u32 : 0);
	// add r4,r29,r31
	ctx.r4.u64 = r29.u64 + r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// bl 0x8240a328
	ctx.lr = 0x824078EC;
	sub_8240A328(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r31,r31,r28
	r31.u64 = r31.u64 + r28.u64;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x824078bc
	if (ctx.cr6.lt) goto loc_824078BC;
loc_82407900:
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
loc_82407904:
	// subf r10,r21,r8
	ctx.r10.u64 = ctx.r8.u64 - r21.u64;
	// subf r9,r21,r18
	ctx.r9.u64 = r18.u64 - r21.u64;
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// add r18,r9,r8
	r18.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r14,r10,r14
	r14.u64 = ctx.r10.u64 + r14.u64;
	// add r17,r17,r23
	r17.u64 = r17.u64 + r23.u64;
	// li r21,0
	r21.s64 = 0;
	// cmplw cr6,r18,r19
	ctx.cr6.compare<uint32_t>(r18.u32, r19.u32, ctx.xer);
	// blt cr6,0x824076c0
	if (ctx.cr6.lt) goto loc_824076C0;
loc_82407928:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x823cd250
	ctx.lr = 0x82407934;
	sub_823CD250(ctx, base);
	// b 0x82407b10
	goto loc_82407B10;
loc_82407938:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82406328
	ctx.lr = 0x82407940;
	sub_82406328(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// addi r9,r1,480
	ctx.r9.s64 = ctx.r1.s64 + 480;
	// addi r8,r1,448
	ctx.r8.s64 = ctx.r1.s64 + 448;
	// addi r7,r1,464
	ctx.r7.s64 = ctx.r1.s64 + 464;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824065a8
	ctx.lr = 0x82407968;
	sub_824065A8(ctx, base);
	// lwz r28,172(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82407b10
	if (ctx.cr6.eq) goto loc_82407B10;
	// lwz r21,188(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r20,192(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r27,r20,16,16,31
	r27.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 16) & 0xFFFF;
	// lwz r19,212(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// mullw r11,r11,r21
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r21.s32);
	// lwz r18,168(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// divwu r25,r11,r27
	r25.u64 = uint32_t(r27.u32 ? ctx.r11.u32 / r27.u32 : 0);
	// rlwinm r26,r19,16,16,31
	r26.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 16) & 0xFFFF;
	// mullw r10,r18,r21
	ctx.r10.s64 = int64_t(r18.s32) * int64_t(r21.s32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// twllei r27,0
	if (r27.s32 == 0 || r27.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r24,r10,r26
	r24.u64 = uint32_t(r26.u32 ? ctx.r10.u32 / r26.u32 : 0);
	// twllei r26,0
	if (r26.s32 == 0 || r26.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r23,r11,16672
	r23.s64 = ctx.r11.s64 + 16672;
loc_824079B0:
	// lwz r31,196(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x8240a328
	ctx.lr = 0x824079CC;
	sub_8240A328(ctx, base);
	// mr r30,r16
	r30.u64 = r16.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82407ae0
	if (ctx.cr6.eq) goto loc_82407AE0;
	// mr r29,r21
	r29.u64 = r21.u64;
loc_824079DC:
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x824079EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lvx128 v126,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,448
	ctx.r9.s64 = ctx.r1.s64 + 448;
	// lwz r8,204(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// addi r7,r1,464
	ctx.r7.s64 = ctx.r1.s64 + 464;
	// addi r6,r1,480
	ctx.r6.s64 = ctx.r1.s64 + 480;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// vxor128 v13,v1,v63
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lvx128 v62,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfux v0,v13,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// lvx128 v7,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsel128 v12,v13,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmaddfp128 v63,v12,v62,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v62.f32)), simde_mm_load_ps(ctx.v63.f32)));
	// vmaxfp128 v63,v63,v61
	simde_mm_store_ps(ctx.v63.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vperm128 v127,v63,v126,v7
	simde_mm_store_si128((simde__m128i*)v127.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// beq cr6,0x82407a84
	if (ctx.cr6.eq) goto loc_82407A84;
	// lwz r11,184(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82407a64
	if (ctx.cr6.eq) goto loc_82407A64;
	// vor128 v1,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)v127.u8));
	// bl 0x82405310
	ctx.lr = 0x82407A58;
	sub_82405310(ctx, base);
	// vor128 v0,v123,v123
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)v123.u8));
	// vsel128 v0,v127,v1,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)v127.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8))));
	// vor128 v127,v0,v0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
loc_82407A64:
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82407a84
	if (ctx.cr6.eq) goto loc_82407A84;
	// vor128 v1,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)v127.u8));
	// bl 0x82230a48
	ctx.lr = 0x82407A78;
	sub_82230A48(ctx, base);
	// vor128 v0,v124,v124
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)v124.u8));
	// vsel128 v0,v127,v1,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)v127.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8))));
	// vor128 v127,v0,v0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
loc_82407A84:
	// addi r11,r1,416
	ctx.r11.s64 = ctx.r1.s64 + 416;
	// vor128 v4,v125,v125
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)v125.u8));
	// addi r10,r1,384
	ctx.r10.s64 = ctx.r1.s64 + 384;
	// lwz r5,240(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// lwz r4,208(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r8,r1,400
	ctx.r8.s64 = ctx.r1.s64 + 400;
	// addi r7,r1,432
	ctx.r7.s64 = ctx.r1.s64 + 432;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lvx128 v7,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v127,v126,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v5,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824061b0
	ctx.lr = 0x82407ACC;
	sub_824061B0(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r30,r30,r18
	r30.u64 = r30.u64 + r18.u64;
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// bne 0x824079dc
	if (!ctx.cr0.eq) goto loc_824079DC;
loc_82407AE0:
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8240a328
	ctx.lr = 0x82407AF8;
	sub_8240A328(ctx, base);
	// lwz r11,764(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 764);
	// lwz r10,812(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 812);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// add r14,r14,r11
	r14.u64 = r14.u64 + ctx.r11.u64;
	// add r17,r17,r10
	r17.u64 = r17.u64 + ctx.r10.u64;
	// bne 0x824079b0
	if (!ctx.cr0.eq) goto loc_824079B0;
loc_82407B10:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x823cd250
	ctx.lr = 0x82407B1C;
	sub_823CD250(ctx, base);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,196(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x823cd250
	ctx.lr = 0x82407B28;
	sub_823CD250(ctx, base);
	// b 0x824072a4
	goto loc_824072A4;
loc_82407B2C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
loc_82407B34:
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// addi r12,r1,-160
	ctx.r12.s64 = ctx.r1.s64 + -160;
	// bl 0x822d8d34
	ctx.lr = 0x82407B40;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_824398C8) {
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
	// bl 0x82439860
	ctx.lr = 0x824398E8;
	sub_82439860(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824398f8
	if (ctx.cr0.eq) goto loc_824398F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x824398F8;
	sub_82473600(ctx, base);
loc_824398F8:
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

DEFINE_REX_FUNC(sub_8243A588) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8243a300
	ctx.lr = 0x8243A5A4;
	sub_8243A300(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8243a5d0
	if (ctx.cr6.eq) goto loc_8243A5D0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8243a300
	ctx.lr = 0x8243A5B8;
	sub_8243A300(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8243a5d0
	if (ctx.cr6.eq) goto loc_8243A5D0;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8243a5ec
	goto loc_8243A5EC;
loc_8243A5D0:
	// lhz r11,14(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 14);
	// li r10,128
	ctx.r10.s64 = 128;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_8243A5EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cd980
	ctx.lr = 0x8243A5F4;
	sub_823CD980(ctx, base);
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

DEFINE_REX_FUNC(sub_8243C6F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r10,168(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
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
	// b 0x82444998
	sub_82444998(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8243D608) {
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
	// addi r4,r11,22376
	ctx.r4.s64 = ctx.r11.s64 + 22376;
	// bl 0x8242bb10
	ctx.lr = 0x8243D628;
	sub_8242BB10(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,11168
	ctx.r10.s64 = ctx.r10.s64 + 11168;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// addi r3,r9,7712
	ctx.r3.s64 = ctx.r9.s64 + 7712;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// bl 0x8242c298
	ctx.lr = 0x8243D650;
	sub_8242C298(ctx, base);
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

DEFINE_REX_FUNC(sub_8243E8B8) {
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
	// bl 0x822d4e54
	ctx.lr = 0x8243E8C0;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x822d4f2c
	ctx.lr = 0x8243E8C8;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// ori r31,r11,65535
	r31.u64 = ctx.r11.u64 | 65535;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// mr r17,r7
	r17.u64 = ctx.r7.u64;
	// li r28,-1
	r28.s64 = -1;
	// li r15,0
	r15.s64 = 0;
	// li r20,0
	r20.s64 = 0;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, ctx.xer);
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8243e904
	if (!ctx.cr6.gt) goto loc_8243E904;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_8243E904:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r10,8343
	ctx.r10.s64 = 546766848;
	// addi r30,r11,7712
	r30.s64 = ctx.r11.s64 + 7712;
	// ori r29,r10,10
	r29.u64 = ctx.r10.u64 | 10;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8242c3b0
	ctx.lr = 0x8243E924;
	sub_8242C3B0(ctx, base);
	// mr. r16,r3
	r16.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r16.s32, 0, ctx.xer);
	// bne 0x8243e938
	if (!ctx.cr0.eq) goto loc_8243E938;
	// lis r15,-32761
	r15.s64 = -2147024896;
	// ori r15,r15,14
	r15.u64 = r15.u64 | 14;
	// b 0x8243ee38
	goto loc_8243EE38;
loc_8243E938:
	// cmplw cr6,r19,r31
	ctx.cr6.compare<uint32_t>(r19.u32, r31.u32, ctx.xer);
	// rlwinm r4,r19,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8243e948
	if (!ctx.cr6.gt) goto loc_8243E948;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_8243E948:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8242c3b0
	ctx.lr = 0x8243E958;
	sub_8242C3B0(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq 0x8243e988
	if (ctx.cr0.eq) goto loc_8243E988;
	// cmplw cr6,r19,r31
	ctx.cr6.compare<uint32_t>(r19.u32, r31.u32, ctx.xer);
	// rlwinm r4,r19,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8243e970
	if (!ctx.cr6.gt) goto loc_8243E970;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_8243E970:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8242c3b0
	ctx.lr = 0x8243E980;
	sub_8242C3B0(ctx, base);
	// mr. r20,r3
	r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne 0x8243e994
	if (!ctx.cr0.eq) goto loc_8243E994;
loc_8243E988:
	// lis r15,-32761
	r15.s64 = -2147024896;
	// ori r15,r15,14
	r15.u64 = r15.u64 | 14;
	// b 0x8243ee10
	goto loc_8243EE10;
loc_8243E994:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x8243e9b4
	if (!ctx.cr6.gt) goto loc_8243E9B4;
	// addi r11,r16,-4
	ctx.r11.s64 = r16.s64 + -4;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
loc_8243E9A8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8243e9a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243E9A8;
loc_8243E9B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// ble cr6,0x8243e9d4
	if (!ctx.cr6.gt) goto loc_8243E9D4;
	// addi r11,r21,-4
	ctx.r11.s64 = r21.s64 + -4;
	// mtctr r19
	ctx.ctr.u64 = r19.u64;
loc_8243E9C8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8243e9c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243E9C8;
loc_8243E9D4:
	// addi r6,r22,-1
	ctx.r6.s64 = r22.s64 + -1;
loc_8243E9D8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8243ea34
	if (!ctx.cr6.gt) goto loc_8243EA34;
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// addi r11,r27,4
	ctx.r11.s64 = r27.s64 + 4;
	// subf r9,r27,r16
	ctx.r9.u64 = r16.u64 - r27.u64;
loc_8243E9F4:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8243ea20
	if (!ctx.cr6.gt) goto loc_8243EA20;
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r4,r9,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r4,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// stwx r5,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u32);
loc_8243EA20:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8243e9f4
	if (ctx.cr6.lt) goto loc_8243E9F4;
loc_8243EA34:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8243e9d8
	if (!ctx.cr0.eq) goto loc_8243E9D8;
	// addi r6,r19,-1
	ctx.r6.s64 = r19.s64 + -1;
loc_8243EA40:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8243ea9c
	if (!ctx.cr6.gt) goto loc_8243EA9C;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// addi r11,r18,4
	ctx.r11.s64 = r18.s64 + 4;
	// subf r9,r18,r21
	ctx.r9.u64 = r21.u64 - r18.u64;
loc_8243EA5C:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8243ea88
	if (!ctx.cr6.gt) goto loc_8243EA88;
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwzx r5,r9,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stwx r4,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r4.u32);
loc_8243EA88:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8243ea5c
	if (ctx.cr6.lt) goto loc_8243EA5C;
loc_8243EA9C:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8243ea40
	if (!ctx.cr0.eq) goto loc_8243EA40;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r25,r19
	r25.u64 = r19.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// lfs f29,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f29.f64 = double(temp.f32);
	// ble cr6,0x8243eae8
	if (!ctx.cr6.gt) goto loc_8243EAE8;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_8243EAC4:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x8243eae4
	if (!ctx.cr6.lt) goto loc_8243EAE4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// blt cr6,0x8243eac4
	if (ctx.cr6.lt) goto loc_8243EAC4;
	// b 0x8243eae8
	goto loc_8243EAE8;
loc_8243EAE4:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_8243EAE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// ble cr6,0x8243eb1c
	if (!ctx.cr6.gt) goto loc_8243EB1C;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_8243EAF8:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x8243eb18
	if (!ctx.cr6.lt) goto loc_8243EB18;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r19.s32, ctx.xer);
	// blt cr6,0x8243eaf8
	if (ctx.cr6.lt) goto loc_8243EAF8;
	// b 0x8243eb1c
	goto loc_8243EB1C;
loc_8243EB18:
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
loc_8243EB1C:
	// subf r28,r25,r19
	r28.u64 = r19.u64 - r25.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// ble cr6,0x8243eb6c
	if (!ctx.cr6.gt) goto loc_8243EB6C;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
loc_8243EB34:
	// stfs f29,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x8243eb5c
	if (!ctx.cr6.gt) goto loc_8243EB5C;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
loc_8243EB48:
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f29,r6,r17
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r6.u32 + r17.u32, temp.u32);
	// bdnz 0x8243eb48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243EB48;
loc_8243EB5C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + r22.u64;
	// bne 0x8243eb34
	if (!ctx.cr0.eq) goto loc_8243EB34;
loc_8243EB6C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8243ee10
	if (!ctx.cr6.gt) goto loc_8243EE10;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r22
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r22.s32, ctx.xer);
	// lfs f25,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f25.f64 = double(temp.f32);
	// bge cr6,0x8243ed5c
	if (!ctx.cr6.lt) goto loc_8243ED5C;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r29,r11,r16
	r29.u64 = ctx.r11.u64 + r16.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// subf r24,r16,r27
	r24.u64 = r27.u64 - r16.u64;
	// lfs f26,15628(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15628);
	f26.f64 = double(temp.f32);
	// lfd f28,24664(r11)
	f28.u64 = REX_LOAD_U64(ctx.r11.u32 + 24664);
	// lfs f27,2364(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2364);
	f27.f64 = double(temp.f32);
loc_8243EBAC:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// cmpw cr6,r25,r19
	ctx.cr6.compare<int32_t>(r25.s32, r19.s32, ctx.xer);
	// bge cr6,0x8243ebe0
	if (!ctx.cr6.lt) goto loc_8243EBE0;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r24,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r10,r18
	ctx.r10.u64 = ctx.r10.u64 + r18.u64;
loc_8243EBC4:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8243ebe0
	if (!ctx.cr6.gt) goto loc_8243EBE0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r19.s32, ctx.xer);
	// blt cr6,0x8243ebc4
	if (ctx.cr6.lt) goto loc_8243EBC4;
loc_8243EBE0:
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - r25.u64;
	// twllei r28,0
	if (r28.s32 == 0 || r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + r28.u64;
	// divw r9,r11,r28
	ctx.r9.u64 = uint32_t((r28.s32 && !(ctx.r11.s32 == INT32_MIN && r28.s32 == -1)) ? ctx.r11.s32 / r28.s32 : 0);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// mullw r10,r9,r28
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(r28.s32);
	// divw r9,r8,r28
	ctx.r9.u64 = uint32_t((r28.s32 && !(ctx.r8.s32 == INT32_MIN && r28.s32 == -1)) ? ctx.r8.s32 / r28.s32 : 0);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mullw r9,r9,r28
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r28.s32);
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r27,r10,r25
	r27.u64 = ctx.r10.u64 + r25.u64;
	// add r26,r9,r25
	r26.u64 = ctx.r9.u64 + r25.u64;
	// rlwinm r30,r27,2,0,29
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r26,2,0,29
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfsx f0,r30,r18
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + r18.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lfsx f13,r31,r18
	temp.u32 = REX_LOAD_U32(r31.u32 + r18.u32);
	ctx.f13.f64 = double(temp.f32);
	// andc r11,r28,r11
	ctx.r11.u64 = r28.u64 & ~ctx.r11.u64;
	// fsubs f31,f0,f13
	f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// andc r10,r28,r10
	ctx.r10.u64 = r28.u64 & ~ctx.r10.u64;
	// twllei r28,0
	if (r28.s32 == 0 || r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// fmuls f1,f31,f27
	ctx.f1.f64 = double(float(f31.f64 * f27.f64));
	// bl 0x822d6130
	ctx.lr = 0x8243EC50;
	sub_822D6130(ctx, base);
	// lfsx f0,r24,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfsx f12,r31,r18
	temp.u32 = REX_LOAD_U32(r31.u32 + r18.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f30,f0,f12
	f30.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fnmsubs f31,f13,f26,f31
	f31.f64 = double(float(-std::fma(ctx.f13.f64, f26.f64, -f31.f64)));
	// fmuls f1,f30,f27
	ctx.f1.f64 = double(float(f30.f64 * f27.f64));
	// bl 0x822d6130
	ctx.lr = 0x8243EC6C;
	sub_822D6130(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// cmpw cr6,r26,r27
	ctx.cr6.compare<int32_t>(r26.s32, r27.s32, ctx.xer);
	// fnmsubs f0,f0,f26,f30
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, f26.f64, -f30.f64)));
	// bne cr6,0x8243eca8
	if (!ctx.cr6.eq) goto loc_8243ECA8;
	// lwzx r10,r31,r21
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + r21.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mullw r10,r10,r22
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r22.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f25,r11,r17
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r11.u32 + r17.u32, temp.u32);
	// lwzx r11,r31,r21
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + r21.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r20
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 + f25.f64));
	// b 0x8243ed48
	goto loc_8243ED48;
loc_8243ECA8:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f29.f64);
	// beq cr6,0x8243ee4c
	if (ctx.cr6.eq) goto loc_8243EE4C;
	// fdivs f30,f0,f31
	f30.f64 = double(float(ctx.f0.f64 / f31.f64));
	// fmul f1,f30,f28
	ctx.f1.f64 = f30.f64 * f28.f64;
	// bl 0x822d4d68
	ctx.lr = 0x8243ECBC;
	sub_822D4D68(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(f31.f64, f29.f64);
	// bge cr6,0x8243eccc
	if (!ctx.cr6.lt) goto loc_8243ECCC;
	// fmr f31,f29
	f31.f64 = f29.f64;
loc_8243ECCC:
	// fmul f1,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64 * f28.f64;
	// bl 0x822d4c88
	ctx.lr = 0x8243ECD4;
	sub_822D4C88(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x8243ece4
	if (!ctx.cr6.lt) goto loc_8243ECE4;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
loc_8243ECE4:
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(r19.s32, 1, ctx.xer);
	// bne cr6,0x8243ecf4
	if (!ctx.cr6.eq) goto loc_8243ECF4;
	// fmr f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f25.f64;
	// fmr f31,f25
	f31.f64 = f25.f64;
loc_8243ECF4:
	// lwzx r10,r31,r21
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + r21.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mullw r10,r10,r22
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r22.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r11,r17
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + r17.u32, temp.u32);
	// lwzx r11,r30,r21
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r21.u32);
	// mullw r10,r11,r22
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r22.s32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r11,r17
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + r17.u32, temp.u32);
	// lwzx r11,r31,r21
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + r21.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r20
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfsx f13,r11,r20
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + r20.u32, temp.u32);
	// lwzx r11,r30,r21
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r21.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r20
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_8243ED48:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// stfsx f0,r11,r20
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + r20.u32, temp.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r23,r22
	ctx.cr6.compare<int32_t>(r23.s32, r22.s32, ctx.xer);
	// blt cr6,0x8243ebac
	if (ctx.cr6.lt) goto loc_8243EBAC;
loc_8243ED5C:
	// fmr f10,f29
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = f29.f64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// ble cr6,0x8243ee10
	if (!ctx.cr6.gt) goto loc_8243EE10;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// mtctr r19
	ctx.ctr.u64 = r19.u64;
loc_8243ED70:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x8243ed80
	if (!ctx.cr6.gt) goto loc_8243ED80;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_8243ED80:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8243ed70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243ED70;
	// fcmpu cr6,f10,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, f29.f64);
	// beq cr6,0x8243ee10
	if (ctx.cr6.eq) goto loc_8243EE10;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
	// lfs f11,2388(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2388);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-29984(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -29984);
	ctx.f13.f64 = double(temp.f32);
loc_8243EDB0:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x8243ee04
	if (!ctx.cr6.gt) goto loc_8243EE04;
	// fdivs f0,f25,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f25.f64 / ctx.f10.f64));
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
loc_8243EDC4:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r10,r17
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r17.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmadds f9,f9,f13,f12
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f12.f64)));
	// fctiwz f9,f9
	ctx.f9.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwa r7,84(r1)
	ctx.r7.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 84));
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfsx f9,r10,r17
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + r17.u32, temp.u32);
	// bdnz 0x8243edc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243EDC4;
loc_8243EE04:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r9,r9,r22
	ctx.r9.u64 = ctx.r9.u64 + r22.u64;
	// bne 0x8243edb0
	if (!ctx.cr0.eq) goto loc_8243EDB0;
loc_8243EE10:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82473600
	ctx.lr = 0x8243EE18;
	sub_82473600(ctx, base);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8243ee28
	if (ctx.cr6.eq) goto loc_8243EE28;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82473600
	ctx.lr = 0x8243EE28;
	sub_82473600(ctx, base);
loc_8243EE28:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8243ee38
	if (ctx.cr6.eq) goto loc_8243EE38;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82473600
	ctx.lr = 0x8243EE38;
	sub_82473600(ctx, base);
loc_8243EE38:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x822d4f78
	ctx.lr = 0x8243EE48;
	// b 0x822d4ea4
	return;
loc_8243EE4C:
	// lis r15,-32761
	r15.s64 = -2147024896;
	// ori r15,r15,87
	r15.u64 = r15.u64 | 87;
	// b 0x8243ee10
	goto loc_8243EE10;
}

DEFINE_REX_FUNC(sub_8245E240) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8245e1a0
	sub_8245E1A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8245E260) {
	REX_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245E500) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x8245f668
	sub_8245F668(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8245E5E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8245E5E8;
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
	ctx.lr = 0x8245E60C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8245f8d0
	ctx.lr = 0x8245E61C;
	sub_8245F8D0(ctx, base);
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
	ctx.lr = 0x8245E638;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8245F2B0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
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

DEFINE_REX_FUNC(sub_8245F4F0) {
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
	ctx.lr = 0x8245F4F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8245f534
	if (!ctx.cr6.eq) goto loc_8245F534;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8245f534
	if (!ctx.cr6.eq) goto loc_8245F534;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245F530;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8245f598
	goto loc_8245F598;
loc_8245F534:
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
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8242c3b0
	ctx.lr = 0x8245F550;
	sub_8242C3B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8245f564
	if (!ctx.cr0.eq) goto loc_8245F564;
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
	// b 0x8245f598
	goto loc_8245F598;
loc_8245F564:
	// addic r11,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r11.s64 = r30.s64 + -1;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// subfe r11,r11,r30
	temp.u8 = (~ctx.r11.u32 + r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 16);
	// bl 0x8245f9d8
	ctx.lr = 0x8245F588;
	sub_8245F9D8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bge 0x8245f598
	if (!ctx.cr0.lt) goto loc_8245F598;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x8245F598;
	sub_82473600(ctx, base);
loc_8245F598:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_824607C0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82460a88
	sub_82460A88(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824607E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x824607F0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lis r6,-32161
	ctx.r6.s64 = -2107703296;
	// addi r10,r10,31456
	ctx.r10.s64 = ctx.r10.s64 + 31456;
	// addi r7,r7,31412
	ctx.r7.s64 = ctx.r7.s64 + 31412;
	// li r11,6144
	ctx.r11.s64 = 6144;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r5,-32173
	ctx.r5.s64 = -2108489728;
	// stw r7,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,6660(r6)
	REX_STORE_U32(ctx.r6.u32 + 6660, ctx.r11.u32);
	// li r30,0
	r30.s64 = 0;
	// addi r10,r5,11008
	ctx.r10.s64 = ctx.r5.s64 + 11008;
loc_82460828:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r9,0,r10
	ea = ctx.r10.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r30.s32, ctx.xer);
	// bne cr6,0x8246084c
	if (!ctx.cr6.eq) goto loc_8246084C;
	// stwcx. r11,0,r10
	ea = ctx.r10.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82460828
	if (!ctx.cr0.eq) goto loc_82460828;
	// b 0x82460854
	goto loc_82460854;
loc_8246084C:
	// stwcx. r9,0,r10
	ea = ctx.r10.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_82460854:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824608e0
	if (ctx.cr6.eq) goto loc_824608E0;
	// bl 0x824d46cc
	ctx.lr = 0x82460864;
	__imp__KeEnterCriticalRegion(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r29,r11,28904
	r29.s64 = ctx.r11.s64 + 28904;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d438c
	ctx.lr = 0x82460874;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// addi r10,r10,9144
	ctx.r10.s64 = ctx.r10.s64 + 9144;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82460884:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r31.u32, ctx.xer);
	// beq cr6,0x824608a4
	if (ctx.cr6.eq) goto loc_824608A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82460884
	if (ctx.cr6.lt) goto loc_82460884;
	// b 0x824608d4
	goto loc_824608D4;
loc_824608A4:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// stwx r30,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r30.u32);
	// stw r30,108(r31)
	REX_STORE_U32(r31.u32 + 108, r30.u32);
	// lwz r11,9176(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 9176);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,9176(r9)
	REX_STORE_U32(ctx.r9.u32 + 9176, ctx.r11.u32);
	// bne 0x824608d4
	if (!ctx.cr0.eq) goto loc_824608D4;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,28888
	ctx.r3.s64 = ctx.r11.s64 + 28888;
	// bl 0x824d45dc
	ctx.lr = 0x824608D4;
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
loc_824608D4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d437c
	ctx.lr = 0x824608DC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x824d469c
	ctx.lr = 0x824608E0;
	__imp__KeLeaveCriticalRegion(ctx, base);
loc_824608E0:
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// bl 0x824606c0
	ctx.lr = 0x824608E8;
	sub_824606C0(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x824606c0
	ctx.lr = 0x824608F0;
	sub_824606C0(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x824606c0
	ctx.lr = 0x824608F8;
	sub_824606C0(ctx, base);
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8246090c
	if (ctx.cr6.eq) goto loc_8246090C;
	// bl 0x82473600
	ctx.lr = 0x82460908;
	sub_82473600(ctx, base);
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
loc_8246090C:
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82460920
	if (ctx.cr6.eq) goto loc_82460920;
	// bl 0x82473600
	ctx.lr = 0x8246091C;
	sub_82473600(ctx, base);
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
loc_82460920:
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x8242c4b8
	ctx.lr = 0x82460928;
	sub_8242C4B8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r11,r11,31404
	ctx.r11.s64 = ctx.r11.s64 + 31404;
	// addi r10,r10,31360
	ctx.r10.s64 = ctx.r10.s64 + 31360;
	// addi r9,r9,31316
	ctx.r9.s64 = ctx.r9.s64 + 31316;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82469B38) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,64(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// subf r11,r8,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r8.u64;
	// cmpwi cr6,r11,72
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 72, ctx.xer);
	// blt cr6,0x82469b58
	if (ctx.cr6.lt) goto loc_82469B58;
	// li r11,71
	ctx.r11.s64 = 71;
loc_82469B58:
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// slw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// addi r5,r8,-6904
	ctx.r5.s64 = ctx.r8.s64 + -6904;
	// std r6,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfsx f10,r4,r5
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fmuls f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8246C0A8) {
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
	// lwz r10,40(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8246c10c
	if (ctx.cr6.eq) goto loc_8246C10C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,36(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// bl 0x8246baf8
	ctx.lr = 0x8246C0E0;
	sub_8246BAF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246c110
	if (ctx.cr6.lt) goto loc_8246C110;
	// lhz r11,490(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 490);
	// lhz r10,730(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 730);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8246c104
	if (!ctx.cr6.gt) goto loc_8246C104;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8246C104:
	// sth r11,730(r30)
	REX_STORE_U16(r30.u32 + 730, ctx.r11.u16);
	// b 0x8246c110
	goto loc_8246C110;
loc_8246C10C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8246C110:
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

DEFINE_REX_FUNC(sub_8246D760) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8246D768;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x8246e538
	ctx.lr = 0x8246D784;
	sub_8246E538(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246d878
	if (ctx.cr6.lt) goto loc_8246D878;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823253a8
	ctx.lr = 0x8246D79C;
	sub_823253A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246d878
	if (ctx.cr6.lt) goto loc_8246D878;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8246d7d8
	if (!ctx.cr6.eq) goto loc_8246D7D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82319a70
	ctx.lr = 0x8246D7C0;
	sub_82319A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246d878
	if (ctx.cr6.lt) goto loc_8246D878;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
loc_8246D7D8:
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8246d824
	if (!ctx.cr6.eq) goto loc_8246D824;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82319a70
	ctx.lr = 0x8246D7F0;
	sub_82319A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246d878
	if (ctx.cr6.lt) goto loc_8246D878;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824658f8
	ctx.lr = 0x8246D808;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246d878
	if (ctx.cr6.lt) goto loc_8246D878;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
loc_8246D824:
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8246d870
	if (!ctx.cr6.eq) goto loc_8246D870;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82319a70
	ctx.lr = 0x8246D83C;
	sub_82319A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246d878
	if (ctx.cr6.lt) goto loc_8246D878;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824658f8
	ctx.lr = 0x8246D854;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246d878
	if (ctx.cr6.lt) goto loc_8246D878;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
loc_8246D870:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_8246D878:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_824724F8) {
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
	ctx.lr = 0x82472500;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82472708
	if (ctx.cr6.eq) goto loc_82472708;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82472708
	if (ctx.cr6.eq) goto loc_82472708;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 7, ctx.xer);
	// blt cr6,0x82472700
	if (ctx.cr6.lt) goto loc_82472700;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// clrlwi r24,r7,16
	r24.u64 = ctx.r7.u32 & 0xFFFF;
	// lfs f0,21052(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 21052);
	ctx.f0.f64 = double(temp.f32);
	// addi r25,r11,-1840
	r25.s64 = ctx.r11.s64 + -1840;
	// addi r27,r10,-1868
	r27.s64 = ctx.r10.s64 + -1868;
	// addi r26,r9,-1896
	r26.s64 = ctx.r9.s64 + -1896;
loc_82472540:
	// cmplw cr6,r4,r24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r24.u32, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x82472550
	if (ctx.cr6.lt) goto loc_82472550;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_82472550:
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
	// rotlwi r6,r9,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lbz r10,1(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbzu r11,2(r3)
	ea = 2 + ctx.r3.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwzx r29,r6,r26
	r29.u64 = REX_LOAD_U32(ctx.r6.u32 + r26.u32);
	// lwzx r28,r6,r27
	r28.u64 = REX_LOAD_U32(ctx.r6.u32 + r27.u32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r7,1(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbzu r31,2(r3)
	ea = 2 + ctx.r3.u32;
	r31.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// rotlwi r6,r7,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r6,1(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// rotlwi r30,r6,8
	r30.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// std r11,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r11.u64);
	// lfd f13,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// add r11,r30,r31
	ctx.r11.u64 = r30.u64 + r31.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// std r7,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r7.u64);
	// lfd f10,-104(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f6,0(r5)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfsu f7,4(r5)
	ea = 4 + ctx.r5.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r5.u32 = ea;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// beq 0x824726f8
	if (ctx.cr0.eq) goto loc_824726F8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824725E0:
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
	// ble cr6,0x82472624
	if (!ctx.cr6.gt) goto loc_82472624;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x82472630
	goto loc_82472630;
loc_82472624:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x82472630
	if (!ctx.cr6.lt) goto loc_82472630;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_82472630:
	// rlwinm r7,r6,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// lwzx r6,r7,r25
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + r25.u32);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// srawi r7,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 8;
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// bge cr6,0x8247264c
	if (!ctx.cr6.lt) goto loc_8247264C;
	// li r7,16
	ctx.r7.s64 = 16;
loc_8247264C:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// std r9,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.r9.u64);
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mullw r9,r11,r29
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// lfd f13,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// srawi r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r5,4
	ctx.r6.s64 = ctx.r5.s64 + 4;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r5)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x824726ac
	if (!ctx.cr6.gt) goto loc_824726AC;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x824726b8
	goto loc_824726B8;
loc_824726AC:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x824726b8
	if (!ctx.cr6.lt) goto loc_824726B8;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_824726B8:
	// rlwinm r9,r8,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// lwzx r8,r9,r25
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r25.u32);
	// mullw r7,r8,r7
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// srawi r9,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 8;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// bge cr6,0x824726d4
	if (!ctx.cr6.lt) goto loc_824726D4;
	// li r9,16
	ctx.r9.s64 = 16;
loc_824726D4:
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// addi r5,r6,4
	ctx.r5.s64 = ctx.r6.s64 + 4;
	// std r8,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.r8.u64);
	// lfd f13,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// bdnz 0x824725e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824725E0;
loc_824726F8:
	// cmplwi cr6,r4,7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 7, ctx.xer);
	// bge cr6,0x82472540
	if (!ctx.cr6.lt) goto loc_82472540;
loc_82472700:
	// subf r3,r23,r5
	ctx.r3.u64 = ctx.r5.u64 - r23.u64;
	// b 0x822d4ec4
	return;
loc_82472708:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_8247AA28) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8247aad8
	if (!ctx.cr6.gt) goto loc_8247AAD8;
	// addic. r5,r5,8
	ctx.xer.ca = ctx.r5.u32 > 4294967287;
	ctx.r5.s64 = ctx.r5.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8247aad8
	if (ctx.cr0.eq) goto loc_8247AAD8;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r30.s32, ctx.xer);
	// blt cr6,0x8247aad8
	if (ctx.cr6.lt) goto loc_8247AAD8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8247a968
	ctx.lr = 0x8247AA64;
	sub_8247A968(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247aad8
	if (ctx.cr6.eq) goto loc_8247AAD8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r3,r30
	ctx.r9.u64 = ctx.r3.u64 + r30.u64;
	// rldicr r8,r9,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
loc_8247AA7C:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwsync 
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrldi r10,r7,33
	ctx.r10.u64 = ctx.r7.u64 & 0x7FFFFFFF;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_8247AA9C:
	// mfmsr r5
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r5.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r6,0,r31
	ea = r31.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r6.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r6,r11
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8247aac0
	if (!ctx.cr6.eq) goto loc_8247AAC0;
	// stdcx. r4,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8247aa9c
	if (!ctx.cr0.eq) goto loc_8247AA9C;
	// b 0x8247aac8
	goto loc_8247AAC8;
loc_8247AAC0:
	// stdcx. r6,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8247AAC8:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpd cr6,r6,r11
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8247aa7c
	if (!ctx.cr6.eq) goto loc_8247AA7C;
	// b 0x8247aadc
	goto loc_8247AADC;
loc_8247AAD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247AADC:
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

DEFINE_REX_FUNC(sub_8247DD98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8247DDA0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8247de2c
	if (!ctx.cr6.eq) goto loc_8247DE2C;
	// lwz r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8247de08
	if (!ctx.cr6.eq) goto loc_8247DE08;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822dba28
	ctx.lr = 0x8247DDD8;
	sub_822DBA28(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8247ddec
	if (!ctx.cr0.eq) goto loc_8247DDEC;
loc_8247DDE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8247de30
	goto loc_8247DE30;
loc_8247DDEC:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822d4fa0
	ctx.lr = 0x8247DE04;
	sub_822D4FA0(ctx, base);
	// b 0x8247de20
	goto loc_8247DE20;
loc_8247DE08:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x822e20c8
	ctx.lr = 0x8247DE14;
	sub_822E20C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8247dde4
	if (ctx.cr0.eq) goto loc_8247DDE4;
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_8247DE20:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8247DE2C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8247DE30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82483060) {
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
	ctx.lr = 0x82483068;
	// stwu r1,-2624(r1)
	ea = -2624 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1312(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 1312);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,3788(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3788);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r3,2644(r1)
	REX_STORE_U32(ctx.r1.u32 + 2644, ctx.r3.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// beq cr6,0x824830b8
	if (ctx.cr6.eq) goto loc_824830B8;
	// lwz r11,3792(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824830b8
	if (ctx.cr6.eq) goto loc_824830B8;
	// lwz r11,3796(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3796);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824830b8
	if (ctx.cr6.eq) goto loc_824830B8;
	// lwz r11,3088(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3088);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824830c4
	if (!ctx.cr6.eq) goto loc_824830C4;
loc_824830B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2624
	ctx.r1.s64 = ctx.r1.s64 + 2624;
	// b 0x822d4ea0
	return;
loc_824830C4:
	// lwz r9,22264(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 22264);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r9.u32);
	// lwz r8,22276(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 22276);
	// stw r8,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r8.u32);
	// lwz r7,616(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 616);
	// stw r7,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r7.u32);
	// lwz r6,428(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 428);
	// stw r6,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r6.u32);
	// lwz r5,1164(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1164);
	// stw r5,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r5.u32);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// sth r10,16(r30)
	REX_STORE_U16(r30.u32 + 16, ctx.r10.u16);
	// sth r10,18(r30)
	REX_STORE_U16(r30.u32 + 18, ctx.r10.u16);
	// lhz r8,50(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 50);
	// lhz r9,74(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 74);
	// lhz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 52);
	// rlwinm r11,r4,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r7,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// ble cr6,0x82483e08
	if (!ctx.cr6.gt) goto loc_82483E08;
	// b 0x82483148
	goto loc_82483148;
loc_82483140:
	// lwz r3,2644(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2644);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82483148:
	// sth r10,18(r30)
	REX_STORE_U16(r30.u32 + 18, ctx.r10.u16);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// stw r9,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// lwz r8,21940(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 21940);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82483188
	if (ctx.cr6.eq) goto loc_82483188;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,1304(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1304);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82483188
	if (ctx.cr6.eq) goto loc_82483188;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82483188:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82483da8
	if (!ctx.cr6.gt) goto loc_82483DA8;
loc_82483198:
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r8,r9,8
	ctx.r8.s64 = ctx.r9.s64 + 8;
	// lwz r27,128(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r11,r10,29
	ctx.r11.u64 = ctx.r10.u32 & 0x7;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// ld r22,0(r9)
	r22.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// addi r7,r11,588
	ctx.r7.s64 = ctx.r11.s64 + 588;
	// addi r6,r10,596
	ctx.r6.s64 = ctx.r10.s64 + 596;
	// rldicl r5,r22,3,61
	ctx.r5.u64 = __builtin_rotateleft64(r22.u64, 3) & 0x7;
	// rldicl r4,r22,10,54
	ctx.r4.u64 = __builtin_rotateleft64(r22.u64, 10) & 0x3FF;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwimi r5,r4,0,30,31
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x3) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFFC);
	// li r11,2
	ctx.r11.s64 = 2;
	// clrlwi r14,r5,29
	r14.u64 = ctx.r5.u32 & 0x7;
	// lhzx r9,r3,r31
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + r31.u32);
	// rlwinm r6,r27,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r10,r31
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + r31.u32);
	// add r19,r14,r31
	r19.u64 = r14.u64 + r31.u64;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// stb r14,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r14.u8);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r10,r7,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r9,r31,472
	ctx.r9.s64 = r31.s64 + 472;
	// lbz r28,1751(r19)
	r28.u64 = REX_LOAD_U8(r19.u32 + 1751);
	// add r29,r6,r27
	r29.u64 = ctx.r6.u64 + r27.u64;
	// rlwinm r7,r5,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
loc_82483210:
	// clrlwi r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82483260
	if (ctx.cr6.eq) goto loc_82483260;
	// lwz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,-8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -8);
	// lwz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r3,8(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r8,r4
	ctx.r5.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// dcbt r10,r11
	// add r4,r10,r27
	ctx.r4.u64 = ctx.r10.u64 + r27.u64;
	// dcbt r4,r11
	// add r3,r10,r6
	ctx.r3.u64 = ctx.r10.u64 + ctx.r6.u64;
	// dcbt r3,r11
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + r29.u64;
	// dcbt r4,r11
	// dcbt r7,r5
	// dcbt r7,r8
loc_82483260:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r28,r28,31,1,31
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
	// bdnz 0x82483210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82483210;
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r11,r31,1784
	ctx.r11.s64 = r31.s64 + 1784;
	// lwz r9,1784(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1784);
	// rlwinm r21,r10,2,0,29
	r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r21,r9
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x82483d38
	if (ctx.cr6.eq) goto loc_82483D38;
	// lwz r10,1788(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1788);
	// rldicl r9,r22,17,47
	ctx.r9.u64 = __builtin_rotateleft64(r22.u64, 17) & 0x1FFFF;
	// lbz r8,30(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 30);
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// clrlwi r20,r9,31
	r20.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwzx r24,r21,r10
	r24.u64 = REX_LOAD_U32(r21.u32 + ctx.r10.u32);
	// beq cr6,0x824832b8
	if (ctx.cr6.eq) goto loc_824832B8;
	// rlwinm r11,r11,0,17,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// rlwinm r10,r24,0,17,15
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// rlwinm r25,r11,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r10,1,0,30
	r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_824832B8:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,2188(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 2188);
	// lwz r10,1596(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1596);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lhz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// beq cr6,0x82483338
	if (ctx.cr6.eq) goto loc_82483338;
	// addi r7,r11,255
	ctx.r7.s64 = ctx.r11.s64 + 255;
	// subf r11,r8,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r6,r10,255
	ctx.r6.s64 = ctx.r10.s64 + 255;
	// addi r5,r9,255
	ctx.r5.s64 = ctx.r9.s64 + 255;
	// srawi r4,r7,9
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1FF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 9;
	// addi r3,r11,255
	ctx.r3.s64 = ctx.r11.s64 + 255;
	// srawi r11,r6,9
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 9;
	// srawi r10,r5,9
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1FF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 9;
	// srawi r9,r3,9
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1FF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 9;
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r8,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r7,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r7.u16);
	// sth r6,90(r1)
	REX_STORE_U16(ctx.r1.u32 + 90, ctx.r6.u16);
	// sth r5,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r5.u16);
	// b 0x8248336c
	goto loc_8248336C;
loc_82483338:
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// subf r11,r8,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r6,r10,128
	ctx.r6.s64 = ctx.r10.s64 + 128;
	// addi r5,r9,128
	ctx.r5.s64 = ctx.r9.s64 + 128;
	// srawi r4,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 8;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// srawi r11,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 8;
	// sth r4,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r4.u16);
	// srawi r10,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 8;
	// srawi r9,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 8;
	// sth r11,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// sth r10,90(r1)
	REX_STORE_U16(ctx.r1.u32 + 90, ctx.r10.u16);
	// sth r9,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r9.u16);
loc_8248336C:
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r28,16(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r27,1764(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 1764);
	// rlwinm r10,r5,1,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x10000;
	// lwz r26,1776(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 1776);
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r10,r27
	ctx.r10.u64 = r27.u64 - ctx.r10.u64;
	// subf r9,r11,r26
	ctx.r9.u64 = r26.u64 - ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r8,r5,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r5.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r6,r7,0,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r6,r6,0,16,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824833c4
	if (ctx.cr6.eq) goto loc_824833C4;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82384f18
	ctx.lr = 0x824833C0;
	sub_82384F18(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_824833C4:
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// rlwinm r10,r5,1,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x10000;
	// subf r9,r11,r26
	ctx.r9.u64 = r26.u64 - ctx.r11.u64;
	// subf r10,r10,r27
	ctx.r10.u64 = r27.u64 - ctx.r10.u64;
	// subf r8,r5,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r5.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r6,r7,0,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r6,r6,0,16,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82483410
	if (ctx.cr6.eq) goto loc_82483410;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82384f18
	ctx.lr = 0x82483410;
	sub_82384F18(ctx, base);
loc_82483410:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r14,1
	ctx.cr6.compare<uint32_t>(r14.u32, 1, ctx.xer);
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r28,r31,1784
	r28.s64 = r31.s64 + 1784;
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r25.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r24,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r24.u32);
	// lwz r9,1784(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1784);
	// stwx r29,r21,r9
	REX_STORE_U32(r21.u32 + ctx.r9.u32, r29.u32);
	// lwz r8,1788(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1788);
	// stwx r3,r21,r8
	REX_STORE_U32(r21.u32 + ctx.r8.u32, ctx.r3.u32);
	// beq cr6,0x824837ac
	if (ctx.cr6.eq) goto loc_824837AC;
	// subfic r23,r14,5
	ctx.xer.ca = r14.u32 <= 5;
	r23.u64 = static_cast<uint64_t>(5) - r14.u64;
	// cmplwi cr6,r14,2
	ctx.cr6.compare<uint32_t>(r14.u32, 2, ctx.xer);
	// beq cr6,0x82483458
	if (ctx.cr6.eq) goto loc_82483458;
	// stw r25,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r25.u32);
	// stw r24,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r24.u32);
	// b 0x82483460
	goto loc_82483460;
loc_82483458:
	// stw r25,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r25.u32);
	// stw r24,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r24.u32);
loc_82483460:
	// lwz r25,96(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r29,r1,136
	r29.s64 = ctx.r1.s64 + 136;
	// subfic r27,r31,-1784
	ctx.xer.ca = r31.u32 <= 4294965512;
	r27.u64 = static_cast<uint64_t>(-1784) - r31.u64;
	// li r26,2
	r26.s64 = 2;
loc_82483470:
	// clrlwi r11,r23,31
	ctx.r11.u64 = r23.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82483798
	if (ctx.cr6.eq) goto loc_82483798;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// stw r10,1780(r31)
	REX_STORE_U32(r31.u32 + 1780, ctx.r10.u32);
	// beq cr6,0x82483544
	if (ctx.cr6.eq) goto loc_82483544;
	// lhz r11,18(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 18);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82483728
	if (ctx.cr6.eq) goto loc_82483728;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x82483728
	if (ctx.cr6.eq) goto loc_82483728;
	// lwz r10,2192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2192);
	// rlwinm r9,r11,1,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x10000;
	// lwz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addi r7,r4,439
	ctx.r7.s64 = ctx.r4.s64 + 439;
	// addi r6,r4,442
	ctx.r6.s64 = ctx.r4.s64 + 442;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r6,r4,31
	ctx.r6.u64 = ctx.r4.u32 & 0x1;
	// subfic r10,r6,5
	ctx.xer.ca = ctx.r6.u32 <= 5;
	ctx.r10.u64 = static_cast<uint64_t>(5) - ctx.r6.u64;
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// lwzx r7,r7,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + r31.u32);
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// subf r9,r9,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r9.u64;
	// subf r6,r11,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r5,r10,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// or r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r9,r10,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r9,r9,0,16,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82483728
	if (ctx.cr6.eq) goto loc_82483728;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8248353c
	if (!ctx.cr6.eq) goto loc_8248353C;
	// lwz r10,1168(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1168);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x8248353c
	if (!ctx.cr6.eq) goto loc_8248353C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a36b8
	ctx.lr = 0x82483538;
	sub_824A36B8(ctx, base);
	// b 0x82483728
	goto loc_82483728;
loc_8248353C:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x8248371c
	goto loc_8248371C;
loc_82483544:
	// lhz r11,18(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 18);
	// lhz r9,50(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 50);
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// neg r6,r8
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// srawi r5,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// subfc r4,r11,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r11.u32;
	ctx.r4.u64 = ctx.r8.u64 - ctx.r11.u64;
	// eqv r3,r11,r8
	ctx.r3.u64 = ~(ctx.r11.u64 ^ ctx.r8.u64);
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// rlwinm r9,r3,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r4,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r4.s64 = temp.s64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r4,1,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x2;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwzx r9,r6,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,-4(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// xor r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// and r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 & ctx.r5.u64;
	// rlwinm r8,r4,0,17,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4000;
	// rlwinm r3,r11,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// xor r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// rlwinm r5,r10,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r7,0,17,17
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4000;
	// xor r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// rlwinm r7,r4,0,17,17
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4000;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add. r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x824835e8
	if (!ctx.cr0.gt) goto loc_824835E8;
	// cmpwi cr6,r8,16384
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16384, ctx.xer);
	// bne cr6,0x82483710
	if (!ctx.cr6.eq) goto loc_82483710;
	// cmplwi cr6,r9,16384
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16384, ctx.xer);
	// bne cr6,0x824836f0
	if (!ctx.cr6.eq) goto loc_824836F0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_824835E8:
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r4,2192(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 2192);
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r24,16(r30)
	r24.u64 = REX_LOAD_U32(r30.u32 + 16);
	// subf r6,r9,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r18,r10,16,0,15
	r18.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r3,r11,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r17,r9,16,0,15
	r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// xor r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// xor r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// subf r16,r3,r18
	r16.u64 = r18.u64 - ctx.r3.u64;
	// subf r5,r17,r18
	ctx.r5.u64 = r18.u64 - r17.u64;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// subf r6,r17,r3
	ctx.r6.u64 = ctx.r3.u64 - r17.u64;
	// srawi r7,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 31;
	// xor r16,r16,r5
	r16.u64 = r16.u64 ^ ctx.r5.u64;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// xor r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// nor r8,r8,r7
	ctx.r8.u64 = ~(ctx.r8.u64 | ctx.r7.u64);
	// and r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 & ctx.r9.u64;
	// srawi r6,r16,31
	ctx.xer.ca = (r16.s32 < 0) & ((r16.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = r16.s32 >> 31;
	// srawi r5,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 31;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// nor r9,r6,r5
	ctx.r9.u64 = ~(ctx.r6.u64 | ctx.r5.u64);
	// and r7,r6,r18
	ctx.r7.u64 = ctx.r6.u64 & r18.u64;
	// and r8,r5,r17
	ctx.r8.u64 = ctx.r5.u64 & r17.u64;
	// or r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 | ctx.r7.u64;
	// and r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 & ctx.r3.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// or r10,r5,r3
	ctx.r10.u64 = ctx.r5.u64 | ctx.r3.u64;
	// srawi r11,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 16;
	// addi r9,r4,439
	ctx.r9.s64 = ctx.r4.s64 + 439;
	// addi r8,r4,442
	ctx.r8.s64 = ctx.r4.s64 + 442;
	// rlwinm r7,r11,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r6,r10,16,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// or r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 | ctx.r7.u64;
	// clrlwi r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	// rlwinm r8,r3,1,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x10000;
	// lwzx r7,r5,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// subfic r11,r9,5
	ctx.xer.ca = ctx.r9.u32 <= 5;
	ctx.r11.u64 = static_cast<uint64_t>(5) - ctx.r9.u64;
	// lwzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// subf r10,r8,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r8.u64;
	// slw r11,r24,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r11.u8 & 0x3F));
	// subf r5,r3,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r3.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r7,r8,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r7,r7,0,16,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82483728
	if (ctx.cr6.eq) goto loc_82483728;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82483718
	if (!ctx.cr6.eq) goto loc_82483718;
	// lwz r11,1168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1168);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82483718
	if (!ctx.cr6.eq) goto loc_82483718;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a36b8
	ctx.lr = 0x824836EC;
	sub_824A36B8(ctx, base);
	// b 0x82483728
	goto loc_82483728;
loc_824836F0:
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bne cr6,0x82483700
	if (!ctx.cr6.eq) goto loc_82483700;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x824835e8
	goto loc_824835E8;
loc_82483700:
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// bne cr6,0x824835e8
	if (!ctx.cr6.eq) goto loc_824835E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x824835e8
	goto loc_824835E8;
loc_82483710:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82483728
	goto loc_82483728;
loc_82483718:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8248371C:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82384f18
	ctx.lr = 0x82483728;
	sub_82384F18(ctx, base);
loc_82483728:
	// clrlwi r11,r20,24
	ctx.r11.u64 = r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82483780
	if (!ctx.cr6.eq) goto loc_82483780;
	// lhz r10,2(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 2);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// lhz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U16(r29.u32 + 0);
	// srawi r6,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 16;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lhz r11,62(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 62);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lhz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 64);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lhz r5,66(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 66);
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lhz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 68);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// and r8,r3,r5
	ctx.r8.u64 = ctx.r3.u64 & ctx.r5.u64;
	// and r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 & ctx.r4.u64;
	// subf r3,r11,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r6,r10,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r10.u64;
	// rlwimi r3,r6,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
loc_82483780:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// stwx r3,r11,r28
	REX_STORE_U32(ctx.r11.u32 + r28.u32, ctx.r3.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stwx r3,r21,r10
	REX_STORE_U32(r21.u32 + ctx.r10.u32, ctx.r3.u32);
loc_82483798:
	// srawi r23,r23,1
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x1) != 0);
	r23.s64 = r23.s32 >> 1;
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x82483470
	if (!ctx.cr0.eq) goto loc_82483470;
	// b 0x824837bc
	goto loc_824837BC;
loc_824837AC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_824837BC:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r9,388(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 388);
	// addi r11,r31,1724
	ctx.r11.s64 = r31.s64 + 1724;
	// stw r10,2180(r31)
	REX_STORE_U32(r31.u32 + 2180, ctx.r10.u32);
	// rldicl r8,r22,8,56
	ctx.r8.u64 = __builtin_rotateleft64(r22.u64, 8) & 0xFF;
	// stw r11,700(r31)
	REX_STORE_U32(r31.u32 + 700, ctx.r11.u32);
	// addi r7,r1,1312
	ctx.r7.s64 = ctx.r1.s64 + 1312;
	// clrlwi r11,r8,26
	ctx.r11.u64 = ctx.r8.u32 & 0x3F;
	// rldicl r6,r22,16,48
	ctx.r6.u64 = __builtin_rotateleft64(r22.u64, 16) & 0xFFFF;
	// stw r7,2184(r31)
	REX_STORE_U32(r31.u32 + 2184, ctx.r7.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r16,r22
	r16.u64 = r22.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r15,r6,26
	r15.u64 = ctx.r6.u32 & 0x3F;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r21,r31,1748
	r21.s64 = r31.s64 + 1748;
	// add r17,r11,r9
	r17.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r24,r31,464
	r24.s64 = r31.s64 + 464;
	// subfic r20,r31,-464
	ctx.xer.ca = r31.u32 <= 4294966832;
	r20.u64 = static_cast<uint64_t>(-464) - r31.u64;
	// lbz r18,1751(r19)
	r18.u64 = REX_LOAD_U8(r19.u32 + 1751);
	// li r19,2
	r19.s64 = 2;
loc_82483810:
	// clrlwi r11,r18,31
	ctx.r11.u64 = r18.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82483ae8
	if (ctx.cr6.eq) goto loc_82483AE8;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r22,r20,r24
	r22.u64 = r20.u64 + r24.u64;
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r8,1756(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1756);
	// lwz r7,1768(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r3,r22,r10
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + ctx.r10.u32);
	// subf r6,r11,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r11.u64;
	// rlwinm r5,r3,1,15,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x10000;
	// subf r4,r3,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r3.u64;
	// subf r10,r5,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r5.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// or r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 | ctx.r11.u64;
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r10,r10,0,16,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82483898
	if (ctx.cr6.eq) goto loc_82483898;
	// lwz r11,1168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1168);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82483884
	if (!ctx.cr6.eq) goto loc_82483884;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a36b8
	ctx.lr = 0x82483880;
	sub_824A36B8(ctx, base);
	// b 0x82483898
	goto loc_82483898;
loc_82483884:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82384f18
	ctx.lr = 0x82483898;
	sub_82384F18(ctx, base);
loc_82483898:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// srawi r26,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	r26.s64 = ctx.r3.s32 >> 16;
	// lwz r23,1716(r24)
	r23.u64 = REX_LOAD_U32(r24.u32 + 1716);
	// extsh r25,r3
	r25.s64 = ctx.r3.s16;
	// lbz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82483958
	if (ctx.cr6.eq) goto loc_82483958;
	// lhz r4,90(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 90);
	// srawi r7,r26,2
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x3) != 0);
	ctx.r7.s64 = r26.s32 >> 2;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mullw r9,r7,r4
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// srawi r10,r25,2
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x3) != 0);
	ctx.r10.s64 = r25.s32 >> 2;
	// clrlwi r29,r25,30
	r29.u64 = r25.u32 & 0x3;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r28,r26,30
	r28.u64 = r26.u32 & 0x3;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bne cr6,0x8248393c
	if (!ctx.cr6.eq) goto loc_8248393C;
	// addi r11,r29,44
	ctx.r11.s64 = r29.s64 + 44;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82483910;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82483958
	if (ctx.cr6.eq) goto loc_82483958;
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r8,35(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 35);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lhz r4,90(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 90);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823af0a0
	ctx.lr = 0x82483938;
	sub_823AF0A0(ctx, base);
	// b 0x82483958
	goto loc_82483958;
loc_8248393C:
	// addi r11,r29,48
	ctx.r11.s64 = r29.s64 + 48;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82483958;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82483958:
	// lwz r7,1172(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1172);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82483980
	if (ctx.cr6.eq) goto loc_82483980;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r11,r22,r11
	ctx.r11.u64 = r22.u64 + ctx.r11.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// b 0x82483988
	goto loc_82483988;
loc_82483980:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_82483988:
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// lbz r8,31(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 31);
	// clrlwi r6,r10,30
	ctx.r6.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lbzx r9,r9,r21
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + r21.u32);
	// lbzx r8,r6,r21
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + r21.u32);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r10,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 1;
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// beq cr6,0x824839e4
	if (ctx.cr6.eq) goto loc_824839E4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// ble cr6,0x824839c8
	if (!ctx.cr6.gt) goto loc_824839C8;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// b 0x824839cc
	goto loc_824839CC;
loc_824839C8:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_824839CC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// ble cr6,0x824839e0
	if (!ctx.cr6.gt) goto loc_824839E0;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// b 0x824839e4
	goto loc_824839E4;
loc_824839E0:
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_824839E4:
	// sth r10,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r10.u16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sth r11,92(r1)
	REX_STORE_U16(ctx.r1.u32 + 92, ctx.r11.u16);
	// beq cr6,0x82483a54
	if (ctx.cr6.eq) goto loc_82483A54;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,2196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2196);
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,2200(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 2200);
	// rlwinm r7,r4,1,15,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x10000;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r5,r10,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r7,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r7.u64;
	// subf r3,r5,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r5.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r7,r8,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r7,r7,0,16,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82483a4c
	if (ctx.cr6.eq) goto loc_82483A4C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a3798
	ctx.lr = 0x82483A48;
	sub_824A3798(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82483A4C:
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// b 0x82483a58
	goto loc_82483A58;
loc_82483A54:
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_82483A58:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lhz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 92);
	// srawi r10,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 16;
	// lwz r7,12(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 12);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// srawi r6,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 2;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// addi r29,r23,768
	r29.s64 = r23.s64 + 768;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r28,r8,r7
	r28.u64 = ctx.r8.u64 + ctx.r7.u64;
	// beq cr6,0x82483ae8
	if (ctx.cr6.eq) goto loc_82483AE8;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// addi r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 + 48;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// rlwinm r27,r10,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwzx r9,r27,r31
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + r31.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82483AC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r8,r27,r31
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,16(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 16);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r29,16
	ctx.r5.s64 = r29.s64 + 16;
	// lhz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 92);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82483AE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82483AE8:
	// srawi r18,r18,1
	ctx.xer.ca = (r18.s32 < 0) & ((r18.u32 & 0x1) != 0);
	r18.s64 = r18.s32 >> 1;
	// addic. r19,r19,-1
	ctx.xer.ca = r19.u32 > 0;
	r19.s64 = r19.s64 + -1;
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// bne 0x82483810
	if (!ctx.cr0.eq) goto loc_82483810;
	// lbz r25,80(r1)
	r25.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// li r28,0
	r28.s64 = 0;
loc_82483B00:
	// srawi r27,r28,2
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3) != 0);
	r27.s64 = r28.s32 >> 2;
	// addi r11,r28,140
	ctx.r11.s64 = r28.s64 + 140;
	// addi r10,r27,2
	ctx.r10.s64 = r27.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r7,r15,31
	ctx.r7.u64 = r15.u32 & 0x1;
	// rldicl r6,r16,20,44
	ctx.r6.u64 = __builtin_rotateleft64(r16.u64, 20) & 0xFFFFF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwzx r9,r9,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// clrlwi r11,r6,29
	ctx.r11.u64 = ctx.r6.u32 & 0x7;
	// lwzx r10,r8,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + r30.u32);
	// add r26,r10,r9
	r26.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq cr6,0x82483cc4
	if (ctx.cr6.eq) goto loc_82483CC4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82483c10
	if (!ctx.cr6.eq) goto loc_82483C10;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// addi r5,r31,168
	ctx.r5.s64 = r31.s64 + 168;
	// lwz r4,444(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 444);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r17)
	ctx.r7.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwz r6,4(r17)
	ctx.r6.u64 = REX_LOAD_U32(r17.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r29,40(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r3,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// dcbzl r0,r29
	ea = (r29.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x82483b90
	if (ctx.cr6.lt) goto loc_82483B90;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235f5b0
	ctx.lr = 0x82483B88;
	sub_8235F5B0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x82483bf0
	goto loc_82483BF0;
loc_82483B90:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82483bec
	if (!ctx.cr6.gt) goto loc_82483BEC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82483B9C:
	// lhz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r3,26
	ctx.r8.u64 = ctx.r3.u32 & 0x3F;
	// rlwinm r24,r3,24,8,31
	r24.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r24,r7
	ctx.r8.s64 = int64_t(r24.s32) * int64_t(ctx.r7.s32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r3,r3,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r3,r3
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// lbzx r24,r10,r4
	r24.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r3,r3,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r3.u64;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// lbzx r23,r24,r5
	r23.u64 = REX_LOAD_U8(r24.u32 + ctx.r5.u32);
	// rotlwi r24,r24,1
	r24.u64 = __builtin_rotateleft32(r24.u32, 1);
	// or r9,r23,r9
	ctx.r9.u64 = r23.u64 | ctx.r9.u64;
	// sthx r8,r24,r29
	REX_STORE_U16(r24.u32 + r29.u32, ctx.r8.u16);
	// bdnz 0x82483b9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82483B9C;
loc_82483BEC:
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
loc_82483BF0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bne cr6,0x82483c08
	if (!ctx.cr6.eq) goto loc_82483C08;
	// bl 0x823756c8
	ctx.lr = 0x82483C04;
	sub_823756C8(ctx, base);
	// b 0x82483c54
	goto loc_82483C54;
loc_82483C08:
	// bl 0x824a5c10
	ctx.lr = 0x82483C0C;
	sub_824A5C10(ctx, base);
	// b 0x82483c54
	goto loc_82483C54;
loc_82483C10:
	// rldicl r10,r16,24,40
	ctx.r10.u64 = __builtin_rotateleft64(r16.u64, 24) & 0xFFFFFF;
	// lwz r7,36(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 36);
	// rlwinm r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// clrlwi r5,r10,28
	ctx.r5.u64 = ctx.r10.u32 & 0xF;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// add r9,r5,r31
	ctx.r9.u64 = ctx.r5.u64 + r31.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
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
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82483C54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82483C54:
	// clrlwi r14,r25,24
	r14.u64 = r25.u32 & 0xFF;
	// lwz r10,700(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 700);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// cmplwi cr6,r14,2
	ctx.cr6.compare<uint32_t>(r14.u32, 2, ctx.xer);
	// bgt cr6,0x82483c8c
	if (ctx.cr6.gt) goto loc_82483C8C;
	// addi r11,r27,45
	ctx.r11.s64 = r27.s64 + 45;
	// lwz r5,2184(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 2184);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,2180(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 2180);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r8,r10,r28
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + r28.u32);
	// lhzx r7,r9,r31
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + r31.u32);
	// bl 0x82484030
	ctx.lr = 0x82483C88;
	sub_82484030(ctx, base);
	// b 0x82483d24
	goto loc_82483D24;
loc_82483C8C:
	// neg r11,r14
	ctx.r11.s64 = static_cast<int64_t>(-r14.u64);
	// lbzx r6,r10,r28
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + r28.u32);
	// addi r9,r27,45
	ctx.r9.s64 = r27.s64 + 45;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r11,545
	ctx.r7.s64 = ctx.r11.s64 + 545;
	// rotlwi r10,r6,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lhzx r6,r8,r31
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + r31.u32);
	// lwzx r11,r4,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + r31.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x824ac2d0
	ctx.lr = 0x82483CC0;
	sub_824AC2D0(ctx, base);
	// b 0x82483d24
	goto loc_82483D24;
loc_82483CC4:
	// lwz r10,700(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 700);
	// cmplwi cr6,r14,2
	ctx.cr6.compare<uint32_t>(r14.u32, 2, ctx.xer);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bgt cr6,0x82483cf4
	if (ctx.cr6.gt) goto loc_82483CF4;
	// addi r11,r27,45
	ctx.r11.s64 = r27.s64 + 45;
	// lwz r5,2184(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 2184);
	// lwz r4,2180(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 2180);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r6,r10,r28
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + r28.u32);
	// lhzx r7,r9,r31
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + r31.u32);
	// bl 0x82483f20
	ctx.lr = 0x82483CF0;
	sub_82483F20(ctx, base);
	// b 0x82483d24
	goto loc_82483D24;
loc_82483CF4:
	// neg r11,r14
	ctx.r11.s64 = static_cast<int64_t>(-r14.u64);
	// lbzx r6,r10,r28
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + r28.u32);
	// addi r9,r27,45
	ctx.r9.s64 = r27.s64 + 45;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r11,545
	ctx.r7.s64 = ctx.r11.s64 + 545;
	// rotlwi r10,r6,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r5,r8,r31
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + r31.u32);
	// lwzx r11,r4,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + r31.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x824ac210
	ctx.lr = 0x82483D24;
	sub_824AC210(ctx, base);
loc_82483D24:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// rlwinm r15,r15,31,25,31
	r15.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 31) & 0x7F;
	// rldicr r16,r16,8,55
	r16.u64 = __builtin_rotateleft64(r16.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(r28.s32, 6, ctx.xer);
	// blt cr6,0x82483b00
	if (ctx.cr6.lt) goto loc_82483B00;
loc_82483D38:
	// lhz r10,18(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 18);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// addi r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 1;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// clrlwi r4,r7,16
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFF;
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r7,132(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r5,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r5.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// stw r9,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// sth r4,18(r30)
	REX_STORE_U16(r30.u32 + 18, ctx.r4.u16);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// blt cr6,0x82483198
	if (ctx.cr6.lt) goto loc_82483198;
loc_82483DA8:
	// lhz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U16(r30.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r8,2
	ctx.r4.s64 = ctx.r8.s64 + 2;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// sth r4,16(r30)
	REX_STORE_U16(r30.u32 + 16, ctx.r4.u16);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r6,120(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 1;
	// lwz r4,144(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// add r3,r9,r6
	ctx.r3.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// stw r5,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// stw r3,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// lhz r11,50(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 50);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// blt cr6,0x82483140
	if (ctx.cr6.lt) goto loc_82483140;
loc_82483E08:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2624
	ctx.r1.s64 = ctx.r1.s64 + 2624;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_824B93B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x824B93B8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 52);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lhz r10,50(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r31,r11,31,1,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r30,1320(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1320);
	// rlwinm r28,r10,31,1,31
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mullw r11,r28,r31
	ctx.r11.s64 = int64_t(r28.s32) * int64_t(r31.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x822d5870
	ctx.lr = 0x824B93F0;
	sub_822D5870(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824b94d0
	if (ctx.cr6.eq) goto loc_824B94D0;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r10,r30,-6
	ctx.r10.s64 = r30.s64 + -6;
	// addi r11,r29,-24
	ctx.r11.s64 = r29.s64 + -24;
	// addi r9,r9,-22912
	ctx.r9.s64 = ctx.r9.s64 + -22912;
loc_824B9408:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824b94c8
	if (ctx.cr6.eq) goto loc_824B94C8;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
loc_824B9414:
	// lbz r6,33(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// addi r7,r9,-56
	ctx.r7.s64 = ctx.r9.s64 + -56;
	// lbz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// addi r5,r9,-56
	ctx.r5.s64 = ctx.r9.s64 + -56;
	// rotlwi r8,r6,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// lbz r6,35(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 35);
	// lbz r3,34(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 34);
	// or r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 | ctx.r4.u64;
	// rotlwi r6,r6,3
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// addi r4,r9,-16
	ctx.r4.s64 = ctx.r9.s64 + -16;
	// or r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 | ctx.r3.u64;
	// addi r6,r9,-16
	ctx.r6.s64 = ctx.r9.s64 + -16;
	// lbzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// stb r8,6(r10)
	REX_STORE_U8(ctx.r10.u32 + 6, ctx.r8.u8);
	// lbzx r7,r3,r5
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r5.u32);
	// stb r7,7(r10)
	REX_STORE_U8(ctx.r10.u32 + 7, ctx.r7.u8);
	// lbz r30,34(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 34);
	// lbz r3,33(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// lbz r8,35(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 35);
	// lbz r7,6(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r5,32(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// rlwinm r5,r5,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r30,r30,1,23,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0x1FC;
	// rlwinm r8,r8,1,23,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1FC;
	// rlwinm r3,r3,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// or r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 | r30.u64;
	// or r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 | ctx.r3.u64;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// lbzx r5,r5,r4
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r4.u32);
	// stb r5,8(r10)
	REX_STORE_U8(ctx.r10.u32 + 8, ctx.r5.u8);
	// lbzx r4,r3,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r6.u32);
	// stb r4,9(r10)
	REX_STORE_U8(ctx.r10.u32 + 9, ctx.r4.u8);
	// lbz r8,36(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 36);
	// lbzx r6,r8,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// stb r6,10(r10)
	REX_STORE_U8(ctx.r10.u32 + 10, ctx.r6.u8);
	// lbz r5,37(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 37);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lbzx r3,r5,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// stb r3,11(r10)
	REX_STORE_U8(ctx.r10.u32 + 11, ctx.r3.u8);
	// lhzu r8,24(r11)
	ea = 24 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// rotlwi r8,r8,7
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 7);
	// or r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 | ctx.r7.u64;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// stbu r6,6(r10)
	ea = 6 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x824b9414
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B9414;
loc_824B94C8:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x824b9408
	if (!ctx.cr0.eq) goto loc_824B9408;
loc_824B94D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_824D1780) {
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
	// addi r11,r31,8080
	ctx.r11.s64 = r31.s64 + 8080;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823d7748
	ctx.lr = 0x824D17A0;
	sub_823D7748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21588
	ctx.r11.s64 = ctx.r11.s64 + 21588;
	// stw r11,8080(r31)
	REX_STORE_U32(r31.u32 + 8080, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D19C0) {
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
	// addi r11,r31,8440
	ctx.r11.s64 = r31.s64 + 8440;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823d7748
	ctx.lr = 0x824D19E0;
	sub_823D7748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21660
	ctx.r11.s64 = ctx.r11.s64 + 21660;
	// stw r11,8440(r31)
	REX_STORE_U32(r31.u32 + 8440, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D1C00) {
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
	// addi r11,r31,8804
	ctx.r11.s64 = r31.s64 + 8804;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823d7748
	ctx.lr = 0x824D1C20;
	sub_823D7748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21732
	ctx.r11.s64 = ctx.r11.s64 + 21732;
	// stw r11,8804(r31)
	REX_STORE_U32(r31.u32 + 8804, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D1DF0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r9,r11,-27032
	ctx.r9.s64 = ctx.r11.s64 + -27032;
	// addi r11,r10,-23064
	ctx.r11.s64 = ctx.r10.s64 + -23064;
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

DEFINE_REX_FUNC(sub_824D1FA8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r9,r11,-26800
	ctx.r9.s64 = ctx.r11.s64 + -26800;
	// addi r11,r10,-22492
	ctx.r11.s64 = ctx.r10.s64 + -22492;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lwz r10,20(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D21B8) {
	REX_FUNC_PROLOGUE();
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-20352
	ctx.r11.s64 = ctx.r11.s64 + -20352;
	// lis r5,512
	ctx.r5.s64 = 33554432;
	// lwz r9,-29316(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -29316);
	// lis r4,512
	ctx.r4.s64 = 33554432;
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r5,r5,214
	ctx.r5.u64 = ctx.r5.u64 | 214;
	// ori r4,r4,215
	ctx.r4.u64 = ctx.r4.u64 | 215;
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

DEFINE_REX_FUNC(sub_824D2DC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-18040
	ctx.r11.s64 = ctx.r11.s64 + -18040;
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// addi r9,r9,11136
	ctx.r9.s64 = ctx.r9.s64 + 11136;
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

DEFINE_REX_FUNC(sub_824D3BB8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,25908
	ctx.r3.s64 = ctx.r11.s64 + 25908;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3CC8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,26596
	ctx.r3.s64 = ctx.r11.s64 + 26596;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3E30) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,30084
	ctx.r3.s64 = ctx.r11.s64 + 30084;
	// b 0x8227ac70
	sub_8227AC70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3FB0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20002cb
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4110) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010133
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4280) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100ef
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4400) {
	REX_FUNC_PROLOGUE();
	// .long 0x201011b
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4580) {
	REX_FUNC_PROLOGUE();
	// .long 0x201006c
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4700) {
	REX_FUNC_PROLOGUE();
	// .long 0x201009a
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4880) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000022
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4A00) {
	REX_FUNC_PROLOGUE();
	// .long 0x201014f
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4B80) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100d5
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

