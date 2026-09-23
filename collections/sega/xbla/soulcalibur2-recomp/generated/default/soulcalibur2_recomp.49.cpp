#include "soulcalibur2_funcs.49.h"

DEFINE_REX_FUNC(sub_820E2028) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f0,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f1
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f11,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfs f8,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f9,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f13,f8,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmadds f12,f9,f0,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfs f12,-16(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmadds f13,f7,f0,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f10.f64)));
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fmadds f0,f6,f0,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E8650) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x820e8668
	if (!ctx.cr6.eq) goto loc_820E8668;
	// stw r5,632(r3)
	REX_STORE_U32(ctx.r3.u32 + 632, ctx.r5.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,636(r3)
	REX_STORE_U32(ctx.r3.u32 + 636, ctx.r11.u32);
	// b 0x820e8674
	goto loc_820E8674;
loc_820E8668:
	// stw r5,636(r3)
	REX_STORE_U32(ctx.r3.u32 + 636, ctx.r5.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,632(r3)
	REX_STORE_U32(ctx.r3.u32 + 632, ctx.r11.u32);
loc_820E8674:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,596(r3)
	REX_STORE_U32(ctx.r3.u32 + 596, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820EB9C0) {
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
	ctx.lr = 0x820EB9C8;
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820eb9ec
	if (!ctx.cr6.eq) goto loc_820EB9EC;
	// bl 0x820eb8c8
	ctx.lr = 0x820EB9EC;
	sub_820EB8C8(ctx, base);
loc_820EB9EC:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ebbe4
	if (ctx.cr6.eq) goto loc_820EBBE4;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r28,r11,432
	r28.s64 = ctx.r11.s64 + 432;
	// addi r3,r28,84
	ctx.r3.s64 = r28.s64 + 84;
	// bl 0x821d6398
	ctx.lr = 0x820EBA08;
	sub_821D6398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820eba1c
	if (!ctx.cr0.eq) goto loc_820EBA1C;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_820EBA1C:
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r11,-28232
	ctx.r3.s64 = ctx.r11.s64 + -28232;
	// lwz r11,-28232(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -28232);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EBA38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,24(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x820ebbe4
	if (ctx.cr6.eq) goto loc_820EBBE4;
	// addi r3,r28,84
	ctx.r3.s64 = r28.s64 + 84;
	// bl 0x821d6398
	ctx.lr = 0x820EBA50;
	sub_821D6398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820eba6c
	if (!ctx.cr0.eq) goto loc_820EBA6C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
loc_820EBA6C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,16648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16648);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200730
	ctx.lr = 0x820EBA7C;
	sub_82200730(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,16224(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16224);
	f31.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x820e0028
	ctx.lr = 0x820EBA90;
	sub_820E0028(ctx, base);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x820e0088
	ctx.lr = 0x820EBAA0;
	sub_820E0088(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,16620(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16644(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16644);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f11,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f13.f64)));
	// lfs f12,2392(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2392);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f1,f30,f12,f0
	ctx.f1.f64 = double(float(-std::fma(f30.f64, ctx.f12.f64, -ctx.f0.f64)));
	// bl 0x822006f8
	ctx.lr = 0x820EBACC;
	sub_822006F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822009c8
	ctx.lr = 0x820EBAD4;
	sub_822009C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16640);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820ebaf0
	if (!ctx.cr6.lt) goto loc_820EBAF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x822006f8
	ctx.lr = 0x820EBAF0;
	sub_822006F8(ctx, base);
loc_820EBAF0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822009c8
	ctx.lr = 0x820EBAF8;
	sub_822009C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16636(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16636);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x820ebb14
	if (!ctx.cr6.gt) goto loc_820EBB14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x822006f8
	ctx.lr = 0x820EBB14;
	sub_822006F8(ctx, base);
loc_820EBB14:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,16632(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16632);
	f31.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x820e0028
	ctx.lr = 0x820EBB28;
	sub_820E0028(ctx, base);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x820e0088
	ctx.lr = 0x820EBB38;
	sub_820E0088(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,2008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16172(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16172);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f30,f0,f13
	ctx.f1.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x82200818
	ctx.lr = 0x820EBB54;
	sub_82200818(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16628(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16628);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,10140(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 10140);
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lfs f0,20400(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20400);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,20396(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20396);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820ebb80
	if (ctx.cr6.lt) goto loc_820EBB80;
	// fmr f30,f0
	f30.f64 = ctx.f0.f64;
	// b 0x820ebb84
	goto loc_820EBB84;
loc_820EBB80:
	// fmr f30,f13
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f13.f64;
loc_820EBB84:
	// lwz r11,10140(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 10140);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lfs f29,20404(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20404);
	f29.f64 = double(temp.f32);
	// bl 0x82200a08
	ctx.lr = 0x820EBB9C;
	sub_82200A08(ctx, base);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 - ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,2388(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2388);
	f31.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x82200760
	ctx.lr = 0x820EBBB4;
	sub_82200760(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82200a10
	ctx.lr = 0x820EBBBC;
	sub_82200A10(ctx, base);
	// fsubs f0,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 - ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x82200770
	ctx.lr = 0x820EBBCC;
	sub_82200770(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82200a18
	ctx.lr = 0x820EBBD4;
	sub_82200A18(ctx, base);
	// fsubs f0,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f29.f64 - ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x82200780
	ctx.lr = 0x820EBBE4;
	sub_82200780(ctx, base);
loc_820EBBE4:
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

DEFINE_REX_FUNC(sub_820FBC60) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r30,0
	r30.s64 = 0;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// addi r11,r10,-27144
	ctx.r11.s64 = ctx.r10.s64 + -27144;
	// stw r30,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// mulli r10,r9,9504
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(9504));
	// stw r30,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r30.u32);
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r9,2084(r31)
	REX_STORE_U32(r31.u32 + 2084, ctx.r9.u32);
	// lbz r11,174(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 174);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820fbcb4
	if (ctx.cr0.eq) goto loc_820FBCB4;
	// stw r9,6396(r31)
	REX_STORE_U32(r31.u32 + 6396, ctx.r9.u32);
loc_820FBCB4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820fbb18
	ctx.lr = 0x820FBCBC;
	sub_820FBB18(ctx, base);
	// stw r30,2084(r31)
	REX_STORE_U32(r31.u32 + 2084, r30.u32);
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

DEFINE_REX_FUNC(sub_820FCFC8) {
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
	// blt cr6,0x820fd094
	if (ctx.cr6.lt) goto loc_820FD094;
	// beq cr6,0x820fd02c
	if (ctx.cr6.eq) goto loc_820FD02C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x820fd0e8
	if (!ctx.cr6.lt) goto loc_820FD0E8;
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FD00C;
	sub_820F8D58(ctx, base);
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x820f8db8
	ctx.lr = 0x820FD01C;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fd0e8
	if (!ctx.cr0.eq) goto loc_820FD0E8;
loc_820FD024:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820fd0e4
	goto loc_820FD0E4;
loc_820FD02C:
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FD040;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne 0x820fd05c
	if (!ctx.cr0.eq) goto loc_820FD05C;
	// bl 0x820f8d58
	ctx.lr = 0x820FD058;
	sub_820F8D58(ctx, base);
	// b 0x820fd068
	goto loc_820FD068;
loc_820FD05C:
	// bl 0x820f8d58
	ctx.lr = 0x820FD060;
	sub_820F8D58(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_820FD068:
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FD078;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820fd0e8
	if (ctx.cr0.eq) goto loc_820FD0E8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FD090;
	sub_820F8D58(ctx, base);
	// b 0x820fd024
	goto loc_820FD024;
loc_820FD094:
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FD0A8;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fd0d0
	if (!ctx.cr0.eq) goto loc_820FD0D0;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r11,586(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 586);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820fd0d0
	if (ctx.cr0.eq) goto loc_820FD0D0;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FD0CC;
	sub_820F8D58(ctx, base);
	// b 0x820fd0e8
	goto loc_820FD0E8;
loc_820FD0D0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FD0E0;
	sub_820F8D58(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FD0E4:
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_820FD0E8:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lbz r11,176(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 176);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fd128
	if (!ctx.cr0.eq) goto loc_820FD128;
	// lbz r11,177(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 177);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fd128
	if (!ctx.cr0.eq) goto loc_820FD128;
	// lbz r11,178(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 178);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fd128
	if (!ctx.cr0.eq) goto loc_820FD128;
	// lbz r11,179(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 179);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fd128
	if (!ctx.cr0.eq) goto loc_820FD128;
	// lbz r11,180(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 180);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820fd144
	if (ctx.cr0.eq) goto loc_820FD144;
loc_820FD128:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lhz r11,588(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 588);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820fd144
	if (ctx.cr6.eq) goto loc_820FD144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x820f8d58
	ctx.lr = 0x820FD144;
	sub_820F8D58(ctx, base);
loc_820FD144:
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

DEFINE_REX_FUNC(sub_821065B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// mulli r9,r4,80
	ctx.r9.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(80));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 21, ctx.xer);
	// bge cr6,0x821065d4
	if (!ctx.cr6.lt) goto loc_821065D4;
	// lis r8,-32173
	ctx.r8.s64 = -2108489728;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r8,-4224
	ctx.r10.s64 = ctx.r8.s64 + -4224;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_821065D4:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r7,92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r6,124(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// stfs f2,4(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lfs f0,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stfs f4,48(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f5,52(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stfs f6,64(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stb r5,74(r11)
	REX_STORE_U8(ctx.r11.u32 + 74, ctx.r5.u8);
	// stfs f7,68(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stb r8,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, ctx.r8.u8);
	// stfs f8,56(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// sth r9,72(r11)
	REX_STORE_U16(ctx.r11.u32 + 72, ctx.r9.u16);
	// stb r7,75(r11)
	REX_STORE_U8(ctx.r11.u32 + 75, ctx.r7.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82107A58) {
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
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,529(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 529);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82107ad0
	if (!ctx.cr6.eq) goto loc_82107AD0;
	// bl 0x82106650
	ctx.lr = 0x82107A80;
	sub_82106650(ctx, base);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,30
	ctx.r11.s64 = 30;
	// addi r31,r10,22960
	r31.s64 = ctx.r10.s64 + 22960;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x82106c48
	ctx.lr = 0x82107A9C;
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
	ctx.lr = 0x82107AB0;
	sub_82100C80(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r11,432
	ctx.r9.s64 = ctx.r11.s64 + 432;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,216(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 216);
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// lwz r11,216(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 216);
	// stb r8,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
loc_82107AD0:
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

DEFINE_REX_FUNC(sub_8210DE80) {
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
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8210DEA0:
	// lwz r8,120(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 120);
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r7,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r9,80(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,152(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,80
	ctx.r9.s64 = ctx.r9.s64 + 80;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8210dea0
	if (ctx.cr6.lt) goto loc_8210DEA0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210EDF8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// b 0x8210e1f8
	sub_8210E1F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8210EE28) {
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
	ctx.lr = 0x8210EE48;
	sub_821FF668(ctx, base);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,23880(r10)
	REX_STORE_U8(ctx.r10.u32 + 23880, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210FFC0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lbz r3,23882(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 23882);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210FFD0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lbz r3,23881(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 23881);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821102A8) {
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
	// lwz r31,-32480(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x821afce8
	ctx.lr = 0x821102C4;
	sub_821AFCE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82110324
	if (!ctx.cr0.eq) goto loc_82110324;
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// blt cr6,0x8211031c
	if (ctx.cr6.lt) goto loc_8211031C;
	// beq cr6,0x82110310
	if (ctx.cr6.eq) goto loc_82110310;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82110304
	if (ctx.cr6.lt) goto loc_82110304;
	// bne cr6,0x82110324
	if (!ctx.cr6.eq) goto loc_82110324;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,23882(r10)
	REX_STORE_U8(ctx.r10.u32 + 23882, ctx.r11.u8);
	// b 0x82110324
	goto loc_82110324;
loc_82110304:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8210fd28
	ctx.lr = 0x8211030C;
	sub_8210FD28(ctx, base);
	// b 0x82110324
	goto loc_82110324;
loc_82110310:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8210ffe0
	ctx.lr = 0x82110318;
	sub_8210FFE0(ctx, base);
	// b 0x82110324
	goto loc_82110324;
loc_8211031C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8210fbe0
	ctx.lr = 0x82110324;
	sub_8210FBE0(ctx, base);
loc_82110324:
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

DEFINE_REX_FUNC(sub_82111850) {
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
	ctx.lr = 0x82111858;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x822d4f30
	ctx.lr = 0x82111860;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82110640
	ctx.lr = 0x8211186C;
	sub_82110640(ctx, base);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,136
	ctx.r3.u64 = ctx.r3.u64 | 136;
	// bl 0x82101d88
	ctx.lr = 0x82111884;
	sub_82101D88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821107c0
	ctx.lr = 0x8211188C;
	sub_821107C0(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r23,-32480(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x821109f0
	ctx.lr = 0x8211189C;
	sub_821109F0(ctx, base);
	// lha r10,138(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 138));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82111c40
	if (!ctx.cr0.eq) goto loc_82111C40;
	// lha r7,134(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 134));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82110c90
	ctx.lr = 0x821118B8;
	sub_82110C90(ctx, base);
	// lha r8,128(r31)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(r31.u32 + 128));
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x82110d08
	ctx.lr = 0x821118CC;
	sub_82110D08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r7.s32, ctx.xer);
	// lfs f26,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f26.f64 = double(temp.f32);
	// bne cr6,0x821118e8
	if (!ctx.cr6.eq) goto loc_821118E8;
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x821118f4
	if (ctx.cr6.eq) goto loc_821118F4;
loc_821118E8:
	// li r3,25
	ctx.r3.s64 = 25;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f26.f64;
	// bl 0x8212bc38
	ctx.lr = 0x821118F4;
	sub_8212BC38(ctx, base);
loc_821118F4:
	// extsh r11,r29
	ctx.r11.s64 = r29.s16;
	// extsh r9,r30
	ctx.r9.s64 = r30.s16;
	// sth r11,128(r31)
	REX_STORE_U16(r31.u32 + 128, ctx.r11.u16);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r9,134(r31)
	REX_STORE_U16(r31.u32 + 134, ctx.r9.u16);
	// mr. r24,r9
	r24.u64 = ctx.r9.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r21,1
	r21.s64 = 1;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// lha r22,148(r9)
	r22.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + 148));
	// bne 0x82111924
	if (!ctx.cr0.eq) goto loc_82111924;
	// mr r24,r21
	r24.u64 = r21.u64;
loc_82111924:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lha r8,130(r31)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(r31.u32 + 130));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f28,1992(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	f28.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f29,19792(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 19792);
	f29.f64 = double(temp.f32);
	// li r25,0
	r25.s64 = 0;
	// lfs f30,28280(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 28280);
	f30.f64 = double(temp.f32);
	// li r26,12
	r26.s64 = 12;
	// lfs f27,29444(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 29444);
	f27.f64 = double(temp.f32);
	// addi r27,r9,29428
	r27.s64 = ctx.r9.s64 + 29428;
	// lfs f31,29440(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 29440);
	f31.f64 = double(temp.f32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82111a10
	if (!ctx.cr6.lt) goto loc_82111A10;
	// sth r11,130(r31)
	REX_STORE_U16(r31.u32 + 130, ctx.r11.u16);
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// addi r28,r31,96
	r28.s64 = r31.s64 + 96;
loc_82111978:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfs f29,136(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f28,140(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,779
	ctx.r4.s64 = 779;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// fmadds f0,f0,f27,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f27.f64, f30.f64)));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stb r26,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, r26.u8);
	// bl 0x821f7d50
	ctx.lr = 0x821119C8;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821119f8
	if (ctx.cr0.eq) goto loc_821119F8;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lha r10,130(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 130));
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + r29.u64;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + r30.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lha r4,148(r11)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 148));
	// bl 0x82110fb8
	ctx.lr = 0x821119F4;
	sub_82110FB8(ctx, base);
	// b 0x821119fc
	goto loc_821119FC;
loc_821119F8:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_821119FC:
	// addi r29,r29,3840
	r29.s64 = r29.s64 + 3840;
	// stwu r3,4(r28)
	ea = 4 + r28.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r28.u32 = ea;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r29,23040
	ctx.cr6.compare<int32_t>(r29.s32, 23040, ctx.xer);
	// blt cr6,0x82111978
	if (ctx.cr6.lt) goto loc_82111978;
loc_82111A10:
	// lha r10,130(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 130));
	// lha r11,128(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 128));
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82111ad0
	if (ctx.cr6.lt) goto loc_82111AD0;
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// sth r11,130(r31)
	REX_STORE_U16(r31.u32 + 130, ctx.r11.u16);
	// addi r28,r31,96
	r28.s64 = r31.s64 + 96;
loc_82111A38:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfs f29,152(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f28,156(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,779
	ctx.r4.s64 = 779;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// fmadds f0,f0,f27,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f27.f64, f30.f64)));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stb r26,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, r26.u8);
	// bl 0x821f7d50
	ctx.lr = 0x82111A88;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82111ab8
	if (ctx.cr0.eq) goto loc_82111AB8;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lha r10,130(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 130));
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + r29.u64;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + r30.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lha r4,148(r11)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 148));
	// bl 0x82110fb8
	ctx.lr = 0x82111AB4;
	sub_82110FB8(ctx, base);
	// b 0x82111abc
	goto loc_82111ABC;
loc_82111AB8:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_82111ABC:
	// addi r29,r29,3840
	r29.s64 = r29.s64 + 3840;
	// stwu r3,4(r28)
	ea = 4 + r28.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r28.u32 = ea;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r29,23040
	ctx.cr6.compare<int32_t>(r29.s32, 23040, ctx.xer);
	// blt cr6,0x82111a38
	if (ctx.cr6.lt) goto loc_82111A38;
loc_82111AD0:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r30,r25
	r30.u64 = r25.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82111b04
	if (ctx.cr0.eq) goto loc_82111B04;
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82111B04:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm. r10,r30,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,16228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16228);
	f31.f64 = double(temp.f32);
	// beq 0x82111ba0
	if (ctx.cr0.eq) goto loc_82111BA0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x821dcf68
	ctx.lr = 0x82111B20;
	sub_821DCF68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82111b30
	if (!ctx.cr0.eq) goto loc_82111B30;
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82111b98
	goto loc_82111B98;
loc_82111B30:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f7,f31
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// sth r21,138(r31)
	REX_STORE_U16(r31.u32 + 138, r21.u16);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r21,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r21.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f6,16264(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,29468(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 29468);
	ctx.f5.f64 = double(temp.f32);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,3
	ctx.r10.s64 = 3;
	// lfs f4,29472(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 29472);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lfs f3,16200(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16200);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,29460(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 29460);
	ctx.f2.f64 = double(temp.f32);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// lfs f1,29464(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 29464);
	ctx.f1.f64 = double(temp.f32);
	// sth r10,126(r31)
	REX_STORE_U16(r31.u32 + 126, ctx.r10.u16);
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// bl 0x82104548
	ctx.lr = 0x82111B90;
	sub_82104548(ctx, base);
	// stw r3,332(r31)
	REX_STORE_U32(r31.u32 + 332, ctx.r3.u32);
	// li r3,26
	ctx.r3.s64 = 26;
loc_82111B98:
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f26.f64;
	// bl 0x8212bc38
	ctx.lr = 0x82111BA0;
	sub_8212BC38(ctx, base);
loc_82111BA0:
	// andi. r11,r30,16416
	ctx.r11.u64 = r30.u64 & 16416;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82111bc4
	if (ctx.cr0.eq) goto loc_82111BC4;
	// li r3,27
	ctx.r3.s64 = 27;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f26.f64;
	// bl 0x8212bc38
	ctx.lr = 0x82111BB8;
	sub_8212BC38(ctx, base);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// stb r21,23952(r10)
	REX_STORE_U8(ctx.r10.u32 + 23952, r21.u8);
loc_82111BC4:
	// lha r7,134(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 134));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r7,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lha r11,128(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 128));
	// lfs f13,29360(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 29360);
	ctx.f13.f64 = double(temp.f32);
	// lha r9,130(r31)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r31.u32 + 130));
	// lfs f12,29480(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 29480);
	ctx.f12.f64 = double(temp.f32);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r6,344(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 344);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f11,112(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f11,29476(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 29476);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f9,f0
	ctx.f9.f64 = double(float(ctx.f0.f64));
	// lfs f0,26552(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26552);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 88, temp.u32);
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// fmadds f13,f9,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f12.f64)));
	// fmadds f0,f0,f27,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f27.f64, ctx.f11.f64)));
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - f31.f64));
	// stfs f13,80(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 80, temp.u32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// stfs f0,84(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 84, temp.u32);
	// b 0x82111c7c
	goto loc_82111C7C;
loc_82111C40:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// bne 0x82111c7c
	if (!ctx.cr0.eq) goto loc_82111C7C;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82111c6c
	if (!ctx.cr6.eq) goto loc_82111C6C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82110b68
	ctx.lr = 0x82111C60;
	sub_82110B68(ctx, base);
	// li r11,90
	ctx.r11.s64 = 90;
	// stw r3,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r3.u32);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
loc_82111C6C:
	// lhz r11,126(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 126);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,138(r31)
	REX_STORE_U16(r31.u32 + 138, ctx.r10.u16);
	// sth r11,124(r31)
	REX_STORE_U16(r31.u32 + 124, ctx.r11.u16);
loc_82111C7C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x822d4f7c
	ctx.lr = 0x82111C88;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_82120CE0) {
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
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x8211f870
	ctx.lr = 0x82120CFC;
	sub_8211F870(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82121BC0) {
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82121c00
	if (ctx.cr6.eq) goto loc_82121C00;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lhz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// addi r10,r10,-8304
	ctx.r10.s64 = ctx.r10.s64 + -8304;
	// rotlwi r4,r11,6
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 6);
	// lwz r3,496(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 496);
	// bl 0x82190670
	ctx.lr = 0x82121C00;
	sub_82190670(ctx, base);
loc_82121C00:
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// lwz r11,29816(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 29816);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,29816(r10)
	REX_STORE_U32(ctx.r10.u32 + 29816, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821232C0) {
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r30,-32170
	r30.s64 = -2108293120;
	// addi r10,r11,30520
	ctx.r10.s64 = ctx.r11.s64 + 30520;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,29816(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 29816);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bge cr6,0x82123384
	if (!ctx.cr6.lt) goto loc_82123384;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// addi r6,r8,-30216
	ctx.r6.s64 = ctx.r8.s64 + -30216;
	// addi r9,r11,7104
	ctx.r9.s64 = ctx.r11.s64 + 7104;
	// addi r8,r10,6712
	ctx.r8.s64 = ctx.r10.s64 + 6712;
	// addi r7,r7,6160
	ctx.r7.s64 = ctx.r7.s64 + 6160;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,137
	ctx.r4.s64 = 137;
	// bl 0x821f7d50
	ctx.lr = 0x82123328;
	sub_821F7D50(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82123340
	if (ctx.cr0.eq) goto loc_82123340;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,31764
	ctx.r10.s64 = ctx.r10.s64 + 31764;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82123344
	goto loc_82123344;
loc_82123340:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82123344:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82123384
	if (ctx.cr6.eq) goto loc_82123384;
	// lwz r10,29816(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 29816);
	// addi r9,r11,80
	ctx.r9.s64 = ctx.r11.s64 + 80;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// stw r10,29816(r30)
	REX_STORE_U32(r30.u32 + 29816, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,128(r11)
	REX_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,132(r11)
	REX_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,136(r11)
	REX_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stfs f31,180(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// stw r10,140(r11)
	REX_STORE_U32(ctx.r11.u32 + 140, ctx.r10.u32);
loc_82123384:
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

DEFINE_REX_FUNC(sub_82125480) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,-27136
	ctx.r11.s64 = ctx.r11.s64 + -27136;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r11,r11,2952
	ctx.r11.s64 = ctx.r11.s64 + 2952;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r3,-10(r1)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + -10);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82125E10) {
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
	ctx.lr = 0x82125E18;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r10,10140(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 10140);
	// lfs f13,10488(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 10488);
	ctx.f13.f64 = double(temp.f32);
	// extsb r28,r11
	r28.s64 = ctx.r11.s8;
	// rlwinm r11,r10,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r4
	r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lfs f0,-30124(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -30124);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r10,r28,32
	ctx.r10.s64 = r28.s64 + 32;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f12,21424(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 21424);
	ctx.f12.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f11,388(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 388);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfsx f12,r10,r3
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// lfs f12,21168(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 21168);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,260(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 260, temp.u32);
	// lfs f2,20212(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20212);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20204(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20204);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82125860
	ctx.lr = 0x82125E94;
	sub_82125860(ctx, base);
	// addi r11,r28,76
	ctx.r11.s64 = r28.s64 + 76;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,20208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20208);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,21
	ctx.r4.s64 = 21;
	// stfsx f0,r11,r29
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + r29.u32, temp.u32);
	// bl 0x8211f870
	ctx.lr = 0x82125EBC;
	sub_8211F870(ctx, base);
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r28,2
	ctx.r10.s64 = r28.s64 + 2;
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x820e1ba8
	ctx.lr = 0x82125EDC;
	sub_820E1BA8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// bl 0x8211f870
	ctx.lr = 0x82125F14;
	sub_8211F870(ctx, base);
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x820e1ba8
	ctx.lr = 0x82125F24;
	sub_820E1BA8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r8,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r8.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8212AEA0) {
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
	// li r5,288
	ctx.r5.s64 = 288;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822d5870
	ctx.lr = 0x8212AEC0;
	sub_822D5870(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,32056
	ctx.r11.s64 = ctx.r11.s64 + 32056;
	// addi r9,r10,-29192
	ctx.r9.s64 = ctx.r10.s64 + -29192;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r5,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r5.u32);
	// lhz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 4);
	// sth r8,188(r31)
	REX_STORE_U16(r31.u32 + 188, ctx.r8.u16);
	// lwz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r8,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r8.u32);
	// lhz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// sth r8,204(r31)
	REX_STORE_U16(r31.u32 + 204, ctx.r8.u16);
	// lwz r10,-29192(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -29192);
	// stw r10,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r10.u32);
	// lhz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 4);
	// sth r10,276(r31)
	REX_STORE_U16(r31.u32 + 276, ctx.r10.u16);
	// stb r11,232(r31)
	REX_STORE_U8(r31.u32 + 232, ctx.r11.u8);
	// stb r11,233(r31)
	REX_STORE_U8(r31.u32 + 233, ctx.r11.u8);
	// stb r6,235(r31)
	REX_STORE_U8(r31.u32 + 235, ctx.r6.u8);
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

DEFINE_REX_FUNC(sub_8212C610) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,43
	ctx.r4.s64 = 43;
	// bl 0x8211f870
	ctx.lr = 0x8212C62C;
	sub_8211F870(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821e7948
	ctx.lr = 0x8212C638;
	sub_821E7948(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8212c660
	if (ctx.cr6.lt) goto loc_8212C660;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,15632(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15632);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8212c660
	if (ctx.cr6.gt) goto loc_8212C660;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8212C660:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,28664(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28664);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,16380(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16380);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-8496(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -8496);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r3,86(r1)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212FBF8) {
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
	// addi r11,r11,-25200
	ctx.r11.s64 = ctx.r11.s64 + -25200;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x8212FC24;
	sub_821E2FD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8212fc34
	if (ctx.cr0.eq) goto loc_8212FC34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x8212FC34;
	sub_822C80A8(ctx, base);
loc_8212FC34:
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

DEFINE_REX_FUNC(sub_82130038) {
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
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82130058
	if (ctx.cr6.eq) goto loc_82130058;
	// bl 0x82102738
	ctx.lr = 0x82130058;
	sub_82102738(ctx, base);
loc_82130058:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x821300a0
	if (ctx.cr6.eq) goto loc_821300A0;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r9,r11,25520
	ctx.r9.s64 = ctx.r11.s64 + 25520;
	// lis r8,-32175
	ctx.r8.s64 = -2108620800;
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r6,r10,25328
	ctx.r6.s64 = ctx.r10.s64 + 25328;
	// addi r8,r8,25136
	ctx.r8.s64 = ctx.r8.s64 + 25136;
	// stw r11,120(r9)
	REX_STORE_U32(ctx.r9.u32 + 120, ctx.r11.u32);
	// addi r7,r7,23912
	ctx.r7.s64 = ctx.r7.s64 + 23912;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,120(r6)
	REX_STORE_U32(ctx.r6.u32 + 120, ctx.r10.u32);
	// stw r9,120(r8)
	REX_STORE_U32(ctx.r8.u32 + 120, ctx.r9.u32);
	// stw r11,72(r7)
	REX_STORE_U32(ctx.r7.u32 + 72, ctx.r11.u32);
loc_821300A0:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82106460
	ctx.lr = 0x821300C8;
	sub_82106460(ctx, base);
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

DEFINE_REX_FUNC(sub_82132488) {
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r31,r11,23912
	r31.s64 = ctx.r11.s64 + 23912;
	// lwz r3,160(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 160);
	// bl 0x82101d68
	ctx.lr = 0x821324A8;
	sub_82101D68(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// blt cr6,0x8213251c
	if (ctx.cr6.lt) goto loc_8213251C;
	// cmpwi cr6,r11,260
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 260, ctx.xer);
	// ble cr6,0x821324ec
	if (!ctx.cr6.gt) goto loc_821324EC;
	// cmpwi cr6,r11,261
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 261, ctx.xer);
	// bne cr6,0x8213251c
	if (!ctx.cr6.eq) goto loc_8213251C;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// addi r8,r11,25520
	ctx.r8.s64 = ctx.r11.s64 + 25520;
	// addi r7,r10,25328
	ctx.r7.s64 = ctx.r10.s64 + 25328;
	// addi r6,r9,25136
	ctx.r6.s64 = ctx.r9.s64 + 25136;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,4
	ctx.r9.s64 = 4;
	// b 0x82132510
	goto loc_82132510;
loc_821324EC:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// addi r8,r11,25520
	ctx.r8.s64 = ctx.r11.s64 + 25520;
	// addi r7,r10,25328
	ctx.r7.s64 = ctx.r10.s64 + 25328;
	// addi r6,r9,25136
	ctx.r6.s64 = ctx.r9.s64 + 25136;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,6
	ctx.r9.s64 = 6;
loc_82132510:
	// stw r9,120(r6)
	REX_STORE_U32(ctx.r6.u32 + 120, ctx.r9.u32);
	// stw r10,120(r7)
	REX_STORE_U32(ctx.r7.u32 + 120, ctx.r10.u32);
	// stw r11,120(r8)
	REX_STORE_U32(ctx.r8.u32 + 120, ctx.r11.u32);
loc_8213251C:
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

DEFINE_REX_FUNC(sub_82133CC8) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x82133b28
	ctx.lr = 0x82133CDC;
	sub_82133B28(ctx, base);
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82133d20
	if (!ctx.cr6.lt) goto loc_82133D20;
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mulli r11,r11,10
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(10));
	// lwz r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
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
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82133d24
	goto loc_82133D24;
loc_82133D20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82133D24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821356E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821356E8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8213575c
	if (!ctx.cr6.gt) goto loc_8213575C;
	// cmpwi cr6,r3,33
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 33, ctx.xer);
	// bge cr6,0x8213575c
	if (!ctx.cr6.lt) goto loc_8213575C;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r11,20556(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20556);
	// lbzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8213575c
	if (ctx.cr6.eq) goto loc_8213575C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8213575c
	if (ctx.cr6.lt) goto loc_8213575C;
	// cmpwi cr6,r5,12
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 12, ctx.xer);
	// bge cr6,0x8213575c
	if (!ctx.cr6.lt) goto loc_8213575C;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bge cr6,0x8213573c
	if (!ctx.cr6.lt) goto loc_8213573C;
	// clrlwi r30,r4,31
	r30.u64 = ctx.r4.u32 & 0x1;
loc_8213573C:
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addis r3,r11,768
	ctx.r3.s64 = ctx.r11.s64 + 50331648;
	// lwz r4,344(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 344);
	// addi r3,r3,26
	ctx.r3.s64 = ctx.r3.s64 + 26;
	// b 0x821357b4
	goto loc_821357B4;
loc_8213575C:
	// cmpwi cr6,r29,30
	ctx.cr6.compare<int32_t>(r29.s32, 30, ctx.xer);
	// beq cr6,0x821357a0
	if (ctx.cr6.eq) goto loc_821357A0;
	// cmpwi cr6,r29,31
	ctx.cr6.compare<int32_t>(r29.s32, 31, ctx.xer);
	// beq cr6,0x82135794
	if (ctx.cr6.eq) goto loc_82135794;
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(r29.s32, 32, ctx.xer);
	// beq cr6,0x82135788
	if (ctx.cr6.eq) goto loc_82135788;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-24840
	ctx.r11.s64 = ctx.r11.s64 + -24840;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x821357c8
	goto loc_821357C8;
loc_82135788:
	// lis r3,768
	ctx.r3.s64 = 50331648;
	// ori r3,r3,280
	ctx.r3.u64 = ctx.r3.u64 | 280;
	// b 0x821357a8
	goto loc_821357A8;
loc_82135794:
	// lis r3,768
	ctx.r3.s64 = 50331648;
	// ori r3,r3,279
	ctx.r3.u64 = ctx.r3.u64 | 279;
	// b 0x821357a8
	goto loc_821357A8;
loc_821357A0:
	// lis r3,768
	ctx.r3.s64 = 50331648;
	// ori r3,r3,278
	ctx.r3.u64 = ctx.r3.u64 | 278;
loc_821357A8:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r4,344(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
loc_821357B4:
	// bl 0x820e68b8
	ctx.lr = 0x821357B8;
	sub_820E68B8(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821dcf68
	ctx.lr = 0x821357C8;
	sub_821DCF68(ctx, base);
loc_821357C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8213D830) {
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
	ctx.lr = 0x8213D838;
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// li r10,14
	ctx.r10.s64 = 14;
	// addi r31,r11,23912
	r31.s64 = ctx.r11.s64 + 23912;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x821379b0
	ctx.lr = 0x8213D870;
	sub_821379B0(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x8213d888
	if (!ctx.cr6.lt) goto loc_8213D888;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// b 0x8213db44
	goto loc_8213DB44;
loc_8213D888:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213d8a0
	if (!ctx.cr6.eq) goto loc_8213D8A0;
	// bl 0x821307d0
	ctx.lr = 0x8213D89C;
	sub_821307D0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_8213D8A0:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// li r27,-1
	r27.s64 = -1;
	// lfs f30,26936(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 26936);
	f30.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f5,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f5.f64 = double(temp.f32);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// lfs f4,-23980(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -23980);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,-23984(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -23984);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// lfs f1,-23988(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -23988);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821e8688
	ctx.lr = 0x8213D8DC;
	sub_821E8688(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r28,r11,432
	r28.s64 = ctx.r11.s64 + 432;
	// lwz r4,344(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x8213D8F0;
	sub_820E68B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82102840
	ctx.lr = 0x8213D8F8;
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
	ctx.lr = 0x8213D910;
	sub_821EACB0(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r29,0
	r29.s64 = 0;
	// b 0x8213d930
	goto loc_8213D930;
loc_8213D920:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8213d92c
	if (!ctx.cr6.eq) goto loc_8213D92C;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8213D92C:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_8213D930:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213d920
	if (!ctx.cr0.eq) goto loc_8213D920;
	// bl 0x820e6960
	ctx.lr = 0x8213D93C;
	sub_820E6960(ctx, base);
	// extsw r11,r29
	ctx.r11.s64 = r29.s32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfs f13,29440(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 29440);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,15632(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15632);
	f31.f64 = double(temp.f32);
	// stfs f31,20(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// fmuls f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fnmsubs f2,f12,f0,f13
	ctx.f2.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f13.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6e20
	ctx.lr = 0x8213D98C;
	sub_820E6E20(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lwz r11,1856(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1856);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213d9ac
	if (ctx.cr0.eq) goto loc_8213D9AC;
	// lis r29,-1
	r29.s64 = -65536;
	// ori r29,r29,255
	r29.u64 = r29.u64 | 255;
	// b 0x8213d9b0
	goto loc_8213D9B0;
loc_8213D9AC:
	// mr r29,r27
	r29.u64 = r27.u64;
loc_8213D9B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,-23996
	ctx.r3.s64 = ctx.r10.s64 + -23996;
	// lfd f1,26672(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 26672);
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
	ctx.lr = 0x8213D9D8;
	sub_821EACB0(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213d9ec
	if (ctx.cr6.eq) goto loc_8213D9EC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_8213D9EC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r11,26976
	r30.s64 = ctx.r11.s64 + 26976;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821eacb0
	ctx.lr = 0x8213D9FC;
	sub_821EACB0(ctx, base);
	// li r3,113
	ctx.r3.s64 = 113;
	// lwz r4,344(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x8213DA08;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f2,-24000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24000);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6e20
	ctx.lr = 0x8213DA2C;
	sub_820E6E20(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8213da40
	if (ctx.cr6.eq) goto loc_8213DA40;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_8213DA40:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821eacb0
	ctx.lr = 0x8213DA48;
	sub_821EACB0(ctx, base);
	// li r3,114
	ctx.r3.s64 = 114;
	// lwz r4,344(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x8213DA54;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f2,-24004(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24004);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6e20
	ctx.lr = 0x8213DA78;
	sub_820E6E20(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213da90
	if (!ctx.cr6.eq) goto loc_8213DA90;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f2,-24008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24008);
	ctx.f2.f64 = double(temp.f32);
	// b 0x8213da98
	goto loc_8213DA98;
loc_8213DA90:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f2,-24012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24012);
	ctx.f2.f64 = double(temp.f32);
loc_8213DA98:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// lfs f5,26840(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26840);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-24944(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24944);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,-24952(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -24952);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82102518
	ctx.lr = 0x8213DAC0;
	sub_82102518(ctx, base);
	// andi. r11,r26,32832
	ctx.r11.u64 = r26.u64 & 32832;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213daf0
	if (ctx.cr0.eq) goto loc_8213DAF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,19
	ctx.r3.s64 = 19;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x8213DADC;
	sub_8212BC38(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213db0c
	if (!ctx.cr6.eq) goto loc_8213DB0C;
	// bl 0x821d4968
	ctx.lr = 0x8213DAEC;
	sub_821D4968(ctx, base);
	// b 0x8213db44
	goto loc_8213DB44;
loc_8213DAF0:
	// andi. r11,r26,16416
	ctx.r11.u64 = r26.u64 & 16416;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213db20
	if (ctx.cr0.eq) goto loc_8213DB20;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,15
	ctx.r3.s64 = 15;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x8213DB0C;
	sub_8212BC38(ctx, base);
loc_8213DB0C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// stw r10,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// b 0x8213db44
	goto loc_8213DB44;
loc_8213DB20:
	// rlwinm. r11,r26,0,18,19
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x3000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213db44
	if (ctx.cr0.eq) goto loc_8213DB44;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,18
	ctx.r3.s64 = 18;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x8213DB38;
	sub_8212BC38(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
loc_8213DB44:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8214F1E8) {
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
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214f280
	if (ctx.cr6.eq) goto loc_8214F280;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,124(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r30,r11,13128
	r30.s64 = ctx.r11.s64 + 13128;
	// lfs f3,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f3.f64 = double(temp.f32);
	// lfs f31,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f3
	ctx.cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// bge cr6,0x8214f254
	if (!ctx.cr6.lt) goto loc_8214F254;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,1840(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1840);
	ctx.f13.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfs f12,-30112(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30112);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f13,f12,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// bl 0x82204ae0
	ctx.lr = 0x8214F24C;
	sub_82204AE0(ctx, base);
	// stfs f1,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// b 0x8214f258
	goto loc_8214F258;
loc_8214F254:
	// stfs f3,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
loc_8214F258:
	// lfs f0,140(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8214f27c
	if (!ctx.cr6.gt) goto loc_8214F27C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1840(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1840);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,26528(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26528);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f0,f13,f12,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f12.f64, -ctx.f0.f64)));
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// b 0x8214f280
	goto loc_8214F280;
loc_8214F27C:
	// stfs f31,140(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
loc_8214F280:
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

DEFINE_REX_FUNC(sub_82152458) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e78
	ctx.lr = 0x82152460;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f00
	ctx.lr = 0x82152468;
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lfs f30,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f30.f64 = double(temp.f32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// lfs f26,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f26.f64 = double(temp.f32);
	// lfs f15,2012(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2012);
	f15.f64 = double(temp.f32);
	// lfs f14,16288(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16288);
	f14.f64 = double(temp.f32);
	// bge cr6,0x82152d10
	if (!ctx.cr6.lt) goto loc_82152D10;
	// fmr f29,f26
	f29.f64 = f26.f64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821524c4
	if (!ctx.cr6.eq) goto loc_821524C4;
	// lwa r11,316(r3)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r3.u32 + 316));
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fnmsubs f0,f0,f14,f26
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, f14.f64, -f26.f64)));
	// fsel f29,f0,f0,f30
	f29.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : f30.f64;
loc_821524C4:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r29,r11,432
	r29.s64 = ctx.r11.s64 + 432;
	// addi r28,r10,13128
	r28.s64 = ctx.r10.s64 + 13128;
	// lha r11,30(r29)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r29.u32 + 30));
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8215254c
	if (ctx.cr6.eq) goto loc_8215254C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8215254c
	if (ctx.cr6.eq) goto loc_8215254C;
	// lis r3,768
	ctx.r3.s64 = 50331648;
	// lwz r4,344(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 344);
	// ori r3,r3,15
	ctx.r3.u64 = ctx.r3.u64 | 15;
	// bl 0x820e68b8
	ctx.lr = 0x821524F8;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfd f29,48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 48, f29.u64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfd f4,-17856(r11)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r11.u32 + -17856);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f2,-18584(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -18584);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r5,-17880
	ctx.r5.s64 = ctx.r5.s64 + -17880;
	// lfs f1,30172(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 30172);
	ctx.f1.f64 = double(temp.f32);
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
	// bl 0x821eaf80
	ctx.lr = 0x82152548;
	sub_821EAF80(ctx, base);
	// b 0x82152828
	goto loc_82152828;
loc_8215254C:
	// lwz r11,324(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 324);
	// lfs f0,1840(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// li r10,780
	ctx.r10.s64 = 780;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f12,120(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfs f13,27892(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 27892);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// divw r10,r11,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// mulli r10,r10,780
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(780));
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8215266c
	if (!ctx.cr6.lt) goto loc_8215266C;
	// lfs f13,2332(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2332);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8215263c
	if (!ctx.cr6.lt) goto loc_8215263C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16372(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16372);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f0,f13
	f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f31,f26
	ctx.cr6.compare(f31.f64, f26.f64);
	// blt cr6,0x821525d8
	if (ctx.cr6.lt) goto loc_821525D8;
loc_821525D4:
	// fmr f31,f26
	ctx.fpscr.disableFlushMode();
	f31.f64 = f26.f64;
loc_821525D8:
	// lis r3,768
	ctx.r3.s64 = 50331648;
	// lwz r4,344(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 344);
	// ori r3,r3,15
	ctx.r3.u64 = ctx.r3.u64 | 15;
	// bl 0x820e68b8
	ctx.lr = 0x821525E8;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f3,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(f31.f64 * f29.f64));
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfd f3,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfd f4,-17856(r11)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r11.u32 + -17856);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f1,30172(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 30172);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r5,-17880
	ctx.r5.s64 = ctx.r5.s64 + -17880;
	// lfs f2,-18584(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -18584);
	ctx.f2.f64 = double(temp.f32);
	// stfd f4,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x821eaf80
	ctx.lr = 0x82152638;
	sub_821EAF80(ctx, base);
	// b 0x82152828
	goto loc_82152828;
loc_8215263C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-17884(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -17884);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821525d4
	if (!ctx.cr6.gt) goto loc_821525D4;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16372(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16372);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f31,f13,f0,f26
	f31.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -f26.f64)));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// bgt cr6,0x821525d8
	if (ctx.cr6.gt) goto loc_821525D8;
	// fmr f31,f30
	f31.f64 = f30.f64;
	// b 0x821525d8
	goto loc_821525D8;
loc_8215266C:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,2332(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2332);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82152898
	if (!ctx.cr6.lt) goto loc_82152898;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16372(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16372);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, f26.f64);
	// blt cr6,0x82152694
	if (ctx.cr6.lt) goto loc_82152694;
loc_82152690:
	// fmr f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f26.f64;
loc_82152694:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f31,f0,f29
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f0.f64 * f29.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f31,220(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f26,160(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r3,768
	ctx.r3.s64 = 50331648;
	// stfs f26,212(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lwz r4,344(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 344);
	// lfs f0,27848(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27848);
	ctx.f0.f64 = double(temp.f32);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// lfs f13,2352(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2352);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2384(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2384);
	ctx.f12.f64 = double(temp.f32);
	// stfs f26,216(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f12,208(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// bl 0x820e68b8
	ctx.lr = 0x821526E0;
	sub_820E68B8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r3,768
	ctx.r3.s64 = 50331648;
	// lwz r4,344(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 344);
	// ori r3,r3,20
	ctx.r3.u64 = ctx.r3.u64 | 20;
	// bl 0x820e68b8
	ctx.lr = 0x821526F4;
	sub_820E68B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r3,768
	ctx.r3.s64 = 50331648;
	// lwz r4,344(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 344);
	// ori r3,r3,19
	ctx.r3.u64 = ctx.r3.u64 | 19;
	// bl 0x820e68b8
	ctx.lr = 0x82152708;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-17936
	ctx.r4.s64 = ctx.r11.s64 + -17936;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x822d55f8
	ctx.lr = 0x82152724;
	sub_822D55F8(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stfd f31,80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 80, f31.u64);
	// addi r31,r11,-7072
	r31.s64 = ctx.r11.s64 + -7072;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// ori r11,r9,23008
	ctx.r11.u64 = ctx.r9.u64 | 23008;
	// addi r30,r1,208
	r30.s64 = ctx.r1.s64 + 208;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfd f29,26664(r10)
	f29.u64 = REX_LOAD_U64(ctx.r10.u32 + 26664);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stfd f29,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f29.u64);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// stfd f29,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f29.u64);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// lhax r11,r31,r11
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + ctx.r11.u32));
	// lha r30,19314(r31)
	r30.s64 = int16_t(REX_LOAD_U16(r31.u32 + 19314));
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// lha r9,19312(r31)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r31.u32 + 19312));
	// bl 0x821eb1a0
	ctx.lr = 0x82152790;
	sub_821EB1A0(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x821527b0
	if (!ctx.cr6.gt) goto loc_821527B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,31176(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 31176);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fcmpu cr6,f3,f26
	ctx.cr6.compare(ctx.f3.f64, f26.f64);
	// blt cr6,0x821527b4
	if (ctx.cr6.lt) goto loc_821527B4;
loc_821527B0:
	// fmr f3,f26
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f26.f64;
loc_821527B4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lha r5,19314(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 19314));
	// lfs f2,-18584(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18584);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfd f29,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f29.u64);
	// ori r8,r11,23008
	ctx.r8.u64 = ctx.r11.u64 | 23008;
	// stfd f3,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// stfs f3,112(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stfd f31,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, f31.u64);
	// lfs f1,15632(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15632);
	ctx.f1.f64 = double(temp.f32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lhax r11,r31,r8
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + ctx.r8.u32));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// fmr f5,f31
	ctx.f5.f64 = f31.f64;
	// lha r9,19312(r31)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r31.u32 + 19312));
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x821eaf80
	ctx.lr = 0x82152828;
	sub_821EAF80(ctx, base);
loc_82152828:
	// lha r11,92(r25)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r25.u32 + 92));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82152840
	if (ctx.cr0.eq) goto loc_82152840;
	// lhz r10,94(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 94);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82153514
	if (!ctx.cr0.eq) goto loc_82153514;
loc_82152840:
	// lwz r10,320(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 320);
	// lfs f0,1840(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r10,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lfs f13,26528(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 26528);
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,28444(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28444);
	ctx.f3.f64 = double(temp.f32);
	// subfe r24,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	r24.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lfd f12,120(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82204ae0
	ctx.lr = 0x82152880;
	sub_82204AE0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x821528c8
	if (!ctx.cr6.eq) goto loc_821528C8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f24,-18416(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18416);
	f24.f64 = double(temp.f32);
	// b 0x821528d0
	goto loc_821528D0;
loc_82152898:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-17940(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -17940);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82152690
	if (!ctx.cr6.gt) goto loc_82152690;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16372(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16372);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f0,f13,f0,f26
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -f26.f64)));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bgt cr6,0x82152694
	if (ctx.cr6.gt) goto loc_82152694;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x82152694
	goto loc_82152694;
loc_821528C8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f24,-18420(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18420);
	f24.f64 = double(temp.f32);
loc_821528D0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f29,-17944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -17944);
	f29.f64 = double(temp.f32);
	// bl 0x821eb2c0
	ctx.lr = 0x821528E0;
	sub_821EB2C0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f31,48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 48, f31.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r9,-17980
	ctx.r3.s64 = ctx.r9.s64 + -17980;
	// lfd f28,-17952(r11)
	f28.u64 = REX_LOAD_U64(ctx.r11.u32 + -17952);
	// stfd f28,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f28.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// lfd f31,-17960(r10)
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + -17960);
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x821eacb0
	ctx.lr = 0x82152924;
	sub_821EACB0(ctx, base);
	// lha r11,30(r29)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r29.u32 + 30));
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stb r26,288(r1)
	REX_STORE_U8(ctx.r1.u32 + 288, r26.u8);
	// bne cr6,0x821529b8
	if (!ctx.cr6.eq) goto loc_821529B8;
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8215296c
	if (ctx.cr6.eq) goto loc_8215296C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82152964
	if (ctx.cr6.eq) goto loc_82152964;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8215296c
	if (ctx.cr6.eq) goto loc_8215296C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82152964
	if (ctx.cr6.eq) goto loc_82152964;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// b 0x82152970
	goto loc_82152970;
loc_82152964:
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82152970
	goto loc_82152970;
loc_8215296C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82152970:
	// lwz r11,80(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 80);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r4,344(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 344);
	// mulli r11,r11,3
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(3));
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r9,-21392
	ctx.r11.s64 = ctx.r9.s64 + -21392;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x820e68b8
	ctx.lr = 0x82152998;
	sub_820E68B8(ctx, base);
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
loc_821529A0:
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stbx r10,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x821529a0
	if (!ctx.cr0.eq) goto loc_821529A0;
	// b 0x82152ab8
	goto loc_82152AB8;
loc_821529B8:
	// lwz r10,80(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 80);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82152a30
	if (!ctx.cr6.eq) goto loc_82152A30;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82152a7c
	if (ctx.cr6.eq) goto loc_82152A7C;
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x821529f0
	if (ctx.cr6.eq) goto loc_821529F0;
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// li r10,2
	ctx.r10.s64 = 2;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x821529f4
	goto loc_821529F4;
loc_821529F0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821529F4:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r4,344(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 344);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,-21392
	ctx.r11.s64 = ctx.r10.s64 + -21392;
	// addi r11,r11,168
	ctx.r11.s64 = ctx.r11.s64 + 168;
	// lwzx r3,r9,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x820e68b8
	ctx.lr = 0x82152A10;
	sub_820E68B8(ctx, base);
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
loc_82152A18:
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stbx r10,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x82152a18
	if (!ctx.cr0.eq) goto loc_82152A18;
	// b 0x82152ab8
	goto loc_82152AB8;
loc_82152A30:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82152a7c
	if (ctx.cr6.eq) goto loc_82152A7C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,-21392
	ctx.r11.s64 = ctx.r10.s64 + -21392;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// lwzx r3,r9,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82152ab8
	if (ctx.cr6.eq) goto loc_82152AB8;
	// lwz r4,344(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82152A5C;
	sub_820E68B8(ctx, base);
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
loc_82152A64:
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stbx r10,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x82152a64
	if (!ctx.cr0.eq) goto loc_82152A64;
	// b 0x82152ab8
	goto loc_82152AB8;
loc_82152A7C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-21392
	ctx.r10.s64 = ctx.r10.s64 + -21392;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82152ab8
	if (ctx.cr6.eq) goto loc_82152AB8;
	// lwz r4,344(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82152A9C;
	sub_820E68B8(ctx, base);
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
loc_82152AA4:
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stbx r10,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x82152aa4
	if (!ctx.cr0.eq) goto loc_82152AA4;
loc_82152AB8:
	// lbz r11,288(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 288);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82152ad4
	if (!ctx.cr0.eq) goto loc_82152AD4;
	// stw r26,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, r26.u32);
	// stw r26,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, r26.u32);
	// stw r26,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r26.u32);
	// b 0x82152afc
	goto loc_82152AFC;
loc_82152AD4:
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x820e6998
	ctx.lr = 0x82152AE0;
	sub_820E6998(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bgt cr6,0x82152afc
	if (ctx.cr6.gt) goto loc_82152AFC;
	// subfic r10,r3,3
	ctx.xer.ca = ctx.r3.u32 <= 3;
	ctx.r10.u64 = static_cast<uint64_t>(3) - ctx.r3.u64;
	// addi r11,r1,236
	ctx.r11.s64 = ctx.r1.s64 + 236;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82152AF4:
	// stwu r26,-4(r11)
	ea = -4 + ctx.r11.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82152af4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82152AF4;
loc_82152AFC:
	// lwz r11,232(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// addi r31,r1,224
	r31.s64 = ctx.r1.s64 + 224;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82152b14
	if (ctx.cr6.eq) goto loc_82152B14;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f29,-17984(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -17984);
	f29.f64 = double(temp.f32);
loc_82152B14:
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f23,-8496(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -8496);
	f23.f64 = double(temp.f32);
	// lfd f25,-17992(r7)
	f25.u64 = REX_LOAD_U64(ctx.r7.u32 + -17992);
	// addi r30,r11,-18004
	r30.s64 = ctx.r11.s64 + -18004;
	// lfs f27,28724(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 28724);
	f27.f64 = double(temp.f32);
	// addi r28,r10,-18012
	r28.s64 = ctx.r10.s64 + -18012;
	// addi r27,r9,27064
	r27.s64 = ctx.r9.s64 + 27064;
loc_82152B44:
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82152c20
	if (ctx.cr6.eq) goto loc_82152C20;
	// stfd f31,48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 48, f31.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f28,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f28.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821eb1a0
	ctx.lr = 0x82152B78;
	sub_821EB1A0(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
	// fmr f1,f24
	ctx.f1.f64 = f24.f64;
	// fmr f3,f25
	ctx.f3.f64 = f25.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// bge cr6,0x82152bb8
	if (!ctx.cr6.lt) goto loc_82152BB8;
	// stfs f24,20(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// stfd f25,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f25.u64);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stfs f29,28(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x82152BB4;
	sub_821EAF80(ctx, base);
	// b 0x82152c0c
	goto loc_82152C0C;
loc_82152BB8:
	// fdivs f4,f27,f0
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(f27.f64 / ctx.f0.f64));
	// stfd f31,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, f31.u64);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f28,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, f28.u64);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// stfd f4,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f4.u64);
	// ld r10,72(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 72);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// stfd f3,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stfd f31,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, f31.u64);
	// fmr f5,f31
	ctx.f5.f64 = f31.f64;
	// fmr f6,f28
	ctx.f6.f64 = f28.f64;
	// fmr f7,f31
	ctx.f7.f64 = f31.f64;
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x821eaf80
	ctx.lr = 0x82152C0C;
	sub_821EAF80(ctx, base);
loc_82152C0C:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// fadds f29,f29,f23
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(f29.f64 + f23.f64));
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(r26.s32, 3, ctx.xer);
	// blt cr6,0x82152b44
	if (ctx.cr6.lt) goto loc_82152B44;
loc_82152C20:
	// lhz r11,30(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 30);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x82152d00
	if (!ctx.cr6.eq) goto loc_82152D00;
	// xori r11,r24,1
	ctx.r11.u64 = r24.u64 ^ 1;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,24308(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24308);
	// lwzx r10,r9,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + r25.u32);
	// lha r10,8(r10)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 8));
	// mulli r10,r10,36
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(36));
	// lhax r11,r10,r11
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82152d00
	if (!ctx.cr0.gt) goto loc_82152D00;
	// addi r10,r11,170
	ctx.r10.s64 = ctx.r11.s64 + 170;
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// lhzx r31,r10,r25
	r31.u64 = REX_LOAD_U16(ctx.r10.u32 + r25.u32);
	// bne cr6,0x82152c7c
	if (!ctx.cr6.eq) goto loc_82152C7C;
	// cmpwi cr6,r31,50
	ctx.cr6.compare<int32_t>(r31.s32, 50, ctx.xer);
	// blt cr6,0x82152c7c
	if (ctx.cr6.lt) goto loc_82152C7C;
	// li r31,-1
	r31.s64 = -1;
loc_82152C7C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge cr6,0x82152cc0
	if (!ctx.cr6.lt) goto loc_82152CC0;
	// lis r3,768
	ctx.r3.s64 = 50331648;
	// lwz r4,344(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 344);
	// ori r3,r3,588
	ctx.r3.u64 = ctx.r3.u64 | 588;
	// bl 0x820e68b8
	ctx.lr = 0x82152C94;
	sub_820E68B8(ctx, base);
	// stfs f29,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// stfs f24,20(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// addi r5,r11,-18020
	ctx.r5.s64 = ctx.r11.s64 + -18020;
	// fmr f1,f24
	ctx.f1.f64 = f24.f64;
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x821eaf80
	ctx.lr = 0x82152CBC;
	sub_821EAF80(ctx, base);
	// b 0x82152d00
	goto loc_82152D00;
loc_82152CC0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-18024
	ctx.r3.s64 = ctx.r11.s64 + -18024;
	// bl 0x821eacb0
	ctx.lr = 0x82152CCC;
	sub_821EACB0(ctx, base);
	// lis r3,768
	ctx.r3.s64 = 50331648;
	// lwz r4,344(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 344);
	// ori r3,r3,587
	ctx.r3.u64 = ctx.r3.u64 | 587;
	// bl 0x820e68b8
	ctx.lr = 0x82152CDC;
	sub_820E68B8(ctx, base);
	// stfs f24,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// stfs f29,28(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f24
	ctx.f1.f64 = f24.f64;
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x82152D00;
	sub_821EAF80(ctx, base);
loc_82152D00:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-18032
	ctx.r3.s64 = ctx.r11.s64 + -18032;
	// bl 0x821eacb0
	ctx.lr = 0x82152D0C;
	sub_821EACB0(ctx, base);
	// b 0x82153514
	goto loc_82153514;
loc_82152D10:
	// bne cr6,0x821533d0
	if (!ctx.cr6.eq) goto loc_821533D0;
	// lwz r11,316(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 316);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-17
	ctx.r11.s64 = ctx.r11.s64 + -17;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,31840(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31840);
	ctx.f0.f64 = double(temp.f32);
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f13,120(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f28,f13,f0
	f28.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f28,f26
	ctx.cr6.compare(f28.f64, f26.f64);
	// ble cr6,0x82152d48
	if (!ctx.cr6.gt) goto loc_82152D48;
	// fmr f28,f26
	f28.f64 = f26.f64;
loc_82152D48:
	// fcmpu cr6,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f28.f64, f30.f64);
	// blt cr6,0x82153514
	if (ctx.cr6.lt) goto loc_82153514;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,768
	ctx.r3.s64 = 50331648;
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,16
	ctx.r3.u64 = ctx.r3.u64 | 16;
	// lwz r4,344(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82152D68;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f28,48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 48, f28.u64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
	// lis r8,-32173
	ctx.r8.s64 = -2108489728;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f2,-18036(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18036);
	ctx.f2.f64 = double(temp.f32);
	// addi r11,r8,-4224
	ctx.r11.s64 = ctx.r8.s64 + -4224;
	// lfd f4,-17856(r10)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r10.u32 + -17856);
	// addi r5,r6,-18064
	ctx.r5.s64 = ctx.r6.s64 + -18064;
	// stfd f4,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// lfs f1,-18040(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -18040);
	ctx.f1.f64 = double(temp.f32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// addi r6,r11,112
	ctx.r6.s64 = ctx.r11.s64 + 112;
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x821eaf80
	ctx.lr = 0x82152DC0;
	sub_821EAF80(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,280(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lfs f31,2008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	f31.f64 = double(temp.f32);
	// lfs f0,1840(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmadds f1,f0,f14,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, f14.f64, ctx.f13.f64)));
	// bl 0x82204b00
	ctx.lr = 0x82152DE4;
	sub_82204B00(ctx, base);
	// stfs f1,280(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r25.u32 + 280, temp.u32);
	// bl 0x820e0028
	ctx.lr = 0x82152DEC;
	sub_820E0028(ctx, base);
	// fadds f13,f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + f26.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f4,f28
	ctx.f4.f64 = f28.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f3,f26
	ctx.f3.f64 = f26.f64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f0,16364(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16364);
	ctx.f0.f64 = double(temp.f32);
	// lfs f19,-18068(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -18068);
	f19.f64 = double(temp.f32);
	// fmr f1,f19
	ctx.f1.f64 = f19.f64;
	// fmuls f18,f13,f0
	f18.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmr f2,f18
	ctx.f2.f64 = f18.f64;
	// bl 0x822028c8
	ctx.lr = 0x82152E1C;
	sub_822028C8(ctx, base);
	// fsubs f13,f26,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f26.f64 - f28.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,17064(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17064);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f13,f15,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, f15.f64, ctx.f0.f64)));
	// bl 0x820e0028
	ctx.lr = 0x82152E30;
	sub_820E0028(ctx, base);
	// lis r3,768
	ctx.r3.s64 = 50331648;
	// lwz r4,344(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 344);
	// fadds f20,f1,f26
	ctx.fpscr.disableFlushMode();
	f20.f64 = double(float(ctx.f1.f64 + f26.f64));
	// addi r31,r1,352
	r31.s64 = ctx.r1.s64 + 352;
	// ori r3,r3,17
	ctx.r3.u64 = ctx.r3.u64 | 17;
	// bl 0x820e68b8
	ctx.lr = 0x82152E48;
	sub_820E68B8(ctx, base);
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
loc_82152E50:
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stbx r10,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x82152e50
	if (!ctx.cr0.eq) goto loc_82152E50;
	// lbz r11,352(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 352);
	// b 0x82152e7c
	goto loc_82152E7C;
loc_82152E6C:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82152e84
	if (ctx.cr0.eq) goto loc_82152E84;
	// lbzu r11,1(r31)
	ea = 1 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
loc_82152E7C:
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x82152e6c
	if (!ctx.cr6.eq) goto loc_82152E6C;
loc_82152E84:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,84(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 84);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f23,2340(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2340);
	f23.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f24,2000(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2000);
	f24.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f27,16172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	f27.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f16,31160(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 31160);
	f16.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f17,-18468(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -18468);
	f17.f64 = double(temp.f32);
	// lfs f29,16204(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16204);
	f29.f64 = double(temp.f32);
	// li r26,0
	r26.s64 = 0;
	// lfs f25,16264(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16264);
	f25.f64 = double(temp.f32);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// lfs f21,-24080(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24080);
	f21.f64 = double(temp.f32);
	// addi r29,r11,-18096
	r29.s64 = ctx.r11.s64 + -18096;
	// lfs f22,-18072(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -18072);
	f22.f64 = double(temp.f32);
	// beq cr6,0x82153110
	if (ctx.cr6.eq) goto loc_82153110;
	// lwz r11,68(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 68);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// blt cr6,0x82153110
	if (ctx.cr6.lt) goto loc_82153110;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bne cr6,0x8215305c
	if (!ctx.cr6.eq) goto loc_8215305C;
	// stb r26,0(r31)
	REX_STORE_U8(r31.u32 + 0, r26.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x822d55f8
	ctx.lr = 0x82152F14;
	sub_822D55F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x822d55f8
	ctx.lr = 0x82152F24;
	sub_822D55F8(ctx, base);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821eb1a0
	ctx.lr = 0x82152F38;
	sub_821EB1A0(ctx, base);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x821eb1a0
	ctx.lr = 0x82152F4C;
	sub_821EB1A0(ctx, base);
	// lfs f0,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82152f60
	if (!ctx.cr6.lt) goto loc_82152F60;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
loc_82152F60:
	// lhz r11,284(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 284);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82152f74
	if (!ctx.cr0.eq) goto loc_82152F74;
	// fmr f0,f17
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f17.f64;
	// b 0x82152f78
	goto loc_82152F78;
loc_82152F74:
	// fmr f0,f16
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f16.f64;
loc_82152F78:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f1,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lfs f13,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lfs f0,-24952(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24952);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f2,f13,f24,f0
	ctx.f2.f64 = double(float(std::fma(ctx.f13.f64, f24.f64, ctx.f0.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x821eaf80
	ctx.lr = 0x82152FB0;
	sub_821EAF80(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f2,f0,f23
	ctx.f2.f64 = double(float(ctx.f0.f64 - f23.f64));
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * f31.f64));
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
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// bl 0x821eaf80
	ctx.lr = 0x82152FDC;
	sub_821EAF80(ctx, base);
	// lfs f13,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lfs f12,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f24,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f24.f64, ctx.f0.f64)));
	// fadds f13,f12,f31
	ctx.f13.f64 = double(float(ctx.f12.f64 + f31.f64));
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// stfs f30,132(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,128(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f28,140(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fadds f2,f0,f27
	ctx.f2.f64 = double(float(ctx.f0.f64 + f27.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x821eaf80
	ctx.lr = 0x82153024;
	sub_821EAF80(ctx, base);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fsubs f13,f13,f23
	ctx.f13.f64 = double(float(ctx.f13.f64 - f23.f64));
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// fadds f2,f13,f27
	ctx.f2.f64 = double(float(ctx.f13.f64 + f27.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x82153058;
	sub_821EAF80(ctx, base);
	// b 0x82153110
	goto loc_82153110;
loc_8215305C:
	// bl 0x822d55f8
	ctx.lr = 0x82153060;
	sub_822D55F8(ctx, base);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x821eb1a0
	ctx.lr = 0x82153074;
	sub_821EB1A0(ctx, base);
	// lhz r11,284(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 284);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82153088
	if (!ctx.cr0.eq) goto loc_82153088;
	// fmr f0,f17
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f17.f64;
	// b 0x8215308c
	goto loc_8215308C;
loc_82153088:
	// fmr f0,f16
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f16.f64;
loc_8215308C:
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f13,f22
	ctx.f0.f64 = double(float(ctx.f13.f64 + f22.f64));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// fnmsubs f0,f0,f20,f21
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, f20.f64, -f21.f64)));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 - f25.f64));
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// fmuls f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 * f29.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x821530C8;
	sub_821EAF80(ctx, base);
	// lfs f13,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f0,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 - f25.f64));
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// stfs f30,136(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f28,140(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f30,128(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + f27.f64));
	// fmuls f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 * f29.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x82153110;
	sub_821EAF80(ctx, base);
loc_82153110:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lha r8,284(r25)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(r25.u32 + 284));
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r11,r10,-7072
	ctx.r11.s64 = ctx.r10.s64 + -7072;
	// ori r9,r9,3696
	ctx.r9.u64 = ctx.r9.u64 | 3696;
	// xori r10,r8,1
	ctx.r10.u64 = ctx.r8.u64 ^ 1;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82153514
	if (!ctx.cr0.eq) goto loc_82153514;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f28.f64;
	// fmr f3,f26
	ctx.f3.f64 = f26.f64;
	// fmr f2,f18
	ctx.f2.f64 = f18.f64;
	// fmr f1,f19
	ctx.f1.f64 = f19.f64;
	// bl 0x822028c8
	ctx.lr = 0x82153154;
	sub_822028C8(ctx, base);
	// lis r3,768
	ctx.r3.s64 = 50331648;
	// lwz r4,344(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 344);
	// ori r3,r3,25
	ctx.r3.u64 = ctx.r3.u64 | 25;
	// bl 0x820e68b8
	ctx.lr = 0x82153164;
	sub_820E68B8(ctx, base);
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
loc_8215316C:
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stbx r10,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x8215316c
	if (!ctx.cr0.eq) goto loc_8215316C;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// b 0x82153198
	goto loc_82153198;
loc_82153188:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821531a0
	if (ctx.cr0.eq) goto loc_821531A0;
	// lbzu r11,1(r31)
	ea = 1 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
loc_82153198:
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x82153188
	if (!ctx.cr6.eq) goto loc_82153188;
loc_821531A0:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bne cr6,0x82153318
	if (!ctx.cr6.eq) goto loc_82153318;
	// stb r26,0(r31)
	REX_STORE_U8(r31.u32 + 0, r26.u8);
	// bl 0x822d55f8
	ctx.lr = 0x821531C0;
	sub_822D55F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r31,1
	ctx.r5.s64 = r31.s64 + 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x822d55f8
	ctx.lr = 0x821531D0;
	sub_822D55F8(ctx, base);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x821eb1a0
	ctx.lr = 0x821531E4;
	sub_821EB1A0(ctx, base);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x821eb1a0
	ctx.lr = 0x821531F8;
	sub_821EB1A0(ctx, base);
	// lfs f0,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8215320c
	if (!ctx.cr6.lt) goto loc_8215320C;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
loc_8215320C:
	// lhz r11,284(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 284);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82153220
	if (ctx.cr0.eq) goto loc_82153220;
	// fmr f13,f17
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f17.f64;
	// b 0x82153224
	goto loc_82153224;
loc_82153220:
	// fmr f13,f16
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f16.f64;
loc_82153224:
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f13,f0,f22
	ctx.f13.f64 = double(float(ctx.f0.f64 + f22.f64));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// fnmsubs f13,f13,f20,f21
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, f20.f64, -f21.f64)));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f0,f0,f24,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f24.f64, ctx.f13.f64)));
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// fmuls f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 * f29.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x82153260;
	sub_821EAF80(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// fsubs f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 - f23.f64));
	// lfs f13,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// fmuls f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 * f29.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x82153290;
	sub_821EAF80(ctx, base);
	// lfs f13,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lfs f0,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// fmadds f0,f13,f24,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f24.f64, ctx.f0.f64)));
	// stfs f28,140(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f30,128(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + f27.f64));
	// lfs f13,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// fmuls f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 * f29.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x821532DC;
	sub_821EAF80(ctx, base);
	// lfs f13,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f0,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 - f23.f64));
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + f27.f64));
	// fmuls f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 * f29.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x82153314;
	sub_821EAF80(ctx, base);
	// b 0x82153514
	goto loc_82153514;
loc_82153318:
	// bl 0x822d55f8
	ctx.lr = 0x8215331C;
	sub_822D55F8(ctx, base);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x821eb1a0
	ctx.lr = 0x82153330;
	sub_821EB1A0(ctx, base);
	// lhz r11,284(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 284);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82153344
	if (ctx.cr0.eq) goto loc_82153344;
	// fmr f0,f17
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f17.f64;
	// b 0x82153348
	goto loc_82153348;
loc_82153344:
	// fmr f0,f16
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f16.f64;
loc_82153348:
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f13,f22
	ctx.f0.f64 = double(float(ctx.f13.f64 + f22.f64));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// fnmsubs f0,f0,f20,f21
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, f20.f64, -f21.f64)));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 - f25.f64));
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// fmuls f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 * f29.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x82153384;
	sub_821EAF80(ctx, base);
	// lfs f13,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f0,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 - f25.f64));
	// stfs f28,140(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f30,128(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// stfs f30,132(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + f27.f64));
	// fmuls f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 * f29.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x821533CC;
	sub_821EAF80(ctx, base);
	// b 0x82153514
	goto loc_82153514;
loc_821533D0:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82153514
	if (!ctx.cr6.eq) goto loc_82153514;
	// lwz r11,316(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 316);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bge cr6,0x8215347c
	if (!ctx.cr6.lt) goto loc_8215347C;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,768
	ctx.r3.s64 = 50331648;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,16
	ctx.r3.u64 = ctx.r3.u64 | 16;
	// lfs f0,31220(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31220);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,344(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// lfd f13,120(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fnmsubs f0,f13,f0,f26
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -f26.f64)));
	// fsel f31,f0,f0,f30
	f31.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : f30.f64;
	// bl 0x820e68b8
	ctx.lr = 0x82153420;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f31,48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 48, f31.u64);
	// lis r8,-32173
	ctx.r8.s64 = -2108489728;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfd f4,-17856(r11)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r11.u32 + -17856);
	// addi r11,r8,-4224
	ctx.r11.s64 = ctx.r8.s64 + -4224;
	// stfd f4,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// lfs f2,-18036(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -18036);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r7,-18064
	ctx.r5.s64 = ctx.r7.s64 + -18064;
	// lfs f1,30172(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 30172);
	ctx.f1.f64 = double(temp.f32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// addi r6,r11,112
	ctx.r6.s64 = ctx.r11.s64 + 112;
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x821eaf80
	ctx.lr = 0x82153478;
	sub_821EAF80(ctx, base);
	// b 0x82153514
	goto loc_82153514;
loc_8215347C:
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f31,f0,f14
	f31.f64 = double(float(ctx.f0.f64 * f14.f64));
	// fcmpu cr6,f31,f26
	ctx.cr6.compare(f31.f64, f26.f64);
	// blt cr6,0x821534a4
	if (ctx.cr6.lt) goto loc_821534A4;
	// fmr f31,f26
	f31.f64 = f26.f64;
loc_821534A4:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,768
	ctx.r3.s64 = 50331648;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,15
	ctx.r3.u64 = ctx.r3.u64 | 15;
	// lwz r4,344(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821534BC;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f31,48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 48, f31.u64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lfs f2,-18036(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18036);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r7,-17880
	ctx.r5.s64 = ctx.r7.s64 + -17880;
	// lfd f4,-17856(r10)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r10.u32 + -17856);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f1,-18040(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -18040);
	ctx.f1.f64 = double(temp.f32);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// stfd f4,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x821eaf80
	ctx.lr = 0x8215350C;
	sub_821EAF80(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,324(r25)
	REX_STORE_U32(r25.u32 + 324, ctx.r11.u32);
loc_82153514:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,6
	ctx.r8.s64 = 6;
	// lfs f31,16032(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16032);
	f31.f64 = double(temp.f32);
	// lfs f4,16036(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16036);
	ctx.f4.f64 = double(temp.f32);
	// fmr f5,f31
	ctx.f5.f64 = f31.f64;
	// lfs f3,-18100(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -18100);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x821e8688
	ctx.lr = 0x82153544;
	sub_821E8688(ctx, base);
	// lwz r11,88(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 88);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82153644
	if (!ctx.cr6.eq) goto loc_82153644;
	// lwa r11,316(r25)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r25.u32 + 316));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfs f0,28436(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28436);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,120(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmsubs f0,f13,f0,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, -ctx.f0.f64)));
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, f26.f64);
	// ble cr6,0x8215357c
	if (!ctx.cr6.gt) goto loc_8215357C;
	// fmr f0,f26
	ctx.f0.f64 = f26.f64;
loc_8215357C:
	// fmuls f1,f0,f15
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 * f15.f64));
	// bl 0x820e0028
	ctx.lr = 0x82153584;
	sub_820E0028(ctx, base);
	// fmuls f31,f1,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 * f31.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,255
	ctx.r8.s64 = 255;
	// lfs f29,-18104(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -18104);
	f29.f64 = double(temp.f32);
	// lfs f28,-24400(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -24400);
	f28.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// lfs f4,-24940(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24940);
	ctx.f4.f64 = double(temp.f32);
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// fmr f5,f31
	ctx.f5.f64 = f31.f64;
	// bl 0x821e8688
	ctx.lr = 0x821535BC;
	sub_821E8688(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f30,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f30,196(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// li r31,15
	r31.s64 = 15;
	// stfs f30,200(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lfs f27,-18108(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18108);
	f27.f64 = double(temp.f32);
loc_821535D4:
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// fmr f5,f31
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = f31.f64;
	// li r9,1
	ctx.r9.s64 = 1;
	// fmr f4,f26
	ctx.f4.f64 = f26.f64;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// lfd f0,120(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f14
	ctx.f0.f64 = double(float(ctx.f0.f64 * f14.f64));
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x821e86d8
	ctx.lr = 0x82153610;
	sub_821E86D8(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// fmr f5,f31
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = f31.f64;
	// fmr f4,f26
	ctx.f4.f64 = f26.f64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x821e86d8
	ctx.lr = 0x82153630;
	sub_821E86D8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// fsubs f28,f28,f26
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(f28.f64 - f26.f64));
	// fadds f27,f27,f26
	f27.f64 = double(float(f27.f64 + f26.f64));
	// bge 0x821535d4
	if (!ctx.cr0.lt) goto loc_821535D4;
	// b 0x8215373c
	goto loc_8215373C;
loc_82153644:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8215377c
	if (!ctx.cr6.eq) goto loc_8215377C;
	// lwa r11,316(r25)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r25.u32 + 316));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfs f0,28436(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28436);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,120(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmsubs f0,f13,f0,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, -ctx.f0.f64)));
	// fsubs f0,f26,f0
	ctx.f0.f64 = double(float(f26.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x8215377c
	if (!ctx.cr6.gt) goto loc_8215377C;
	// fmuls f1,f0,f15
	ctx.f1.f64 = double(float(ctx.f0.f64 * f15.f64));
	// bl 0x820e0028
	ctx.lr = 0x82153680;
	sub_820E0028(ctx, base);
	// fmuls f31,f1,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 * f31.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,255
	ctx.r8.s64 = 255;
	// lfs f29,-18104(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -18104);
	f29.f64 = double(temp.f32);
	// lfs f28,-18112(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -18112);
	f28.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// lfs f4,-18116(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18116);
	ctx.f4.f64 = double(temp.f32);
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// fmr f5,f31
	ctx.f5.f64 = f31.f64;
	// bl 0x821e8688
	ctx.lr = 0x821536B8;
	sub_821E8688(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f30,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f30,180(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// li r31,15
	r31.s64 = 15;
	// stfs f30,184(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lfs f27,-18120(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18120);
	f27.f64 = double(temp.f32);
loc_821536D0:
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// fmr f5,f31
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = f31.f64;
	// li r9,1
	ctx.r9.s64 = 1;
	// fmr f4,f26
	ctx.f4.f64 = f26.f64;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// lfd f0,120(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f14
	ctx.f0.f64 = double(float(ctx.f0.f64 * f14.f64));
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// bl 0x821e86d8
	ctx.lr = 0x8215370C;
	sub_821E86D8(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// fmr f5,f31
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = f31.f64;
	// fmr f4,f26
	ctx.f4.f64 = f26.f64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x821e86d8
	ctx.lr = 0x8215372C;
	sub_821E86D8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// fsubs f28,f28,f26
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(f28.f64 - f26.f64));
	// fadds f27,f27,f26
	f27.f64 = double(float(f27.f64 + f26.f64));
	// bge 0x821536d0
	if (!ctx.cr0.lt) goto loc_821536D0;
loc_8215373C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821e78c8
	ctx.lr = 0x82153744;
	sub_821E78C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,255
	ctx.r8.s64 = 255;
	// lfs f5,26832(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26832);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-18124(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -18124);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-18356(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -18356);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,-18128(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -18128);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821e8688
	ctx.lr = 0x82153774;
	sub_821E8688(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821e78c8
	ctx.lr = 0x8215377C;
	sub_821E78C8(ctx, base);
loc_8215377C:
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f4c
	ctx.lr = 0x82153788;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_821A6578) {
	REX_FUNC_PROLOGUE();
	// lwz r9,128(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 128);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// blt cr6,0x821a6598
	if (ctx.cr6.lt) goto loc_821A6598;
	// beq cr6,0x821a6594
	if (ctx.cr6.eq) goto loc_821A6594;
	// addi r9,r9,2048
	ctx.r9.s64 = ctx.r9.s64 + 2048;
	// b 0x821a6598
	goto loc_821A6598;
loc_821A6594:
	// addi r9,r9,1024
	ctx.r9.s64 = ctx.r9.s64 + 1024;
loc_821A6598:
	// clrlwi. r6,r8,31
	ctx.r6.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x821a65cc
	if (!ctx.cr0.eq) goto loc_821A65CC;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
loc_821A65CC:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821a661c
	if (!ctx.cr6.gt) goto loc_821A661C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_821A65E0:
	// rlwinm r8,r5,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r5,r5,26
	ctx.r5.u64 = ctx.r5.u32 & 0x3F;
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x821a65e0
	if (!ctx.cr0.eq) goto loc_821A65E0;
loc_821A661C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,4,22,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x3F0;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// stw r11,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A9840) {
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
	// beq cr6,0x821a9898
	if (ctx.cr6.eq) goto loc_821A9898;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82208d78
	ctx.lr = 0x821A9870;
	sub_82208D78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821a98ac
	if (!ctx.cr0.eq) goto loc_821A98AC;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a9898
	if (!ctx.cr6.eq) goto loc_821A9898;
loc_821A9884:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r11,156(r31)
	REX_STORE_U8(r31.u32 + 156, ctx.r11.u8);
loc_821A9890:
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stb r11,88(r31)
	REX_STORE_U8(r31.u32 + 88, ctx.r11.u8);
loc_821A9898:
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
loc_821A98AC:
	// cmplwi cr6,r3,1223
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1223, ctx.xer);
	// beq cr6,0x821a98c8
	if (ctx.cr6.eq) goto loc_821A98C8;
	// cmplwi cr6,r3,1627
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1627, ctx.xer);
	// beq cr6,0x821a98c8
	if (ctx.cr6.eq) goto loc_821A98C8;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,10
	ctx.r10.s64 = 10;
	// b 0x821a9890
	goto loc_821A9890;
loc_821A98C8:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,123
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 123, ctx.xer);
	// beq cr6,0x821a9884
	if (ctx.cr6.eq) goto loc_821A9884;
	// cmpwi cr6,r11,1391
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1391, ctx.xer);
	// ble cr6,0x821a98e4
	if (!ctx.cr6.gt) goto loc_821A98E4;
	// cmpwi cr6,r11,1393
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1393, ctx.xer);
	// ble cr6,0x821a9884
	if (!ctx.cr6.gt) goto loc_821A9884;
loc_821A98E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x821a9890
	goto loc_821A9890;
}

DEFINE_REX_FUNC(sub_821AAFA0) {
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
	// rlwinm. r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r31,14
	r31.s64 = 14;
	// beq 0x821aafc0
	if (ctx.cr0.eq) goto loc_821AAFC0;
	// li r31,2
	r31.s64 = 2;
loc_821AAFC0:
	// cmpwi cr6,r3,60
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 60, ctx.xer);
	// bge cr6,0x821ab034
	if (!ctx.cr6.lt) goto loc_821AB034;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// lwz r4,344(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821AAFE0;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfd f4,-24880(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = REX_LOAD_U64(ctx.r11.u32 + -24880);
	// addi r5,r6,8068
	ctx.r5.s64 = ctx.r6.s64 + 8068;
	// lfs f2,8084(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8084);
	ctx.f2.f64 = double(temp.f32);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// lfs f1,15632(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15632);
	ctx.f1.f64 = double(temp.f32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stfd f4,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f4.u64);
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
	// stfd f4,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f4.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// bl 0x821eaf80
	ctx.lr = 0x821AB034;
	sub_821EAF80(ctx, base);
loc_821AB034:
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

DEFINE_REX_FUNC(sub_821B0C90) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
	// stw r3,380(r30)
	REX_STORE_U32(r30.u32 + 380, ctx.r3.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,23(r30)
	REX_STORE_U8(r30.u32 + 23, ctx.r11.u8);
	// lha r3,88(r3)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 88));
	// bl 0x821b0ac0
	ctx.lr = 0x821B0CC4;
	sub_821B0AC0(ctx, base);
	// bl 0x8229a710
	ctx.lr = 0x821B0CC8;
	sub_8229A710(ctx, base);
	// bl 0x8212e308
	ctx.lr = 0x821B0CCC;
	sub_8212E308(ctx, base);
	// lha r3,88(r31)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r31.u32 + 88));
	// bl 0x821b09f0
	ctx.lr = 0x821B0CD4;
	sub_821B09F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// lwa r11,0(r11)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 0));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,1840(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r11.u32);
	// bl 0x821b0b88
	ctx.lr = 0x821B0D14;
	sub_821B0B88(ctx, base);
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

DEFINE_REX_FUNC(sub_821B2CE0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r11,5452(r3)
	REX_STORE_U16(ctx.r3.u32 + 5452, ctx.r11.u16);
	// lwz r10,17812(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 17812);
	// lwz r9,17796(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 17796);
	// lwz r8,17800(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 17800);
	// lwz r7,17804(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 17804);
	// lwz r11,17808(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 17808);
	// stw r11,17788(r3)
	REX_STORE_U32(ctx.r3.u32 + 17788, ctx.r11.u32);
	// stw r7,17784(r3)
	REX_STORE_U32(ctx.r3.u32 + 17784, ctx.r7.u32);
	// stw r8,17780(r3)
	REX_STORE_U32(ctx.r3.u32 + 17780, ctx.r8.u32);
	// stw r9,17776(r3)
	REX_STORE_U32(ctx.r3.u32 + 17776, ctx.r9.u32);
	// stw r10,17792(r3)
	REX_STORE_U32(ctx.r3.u32 + 17792, ctx.r10.u32);
	// bl 0x821d9068
	ctx.lr = 0x821B2D28;
	sub_821D9068(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lha r10,2(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 2));
	// lhz r9,30(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821b2d60
	if (ctx.cr6.eq) goto loc_821B2D60;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x821b2d60
	if (ctx.cr6.eq) goto loc_821B2D60;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x821b2dc4
	if (!ctx.cr6.eq) goto loc_821B2DC4;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821b2dc4
	if (!ctx.cr6.eq) goto loc_821B2DC4;
loc_821B2D60:
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lwz r5,5456(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 5456);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821b2da4
	if (ctx.cr6.eq) goto loc_821B2DA4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821b2da4
	if (ctx.cr6.eq) goto loc_821B2DA4;
	// ble cr6,0x821b2db0
	if (!ctx.cr6.gt) goto loc_821B2DB0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x821b2d9c
	if (!ctx.cr6.gt) goto loc_821B2D9C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821b2da4
	if (ctx.cr6.eq) goto loc_821B2DA4;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x821b2da4
	if (ctx.cr6.eq) goto loc_821B2DA4;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x821b2db0
	if (!ctx.cr6.eq) goto loc_821B2DB0;
loc_821B2D9C:
	// lwz r5,16468(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 16468);
	// b 0x821b2db0
	goto loc_821B2DB0;
loc_821B2DA4:
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// ble cr6,0x821b2db0
	if (!ctx.cr6.gt) goto loc_821B2DB0;
	// li r5,1
	ctx.r5.s64 = 1;
loc_821B2DB0:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// lwz r3,-9828(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -9828);
	// bl 0x821e6c10
	ctx.lr = 0x821B2DC4;
	sub_821E6C10(ctx, base);
loc_821B2DC4:
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

DEFINE_REX_FUNC(sub_821BE0B0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lha r10,0(r5)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r5.u32 + 0));
	// lwz r9,10008(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 10008);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lhz r10,2(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 2);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,42
	ctx.r11.s64 = ctx.r11.s64 + 42;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BE1E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r10,10008(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 10008);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r10,540
	ctx.r7.s64 = ctx.r10.s64 + 540;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x821be2c4
	if (ctx.cr6.gt) goto loc_821BE2C4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BE200:
	// lha r10,0(r7)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + 0));
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x821be270
	if (!ctx.cr6.eq) goto loc_821BE270;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821be270
	if (!ctx.cr6.eq) goto loc_821BE270;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_821BE218:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r7,r7,20
	ctx.r7.s64 = ctx.r7.s64 + 20;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// blt cr6,0x821be200
	if (ctx.cr6.lt) goto loc_821BE200;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821be2c4
	if (ctx.cr6.eq) goto loc_821BE2C4;
	// lhz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r9,r5,2
	ctx.r9.s64 = ctx.r5.s64 + 2;
	// stb r11,2(r8)
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r11.u8);
	// stb r6,3(r8)
	REX_STORE_U8(ctx.r8.u32 + 3, ctx.r6.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r10,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r10.u16);
	// ble cr6,0x821be268
	if (!ctx.cr6.gt) goto loc_821BE268;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r8,2
	ctx.r10.s64 = ctx.r8.s64 + 2;
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
loc_821BE25C:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x821be25c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BE25C;
loc_821BE268:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821be2c8
	goto loc_821BE2C8;
loc_821BE270:
	// lha r6,0(r5)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(ctx.r5.u32 + 0));
	// addi r9,r5,2
	ctx.r9.s64 = ctx.r5.s64 + 2;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x821be218
	if (!ctx.cr6.eq) goto loc_821BE218;
	// lbz r10,2(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821be218
	if (!ctx.cr6.eq) goto loc_821BE218;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821be2c4
	if (!ctx.cr6.gt) goto loc_821BE2C4;
	// addi r10,r7,4
	ctx.r10.s64 = ctx.r7.s64 + 4;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_821BE2A4:
	// lhz r31,0(r10)
	r31.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhzu r6,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x821be218
	if (!ctx.cr6.eq) goto loc_821BE218;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821be2a4
	if (ctx.cr6.lt) goto loc_821BE2A4;
loc_821BE2C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BE2C8:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BFF88) {
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
	ctx.lr = 0x821BFF90;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,896
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(896));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// addi r31,r11,7224
	r31.s64 = ctx.r11.s64 + 7224;
	// lhz r10,7296(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 7296);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821bffc0
	if (!ctx.cr0.eq) goto loc_821BFFC0;
loc_821BFFB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821c0040
	goto loc_821C0040;
loc_821BFFC0:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-9768(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -9768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bffb8
	if (!ctx.cr6.eq) goto loc_821BFFB8;
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x821c003c
	if (ctx.cr6.eq) goto loc_821C003C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c7958
	ctx.lr = 0x821BFFE4;
	sub_821C7958(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821be980
	ctx.lr = 0x821BFFF0;
	sub_821BE980(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r29,r31,136
	r29.s64 = r31.s64 + 136;
	// li r28,2
	r28.s64 = 2;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
loc_821C0004:
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821c0030
	if (ctx.cr6.eq) goto loc_821C0030;
	// lhz r11,2(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 2);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x821c002c
	if (ctx.cr6.eq) goto loc_821C002C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821beb80
	ctx.lr = 0x821C0028;
	sub_821BEB80(ctx, base);
	// b 0x821c0030
	goto loc_821C0030;
loc_821C002C:
	// stfs f31,32(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r5.u32 + 32, temp.u32);
loc_821C0030:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x821c0004
	if (!ctx.cr0.eq) goto loc_821C0004;
loc_821C003C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821C0040:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821C2870) {
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
	ctx.lr = 0x821C2878;
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r31,r11,23240
	r31.s64 = ctx.r11.s64 + 23240;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r7,r31,120
	ctx.r7.s64 = r31.s64 + 120;
	// mulli r6,r10,284
	ctx.r6.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(284));
	// lwz r9,23240(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 23240);
	// lfs f31,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lwzx r11,r6,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// srw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// and. r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lfs f30,2384(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2384);
	f30.f64 = double(temp.f32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r8,-32173
	ctx.r8.s64 = -2108489728;
	// addi r29,r11,13128
	r29.s64 = ctx.r11.s64 + 13128;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r26,11
	r26.s64 = 11;
	// li r27,3
	r27.s64 = 3;
	// addi r28,r8,-12640
	r28.s64 = ctx.r8.s64 + -12640;
	// lwz r11,1852(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1852);
	// beq 0x821c295c
	if (ctx.cr0.eq) goto loc_821C295C;
	// mulli r7,r10,284
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(284));
	// addi r6,r31,120
	ctx.r6.s64 = r31.s64 + 120;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// divwu r10,r11,r27
	ctx.r10.u64 = uint32_t(r27.u32 ? ctx.r11.u32 / r27.u32 : 0);
	// addi r5,r31,572
	ctx.r5.s64 = r31.s64 + 572;
	// mulli r4,r10,3
	ctx.r4.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(3));
	// lwzx r10,r7,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf. r8,r4,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r5
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f31,f0
	f31.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bne 0x821c295c
	if (!ctx.cr0.eq) goto loc_821C295C;
	// bl 0x822d6060
	ctx.lr = 0x821C291C;
	sub_822D6060(ctx, base);
	// divw r9,r3,r26
	ctx.r9.u64 = uint32_t((r26.s32 && !(ctx.r3.s32 == INT32_MIN && r26.s32 == -1)) ? ctx.r3.s32 / r26.s32 : 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mulli r9,r9,11
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(11));
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// addi r10,r28,-24
	ctx.r10.s64 = r28.s64 + -24;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r7,144
	ctx.r7.s64 = 144;
	// li r9,0
	ctx.r9.s64 = 0;
	// lhax r4,r11,r10
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
	// bl 0x8218dba0
	ctx.lr = 0x821C2954;
	sub_8218DBA0(ctx, base);
	// lwz r11,1852(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1852);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821C295C:
	// lbz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r8,r31,124
	ctx.r8.s64 = r31.s64 + 124;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// mulli r7,r10,284
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(284));
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r7,r9,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// and. r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x821c2a18
	if (ctx.cr0.eq) goto loc_821C2A18;
	// mulli r7,r10,284
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(284));
	// addi r6,r31,124
	ctx.r6.s64 = r31.s64 + 124;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r5,r31,572
	ctx.r5.s64 = r31.s64 + 572;
	// divwu r4,r11,r10
	ctx.r4.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// lwzx r10,r7,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// mulli r7,r4,7
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(7));
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf. r8,r7,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// bne 0x821c2a18
	if (!ctx.cr0.eq) goto loc_821C2A18;
	// bl 0x822d6060
	ctx.lr = 0x821C29BC;
	sub_822D6060(ctx, base);
	// divw r10,r3,r27
	ctx.r10.u64 = uint32_t((r27.s32 && !(ctx.r3.s32 == INT32_MIN && r27.s32 == -1)) ? ctx.r3.s32 / r27.s32 : 0);
	// addi r11,r28,16
	ctx.r11.s64 = r28.s64 + 16;
	// mulli r10,r10,3
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(3));
	// subf r10,r10,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r25,r10,r11
	r25.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32));
	// bl 0x822d6060
	ctx.lr = 0x821C29D8;
	sub_822D6060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// li r5,7
	ctx.r5.s64 = 7;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// li r6,3
	ctx.r6.s64 = 3;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r4,r11,r28
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + r28.u32));
	// bl 0x8218dba0
	ctx.lr = 0x821C2A10;
	sub_8218DBA0(ctx, base);
	// lwz r11,1852(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1852);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821C2A18:
	// lbz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r8,r31,252
	ctx.r8.s64 = r31.s64 + 252;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// mulli r7,r10,284
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(284));
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r7,r9,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// and. r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x821c2abc
	if (ctx.cr0.eq) goto loc_821C2ABC;
	// lbz r8,161(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 161);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x821c2abc
	if (ctx.cr0.eq) goto loc_821C2ABC;
	// mulli r7,r10,284
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(284));
	// addi r6,r31,252
	ctx.r6.s64 = r31.s64 + 252;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// divwu r10,r11,r27
	ctx.r10.u64 = uint32_t(r27.u32 ? ctx.r11.u32 / r27.u32 : 0);
	// addi r5,r31,572
	ctx.r5.s64 = r31.s64 + 572;
	// mulli r4,r10,3
	ctx.r4.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(3));
	// lwzx r10,r7,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf. r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f31,f0
	f31.f64 = double(float(f31.f64 - ctx.f0.f64));
	// bne 0x821c2abc
	if (!ctx.cr0.eq) goto loc_821C2ABC;
	// bl 0x822d6060
	ctx.lr = 0x821C2A80;
	sub_822D6060(ctx, base);
	// divw r9,r3,r26
	ctx.r9.u64 = uint32_t((r26.s32 && !(ctx.r3.s32 == INT32_MIN && r26.s32 == -1)) ? ctx.r3.s32 / r26.s32 : 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mulli r9,r9,11
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(11));
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// addi r10,r28,-24
	ctx.r10.s64 = r28.s64 + -24;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r7,144
	ctx.r7.s64 = 144;
	// li r9,0
	ctx.r9.s64 = 0;
	// lhax r4,r11,r10
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
	// bl 0x8218dba0
	ctx.lr = 0x821C2AB8;
	sub_8218DBA0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821C2ABC:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r10,r31,184
	ctx.r10.s64 = r31.s64 + 184;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r8,r11,284
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(284));
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// and. r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821c2b08
	if (ctx.cr0.eq) goto loc_821C2B08;
	// mulli r10,r11,284
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(284));
	// lfs f0,7208(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 7208);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r31,184
	ctx.r7.s64 = r31.s64 + 184;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r31,572
	ctx.r6.s64 = r31.s64 + 572;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r10,r6
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f31,f13,f0,f31
	f31.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, f31.f64)));
loc_821C2B08:
	// mulli r10,r11,284
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(284));
	// addi r8,r31,188
	ctx.r8.s64 = r31.s64 + 188;
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r9,r9,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// and. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821c2b4c
	if (ctx.cr0.eq) goto loc_821C2B4C;
	// mulli r9,r11,284
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(284));
	// lfs f0,7208(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 7208);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r31,188
	ctx.r8.s64 = r31.s64 + 188;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r31,572
	ctx.r7.s64 = r31.s64 + 572;
	// lwzx r11,r9,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r7
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f31,f13,f0,f31
	f31.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, f31.f64)));
loc_821C2B4C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-80(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_821D0AA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r10,r11,-11568
	ctx.r10.s64 = ctx.r11.s64 + -11568;
	// lwz r11,-11568(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11568);
	// b 0x821d0ac4
	goto loc_821D0AC4;
loc_821D0AB8:
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x821d0acc
	if (ctx.cr6.eq) goto loc_821D0ACC;
	// lwzu r11,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
loc_821D0AC4:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821d0ab8
	if (!ctx.cr6.eq) goto loc_821D0AB8;
loc_821D0ACC:
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D0F18) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r31,-32480(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// addi r11,r31,80
	ctx.r11.s64 = r31.s64 + 80;
	// bl 0x821b0030
	ctx.lr = 0x821D0F3C;
	sub_821B0030(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r11,7840(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7840);
	// addi r10,r11,108
	ctx.r10.s64 = ctx.r11.s64 + 108;
	// lfs f0,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f0,112(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f0,116(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f13,120(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 120, temp.u32);
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

DEFINE_REX_FUNC(sub_821D1FD0) {
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
	ctx.lr = 0x821D1FD8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r28,-32480(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// addi r31,r28,80
	r31.s64 = r28.s64 + 80;
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// lwz r11,92(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 92);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821d21bc
	if (ctx.cr6.lt) goto loc_821D21BC;
	// beq cr6,0x821d2100
	if (ctx.cr6.eq) goto loc_821D2100;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821d20b0
	if (ctx.cr6.lt) goto loc_821D20B0;
	// bne cr6,0x821d2268
	if (!ctx.cr6.eq) goto loc_821D2268;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d2268
	if (ctx.cr6.eq) goto loc_821D2268;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r30,r11,-8304
	r30.s64 = ctx.r11.s64 + -8304;
	// addi r3,r30,288
	ctx.r3.s64 = r30.s64 + 288;
	// bl 0x821af9a0
	ctx.lr = 0x821D2028;
	sub_821AF9A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r30,288
	ctx.r3.s64 = r30.s64 + 288;
	// addi r4,r11,13164
	ctx.r4.s64 = ctx.r11.s64 + 13164;
	// bl 0x8229a710
	ctx.lr = 0x821D2038;
	sub_8229A710(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,324(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 324);
	// addi r5,r11,13152
	ctx.r5.s64 = ctx.r11.s64 + 13152;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821af9d8
	ctx.lr = 0x821D2050;
	sub_821AF9D8(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
	// stw r3,444(r30)
	REX_STORE_U32(r30.u32 + 444, ctx.r3.u32);
	// bl 0x820e4bb0
	ctx.lr = 0x821D2060;
	sub_820E4BB0(ctx, base);
	// stw r3,448(r30)
	REX_STORE_U32(r30.u32 + 448, ctx.r3.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// addi r31,r10,-27432
	r31.s64 = ctx.r10.s64 + -27432;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823caea0
	ctx.lr = 0x821D2080;
	sub_823CAEA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f5ec0
	ctx.lr = 0x821D2088;
	sub_820F5EC0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821d4a70
	ctx.lr = 0x821D2090;
	sub_821D4A70(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821d45b0
	ctx.lr = 0x821D209C;
	sub_821D45B0(ctx, base);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// stb r11,1824(r10)
	REX_STORE_U8(ctx.r10.u32 + 1824, ctx.r11.u8);
	// b 0x821d2268
	goto loc_821D2268;
loc_821D20B0:
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r4,r10,31432
	ctx.r4.s64 = ctx.r10.s64 + 31432;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// li r30,0
	r30.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,8(r29)
	REX_STORE_U32(r29.u32 + 8, r30.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r3,8(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,324(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x821f7aa0
	ctx.lr = 0x821D20FC;
	sub_821F7AA0(ctx, base);
	// b 0x821d225c
	goto loc_821D225C;
loc_821D2100:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d2268
	if (ctx.cr6.eq) goto loc_821D2268;
	// lis r30,-32168
	r30.s64 = -2108162048;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,13140
	ctx.r5.s64 = ctx.r11.s64 + 13140;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-8904(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -8904);
	// bl 0x821af9d8
	ctx.lr = 0x821D2128;
	sub_821AF9D8(ctx, base);
	// bl 0x821e9cf8
	ctx.lr = 0x821D212C;
	sub_821E9CF8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-8904(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -8904);
	// addi r5,r11,13124
	ctx.r5.s64 = ctx.r11.s64 + 13124;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821af9d8
	ctx.lr = 0x821D2144;
	sub_821AF9D8(ctx, base);
	// bl 0x821fe708
	ctx.lr = 0x821D2148;
	sub_821FE708(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r3,-8904(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -8904);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,13108
	ctx.r5.s64 = ctx.r10.s64 + 13108;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r29,31464(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 31464);
	// bl 0x821af9d8
	ctx.lr = 0x821D2168;
	sub_821AF9D8(ctx, base);
	// lwz r11,-8904(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -8904);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r5,r10,13092
	ctx.r5.s64 = ctx.r10.s64 + 13092;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821af9d8
	ctx.lr = 0x821D2188;
	sub_821AF9D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822a0b08
	ctx.lr = 0x821D21A0;
	sub_822A0B08(ctx, base);
	// lwz r3,-8904(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -8904);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d225c
	if (ctx.cr6.eq) goto loc_821D225C;
	// bl 0x822c80a8
	ctx.lr = 0x821D21B0;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8904(r30)
	REX_STORE_U32(r30.u32 + -8904, ctx.r11.u32);
	// b 0x821d225c
	goto loc_821D225C;
loc_821D21BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821b0030
	ctx.lr = 0x821D21C4;
	sub_821B0030(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r11,13128
	ctx.r6.s64 = ctx.r11.s64 + 13128;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,7840(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 7840);
	// li r30,0
	r30.s64 = 0;
	// lfs f0,1996(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// li r4,16
	ctx.r4.s64 = 16;
	// lfs f13,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// lis r3,528
	ctx.r3.s64 = 34603008;
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// addi r10,r11,108
	ctx.r10.s64 = ctx.r11.s64 + 108;
	// stfs f0,112(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f0,116(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f13,120(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// stb r9,1824(r6)
	REX_STORE_U8(ctx.r6.u32 + 1824, ctx.r9.u8);
	// stw r30,8(r29)
	REX_STORE_U32(r29.u32 + 8, r30.u32);
	// bl 0x822c80c8
	ctx.lr = 0x821D2218;
	sub_822C80C8(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r5,r11,31432
	ctx.r5.s64 = ctx.r11.s64 + 31432;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r3,-8904(r8)
	REX_STORE_U32(ctx.r8.u32 + -8904, ctx.r3.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r3,8(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// li r5,591
	ctx.r5.s64 = 591;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x821f7aa0
	ctx.lr = 0x821D225C;
	sub_821F7AA0(ctx, base);
loc_821D225C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_821D2268:
	// lwz r11,68(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r28)
	REX_STORE_U32(r28.u32 + 68, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821DCB60) {
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
	// addi r11,r11,15108
	ctx.r11.s64 = ctx.r11.s64 + 15108;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821DCB8C;
	sub_821E2FD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821dcb9c
	if (ctx.cr0.eq) goto loc_821DCB9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821DCB9C;
	sub_822C80A8(ctx, base);
loc_821DCB9C:
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

DEFINE_REX_FUNC(sub_821DD490) {
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
	// cmpwi cr6,r3,88
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 88, ctx.xer);
	// bge cr6,0x821dd4bc
	if (!ctx.cr6.lt) goto loc_821DD4BC;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-6560
	ctx.r11.s64 = ctx.r11.s64 + -6560;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821dd534
	goto loc_821DD534;
loc_821DD4BC:
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// cmpwi cr6,r3,288
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 288, ctx.xer);
	// addi r31,r10,4952
	r31.s64 = ctx.r10.s64 + 4952;
	// bge cr6,0x821dd4f8
	if (!ctx.cr6.lt) goto loc_821DD4F8;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// sth r11,64(r31)
	REX_STORE_U16(r31.u32 + 64, ctx.r11.u16);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x821dcf00
	ctx.lr = 0x821DD4E0;
	sub_821DCF00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821357d0
	ctx.lr = 0x821DD4F0;
	sub_821357D0(ctx, base);
	// stw r3,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r3.u32);
	// b 0x821dd530
	goto loc_821DD530;
loc_821DD4F8:
	// li r11,9
	ctx.r11.s64 = 9;
	// addi r3,r3,-288
	ctx.r3.s64 = ctx.r3.s64 + -288;
	// sth r11,64(r31)
	REX_STORE_U16(r31.u32 + 64, ctx.r11.u16);
	// bl 0x821b30e0
	ctx.lr = 0x821DD508;
	sub_821B30E0(ctx, base);
	// bl 0x821b3150
	ctx.lr = 0x821DD50C;
	sub_821B3150(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,15140
	ctx.r4.s64 = ctx.r11.s64 + 15140;
	// bl 0x822d55f8
	ctx.lr = 0x821DD520;
	sub_822D55F8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// bl 0x820e6970
	ctx.lr = 0x821DD530;
	sub_820E6970(ctx, base);
loc_821DD530:
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
loc_821DD534:
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

DEFINE_REX_FUNC(sub_821E0C30) {
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
	// lis r31,-32165
	r31.s64 = -2107965440;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r8,r11,432
	ctx.r8.s64 = ctx.r11.s64 + 432;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,-32480(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + -32480);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,5588(r9)
	REX_STORE_U32(ctx.r9.u32 + 5588, ctx.r11.u32);
	// stw r7,84(r10)
	REX_STORE_U32(ctx.r10.u32 + 84, ctx.r7.u32);
	// lhz r11,10(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821e0c90
	if (ctx.cr0.eq) goto loc_821E0C90;
	// bl 0x82135998
	ctx.lr = 0x821E0C74;
	sub_82135998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821e0c90
	if (ctx.cr0.eq) goto loc_821E0C90;
	// bl 0x82135c90
	ctx.lr = 0x821E0C80;
	sub_82135C90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821e0c90
	if (!ctx.cr0.eq) goto loc_821E0C90;
	// lwz r3,-32480(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -32480);
	// bl 0x82140a28
	ctx.lr = 0x821E0C90;
	sub_82140A28(ctx, base);
loc_821E0C90:
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

DEFINE_REX_FUNC(sub_821E1E28) {
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
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821e2fb8
	ctx.lr = 0x821E1E44;
	sub_821E2FB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,9804
	ctx.r11.s64 = ctx.r11.s64 + 9804;
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

DEFINE_REX_FUNC(sub_821E2300) {
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
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821e2fb8
	ctx.lr = 0x821E231C;
	sub_821E2FB8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,2324
	ctx.r11.s64 = ctx.r11.s64 + 2324;
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

DEFINE_REX_FUNC(sub_821E2A70) {
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
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821e2fb8
	ctx.lr = 0x821E2A8C;
	sub_821E2FB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-25168
	ctx.r11.s64 = ctx.r11.s64 + -25168;
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

DEFINE_REX_FUNC(sub_821E3028) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822095c0
	ctx.lr = 0x821E3054;
	sub_822095C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// bne 0x821e3068
	if (!ctx.cr0.eq) goto loc_821E3068;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x821e30c4
	goto loc_821E30C4;
loc_821E3068:
	// addi r30,r31,108
	r30.s64 = r31.s64 + 108;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x821E307C;
	sub_822D5870(ctx, base);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// addi r5,r31,136
	ctx.r5.s64 = r31.s64 + 136;
	// addi r4,r11,3000
	ctx.r4.s64 = ctx.r11.s64 + 3000;
	// lwz r3,2980(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2980);
	// bl 0x822097e8
	ctx.lr = 0x821E30A4;
	sub_822097E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x821e30c0
	if (ctx.cr6.eq) goto loc_821E30C0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15676
	ctx.r4.s64 = ctx.r11.s64 + 15676;
	// bl 0x822d55f8
	ctx.lr = 0x821E30C0;
	sub_822D55F8(ctx, base);
loc_821E30C0:
	// li r11,2
	ctx.r11.s64 = 2;
loc_821E30C4:
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

DEFINE_REX_FUNC(sub_821E5F28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821E5F30;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,768
	ctx.r11.s64 = 768;
	// stw r5,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,16(r3)
	REX_STORE_U16(ctx.r3.u32 + 16, ctx.r11.u16);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,16292
	ctx.r6.s64 = ctx.r11.s64 + 16292;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821366d8
	ctx.lr = 0x821E5F74;
	sub_821366D8(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e6000
	if (ctx.cr0.eq) goto loc_821E6000;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821e4de0
	ctx.lr = 0x821E5F8C;
	sub_821E4DE0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,16284
	ctx.r6.s64 = ctx.r11.s64 + 16284;
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
	ctx.lr = 0x821E5FB0;
	sub_821366D8(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e6000
	if (ctx.cr0.eq) goto loc_821E6000;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821e4bc0
	ctx.lr = 0x821E5FC8;
	sub_821E4BC0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,16280
	ctx.r6.s64 = ctx.r11.s64 + 16280;
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
	ctx.lr = 0x821E5FEC;
	sub_821366D8(ctx, base);
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e6000
	if (ctx.cr0.eq) goto loc_821E6000;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821e4d08
	ctx.lr = 0x821E6000;
	sub_821E4D08(ctx, base);
loc_821E6000:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821E8878) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,1823(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1823);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// b 0x821e8370
	sub_821E8370(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821E8ED0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpdi cr6,r4,0
	ctx.cr6.compare<int64_t>(ctx.r4.s64, 0, ctx.xer);
	// bge cr6,0x821e8eec
	if (!ctx.cr6.lt) goto loc_821E8EEC;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r4,45
	ctx.r4.s64 = 45;
	// b 0x821e8f08
	goto loc_821E8F08;
loc_821E8EEC:
	// rlwinm. r11,r6,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e8f00
	if (ctx.cr0.eq) goto loc_821E8F00;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r4,43
	ctx.r4.s64 = 43;
	// b 0x821e8f08
	goto loc_821E8F08;
loc_821E8F00:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_821E8F08:
	// li r11,-1
	ctx.r11.s64 = -1;
	// clrlwi r6,r6,31
	ctx.r6.u64 = ctx.r6.u32 & 0x1;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// li r7,10
	ctx.r7.s64 = 10;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x821e8f6c
	if (!ctx.cr6.eq) goto loc_821E8F6C;
	// cmpd cr6,r10,r9
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r9.s64, ctx.xer);
	// bge cr6,0x821e8f40
	if (!ctx.cr6.lt) goto loc_821E8F40;
	// rotlwi. r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e8f64
	if (ctx.cr0.eq) goto loc_821E8F64;
loc_821E8F30:
	// divwu. r11,r11,r7
	ctx.r11.u64 = uint32_t(ctx.r7.u32 ? ctx.r11.u32 / ctx.r7.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bne 0x821e8f30
	if (!ctx.cr0.eq) goto loc_821E8F30;
	// b 0x821e8f5c
	goto loc_821E8F5C;
loc_821E8F40:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// ble cr6,0x821e8f64
	if (!ctx.cr6.gt) goto loc_821E8F64;
loc_821E8F4C:
	// divdu r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 ? ctx.r11.u64 / ctx.r7.u64 : 0;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bgt cr6,0x821e8f4c
	if (ctx.cr6.gt) goto loc_821E8F4C;
loc_821E8F5C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x821e8f70
	if (!ctx.cr6.eq) goto loc_821E8F70;
loc_821E8F64:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x821e8f70
	goto loc_821E8F70;
loc_821E8F6C:
	// subf r5,r8,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r8.u64;
loc_821E8F70:
	// add r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 + ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmpd cr6,r10,r9
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r9.s64, ctx.xer);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bge cr6,0x821e9004
	if (!ctx.cr6.lt) goto loc_821E9004;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x821e8fc4
	goto loc_821E8FC4;
loc_821E8F98:
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// blt cr6,0x821e8fcc
	if (ctx.cr6.lt) goto loc_821E8FCC;
	// divwu r9,r10,r7
	ctx.r9.u64 = uint32_t(ctx.r7.u32 ? ctx.r10.u32 / ctx.r7.u32 : 0);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// mulli r9,r9,10
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(10));
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// divwu r10,r10,r7
	ctx.r10.u64 = uint32_t(ctx.r7.u32 ? ctx.r10.u32 / ctx.r7.u32 : 0);
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_821E8FC4:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bgt cr6,0x821e8f98
	if (ctx.cr6.gt) goto loc_821E8F98;
loc_821E8FCC:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// b 0x821e900c
	goto loc_821E900C;
loc_821E8FD4:
	// cmpldi cr6,r10,10
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 10, ctx.xer);
	// blt cr6,0x821e900c
	if (ctx.cr6.lt) goto loc_821E900C;
	// divdu r9,r10,r7
	ctx.r9.u64 = ctx.r7.u64 ? ctx.r10.u64 / ctx.r7.u64 : 0;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// mulli r9,r9,10
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(10));
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// divdu r10,r10,r7
	ctx.r10.u64 = ctx.r7.u64 ? ctx.r10.u64 / ctx.r7.u64 : 0;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_821E9004:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bgt cr6,0x821e8fd4
	if (ctx.cr6.gt) goto loc_821E8FD4;
loc_821E900C:
	// cmpdi cr6,r10,9
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 9, ctx.xer);
	// ble cr6,0x821e901c
	if (!ctx.cr6.gt) goto loc_821E901C;
	// li r10,86
	ctx.r10.s64 = 86;
	// b 0x821e9020
	goto loc_821E9020;
loc_821E901C:
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
loc_821E9020:
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r5,-1
	ctx.r9.s64 = ctx.r5.s64 + -1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x821e9044
	if (!ctx.cr6.eq) goto loc_821E9044;
	// extsb. r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821e9044
	if (ctx.cr0.eq) goto loc_821E9044;
	// stb r4,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_821E9044:
	// subfic r10,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r6.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// ble cr6,0x821e906c
	if (!ctx.cr6.gt) goto loc_821E906C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821E9060:
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bdnz 0x821e9060
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E9060;
loc_821E906C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// extsb. r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// stb r4,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F0C48) {
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
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// fmuls f13,f2,f2
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fmuls f12,f3,f3
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// fmadds f13,f0,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x821f0c84
	if (!ctx.cr6.lt) goto loc_821F0C84;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821f0d0c
	goto loc_821F0D0C;
loc_821F0C84:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x821f0ca0
	if (ctx.cr6.eq) goto loc_821F0CA0;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// bl 0x82204dc0
	ctx.lr = 0x821F0C9C;
	sub_82204DC0(ctx, base);
	// b 0x821f0cbc
	goto loc_821F0CBC;
loc_821F0CA0:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x821f0cb4
	if (!ctx.cr6.gt) goto loc_821F0CB4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2012(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821f0cd0
	goto loc_821F0CD0;
loc_821F0CB4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,17064(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17064);
	ctx.f1.f64 = double(temp.f32);
loc_821F0CBC:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// bge cr6,0x821f0cd0
	if (!ctx.cr6.lt) goto loc_821F0CD0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_821F0CD0:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821f0cfc
	if (!ctx.cr6.gt) goto loc_821F0CFC;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_821F0CE8:
	// lfsu f13,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x821f0ce8
	if (ctx.cr6.gt) goto loc_821F0CE8;
loc_821F0CFC:
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// lhzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
loc_821F0D0C:
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

DEFINE_REX_FUNC(sub_821F4C50) {
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
	// lfs f12,18376(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 18376);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x821f4c8c
	if (!ctx.cr6.gt) goto loc_821F4C8C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// b 0x821f4c94
	goto loc_821F4C94;
loc_821F4C8C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_821F4C94:
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

DEFINE_REX_FUNC(sub_821F8128) {
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
	ctx.lr = 0x821F8130;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f8228
	if (ctx.cr6.lt) goto loc_821F8228;
	// lis r11,512
	ctx.r11.s64 = 33554432;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f815c
	if (ctx.cr6.lt) goto loc_821F815C;
	// lis r11,2048
	ctx.r11.s64 = 134217728;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821f8164
	if (!ctx.cr6.lt) goto loc_821F8164;
loc_821F815C:
	// clrlwi. r11,r28,30
	ctx.r11.u64 = r28.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f8228
	if (!ctx.cr0.eq) goto loc_821F8228;
loc_821F8164:
	// lhz r11,64(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 64);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821f8228
	if (ctx.cr0.eq) goto loc_821F8228;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r27,r11,-32480
	r27.s64 = ctx.r11.s64 + -32480;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x821F8188;
	sub_822D4FA0(ctx, base);
	// lbz r10,62(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 62);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// extsb r29,r10
	r29.s64 = ctx.r10.s8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f8218
	if (ctx.cr6.eq) goto loc_821F8218;
loc_821F81A0:
	// lbz r10,62(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 62);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// ble cr6,0x821f81c8
	if (!ctx.cr6.gt) goto loc_821F81C8;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r31.s32, ctx.xer);
	// ble cr6,0x821f81c0
	if (!ctx.cr6.gt) goto loc_821F81C0;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_821F81C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f81a0
	if (!ctx.cr6.eq) goto loc_821F81A0;
loc_821F81C8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x821f8218
	if (ctx.cr6.eq) goto loc_821F8218;
	// b 0x821f8210
	goto loc_821F8210;
loc_821F81D4:
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f820c
	if (ctx.cr6.eq) goto loc_821F820C;
loc_821F81E0:
	// lbz r11,62(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 62);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// ble cr6,0x821f820c
	if (!ctx.cr6.gt) goto loc_821F820C;
	// lwz r30,4(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// bne cr6,0x821f8200
	if (!ctx.cr6.eq) goto loc_821F8200;
	// bl 0x821f7fd0
	ctx.lr = 0x821F8200;
	sub_821F7FD0(ctx, base);
loc_821F8200:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x821f81e0
	if (!ctx.cr6.eq) goto loc_821F81E0;
loc_821F820C:
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_821F8210:
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(r31.s32, r29.s32, ctx.xer);
	// bgt cr6,0x821f81d4
	if (ctx.cr6.gt) goto loc_821F81D4;
loc_821F8218:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x822d4fa0
	ctx.lr = 0x821F8228;
	sub_822D4FA0(ctx, base);
loc_821F8228:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821FB858) {
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
	// lwz r3,64(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fb894
	if (ctx.cr6.eq) goto loc_821FB894;
loc_821FB880:
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821fb678
	ctx.lr = 0x821FB888;
	sub_821FB678(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x821fb880
	if (!ctx.cr6.eq) goto loc_821FB880;
loc_821FB894:
	// lfs f13,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x821fb8ec
	if (!ctx.cr6.gt) goto loc_821FB8EC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16908(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16908);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821fb8b8
	if (!ctx.cr6.lt) goto loc_821FB8B8;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_821FB8B8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,15624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15624);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x821fb8cc
	if (!ctx.cr6.gt) goto loc_821FB8CC;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_821FB8CC:
	// stfs f13,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x821fb8dc
	if (ctx.cr6.lt) goto loc_821FB8DC;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_821FB8DC:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x821fb8e8
	if (!ctx.cr6.gt) goto loc_821FB8E8;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_821FB8E8:
	// stfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
loc_821FB8EC:
	// lfs f1,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x821fb910
	if (!ctx.cr6.gt) goto loc_821FB910;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820ff348
	ctx.lr = 0x821FB904;
	sub_820FF348(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x820ff2f8
	ctx.lr = 0x821FB910;
	sub_820FF2F8(ctx, base);
loc_821FB910:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fb978
	if (ctx.cr6.eq) goto loc_821FB978;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r10,336(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 336);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r31,204
	ctx.r11.s64 = r31.s64 + 204;
	// lfs f1,1996(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821FB934:
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821fb94c
	if (ctx.cr0.eq) goto loc_821FB94C;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x821fb94c
	if (!ctx.cr6.gt) goto loc_821FB94C;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_821FB94C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// bdnz 0x821fb934
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821FB934;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821fb96c
	if (!ctx.cr6.gt) goto loc_821FB96C;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_821FB96C:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r3,7792(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 7792);
	// bl 0x821ebd80
	ctx.lr = 0x821FB978;
	sub_821EBD80(ctx, base);
loc_821FB978:
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,508(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 508);
	// lfs f0,16676(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16676);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,356(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 356, temp.u32);
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

DEFINE_REX_FUNC(sub_82202F80) {
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
	// lis r31,-32165
	r31.s64 = -2107965440;
	// lwz r11,15280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82202fac
	if (ctx.cr6.eq) goto loc_82202FAC;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r3,r11,15284
	ctx.r3.s64 = ctx.r11.s64 + 15284;
	// bl 0x82203600
	ctx.lr = 0x82202FAC;
	sub_82203600(ctx, base);
loc_82202FAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15280(r31)
	REX_STORE_U32(r31.u32 + 15280, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822042F8) {
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
	ctx.lr = 0x82204300;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,4660
	ctx.r11.s64 = 305397760;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// ori r11,r11,65244
	ctx.r11.u64 = ctx.r11.u64 | 65244;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82204594
	if (!ctx.cr6.eq) goto loc_82204594;
	// bl 0x82203370
	ctx.lr = 0x82204334;
	sub_82203370(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x82204594
	if (ctx.cr6.lt) goto loc_82204594;
	// addi r11,r4,37
	ctx.r11.s64 = ctx.r4.s64 + 37;
	// lwz r9,16(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82204594
	if (!ctx.cr6.lt) goto loc_82204594;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82204460
	if (!ctx.cr6.eq) goto loc_82204460;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82204388
	if (ctx.cr6.eq) goto loc_82204388;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// b 0x82204390
	goto loc_82204390;
loc_82204388:
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r5,r11,3472
	ctx.r5.s64 = ctx.r11.s64 + 3472;
loc_82204390:
	// cmpwi cr6,r23,16384
	ctx.cr6.compare<int32_t>(r23.s32, 16384, ctx.xer);
	// bge cr6,0x822043a0
	if (!ctx.cr6.lt) goto loc_822043A0;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x822043b8
	goto loc_822043B8;
loc_822043A0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x822043b8
	if (ctx.cr6.lt) goto loc_822043B8;
	// li r11,2
	ctx.r11.s64 = 2;
loc_822043B8:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822044e8
	if (ctx.cr6.lt) goto loc_822044E8;
	// beq cr6,0x82204414
	if (ctx.cr6.eq) goto loc_82204414;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82204594
	if (!ctx.cr6.lt) goto loc_82204594;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8220445c
	if (!ctx.cr6.eq) goto loc_8220445C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r25,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// sth r31,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, r31.u16);
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// sth r31,106(r1)
	REX_STORE_U16(ctx.r1.u32 + 106, r31.u16);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82203d00
	ctx.lr = 0x82204410;
	sub_82203D00(ctx, base);
	// b 0x82204598
	goto loc_82204598;
loc_82204414:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8220445c
	if (!ctx.cr6.eq) goto loc_8220445C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r25,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// sth r31,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, r31.u16);
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// sth r31,106(r1)
	REX_STORE_U16(ctx.r1.u32 + 106, r31.u16);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82203ac0
	ctx.lr = 0x82204458;
	sub_82203AC0(ctx, base);
	// b 0x82204598
	goto loc_82204598;
loc_8220445C:
	// li r24,1
	r24.s64 = 1;
loc_82204460:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r30,r11,18544
	r30.s64 = ctx.r11.s64 + 18544;
	// mr r28,r31
	r28.u64 = r31.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// lwz r10,-32480(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
loc_82204478:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8220449c
	if (ctx.cr6.eq) goto loc_8220449C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r30,64
	ctx.r9.s64 = r30.s64 + 64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82204478
	if (ctx.cr6.lt) goto loc_82204478;
	// li r28,-1
	r28.s64 = -1;
loc_8220449C:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(r28.s32, -1, ctx.xer);
	// ble cr6,0x8220458c
	if (!ctx.cr6.gt) goto loc_8220458C;
	// lwz r3,12(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r6,r8,21380
	ctx.r6.s64 = ctx.r8.s64 + 21380;
	// addi r9,r11,13296
	ctx.r9.s64 = ctx.r11.s64 + 13296;
	// addi r8,r10,16120
	ctx.r8.s64 = ctx.r10.s64 + 16120;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x821f7d50
	ctx.lr = 0x822044D0;
	sub_821F7D50(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82204510
	if (ctx.cr0.eq) goto loc_82204510;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,31764
	ctx.r10.s64 = ctx.r10.s64 + 31764;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82204514
	goto loc_82204514;
loc_822044E8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82203658
	ctx.lr = 0x82204508;
	sub_82203658(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82204598
	goto loc_82204598;
loc_82204510:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82204514:
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stwx r11,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r11.u32);
	// beq cr6,0x82204594
	if (ctx.cr6.eq) goto loc_82204594;
	// stw r31,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, r31.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwzx r8,r10,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// sth r24,42(r8)
	REX_STORE_U16(ctx.r8.u32 + 42, r24.u16);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lfs f0,1992(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// sth r9,40(r10)
	REX_STORE_U16(ctx.r10.u32 + 40, ctx.r9.u16);
	// stfs f0,96(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// stfs f0,100(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stw r27,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r26,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, r26.u32);
	// stw r25,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, r25.u32);
	// stw r31,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, r31.u32);
	// sth r31,104(r11)
	REX_STORE_U16(ctx.r11.u32 + 104, r31.u16);
	// sth r31,106(r11)
	REX_STORE_U16(ctx.r11.u32 + 106, r31.u16);
	// stw r31,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, r31.u32);
	// stw r22,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, r22.u32);
	// stw r29,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, r29.u32);
	// stw r23,132(r11)
	REX_STORE_U32(ctx.r11.u32 + 132, r23.u32);
	// stw r28,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, r28.u32);
	// stw r8,128(r11)
	REX_STORE_U32(ctx.r11.u32 + 128, ctx.r8.u32);
	// stw r31,148(r11)
	REX_STORE_U32(ctx.r11.u32 + 148, r31.u32);
	// b 0x82204598
	goto loc_82204598;
loc_8220458C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82204598
	goto loc_82204598;
loc_82204594:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82204598:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_822102E8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,12280(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12280);
	// lwz r11,12284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12284);
	// rlwimi r10,r4,5,24,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF1F);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,12280(r3)
	REX_STORE_U32(ctx.r3.u32 + 12280, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,12280(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12280);
	// bne 0x8221032c
	if (!ctx.cr0.eq) goto loc_8221032C;
	// andi. r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_8221032C:
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

DEFINE_REX_FUNC(sub_82210FF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// li r12,1
	ctx.r12.s64 = 1;
	// stfs f0,12328(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12328, temp.u32);
	// lfs f13,-8492(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8492);
	ctx.f13.f64 = double(temp.f32);
	// rldicr r12,r12,53,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// sth r11,10602(r3)
	REX_STORE_U16(ctx.r3.u32 + 10602, ctx.r11.u16);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211A10) {
	REX_FUNC_PROLOGUE();
	// stb r4,10562(r3)
	REX_STORE_U8(ctx.r3.u32 + 10562, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211F20) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// lfs f0,27500(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 27500);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r10,r10,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// srd r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// lfs f13,36(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwimi r8,r9,5,23,26
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x1E0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFE1F);
	// stw r8,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82213CF8) {
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
	// bl 0x824d419c
	ctx.lr = 0x82213D10;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82213d24
	if (!ctx.cr6.eq) goto loc_82213D24;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1496(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1496);
	// b 0x82213d2c
	goto loc_82213D2C;
loc_82213D24:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1500(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1500);
loc_82213D2C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82213c28
	ctx.lr = 0x82213D44;
	sub_82213C28(ctx, base);
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

DEFINE_REX_FUNC(sub_82215980) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82215988;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r29,13936(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 13936);
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82213e40
	ctx.lr = 0x822159A0;
	sub_82213E40(ctx, base);
	// lbz r11,11069(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 11069);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822159b8
	if (ctx.cr0.eq) goto loc_822159B8;
	// lwz r31,17136(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 17136);
	// b 0x82215a14
	goto loc_82215A14;
loc_822159B8:
	// rlwinm r11,r31,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 12) & 0xFFF;
	// stw r31,13936(r30)
	REX_STORE_U32(r30.u32 + 13936, r31.u32);
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
	// bne cr6,0x822159f0
	if (!ctx.cr6.eq) goto loc_822159F0;
	// lwz r11,13920(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 13920);
	// stw r3,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r3.u32);
	// b 0x82215a08
	goto loc_82215A08;
loc_822159F0:
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// lwz r11,13940(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 13940);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
loc_82215A08:
	// addi r4,r3,136
	ctx.r4.s64 = ctx.r3.s64 + 136;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8221c548
	ctx.lr = 0x82215A14;
	sub_8221C548(ctx, base);
loc_82215A14:
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// addi r11,r31,136
	ctx.r11.s64 = r31.s64 + 136;
	// stw r3,13940(r30)
	REX_STORE_U32(r30.u32 + 13940, ctx.r3.u32);
	// stw r11,13944(r30)
	REX_STORE_U32(r30.u32 + 13944, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82218418) {
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
	// beq cr6,0x82218448
	if (ctx.cr6.eq) goto loc_82218448;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// bl 0x823cd250
	ctx.lr = 0x82218440;
	sub_823CD250(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
loc_82218448:
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

DEFINE_REX_FUNC(sub_8221A5F8) {
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
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x823cd118
	ctx.lr = 0x8221A618;
	sub_823CD118(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,24424(r31)
	REX_STORE_U32(r31.u32 + 24424, ctx.r3.u32);
	// bne 0x8221a62c
	if (!ctx.cr0.eq) goto loc_8221A62C;
loc_8221A624:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8221a6e4
	goto loc_8221A6E4;
loc_8221A62C:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,1260
	ctx.r3.s64 = 1260;
	// bl 0x823cd118
	ctx.lr = 0x8221A638;
	sub_823CD118(ctx, base);
	// stw r3,24432(r31)
	REX_STORE_U32(r31.u32 + 24432, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8221a660
	if (!ctx.cr0.eq) goto loc_8221A660;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,24424(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24424);
	// bl 0x823cd250
	ctx.lr = 0x8221A650;
	sub_823CD250(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,24424(r31)
	REX_STORE_U32(r31.u32 + 24424, ctx.r11.u32);
	// b 0x8221a6e4
	goto loc_8221A6E4;
loc_8221A660:
	// li r10,63
	ctx.r10.s64 = 63;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8221A66C:
	// lwz r10,24424(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24424);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// lis r8,2989
	ctx.r8.s64 = 195887104;
	// ori r8,r8,53261
	ctx.r8.u64 = ctx.r8.u64 | 53261;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r10,24424(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24424);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// bdnz 0x8221a66c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221A66C;
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x823cd118
	ctx.lr = 0x8221A6A0;
	sub_823CD118(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,24448(r31)
	REX_STORE_U32(r31.u32 + 24448, ctx.r3.u32);
	// beq 0x8221a624
	if (ctx.cr0.eq) goto loc_8221A624;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x823cd118
	ctx.lr = 0x8221A6B8;
	sub_823CD118(ctx, base);
	// stw r3,24452(r31)
	REX_STORE_U32(r31.u32 + 24452, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8221a6e0
	if (!ctx.cr0.eq) goto loc_8221A6E0;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,24448(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24448);
	// bl 0x823cd250
	ctx.lr = 0x8221A6D0;
	sub_823CD250(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,24448(r31)
	REX_STORE_U32(r31.u32 + 24448, ctx.r11.u32);
	// b 0x8221a6e4
	goto loc_8221A6E4;
loc_8221A6E0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8221A6E4:
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

DEFINE_REX_FUNC(sub_8221E0F8) {
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
	ctx.lr = 0x8221E100;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
loc_8221E118:
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 52);
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw. r11,r11,r30
	ctx.r11.u64 = uint32_t((r30.s32 && !(ctx.r11.s32 == INT32_MIN && r30.s32 == -1)) ? ctx.r11.s32 / r30.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r10,r30,r10
	ctx.r10.u64 = r30.u64 & ~ctx.r10.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble 0x8221e184
	if (!ctx.cr0.gt) goto loc_8221E184;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// blt cr6,0x8221e154
	if (ctx.cr6.lt) goto loc_8221E154;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_8221E154:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | r28.u64;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// beq cr6,0x8221e180
	if (ctx.cr6.eq) goto loc_8221E180;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8221E174:
	// lwzu r10,4(r27)
	ea = 4 + r27.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	r27.u32 = ea;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// bdnz 0x8221e174
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221E174;
loc_8221E180:
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
loc_8221E184:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8221e1a0
	if (ctx.cr6.eq) goto loc_8221E1A0;
	// stw r4,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82215008
	ctx.lr = 0x8221E198;
	sub_82215008(ctx, base);
	// lwz r4,48(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 48);
	// b 0x8221e118
	goto loc_8221E118;
loc_8221E1A0:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82221A20) {
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
	ctx.lr = 0x82221A28;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// addi r10,r11,27512
	ctx.r10.s64 = ctx.r11.s64 + 27512;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbzx r24,r7,r10
	r24.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82221460
	ctx.lr = 0x82221A80;
	sub_82221460(ctx, base);
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// addi r10,r29,-1
	ctx.r10.s64 = r29.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r9,r28,-1
	ctx.r9.s64 = r28.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// subfic r10,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r10.u64 = static_cast<uint64_t>(32) - ctx.r10.u64;
	// subfic r8,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r8.u64 = static_cast<uint64_t>(32) - ctx.r9.u64;
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(r31.u32, 3, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bge cr6,0x82221b3c
	if (!ctx.cr6.lt) goto loc_82221B3C;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// sraw r10,r10,r31
	temp.u32 = r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
loc_82221AE0:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
loc_82221AE4:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mullw r7,r10,r24
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(r24.s32);
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,276(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r3,284(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mullw r7,r7,r9
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r10,r9,r10
	ctx.r10.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// rlwinm r6,r7,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r7,r8,r27
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(r27.s32);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// divwu r8,r8,r5
	ctx.r8.u64 = uint32_t(ctx.r5.u32 ? ctx.r8.u32 / ctx.r5.u32 : 0);
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mullw r10,r11,r26
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// stw r8,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec8
	return;
loc_82221B3C:
	// xori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 ^ 4;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r7,r31,-2
	ctx.r7.s64 = r31.s64 + -2;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// srw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// stwx r10,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x82221ae0
	if (!ctx.cr6.lt) goto loc_82221AE0;
	// subf r11,r31,r8
	ctx.r11.u64 = ctx.r8.u64 - r31.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82221b70
	if (ctx.cr6.gt) goto loc_82221B70;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82221B70:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82221ae4
	goto loc_82221AE4;
}

DEFINE_REX_FUNC(sub_82226FC8) {
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
	ctx.lr = 0x82226FD0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,872
	ctx.r5.s64 = 872;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822d5870
	ctx.lr = 0x82226FE8;
	sub_822D5870(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// lwz r11,872(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 872);
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822270b8
	if (ctx.cr0.eq) goto loc_822270B8;
	// addi r25,r31,40
	r25.s64 = r31.s64 + 40;
	// addi r27,r31,896
	r27.s64 = r31.s64 + 896;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
loc_8222702C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r10,r11,872
	ctx.r10.s64 = ctx.r11.s64 + 872;
	// lwz r8,896(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 896);
	// lwz r7,872(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 872);
	// addi r8,r8,9
	ctx.r8.s64 = ctx.r8.s64 + 9;
	// lwz r11,900(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 900);
	// add r26,r9,r7
	r26.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beq cr6,0x822270a0
	if (ctx.cr6.eq) goto loc_822270A0;
	// addi r30,r25,28
	r30.s64 = r25.s64 + 28;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_8222706C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + r26.u64;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82227090
	if (ctx.cr6.eq) goto loc_82227090;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82227090;
	sub_822D4FA0(ctx, base);
loc_82227090:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// bne 0x8222706c
	if (!ctx.cr0.eq) goto loc_8222706C;
loc_822270A0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// addi r25,r25,416
	r25.s64 = r25.s64 + 416;
	// bne 0x8222702c
	if (!ctx.cr0.eq) goto loc_8222702C;
loc_822270B8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8222C788) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fsubs f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x1)));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// fmr f31,f3
	f31.f64 = ctx.f3.f64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f13,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// vcsxwfp128 v11,v63,1
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// fdivs f12,f0,f2
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f2.f64));
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fnmsubs f0,f12,f12,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f12.f64, -ctx.f13.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrsqrtefp128 v0,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v63.f32))));
	// vmulfp128 v12,v0,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vor128 v10,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vmulfp128 v13,v63,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vcmpeqfp128 v62,v0,v0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v11,v13,v12,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v11.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v11,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v61,v11,v11
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v63,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vxor128 v13,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vsel v13,v0,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// stvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f3
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// bl 0x8222c5e0
	ctx.lr = 0x8222C81C;
	sub_8222C5E0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8222c5e0
	ctx.lr = 0x8222C828;
	sub_8222C5E0(ctx, base);
	// fdivs f1,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f30.f64 / ctx.f1.f64));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822339E8) {
	REX_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824d472c
	__imp__NetDll_XNetQosListen(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82233C40) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824d477c
	ctx.lr = 0x82233C60;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82233cd4
	if (!ctx.cr0.eq) goto loc_82233CD4;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ori r4,r4,17
	ctx.r4.u64 = ctx.r4.u64 | 17;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x824d3ecc
	ctx.lr = 0x82233C98;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82233ca8
	if (!ctx.cr0.lt) goto loc_82233CA8;
	// li r31,1627
	r31.s64 = 1627;
	// b 0x82233ccc
	goto loc_82233CCC;
loc_82233CA8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82233cc8
	if (!ctx.cr6.eq) goto loc_82233CC8;
	// bl 0x8220a878
	ctx.lr = 0x82233CB4;
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
	// b 0x82233ccc
	goto loc_82233CCC;
loc_82233CC8:
	// li r31,997
	r31.s64 = 997;
loc_82233CCC:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824d431c
	ctx.lr = 0x82233CD4;
	__imp__ObDereferenceObject(ctx, base);
loc_82233CD4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_822350C8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lhz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 40);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822350f4
	if (ctx.cr6.lt) goto loc_822350F4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82235110
	goto loc_82235110;
loc_822350F4:
	// lhz r9,42(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 42);
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mullw r11,r9,r4
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8223510C;
	sub_822D4FA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82235110:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822363B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822363dc
	if (!ctx.cr6.lt) goto loc_822363DC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// blr 
	return;
loc_822363DC:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82236430
	if (ctx.cr6.eq) goto loc_82236430;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addi r10,r4,-2
	ctx.r10.s64 = ctx.r4.s64 + -2;
loc_822363F8:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82236418
	if (ctx.cr6.eq) goto loc_82236418;
	// lhz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r11,r8,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// rlwimi r11,r8,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// b 0x8223641c
	goto loc_8223641C;
loc_82236418:
	// lhzu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
loc_8223641C:
	// sthu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r9.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bdnz 0x822363f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822363F8;
loc_82236430:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82237688) {
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
	ctx.lr = 0x82237690;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r30,r26
	r30.u64 = r26.u64;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822376c0
	if (ctx.cr6.eq) goto loc_822376C0;
	// stw r26,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r26.u32);
loc_822376C0:
	// lwz r29,52(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 52);
	// b 0x82237768
	goto loc_82237768;
loc_822376C8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82237764
	if (ctx.cr6.eq) goto loc_82237764;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,0(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 0);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subf r8,r30,r8
	ctx.r8.u64 = ctx.r8.u64 - r30.u64;
	// addi r31,r9,2
	r31.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8223779c
	if (ctx.cr6.gt) goto loc_8223779C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r3,r30,r27
	ctx.r3.u64 = r30.u64 + r27.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// bl 0x822d4fa0
	ctx.lr = 0x82237710;
	sub_822D4FA0(ctx, base);
	// add r30,r31,r30
	r30.u64 = r31.u64 + r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8223772c
	if (ctx.cr6.eq) goto loc_8223772C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_8223772C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r9,r31,-2
	ctx.r9.s64 = r31.s64 + -2;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8223774c
	if (!ctx.cr6.lt) goto loc_8223774C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8223774C:
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82237768
	if (!ctx.cr6.eq) goto loc_82237768;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r26.u32);
loc_82237764:
	// lwz r29,4(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 4);
loc_82237768:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x822376c8
	if (!ctx.cr6.eq) goto loc_822376C8;
	// lwz r10,4(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,32(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,240(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 240);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// stw r10,240(r11)
	REX_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
loc_82237790:
	// stw r30,0(r25)
	REX_STORE_U32(r25.u32 + 0, r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_8223779C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82237790
	if (!ctx.cr6.eq) goto loc_82237790;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// mr r30,r31
	r30.u64 = r31.u64;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82237790
	goto loc_82237790;
}

DEFINE_REX_FUNC(sub_8223B4F8) {
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
	ctx.lr = 0x8223B500;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r4,25738
	ctx.r4.s64 = 1686765568;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,16(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 16);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// bl 0x823cd118
	ctx.lr = 0x8223B528;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8223b53c
	if (!ctx.cr0.eq) goto loc_8223B53C;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x8223b5c0
	goto loc_8223B5C0;
loc_8223B53C:
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8223b808
	ctx.lr = 0x8223B54C;
	sub_8223B808(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8223b5c0
	if (ctx.cr0.lt) goto loc_8223B5C0;
	// li r27,0
	r27.s64 = 0;
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
loc_8223B55C:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223b578
	if (ctx.cr6.eq) goto loc_8223B578;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8223b808
	ctx.lr = 0x8223B570;
	sub_8223B808(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8223b5c0
	if (ctx.cr0.lt) goto loc_8223B5C0;
loc_8223B578:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(r27.u32, 2, ctx.xer);
	// blt cr6,0x8223b55c
	if (ctx.cr6.lt) goto loc_8223B55C;
	// stw r26,24(r31)
	REX_STORE_U32(r31.u32 + 24, r26.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223b5b4
	if (ctx.cr6.eq) goto loc_8223B5B4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223B5AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8223b5b8
	goto loc_8223B5B8;
loc_8223B5B4:
	// li r30,1
	r30.s64 = 1;
loc_8223B5B8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x8223b5cc
	if (!ctx.cr6.lt) goto loc_8223B5CC;
loc_8223B5C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223b450
	ctx.lr = 0x8223B5C8;
	sub_8223B450(ctx, base);
	// li r31,0
	r31.s64 = 0;
loc_8223B5CC:
	// stw r31,0(r25)
	REX_STORE_U32(r25.u32 + 0, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82240380) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82240388;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,12(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8223fd28
	ctx.lr = 0x82240398;
	sub_8223FD28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223f758
	ctx.lr = 0x822403A0;
	sub_8223F758(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// b 0x822403dc
	goto loc_822403DC;
loc_822403A8:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// subf r11,r30,r10
	ctx.r11.u64 = ctx.r10.u64 - r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822403c8
	if (ctx.cr6.lt) goto loc_822403C8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x822403d4
	goto loc_822403D4;
loc_822403C8:
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822403D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223fbd8
	ctx.lr = 0x822403DC;
	sub_8223FBD8(ctx, base);
loc_822403DC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x822403a8
	if (!ctx.cr6.eq) goto loc_822403A8;
	// li r11,600
	ctx.r11.s64 = 600;
	// stb r29,140(r31)
	REX_STORE_U8(r31.u32 + 140, r29.u8);
	// stw r29,144(r31)
	REX_STORE_U32(r31.u32 + 144, r29.u32);
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
	// stw r29,152(r31)
	REX_STORE_U32(r31.u32 + 152, r29.u32);
	// stw r29,156(r31)
	REX_STORE_U32(r31.u32 + 156, r29.u32);
	// bl 0x822094c8
	ctx.lr = 0x82240400;
	sub_822094C8(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822454A8) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82245510
	if (ctx.cr6.eq) goto loc_82245510;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,20(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x822830c0
	ctx.lr = 0x822454E4;
	sub_822830C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82245508
	if (ctx.cr0.lt) goto loc_82245508;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822454fc
	if (ctx.cr6.eq) goto loc_822454FC;
	// bl 0x82282a68
	ctx.lr = 0x822454FC;
	sub_82282A68(ctx, base);
loc_822454FC:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_82245508:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82245518
	if (ctx.cr6.lt) goto loc_82245518;
loc_82245510:
	// stfs f31,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82245518:
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

DEFINE_REX_FUNC(sub_82246190) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822461d4
	if (ctx.cr6.eq) goto loc_822461D4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822461d4
	if (ctx.cr6.eq) goto loc_822461D4;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x822461C4;
	sub_822D4FA0(ctx, base);
	// li r11,40
	ctx.r11.s64 = 40;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x822461dc
	goto loc_822461DC;
loc_822461D4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_822461DC:
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

DEFINE_REX_FUNC(sub_82246AC8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r3,23836(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 23836);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82246B60) {
	REX_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x82263660
	sub_82263660(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82246BA8) {
	REX_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x822626c8
	sub_822626C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82246BD8) {
	REX_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x82263400
	sub_82263400(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82246C20) {
	REX_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x82270228
	sub_82270228(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82246C98) {
	REX_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x82266a78
	sub_82266A78(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822470B8) {
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
	// li r4,2042
	ctx.r4.s64 = 2042;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x8225da70
	ctx.lr = 0x822470E0;
	sub_8225DA70(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x822470EC;
	sub_8227C2B8(ctx, base);
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
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

DEFINE_REX_FUNC(sub_82247968) {
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
	ctx.lr = 0x82247988;
	sub_82246220(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822479fc
	if (ctx.cr0.lt) goto loc_822479FC;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822479f4
	if (!ctx.cr6.eq) goto loc_822479F4;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822479d4
	if (ctx.cr6.eq) goto loc_822479D4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x822479c0
	if (!ctx.cr6.eq) goto loc_822479C0;
loc_822479B0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// b 0x822479e0
	goto loc_822479E0;
loc_822479C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822479f4
	if (!ctx.cr6.eq) goto loc_822479F4;
	// bl 0x82256678
	ctx.lr = 0x822479CC;
	sub_82256678(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822479b0
	if (!ctx.cr0.eq) goto loc_822479B0;
loc_822479D4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
loc_822479E0:
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// b 0x822479fc
	goto loc_822479FC;
loc_822479F4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_822479FC:
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

DEFINE_REX_FUNC(sub_82249BF0) {
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
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// beq cr6,0x82249c7c
	if (ctx.cr6.eq) goto loc_82249C7C;
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
	// bge cr6,0x82249c7c
	if (!ctx.cr6.lt) goto loc_82249C7C;
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
	// bne cr6,0x82249c7c
	if (!ctx.cr6.eq) goto loc_82249C7C;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r9,r3,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82249c7c
	if (!ctx.cr6.eq) goto loc_82249C7C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82249c88
	if (!ctx.cr6.eq) goto loc_82249C88;
loc_82249C7C:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x82249c9c
	goto loc_82249C9C;
loc_82249C88:
	// lwz r7,24(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82249cb4
	if (!ctx.cr6.eq) goto loc_82249CB4;
loc_82249C94:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,7
	ctx.r3.u64 = ctx.r3.u64 | 7;
loc_82249C9C:
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
loc_82249CB0:
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_82249CB4:
	// lwz r11,44(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82249cd0
	if (ctx.cr6.lt) goto loc_82249CD0;
	// lwz r10,48(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 48);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82249cf4
	if (ctx.cr6.lt) goto loc_82249CF4;
loc_82249CD0:
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// lwz r7,40(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x822462c8
	ctx.lr = 0x82249CE0;
	sub_822462C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82249c94
	if (ctx.cr0.lt) goto loc_82249C94;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82249cb0
	if (!ctx.cr6.eq) goto loc_82249CB0;
	// b 0x82249c94
	goto loc_82249C94;
loc_82249CF4:
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// lwz r10,28(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// li r3,0
	ctx.r3.s64 = 0;
	// mulli r11,r11,48
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(48));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r8,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// b 0x82249c9c
	goto loc_82249C9C;
}

DEFINE_REX_FUNC(sub_8224E3D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8224E3E0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,140
	ctx.r3.s64 = 140;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82255b48
	ctx.lr = 0x8224E3F4;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224e42c
	if (ctx.cr0.eq) goto loc_8224E42C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// stw r11,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stb r11,12(r3)
	REX_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// b 0x8224e430
	goto loc_8224E430;
loc_8224E42C:
	// li r31,0
	r31.s64 = 0;
loc_8224E430:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8224e444
	if (!ctx.cr6.eq) goto loc_8224E444;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8224e480
	goto loc_8224E480;
loc_8224E444:
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225d540
	ctx.lr = 0x8224E450;
	sub_8225D540(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x8224e478
	if (!ctx.cr0.lt) goto loc_8224E478;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8225d438
	ctx.lr = 0x8224E460;
	sub_8225D438(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82255b70
	ctx.lr = 0x8224E468;
	sub_82255B70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8224E470;
	sub_82255B70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8224e480
	goto loc_8224E480;
loc_8224E478:
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224E480:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82251F80) {
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
	// addi r9,r9,-5576
	ctx.r9.s64 = ctx.r9.s64 + -5576;
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
	// addi r7,r7,-22504
	ctx.r7.s64 = ctx.r7.s64 + -22504;
	// addi r10,r6,-21528
	ctx.r10.s64 = ctx.r6.s64 + -21528;
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r9,r5,27592
	ctx.r9.s64 = ctx.r5.s64 + 27592;
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
	// addi r4,r8,23588
	ctx.r4.s64 = ctx.r8.s64 + 23588;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x822512d8
	ctx.lr = 0x82252004;
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

DEFINE_REX_FUNC(sub_822531D8) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82255b48
	ctx.lr = 0x822531FC;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82253228
	if (ctx.cr0.eq) goto loc_82253228;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
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
	// b 0x8225322c
	goto loc_8225322C;
loc_82253228:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8225322C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82253240
	if (!ctx.cr6.eq) goto loc_82253240;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8225324c
	goto loc_8225324C;
loc_82253240:
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_8225324C:
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

DEFINE_REX_FUNC(sub_82255758) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82255760;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r28,r11,29456
	r28.s64 = ctx.r11.s64 + 29456;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d438c
	ctx.lr = 0x82255774;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// li r30,0
	r30.s64 = 0;
	// addi r31,r11,29488
	r31.s64 = ctx.r11.s64 + 29488;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822557b0
	if (!ctx.cr6.gt) goto loc_822557B0;
	// li r29,0
	r29.s64 = 0;
loc_82255790:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwzx r3,r29,r11
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// bl 0x822552c0
	ctx.lr = 0x8225579C;
	sub_822552C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82255790
	if (ctx.cr6.lt) goto loc_82255790;
loc_822557B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227ac70
	ctx.lr = 0x822557B8;
	sub_8227AC70(ctx, base);
	// lis r31,-32163
	r31.s64 = -2107834368;
	// lwz r3,29484(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 29484);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822557d4
	if (ctx.cr6.eq) goto loc_822557D4;
	// bl 0x82255b70
	ctx.lr = 0x822557CC;
	sub_82255B70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,29484(r31)
	REX_STORE_U32(r31.u32 + 29484, ctx.r11.u32);
loc_822557D4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d437c
	ctx.lr = 0x822557DC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82256D50) {
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
	ctx.lr = 0x82256D70;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82256d84
	if (!ctx.cr0.eq) goto loc_82256D84;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x82256d8c
	goto loc_82256D8C;
loc_82256D84:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82260258
	ctx.lr = 0x82256D8C;
	sub_82260258(ctx, base);
loc_82256D8C:
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

DEFINE_REX_FUNC(sub_82257980) {
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
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8225da70
	ctx.lr = 0x822579A8;
	sub_8225DA70(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x822579B4;
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

DEFINE_REX_FUNC(sub_82259C80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82259C88;
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
loc_82259C98:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82259d40
	goto loc_82259D40;
loc_82259CA0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82259cb8
	if (ctx.cr6.eq) goto loc_82259CB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82257bf8
	ctx.lr = 0x82259CB0;
	sub_82257BF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82259d3c
	if (ctx.cr0.eq) goto loc_82259D3C;
loc_82259CB8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82259cd0
	if (ctx.cr6.eq) goto loc_82259CD0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225ee88
	ctx.lr = 0x82259CC8;
	sub_8225EE88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82259d3c
	if (ctx.cr0.eq) goto loc_82259D3C;
loc_82259CD0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82257c40
	ctx.lr = 0x82259CDC;
	sub_82257C40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82259d3c
	if (!ctx.cr0.eq) goto loc_82259D3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822469c0
	ctx.lr = 0x82259CEC;
	sub_822469C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82247078
	ctx.lr = 0x82259D00;
	sub_82247078(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822469c0
	ctx.lr = 0x82259D08;
	sub_822469C0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8224da00
	ctx.lr = 0x82259D10;
	sub_8224DA00(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82259d28
	if (ctx.cr6.eq) goto loc_82259D28;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82259d74
	if (ctx.cr6.eq) goto loc_82259D74;
loc_82259D28:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822469c0
	ctx.lr = 0x82259D30;
	sub_822469C0(ctx, base);
	// bl 0x82259908
	ctx.lr = 0x82259D34;
	sub_82259908(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82259d7c
	if (!ctx.cr0.eq) goto loc_82259D7C;
loc_82259D3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82259D40:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82256af8
	ctx.lr = 0x82259D48;
	sub_82256AF8(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82259ca0
	if (!ctx.cr6.eq) goto loc_82259CA0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82256918
	ctx.lr = 0x82259D60;
	sub_82256918(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82259d88
	if (ctx.cr6.eq) goto loc_82259D88;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// b 0x82259c98
	goto loc_82259C98;
loc_82259D74:
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x82259d98
	goto loc_82259D98;
loc_82259D7C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822469c0
	ctx.lr = 0x82259D84;
	sub_822469C0(ctx, base);
	// b 0x82259d98
	goto loc_82259D98;
loc_82259D88:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82259a68
	ctx.lr = 0x82259D98;
	sub_82259A68(ctx, base);
loc_82259D98:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8225DCD8) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r4,2054
	ctx.r4.s64 = 2054;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x8225da70
	ctx.lr = 0x8225DCF4;
	sub_8225DA70(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x8225DD00;
	sub_8227C2B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8225E1E8) {
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
	// li r4,2006
	ctx.r4.s64 = 2006;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8225da70
	ctx.lr = 0x8225E210;
	sub_8225DA70(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x8225E21C;
	sub_8227C2B8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
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

DEFINE_REX_FUNC(sub_8225F0F8) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8225e3f0
	ctx.lr = 0x8225F120;
	sub_8225E3F0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224da00
	ctx.lr = 0x8225F12C;
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

DEFINE_REX_FUNC(sub_82261028) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x82261048;
	sub_822469C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8225ef18
	ctx.lr = 0x82261050;
	sub_8225EF18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822610f4
	if (ctx.cr0.eq) goto loc_822610F4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225ef60
	ctx.lr = 0x82261064;
	sub_8225EF60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r5,56(r30)
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + 56);
	// bl 0x82255d80
	ctx.lr = 0x82261074;
	sub_82255D80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225ee88
	ctx.lr = 0x8226107C;
	sub_8225EE88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82261090
	if (ctx.cr0.eq) goto loc_82261090;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r4,56(r30)
	ctx.r4.u64 = REX_LOAD_U8(r30.u32 + 56);
	// bl 0x82260e08
	ctx.lr = 0x82261090;
	sub_82260E08(ctx, base);
loc_82261090:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225efa8
	ctx.lr = 0x82261098;
	sub_8225EFA8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822586e0
	ctx.lr = 0x822610AC;
	sub_822586E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822610f4
	if (ctx.cr6.eq) goto loc_822610F4;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82257270
	ctx.lr = 0x822610C4;
	sub_82257270(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822610f4
	if (ctx.cr6.eq) goto loc_822610F4;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r5,12(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,16(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x822778b0
	ctx.lr = 0x822610F4;
	sub_822778B0(ctx, base);
loc_822610F4:
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

DEFINE_REX_FUNC(sub_82266A00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82266A08;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r3,28
	r30.s64 = ctx.r3.s64 + 28;
	// lwz r3,28(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82266a38
	if (ctx.cr6.eq) goto loc_82266A38;
	// bl 0x82288ee8
	ctx.lr = 0x82266A34;
	sub_82288EE8(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
loc_82266A38:
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822635f0
	ctx.lr = 0x82266A4C;
	sub_822635F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82266a70
	if (ctx.cr0.lt) goto loc_82266A70;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8228ab40
	ctx.lr = 0x82266A60;
	sub_8228AB40(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82255b70
	ctx.lr = 0x82266A6C;
	sub_82255B70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82266A70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82268B98) {
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
	ctx.lr = 0x82268BA0;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x822641d8
	ctx.lr = 0x82268BD0;
	sub_822641D8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82256c60
	ctx.lr = 0x82268BDC;
	sub_82256C60(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x82268bf4
	if (!ctx.cr0.lt) goto loc_82268BF4;
loc_82268BE4:
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x822d7b58
	ctx.lr = 0x82268BEC;
	sub_822D7B58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82268d44
	goto loc_82268D44;
loc_82268BF4:
	// lfs f30,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	f30.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f31,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	f31.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82258b88
	ctx.lr = 0x82268C0C;
	sub_82258B88(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82268be4
	if (ctx.cr0.lt) goto loc_82268BE4;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82268c9c
	if (!ctx.cr6.eq) goto loc_82268C9C;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82268c9c
	if (ctx.cr6.eq) goto loc_82268C9C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82264958
	ctx.lr = 0x82268C3C;
	sub_82264958(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82257bf8
	ctx.lr = 0x82268C44;
	sub_82257BF8(ctx, base);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82268c8c
	if (!ctx.cr6.gt) goto loc_82268C8C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82268c8c
	if (ctx.cr6.eq) goto loc_82268C8C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82268c8c
	if (ctx.cr6.eq) goto loc_82268C8C;
loc_82268C68:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82256028
	ctx.lr = 0x82268C70;
	sub_82256028(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82268c84
	if (ctx.cr0.eq) goto loc_82268C84;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// b 0x82268d38
	goto loc_82268D38;
loc_82268C84:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82268d30
	goto loc_82268D30;
loc_82268C8C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82268d38
	if (ctx.cr6.gt) goto loc_82268D38;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// b 0x82268d14
	goto loc_82268D14;
loc_82268C9C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82268d38
	if (!ctx.cr6.eq) goto loc_82268D38;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82268d38
	if (ctx.cr6.eq) goto loc_82268D38;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82264958
	ctx.lr = 0x82268CC0;
	sub_82264958(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82257bf8
	ctx.lr = 0x82268CC8;
	sub_82257BF8(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// lfs f30,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f30.f64 = double(temp.f32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x82268d00
	if (!ctx.cr6.gt) goto loc_82268D00;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82268d00
	if (ctx.cr6.eq) goto loc_82268D00;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82268d00
	if (ctx.cr6.eq) goto loc_82268D00;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82256028
	ctx.lr = 0x82268CF8;
	sub_82256028(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82268c68
	if (ctx.cr0.eq) goto loc_82268C68;
loc_82268D00:
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bgt cr6,0x82268d38
	if (ctx.cr6.gt) goto loc_82268D38;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
loc_82268D14:
	// bne cr6,0x82268d38
	if (!ctx.cr6.eq) goto loc_82268D38;
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 240);
	// lwz r10,232(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 232);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82268d38
	if (!ctx.cr6.lt) goto loc_82268D38;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82268D30:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8225e9f8
	ctx.lr = 0x82268D38;
	sub_8225E9F8(ctx, base);
loc_82268D38:
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x822d7b58
	ctx.lr = 0x82268D40;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82268D44:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82271B58) {
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
	ctx.lr = 0x82271B60;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f38
	ctx.lr = 0x82271B68;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r10,172(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// fmr f28,f2
	f28.f64 = ctx.f2.f64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmr f31,f3
	f31.f64 = ctx.f3.f64;
	// fmr f30,f4
	f30.f64 = ctx.f4.f64;
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// beq cr6,0x822724a8
	if (ctx.cr6.eq) goto loc_822724A8;
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82271bdc
	if (ctx.cr6.eq) goto loc_82271BDC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822570a8
	ctx.lr = 0x82271BAC;
	sub_822570A8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x82271bc4
	if (!ctx.cr0.lt) goto loc_82271BC4;
loc_82271BB4:
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x822d7b58
	ctx.lr = 0x82271BBC;
	sub_822D7B58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x822724b4
	goto loc_822724B4;
loc_82271BC4:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8225c6c8
	ctx.lr = 0x82271BDC;
	sub_8225C6C8(ctx, base);
loc_82271BDC:
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82271c10
	if (ctx.cr6.eq) goto loc_82271C10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822570a8
	ctx.lr = 0x82271BF0;
	sub_822570A8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82271bb4
	if (ctx.cr0.lt) goto loc_82271BB4;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8225c6c8
	ctx.lr = 0x82271C10;
	sub_8225C6C8(ctx, base);
loc_82271C10:
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82271c44
	if (ctx.cr6.eq) goto loc_82271C44;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822570a8
	ctx.lr = 0x82271C24;
	sub_822570A8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82271bb4
	if (ctx.cr0.lt) goto loc_82271BB4;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8225c6c8
	ctx.lr = 0x82271C44;
	sub_8225C6C8(ctx, base);
loc_82271C44:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82271c78
	if (ctx.cr6.eq) goto loc_82271C78;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822570a8
	ctx.lr = 0x82271C58;
	sub_822570A8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82271bb4
	if (ctx.cr0.lt) goto loc_82271BB4;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8225c6c8
	ctx.lr = 0x82271C78;
	sub_8225C6C8(ctx, base);
loc_82271C78:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stfs f28,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f29,88(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f28,f31
	f28.f64 = f31.f64;
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// beq cr6,0x82271ce8
	if (ctx.cr6.eq) goto loc_82271CE8;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8225e988
	ctx.lr = 0x82271CA4;
	sub_8225E988(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x822570a8
	ctx.lr = 0x82271CB0;
	sub_822570A8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82271bb4
	if (ctx.cr0.lt) goto loc_82271BB4;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8225c6c8
	ctx.lr = 0x82271CD0;
	sub_8225C6C8(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8225e988
	ctx.lr = 0x82271CE0;
	sub_8225E988(ctx, base);
	// lfs f28,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	f28.f64 = double(temp.f32);
	// lfs f30,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	f30.f64 = double(temp.f32);
loc_82271CE8:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// li r24,0
	r24.s64 = 0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82271d48
	if (ctx.cr6.eq) goto loc_82271D48;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82271d48
	if (ctx.cr6.eq) goto loc_82271D48;
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82271d68
	if (!ctx.cr6.gt) goto loc_82271D68;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_82271D14:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,156(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 156);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bl 0x8225c6c8
	ctx.lr = 0x82271D30;
	sub_8225C6C8(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82271d14
	if (ctx.cr6.lt) goto loc_82271D14;
	// b 0x82271d68
	goto loc_82271D68;
loc_82271D48:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82271d64
	if (ctx.cr6.eq) goto loc_82271D64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82269a18
	ctx.lr = 0x82271D60;
	sub_82269A18(ctx, base);
	// b 0x82271d68
	goto loc_82271D68;
loc_82271D64:
	// bl 0x8226ea40
	ctx.lr = 0x82271D68;
	sub_8226EA40(ctx, base);
loc_82271D68:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82271da0
	if (!ctx.cr6.eq) goto loc_82271DA0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82271da0
	if (!ctx.cr6.eq) goto loc_82271DA0;
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r5,r31,64
	ctx.r5.s64 = r31.s64 + 64;
	// addi r4,r31,60
	ctx.r4.s64 = r31.s64 + 60;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8225e988
	ctx.lr = 0x82271D94;
	sub_8225E988(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x82271e24
	if (!ctx.cr0.lt) goto loc_82271E24;
	// b 0x82271bb4
	goto loc_82271BB4;
loc_82271DA0:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// fsubs f31,f30,f0
	f31.f64 = double(float(f30.f64 - ctx.f0.f64));
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822570a8
	ctx.lr = 0x82271DB8;
	sub_822570A8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82271bb4
	if (ctx.cr0.lt) goto loc_82271BB4;
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82256cb0
	ctx.lr = 0x82271DD0;
	sub_82256CB0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82271bb4
	if (ctx.cr0.lt) goto loc_82271BB4;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// andi. r10,r11,5
	ctx.r10.u64 = ctx.r11.u64 & 5;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bne cr6,0x82271e04
	if (!ctx.cr6.eq) goto loc_82271E04;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f28,f0
	ctx.f0.f64 = double(float(f28.f64 - ctx.f0.f64));
	// lfs f13,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,60(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
loc_82271E04:
	// andi. r11,r11,10
	ctx.r11.u64 = ctx.r11.u64 & 10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x82271e24
	if (!ctx.cr6.eq) goto loc_82271E24;
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 / ctx.f0.f64));
	// lfs f13,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
loc_82271E24:
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822724a8
	if (ctx.cr6.eq) goto loc_822724A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,244(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 244);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f29,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f29.f64 = double(temp.f32);
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// beq 0x82271e50
	if (ctx.cr0.eq) goto loc_82271E50;
	// lfs f29,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	f29.f64 = double(temp.f32);
	// lfs f0,140(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
loc_82271E50:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82272004
	if (ctx.cr6.eq) goto loc_82272004;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82271f5c
	if (ctx.cr6.eq) goto loc_82271F5C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x82271f48
	if (!ctx.cr6.gt) goto loc_82271F48;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x82271f48
	if (ctx.cr6.gt) goto loc_82271F48;
	// lfs f13,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// fsubs f13,f30,f13
	ctx.f13.f64 = double(float(f30.f64 - ctx.f13.f64));
	// lfs f12,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f30,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f30.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f31,f0,f12
	f31.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822d6500
	ctx.lr = 0x82271EA4;
	sub_822D6500(ctx, base);
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 + ctx.f0.f64));
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// blt cr6,0x82271ec4
	if (ctx.cr6.lt) goto loc_82271EC4;
	// bl 0x822d60f0
	ctx.lr = 0x82271EC0;
	sub_822D60F0(ctx, base);
	// b 0x82271ec8
	goto loc_82271EC8;
loc_82271EC4:
	// bl 0x822d6130
	ctx.lr = 0x82271EC8;
	sub_822D6130(ctx, base);
loc_82271EC8:
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f30,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	f30.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,224
	ctx.r12.s64 = 224;
	// stfiwx f0,r31,r12
	REX_STORE_U32(r31.u32 + ctx.r12.u32, ctx.f0.u32);
	// lfs f0,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f28,f0
	ctx.f0.f64 = double(float(f28.f64 - ctx.f0.f64));
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - f29.f64));
	// fdivs f31,f0,f13
	f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822d6500
	ctx.lr = 0x82271F04;
	sub_822D6500(ctx, base);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 + ctx.f0.f64));
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// blt cr6,0x82271f24
	if (ctx.cr6.lt) goto loc_82271F24;
	// bl 0x822d60f0
	ctx.lr = 0x82271F20;
	sub_822D60F0(ctx, base);
	// b 0x82271f28
	goto loc_82271F28;
loc_82271F24:
	// bl 0x822d6130
	ctx.lr = 0x82271F28;
	sub_822D6130(ctx, base);
loc_82271F28:
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,228
	ctx.r12.s64 = 228;
	// stfiwx f0,r31,r12
	REX_STORE_U32(r31.u32 + ctx.r12.u32, ctx.f0.u32);
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 228);
	// mullw r30,r11,r10
	r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// b 0x822720ac
	goto loc_822720AC;
loc_82271F48:
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x822d7b58
	ctx.lr = 0x82271F50;
	sub_822D7B58(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x822724b4
	goto loc_822724B4;
loc_82271F5C:
	// lfs f0,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// fsubs f0,f28,f0
	ctx.f0.f64 = double(float(f28.f64 - ctx.f0.f64));
	// lfs f13,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f30,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	f30.f64 = double(temp.f32);
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - f29.f64));
	// fdivs f31,f0,f13
	f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822d6500
	ctx.lr = 0x82271F88;
	sub_822D6500(ctx, base);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 + ctx.f0.f64));
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// blt cr6,0x82271fb8
	if (ctx.cr6.lt) goto loc_82271FB8;
	// bl 0x822d60f0
	ctx.lr = 0x82271FA4;
	sub_822D60F0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r30,92(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82271fcc
	goto loc_82271FCC;
loc_82271FB8:
	// bl 0x822d6130
	ctx.lr = 0x82271FBC;
	sub_822D6130(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r30,92(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_82271FCC:
	// stw r30,228(r31)
	REX_STORE_U32(r31.u32 + 228, r30.u32);
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,224(r31)
	REX_STORE_U32(r31.u32 + 224, r29.u32);
	// lfs f13,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f13,f12,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// bl 0x822d6130
	ctx.lr = 0x82271FF4;
	sub_822D6130(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f0,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// b 0x822720a8
	goto loc_822720A8;
loc_82272004:
	// lfs f13,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fsubs f13,f30,f13
	ctx.f13.f64 = double(float(f30.f64 - ctx.f13.f64));
	// lfs f12,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f30,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f30.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f31,f0,f12
	f31.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822d6500
	ctx.lr = 0x82272030;
	sub_822D6500(ctx, base);
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 + ctx.f0.f64));
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// blt cr6,0x82272060
	if (ctx.cr6.lt) goto loc_82272060;
	// bl 0x822d60f0
	ctx.lr = 0x8227204C;
	sub_822D60F0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r30,92(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82272074
	goto loc_82272074;
loc_82272060:
	// bl 0x822d6130
	ctx.lr = 0x82272064;
	sub_822D6130(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r30,92(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_82272074:
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,224(r31)
	REX_STORE_U32(r31.u32 + 224, r30.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// stw r29,228(r31)
	REX_STORE_U32(r31.u32 + 228, r29.u32);
	// lfs f0,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f12,60(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f13,f12,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// bl 0x822d6130
	ctx.lr = 0x822720A4;
	sub_822D6130(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
loc_822720A8:
	// stfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
loc_822720AC:
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x822720bc
	if (!ctx.cr6.lt) goto loc_822720BC;
	// stw r29,224(r31)
	REX_STORE_U32(r31.u32 + 224, r29.u32);
loc_822720BC:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x822720cc
	if (!ctx.cr6.lt) goto loc_822720CC;
	// stw r29,228(r31)
	REX_STORE_U32(r31.u32 + 228, r29.u32);
loc_822720CC:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bge cr6,0x822720fc
	if (!ctx.cr6.lt) goto loc_822720FC;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822720e8
	if (!ctx.cr6.eq) goto loc_822720E8;
	// lwz r30,228(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 228);
	// b 0x822720fc
	goto loc_822720FC;
loc_822720E8:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822720f8
	if (!ctx.cr6.eq) goto loc_822720F8;
	// lwz r30,224(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 224);
	// b 0x822720fc
	goto loc_822720FC;
loc_822720F8:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_822720FC:
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822721a0
	if (!ctx.cr6.lt) goto loc_822721A0;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// blt cr6,0x82272128
	if (ctx.cr6.lt) goto loc_82272128;
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x8225eb40
	ctx.lr = 0x82272128;
	sub_8225EB40(ctx, base);
loc_82272128:
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// mr r28,r30
	r28.u64 = r30.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82272164
	if (!ctx.cr6.lt) goto loc_82272164;
	// rlwinm r29,r30,2,0,29
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_8227213C:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// lwzx r3,r11,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// bl 0x822516b0
	ctx.lr = 0x82272148;
	sub_822516B0(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stwx r24,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, r24.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227213c
	if (ctx.cr6.lt) goto loc_8227213C;
loc_82272164:
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// stw r30,172(r31)
	REX_STORE_U32(r31.u32 + 172, r30.u32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// blt cr6,0x8227217c
	if (ctx.cr6.lt) goto loc_8227217C;
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// stw r11,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r11.u32);
loc_8227217C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82272198
	if (ctx.cr6.eq) goto loc_82272198;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82269a18
	ctx.lr = 0x82272194;
	sub_82269A18(ctx, base);
	// b 0x82272318
	goto loc_82272318;
loc_82272198:
	// bl 0x8226ea40
	ctx.lr = 0x8227219C;
	sub_8226EA40(ctx, base);
	// b 0x82272318
	goto loc_82272318;
loc_822721A0:
	// ble cr6,0x82272324
	if (!ctx.cr6.gt) goto loc_82272324;
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,176(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 176);
	// bl 0x82255b88
	ctx.lr = 0x822721B0;
	sub_82255B88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822721cc
	if (!ctx.cr0.eq) goto loc_822721CC;
loc_822721B8:
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x822d7b58
	ctx.lr = 0x822721C0;
	sub_822D7B58(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x822724b4
	goto loc_822724B4;
loc_822721CC:
	// stw r3,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r3.u32);
	// lis r26,-32163
	r26.s64 = -2107834368;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,23544(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 23544);
	// bl 0x82255c88
	ctx.lr = 0x822721E0;
	sub_82255C88(ctx, base);
	// lwz r29,172(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 172);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(r29.s32, r30.s32, ctx.xer);
	// bge cr6,0x82272248
	if (!ctx.cr6.lt) goto loc_82272248;
	// rlwinm r27,r29,2,0,29
	r27.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_822721F4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82268d58
	ctx.lr = 0x82272200;
	sub_82268D58(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// blt 0x82272268
	if (ctx.cr0.lt) goto loc_82272268;
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// lwz r4,23544(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 23544);
	// lwzx r3,r11,r27
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// bl 0x82255c88
	ctx.lr = 0x82272218;
	sub_82255C88(ctx, base);
	// lfs f0,260(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stfs f0,260(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// lfs f0,264(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(r29.s32, r30.s32, ctx.xer);
	// stfs f0,264(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// lfs f0,268(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,268(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// lfs f0,272(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,272(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 272, temp.u32);
	// blt cr6,0x822721f4
	if (ctx.cr6.lt) goto loc_822721F4;
loc_82272248:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,172(r31)
	REX_STORE_U32(r31.u32 + 172, r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82272278
	if (ctx.cr6.eq) goto loc_82272278;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82269a18
	ctx.lr = 0x82272264;
	sub_82269A18(ctx, base);
	// b 0x8227227c
	goto loc_8227227C;
loc_82272268:
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x822d7b58
	ctx.lr = 0x82272270;
	sub_822D7B58(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x822724b4
	goto loc_822724B4;
loc_82272278:
	// bl 0x8226ea40
	ctx.lr = 0x8227227C;
	sub_8226EA40(ctx, base);
loc_8227227C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82256758
	ctx.lr = 0x82272284;
	sub_82256758(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822722a0
	if (ctx.cr6.eq) goto loc_822722A0;
	// bl 0x822568d0
	ctx.lr = 0x82272294;
	sub_822568D0(ctx, base);
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82256880
	ctx.lr = 0x822722A0;
	sub_82256880(ctx, base);
loc_822722A0:
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822722bc
	if (ctx.cr6.eq) goto loc_822722BC;
	// bl 0x822568d0
	ctx.lr = 0x822722B0;
	sub_822568D0(ctx, base);
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82256880
	ctx.lr = 0x822722BC;
	sub_82256880(ctx, base);
loc_822722BC:
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822722d8
	if (ctx.cr6.eq) goto loc_822722D8;
	// bl 0x822568d0
	ctx.lr = 0x822722CC;
	sub_822568D0(ctx, base);
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82256880
	ctx.lr = 0x822722D8;
	sub_82256880(ctx, base);
loc_822722D8:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822722f4
	if (ctx.cr6.eq) goto loc_822722F4;
	// bl 0x822568d0
	ctx.lr = 0x822722E8;
	sub_822568D0(ctx, base);
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82256880
	ctx.lr = 0x822722F4;
	sub_82256880(ctx, base);
loc_822722F4:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82272310
	if (ctx.cr6.eq) goto loc_82272310;
	// bl 0x822568d0
	ctx.lr = 0x82272304;
	sub_822568D0(ctx, base);
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82256880
	ctx.lr = 0x82272310;
	sub_82256880(ctx, base);
loc_82272310:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82256758
	ctx.lr = 0x82272318;
	sub_82256758(ctx, base);
loc_82272318:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822716f0
	ctx.lr = 0x82272320;
	sub_822716F0(ctx, base);
	// b 0x8227235c
	goto loc_8227235C;
loc_82272324:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8227233c
	if (!ctx.cr6.eq) goto loc_8227233C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8227235c
	if (ctx.cr6.eq) goto loc_8227235C;
loc_8227233C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82272358
	if (ctx.cr6.eq) goto loc_82272358;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82269a18
	ctx.lr = 0x82272354;
	sub_82269A18(ctx, base);
	// b 0x8227235c
	goto loc_8227235C;
loc_82272358:
	// bl 0x8226ea40
	ctx.lr = 0x8227235C;
	sub_8226EA40(ctx, base);
loc_8227235C:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82272380
	if (ctx.cr6.eq) goto loc_82272380;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82272380
	if (ctx.cr6.eq) goto loc_82272380;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82272380
	if (ctx.cr6.eq) goto loc_82272380;
	// lwz r27,224(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 224);
	// b 0x82272384
	goto loc_82272384;
loc_82272380:
	// lwz r27,228(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 228);
loc_82272384:
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// bge cr6,0x822724a8
	if (!ctx.cr6.lt) goto loc_822724A8;
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822723d4
	if (!ctx.cr6.gt) goto loc_822723D4;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_822723A0:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822723c0
	if (ctx.cr6.eq) goto loc_822723C0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822516b0
	ctx.lr = 0x822723B8;
	sub_822516B0(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// stwx r24,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, r24.u32);
loc_822723C0:
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822723a0
	if (ctx.cr6.lt) goto loc_822723A0;
loc_822723D4:
	// lwz r3,184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 184);
	// bl 0x82255b70
	ctx.lr = 0x822723DC;
	sub_82255B70(ctx, base);
	// stw r24,184(r31)
	REX_STORE_U32(r31.u32 + 184, r24.u32);
	// rlwinm r3,r27,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r24,180(r31)
	REX_STORE_U32(r31.u32 + 180, r24.u32);
	// bl 0x82255b48
	ctx.lr = 0x822723EC;
	sub_82255B48(ctx, base);
	// stw r3,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822721b8
	if (ctx.cr0.eq) goto loc_822721B8;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// bne cr6,0x82272424
	if (!ctx.cr6.eq) goto loc_82272424;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82256990
	ctx.lr = 0x82272418;
	sub_82256990(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82256a80
	ctx.lr = 0x82272424;
	sub_82256A80(ctx, base);
loc_82272424:
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x822724a4
	if (!ctx.cr6.gt) goto loc_822724A4;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_82272434:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,168(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 168);
	// li r5,1
	ctx.r5.s64 = 1;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x8225b210
	ctx.lr = 0x82272450;
	sub_8225B210(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x822724c4
	if (ctx.cr0.lt) goto loc_822724C4;
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bl 0x8225e9f8
	ctx.lr = 0x82272468;
	sub_8225E9F8(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bne cr6,0x82272490
	if (!ctx.cr6.eq) goto loc_82272490;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82256b70
	ctx.lr = 0x8227248C;
	sub_82256B70(ctx, base);
	// b 0x82272494
	goto loc_82272494;
loc_82272490:
	// bl 0x82256880
	ctx.lr = 0x82272494;
	sub_82256880(ctx, base);
loc_82272494:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(r28.s32, r27.s32, ctx.xer);
	// blt cr6,0x82272434
	if (ctx.cr6.lt) goto loc_82272434;
loc_822724A4:
	// stw r27,180(r31)
	REX_STORE_U32(r31.u32 + 180, r27.u32);
loc_822724A8:
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x822d7b58
	ctx.lr = 0x822724B0;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822724B4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f84
	ctx.lr = 0x822724C0;
	// b 0x822d4ec8
	return;
loc_822724C4:
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x822d7b58
	ctx.lr = 0x822724CC;
	sub_822D7B58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x822724b4
	goto loc_822724B4;
}

DEFINE_REX_FUNC(sub_8229D198) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r11,22040
	ctx.r11.s64 = ctx.r11.s64 + 22040;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r11,-4096
	ctx.r10.s64 = ctx.r11.s64 + -4096;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229DEB8) {
	REX_FUNC_PROLOGUE();
	// lhz r3,30(r3)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + 30);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229DEC8) {
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
	ctx.lr = 0x8229DED0;
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x822151d8
	ctx.lr = 0x8229DEF8;
	sub_822151D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8229df08
	if (ctx.cr0.eq) goto loc_8229DF08;
loc_8229DF00:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8229e090
	goto loc_8229E090;
loc_8229DF08:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x822160f0
	ctx.lr = 0x8229DF20;
	sub_822160F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8229df00
	if (!ctx.cr0.eq) goto loc_8229DF00;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8229e014
	if (ctx.cr6.eq) goto loc_8229E014;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8229df00
	if (!ctx.cr6.eq) goto loc_8229DF00;
	// lwz r24,16(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82223010
	ctx.lr = 0x8229DF58;
	sub_82223010(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x824081f8
	ctx.lr = 0x8229DF68;
	sub_824081F8(ctx, base);
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8229e004
	if (ctx.cr0.eq) goto loc_8229E004;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi r27,r28,16
	r27.u64 = r28.u32 & 0xFFFF;
	// clrlwi r26,r26,16
	r26.u64 = r26.u32 & 0xFFFF;
	// addi r28,r11,22616
	r28.s64 = ctx.r11.s64 + 22616;
	// lfs f31,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
loc_8229DF90:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,188(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// rlwinm r10,r8,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// li r8,0
	ctx.r8.s64 = 0;
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r27.s32);
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r6,168(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// lwz r5,164(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,120(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r7,r11,0,24,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// mullw r11,r26,r10
	ctx.r11.s64 = int64_t(r26.s32) * int64_t(ctx.r10.s32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mullw r29,r9,r30
	r29.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + r25.u64;
	// add r3,r29,r3
	ctx.r3.u64 = r29.u64 + ctx.r3.u64;
	// bl 0x82407028
	ctx.lr = 0x8229DFF4;
	sub_82407028(ctx, base);
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8229df90
	if (ctx.cr6.lt) goto loc_8229DF90;
loc_8229E004:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822213c0
	ctx.lr = 0x8229E010;
	sub_822213C0(ctx, base);
	// b 0x8229e08c
	goto loc_8229E08C;
loc_8229E014:
	// clrlwi r11,r30,16
	ctx.r11.u64 = r30.u32 & 0xFFFF;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// clrlwi r10,r29,16
	ctx.r10.u64 = r29.u32 & 0xFFFF;
	// clrlwi r9,r28,16
	ctx.r9.u64 = r28.u32 & 0xFFFF;
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// clrlwi r8,r26,16
	ctx.r8.u64 = r26.u32 & 0xFFFF;
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stw r10,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824081f8
	ctx.lr = 0x8229E04C;
	sub_824081F8(ctx, base);
	// li r7,4096
	ctx.r7.s64 = 4096;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,16(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82222e80
	ctx.lr = 0x8229E068;
	sub_82222E80(ctx, base);
	// lwz r11,204(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r10,180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x82209140
	ctx.lr = 0x8229E080;
	sub_82209140(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822213c0
	ctx.lr = 0x8229E08C;
	sub_822213C0(ctx, base);
loc_8229E08C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8229E090:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_822A3C80) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822186c0
	ctx.lr = 0x822A3CA0;
	sub_822186C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_822A4590) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822a460c
	if (!ctx.cr6.eq) goto loc_822A460C;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r3,28(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,16(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822160f0
	ctx.lr = 0x822A45D0;
	sub_822160F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822a45f4
	if (ctx.cr0.eq) goto loc_822A45F4;
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822125d0
	ctx.lr = 0x822A45F4;
	sub_822125D0(ctx, base);
loc_822A45F4:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82217228
	ctx.lr = 0x822A4608;
	sub_82217228(ctx, base);
	// b 0x822a4610
	goto loc_822A4610;
loc_822A460C:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
loc_822A4610:
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

DEFINE_REX_FUNC(sub_822A7478) {
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
	// bl 0x822d4e74
	ctx.lr = 0x822A7480;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f2c
	ctx.lr = 0x822A7488;
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f13,416(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 416);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,400(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 400);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,404(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 404);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,420(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 420);
	ctx.f9.f64 = double(temp.f32);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// lfs f12,408(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 408);
	ctx.f12.f64 = double(temp.f32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lfs f8,424(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 424);
	ctx.f8.f64 = double(temp.f32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lfs f11,32352(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32352);
	ctx.f11.f64 = double(temp.f32);
	// addi r31,r3,416
	r31.s64 = ctx.r3.s64 + 416;
	// fmadds f10,f9,f13,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f27,f8,f12,f10
	f27.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f10.f64)));
	// fcmpu cr6,f27,f11
	ctx.cr6.compare(f27.f64, ctx.f11.f64);
	// bgt cr6,0x822a7a00
	if (ctx.cr6.gt) goto loc_822A7A00;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f11,23048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 23048);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f27,f11
	ctx.cr6.compare(f27.f64, ctx.f11.f64);
	// blt cr6,0x822a7a00
	if (ctx.cr6.lt) goto loc_822A7A00;
	// lbz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 48);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822a7508
	if (ctx.cr0.eq) goto loc_822A7508;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822a7138
	ctx.lr = 0x822A7500;
	sub_822A7138(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822a7518
	goto loc_822A7518;
loc_822A7508:
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_822A7518:
	// lfs f11,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f5,f11
	ctx.f5.f64 = ctx.f11.f64;
	// lfs f31,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	f31.f64 = double(temp.f32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f6,f9
	ctx.f6.f64 = ctx.f9.f64;
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fmsubs f13,f13,f31,f8
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, -ctx.f8.f64)));
	// fmsubs f12,f12,f11,f7
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f11.f64, -ctx.f7.f64)));
	// fmsubs f0,f9,f0,f10
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, -ctx.f10.f64)));
	// fmuls f10,f5,f13
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmsubs f0,f6,f0,f10
	ctx.f0.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, -ctx.f10.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmsubs f0,f13,f31,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, -ctx.f9.f64)));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmsubs f12,f5,f12,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, -ctx.f11.f64)));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822a70e8
	ctx.lr = 0x822A7580;
	sub_822A70E8(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r29,384
	r30.s64 = r29.s64 + 384;
	// lfs f12,384(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 384);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lfs f11,388(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 388);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f31,f12
	ctx.f12.f64 = double(float(f31.f64 + ctx.f12.f64));
	// lfs f10,392(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 392);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f12,320(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stfs f0,324(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// stfs f13,328(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822ca9b8
	ctx.lr = 0x822A75C4;
	sub_822CA9B8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f29,1452(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	f29.f64 = double(temp.f32);
	// lfs f28,7260(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 7260);
	f28.f64 = double(temp.f32);
	// fmr f31,f29
	f31.f64 = f29.f64;
	// stfs f29,116(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmr f25,f28
	f25.f64 = f28.f64;
	// stfs f28,84(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f29,120(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f29,112(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f28,88(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f28,80(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r28,0(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	// srawi. r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a76cc
	if (ctx.cr0.eq) goto loc_822A76CC;
	// addi r25,r26,16
	r25.s64 = r26.s64 + 16;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
loc_822A7610:
	// li r10,3
	ctx.r10.s64 = 3;
	// lfs f13,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// lfs f12,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r25,-20
	ctx.r11.s64 = r25.s64 + -20;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822A762C:
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f9,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f0,f0,f11,f10
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f10.f64)));
	// fmadds f0,f8,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f0.f64)));
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822a762c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A762C;
	// lfs f0,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f13,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f12,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x822a4f30
	ctx.lr = 0x822A767C;
	sub_822A4F30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f31.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x822a4ed0
	ctx.lr = 0x822A76A8;
	sub_822A4ED0(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// lfs f25,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	f25.f64 = double(temp.f32);
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// lfs f13,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f25,84(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bne 0x822a7610
	if (!ctx.cr0.eq) goto loc_822A7610;
loc_822A76CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,672(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 672);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f30,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f30.f64 = double(temp.f32);
	// fnmsubs f0,f27,f27,f30
	ctx.f0.f64 = double(float(-std::fma(f27.f64, f27.f64, -f30.f64)));
	// fsqrts f26,f0
	f26.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f27,f30,f26
	f27.f64 = double(float(f30.f64 / f26.f64));
	// beq 0x822a76fc
	if (ctx.cr0.eq) goto loc_822A76FC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822a6070
	ctx.lr = 0x822A76F4;
	sub_822A6070(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822a7700
	goto loc_822A7700;
loc_822A76FC:
	// lfs f0,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
loc_822A7700:
	// fsubs f13,f25,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f25.f64 - f31.f64));
	// lfs f12,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// lfs f11,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lfs f9,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// lfs f8,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// lfs f7,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f6,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fmadds f3,f13,f26,f0
	ctx.f3.f64 = double(float(std::fma(ctx.f13.f64, f26.f64, ctx.f0.f64)));
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fsqrts f3,f3
	ctx.f3.f64 = double(float(sqrt(ctx.f3.f64)));
	// fadds f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fmuls f27,f0,f27
	f27.f64 = double(float(ctx.f0.f64 * f27.f64));
	// fsubs f0,f31,f27
	ctx.f0.f64 = double(float(f31.f64 - f27.f64));
	// fadds f31,f27,f13
	f31.f64 = double(float(f27.f64 + ctx.f13.f64));
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f0,336(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// fadds f13,f12,f8
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f13,340(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// fadds f12,f7,f11
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f12,344(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// fadds f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// stfs f0,304(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// fadds f0,f5,f13
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stfs f0,308(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// fadds f0,f4,f12
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// stfs f0,312(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// bl 0x822ca9b8
	ctx.lr = 0x822A779C;
	sub_822CA9B8(ctx, base);
	// fmuls f13,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 * f27.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f12,f31,f27
	ctx.f12.f64 = double(float(f31.f64 - f27.f64));
	// fadds f11,f31,f27
	ctx.f11.f64 = double(float(f31.f64 + f27.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f30,176(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stfs f30,204(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stfs f30,216(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// lfs f0,2372(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2372);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// stfs f31,180(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fdivs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// stfs f31,200(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f31,208(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f31,212(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f31,224(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f31,232(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f31,236(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// bl 0x8229f270
	ctx.lr = 0x822A7814;
	sub_8229F270(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821f3f40
	ctx.lr = 0x822A7820;
	sub_821F3F40(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// stfs f29,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f29,116(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmr f26,f29
	f26.f64 = f29.f64;
	// stfs f29,112(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f27,f29
	f27.f64 = f29.f64;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// fmr f13,f28
	ctx.f13.f64 = f28.f64;
	// stfs f28,88(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// srawi. r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f28,84(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f0,f28
	ctx.f0.f64 = f28.f64;
	// stfs f28,80(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq 0x822a794c
	if (ctx.cr0.eq) goto loc_822A794C;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_822A7864:
	// li r11,4
	ctx.r11.s64 = 4;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822A787C:
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f11,-32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f10,-16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -48);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f11,f10,f12,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f11.f64)));
	// fmadds f11,f9,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f11.f64)));
	// fadds f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfsx f11,r10,r9
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822a787c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A787C;
	// lfs f0,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// fdivs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 / ctx.f0.f64));
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f11,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// fmuls f29,f0,f13
	f29.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f29,128(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f28,f0,f12
	f28.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f28,132(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f27,f0,f11
	f27.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f27,136(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x822a4f30
	ctx.lr = 0x822A78F0;
	sub_822A4F30(ctx, base);
	// stfs f29,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f27,152(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stfs f28,148(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// lfs f29,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f29.f64 = double(temp.f32);
	// lfs f27,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f27.f64 = double(temp.f32);
	// lfs f26,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f26.f64 = double(temp.f32);
	// stfs f29,112(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f27,116(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f26,120(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x822a4ed0
	ctx.lr = 0x822A7928;
	sub_822A4ED0(ctx, base);
	// lfs f28,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	f28.f64 = double(temp.f32);
	// lfs f0,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lfs f13,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// stfs f28,80(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bne 0x822a7864
	if (!ctx.cr0.eq) goto loc_822A7864;
loc_822A794C:
	// fsubs f12,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 - f27.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f11,f13,f26
	ctx.f11.f64 = double(float(ctx.f13.f64 - f26.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f10,f28,f29
	ctx.f10.f64 = double(float(f28.f64 - f29.f64));
	// stfs f31,244(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// fadds f9,f27,f0
	ctx.f9.f64 = double(float(f27.f64 + ctx.f0.f64));
	// stfs f31,248(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// fadds f8,f29,f28
	ctx.f8.f64 = double(float(f29.f64 + f28.f64));
	// stfs f31,252(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// lfs f0,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lfs f13,2008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stfs f31,256(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stfs f31,264(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f31,268(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// fdivs f7,f0,f12
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f31,272(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// fdivs f6,f0,f11
	ctx.f6.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f31,276(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// fdivs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// stfs f31,284(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// fdivs f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// stfs f30,300(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// stfs f13,260(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// fdivs f12,f30,f11
	ctx.f12.f64 = double(float(f30.f64 / ctx.f11.f64));
	// stfs f10,240(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f12,280(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// fmuls f13,f7,f9
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// stfs f13,292(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// fmuls f13,f6,f26
	ctx.f13.f64 = double(float(ctx.f6.f64 * f26.f64));
	// stfs f13,296(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfs f0,288(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// bl 0x8229f270
	ctx.lr = 0x822A79E4;
	sub_8229F270(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x821f3f40
	ctx.lr = 0x822A79F0;
	sub_821F3F40(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x821f3f40
	ctx.lr = 0x822A79FC;
	sub_821F3F40(ctx, base);
	// b 0x822a7a14
	goto loc_822A7A14;
loc_822A7A00:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822a71f0
	ctx.lr = 0x822A7A14;
	sub_822A71F0(ctx, base);
loc_822A7A14:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f78
	ctx.lr = 0x822A7A20;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_822C6C80) {
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
	// bl 0x822aad78
	ctx.lr = 0x822C6C9C;
	sub_822AAD78(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x822c6cb8
	if (ctx.cr0.eq) goto loc_822C6CB8;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x822c6ccc
	goto loc_822C6CCC;
loc_822C6CB8:
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lwz r9,52(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r11,31464(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 31464);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r4,r11,624
	ctx.r4.s64 = ctx.r11.s64 + 624;
loc_822C6CCC:
	// bctrl 
	ctx.lr = 0x822C6CD0;
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

DEFINE_REX_FUNC(sub_822C8640) {
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
	ctx.lr = 0x822C8664;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C8678;
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

DEFINE_REX_FUNC(sub_822C9170) {
	REX_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lwbrx r10,0,r3
	ctx.r10.u64 = __builtin_bswap32(REX_LOAD_U32(ctx.r3.u32));
	// lwbrx r11,0,r11
	ctx.r11.u64 = __builtin_bswap32(REX_LOAD_U32(ctx.r11.u32));
	// rldimi r10,r11,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// std r10,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C9720) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r30,r3,28
	r30.s64 = ctx.r3.s64 + 28;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C9750;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,13(r31)
	REX_STORE_U8(r31.u32 + 13, ctx.r11.u8);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C976C;
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

DEFINE_REX_FUNC(sub_822CA1F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fsubs f10,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f7,f1,f2
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f9,f4,f3
	ctx.f9.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fadds f4,f3,f4
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fsubs f8,f6,f5
	ctx.f8.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fadds f6,f5,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// lfs f13,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,2372(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2372);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fdivs f5,f13,f10
	ctx.f5.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fdivs f10,f7,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 / ctx.f10.f64));
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fdivs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fdivs f9,f4,f9
	ctx.f9.f64 = double(float(ctx.f4.f64 / ctx.f9.f64));
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fdivs f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f8.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fdivs f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 / ctx.f8.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,60(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f5,0(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fneg f0,f10
	ctx.f0.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f11,40(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fneg f0,f9
	ctx.f0.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// fneg f0,f8
	ctx.f0.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CD798) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,31804(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31804);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CD850) {
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
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x822c8af8
	ctx.lr = 0x822CD868;
	sub_822C8AF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822CE2D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822CE2E0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
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
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CE304;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r29,41(r31)
	REX_STORE_U8(r31.u32 + 41, r29.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CE31C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822CF580) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822cf60c
	if (ctx.cr6.eq) goto loc_822CF60C;
	// lwz r5,4(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm. r11,r5,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cf5b8
	if (ctx.cr0.eq) goto loc_822CF5B8;
	// clrlwi r5,r5,1
	ctx.r5.u64 = ctx.r5.u32 & 0x7FFFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822cf5bc
	goto loc_822CF5BC;
loc_822CF5B8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822CF5BC:
	// bl 0x822d2318
	ctx.lr = 0x822CF5C0;
	sub_822D2318(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cf60c
	if (ctx.cr6.eq) goto loc_822CF60C;
	// bl 0x822d1b40
	ctx.lr = 0x822CF5CC;
	sub_822D1B40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822cf60c
	if (ctx.cr0.eq) goto loc_822CF60C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x822cf5f8
	if (ctx.cr6.eq) goto loc_822CF5F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
loc_822CF5F8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stb r11,12(r3)
	REX_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
loc_822CF60C:
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

DEFINE_REX_FUNC(sub_822D1D08) {
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
	ctx.lr = 0x822D1D38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lhz r31,22(r31)
	r31.u64 = REX_LOAD_U16(r31.u32 + 22);
	// bctrl 
	ctx.lr = 0x822D1D50;
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

DEFINE_REX_FUNC(sub_822D3180) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x822d31b8
	if (!ctx.cr6.lt) goto loc_822D31B8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,26364
	ctx.r3.s64 = ctx.r11.s64 + 26364;
	// bl 0x822d45c0
	ctx.lr = 0x822D31B8;
	sub_822D45C0(ctx, base);
loc_822D31B8:
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, ctx.xer);
	// bge cr6,0x822d31c8
	if (!ctx.cr6.lt) goto loc_822D31C8;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
loc_822D31C8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822d323c
	if (ctx.cr6.eq) goto loc_822D323C;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x822d31e4
	if (ctx.cr6.lt) goto loc_822D31E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x822d31e8
	goto loc_822D31E8;
loc_822D31E4:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_822D31E8:
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x822d31f8
	if (ctx.cr6.lt) goto loc_822D31F8;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x822d31fc
	goto loc_822D31FC;
loc_822D31F8:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_822D31FC:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r5,r30,r8
	ctx.r5.u64 = ctx.r8.u64 - r30.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x822d6840
	ctx.lr = 0x822D3210;
	sub_822D6840(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// blt cr6,0x822d3230
	if (ctx.cr6.lt) goto loc_822D3230;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x822d3234
	goto loc_822D3234;
loc_822D3230:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_822D3234:
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
loc_822D323C:
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

DEFINE_REX_FUNC(__savefpr_23) {
	REX_FUNC_PROLOGUE();
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f23,-72(r12)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_822D5824) {
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
	// bl 0x822d6180
	ctx.lr = 0x822D5834;
	sub_822D6180(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D6768) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r11,r11,-2288
	ctx.r11.s64 = ctx.r11.s64 + -2288;
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822d67a4
	if (!ctx.cr6.gt) goto loc_822D67A4;
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fsub f12,f12,f13
	ctx.f12.f64 = ctx.f12.f64 - ctx.f13.f64;
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmul f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fsqrt f12,f0
	ctx.f12.f64 = sqrt(ctx.f0.f64);
	// fmul f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// b 0x822d67b8
	goto loc_822D67B8;
loc_822D67A4:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmul f0,f13,f13
	ctx.f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822D67B8:
	// lfd f12,80(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 80);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lfd f11,72(r11)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// fmadd f5,f12,f0,f11
	ctx.f5.f64 = std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f11.f64);
	// lfd f12,120(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 120);
	// lfd f11,64(r11)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// fadd f4,f12,f0
	ctx.f4.f64 = ctx.f12.f64 + ctx.f0.f64;
	// lfd f12,112(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 112);
	// lfd f10,56(r11)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// lfd f9,104(r11)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// lfd f8,48(r11)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// lfd f7,96(r11)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r11.u32 + 96);
	// lfd f6,88(r11)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r11.u32 + 88);
	// lfdx f3,r10,r9
	ctx.f3.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// fmadd f11,f5,f0,f11
	ctx.f11.f64 = std::fma(ctx.f5.f64, ctx.f0.f64, ctx.f11.f64);
	// fmadd f12,f4,f0,f12
	ctx.f12.f64 = std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f12.f64);
	// fmadd f11,f11,f0,f10
	ctx.f11.f64 = std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f10.f64);
	// fmadd f12,f12,f0,f9
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f9.f64);
	// fmadd f11,f11,f0,f8
	ctx.f11.f64 = std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f8.f64);
	// fmadd f12,f12,f0,f7
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f7.f64);
	// fmul f11,f11,f0
	ctx.f11.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fmadd f0,f12,f0,f6
	ctx.f0.f64 = std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f6.f64);
	// fmul f12,f11,f13
	ctx.f12.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fdiv f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 / ctx.f0.f64;
	// fadd f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
	// fadd f0,f0,f3
	ctx.f0.f64 = ctx.f0.f64 + ctx.f3.f64;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f1,f1,f0,f13
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_78) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_112) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_822D9A48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r8,88(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// beq 0x822d9a80
	if (ctx.cr0.eq) goto loc_822D9A80;
	// lwz r10,188(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
loc_822D9A6C:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822d9a80
	if (ctx.cr6.eq) goto loc_822D9A80;
	// lbzu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d9a6c
	if (!ctx.cr0.eq) goto loc_822D9A6C;
loc_822D9A80:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x822d9aa8
	goto loc_822D9AA8;
loc_822D9A94:
	// cmpwi cr6,r10,101
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 101, ctx.xer);
	// beq cr6,0x822d9ab0
	if (ctx.cr6.eq) goto loc_822D9AB0;
	// cmpwi cr6,r10,69
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 69, ctx.xer);
	// beq cr6,0x822d9ab0
	if (ctx.cr6.eq) goto loc_822D9AB0;
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
loc_822D9AA8:
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d9a94
	if (!ctx.cr0.eq) goto loc_822D9A94;
loc_822D9AB0:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_822D9AB4:
	// lbzu r10,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// beq cr6,0x822d9ab4
	if (ctx.cr6.eq) goto loc_822D9AB4;
	// lwz r8,188(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822d9ae0
	if (!ctx.cr6.eq) goto loc_822D9AE0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_822D9AE0:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_822D9AE4:
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// extsb. r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bne 0x822d9ae4
	if (!ctx.cr0.eq) goto loc_822D9AE4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DCF00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822DCF08;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x822d6f20
	ctx.lr = 0x822DCF18;
	sub_822D6F20(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x822dcf28
	if (!ctx.cr0.eq) goto loc_822DCF28;
loc_822DCF20:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822dd0dc
	goto loc_822DD0DC;
loc_822DCF28:
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822DCF30:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, ctx.xer);
	// beq cr6,0x822dcf4c
	if (ctx.cr6.eq) goto loc_822DCF4C;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r9,r10,144
	ctx.r9.s64 = ctx.r10.s64 + 144;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822dcf30
	if (ctx.cr6.lt) goto loc_822DCF30;
loc_822DCF4C:
	// addi r10,r10,144
	ctx.r10.s64 = ctx.r10.s64 + 144;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822dcf68
	if (!ctx.cr6.lt) goto loc_822DCF68;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// beq cr6,0x822dcf6c
	if (ctx.cr6.eq) goto loc_822DCF6C;
loc_822DCF68:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_822DCF6C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dcf20
	if (ctx.cr6.eq) goto loc_822DCF20;
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822dcf20
	if (ctx.cr6.eq) goto loc_822DCF20;
	// cmplwi cr6,r7,5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 5, ctx.xer);
	// bne cr6,0x822dcf94
	if (!ctx.cr6.eq) goto loc_822DCF94;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// b 0x822dd0dc
	goto loc_822DD0DC;
loc_822DCF94:
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x822dd0d8
	if (ctx.cr6.eq) goto loc_822DD0D8;
	// lwz r28,96(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 96);
	// stw r29,96(r31)
	REX_STORE_U32(r31.u32 + 96, r29.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x822dd0c8
	if (!ctx.cr6.eq) goto loc_822DD0C8;
	// li r9,9
	ctx.r9.s64 = 9;
	// li r10,36
	ctx.r10.s64 = 36;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822DCFBC:
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r8,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// bdnz 0x822dcfbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DCFBC;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,100(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 100);
	// ori r10,r10,142
	ctx.r10.u64 = ctx.r10.u64 | 142;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822dcff0
	if (!ctx.cr6.eq) goto loc_822DCFF0;
	// li r11,131
	ctx.r11.s64 = 131;
	// b 0x822dd0ac
	goto loc_822DD0AC;
loc_822DCFF0:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,144
	ctx.r10.u64 = ctx.r10.u64 | 144;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822dd008
	if (!ctx.cr6.eq) goto loc_822DD008;
	// li r11,129
	ctx.r11.s64 = 129;
	// b 0x822dd0ac
	goto loc_822DD0AC;
loc_822DD008:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,145
	ctx.r10.u64 = ctx.r10.u64 | 145;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822dd020
	if (!ctx.cr6.eq) goto loc_822DD020;
	// li r11,132
	ctx.r11.s64 = 132;
	// b 0x822dd0ac
	goto loc_822DD0AC;
loc_822DD020:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,147
	ctx.r10.u64 = ctx.r10.u64 | 147;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822dd038
	if (!ctx.cr6.eq) goto loc_822DD038;
	// li r11,133
	ctx.r11.s64 = 133;
	// b 0x822dd0ac
	goto loc_822DD0AC;
loc_822DD038:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,141
	ctx.r10.u64 = ctx.r10.u64 | 141;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822dd050
	if (!ctx.cr6.eq) goto loc_822DD050;
	// li r11,130
	ctx.r11.s64 = 130;
	// b 0x822dd0ac
	goto loc_822DD0AC;
loc_822DD050:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,143
	ctx.r10.u64 = ctx.r10.u64 | 143;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822dd068
	if (!ctx.cr6.eq) goto loc_822DD068;
	// li r11,134
	ctx.r11.s64 = 134;
	// b 0x822dd0ac
	goto loc_822DD0AC;
loc_822DD068:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,146
	ctx.r10.u64 = ctx.r10.u64 | 146;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822dd080
	if (!ctx.cr6.eq) goto loc_822DD080;
	// li r11,138
	ctx.r11.s64 = 138;
	// b 0x822dd0ac
	goto loc_822DD0AC;
loc_822DD080:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,693
	ctx.r10.u64 = ctx.r10.u64 | 693;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822dd098
	if (!ctx.cr6.eq) goto loc_822DD098;
	// li r11,141
	ctx.r11.s64 = 141;
	// b 0x822dd0ac
	goto loc_822DD0AC;
loc_822DD098:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,692
	ctx.r10.u64 = ctx.r10.u64 | 692;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822dd0b0
	if (!ctx.cr6.eq) goto loc_822DD0B0;
	// li r11,142
	ctx.r11.s64 = 142;
loc_822DD0AC:
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
loc_822DD0B0:
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r4,100(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822DD0C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,100(r31)
	REX_STORE_U32(r31.u32 + 100, r30.u32);
	// b 0x822dd0d4
	goto loc_822DD0D4;
loc_822DD0C8:
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822DD0D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822DD0D4:
	// stw r28,96(r31)
	REX_STORE_U32(r31.u32 + 96, r28.u32);
loc_822DD0D8:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822DD0DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822E9CE0) {
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
	ctx.lr = 0x822E9CE8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e9d7c
	if (ctx.cr6.eq) goto loc_822E9D7C;
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
	// bl 0x822125d0
	ctx.lr = 0x822E9D18;
	sub_822125D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x822266d8
	ctx.lr = 0x822E9D24;
	sub_822266D8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x822268e0
	ctx.lr = 0x822E9D30;
	sub_822268E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x82226af8
	ctx.lr = 0x822E9D3C;
	sub_82226AF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x82212778
	ctx.lr = 0x822E9D48;
	sub_82212778(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r27
	r30.u64 = r27.u64;
	// rldicr r29,r11,63,63
	r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
loc_822E9D54:
	// addi r11,r30,32
	ctx.r11.s64 = r30.s64 + 32;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// srd r6,r29,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (r29.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x82223398
	ctx.lr = 0x822E9D70;
	sub_82223398(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// blt cr6,0x822e9d54
	if (ctx.cr6.lt) goto loc_822E9D54;
loc_822E9D7C:
	// li r28,72
	r28.s64 = 72;
loc_822E9D80:
	// mr r29,r27
	r29.u64 = r27.u64;
loc_822E9D84:
	// add r11,r28,r29
	ctx.r11.u64 = r28.u64 + r29.u64;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e9da0
	if (ctx.cr6.eq) goto loc_822E9DA0;
	// bl 0x82216cc8
	ctx.lr = 0x822E9D9C;
	sub_82216CC8(ctx, base);
	// stwx r27,r30,r31
	REX_STORE_U32(r30.u32 + r31.u32, r27.u32);
loc_822E9DA0:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(r29.u32, 3, ctx.xer);
	// blt cr6,0x822e9d84
	if (ctx.cr6.lt) goto loc_822E9D84;
	// addi r28,r28,3
	r28.s64 = r28.s64 + 3;
	// cmplwi cr6,r28,81
	ctx.cr6.compare<uint32_t>(r28.u32, 81, ctx.xer);
	// blt cr6,0x822e9d80
	if (ctx.cr6.lt) goto loc_822E9D80;
	// lwz r3,324(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 324);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e9dcc
	if (ctx.cr6.eq) goto loc_822E9DCC;
	// bl 0x82216cc8
	ctx.lr = 0x822E9DC8;
	sub_82216CC8(ctx, base);
	// stw r27,324(r31)
	REX_STORE_U32(r31.u32 + 324, r27.u32);
loc_822E9DCC:
	// lwz r3,328(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 328);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e9de0
	if (ctx.cr6.eq) goto loc_822E9DE0;
	// bl 0x82216cc8
	ctx.lr = 0x822E9DDC;
	sub_82216CC8(ctx, base);
	// stw r27,328(r31)
	REX_STORE_U32(r31.u32 + 328, r27.u32);
loc_822E9DE0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e84f8
	ctx.lr = 0x822E9DE8;
	sub_822E84F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822ED4F8) {
	REX_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32781
	ctx.r4.u64 = ctx.r4.u64 | 32781;
	// b 0x823cd118
	sub_823CD118(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822ED5E0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x822ed604
	if (ctx.cr6.eq) goto loc_822ED604;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x822ed604
	if (!ctx.cr6.eq) goto loc_822ED604;
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822ED604:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EE180) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x822ee1b4
	if (ctx.cr6.eq) goto loc_822EE1B4;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x822ee1b4
	if (!ctx.cr6.eq) goto loc_822EE1B4;
	// ld r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 64);
	// li r8,1
	ctx.r8.s64 = 1;
	// ld r9,56(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 56);
	// stw r8,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r7,88(r3)
	REX_STORE_U64(ctx.r3.u32 + 88, ctx.r7.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822EE1B4:
	// ld r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// std r10,88(r11)
	REX_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F0418) {
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
	// beq cr6,0x822f0498
	if (ctx.cr6.eq) goto loc_822F0498;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822f0498
	if (ctx.cr6.eq) goto loc_822F0498;
	// lwz r11,548(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 548);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r3,608(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 608);
	// bl 0x822f93e0
	ctx.lr = 0x822F0454;
	sub_822F93E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r31,608(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 608);
	// bl 0x822ef2b8
	ctx.lr = 0x822F0460;
	sub_822EF2B8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f0480
	if (ctx.cr6.eq) goto loc_822F0480;
	// bl 0x822fb3c0
	ctx.lr = 0x822F0470;
	sub_822FB3C0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f94e8
	ctx.lr = 0x822F0480;
	sub_822F94E8(ctx, base);
loc_822F0480:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x822f9530
	ctx.lr = 0x822F0490;
	sub_822F9530(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822f049c
	goto loc_822F049C;
loc_822F0498:
	// li r3,4
	ctx.r3.s64 = 4;
loc_822F049C:
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

DEFINE_REX_FUNC(sub_822F3518) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f35d0
	if (ctx.cr6.eq) goto loc_822F35D0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822f35d0
	if (ctx.cr6.eq) goto loc_822F35D0;
	// lhz r10,60(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 60);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lhz r9,76(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 76);
	// stw r9,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lwz r8,64(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// stw r8,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// lwz r7,32(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// stw r7,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r7.u32);
	// lwz r6,20(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r6,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r6.u32);
	// ld r5,40(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// std r5,24(r4)
	REX_STORE_U64(ctx.r4.u32 + 24, ctx.r5.u64);
	// ld r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// std r10,32(r4)
	REX_STORE_U64(ctx.r4.u32 + 32, ctx.r10.u64);
	// lwz r9,548(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 548);
	// stw r9,40(r4)
	REX_STORE_U32(ctx.r4.u32 + 40, ctx.r9.u32);
	// lwz r8,220(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// stw r8,44(r4)
	REX_STORE_U32(ctx.r4.u32 + 44, ctx.r8.u32);
	// lwz r7,68(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r6,48(r4)
	REX_STORE_U32(ctx.r4.u32 + 48, ctx.r6.u32);
	// lhz r5,88(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 88);
	// sth r5,52(r4)
	REX_STORE_U16(ctx.r4.u32 + 52, ctx.r5.u16);
	// lhz r10,90(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 90);
	// sth r10,54(r4)
	REX_STORE_U16(ctx.r4.u32 + 54, ctx.r10.u16);
	// lhz r9,92(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 92);
	// sth r9,56(r4)
	REX_STORE_U16(ctx.r4.u32 + 56, ctx.r9.u16);
	// lwz r8,96(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// stw r8,76(r4)
	REX_STORE_U32(ctx.r4.u32 + 76, ctx.r8.u32);
	// lwz r7,100(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// stw r7,60(r4)
	REX_STORE_U32(ctx.r4.u32 + 60, ctx.r7.u32);
	// lhz r6,104(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 104);
	// sth r6,64(r4)
	REX_STORE_U16(ctx.r4.u32 + 64, ctx.r6.u16);
	// lhz r5,106(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 106);
	// sth r5,66(r4)
	REX_STORE_U16(ctx.r4.u32 + 66, ctx.r5.u16);
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// stw r10,68(r4)
	REX_STORE_U32(ctx.r4.u32 + 68, ctx.r10.u32);
	// lwz r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// stw r9,72(r4)
	REX_STORE_U32(ctx.r4.u32 + 72, ctx.r9.u32);
	// blr 
	return;
loc_822F35D0:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F60D8) {
	REX_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,180
	ctx.r3.s64 = ctx.r3.s64 + 180;
	// b 0x824d459c
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F6190) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,164
	ctx.r3.s64 = ctx.r3.s64 + 164;
	// b 0x824d458c
	__imp__KeResetEvent(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F61F0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F6800) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822F6808;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,260(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F6820;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822f6aec
	if (!ctx.cr6.eq) goto loc_822F6AEC;
	// li r29,0
	r29.s64 = 0;
loc_822F6830:
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F6850;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822f6a90
	if (ctx.cr6.eq) goto loc_822F6A90;
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F687C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,260(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 260);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F6890;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r7,r3,0,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x6;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x822f6a3c
	if (!ctx.cr6.eq) goto loc_822F6A3C;
loc_822F689C:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F68B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822f46e0
	ctx.lr = 0x822F68B8;
	sub_822F46E0(ctx, base);
	// lwz r9,248(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 248);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x822f69c4
	if (!ctx.cr6.gt) goto loc_822F69C4;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822f4740
	ctx.lr = 0x822F68CC;
	sub_822F4740(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F68E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 44);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F6900;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,136(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 136);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822F691C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F6934;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lwz r28,0(r9)
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// bctrl 
	ctx.lr = 0x822F6950;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,120(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 120);
	// addi r4,r3,-8
	ctx.r4.s64 = ctx.r3.s64 + -8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822F6968;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// blt cr6,0x822f6a10
	if (ctx.cr6.lt) goto loc_822F6A10;
	// bctrl 
	ctx.lr = 0x822F6984;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822f4840
	ctx.lr = 0x822F698C;
	sub_822F4840(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F69A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,208(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 208);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822F69B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822f6a3c
	if (ctx.cr6.eq) goto loc_822F6A3C;
	// b 0x822f69ec
	goto loc_822F69EC;
loc_822F69C4:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F69D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,168(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 168);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F69EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F69EC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,260(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F6A00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x6;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f689c
	if (ctx.cr6.eq) goto loc_822F689C;
	// b 0x822f6a3c
	goto loc_822F6A3C;
loc_822F6A10:
	// bctrl 
	ctx.lr = 0x822F6A14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F6A28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,96(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 96);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822F6A3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F6A3C:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F6A50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f6a70
	if (ctx.cr6.eq) goto loc_822F6A70;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F6A6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
loc_822F6A70:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f6a90
	if (ctx.cr6.eq) goto loc_822F6A90;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F6A8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
loc_822F6A90:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,260(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F6AA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822f6aec
	if (!ctx.cr6.eq) goto loc_822F6AEC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,216(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F6AC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,268(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 268);
	// bl 0x8220be80
	ctx.lr = 0x822F6ACC;
	sub_8220BE80(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,260(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 260);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F6AE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r7,r3,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822f6830
	if (ctx.cr6.eq) goto loc_822F6830;
loc_822F6AEC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,216(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F6B00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82307E08) {
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
	ctx.lr = 0x82307E10;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,28(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// li r23,0
	r23.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
loc_82307E3C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82307e9c
	if (!ctx.cr6.eq) goto loc_82307E9C;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82307E6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82307ef8
	if (ctx.cr6.lt) goto loc_82307EF8;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// ld r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U64(r27.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r27)
	REX_STORE_U64(r27.u32 + 8, ctx.r11.u64);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r8,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r8.u32);
loc_82307E9C:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// ble cr6,0x82307eac
	if (!ctx.cr6.gt) goto loc_82307EAC;
	// mr r31,r26
	r31.u64 = r26.u64;
loc_82307EAC:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82307ed0
	if (ctx.cr6.eq) goto loc_82307ED0;
	// add r11,r31,r25
	ctx.r11.u64 = r31.u64 + r25.u64;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// bgt cr6,0x82307f04
	if (ctx.cr6.gt) goto loc_82307F04;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,0(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 0);
	// add r3,r25,r21
	ctx.r3.u64 = r25.u64 + r21.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82307ED0;
	sub_822D4FA0(ctx, base);
loc_82307ED0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// subf. r26,r31,r26
	r26.u64 = r26.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// add r25,r31,r25
	r25.u64 = r31.u64 + r25.u64;
	// subf r10,r31,r11
	ctx.r10.u64 = ctx.r11.u64 - r31.u64;
	// add r29,r31,r29
	r29.u64 = r31.u64 + r29.u64;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bgt 0x82307e3c
	if (ctx.cr0.gt) goto loc_82307E3C;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
loc_82307EF8:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ebc
	return;
loc_82307F04:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_8230C9E0) {
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
	// lwz r11,72(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// addi r31,r4,72
	r31.s64 = ctx.r4.s64 + 72;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230ca28
	if (ctx.cr6.eq) goto loc_8230CA28;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// lwz r3,224(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f94e8
	ctx.lr = 0x8230CA18;
	sub_822F94E8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 224);
	// bl 0x822f94e8
	ctx.lr = 0x8230CA28;
	sub_822F94E8(ctx, base);
loc_8230CA28:
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

DEFINE_REX_FUNC(sub_8230EDB0) {
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
	ctx.lr = 0x8230EDB8;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// lwz r31,28(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r26,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// mr r21,r26
	r21.u64 = r26.u64;
	// stw r26,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r26.u32);
	// mr r20,r26
	r20.u64 = r26.u64;
	// stw r26,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r17,r26
	r17.u64 = r26.u64;
	// stw r26,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r26.u32);
	// li r25,1
	r25.s64 = 1;
	// stb r26,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r26.u8);
	// lis r18,-32688
	r18.s64 = -2142240768;
	// li r19,5
	r19.s64 = 5;
	// li r16,8
	r16.s64 = 8;
	// li r24,13
	r24.s64 = 13;
	// ori r15,r11,22
	r15.u64 = ctx.r11.u64 | 22;
	// li r14,12
	r14.s64 = 12;
	// li r22,15
	r22.s64 = 15;
loc_8230EE10:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x8230ee10
	if (ctx.cr6.gt) goto loc_8230EE10;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8230f020
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8230F020;
	// bdzf 4*cr6+eq,0x8230f078
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8230F078;
	// bdzf 4*cr6+eq,0x8230f0d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8230F0D0;
	// bdzf 4*cr6+eq,0x8230f104
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8230F104;
	// bdzf 4*cr6+eq,0x8230f1ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8230F1AC;
	// bdzf 4*cr6+eq,0x8230f38c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8230F38C;
	// bdzf 4*cr6+eq,0x8230f970
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8230F970;
	// bne cr6,0x8230fe4c
	if (!ctx.cr6.eq) goto loc_8230FE4C;
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230eed8
	if (ctx.cr6.eq) goto loc_8230EED8;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230eed8
	if (ctx.cr6.eq) goto loc_8230EED8;
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 24);
	// ld r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 32);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x8230eeac
	if (!ctx.cr6.lt) goto loc_8230EEAC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r4,196(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 196);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// std r26,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r26.u64);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82307048
	ctx.lr = 0x8230EE88;
	sub_82307048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
	// ld r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// std r4,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r4.u64);
	// bl 0x82307160
	ctx.lr = 0x8230EEA0;
	sub_82307160(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
	// b 0x8230eec4
	goto loc_8230EEC4;
loc_8230EEAC:
	// stw r26,184(r31)
	REX_STORE_U32(r31.u32 + 184, r26.u32);
	// stw r26,192(r31)
	REX_STORE_U32(r31.u32 + 192, r26.u32);
	// stb r26,196(r31)
	REX_STORE_U8(r31.u32 + 196, r26.u8);
	// stw r26,220(r31)
	REX_STORE_U32(r31.u32 + 220, r26.u32);
	// stw r26,212(r31)
	REX_STORE_U32(r31.u32 + 212, r26.u32);
	// stw r26,204(r31)
	REX_STORE_U32(r31.u32 + 204, r26.u32);
loc_8230EEC4:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// ld r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 32);
	// bl 0x82307160
	ctx.lr = 0x8230EED0;
	sub_82307160(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
loc_8230EED8:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230ef88
	if (ctx.cr6.eq) goto loc_8230EF88;
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230eef8
	if (ctx.cr6.eq) goto loc_8230EEF8;
	// stw r25,216(r31)
	REX_STORE_U32(r31.u32 + 216, r25.u32);
	// b 0x8230ef74
	goto loc_8230EF74;
loc_8230EEF8:
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// ld r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 32);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x8230ef50
	if (!ctx.cr6.gt) goto loc_8230EF50;
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// std r26,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r26.u64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230ef74
	if (ctx.cr6.eq) goto loc_8230EF74;
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r4,196(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 196);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82307048
	ctx.lr = 0x8230EF2C;
	sub_82307048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
	// ld r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// std r4,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r4.u64);
	// bl 0x82307160
	ctx.lr = 0x8230EF44;
	sub_82307160(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
	// b 0x8230ef74
	goto loc_8230EF74;
loc_8230EF50:
	// stw r26,188(r31)
	REX_STORE_U32(r31.u32 + 188, r26.u32);
	// stw r26,192(r31)
	REX_STORE_U32(r31.u32 + 192, r26.u32);
	// stb r26,196(r31)
	REX_STORE_U8(r31.u32 + 196, r26.u8);
	// stw r26,220(r31)
	REX_STORE_U32(r31.u32 + 220, r26.u32);
	// stw r26,200(r31)
	REX_STORE_U32(r31.u32 + 200, r26.u32);
	// stw r26,208(r31)
	REX_STORE_U32(r31.u32 + 208, r26.u32);
	// stw r26,216(r31)
	REX_STORE_U32(r31.u32 + 216, r26.u32);
	// stw r26,212(r31)
	REX_STORE_U32(r31.u32 + 212, r26.u32);
	// stw r26,204(r31)
	REX_STORE_U32(r31.u32 + 204, r26.u32);
loc_8230EF74:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// ld r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 32);
	// bl 0x82307160
	ctx.lr = 0x8230EF80;
	sub_82307160(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
loc_8230EF88:
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 24);
	// ld r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 32);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x8230fea4
	if (!ctx.cr6.lt) goto loc_8230FEA4;
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8230fed4
	if (!ctx.cr6.lt) goto loc_8230FED4;
	// ld r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 40);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ld r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 8);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// std r9,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r9.u64);
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// std r7,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r7.u64);
	// ble cr6,0x8230f008
	if (!ctx.cr6.gt) goto loc_8230F008;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// subf r30,r8,r7
	r30.u64 = ctx.r7.u64 - ctx.r8.u64;
	// lwz r6,20(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8230EFF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
	// ld r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
loc_8230F008:
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r9,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r9.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230F020:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8230b420
	ctx.lr = 0x8230F02C;
	sub_8230B420(ctx, base);
	// cmplw cr6,r3,r18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r18.u32, ctx.xer);
	// beq cr6,0x8230fefc
	if (ctx.cr6.eq) goto loc_8230FEFC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8230f044
	if (!ctx.cr6.lt) goto loc_8230F044;
	// stw r19,80(r31)
	REX_STORE_U32(r31.u32 + 80, r19.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230F044:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230f068
	if (ctx.cr6.eq) goto loc_8230F068;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230f068
	if (ctx.cr6.eq) goto loc_8230F068;
	// stw r19,80(r31)
	REX_STORE_U32(r31.u32 + 80, r19.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230F068:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r26,56(r31)
	REX_STORE_U32(r31.u32 + 56, r26.u32);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230F078:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,68(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x8230b7f8
	ctx.lr = 0x8230F088;
	sub_8230B7F8(ctx, base);
	// cmplw cr6,r3,r18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r18.u32, ctx.xer);
	// beq cr6,0x8230fefc
	if (ctx.cr6.eq) goto loc_8230FEFC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8230f0a0
	if (!ctx.cr6.lt) goto loc_8230F0A0;
	// stw r19,80(r31)
	REX_STORE_U32(r31.u32 + 80, r19.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230F0A0:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230f0c4
	if (ctx.cr6.eq) goto loc_8230F0C4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230f0c4
	if (ctx.cr6.eq) goto loc_8230F0C4;
	// stw r19,80(r31)
	REX_STORE_U32(r31.u32 + 80, r19.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230F0C4:
	// stw r16,80(r31)
	REX_STORE_U32(r31.u32 + 80, r16.u32);
	// stw r26,56(r31)
	REX_STORE_U32(r31.u32 + 56, r26.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230F0D0:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,72(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// bl 0x8230bc78
	ctx.lr = 0x8230F0E0;
	sub_8230BC78(ctx, base);
	// cmplw cr6,r3,r18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r18.u32, ctx.xer);
	// beq cr6,0x8230fefc
	if (ctx.cr6.eq) goto loc_8230FEFC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8230f0f8
	if (!ctx.cr6.lt) goto loc_8230F0F8;
loc_8230F0F0:
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230F0F8:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230F104:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,80(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// bl 0x8230e950
	ctx.lr = 0x8230F114;
	sub_8230E950(ctx, base);
	// cmplw cr6,r3,r18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r18.u32, ctx.xer);
	// beq cr6,0x8230fefc
	if (ctx.cr6.eq) goto loc_8230FEFC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8230f12c
	if (!ctx.cr6.lt) goto loc_8230F12C;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230F12C:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// ld r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 32);
	// ld r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 8);
	// lhz r8,28(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// lhz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r11,64(r31)
	REX_STORE_U16(r31.u32 + 64, ctx.r11.u16);
	// cmpld cr6,r5,r9
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r9.u64, ctx.xer);
	// ble cr6,0x8230f1a0
	if (!ctx.cr6.gt) goto loc_8230F1A0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r10,r7,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8230F188;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
	// ld r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
loc_8230F1A0:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230F1AC:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lbz r30,4(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822f9900
	ctx.lr = 0x8230F1C4;
	sub_822F9900(ctx, base);
	// cmplw cr6,r3,r15
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r15.u32, ctx.xer);
	// bne cr6,0x8230f1d4
	if (!ctx.cr6.eq) goto loc_8230F1D4;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230F1D4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8230f1e4
	if (!ctx.cr6.lt) goto loc_8230F1E4;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230F1E4:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r20,4(r11)
	r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x8230f1fc
	if (!ctx.cr6.eq) goto loc_8230F1FC;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230F1FC:
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lhz r11,28(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230f214
	if (!ctx.cr6.eq) goto loc_8230F214;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230F214:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230f258
	if (ctx.cr6.eq) goto loc_8230F258;
	// lbz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 196);
	// clrlwi r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8230f0f0
	if (!ctx.cr6.eq) goto loc_8230F0F0;
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230f0f0
	if (ctx.cr6.eq) goto loc_8230F0F0;
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r10,192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8230f0f0
	if (!ctx.cr6.gt) goto loc_8230F0F0;
	// stw r26,184(r31)
	REX_STORE_U32(r31.u32 + 184, r26.u32);
	// stb r26,196(r31)
	REX_STORE_U8(r31.u32 + 196, r26.u8);
	// stw r26,204(r31)
	REX_STORE_U32(r31.u32 + 204, r26.u32);
loc_8230F258:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230f31c
	if (ctx.cr6.eq) goto loc_8230F31C;
	// lbz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 196);
	// clrlwi r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8230f0f0
	if (!ctx.cr6.eq) goto loc_8230F0F0;
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230f0f0
	if (ctx.cr6.eq) goto loc_8230F0F0;
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r10,192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8230f0f0
	if (!ctx.cr6.lt) goto loc_8230F0F0;
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bgt cr6,0x8230f0f0
	if (ctx.cr6.gt) goto loc_8230F0F0;
	// lwz r10,212(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 212);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230f2d8
	if (ctx.cr6.eq) goto loc_8230F2D8;
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8230f2d8
	if (!ctx.cr6.eq) goto loc_8230F2D8;
	// stw r26,188(r31)
	REX_STORE_U32(r31.u32 + 188, r26.u32);
	// stw r26,192(r31)
	REX_STORE_U32(r31.u32 + 192, r26.u32);
	// stb r26,196(r31)
	REX_STORE_U8(r31.u32 + 196, r26.u8);
	// stw r26,220(r31)
	REX_STORE_U32(r31.u32 + 220, r26.u32);
	// stw r26,200(r31)
	REX_STORE_U32(r31.u32 + 200, r26.u32);
	// stw r26,208(r31)
	REX_STORE_U32(r31.u32 + 208, r26.u32);
	// stw r26,212(r31)
	REX_STORE_U32(r31.u32 + 212, r26.u32);
	// stw r26,216(r31)
	REX_STORE_U32(r31.u32 + 216, r26.u32);
	// stw r26,204(r31)
	REX_STORE_U32(r31.u32 + 204, r26.u32);
loc_8230F2D8:
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8230f308
	if (!ctx.cr6.eq) goto loc_8230F308;
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r10,192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8230f308
	if (!ctx.cr6.lt) goto loc_8230F308;
	// stw r25,212(r31)
	REX_STORE_U32(r31.u32 + 212, r25.u32);
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230F308:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230f31c
	if (ctx.cr6.eq) goto loc_8230F31C;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230F31C:
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 64);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r21,48(r8)
	r21.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// stw r6,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r6.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r4,28(r9)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 28);
	// lwz r11,12(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r17,100(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 100);
	// bctrl 
	ctx.lr = 0x8230F358;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lbz r10,6(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8230f380
	if (ctx.cr6.eq) goto loc_8230F380;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r26,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r26.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230F380:
	// stw r14,80(r31)
	REX_STORE_U32(r31.u32 + 80, r14.u32);
	// stw r25,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r25.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230F38C:
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230f764
	if (!ctx.cr6.eq) goto loc_8230F764;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8230f3cc
	if (!ctx.cr6.eq) goto loc_8230F3CC;
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(r21.s32, 2, ctx.xer);
	// bne cr6,0x8230f3c8
	if (!ctx.cr6.eq) goto loc_8230F3C8;
	// lwz r10,20(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8230f3c8
	if (!ctx.cr6.eq) goto loc_8230F3C8;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230F3C8:
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r25.u32);
loc_8230F3CC:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(r21.s32, 1, ctx.xer);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r7,12(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,16(r6)
	REX_STORE_U32(ctx.r6.u32 + 16, ctx.r7.u32);
	// lwz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lhz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + 28);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r4,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// bne cr6,0x8230f41c
	if (!ctx.cr6.eq) goto loc_8230F41C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r25,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r25.u32);
loc_8230F41C:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r20,3
	ctx.cr6.compare<int32_t>(r20.s32, 3, ctx.xer);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lbz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// sth r8,132(r1)
	REX_STORE_U16(ctx.r1.u32 + 132, ctx.r8.u16);
	// lwz r7,52(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r6,8(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r6,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r5,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lhz r3,28(r4)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + 28);
	// stw r3,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ld r8,56(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r6,r7,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r7.u64;
	// lwz r5,20(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// subf r4,r5,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r5.u64;
	// clrldi r3,r4,32
	ctx.r3.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r3,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r3.u64);
	// beq cr6,0x8230f488
	if (ctx.cr6.eq) goto loc_8230F488;
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(r20.s32, 2, ctx.xer);
	// bne cr6,0x8230f4ac
	if (!ctx.cr6.eq) goto loc_8230F4AC;
loc_8230F488:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// bl 0x822f9900
	ctx.lr = 0x8230F498;
	sub_822F9900(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8230f4a8
	if (!ctx.cr6.lt) goto loc_8230F4A8;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230F4A8:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8230F4AC:
	// cmpwi cr6,r20,3
	ctx.cr6.compare<int32_t>(r20.s32, 3, ctx.xer);
	// bne cr6,0x8230f688
	if (!ctx.cr6.eq) goto loc_8230F688;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,36(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8230f4d8
	if (!ctx.cr6.eq) goto loc_8230F4D8;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r25,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, r25.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8230F4D8:
	// stw r25,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r25.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8230f53c
	if (!ctx.cr6.gt) goto loc_8230F53C;
	// stw r26,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, r26.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r26,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r26.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r25,76(r10)
	REX_STORE_U32(ctx.r10.u32 + 76, r25.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, r26.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r26,32(r8)
	REX_STORE_U8(ctx.r8.u32 + 32, r26.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r7,196(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 196);
	// lbz r6,32(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8230f53c
	if (!ctx.cr6.eq) goto loc_8230F53C;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// stb r10,196(r31)
	REX_STORE_U8(r31.u32 + 196, ctx.r10.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8230F53C:
	// stw r26,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r26.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r26,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, r26.u8);
loc_8230F548:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// ld r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 8);
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lhz r5,28(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8230F56C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lhz r30,28(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// stw r26,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r26.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r9,76(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8230f5d4
	if (ctx.cr6.eq) goto loc_8230F5D4;
	// stw r25,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r25.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lhz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// stw r10,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8230f5c8
	if (!ctx.cr6.eq) goto loc_8230F5C8;
	// addi r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 + 44;
	// lhz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// stw r9,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// addi r30,r10,-15
	r30.s64 = ctx.r10.s64 + -15;
	// lwz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stw r22,68(r8)
	REX_STORE_U32(ctx.r8.u32 + 68, r22.u32);
loc_8230F5C8:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
loc_8230F5D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230F5EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
	// ld r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 8);
	// clrldi r9,r30,32
	ctx.r9.u64 = r30.u64 & 0xFFFFFFFF;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r10,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r10.u64);
	// lhz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// addi r9,r10,-15
	ctx.r9.s64 = ctx.r10.s64 + -15;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8230f640
	if (!ctx.cr6.eq) goto loc_8230F640;
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82307e08
	ctx.lr = 0x8230F638;
	sub_82307E08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
loc_8230F640:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x822f9e80
	ctx.lr = 0x8230F650;
	sub_822F9E80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
	// li r9,4
	ctx.r9.s64 = 4;
	// lhz r6,132(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 132);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r5,10
	ctx.r5.s64 = 655360;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x822f9260
	ctx.lr = 0x8230F678;
	sub_822F9260(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230F688:
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(r20.s32, 2, ctx.xer);
	// bne cr6,0x8230f548
	if (!ctx.cr6.eq) goto loc_8230F548;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230f6ac
	if (ctx.cr6.eq) goto loc_8230F6AC;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8230f6b8
	if (ctx.cr6.gt) goto loc_8230F6B8;
loc_8230F6AC:
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230f548
	if (ctx.cr6.eq) goto loc_8230F548;
loc_8230F6B8:
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r26.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lbz r10,196(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 196);
	// lbz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8230f6dc
	if (!ctx.cr6.eq) goto loc_8230F6DC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// stb r10,196(r31)
	REX_STORE_U8(r31.u32 + 196, ctx.r10.u8);
loc_8230F6DC:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, r26.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230f724
	if (ctx.cr6.eq) goto loc_8230F724;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// lbz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8230f724
	if (!ctx.cr6.eq) goto loc_8230F724;
	// stw r26,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r26.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r26,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, r26.u8);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r26,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, r26.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r26,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, r26.u32);
loc_8230F724:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r26.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, r26.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, r26.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, r26.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r26,32(r7)
	REX_STORE_U8(ctx.r7.u32 + 32, r26.u8);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, r26.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,40(r5)
	REX_STORE_U32(ctx.r5.u32 + 40, r26.u32);
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230F764:
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,20(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230f77c
	if (!ctx.cr6.eq) goto loc_8230F77C;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230F77C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8230f964
	if (!ctx.cr6.eq) goto loc_8230F964;
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(r21.s32, 1, ctx.xer);
	// stw r11,16(r8)
	REX_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// stw r8,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// bne cr6,0x8230f7ac
	if (!ctx.cr6.eq) goto loc_8230F7AC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r25,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r25.u32);
loc_8230F7AC:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lbz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// sth r8,132(r1)
	REX_STORE_U16(ctx.r1.u32 + 132, ctx.r8.u16);
	// lwz r7,52(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r5,8(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r5,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r4,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lhz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 28);
	// stw r10,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 52);
	// ld r7,56(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r4,20(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r3,16(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// subf r11,r5,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r5.u64;
	// subf r10,r4,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r4.u64;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r9,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
	// lwz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 52);
	// ld r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 8);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r5,28(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// lhz r5,28(r8)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + 28);
	// bctrl 
	ctx.lr = 0x8230F830;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lhz r30,28(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// stw r26,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r26.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r9,76(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8230f898
	if (ctx.cr6.eq) goto loc_8230F898;
	// stw r25,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r25.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lhz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// stw r10,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8230f88c
	if (!ctx.cr6.eq) goto loc_8230F88C;
	// addi r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 + 44;
	// lhz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// stw r9,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// addi r30,r10,-15
	r30.s64 = ctx.r10.s64 + -15;
	// lwz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stw r22,68(r8)
	REX_STORE_U32(ctx.r8.u32 + 68, r22.u32);
loc_8230F88C:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
loc_8230F898:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230F8B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
	// ld r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 8);
	// clrldi r9,r30,32
	ctx.r9.u64 = r30.u64 & 0xFFFFFFFF;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r10,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r10.u64);
	// lhz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// addi r9,r10,-15
	ctx.r9.s64 = ctx.r10.s64 + -15;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8230f904
	if (!ctx.cr6.eq) goto loc_8230F904;
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82307e08
	ctx.lr = 0x8230F8FC;
	sub_82307E08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
loc_8230F904:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x822f9e80
	ctx.lr = 0x8230F914;
	sub_822F9E80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
	// li r9,4
	ctx.r9.s64 = 4;
	// lhz r6,132(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 132);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r5,10
	ctx.r5.s64 = 655360;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x822f9260
	ctx.lr = 0x8230F93C;
	sub_822F9260(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lhz r10,28(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 28);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230F964:
	// stw r26,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, r26.u32);
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230F970:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r27,r26
	r27.u64 = r26.u64;
	// mr r30,r26
	r30.u64 = r26.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8230f9ac
	if (!ctx.cr6.eq) goto loc_8230F9AC;
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(r21.s32, 2, ctx.xer);
	// bne cr6,0x8230f9a8
	if (!ctx.cr6.eq) goto loc_8230F9A8;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8230f9a8
	if (!ctx.cr6.eq) goto loc_8230F9A8;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230F9A8:
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r25.u32);
loc_8230F9AC:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r7,52(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r6,12(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lhz r4,28(r7)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + 28);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8230F9D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
	// stw r25,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r28,r25
	r28.u64 = r25.u64;
	// bl 0x82307660
	ctx.lr = 0x8230FA00;
	sub_82307660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lbz r29,80(r1)
	r29.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lhz r11,30(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// blt cr6,0x8230f0f0
	if (ctx.cr6.lt) goto loc_8230F0F0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8230f0f0
	if (ctx.cr6.eq) goto loc_8230F0F0;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// ble cr6,0x8230fa34
	if (!ctx.cr6.gt) goto loc_8230FA34;
	// addi r27,r29,1
	r27.s64 = r29.s64 + 1;
	// b 0x8230fa3c
	goto loc_8230FA3C;
loc_8230FA34:
	// bne cr6,0x8230fa3c
	if (!ctx.cr6.eq) goto loc_8230FA3C;
	// mr r27,r29
	r27.u64 = r29.u64;
loc_8230FA3C:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// blt cr6,0x8230fe44
	if (ctx.cr6.lt) goto loc_8230FE44;
loc_8230FA44:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(r21.s32, 1, ctx.xer);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, r29.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, r29.u32);
	// lwz r7,52(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,20(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// stw r5,24(r6)
	REX_STORE_U32(ctx.r6.u32 + 24, ctx.r5.u32);
	// bne cr6,0x8230fa84
	if (!ctx.cr6.eq) goto loc_8230FA84;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r25,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r25.u32);
loc_8230FA84:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r20,3
	ctx.cr6.compare<int32_t>(r20.s32, 3, ctx.xer);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lbz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// sth r8,132(r1)
	REX_STORE_U16(ctx.r1.u32 + 132, ctx.r8.u16);
	// lwz r7,52(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r6,8(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r6,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r26,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r26.u32);
	// stw r26,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r26.u32);
	// stw r29,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r29.u32);
	// stw r5,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// ld r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// subf r8,r9,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r9.u64;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// subf r6,r7,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r7.u64;
	// clrldi r5,r6,32
	ctx.r5.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// std r5,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// beq cr6,0x8230faf0
	if (ctx.cr6.eq) goto loc_8230FAF0;
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(r20.s32, 2, ctx.xer);
	// bne cr6,0x8230fb0c
	if (!ctx.cr6.eq) goto loc_8230FB0C;
loc_8230FAF0:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// bl 0x822f9900
	ctx.lr = 0x8230FB00;
	sub_822F9900(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fe40
	if (ctx.cr6.lt) goto loc_8230FE40;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8230FB0C:
	// cmpwi cr6,r20,3
	ctx.cr6.compare<int32_t>(r20.s32, 3, ctx.xer);
	// bne cr6,0x8230fb74
	if (!ctx.cr6.eq) goto loc_8230FB74;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r25,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, r25.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r8,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r8.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r25,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, r25.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,12(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x8230fba4
	if (!ctx.cr6.gt) goto loc_8230FBA4;
	// stw r26,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, r26.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r26,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r26.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r25,76(r10)
	REX_STORE_U32(ctx.r10.u32 + 76, r25.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, r26.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r26,32(r8)
	REX_STORE_U8(ctx.r8.u32 + 32, r26.u8);
	// b 0x8230fba4
	goto loc_8230FBA4;
loc_8230FB74:
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(r20.s32, 2, ctx.xer);
	// bne cr6,0x8230fba4
	if (!ctx.cr6.eq) goto loc_8230FBA4;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230fb98
	if (ctx.cr6.eq) goto loc_8230FB98;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8230fdbc
	if (ctx.cr6.gt) goto loc_8230FDBC;
loc_8230FB98:
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8230fdbc
	if (!ctx.cr6.eq) goto loc_8230FDBC;
loc_8230FBA4:
	// lhz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 64);
	// clrldi r8,r28,32
	ctx.r8.u64 = r28.u64 & 0xFFFFFFFF;
	// ld r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 8);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// ble cr6,0x8230fc0c
	if (!ctx.cr6.gt) goto loc_8230FC0C;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,20(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8230FBF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
	// ld r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 8);
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
loc_8230FC0C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8230fd40
	if (ctx.cr6.eq) goto loc_8230FD40;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// ld r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230FC34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
	// stw r26,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r26.u32);
	// mr r30,r29
	r30.u64 = r29.u64;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230fc90
	if (ctx.cr6.eq) goto loc_8230FC90;
	// stw r25,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r25.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stw r29,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, r29.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8230fc84
	if (!ctx.cr6.eq) goto loc_8230FC84;
	// addi r10,r11,44
	ctx.r10.s64 = ctx.r11.s64 + 44;
	// addi r30,r29,-15
	r30.s64 = r29.s64 + -15;
	// stw r10,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stw r22,68(r9)
	REX_STORE_U32(ctx.r9.u32 + 68, r22.u32);
loc_8230FC84:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
loc_8230FC90:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230FCA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
	// ld r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 8);
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// addi r9,r29,-15
	ctx.r9.s64 = r29.s64 + -15;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// std r8,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r8.u64);
	// bne cr6,0x8230fcf8
	if (!ctx.cr6.eq) goto loc_8230FCF8;
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82307e08
	ctx.lr = 0x8230FCF0;
	sub_82307E08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
loc_8230FCF8:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x822f9e80
	ctx.lr = 0x8230FD08;
	sub_822F9E80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
	// li r9,4
	ctx.r9.s64 = 4;
	// lhz r6,132(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 132);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r5,10
	ctx.r5.s64 = 655360;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x822f9260
	ctx.lr = 0x8230FD30;
	sub_822F9260(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
	// add r28,r29,r28
	r28.u64 = r29.u64 + r28.u64;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
loc_8230FD40:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lhz r10,30(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// ble cr6,0x8230fe44
	if (!ctx.cr6.gt) goto loc_8230FE44;
	// stw r25,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// bl 0x82307660
	ctx.lr = 0x8230FD70;
	sub_82307660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// lhz r9,30(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8230fe40
	if (ctx.cr6.lt) goto loc_8230FE40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230fe40
	if (ctx.cr6.eq) goto loc_8230FE40;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r30,32(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// addi r27,r10,1
	r27.s64 = ctx.r10.s64 + 1;
	// lhz r8,30(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 30);
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r27.u32, ctx.xer);
	// bge cr6,0x8230fa44
	if (!ctx.cr6.lt) goto loc_8230FA44;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230FDBC:
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r26.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, r26.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230fe08
	if (ctx.cr6.eq) goto loc_8230FE08;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// lbz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8230fe08
	if (!ctx.cr6.eq) goto loc_8230FE08;
	// stw r26,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r26.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r26,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, r26.u8);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r26,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, r26.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r26,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, r26.u32);
loc_8230FE08:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r26.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, r26.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, r26.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, r26.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r26,32(r7)
	REX_STORE_U8(ctx.r7.u32 + 32, r26.u8);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, r26.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,40(r5)
	REX_STORE_U32(ctx.r5.u32 + 40, r26.u32);
loc_8230FE40:
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
loc_8230FE44:
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230FE4C:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// lwz r9,60(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8230fe9c
	if (ctx.cr6.lt) goto loc_8230FE9C;
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230fe84
	if (ctx.cr6.eq) goto loc_8230FE84;
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8230fe84
	if (!ctx.cr6.eq) goto loc_8230FE84;
	// stw r25,200(r31)
	REX_STORE_U32(r31.u32 + 200, r25.u32);
loc_8230FE84:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230fe94
	if (ctx.cr6.eq) goto loc_8230FE94;
	// stw r25,204(r31)
	REX_STORE_U32(r31.u32 + 204, r25.u32);
loc_8230FE94:
	// stw r19,80(r31)
	REX_STORE_U32(r31.u32 + 80, r19.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230FE9C:
	// stw r16,80(r31)
	REX_STORE_U32(r31.u32 + 80, r16.u32);
	// b 0x8230ee10
	goto loc_8230EE10;
loc_8230FEA4:
	// li r11,18
	ctx.r11.s64 = 18;
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x822f91b0
	ctx.lr = 0x8230FEC0;
	sub_822F91B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230fefc
	if (ctx.cr6.lt) goto loc_8230FEFC;
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// b 0x8230fefc
	goto loc_8230FEFC;
loc_8230FED4:
	// stw r25,228(r31)
	REX_STORE_U32(r31.u32 + 228, r25.u32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,48
	ctx.r5.u64 = ctx.r5.u64 | 48;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x822f9260
	ctx.lr = 0x8230FEFC;
	sub_822F9260(ctx, base);
loc_8230FEFC:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x8230ff10
	if (ctx.cr6.eq) goto loc_8230FF10;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x8230ff18
	if (!ctx.cr6.eq) goto loc_8230FF18;
loc_8230FF10:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_8230FF18:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823652D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823652E0;
	// rlwinm r9,r6,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x8;
	// clrlwi r10,r6,31
	ctx.r10.u64 = ctx.r6.u32 & 0x1;
	// li r11,4
	ctx.r11.s64 = 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// add r31,r9,r3
	r31.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82365308:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwzu r9,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r30,r7,r8
	r30.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mulli r5,r3,1892
	ctx.r5.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(1892));
	// mulli r6,r9,784
	ctx.r6.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(784));
	// subf r7,r7,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r7.u64;
	// mulli r3,r3,784
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(784));
	// mulli r29,r9,1892
	r29.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1892));
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mulli r8,r30,1448
	ctx.r8.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(1448));
	// subf r6,r29,r3
	ctx.r6.u64 = ctx.r3.u64 - r29.u64;
	// mulli r7,r7,1448
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1448));
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// addi r6,r5,64
	ctx.r6.s64 = ctx.r5.s64 + 64;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addi r5,r3,64
	ctx.r5.s64 = ctx.r3.s64 + 64;
	// addi r3,r7,64
	ctx.r3.s64 = ctx.r7.s64 + 64;
	// srawi r8,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 7;
	// addi r7,r9,64
	ctx.r7.s64 = ctx.r9.s64 + 64;
	// srawi r6,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 7;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// srawi r5,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 7;
	// srawi r3,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 7;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r5,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// bdnz 0x82365308
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82365308;
	// add r11,r4,r31
	ctx.r11.u64 = ctx.r4.u64 + r31.u64;
	// li r9,4
	ctx.r9.s64 = 4;
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + ctx.r11.u64;
	// subf r5,r11,r31
	ctx.r5.u64 = r31.u64 - ctx.r11.u64;
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// subf r4,r11,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r3,r11,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r11.u64;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
loc_823653B0:
	// lwzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r8,r5,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r30,r3,r11
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// mulli r7,r6,1892
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1892));
	// add r29,r9,r8
	r29.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r31,r30,784
	r31.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(784));
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// mulli r28,r6,784
	r28.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(784));
	// mulli r30,r30,1892
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(1892));
	// add r9,r7,r31
	ctx.r9.u64 = ctx.r7.u64 + r31.u64;
	// mulli r7,r8,1448
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(1448));
	// mulli r6,r29,1448
	ctx.r6.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(1448));
	// subf r8,r30,r28
	ctx.r8.u64 = r28.u64 - r30.u64;
	// add r31,r9,r6
	r31.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r30,r8,r7
	r30.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r8,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r8.u64;
	// add r8,r31,r10
	ctx.r8.u64 = r31.u64 + ctx.r10.u64;
	// subf r6,r9,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r9.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// add r9,r30,r10
	ctx.r9.u64 = r30.u64 + ctx.r10.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stwx r8,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r8.u32);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// srawi r9,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 16;
	// srawi r8,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 16;
	// srawi r7,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 16;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stwx r8,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r8.u32);
	// stwx r7,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823653b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823653B0;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82369FE0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82369ff4
	if (!ctx.cr6.eq) goto loc_82369FF4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82369FF4:
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// ori r9,r10,22857
	ctx.r9.u64 = ctx.r10.u64 | 22857;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8236a03c
	if (ctx.cr6.eq) goto loc_8236A03C;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8236a03c
	if (ctx.cr6.eq) goto loc_8236A03C;
	// lis r10,12593
	ctx.r10.s64 = 825294848;
	// ori r9,r10,13392
	ctx.r9.u64 = ctx.r10.u64 | 13392;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8236a03c
	if (ctx.cr6.eq) goto loc_8236A03C;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// li r3,2
	ctx.r3.s64 = 2;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8236A03C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8236BA38) {
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
	ctx.lr = 0x8236BA40;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r31,16
	r31.s64 = 16;
loc_8236BA58:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8236BA68;
	sub_822D4FA0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// add r29,r29,r27
	r29.u64 = r29.u64 + r27.u64;
	// bne 0x8236ba58
	if (!ctx.cr0.eq) goto loc_8236BA58;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8236CBE0) {
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
	ctx.lr = 0x8236CBE8;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,340(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// stw r3,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// stw r4,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r7,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// stw r8,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r8.u32);
	// beq cr6,0x8236cfa0
	if (ctx.cr6.eq) goto loc_8236CFA0;
	// addi r22,r4,8
	r22.s64 = ctx.r4.s64 + 8;
	// lwz r25,256(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// li r16,0
	r16.s64 = 0;
	// addi r21,r22,-1
	r21.s64 = r22.s64 + -1;
	// addi r18,r22,1
	r18.s64 = r22.s64 + 1;
	// stw r16,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r16.u32);
	// addi r19,r21,-1
	r19.s64 = r21.s64 + -1;
	// addi r17,r18,1
	r17.s64 = r18.s64 + 1;
	// addi r20,r19,-1
	r20.s64 = r19.s64 + -1;
	// addi r14,r17,1
	r14.s64 = r17.s64 + 1;
	// addi r15,r20,-1
	r15.s64 = r20.s64 + -1;
	// stw r14,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r14.u32);
	// stw r15,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r15.u32);
loc_8236CC3C:
	// clrlwi r10,r16,30
	ctx.r10.u64 = r16.u32 & 0x3;
	// lbz r23,0(r15)
	r23.u64 = REX_LOAD_U8(r15.u32 + 0);
	// lbz r24,0(r14)
	r24.u64 = REX_LOAD_U8(r14.u32 + 0);
	// lbz r27,0(r20)
	r27.u64 = REX_LOAD_U8(r20.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r29,0(r19)
	r29.u64 = REX_LOAD_U8(r19.u32 + 0);
	// lbz r31,0(r21)
	r31.u64 = REX_LOAD_U8(r21.u32 + 0);
	// lbz r30,0(r22)
	r30.u64 = REX_LOAD_U8(r22.u32 + 0);
	// lbz r28,0(r18)
	r28.u64 = REX_LOAD_U8(r18.u32 + 0);
	// lbz r26,0(r17)
	r26.u64 = REX_LOAD_U8(r17.u32 + 0);
	// bne cr6,0x8236cda4
	if (!ctx.cr6.eq) goto loc_8236CDA4;
	// subf r10,r24,r26
	ctx.r10.u64 = r26.u64 - r24.u64;
	// lwz r15,88(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r14,96(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// lwz r16,80(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// std r31,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, r31.u64);
	// xor r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r6,r26,r28
	ctx.r6.u64 = r28.u64 - r26.u64;
	// subf r5,r9,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r9.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfc r4,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r4.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r3,r5,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subf r9,r28,r30
	ctx.r9.u64 = r30.u64 - r28.u64;
	// adde r7,r3,r8
	temp.u8 = (ctx.r3.u32 + ctx.r8.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r8,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 31;
	// srawi r5,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 31;
	// xor r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// subf r3,r8,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r8.u64;
	// subf r4,r30,r31
	ctx.r4.u64 = r31.u64 - r30.u64;
	// subfc r8,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r8.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r6,r3,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// adde r8,r6,r5
	temp.u8 = (ctx.r6.u32 + ctx.r5.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r6.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r5,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 31;
	// srawi r3,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 31;
	// xor r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// subf r6,r31,r29
	ctx.r6.u64 = r29.u64 - r31.u64;
	// subf r5,r5,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r5.u64;
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// subfc r11,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r5,r5,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subf r31,r29,r27
	r31.u64 = r27.u64 - r29.u64;
	// adde r6,r5,r3
	temp.u8 = (ctx.r5.u32 + ctx.r3.u32 < ctx.r5.u32) | (ctx.r5.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ctx.r5.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 31;
	// srawi r5,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 31;
	// xor r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// subf r3,r3,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r3.u64;
	// subf r4,r27,r23
	ctx.r4.u64 = r23.u64 - r27.u64;
	// subfc r10,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r3,r3,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// adde r8,r3,r5
	temp.u8 = (ctx.r3.u32 + ctx.r5.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r3.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// srawi r3,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 31;
	// xor r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r3.u64;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// subf r3,r3,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r3.u64;
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
	// subfc r9,r3,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r3.u32;
	ctx.r9.u64 = ctx.r9.u64 - ctx.r3.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r6,r3,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// adde r9,r6,r5
	temp.u8 = (ctx.r6.u32 + ctx.r5.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ctx.r6.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r31,31
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = r31.s32 >> 31;
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// xor r6,r31,r3
	ctx.r6.u64 = r31.u64 ^ ctx.r3.u64;
	// ld r31,80(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r5,r3,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfc r3,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r3.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r11,r5,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// adde r11,r11,r7
	temp.u8 = (ctx.r11.u32 + ctx.r7.u32 < ctx.r11.u32) | (ctx.r11.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r8,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 31;
	// srawi r7,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// xor r6,r4,r8
	ctx.r6.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r5,r8,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r8.u64;
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subfc r3,r5,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r5.u32;
	ctx.r3.u64 = ctx.r10.u64 - ctx.r5.u64;
	// adde r11,r4,r7
	temp.u8 = (ctx.r4.u32 + ctx.r7.u32 < ctx.r4.u32) | (ctx.r4.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r4.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_8236CDA4:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8236cf1c
	if (ctx.cr6.lt) goto loc_8236CF1C;
	// lwz r11,348(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82395c98
	ctx.lr = 0x8236CDD4;
	sub_82395C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236cf5c
	if (ctx.cr6.eq) goto loc_8236CF5C;
	// subf r10,r23,r27
	ctx.r10.u64 = r27.u64 - r23.u64;
	// lwz r11,348(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8236cdfc
	if (ctx.cr6.lt) goto loc_8236CDFC;
	// mr r23,r27
	r23.u64 = r27.u64;
loc_8236CDFC:
	// subf r10,r24,r26
	ctx.r10.u64 = r26.u64 - r24.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8236ce18
	if (ctx.cr6.lt) goto loc_8236CE18;
	// mr r24,r26
	r24.u64 = r26.u64;
loc_8236CE18:
	// addi r10,r27,2
	ctx.r10.s64 = r27.s64 + 2;
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r23,r11
	ctx.r11.u64 = r23.u64 + ctx.r11.u64;
	// add r9,r29,r23
	ctx.r9.u64 = r29.u64 + r23.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r8,r31,2
	ctx.r8.s64 = r31.s64 + 2;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r5,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 3;
	// addi r6,r30,2
	ctx.r6.s64 = r30.s64 + 2;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r5,r25
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + r25.u32);
	// add r8,r24,r28
	ctx.r8.u64 = r24.u64 + r28.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + r24.u64;
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// stb r4,0(r20)
	REX_STORE_U8(r20.u32 + 0, ctx.r4.u8);
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + r31.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + r26.u64;
	// addi r6,r26,2
	ctx.r6.s64 = r26.s64 + 2;
	// rlwinm r7,r24,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r8,r27
	ctx.r5.u64 = ctx.r8.u64 + r27.u64;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + r29.u64;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r24,r7
	ctx.r7.u64 = r24.u64 + ctx.r7.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// srawi r4,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 3;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + r27.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + r29.u64;
	// add r3,r8,r23
	ctx.r3.u64 = ctx.r8.u64 + r23.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// lbzx r8,r4,r25
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + r25.u32);
	// add r7,r9,r27
	ctx.r7.u64 = ctx.r9.u64 + r27.u64;
	// srawi r6,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 3;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 + r29.u64;
	// srawi r4,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 3;
	// stb r8,0(r19)
	REX_STORE_U8(r19.u32 + 0, ctx.r8.u8);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// srawi r11,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 3;
	// lbzx r10,r6,r25
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + r25.u32);
	// srawi r9,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 3;
	// stb r10,0(r21)
	REX_STORE_U8(r21.u32 + 0, ctx.r10.u8);
	// lbzx r8,r4,r25
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + r25.u32);
	// stb r8,0(r22)
	REX_STORE_U8(r22.u32 + 0, ctx.r8.u8);
	// lbzx r7,r11,r25
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + r25.u32);
	// stb r7,0(r18)
	REX_STORE_U8(r18.u32 + 0, ctx.r7.u8);
	// lbzx r6,r9,r25
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + r25.u32);
	// stb r6,0(r17)
	REX_STORE_U8(r17.u32 + 0, ctx.r6.u8);
	// b 0x8236cf5c
	goto loc_8236CF5C;
loc_8236CF1C:
	// subf. r11,r31,r30
	ctx.r11.u64 = r30.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236cf5c
	if (ctx.cr0.eq) goto loc_8236CF5C;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// lwz r9,348(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8236cf5c
	if (!ctx.cr6.lt) goto loc_8236CF5C;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// subf r9,r11,r30
	ctx.r9.u64 = r30.u64 - ctx.r11.u64;
	// lbzx r8,r10,r25
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + r25.u32);
	// stb r8,0(r21)
	REX_STORE_U8(r21.u32 + 0, ctx.r8.u8);
	// lbzx r7,r9,r25
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + r25.u32);
	// stb r7,0(r22)
	REX_STORE_U8(r22.u32 + 0, ctx.r7.u8);
loc_8236CF5C:
	// lwz r11,356(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// add r15,r15,r11
	r15.u64 = r15.u64 + ctx.r11.u64;
	// stw r16,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r16.u32);
	// add r14,r14,r11
	r14.u64 = r14.u64 + ctx.r11.u64;
	// stw r15,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r15.u32);
	// add r20,r20,r11
	r20.u64 = r20.u64 + ctx.r11.u64;
	// add r19,r19,r11
	r19.u64 = r19.u64 + ctx.r11.u64;
	// stw r14,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r14.u32);
	// add r21,r21,r11
	r21.u64 = r21.u64 + ctx.r11.u64;
	// add r22,r22,r11
	r22.u64 = r22.u64 + ctx.r11.u64;
	// add r18,r18,r11
	r18.u64 = r18.u64 + ctx.r11.u64;
	// add r17,r17,r11
	r17.u64 = r17.u64 + ctx.r11.u64;
	// cmpwi cr6,r16,16
	ctx.cr6.compare<int32_t>(r16.s32, 16, ctx.xer);
	// blt cr6,0x8236cc3c
	if (ctx.cr6.lt) goto loc_8236CC3C;
	// lwz r4,284(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
loc_8236CFA0:
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236d320
	if (ctx.cr6.eq) goto loc_8236D320;
	// addi r21,r4,-1
	r21.s64 = ctx.r4.s64 + -1;
	// lwz r25,256(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// addi r19,r21,-1
	r19.s64 = r21.s64 + -1;
	// addi r18,r11,1
	r18.s64 = ctx.r11.s64 + 1;
	// addi r20,r19,-1
	r20.s64 = r19.s64 + -1;
	// addi r14,r18,1
	r14.s64 = r18.s64 + 1;
	// addi r15,r20,-1
	r15.s64 = r20.s64 + -1;
	// stw r14,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r14.u32);
	// li r16,0
	r16.s64 = 0;
	// stw r15,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r15.u32);
	// addi r22,r21,1
	r22.s64 = r21.s64 + 1;
loc_8236CFDC:
	// clrlwi r10,r16,30
	ctx.r10.u64 = r16.u32 & 0x3;
	// lbz r23,0(r15)
	r23.u64 = REX_LOAD_U8(r15.u32 + 0);
	// lbz r24,0(r14)
	r24.u64 = REX_LOAD_U8(r14.u32 + 0);
	// lbz r27,0(r20)
	r27.u64 = REX_LOAD_U8(r20.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r29,0(r19)
	r29.u64 = REX_LOAD_U8(r19.u32 + 0);
	// lbz r31,0(r21)
	r31.u64 = REX_LOAD_U8(r21.u32 + 0);
	// lbz r30,0(r22)
	r30.u64 = REX_LOAD_U8(r22.u32 + 0);
	// lbz r28,1(r22)
	r28.u64 = REX_LOAD_U8(r22.u32 + 1);
	// lbz r26,0(r18)
	r26.u64 = REX_LOAD_U8(r18.u32 + 0);
	// bne cr6,0x8236d130
	if (!ctx.cr6.eq) goto loc_8236D130;
	// subf r10,r24,r26
	ctx.r10.u64 = r26.u64 - r24.u64;
	// lwz r15,96(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r14,88(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r6,r26,r28
	ctx.r6.u64 = r28.u64 - r26.u64;
	// subf r5,r9,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r9.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfc r4,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r4.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r3,r5,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subf r9,r28,r30
	ctx.r9.u64 = r30.u64 - r28.u64;
	// adde r7,r3,r8
	temp.u8 = (ctx.r3.u32 + ctx.r8.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r8,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 31;
	// srawi r5,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 31;
	// xor r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// subf r17,r31,r29
	r17.u64 = r29.u64 - r31.u64;
	// subf r3,r8,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r8.u64;
	// subf r4,r30,r31
	ctx.r4.u64 = r31.u64 - r30.u64;
	// subfc r8,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r8.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r6,r3,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// adde r6,r6,r5
	temp.u8 = (ctx.r6.u32 + ctx.r5.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r5,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 31;
	// srawi r3,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 31;
	// xor r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// subf r8,r5,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r5.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfc r5,r8,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r8.u32;
	ctx.r5.u64 = ctx.r11.u64 - ctx.r8.u64;
	// rlwinm r11,r8,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// subf r8,r29,r27
	ctx.r8.u64 = r27.u64 - r29.u64;
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// adde r8,r11,r3
	temp.u8 = (ctx.r11.u32 + ctx.r3.u32 < ctx.r11.u32) | (ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r5,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 31;
	// srawi r3,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 31;
	// xor r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// subf r4,r27,r23
	ctx.r4.u64 = r23.u64 - r27.u64;
	// subfc r10,r5,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r5.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r5.u64;
	// rlwinm r5,r5,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// adde r7,r5,r3
	temp.u8 = (ctx.r5.u32 + ctx.r3.u32 < ctx.r5.u32) | (ctx.r5.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r5.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r17,31
	ctx.xer.ca = (r17.s32 < 0) & ((r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = r17.s32 >> 31;
	// srawi r6,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 31;
	// xor r5,r17,r3
	ctx.r5.u64 = r17.u64 ^ ctx.r3.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r3,r3,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfc r5,r3,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r3.u32;
	ctx.r5.u64 = ctx.r9.u64 - ctx.r3.u64;
	// rlwinm r3,r3,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// adde r8,r3,r6
	temp.u8 = (ctx.r3.u32 + ctx.r6.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r3.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// srawi r3,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 31;
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// xor r6,r5,r3
	ctx.r6.u64 = ctx.r5.u64 ^ ctx.r3.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r5,r3,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r3.u64;
	// subfc r3,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r3.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r11,r5,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// adde r11,r11,r7
	temp.u8 = (ctx.r11.u32 + ctx.r7.u32 < ctx.r11.u32) | (ctx.r11.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r8,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 31;
	// srawi r7,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// xor r6,r4,r8
	ctx.r6.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r5,r8,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r8.u64;
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subfc r3,r5,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r5.u32;
	ctx.r3.u64 = ctx.r10.u64 - ctx.r5.u64;
	// adde r10,r4,r7
	temp.u8 = (ctx.r4.u32 + ctx.r7.u32 < ctx.r4.u32) | (ctx.r4.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r4.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_8236D130:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8236d2a4
	if (ctx.cr6.lt) goto loc_8236D2A4;
	// lwz r17,348(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// rlwinm r9,r17,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82395c98
	ctx.lr = 0x8236D160;
	sub_82395C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236d2e4
	if (ctx.cr6.eq) goto loc_8236D2E4;
	// subf r11,r23,r27
	ctx.r11.u64 = r27.u64 - r23.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r8,r17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r17.s32, ctx.xer);
	// blt cr6,0x8236d184
	if (ctx.cr6.lt) goto loc_8236D184;
	// mr r23,r27
	r23.u64 = r27.u64;
loc_8236D184:
	// subf r11,r24,r26
	ctx.r11.u64 = r26.u64 - r24.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r8,r17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r17.s32, ctx.xer);
	// blt cr6,0x8236d1a0
	if (ctx.cr6.lt) goto loc_8236D1A0;
	// mr r24,r26
	r24.u64 = r26.u64;
loc_8236D1A0:
	// rlwinm r10,r23,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r27,2
	ctx.r11.s64 = r27.s64 + 2;
	// add r9,r23,r10
	ctx.r9.u64 = r23.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r29,r23
	ctx.r10.u64 = r29.u64 + r23.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// addi r6,r31,2
	ctx.r6.s64 = r31.s64 + 2;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r30,2
	ctx.r4.s64 = r30.s64 + 2;
	// lbzx r3,r7,r25
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + r25.u32);
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + r27.u64;
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + r26.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// stb r3,0(r20)
	REX_STORE_U8(r20.u32 + 0, ctx.r3.u8);
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + r30.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// addi r3,r26,2
	ctx.r3.s64 = r26.s64 + 2;
	// rlwinm r8,r24,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + r29.u64;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + r28.u64;
	// srawi r5,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 3;
	// add r8,r24,r8
	ctx.r8.u64 = r24.u64 + ctx.r8.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 + r27.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r8,r7,r23
	ctx.r8.u64 = ctx.r7.u64 + r23.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// add r10,r24,r28
	ctx.r10.u64 = r24.u64 + r28.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + r29.u64;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// add r6,r9,r27
	ctx.r6.u64 = ctx.r9.u64 + r27.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// lbzx r7,r5,r25
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + r25.u32);
	// srawi r5,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 3;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// srawi r3,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 3;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stb r7,0(r19)
	REX_STORE_U8(r19.u32 + 0, ctx.r7.u8);
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + r29.u64;
	// lbzx r9,r5,r25
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + r25.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stb r9,0(r21)
	REX_STORE_U8(r21.u32 + 0, ctx.r9.u8);
	// srawi r10,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 3;
	// lbzx r7,r3,r25
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + r25.u32);
	// srawi r8,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 3;
	// stb r7,0(r22)
	REX_STORE_U8(r22.u32 + 0, ctx.r7.u8);
	// lbzx r6,r10,r25
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + r25.u32);
	// stb r6,1(r22)
	REX_STORE_U8(r22.u32 + 1, ctx.r6.u8);
	// lbzx r5,r8,r25
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + r25.u32);
	// stb r5,0(r18)
	REX_STORE_U8(r18.u32 + 0, ctx.r5.u8);
	// b 0x8236d2e4
	goto loc_8236D2E4;
loc_8236D2A4:
	// subf. r11,r31,r30
	ctx.r11.u64 = r30.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236d2e4
	if (ctx.cr0.eq) goto loc_8236D2E4;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// lwz r9,348(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8236d2e4
	if (!ctx.cr6.lt) goto loc_8236D2E4;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// add r10,r31,r25
	ctx.r10.u64 = r31.u64 + r25.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// subf r9,r11,r30
	ctx.r9.u64 = r30.u64 - ctx.r11.u64;
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r8,0(r21)
	REX_STORE_U8(r21.u32 + 0, ctx.r8.u8);
	// lbzx r7,r9,r25
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + r25.u32);
	// stb r7,0(r22)
	REX_STORE_U8(r22.u32 + 0, ctx.r7.u8);
loc_8236D2E4:
	// lwz r11,356(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// add r15,r15,r11
	r15.u64 = r15.u64 + ctx.r11.u64;
	// add r14,r14,r11
	r14.u64 = r14.u64 + ctx.r11.u64;
	// stw r15,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r15.u32);
	// add r20,r20,r11
	r20.u64 = r20.u64 + ctx.r11.u64;
	// add r19,r19,r11
	r19.u64 = r19.u64 + ctx.r11.u64;
	// stw r14,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r14.u32);
	// add r21,r21,r11
	r21.u64 = r21.u64 + ctx.r11.u64;
	// add r22,r22,r11
	r22.u64 = r22.u64 + ctx.r11.u64;
	// add r18,r18,r11
	r18.u64 = r18.u64 + ctx.r11.u64;
	// cmpwi cr6,r16,16
	ctx.cr6.compare<int32_t>(r16.s32, 16, ctx.xer);
	// blt cr6,0x8236cfdc
	if (ctx.cr6.lt) goto loc_8236CFDC;
	// lwz r4,284(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
loc_8236D320:
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236d60c
	if (ctx.cr6.eq) goto loc_8236D60C;
	// addi r19,r4,16
	r19.s64 = ctx.r4.s64 + 16;
	// lwz r21,256(r3)
	r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// li r18,0
	r18.s64 = 0;
	// addi r24,r19,-1
	r24.s64 = r19.s64 + -1;
	// addi r17,r19,1
	r17.s64 = r19.s64 + 1;
	// addi r22,r24,-1
	r22.s64 = r24.s64 + -1;
	// addi r16,r17,1
	r16.s64 = r17.s64 + 1;
	// stw r17,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r17.u32);
	// addi r23,r22,-1
	r23.s64 = r22.s64 + -1;
	// stw r16,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r16.u32);
	// addi r20,r16,1
	r20.s64 = r16.s64 + 1;
	// addi r15,r23,-1
	r15.s64 = r23.s64 + -1;
	// stw r15,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r15.u32);
loc_8236D360:
	// clrlwi r10,r18,30
	ctx.r10.u64 = r18.u32 & 0x3;
	// lbz r27,0(r15)
	r27.u64 = REX_LOAD_U8(r15.u32 + 0);
	// lbz r29,0(r19)
	r29.u64 = REX_LOAD_U8(r19.u32 + 0);
	// lbz r26,0(r17)
	r26.u64 = REX_LOAD_U8(r17.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r25,0(r16)
	r25.u64 = REX_LOAD_U8(r16.u32 + 0);
	// lbz r31,0(r23)
	r31.u64 = REX_LOAD_U8(r23.u32 + 0);
	// lbz r28,0(r22)
	r28.u64 = REX_LOAD_U8(r22.u32 + 0);
	// lbz r30,0(r24)
	r30.u64 = REX_LOAD_U8(r24.u32 + 0);
	// bne cr6,0x8236d4c4
	if (!ctx.cr6.eq) goto loc_8236D4C4;
	// lbz r7,0(r20)
	ctx.r7.u64 = REX_LOAD_U8(r20.u32 + 0);
	// li r11,2
	ctx.r11.s64 = 2;
	// subf r8,r25,r26
	ctx.r8.u64 = r26.u64 - r25.u64;
	// lwz r15,96(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// subf r6,r7,r25
	ctx.r6.u64 = r25.u64 - ctx.r7.u64;
	// lwz r17,88(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,2
	ctx.r10.s64 = 2;
	// std r30,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r30.u64);
	// srawi r4,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// lwz r16,80(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r3,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 31;
	// xor r7,r6,r4
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// subf r5,r26,r29
	ctx.r5.u64 = r29.u64 - r26.u64;
	// subf r6,r4,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r4.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfc r7,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r7.u64 = ctx.r11.u64 - ctx.r6.u64;
	// rlwinm r6,r6,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// subf r4,r29,r30
	ctx.r4.u64 = r30.u64 - r29.u64;
	// adde r7,r6,r3
	temp.u8 = (ctx.r6.u32 + ctx.r3.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r6.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 31;
	// srawi r6,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 31;
	// xor r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// subf r14,r30,r28
	r14.u64 = r28.u64 - r30.u64;
	// subf r3,r3,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r3.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// subfc r10,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r3,r3,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subf r30,r28,r31
	r30.u64 = r31.u64 - r28.u64;
	// adde r6,r3,r6
	temp.u8 = (ctx.r3.u32 + ctx.r6.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ctx.r3.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 31;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// xor r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r3.u64;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// subf r3,r3,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r3.u64;
	// subf r5,r31,r27
	ctx.r5.u64 = r27.u64 - r31.u64;
	// subfc r9,r3,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r3.u32;
	ctx.r9.u64 = ctx.r9.u64 - ctx.r3.u64;
	// rlwinm r3,r3,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// add r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// adde r7,r3,r7
	temp.u8 = (ctx.r3.u32 + ctx.r7.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r6,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 31;
	// srawi r3,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 31;
	// xor r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// subf r6,r6,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r6.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfc r4,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r4.u64 = ctx.r11.u64 - ctx.r6.u64;
	// rlwinm r11,r6,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// adde r11,r11,r3
	temp.u8 = (ctx.r11.u32 + ctx.r3.u32 < ctx.r11.u32) | (ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r6,r14,31
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = r14.s32 >> 31;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// xor r3,r14,r6
	ctx.r3.u64 = r14.u64 ^ ctx.r6.u64;
	// srawi r4,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 31;
	// subf r7,r6,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r6.u64;
	// subfc r3,r7,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r3.u64 = ctx.r8.u64 - ctx.r7.u64;
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// adde r8,r6,r4
	temp.u8 = (ctx.r6.u32 + ctx.r4.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r6.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r7,r30,31
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = r30.s32 >> 31;
	// srawi r6,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 31;
	// xor r4,r30,r7
	ctx.r4.u64 = r30.u64 ^ ctx.r7.u64;
	// ld r30,88(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r3,r7,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r7.u64;
	// subfc r10,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r8,r3,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// adde r10,r8,r6
	temp.u8 = (ctx.r8.u32 + ctx.r6.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r8.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r7,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 31;
	// srawi r6,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 31;
	// xor r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r7,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subfc r10,r4,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r4.u32;
	ctx.r10.u64 = ctx.r9.u64 - ctx.r4.u64;
	// rlwinm r3,r4,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// adde r10,r3,r6
	temp.u8 = (ctx.r3.u32 + ctx.r6.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r3.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
loc_8236D4C4:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8236d59c
	if (ctx.cr6.lt) goto loc_8236D59C;
	// lwz r14,348(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// rlwinm r9,r14,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82395c98
	ctx.lr = 0x8236D4F4;
	sub_82395C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236d5d0
	if (ctx.cr6.eq) goto loc_8236D5D0;
	// subf r11,r27,r31
	ctx.r11.u64 = r31.u64 - r27.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r14.s32, ctx.xer);
	// blt cr6,0x8236d518
	if (ctx.cr6.lt) goto loc_8236D518;
	// mr r27,r31
	r27.u64 = r31.u64;
loc_8236D518:
	// addi r11,r31,2
	ctx.r11.s64 = r31.s64 + 2;
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r27,r10
	ctx.r10.u64 = r27.u64 + ctx.r10.u64;
	// addi r8,r30,2
	ctx.r8.s64 = r30.s64 + 2;
	// add r9,r28,r27
	ctx.r9.u64 = r28.u64 + r27.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r9,2
	ctx.r7.s64 = ctx.r9.s64 + 2;
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + r29.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// add r6,r9,r28
	ctx.r6.u64 = ctx.r9.u64 + r28.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + r31.u64;
	// lbzx r3,r5,r21
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + r21.u32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// srawi r10,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 3;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// stb r3,0(r23)
	REX_STORE_U8(r23.u32 + 0, ctx.r3.u8);
	// lbzx r8,r10,r21
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + r21.u32);
	// stb r8,0(r22)
	REX_STORE_U8(r22.u32 + 0, ctx.r8.u8);
	// lbzx r7,r9,r21
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + r21.u32);
	// stb r7,0(r24)
	REX_STORE_U8(r24.u32 + 0, ctx.r7.u8);
	// b 0x8236d5d0
	goto loc_8236D5D0;
loc_8236D59C:
	// subf. r11,r30,r29
	ctx.r11.u64 = r29.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236d5d0
	if (ctx.cr0.eq) goto loc_8236D5D0;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// lwz r9,348(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8236d5d0
	if (!ctx.cr6.lt) goto loc_8236D5D0;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// lbzx r9,r10,r21
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + r21.u32);
	// stb r9,0(r24)
	REX_STORE_U8(r24.u32 + 0, ctx.r9.u8);
loc_8236D5D0:
	// lwz r11,356(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// add r15,r15,r11
	r15.u64 = r15.u64 + ctx.r11.u64;
	// add r17,r17,r11
	r17.u64 = r17.u64 + ctx.r11.u64;
	// add r16,r16,r11
	r16.u64 = r16.u64 + ctx.r11.u64;
	// stw r15,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r15.u32);
	// add r23,r23,r11
	r23.u64 = r23.u64 + ctx.r11.u64;
	// stw r17,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r17.u32);
	// add r22,r22,r11
	r22.u64 = r22.u64 + ctx.r11.u64;
	// stw r16,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r16.u32);
	// add r24,r24,r11
	r24.u64 = r24.u64 + ctx.r11.u64;
	// add r19,r19,r11
	r19.u64 = r19.u64 + ctx.r11.u64;
	// add r20,r20,r11
	r20.u64 = r20.u64 + ctx.r11.u64;
	// cmpwi cr6,r18,16
	ctx.cr6.compare<int32_t>(r18.s32, 16, ctx.xer);
	// blt cr6,0x8236d360
	if (ctx.cr6.lt) goto loc_8236D360;
loc_8236D60C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82397948) {
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
	ctx.lr = 0x82397950;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24688(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r25,r11,8
	r25.s64 = ctx.r11.s64 + 8;
	// beq cr6,0x82397a08
	if (ctx.cr6.eq) goto loc_82397A08;
	// lwz r11,64(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823979fc
	if (!ctx.cr6.gt) goto loc_823979FC;
	// addi r29,r4,12
	r29.s64 = ctx.r4.s64 + 12;
loc_82397980:
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,24688(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24688);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r30,r11,8
	r30.s64 = ctx.r11.s64 + 8;
	// beq cr6,0x823979e8
	if (ctx.cr6.eq) goto loc_823979E8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x82397bb0
	ctx.lr = 0x823979A0;
	sub_82397BB0(ctx, base);
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823979b4
	if (ctx.cr6.eq) goto loc_823979B4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8233ff78
	ctx.lr = 0x823979B4;
	sub_8233FF78(ctx, base);
loc_823979B4:
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823979c8
	if (ctx.cr6.eq) goto loc_823979C8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8233ff78
	ctx.lr = 0x823979C8;
	sub_8233FF78(ctx, base);
loc_823979C8:
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823979dc
	if (ctx.cr6.eq) goto loc_823979DC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8233ff78
	ctx.lr = 0x823979DC;
	sub_8233FF78(ctx, base);
loc_823979DC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8233ff78
	ctx.lr = 0x823979E8;
	sub_8233FF78(ctx, base);
loc_823979E8:
	// lwz r11,64(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 64);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82397980
	if (ctx.cr6.lt) goto loc_82397980;
loc_823979FC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8233ff78
	ctx.lr = 0x82397A08;
	sub_8233FF78(ctx, base);
loc_82397A08:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8239A188) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8239A190;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,248(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x8239a230
	if (ctx.cr6.lt) goto loc_8239A230;
	// lwz r11,288(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239a1b8
	if (ctx.cr6.eq) goto loc_8239A1B8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8239a1c4
	if (!ctx.cr6.eq) goto loc_8239A1C4;
loc_8239A1B8:
	// lwz r11,20760(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20760);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239a1d0
	if (ctx.cr6.eq) goto loc_8239A1D0;
loc_8239A1C4:
	// lwz r11,284(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8239a230
	if (!ctx.cr6.eq) goto loc_8239A230;
loc_8239A1D0:
	// li r30,0
	r30.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8239A1D8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8239a220
	if (!ctx.cr6.eq) goto loc_8239A220;
	// lwz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// bge 0x8239a208
	if (!ctx.cr0.lt) goto loc_8239A208;
	// bl 0x823380c8
	ctx.lr = 0x8239A208;
	sub_823380C8(ctx, base);
loc_8239A208:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(r30.s32, 6, ctx.xer);
	// blt cr6,0x8239a1d8
	if (ctx.cr6.lt) goto loc_8239A1D8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x8239a228
	if (ctx.cr6.eq) goto loc_8239A228;
loc_8239A220:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// b 0x8239a3d4
	goto loc_8239A3D4;
loc_8239A228:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8239a3d4
	goto loc_8239A3D4;
loc_8239A230:
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
	// bge cr6,0x8239a2a4
	if (!ctx.cr6.lt) goto loc_8239A2A4;
loc_8239A24C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239a2a4
	if (ctx.cr6.eq) goto loc_8239A2A4;
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
	// bge 0x8239a294
	if (!ctx.cr0.lt) goto loc_8239A294;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8239A294;
	sub_823380C8(ctx, base);
loc_8239A294:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8239a24c
	if (ctx.cr6.gt) goto loc_8239A24C;
loc_8239A2A4:
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
	// bge 0x8239a2dc
	if (!ctx.cr0.lt) goto loc_8239A2DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8239A2DC;
	sub_823380C8(ctx, base);
loc_8239A2DC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r30,1952(r28)
	REX_STORE_U32(r28.u32 + 1952, r30.u32);
	// bne cr6,0x8239a3d8
	if (!ctx.cr6.eq) goto loc_8239A3D8;
	// lwz r11,15536(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 15536);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x8239a3a8
	if (ctx.cr6.lt) goto loc_8239A3A8;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r30,2
	r30.s64 = 2;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8239a368
	if (!ctx.cr6.lt) goto loc_8239A368;
loc_8239A310:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239a368
	if (ctx.cr6.eq) goto loc_8239A368;
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
	// bge 0x8239a358
	if (!ctx.cr0.lt) goto loc_8239A358;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8239A358;
	sub_823380C8(ctx, base);
loc_8239A358:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8239a310
	if (ctx.cr6.gt) goto loc_8239A310;
loc_8239A368:
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
	// bge 0x8239a3a0
	if (!ctx.cr0.lt) goto loc_8239A3A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8239A3A0;
	sub_823380C8(ctx, base);
loc_8239A3A0:
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// b 0x8239a3d4
	goto loc_8239A3D4;
loc_8239A3A8:
	// lwz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// bge 0x8239a3d0
	if (!ctx.cr0.lt) goto loc_8239A3D0;
	// bl 0x823380c8
	ctx.lr = 0x8239A3D0;
	sub_823380C8(ctx, base);
loc_8239A3D0:
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
loc_8239A3D4:
	// stw r11,1952(r28)
	REX_STORE_U32(r28.u32 + 1952, ctx.r11.u32);
loc_8239A3D8:
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r30,2
	r30.s64 = 2;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8239a44c
	if (!ctx.cr6.lt) goto loc_8239A44C;
loc_8239A3F4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239a44c
	if (ctx.cr6.eq) goto loc_8239A44C;
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
	// bge 0x8239a43c
	if (!ctx.cr0.lt) goto loc_8239A43C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8239A43C;
	sub_823380C8(ctx, base);
loc_8239A43C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8239a3f4
	if (ctx.cr6.gt) goto loc_8239A3F4;
loc_8239A44C:
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
	// bge 0x8239a484
	if (!ctx.cr0.lt) goto loc_8239A484;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8239A484;
	sub_823380C8(ctx, base);
loc_8239A484:
	// addi r11,r30,3
	ctx.r11.s64 = r30.s64 + 3;
	// stw r11,1956(r28)
	REX_STORE_U32(r28.u32 + 1956, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823AC828) {
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
	ctx.lr = 0x823AC830;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f2c
	ctx.lr = 0x823AC838;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// stw r10,444(r1)
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r10.u32);
	// lwz r10,484(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// mr r17,r9
	r17.u64 = ctx.r9.u64;
	// stw r9,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r9.u32);
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// mr r14,r7
	r14.u64 = ctx.r7.u64;
	// stw r6,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r6.u32);
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// lwz r8,476(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// stw r5,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r5.u32);
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// stw r4,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r4.u32);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r7,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// std r6,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// lfd f13,128(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// std r5,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// lfd f12,128(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// std r4,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// lfd f11,128(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// fcfid f31,f12
	f31.f64 = double(ctx.f12.s64);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f30,-9408(r3)
	f30.u64 = REX_LOAD_U64(ctx.r3.u32 + -9408);
	// lfd f0,-9400(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -9400);
	// srawi r22,r15,1
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0x1) != 0);
	r22.s64 = r15.s32 >> 1;
	// fmul f7,f31,f0
	ctx.f7.f64 = f31.f64 * ctx.f0.f64;
	// lwz r25,452(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// srawi r20,r23,1
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x1) != 0);
	r20.s64 = r23.s32 >> 1;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// fnmsub f27,f9,f30,f10
	f27.f64 = -std::fma(ctx.f9.f64, f30.f64, -ctx.f10.f64);
	// fsub f6,f27,f10
	ctx.f6.f64 = f27.f64 - ctx.f10.f64;
	// fadd f26,f6,f8
	f26.f64 = ctx.f6.f64 + ctx.f8.f64;
	// fadd f5,f26,f27
	ctx.f5.f64 = f26.f64 + f27.f64;
	// fsub f4,f5,f7
	ctx.f4.f64 = ctx.f5.f64 - ctx.f7.f64;
	// fadd f3,f7,f5
	ctx.f3.f64 = ctx.f7.f64 + ctx.f5.f64;
	// fctiwz f2,f4
	ctx.f2.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f2,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f2.u64);
	// fctiwz f1,f3
	ctx.f1.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f1,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f1.u64);
	// lwz r16,124(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// ble cr6,0x823ac994
	if (!ctx.cr6.gt) goto loc_823AC994;
	// subf r29,r11,r15
	r29.u64 = r15.u64 - ctx.r11.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// addi r30,r16,1
	r30.s64 = r16.s64 + 1;
	// subf r26,r25,r19
	r26.u64 = r19.u64 - r25.u64;
	// subf r27,r25,r15
	r27.u64 = r15.u64 - r25.u64;
	// mr r28,r23
	r28.u64 = r23.u64;
loc_823AC930:
	// cmpw cr6,r30,r15
	ctx.cr6.compare<int32_t>(r30.s32, r15.s32, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// blt cr6,0x823ac940
	if (ctx.cr6.lt) goto loc_823AC940;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
loc_823AC940:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x823ac954
	if (!ctx.cr6.gt) goto loc_823AC954;
	// add r4,r26,r31
	ctx.r4.u64 = r26.u64 + r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823AC954;
	sub_822D4FA0(ctx, base);
loc_823AC954:
	// cmpw cr6,r29,r15
	ctx.cr6.compare<int32_t>(r29.s32, r15.s32, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// blt cr6,0x823ac964
	if (ctx.cr6.lt) goto loc_823AC964;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
loc_823AC964:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x823ac980
	if (!ctx.cr6.gt) goto loc_823AC980;
	// subf r11,r5,r27
	ctx.r11.u64 = r27.u64 - ctx.r5.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + r24.u64;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + r25.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823AC980;
	sub_822D4FA0(ctx, base);
loc_823AC980:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// add r31,r31,r15
	r31.u64 = r31.u64 + r15.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bne 0x823ac930
	if (!ctx.cr0.eq) goto loc_823AC930;
loc_823AC994:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x823aca5c
	if (!ctx.cr6.gt) goto loc_823ACA5C;
	// lwz r28,132(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// subf r27,r28,r16
	r27.u64 = r16.u64 - r28.u64;
loc_823AC9A8:
	// add r11,r27,r28
	ctx.r11.u64 = r27.u64 + r28.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r30,r22
	ctx.cr6.compare<int32_t>(r30.s32, r22.s32, ctx.xer);
	// blt cr6,0x823ac9c0
	if (ctx.cr6.lt) goto loc_823AC9C0;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_823AC9C0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x823ac9f8
	if (!ctx.cr6.gt) goto loc_823AC9F8;
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// lwz r10,460(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mullw r31,r11,r22
	r31.s64 = int64_t(ctx.r11.s32) * int64_t(r22.s32);
	// add r4,r31,r18
	ctx.r4.u64 = r31.u64 + r18.u64;
	// add r3,r31,r10
	ctx.r3.u64 = r31.u64 + ctx.r10.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823AC9E4;
	sub_822D4FA0(ctx, base);
	// lwz r9,468(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r31,r14
	ctx.r4.u64 = r31.u64 + r14.u64;
	// add r3,r31,r9
	ctx.r3.u64 = r31.u64 + ctx.r9.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823AC9F8;
	sub_822D4FA0(ctx, base);
loc_823AC9F8:
	// srawi r11,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r11.s64 = r28.s32 >> 1;
	// subf r30,r11,r22
	r30.u64 = r22.u64 - ctx.r11.u64;
	// cmpw cr6,r30,r22
	ctx.cr6.compare<int32_t>(r30.s32, r22.s32, ctx.xer);
	// blt cr6,0x823aca0c
	if (ctx.cr6.lt) goto loc_823ACA0C;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_823ACA0C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x823aca4c
	if (!ctx.cr6.gt) goto loc_823ACA4C;
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
	// add r4,r31,r17
	ctx.r4.u64 = r31.u64 + r17.u64;
	// add r3,r31,r10
	ctx.r3.u64 = r31.u64 + ctx.r10.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823ACA38;
	sub_822D4FA0(ctx, base);
	// lwz r7,468(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r31,r21
	ctx.r4.u64 = r31.u64 + r21.u64;
	// add r3,r31,r7
	ctx.r3.u64 = r31.u64 + ctx.r7.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823ACA4C;
	sub_822D4FA0(ctx, base);
loc_823ACA4C:
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// addi r28,r28,-2
	r28.s64 = r28.s64 + -2;
	// cmpw cr6,r29,r23
	ctx.cr6.compare<int32_t>(r29.s32, r23.s32, ctx.xer);
	// blt cr6,0x823ac9a8
	if (ctx.cr6.lt) goto loc_823AC9A8;
loc_823ACA5C:
	// addi r11,r16,1
	ctx.r11.s64 = r16.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r22,-1
	ctx.r9.s64 = r22.s64 + -1;
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// xoris r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 ^ 2147483648;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// subf r6,r19,r25
	ctx.r6.u64 = r25.u64 - r19.u64;
	// addc r5,r7,r8
	ctx.xer.ca = ctx.r7.u32 + ctx.r8.u32 < ctx.r7.u32;
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r3,r19,r24
	ctx.r3.u64 = r24.u64 - r19.u64;
	// stw r6,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// subfe r10,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// subfic r21,r19,1
	ctx.xer.ca = r19.u32 <= 1;
	r21.u64 = static_cast<uint64_t>(1) - r19.u64;
	// and r30,r10,r11
	r30.u64 = ctx.r10.u64 & ctx.r11.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f25,-9416(r11)
	ctx.fpscr.disableFlushMode();
	f25.u64 = REX_LOAD_U64(ctx.r11.u32 + -9416);
	// lfd f28,4000(r10)
	f28.u64 = REX_LOAD_U64(ctx.r10.u32 + 4000);
loc_823ACAA4:
	// lwz r9,132(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpw cr6,r9,r15
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r15.s32, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x823acab8
	if (ctx.cr6.lt) goto loc_823ACAB8;
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
loc_823ACAB8:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823acc80
	if (!ctx.cr6.lt) goto loc_823ACC80;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// std r11,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fsub f12,f13,f27
	ctx.f12.f64 = ctx.f13.f64 - f27.f64;
	// fsub f11,f12,f26
	ctx.f11.f64 = ctx.f12.f64 - f26.f64;
	// fmul f29,f11,f30
	f29.f64 = ctx.f11.f64 * f30.f64;
	// fdiv f1,f29,f31
	ctx.f1.f64 = f29.f64 / f31.f64;
	// bl 0x822d6768
	ctx.lr = 0x823ACAE4;
	sub_822D6768(ctx, base);
	// fsub f10,f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = f25.f64 - ctx.f1.f64;
	// addi r11,r15,1
	ctx.r11.s64 = r15.s64 + 1;
	// fmsub f9,f1,f31,f29
	ctx.f9.f64 = std::fma(ctx.f1.f64, f31.f64, -f29.f64);
	// add r6,r30,r19
	ctx.r6.u64 = r30.u64 + r19.u64;
	// add r10,r6,r21
	ctx.r10.u64 = ctx.r6.u64 + r21.u64;
	// cmpw cr6,r10,r23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r23.s32, ctx.xer);
	// fmsub f8,f10,f31,f29
	ctx.f8.f64 = std::fma(ctx.f10.f64, f31.f64, -f29.f64);
	// fmadd f7,f9,f30,f28
	ctx.f7.f64 = std::fma(ctx.f9.f64, f30.f64, f28.f64);
	// fmadd f6,f8,f30,f28
	ctx.f6.f64 = std::fma(ctx.f8.f64, f30.f64, f28.f64);
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f5.u64);
	// lwz r29,148(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mullw r9,r11,r29
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// fctiwz f4,f6
	ctx.f4.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f4.u64);
	// lwz r28,148(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mullw r8,r11,r28
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + r30.u64;
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + r30.u64;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + r19.u64;
	// add r5,r9,r19
	ctx.r5.u64 = ctx.r9.u64 + r19.u64;
	// blt cr6,0x823acb40
	if (ctx.cr6.lt) goto loc_823ACB40;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_823ACB40:
	// subf r31,r29,r23
	r31.u64 = r23.u64 - r29.u64;
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// subf r11,r15,r28
	ctx.r11.u64 = r28.u64 - r15.u64;
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// subf r10,r15,r29
	ctx.r10.u64 = r29.u64 - r15.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r3,120(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// add r7,r6,r9
	ctx.r7.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r9,r28,r23
	ctx.r9.u64 = r23.u64 - r28.u64;
	// addi r8,r15,-1
	ctx.r8.s64 = r15.s64 + -1;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// add r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 + ctx.r3.u64;
	// bl 0x823ac460
	ctx.lr = 0x823ACB8C;
	sub_823AC460(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = r30.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823acc78
	if (!ctx.cr6.eq) goto loc_823ACC78;
	// srawi r31,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	r31.s64 = r30.s32 >> 1;
	// lwz r7,460(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
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
	// addi r29,r31,1
	r29.s64 = r31.s64 + 1;
	// add r27,r9,r31
	r27.u64 = ctx.r9.u64 + r31.u64;
	// add r3,r31,r7
	ctx.r3.u64 = r31.u64 + ctx.r7.u64;
	// add r4,r28,r18
	ctx.r4.u64 = r28.u64 + r18.u64;
	// add r5,r27,r18
	ctx.r5.u64 = r27.u64 + r18.u64;
	// add r6,r31,r18
	ctx.r6.u64 = r31.u64 + r18.u64;
	// add r7,r31,r17
	ctx.r7.u64 = r31.u64 + r17.u64;
	// cmpw cr6,r29,r20
	ctx.cr6.compare<int32_t>(r29.s32, r20.s32, ctx.xer);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// blt cr6,0x823acbe4
	if (ctx.cr6.lt) goto loc_823ACBE4;
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
loc_823ACBE4:
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// subf r8,r22,r10
	ctx.r8.u64 = ctx.r10.u64 - r22.u64;
	// subf r25,r10,r20
	r25.u64 = r20.u64 - ctx.r10.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// subf r9,r22,r11
	ctx.r9.u64 = ctx.r11.u64 - r22.u64;
	// addi r24,r8,1
	r24.s64 = ctx.r8.s64 + 1;
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// subf r23,r11,r20
	r23.u64 = r20.u64 - ctx.r11.u64;
	// addi r26,r9,1
	r26.s64 = ctx.r9.s64 + 1;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// bl 0x823ac460
	ctx.lr = 0x823ACC24;
	sub_823AC460(ctx, base);
	// lwz r11,468(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r10,444(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// add r4,r28,r14
	ctx.r4.u64 = r28.u64 + r14.u64;
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + ctx.r11.u64;
	// add r5,r27,r14
	ctx.r5.u64 = r27.u64 + r14.u64;
	// add r6,r31,r14
	ctx.r6.u64 = r31.u64 + r14.u64;
	// add r7,r31,r10
	ctx.r7.u64 = r31.u64 + ctx.r10.u64;
	// cmpw cr6,r29,r20
	ctx.cr6.compare<int32_t>(r29.s32, r20.s32, ctx.xer);
	// blt cr6,0x823acc4c
	if (ctx.cr6.lt) goto loc_823ACC4C;
	// mr r29,r20
	r29.u64 = r20.u64;
loc_823ACC4C:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// bl 0x823ac460
	ctx.lr = 0x823ACC68;
	sub_823AC460(ctx, base);
	// lwz r23,396(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r19,404(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r17,436(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r18,412(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
loc_823ACC78:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x823acaa4
	goto loc_823ACAA4;
loc_823ACC80:
	// subf r11,r15,r16
	ctx.r11.u64 = r16.u64 - r15.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x823acc94
	if (!ctx.cr6.lt) goto loc_823ACC94;
	// li r11,1
	ctx.r11.s64 = 1;
loc_823ACC94:
	// addi r8,r15,-1
	ctx.r8.s64 = r15.s64 + -1;
	// mullw r10,r11,r15
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r15.s32);
	// subf r9,r15,r9
	ctx.r9.u64 = ctx.r9.u64 - r15.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r27,r9,2
	r27.s64 = ctx.r9.s64 + 2;
	// add r18,r10,r19
	r18.u64 = ctx.r10.u64 + r19.u64;
	// addi r21,r11,1
	r21.s64 = ctx.r11.s64 + 1;
	// stw r27,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r27.u32);
	// subf r16,r11,r23
	r16.u64 = r23.u64 - ctx.r11.u64;
	// mr r17,r10
	r17.u64 = ctx.r10.u64;
	// addi r19,r8,-1
	r19.s64 = ctx.r8.s64 + -1;
loc_823ACCC0:
	// cmpw cr6,r23,r27
	ctx.cr6.compare<int32_t>(r23.s32, r27.s32, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// blt cr6,0x823accd0
	if (ctx.cr6.lt) goto loc_823ACCD0;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_823ACCD0:
	// addi r28,r21,-1
	r28.s64 = r21.s64 + -1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823aceb8
	if (!ctx.cr6.lt) goto loc_823ACEB8;
	// add r30,r21,r19
	r30.u64 = r21.u64 + r19.u64;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// std r11,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fsub f12,f13,f27
	ctx.f12.f64 = ctx.f13.f64 - f27.f64;
	// fsub f11,f12,f26
	ctx.f11.f64 = ctx.f12.f64 - f26.f64;
	// fmul f29,f11,f30
	f29.f64 = ctx.f11.f64 * f30.f64;
	// fdiv f1,f29,f31
	ctx.f1.f64 = f29.f64 / f31.f64;
	// bl 0x822d6768
	ctx.lr = 0x823ACD04;
	sub_822D6768(ctx, base);
	// fsub f10,f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = f25.f64 - ctx.f1.f64;
	// addi r10,r15,1
	ctx.r10.s64 = r15.s64 + 1;
	// fmsub f9,f1,f31,f29
	ctx.f9.f64 = std::fma(ctx.f1.f64, f31.f64, -f29.f64);
	// addi r8,r15,1
	ctx.r8.s64 = r15.s64 + 1;
	// lwz r9,404(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// cmpw cr6,r15,r16
	ctx.cr6.compare<int32_t>(r15.s32, r16.s32, ctx.xer);
	// fmsub f8,f10,f31,f29
	ctx.f8.f64 = std::fma(ctx.f10.f64, f31.f64, -f29.f64);
	// fmadd f7,f9,f30,f28
	ctx.f7.f64 = std::fma(ctx.f9.f64, f30.f64, f28.f64);
	// fmadd f6,f8,f30,f28
	ctx.f6.f64 = std::fma(ctx.f8.f64, f30.f64, f28.f64);
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.f5.u64);
	// lwz r31,140(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// mullw r11,r10,r31
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// fctiwz f4,f6
	ctx.f4.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.f4.u64);
	// lwz r29,140(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// mullw r10,r8,r29
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(r29.s32);
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + r17.u64;
	// add r10,r10,r17
	ctx.r10.u64 = ctx.r10.u64 + r17.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// blt cr6,0x823acd64
	if (ctx.cr6.lt) goto loc_823ACD64;
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
loc_823ACD64:
	// subf r8,r28,r23
	ctx.r8.u64 = r23.u64 - r28.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// subf r10,r28,r23
	ctx.r10.u64 = r23.u64 - r28.u64;
	// subf r7,r29,r8
	ctx.r7.u64 = ctx.r8.u64 - r29.u64;
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subf r10,r31,r10
	ctx.r10.u64 = ctx.r10.u64 - r31.u64;
	// lwz r3,120(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r28,r15,-1
	r28.s64 = r15.s64 + -1;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// add r7,r18,r9
	ctx.r7.u64 = r18.u64 + ctx.r9.u64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// add r3,r18,r3
	ctx.r3.u64 = r18.u64 + ctx.r3.u64;
	// bl 0x823ac460
	ctx.lr = 0x823ACDAC;
	sub_823AC460(ctx, base);
	// clrlwi r6,r30,31
	ctx.r6.u64 = r30.u32 & 0x1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x823acea4
	if (!ctx.cr6.eq) goto loc_823ACEA4;
	// srawi r30,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r30.s64 = r31.s32 >> 1;
	// lwz r7,460(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// srawi r29,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	r29.s64 = r29.s32 >> 1;
	// lwz r24,436(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// srawi r11,r21,1
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1) != 0);
	ctx.r11.s64 = r21.s32 >> 1;
	// srawi r9,r19,1
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x1) != 0);
	ctx.r9.s64 = r19.s32 >> 1;
	// mullw r10,r11,r22
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r22.s32);
	// add r31,r10,r9
	r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r30,r22
	ctx.r9.s64 = int64_t(r30.s32) * int64_t(r22.s32);
	// mullw r10,r29,r22
	ctx.r10.s64 = int64_t(r29.s32) * int64_t(r22.s32);
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + r31.u64;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + r31.u64;
	// srawi r10,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r10.s64 = r28.s32 >> 1;
	// add r26,r8,r30
	r26.u64 = ctx.r8.u64 + r30.u64;
	// addi r27,r10,1
	r27.s64 = ctx.r10.s64 + 1;
	// lwz r10,412(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// add r25,r9,r29
	r25.u64 = ctx.r9.u64 + r29.u64;
	// subf r28,r11,r20
	r28.u64 = r20.u64 - ctx.r11.u64;
	// add r3,r31,r7
	ctx.r3.u64 = r31.u64 + ctx.r7.u64;
	// add r4,r26,r10
	ctx.r4.u64 = r26.u64 + ctx.r10.u64;
	// add r5,r25,r10
	ctx.r5.u64 = r25.u64 + ctx.r10.u64;
	// add r6,r31,r10
	ctx.r6.u64 = r31.u64 + ctx.r10.u64;
	// add r7,r31,r24
	ctx.r7.u64 = r31.u64 + r24.u64;
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(r27.s32, r28.s32, ctx.xer);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// blt cr6,0x823ace24
	if (ctx.cr6.lt) goto loc_823ACE24;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_823ACE24:
	// subf r23,r30,r20
	r23.u64 = r20.u64 - r30.u64;
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// subf r9,r29,r20
	ctx.r9.u64 = r20.u64 - r29.u64;
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// subf r23,r11,r23
	r23.u64 = r23.u64 - ctx.r11.u64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// subf r24,r11,r9
	r24.u64 = ctx.r9.u64 - ctx.r11.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// bl 0x823ac460
	ctx.lr = 0x823ACE54;
	sub_823AC460(ctx, base);
	// lwz r8,468(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r7,444(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// add r4,r26,r14
	ctx.r4.u64 = r26.u64 + r14.u64;
	// add r3,r31,r8
	ctx.r3.u64 = r31.u64 + ctx.r8.u64;
	// add r5,r25,r14
	ctx.r5.u64 = r25.u64 + r14.u64;
	// add r6,r31,r14
	ctx.r6.u64 = r31.u64 + r14.u64;
	// add r7,r31,r7
	ctx.r7.u64 = r31.u64 + ctx.r7.u64;
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(r27.s32, r28.s32, ctx.xer);
	// bge cr6,0x823ace7c
	if (!ctx.cr6.lt) goto loc_823ACE7C;
	// mr r28,r27
	r28.u64 = r27.u64;
loc_823ACE7C:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// bl 0x823ac460
	ctx.lr = 0x823ACE9C;
	sub_823AC460(ctx, base);
	// lwz r23,396(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r27,128(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
loc_823ACEA4:
	// add r17,r17,r15
	r17.u64 = r17.u64 + r15.u64;
	// add r18,r18,r15
	r18.u64 = r18.u64 + r15.u64;
	// addi r16,r16,-1
	r16.s64 = r16.s64 + -1;
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// b 0x823accc0
	goto loc_823ACCC0;
loc_823ACEB8:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f78
	ctx.lr = 0x823ACEC4;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823C5498) {
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
	ctx.lr = 0x823C54A0;
	// stwu r1,-1232(r1)
	ea = -1232 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// clrlwi r3,r9,30
	ctx.r3.u64 = ctx.r9.u32 & 0x3;
	// addi r10,r10,23736
	ctx.r10.s64 = ctx.r10.s64 + 23736;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823c5768
	if (!ctx.cr6.eq) goto loc_823C5768;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c5500
	if (!ctx.cr6.eq) goto loc_823C5500;
	// lwz r11,1324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823c5d08
	if (!ctx.cr6.gt) goto loc_823C5D08;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r11,r5,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r5.u64;
	// subf r10,r7,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r7.u64;
loc_823C54EC:
	// ldux r9,r11,r5
	ea = ctx.r11.u32 + ctx.r5.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdux r9,r10,r7
	ea = ctx.r10.u32 + ctx.r7.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823c54ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C54EC;
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x822d4eac
	return;
loc_823C5500:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r30,4
	r30.s64 = 4;
	// beq cr6,0x823c5510
	if (ctx.cr6.eq) goto loc_823C5510;
	// li r30,6
	r30.s64 = 6;
loc_823C5510:
	// addi r8,r30,-1
	ctx.r8.s64 = r30.s64 + -1;
	// lwz r11,1316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1316);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,1324(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1324);
	// slw r8,r3,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r8.u8 & 0x3F));
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// ble cr6,0x823c5d08
	if (!ctx.cr6.gt) goto loc_823C5D08;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r5,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r5,r11
	ctx.r3.u64 = ctx.r5.u64 + ctx.r11.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// subf r4,r5,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r5.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
loc_823C554C:
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r27,r4,3
	r27.s64 = ctx.r4.s64 + 3;
	// addi r26,r28,3
	r26.s64 = r28.s64 + 3;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823C5560:
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lhz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r6,6(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhz r24,2(r10)
	r24.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhz r23,0(r10)
	r23.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r24,r24
	r24.s64 = r24.s16;
	// lbzx r22,r4,r11
	r22.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// lbzx r21,r31,r9
	r21.u64 = REX_LOAD_U8(r31.u32 + ctx.r9.u32);
	// extsh r23,r23
	r23.s64 = r23.s16;
	// lbzx r20,r3,r9
	r20.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// lbzx r19,r9,r5
	r19.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// mullw r8,r21,r8
	ctx.r8.s64 = int64_t(r21.s32) * int64_t(ctx.r8.s32);
	// mullw r9,r20,r6
	ctx.r9.s64 = int64_t(r20.s32) * int64_t(ctx.r6.s32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r19,r24
	ctx.r9.s64 = int64_t(r19.s32) * int64_t(r24.s32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r23,r22
	ctx.r9.s64 = int64_t(r23.s32) * int64_t(r22.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + r29.u64;
	// sraw. r9,r9,r30
	temp.u32 = r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823c55c4
	if (!ctx.cr0.lt) goto loc_823C55C4;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823c55d0
	goto loc_823C55D0;
loc_823C55C4:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x823c55d0
	if (!ctx.cr6.gt) goto loc_823C55D0;
	// li r9,255
	ctx.r9.s64 = 255;
loc_823C55D0:
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// stbx r6,r28,r11
	REX_STORE_U8(r28.u32 + ctx.r11.u32, ctx.r6.u8);
	// lhz r24,2(r10)
	r24.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r23,0(r10)
	r23.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lbz r19,1(r8)
	r19.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// lbzx r22,r31,r9
	r22.u64 = REX_LOAD_U8(r31.u32 + ctx.r9.u32);
	// lbzx r21,r3,r9
	r21.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// lbzx r20,r9,r5
	r20.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// lhz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r6,6(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mullw r9,r21,r6
	ctx.r9.s64 = int64_t(r21.s32) * int64_t(ctx.r6.s32);
	// mullw r8,r22,r8
	ctx.r8.s64 = int64_t(r22.s32) * int64_t(ctx.r8.s32);
	// extsh r6,r24
	ctx.r6.s64 = r24.s16;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r20,r6
	ctx.r9.s64 = int64_t(r20.s32) * int64_t(ctx.r6.s32);
	// extsh r6,r23
	ctx.r6.s64 = r23.s16;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r6,r19
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(r19.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + r29.u64;
	// sraw. r8,r9,r30
	temp.u32 = r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r8.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x823c5640
	if (!ctx.cr0.lt) goto loc_823C5640;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x823c564c
	goto loc_823C564C;
loc_823C5640:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x823c564c
	if (!ctx.cr6.gt) goto loc_823C564C;
	// li r8,255
	ctx.r8.s64 = 255;
loc_823C564C:
	// add r6,r28,r11
	ctx.r6.u64 = r28.u64 + ctx.r11.u64;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// stb r8,1(r6)
	REX_STORE_U8(ctx.r6.u32 + 1, ctx.r8.u8);
	// lhz r24,4(r10)
	r24.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r21,2(r10)
	r21.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lbzx r22,r31,r9
	r22.u64 = REX_LOAD_U8(r31.u32 + ctx.r9.u32);
	// lbz r20,0(r9)
	r20.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lhz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r23,r6
	r23.s64 = ctx.r6.s16;
	// lhz r8,6(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r24,r24
	r24.s64 = r24.s16;
	// lbzx r6,r3,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// extsh r21,r21
	r21.s64 = r21.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// mullw r6,r6,r8
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// lbzx r8,r9,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// mullw r9,r22,r24
	ctx.r9.s64 = int64_t(r22.s32) * int64_t(r24.s32);
	// mullw r8,r8,r21
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r21.s32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r23,r20
	ctx.r8.s64 = int64_t(r23.s32) * int64_t(r20.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r6,r9,r29
	ctx.r6.u64 = ctx.r9.u64 + r29.u64;
	// sraw. r8,r6,r30
	temp.u32 = r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r8.s64 = ctx.r6.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x823c56bc
	if (!ctx.cr0.lt) goto loc_823C56BC;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x823c56c8
	goto loc_823C56C8;
loc_823C56BC:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x823c56c8
	if (!ctx.cr6.gt) goto loc_823C56C8;
	// li r8,255
	ctx.r8.s64 = 255;
loc_823C56C8:
	// add r6,r28,r11
	ctx.r6.u64 = r28.u64 + ctx.r11.u64;
	// add r9,r27,r11
	ctx.r9.u64 = r27.u64 + ctx.r11.u64;
	// stb r8,2(r6)
	REX_STORE_U8(ctx.r6.u32 + 2, ctx.r8.u8);
	// lbzx r6,r3,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// lhz r21,2(r10)
	r21.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lbzx r8,r27,r11
	ctx.r8.u64 = REX_LOAD_U8(r27.u32 + ctx.r11.u32);
	// lhz r23,4(r10)
	r23.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lbzx r24,r9,r5
	r24.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// lbzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + ctx.r9.u32);
	// extsh r23,r23
	r23.s64 = r23.s16;
	// lhz r22,6(r10)
	r22.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// mullw r9,r9,r23
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r23.s32);
	// lhz r23,0(r10)
	r23.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r22,r22
	r22.s64 = r22.s16;
	// extsh r23,r23
	r23.s64 = r23.s16;
	// mullw r6,r6,r22
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(r22.s32);
	// extsh r22,r21
	r22.s64 = r21.s16;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mullw r6,r24,r22
	ctx.r6.s64 = int64_t(r24.s32) * int64_t(r22.s32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mullw r8,r23,r8
	ctx.r8.s64 = int64_t(r23.s32) * int64_t(ctx.r8.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r9,r29
	ctx.r8.u64 = ctx.r9.u64 + r29.u64;
	// sraw. r9,r8,r30
	temp.u32 = r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r9.s64 = ctx.r8.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823c5734
	if (!ctx.cr0.lt) goto loc_823C5734;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823c5740
	goto loc_823C5740;
loc_823C5734:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x823c5740
	if (!ctx.cr6.gt) goto loc_823C5740;
	// li r9,255
	ctx.r9.s64 = 255;
loc_823C5740:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stbx r9,r26,r11
	REX_STORE_U8(r26.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823c5560
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C5560;
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r28,r28,r7
	r28.u64 = r28.u64 + ctx.r7.u64;
	// bne 0x823c554c
	if (!ctx.cr0.eq) goto loc_823C554C;
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x822d4eac
	return;
loc_823C5768:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c59c4
	if (!ctx.cr6.eq) goto loc_823C59C4;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// li r3,4
	ctx.r3.s64 = 4;
	// beq cr6,0x823c5780
	if (ctx.cr6.eq) goto loc_823C5780;
	// li r3,6
	ctx.r3.s64 = 6;
loc_823C5780:
	// li r31,1
	r31.s64 = 1;
	// lwz r8,1316(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1316);
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// lwz r10,1324(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1324);
	// slw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r9.u8 & 0x3F));
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r31,r8,r9
	r31.u64 = ctx.r9.u64 - ctx.r8.u64;
	// ble cr6,0x823c5d08
	if (!ctx.cr6.gt) goto loc_823C5D08;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
loc_823C57A8:
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r29,r4,2
	r29.s64 = ctx.r4.s64 + 2;
	// addi r28,r30,3
	r28.s64 = r30.s64 + 3;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823C57BC:
	// add r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lhz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lbzx r26,r4,r10
	r26.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhz r25,6(r11)
	r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r24,0(r11)
	r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lbz r23,1(r9)
	r23.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// extsh r25,r25
	r25.s64 = r25.s16;
	// lbz r22,2(r9)
	r22.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// extsh r24,r24
	r24.s64 = r24.s16;
	// lbz r21,-1(r9)
	r21.u64 = REX_LOAD_U8(ctx.r9.u32 + -1);
	// mullw r8,r23,r8
	ctx.r8.s64 = int64_t(r23.s32) * int64_t(ctx.r8.s32);
	// mullw r9,r26,r6
	ctx.r9.s64 = int64_t(r26.s32) * int64_t(ctx.r6.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r8,r22,r25
	ctx.r8.s64 = int64_t(r22.s32) * int64_t(r25.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r21,r24
	ctx.r8.s64 = int64_t(r21.s32) * int64_t(r24.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// sraw. r9,r9,r3
	temp.u32 = ctx.r3.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823c5820
	if (!ctx.cr0.lt) goto loc_823C5820;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823c582c
	goto loc_823C582C;
loc_823C5820:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x823c582c
	if (!ctx.cr6.gt) goto loc_823C582C;
	// li r9,255
	ctx.r9.s64 = 255;
loc_823C582C:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// add r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stbx r8,r30,r10
	REX_STORE_U8(r30.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbzx r23,r4,r10
	r23.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lbz r24,2(r9)
	r24.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// lhz r6,6(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r25,r6
	r25.s64 = ctx.r6.s16;
	// lhz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lbz r26,3(r9)
	r26.u64 = REX_LOAD_U8(ctx.r9.u32 + 3);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lbz r9,1(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// mullw r8,r24,r8
	ctx.r8.s64 = int64_t(r24.s32) * int64_t(ctx.r8.s32);
	// lhz r24,0(r11)
	r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mullw r6,r9,r6
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// add r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r8,r26,r25
	ctx.r8.s64 = int64_t(r26.s32) * int64_t(r25.s32);
	// extsh r6,r24
	ctx.r6.s64 = r24.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r23,r6
	ctx.r8.s64 = int64_t(r23.s32) * int64_t(ctx.r6.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// sraw. r9,r9,r3
	temp.u32 = ctx.r3.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823c5898
	if (!ctx.cr0.lt) goto loc_823C5898;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823c58a4
	goto loc_823C58A4;
loc_823C5898:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x823c58a4
	if (!ctx.cr6.gt) goto loc_823C58A4;
	// li r9,255
	ctx.r9.s64 = 255;
loc_823C58A4:
	// add r8,r30,r10
	ctx.r8.u64 = r30.u64 + ctx.r10.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// add r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stb r6,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r6.u8);
	// lhz r24,6(r11)
	r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r22,0(r11)
	r22.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lbz r23,1(r9)
	r23.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lhz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lbz r26,3(r9)
	r26.u64 = REX_LOAD_U8(ctx.r9.u32 + 3);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lbz r25,2(r9)
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// mullw r8,r26,r8
	ctx.r8.s64 = int64_t(r26.s32) * int64_t(ctx.r8.s32);
	// lbz r26,4(r9)
	r26.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// mullw r9,r25,r6
	ctx.r9.s64 = int64_t(r25.s32) * int64_t(ctx.r6.s32);
	// extsh r6,r24
	ctx.r6.s64 = r24.s16;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r8,r26,r6
	ctx.r8.s64 = int64_t(r26.s32) * int64_t(ctx.r6.s32);
	// extsh r6,r22
	ctx.r6.s64 = r22.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r23,r6
	ctx.r8.s64 = int64_t(r23.s32) * int64_t(ctx.r6.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// sraw. r9,r9,r3
	temp.u32 = ctx.r3.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823c5914
	if (!ctx.cr0.lt) goto loc_823C5914;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823c5920
	goto loc_823C5920;
loc_823C5914:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x823c5920
	if (!ctx.cr6.gt) goto loc_823C5920;
	// li r9,255
	ctx.r9.s64 = 255;
loc_823C5920:
	// add r8,r30,r10
	ctx.r8.u64 = r30.u64 + ctx.r10.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// add r9,r29,r10
	ctx.r9.u64 = r29.u64 + ctx.r10.u64;
	// stb r6,2(r8)
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r6.u8);
	// lhz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r26,4(r11)
	r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lbz r8,1(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lbz r25,2(r9)
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// extsh r26,r26
	r26.s64 = r26.s16;
	// lbz r23,3(r9)
	r23.u64 = REX_LOAD_U8(ctx.r9.u32 + 3);
	// mullw r9,r8,r6
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// lhz r24,6(r11)
	r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mullw r8,r25,r26
	ctx.r8.s64 = int64_t(r25.s32) * int64_t(r26.s32);
	// lbzx r26,r29,r10
	r26.u64 = REX_LOAD_U8(r29.u32 + ctx.r10.u32);
	// extsh r25,r24
	r25.s64 = r24.s16;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r8,r23,r25
	ctx.r8.s64 = int64_t(r23.s32) * int64_t(r25.s32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r26,r6
	ctx.r8.s64 = int64_t(r26.s32) * int64_t(ctx.r6.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// sraw. r9,r9,r3
	temp.u32 = ctx.r3.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823c5990
	if (!ctx.cr0.lt) goto loc_823C5990;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823c599c
	goto loc_823C599C;
loc_823C5990:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x823c599c
	if (!ctx.cr6.gt) goto loc_823C599C;
	// li r9,255
	ctx.r9.s64 = 255;
loc_823C599C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stbx r9,r28,r10
	REX_STORE_U8(r28.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823c57bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C57BC;
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r30,r30,r7
	r30.u64 = r30.u64 + ctx.r7.u64;
	// bne 0x823c57a8
	if (!ctx.cr0.eq) goto loc_823C57A8;
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x822d4eac
	return;
loc_823C59C4:
	// addi r9,r1,47
	ctx.r9.s64 = ctx.r1.s64 + 47;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// rlwinm r28,r9,0,0,26
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r22,r28
	r22.u64 = r28.u64;
	// beq cr6,0x823c59e0
	if (ctx.cr6.eq) goto loc_823C59E0;
	// li r8,6
	ctx.r8.s64 = 6;
loc_823C59E0:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r9,4
	ctx.r9.s64 = 4;
	// beq cr6,0x823c59f0
	if (ctx.cr6.eq) goto loc_823C59F0;
	// li r9,6
	ctx.r9.s64 = 6;
loc_823C59F0:
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
	// addi r27,r9,-1
	r27.s64 = ctx.r9.s64 + -1;
	// ble cr6,0x823c5d08
	if (!ctx.cr6.gt) goto loc_823C5D08;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r5,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r5.u64;
	// add r30,r5,r8
	r30.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r29,r5,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r25,r9,-1
	r25.s64 = ctx.r9.s64 + -1;
	// mr r24,r23
	r24.u64 = r23.u64;
loc_823C5A38:
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r8,r22,-2
	ctx.r8.s64 = r22.s64 + -2;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_823C5A48:
	// lhz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r3,6(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lbzx r21,r9,r29
	r21.u64 = REX_LOAD_U8(ctx.r9.u32 + r29.u32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lbzx r20,r9,r30
	r20.u64 = REX_LOAD_U8(ctx.r9.u32 + r30.u32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r19,2(r10)
	r19.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// mullw r4,r21,r4
	ctx.r4.s64 = int64_t(r21.s32) * int64_t(ctx.r4.s32);
	// lbzx r21,r9,r5
	r21.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// lhz r18,0(r10)
	r18.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
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
	// mullw r3,r17,r21
	ctx.r3.s64 = int64_t(r17.s32) * int64_t(r21.s32);
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r4,r4,r27
	ctx.r4.u64 = ctx.r4.u64 + r27.u64;
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
	// bdnz 0x823c5a48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C5A48;
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// add r25,r25,r5
	r25.u64 = r25.u64 + ctx.r5.u64;
	// addi r22,r22,64
	r22.s64 = r22.s64 + 64;
	// bne 0x823c5a38
	if (!ctx.cr0.eq) goto loc_823C5A38;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x823c5d08
	if (!ctx.cr6.gt) goto loc_823C5D08;
	// addi r31,r28,4
	r31.s64 = r28.s64 + 4;
	// addi r5,r6,2
	ctx.r5.s64 = ctx.r6.s64 + 2;
loc_823C5ACC:
	// li r9,2
	ctx.r9.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r5,-1
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// addi r3,r5,1
	ctx.r3.s64 = ctx.r5.s64 + 1;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823C5AE4:
	// lhz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r8,-4(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + -4);
	// lhz r30,6(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r29,0(r11)
	r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r30,r30
	r30.s64 = r30.s16;
	// lhz r28,-2(r10)
	r28.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// extsh r29,r29
	r29.s64 = r29.s16;
	// lhz r27,2(r11)
	r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r9,r30,r9
	ctx.r9.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// lhz r30,0(r10)
	r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r25,4(r11)
	r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// mullw r8,r29,r8
	ctx.r8.s64 = int64_t(r29.s32) * int64_t(ctx.r8.s32);
	// extsh r29,r27
	r29.s64 = r27.s16;
	// extsh r28,r28
	r28.s64 = r28.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r29,r28
	ctx.r8.s64 = int64_t(r29.s32) * int64_t(r28.s32);
	// extsh r29,r25
	r29.s64 = r25.s16;
	// extsh r30,r30
	r30.s64 = r30.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r29,r30
	ctx.r8.s64 = int64_t(r29.s32) * int64_t(r30.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + r26.u64;
	// srawi. r9,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823c5b54
	if (!ctx.cr0.lt) goto loc_823C5B54;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823c5b60
	goto loc_823C5B60;
loc_823C5B54:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x823c5b60
	if (!ctx.cr6.gt) goto loc_823C5B60;
	// li r9,255
	ctx.r9.s64 = 255;
loc_823C5B60:
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stb r9,-2(r8)
	REX_STORE_U8(ctx.r8.u32 + -2, ctx.r9.u8);
	// lhz r28,0(r10)
	r28.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r30,-2(r10)
	r30.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// extsh r30,r30
	r30.s64 = r30.s16;
	// lhz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r9,6(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r29,0(r11)
	r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r27,2(r11)
	r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r29,r29
	r29.s64 = r29.s16;
	// lhz r25,4(r11)
	r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lhz r24,2(r10)
	r24.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// mullw r8,r29,r30
	ctx.r8.s64 = int64_t(r29.s32) * int64_t(r30.s32);
	// extsh r30,r27
	r30.s64 = r27.s16;
	// extsh r29,r28
	r29.s64 = r28.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r30,r29
	ctx.r8.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// extsh r30,r25
	r30.s64 = r25.s16;
	// extsh r29,r24
	r29.s64 = r24.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r30,r29
	ctx.r8.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r9,r26
	ctx.r8.u64 = ctx.r9.u64 + r26.u64;
	// srawi. r9,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823c5bd8
	if (!ctx.cr0.lt) goto loc_823C5BD8;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823c5be4
	goto loc_823C5BE4;
loc_823C5BD8:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x823c5be4
	if (!ctx.cr6.gt) goto loc_823C5BE4;
	// li r9,255
	ctx.r9.s64 = 255;
loc_823C5BE4:
	// stbx r9,r4,r6
	REX_STORE_U8(ctx.r4.u32 + ctx.r6.u32, ctx.r9.u8);
	// lhz r30,4(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r8,6(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r28,r8
	r28.s64 = ctx.r8.s16;
	// lhz r29,0(r10)
	r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r8,6(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r29,r29
	r29.s64 = r29.s16;
	// lhz r27,2(r10)
	r27.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r25,r8
	r25.s64 = ctx.r8.s16;
	// lhz r24,2(r11)
	r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r8,r9,r29
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r29.s32);
	// lhz r29,4(r10)
	r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// mullw r9,r25,r28
	ctx.r9.s64 = int64_t(r25.s32) * int64_t(r28.s32);
	// extsh r28,r24
	r28.s64 = r24.s16;
	// extsh r27,r27
	r27.s64 = r27.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r28,r27
	ctx.r8.s64 = int64_t(r28.s32) * int64_t(r27.s32);
	// extsh r30,r30
	r30.s64 = r30.s16;
	// extsh r29,r29
	r29.s64 = r29.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r30,r29
	ctx.r8.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r9,r26
	ctx.r8.u64 = ctx.r9.u64 + r26.u64;
	// srawi. r9,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823c5c58
	if (!ctx.cr0.lt) goto loc_823C5C58;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823c5c64
	goto loc_823C5C64;
loc_823C5C58:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x823c5c64
	if (!ctx.cr6.gt) goto loc_823C5C64;
	// li r9,255
	ctx.r9.s64 = 255;
loc_823C5C64:
	// stbx r9,r5,r6
	REX_STORE_U8(ctx.r5.u32 + ctx.r6.u32, ctx.r9.u8);
	// lhz r25,4(r11)
	r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// lhz r30,6(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// lhz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r29,0(r11)
	r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r30,r30
	r30.s64 = r30.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhz r28,4(r10)
	r28.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// extsh r29,r29
	r29.s64 = r29.s16;
	// lhz r27,2(r11)
	r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r9,r30,r9
	ctx.r9.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// lhz r30,6(r10)
	r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// mullw r8,r29,r8
	ctx.r8.s64 = int64_t(r29.s32) * int64_t(ctx.r8.s32);
	// extsh r29,r27
	r29.s64 = r27.s16;
	// extsh r28,r28
	r28.s64 = r28.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r29,r28
	ctx.r8.s64 = int64_t(r29.s32) * int64_t(r28.s32);
	// extsh r29,r25
	r29.s64 = r25.s16;
	// extsh r30,r30
	r30.s64 = r30.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r29,r30
	ctx.r8.s64 = int64_t(r29.s32) * int64_t(r30.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + r26.u64;
	// srawi. r9,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823c5cd8
	if (!ctx.cr0.lt) goto loc_823C5CD8;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823c5ce4
	goto loc_823C5CE4;
loc_823C5CD8:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x823c5ce4
	if (!ctx.cr6.gt) goto loc_823C5CE4;
	// li r9,255
	ctx.r9.s64 = 255;
loc_823C5CE4:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stbx r9,r3,r6
	REX_STORE_U8(ctx.r3.u32 + ctx.r6.u32, ctx.r9.u8);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x823c5ae4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C5AE4;
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// bne 0x823c5acc
	if (!ctx.cr0.eq) goto loc_823C5ACC;
loc_823C5D08:
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x822d4eac
	return;
}

DEFINE_REX_FUNC(sub_823E22A8) {
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
	ctx.lr = 0x823E22B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e22d8
	if (ctx.cr6.eq) goto loc_823E22D8;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x823dc0b0
	ctx.lr = 0x823E22D4;
	sub_823DC0B0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_823E22D8:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r30,0
	r30.s64 = 0;
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r8,104(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mullw r9,r9,r27
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r27.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x823e2330
	if (!ctx.cr6.gt) goto loc_823E2330;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
loc_823E2308:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e7070
	ctx.lr = 0x823E2318;
	sub_823E7070(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823e2308
	if (ctx.cr6.lt) goto loc_823E2308;
loc_823E2330:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823E24B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823E24B8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e24e0
	if (ctx.cr6.eq) goto loc_823E24E0;
	// bl 0x823dc0b0
	ctx.lr = 0x823E24DC;
	sub_823DC0B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_823E24E0:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// lwz r8,104(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mullw r9,r9,r29
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r29.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823E2508;
	sub_822D4FA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823E2E68) {
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
	// bge cr6,0x823e2f40
	if (!ctx.cr6.lt) goto loc_823E2F40;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f13,-7220(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -7220);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9952(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 9952);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f12.f64 = double(temp.f32);
loc_823E2ED4:
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r10,r10,21,11,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1FFFFF;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r10,r10,27,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3F;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// stfs f12,12(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,8(r6)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x823e2ed4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E2ED4;
loc_823E2F40:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e2f5c
	if (ctx.cr6.eq) goto loc_823E2F5C;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x823E2F5C;
	sub_82413D40(ctx, base);
loc_823E2F5C:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e2f78
	if (ctx.cr6.eq) goto loc_823E2F78;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x823dc3f0
	ctx.lr = 0x823E2F78;
	sub_823DC3F0(ctx, base);
loc_823E2F78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E3BA8) {
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
	// bge cr6,0x823e3c2c
	if (!ctx.cr6.lt) goto loc_823E3C2C;
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
loc_823E3BFC:
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
	// bdnz 0x823e3bfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E3BFC;
loc_823E3C2C:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e3c48
	if (ctx.cr6.eq) goto loc_823E3C48;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x823E3C48;
	sub_82413D40(ctx, base);
loc_823E3C48:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e3c64
	if (ctx.cr6.eq) goto loc_823E3C64;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x823dc3f0
	ctx.lr = 0x823E3C64;
	sub_823DC3F0(ctx, base);
loc_823E3C64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E5B70) {
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
	ctx.lr = 0x823E5B78;
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
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r27,r4,r11
	r27.u64 = ctx.r4.u64 + ctx.r11.u64;
	// bne cr6,0x823e5bdc
	if (!ctx.cr6.eq) goto loc_823E5BDC;
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r10,224(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823cd118
	ctx.lr = 0x823E5BB8;
	sub_823CD118(ctx, base);
	// stw r3,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e6100
	if (ctx.cr0.eq) goto loc_823E6100;
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
	ctx.lr = 0x823E5BDC;
	sub_822D5870(ctx, base);
loc_823E5BDC:
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// li r22,0
	r22.s64 = 0;
	// lwz r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 200);
	// lwz r8,224(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 224);
	// subf r11,r11,r25
	ctx.r11.u64 = r25.u64 - ctx.r11.u64;
	// subf r7,r10,r27
	ctx.r7.u64 = r27.u64 - ctx.r10.u64;
	// lwz r9,248(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r11,r7,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r26,r11,r9
	r26.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823e5c44
	if (!ctx.cr6.eq) goto loc_823E5C44;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// bl 0x823cd118
	ctx.lr = 0x823E5C28;
	sub_823CD118(ctx, base);
	// stw r3,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e6100
	if (ctx.cr0.eq) goto loc_823E6100;
	// stw r22,0(r26)
	REX_STORE_U32(r26.u32 + 0, r22.u32);
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r11.u32);
loc_823E5C44:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// li r21,1
	r21.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823e5e04
	if (!ctx.cr6.eq) goto loc_823E5E04;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// rlwinm r24,r27,0,0,29
	r24.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r10,r24,4
	ctx.r10.s64 = r24.s64 + 4;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823e5c74
	if (!ctx.cr6.lt) goto loc_823E5C74;
	// lwz r9,152(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x823e5c8c
	if (ctx.cr6.gt) goto loc_823E5C8C;
loc_823E5C74:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823e5d08
	if (!ctx.cr6.gt) goto loc_823E5D08;
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823e5d08
	if (!ctx.cr6.lt) goto loc_823E5D08;
loc_823E5C8C:
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// rlwinm r10,r27,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r7,136(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r5,100(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r4,204(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r29,4(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mullw r10,r6,r7
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r5,r25
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(r25.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// add r28,r10,r9
	r28.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x823e5dc4
	if (!ctx.cr6.lt) goto loc_823E5DC4;
loc_823E5CD4:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E5CE8;
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
	// blt cr6,0x823e5cd4
	if (ctx.cr6.lt) goto loc_823E5CD4;
	// b 0x823e5dc4
	goto loc_823E5DC4;
loc_823E5D08:
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823e5d64
	if (!ctx.cr6.lt) goto loc_823E5D64;
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x823e5d64
	if (!ctx.cr6.gt) goto loc_823E5D64;
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
	ctx.lr = 0x823E5D64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E5D64:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823e5dc4
	if (!ctx.cr6.gt) goto loc_823E5DC4;
	// lwz r9,156(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823e5dc4
	if (!ctx.cr6.lt) goto loc_823E5DC4;
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
	ctx.lr = 0x823E5DC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E5DC4:
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823E5DD0:
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + r24.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823e5dec
	if (ctx.cr6.lt) goto loc_823E5DEC;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823e5dfc
	if (ctx.cr6.lt) goto loc_823E5DFC;
loc_823E5DEC:
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// slw r9,r21,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_823E5DFC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823e5dd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E5DD0;
loc_823E5E04:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e5e20
	if (ctx.cr6.eq) goto loc_823E5E20;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413040
	ctx.lr = 0x823E5E1C;
	sub_82413040(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_823E5E20:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e5e3c
	if (ctx.cr6.eq) goto loc_823E5E3C;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc0b0
	ctx.lr = 0x823E5E38;
	sub_823DC0B0(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_823E5E3C:
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
	// bge cr6,0x823e5eb4
	if (!ctx.cr6.lt) goto loc_823E5EB4;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r23,-4
	ctx.r10.s64 = r23.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823E5E70:
	// rlwinm r9,r11,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r8,4(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r6,r9,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// rlwinm r9,r6,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// bdnz 0x823e5e70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E5E70;
loc_823E5EB4:
	// clrlwi r11,r27,30
	ctx.r11.u64 = r27.u32 & 0x3;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// slw r11,r21,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x823e6100
	if (!ctx.cr6.eq) goto loc_823E6100;
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
	// bge cr6,0x823e6098
	if (!ctx.cr6.lt) goto loc_823E6098;
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// rlwinm r27,r27,0,0,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r21.u32);
loc_823E5F2C:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// subf r6,r29,r11
	ctx.r6.u64 = ctx.r11.u64 - r29.u64;
	// subf r4,r27,r10
	ctx.r4.u64 = ctx.r10.u64 - r27.u64;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bge cr6,0x823e5fc8
	if (!ctx.cr6.lt) goto loc_823E5FC8;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e5fc8
	if (ctx.cr6.eq) goto loc_823E5FC8;
loc_823E5F50:
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bge cr6,0x823e5fc8
	if (!ctx.cr6.lt) goto loc_823E5FC8;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r11,r6,4
	ctx.xer.ca = ctx.r6.u32 <= 4;
	ctx.r11.u64 = static_cast<uint64_t>(4) - ctx.r6.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823E5F78:
	// lwzu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// or r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 | ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// or r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// bdnz 0x823e5f78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E5F78;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x823e5f50
	if (ctx.cr6.lt) goto loc_823E5F50;
loc_823E5FC8:
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bge cr6,0x823e6048
	if (!ctx.cr6.lt) goto loc_823E6048;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823E5FE0:
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823E5FF8:
	// or r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
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
	// bdnz 0x823e5ff8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E5FF8;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// blt cr6,0x823e5fe0
	if (ctx.cr6.lt) goto loc_823E5FE0;
loc_823E6048:
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823e6064
	if (!ctx.cr6.eq) goto loc_823E6064;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e6068
	if (ctx.cr6.eq) goto loc_823E6068;
loc_823E6064:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
loc_823E6068:
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E607C;
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
	// blt cr6,0x823e5f2c
	if (ctx.cr6.lt) goto loc_823E5F2C;
loc_823E6098:
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
	// bge cr6,0x823e60e4
	if (!ctx.cr6.lt) goto loc_823E60E4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823e60e4
	if (!ctx.cr6.eq) goto loc_823E60E4;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823e60e4
	if (!ctx.cr6.eq) goto loc_823E60E4;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// stw r22,4(r26)
	REX_STORE_U32(r26.u32 + 4, r22.u32);
	// stw r11,12(r26)
	REX_STORE_U32(r26.u32 + 12, ctx.r11.u32);
	// b 0x823e60fc
	goto loc_823E60FC;
loc_823E60E4:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 4);
	// bl 0x823cd250
	ctx.lr = 0x823E60F0;
	sub_823CD250(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r11.u32);
loc_823E60FC:
	// stw r22,4(r26)
	REX_STORE_U32(r26.u32 + 4, r22.u32);
loc_823E6100:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_823FC6F0) {
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
	ctx.lr = 0x823FC6F8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,404(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 404);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,448(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823fc734
	if (!ctx.cr6.eq) goto loc_823FC734;
	// lwz r11,408(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 408);
	// cmpwi cr6,r11,63
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 63, ctx.xer);
	// bne cr6,0x823fc734
	if (!ctx.cr6.eq) goto loc_823FC734;
	// lwz r11,412(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823fc734
	if (!ctx.cr6.eq) goto loc_823FC734;
	// lwz r11,416(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823fc758
	if (ctx.cr6.eq) goto loc_823FC758;
loc_823FC734:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,122
	ctx.r10.s64 = 122;
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
	ctx.lr = 0x823FC758;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FC758:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// li r25,0
	r25.s64 = 0;
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823fc7c8
	if (!ctx.cr6.gt) goto loc_823FC7C8;
	// addi r26,r30,16
	r26.s64 = r30.s64 + 16;
	// addi r27,r31,332
	r27.s64 = r31.s64 + 332;
loc_823FC774:
	// lwzu r11,4(r27)
	ea = 4 + r27.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r27.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r29,24(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r11,r5,10
	ctx.r11.s64 = ctx.r5.s64 + 10;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x823fbc20
	ctx.lr = 0x823FC798;
	sub_823FBC20(ctx, base);
	// addi r10,r29,14
	ctx.r10.s64 = r29.s64 + 14;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823fbc20
	ctx.lr = 0x823FC7B4;
	sub_823FBC20(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stwu r25,4(r26)
	ea = 4 + r26.u32;
	REX_STORE_U32(ea, r25.u32);
	r26.u32 = ea;
	// lwz r9,332(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 332);
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823fc774
	if (ctx.cr6.lt) goto loc_823FC774;
loc_823FC7C8:
	// lwz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 360);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823fc870
	if (!ctx.cr6.gt) goto loc_823FC870;
	// addi r11,r30,192
	ctx.r11.s64 = r30.s64 + 192;
	// addi r8,r31,364
	ctx.r8.s64 = r31.s64 + 364;
	// li r6,1
	ctx.r6.s64 = 1;
loc_823FC7E4:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 + 84;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// addi r5,r9,10
	ctx.r5.s64 = ctx.r9.s64 + 10;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + r30.u32);
	// stw r3,-120(r11)
	REX_STORE_U32(ctx.r11.u32 + -120, ctx.r3.u32);
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// addi r9,r9,14
	ctx.r9.s64 = ctx.r9.s64 + 14;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + r30.u32);
	// stw r4,-80(r11)
	REX_STORE_U32(ctx.r11.u32 + -80, ctx.r4.u32);
	// lwz r3,48(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fc850
	if (ctx.cr6.eq) goto loc_823FC850;
	// stw r6,-40(r11)
	REX_STORE_U32(ctx.r11.u32 + -40, ctx.r6.u32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lwz r10,36(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// subfc r5,r10,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r10.u32;
	ctx.r5.u64 = ctx.r6.u64 - ctx.r10.u64;
	// eqv r4,r10,r6
	ctx.r4.u64 = ~(ctx.r10.u64 ^ ctx.r6.u64);
	// rlwinm r3,r4,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// addze r10,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r10.s64 = temp.s64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x823fc858
	goto loc_823FC858;
loc_823FC850:
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r25.u32);
	// stw r25,-40(r11)
	REX_STORE_U32(ctx.r11.u32 + -40, r25.u32);
loc_823FC858:
	// lwz r10,360(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 360);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823fc7e4
	if (ctx.cr6.lt) goto loc_823FC7E4;
loc_823FC870:
	// stw r25,8(r30)
	REX_STORE_U32(r30.u32 + 8, r25.u32);
	// stw r25,16(r30)
	REX_STORE_U32(r30.u32 + 16, r25.u32);
	// stw r25,12(r30)
	REX_STORE_U32(r30.u32 + 12, r25.u32);
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82404210) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r11,12096
	ctx.r11.s64 = ctx.r11.s64 + 12096;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r11,-4096
	ctx.r10.s64 = ctx.r11.s64 + -4096;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82404B78) {
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
	ctx.lr = 0x82404B80;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,340(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwz r29,332(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lwz r27,324(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// not r28,r9
	r28.u64 = ~ctx.r9.u64;
	// lwz r26,316(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// lwz r25,308(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r30,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// rlwinm r10,r9,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// stw r29,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// li r24,3
	r24.s64 = 3;
	// stw r27,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r27.u32);
	// clrlwi r9,r28,31
	ctx.r9.u64 = r28.u32 & 0x1;
	// stw r26,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r26.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r24,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r24.u32);
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82404900
	ctx.lr = 0x82404BE4;
	sub_82404900(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82405490) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82405498;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r4,24
	r31.s64 = ctx.r4.s64 + 24;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
	// li r30,4
	r30.s64 = 4;
loc_824054B0:
	// lwz r11,-12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -12);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x82409e00
	ctx.lr = 0x824054CC;
	sub_82409E00(ctx, base);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// lwzu r11,4(r31)
	ea = 4 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// srw r11,r11,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsplth v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xF0E))));
	// vupkd3d128 v63,v0,20
	temp.u32 = ctx.v0.u16[3];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v63.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v0.u16[2];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v63.u32[2] = vTemp.u32[0];
	temp.u32 = ctx.v0.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v63.u32[1] = vTemp.u32[0];
	temp.u32 = ctx.v0.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v63.u32[0] = vTemp.u32[0];
	// stvewx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r29)
	ea = 4 + r29.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// bne 0x824054b0
	if (!ctx.cr0.eq) goto loc_824054B0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvrx128 v63,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v1,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82408D28) {
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
	ctx.lr = 0x82408D30;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,404(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// stw r4,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r4.u32);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// stw r5,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r5.u32);
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// stw r7,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r7.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// li r16,0
	r16.s64 = 0;
	// bne cr6,0x82408d7c
	if (!ctx.cr6.eq) goto loc_82408D7C;
	// stw r8,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// addi r28,r1,144
	r28.s64 = ctx.r1.s64 + 144;
	// stw r9,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// stw r16,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r16.u32);
	// stw r16,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r16.u32);
	// stw r16,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r16.u32);
	// stw r10,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
loc_82408D7C:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r6,12(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 12);
	// subf r29,r7,r11
	r29.u64 = ctx.r11.u64 - ctx.r7.u64;
	// lwz r5,20(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r7,16(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 16);
	// subf r11,r11,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r11.u64;
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// subf r26,r7,r5
	r26.u64 = ctx.r5.u64 - ctx.r7.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r26,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r26.u32);
	// bne cr6,0x82408dc4
	if (!ctx.cr6.eq) goto loc_82408DC4;
	// stw r16,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r16.u32);
	// addi r21,r1,128
	r21.s64 = ctx.r1.s64 + 128;
	// stw r16,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r16.u32);
	// stw r16,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r16.u32);
loc_82408DC4:
	// addi r11,r8,31
	ctx.r11.s64 = ctx.r8.s64 + 31;
	// lwz r31,412(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// addi r9,r9,31
	ctx.r9.s64 = ctx.r9.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r27,r9,0,0,26
	r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmplw cr6,r25,r18
	ctx.cr6.compare<uint32_t>(r25.u32, r18.u32, ctx.xer);
	// bne cr6,0x82408e20
	if (!ctx.cr6.eq) goto loc_82408E20;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r27.s32);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r30,r11,0,0,19
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823cd118
	ctx.lr = 0x82408E0C;
	sub_823CD118(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// bl 0x824092c8
	ctx.lr = 0x82408E1C;
	sub_824092C8(ctx, base);
	// b 0x82408e24
	goto loc_82408E24;
loc_82408E20:
	// mr r19,r25
	r19.u64 = r25.u64;
loc_82408E24:
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
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + r29.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// andc r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// add r22,r9,r10
	r22.u64 = ctx.r9.u64 + ctx.r10.u64;
	// andc r10,r5,r8
	ctx.r10.u64 = ctx.r5.u64 & ~ctx.r8.u64;
	// subf r14,r11,r7
	r14.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r15,r11,r10
	r15.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r30,r22,6
	r30.s64 = r22.s64 + 6;
	// cmplw cr6,r14,r29
	ctx.cr6.compare<uint32_t>(r14.u32, r29.u32, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// bgt cr6,0x82408e84
	if (ctx.cr6.gt) goto loc_82408E84;
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
loc_82408E84:
	// lwz r10,8(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 8);
	// slw r11,r11,r22
	ctx.r11.u64 = r22.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r22.u8 & 0x3F));
	// mullw r10,r10,r24
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r24.s32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r16,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r16.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82409198
	if (ctx.cr6.eq) goto loc_82409198;
	// rlwinm r11,r27,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82408EAC:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r17,r11,30,2,31
	r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mullw r10,r9,r17
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(r17.s32);
	// stw r17,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r17.u32);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// beq cr6,0x82409178
	if (ctx.cr6.eq) goto loc_82409178;
	// slw r20,r11,r30
	r20.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r30.u8 & 0x3F));
loc_82408EE0:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r6,0(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 0);
	// add r11,r16,r11
	ctx.r11.u64 = r16.u64 + ctx.r11.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r10,r6,29
	ctx.r10.u64 = ctx.r6.u32 & 0x7;
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r27,r11,2,27,28
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x18;
	// lwz r9,4(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 4);
	// rlwinm r8,r11,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r4,348(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// add r3,r10,r27
	ctx.r3.u64 = ctx.r10.u64 + r27.u64;
	// lwz r31,0(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r23,84(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r5,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// slw r7,r3,r30
	ctx.r7.u64 = r30.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r30.u8 & 0x3F));
	// mullw r26,r8,r10
	r26.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r6,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r3,r7,26,6,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x3FFFFFF;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// rlwinm r8,r3,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFF0;
	// slw r10,r10,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// rlwinm r10,r10,1,3,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFFFFE;
	// rlwinm r7,r11,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r7,r7,r17
	ctx.r7.u64 = ctx.r7.u64 + r17.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r3,28
	ctx.r8.u64 = ctx.r3.u32 & 0xF;
	// clrlwi r29,r7,31
	r29.u64 = ctx.r7.u32 & 0x1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r6,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r25,r29,1,0,30
	r25.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r11,4,27,27
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x10;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// add r11,r8,r20
	ctx.r11.u64 = ctx.r8.u64 + r20.u64;
	// rlwinm r10,r10,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x6;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// srawi r8,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 6;
	// rlwinm r7,r10,3,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// clrlwi r6,r8,29
	ctx.r6.u64 = ctx.r8.u32 & 0x7;
	// rlwinm r8,r10,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r7,r9,r16
	ctx.r7.u64 = ctx.r9.u64 + r16.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r8,r7,r4
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r23,r8,r23
	r23.u64 = ctx.r8.u64 + r23.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r9,r11,26
	ctx.r9.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r11,r31,r22
	ctx.r11.u64 = r22.u8 & 0x20 ? 0 : (r31.u32 << (r22.u8 & 0x3F));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// add r4,r10,r19
	ctx.r4.u64 = ctx.r10.u64 + r19.u64;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + r18.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82408FD0;
	sub_822D4FA0(ctx, base);
	// mr r31,r14
	r31.u64 = r14.u64;
	// cmpw cr6,r14,r15
	ctx.cr6.compare<int32_t>(r14.s32, r15.s32, ctx.xer);
	// bge cr6,0x824090a0
	if (!ctx.cr6.lt) goto loc_824090A0;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// slw r17,r11,r22
	r17.u64 = r22.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r22.u8 & 0x3F));
loc_82408FE4:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
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
	// rlwinm r9,r10,1,3,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFFFFE;
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
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + r20.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
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
	// slw r11,r6,r22
	ctx.r11.u64 = r22.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r22.u8 & 0x3F));
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r8,r11,r23
	ctx.r8.u64 = ctx.r11.u64 + r23.u64;
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
	ctx.lr = 0x8240908C;
	sub_822D4FA0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// cmpw cr6,r31,r15
	ctx.cr6.compare<int32_t>(r31.s32, r15.s32, ctx.xer);
	// blt cr6,0x82408fe4
	if (ctx.cr6.lt) goto loc_82408FE4;
	// lwz r17,112(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_824090A0:
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82409158
	if (!ctx.cr6.lt) goto loc_82409158;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// subf r6,r31,r10
	ctx.r6.u64 = ctx.r10.u64 - r31.u64;
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
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
	// rlwinm r9,r10,1,3,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFFFFE;
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
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + r20.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
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
	// slw r11,r5,r22
	ctx.r11.u64 = r22.u8 & 0x20 ? 0 : (ctx.r5.u32 << (r22.u8 & 0x3F));
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + r18.u64;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// slw r5,r6,r22
	ctx.r5.u64 = r22.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r22.u8 & 0x3F));
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + r19.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82409158;
	sub_822D4FA0(ctx, base);
loc_82409158:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// cmplw cr6,r16,r11
	ctx.cr6.compare<uint32_t>(r16.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82408ee0
	if (ctx.cr6.lt) goto loc_82408EE0;
	// lwz r26,120(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// li r16,0
	r16.s64 = 0;
	// lwz r25,372(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r24,356(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
loc_82409178:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// blt cr6,0x82408eac
	if (ctx.cr6.lt) goto loc_82408EAC;
loc_82409198:
	// cmplw cr6,r25,r18
	ctx.cr6.compare<uint32_t>(r25.u32, r18.u32, ctx.xer);
	// bne cr6,0x824091ac
	if (!ctx.cr6.eq) goto loc_824091AC;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x823cd250
	ctx.lr = 0x824091AC;
	sub_823CD250(ctx, base);
loc_824091AC:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8241BE40) {
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
	ctx.lr = 0x8241BE48;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r8,100(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r28,r11,r30
	r28.u64 = ctx.r11.u64 + r30.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// bge cr6,0x8241bec0
	if (!ctx.cr6.lt) goto loc_8241BEC0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
loc_8241BE90:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e6fc0
	ctx.lr = 0x8241BEA8;
	sub_823E6FC0(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// stfs f31,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 12, temp.u32);
	// stfs f31,8(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// blt cr6,0x8241be90
	if (ctx.cr6.lt) goto loc_8241BE90;
loc_8241BEC0:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241bee0
	if (ctx.cr6.eq) goto loc_8241BEE0;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r29
	ctx.r4.u64 = r29.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x8241BEE0;
	sub_82413D40(ctx, base);
loc_8241BEE0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241bf00
	if (ctx.cr6.eq) goto loc_8241BF00;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r29
	ctx.r4.u64 = r29.u64 - ctx.r11.u64;
	// bl 0x82414110
	ctx.lr = 0x8241BF00;
	sub_82414110(ctx, base);
loc_8241BF00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8241E910) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8241E918;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x8240e880
	ctx.lr = 0x8241E938;
	sub_8240E880(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8241e9a0
	if (!ctx.cr6.eq) goto loc_8241E9A0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8241e95c
	if (ctx.cr6.eq) goto loc_8241E95C;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8240e930
	ctx.lr = 0x8241E95C;
	sub_8240E930(ctx, base);
loc_8241E95C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8241e998
	if (ctx.cr6.eq) goto loc_8241E998;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8241e998
	if (ctx.cr6.eq) goto loc_8241E998;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18772
	ctx.r4.s64 = ctx.r10.s64 + -18772;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,14
	ctx.r6.s64 = 14;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,56(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bctrl 
	ctx.lr = 0x8241E998;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241E998:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8241e9fc
	goto loc_8241E9FC;
loc_8241E9A0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8241e9bc
	if (ctx.cr6.eq) goto loc_8241E9BC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8240e930
	ctx.lr = 0x8241E9BC;
	sub_8240E930(ctx, base);
loc_8241E9BC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8241e9f8
	if (ctx.cr6.eq) goto loc_8241E9F8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8241e9f8
	if (ctx.cr6.eq) goto loc_8241E9F8;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
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
	// li r6,14
	ctx.r6.s64 = 14;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,56(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bctrl 
	ctx.lr = 0x8241E9F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241E9F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241E9FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82420BE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82420BE8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82420c24
	if (!ctx.cr6.eq) goto loc_82420C24;
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
	// li r7,2744
	ctx.r7.s64 = 2744;
	// bl 0x8240e308
	ctx.lr = 0x82420C24;
	sub_8240E308(ctx, base);
loc_82420C24:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82420c40
	if (ctx.cr6.eq) goto loc_82420C40;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e930
	ctx.lr = 0x82420C40;
	sub_8240E930(ctx, base);
loc_82420C40:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82420c7c
	if (ctx.cr6.eq) goto loc_82420C7C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82420c7c
	if (ctx.cr6.eq) goto loc_82420C7C;
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
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,101
	ctx.r6.s64 = 101;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,404(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 404);
	// bctrl 
	ctx.lr = 0x82420C7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82420C7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82421F38) {
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
	ctx.lr = 0x82421F40;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,16880
	r28.s64 = ctx.r11.s64 + 16880;
	// addi r27,r10,-18872
	r27.s64 = ctx.r10.s64 + -18872;
	// bne cr6,0x82421f8c
	if (!ctx.cr6.eq) goto loc_82421F8C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,16968
	ctx.r5.s64 = ctx.r11.s64 + 16968;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,4437
	ctx.r7.s64 = 4437;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x82421F8C;
	sub_8240E308(ctx, base);
loc_82421F8C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e880
	ctx.lr = 0x82421F9C;
	sub_8240E880(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e880
	ctx.lr = 0x82421FB0;
	sub_8240E880(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r10,11888
	ctx.r11.s64 = ctx.r10.s64 + 11888;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,-4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// beq cr6,0x82422010
	if (ctx.cr6.eq) goto loc_82422010;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// beq cr6,0x82422010
	if (ctx.cr6.eq) goto loc_82422010;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// beq cr6,0x82422008
	if (ctx.cr6.eq) goto loc_82422008;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82422008
	if (ctx.cr6.eq) goto loc_82422008;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-23400
	ctx.r5.s64 = ctx.r11.s64 + -23400;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,4450
	ctx.r7.s64 = 4450;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x82422008;
	sub_8240E308(ctx, base);
loc_82422008:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82422014
	goto loc_82422014;
loc_82422010:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82422014:
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// oris r11,r11,75
	ctx.r11.u64 = ctx.r11.u64 | 4915200;
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | r31.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82422070
	if (ctx.cr6.eq) goto loc_82422070;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82422070
	if (ctx.cr6.eq) goto loc_82422070;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8241e418
	ctx.lr = 0x82422044;
	sub_8241E418(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18724
	ctx.r4.s64 = ctx.r10.s64 + -18724;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,89
	ctx.r6.s64 = 89;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r5,356(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 356);
	// bctrl 
	ctx.lr = 0x82422070;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82422070:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82428710) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,58
	ctx.r11.s64 = ctx.r4.s64 + 58;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242872c
	if (ctx.cr6.eq) goto loc_8242872C;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82428738
	goto loc_82428738;
loc_8242872C:
	// addi r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 + 20;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
loc_82428738:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mulli r9,r11,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// addi r11,r10,8544
	ctx.r11.s64 = ctx.r10.s64 + 8544;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// lbzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82428764
	if (ctx.cr6.eq) goto loc_82428764;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82428764:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82429558) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82429560;
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
	ctx.lr = 0x8242957C;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// beq 0x824295b8
	if (ctx.cr0.eq) goto loc_824295B8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82428a88
	ctx.lr = 0x82429598;
	sub_82428A88(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-1408
	ctx.r11.s64 = ctx.r11.s64 + -1408;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x824295bc
	goto loc_824295BC;
loc_824295B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824295BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8242A3A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8242A3A8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// li r3,1068
	ctx.r3.s64 = 1068;
	// bl 0x823cd118
	ctx.lr = 0x8242A3C0;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8242a3ec
	if (ctx.cr0.eq) goto loc_8242A3EC;
	// li r5,1068
	ctx.r5.s64 = 1068;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r28,0
	r28.s64 = 0;
	// bl 0x822d4fa0
	ctx.lr = 0x8242A3DC;
	sub_822D4FA0(ctx, base);
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
loc_8242A3E0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_8242A3EC:
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
	// b 0x8242a3e0
	goto loc_8242A3E0;
}

DEFINE_REX_FUNC(sub_8242CA48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8242CA50;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r30,r3,44
	r30.s64 = ctx.r3.s64 + 44;
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
	ctx.lr = 0x8242CA74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,180(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 180);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242CA8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r11.u32);
	// lwz r11,404(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 404);
	// stw r11,40(r29)
	REX_STORE_U32(r29.u32 + 40, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r11,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r11,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r11,52(r29)
	REX_STORE_U32(r29.u32 + 52, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r11,56(r29)
	REX_STORE_U32(r29.u32 + 56, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r11,60(r29)
	REX_STORE_U32(r29.u32 + 60, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242CAD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8242E6F0) {
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
	ctx.lr = 0x8242E6F8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// lwz r11,476(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 476);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
	// mr r23,r27
	r23.u64 = r27.u64;
	// b 0x8242e748
	goto loc_8242E748;
loc_8242E720:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, ctx.xer);
	// beq cr6,0x8242e7b8
	if (ctx.cr6.eq) goto loc_8242E7B8;
	// bgt cr6,0x8242e750
	if (ctx.cr6.gt) goto loc_8242E750;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242e750
	if (ctx.cr6.eq) goto loc_8242E750;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8242E748:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242e720
	if (!ctx.cr6.eq) goto loc_8242E720;
loc_8242E750:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x8242c3b0
	ctx.lr = 0x8242E76C;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8242e7c0
	if (ctx.cr0.eq) goto loc_8242E7C0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r27,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r27.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r27,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r27.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r27,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r27.u32);
	// stw r10,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r27,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r27.u32);
	// stw r27,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r27.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x8242e7c4
	goto loc_8242E7C4;
loc_8242E7B8:
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// b 0x8242e958
	goto loc_8242E958;
loc_8242E7C0:
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8242E7C4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8242e7dc
	if (!ctx.cr6.eq) goto loc_8242E7DC;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8242e95c
	goto loc_8242E95C;
loc_8242E7DC:
	// addi r29,r30,48
	r29.s64 = r30.s64 + 48;
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
	// addi r25,r30,44
	r25.s64 = r30.s64 + 44;
	// stw r27,48(r30)
	REX_STORE_U32(r30.u32 + 48, r27.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stw r27,44(r30)
	REX_STORE_U32(r30.u32 + 44, r27.u32);
	// beq cr6,0x8242e800
	if (ctx.cr6.eq) goto loc_8242E800;
	// lwz r28,48(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 48);
	// b 0x8242e804
	goto loc_8242E804;
loc_8242E800:
	// lwz r28,184(r24)
	r28.u64 = REX_LOAD_U32(r24.u32 + 184);
loc_8242E804:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8242cd60
	ctx.lr = 0x8242E814;
	sub_8242CD60(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// lis r11,4919
	ctx.r11.s64 = 322371584;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// ori r26,r11,61441
	r26.u64 = ctx.r11.u64 | 61441;
	// blt 0x8242e8e0
	if (ctx.cr0.lt) goto loc_8242E8E0;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242E844;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// blt 0x8242e8e0
	if (ctx.cr0.lt) goto loc_8242E8E0;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242E868;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// blt 0x8242e8e0
	if (ctx.cr0.lt) goto loc_8242E8E0;
	// lwz r3,180(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 180);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242E88C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// blt 0x8242e8e0
	if (ctx.cr0.lt) goto loc_8242E8E0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8242cd60
	ctx.lr = 0x8242E8A8;
	sub_8242CD60(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// blt 0x8242e8e0
	if (ctx.cr0.lt) goto loc_8242E8E0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r24,452
	ctx.r3.s64 = r24.s64 + 452;
	// bl 0x8242d7f0
	ctx.lr = 0x8242E8C4;
	sub_8242D7F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8242e8d4
	if (ctx.cr0.eq) goto loc_8242E8D4;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// b 0x8242e958
	goto loc_8242E958;
loc_8242E8D4:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_8242E8E0:
	// lwz r4,0(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8242e8f4
	if (ctx.cr6.eq) goto loc_8242E8F4;
	// lwz r3,16044(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 16044);
	// bl 0x8247c0e8
	ctx.lr = 0x8242E8F4;
	sub_8247C0E8(ctx, base);
loc_8242E8F4:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242e93c
	if (ctx.cr6.eq) goto loc_8242E93C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242E918;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,180(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 180);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242E930;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,16044(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 16044);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x8247c0e8
	ctx.lr = 0x8242E93C;
	sub_8247C0E8(ctx, base);
loc_8242E93C:
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x8242d868
	ctx.lr = 0x8242E944;
	sub_8242D868(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82473600
	ctx.lr = 0x8242E94C;
	sub_82473600(ctx, base);
	// mr r30,r27
	r30.u64 = r27.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x8242e95c
	if (ctx.cr6.lt) goto loc_8242E95C;
loc_8242E958:
	// stw r30,0(r22)
	REX_STORE_U32(r22.u32 + 0, r30.u32);
loc_8242E95C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82443000
	ctx.lr = 0x8242E964;
	sub_82443000(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82438600) {
	REX_FUNC_PROLOGUE();
	// lwz r10,108(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82438620
	if (!ctx.cr6.eq) goto loc_82438620;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// b 0x8243862c
	goto loc_8243862C;
loc_82438620:
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_8243862C:
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82438644
	if (!ctx.cr6.eq) goto loc_82438644;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// b 0x82438650
	goto loc_82438650;
loc_82438644:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
loc_82438650:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r10,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82439CA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82439CB0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82434a80
	ctx.lr = 0x82439CCC;
	sub_82434A80(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-180
	ctx.r3.s64 = r31.s64 + -180;
	// bl 0x82439b08
	ctx.lr = 0x82439CDC;
	sub_82439B08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8243A300) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,65534
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65534, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,9780
	ctx.r10.s64 = ctx.r10.s64 + 9780;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_8243A328:
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8243a348
	if (!ctx.cr0.eq) goto loc_8243A348;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8243a328
	if (!ctx.cr6.eq) goto loc_8243A328;
loc_8243A348:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8243a35c
	if (!ctx.cr0.eq) goto loc_8243A35C;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// blr 
	return;
loc_8243A35C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243BC50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r10,r4,96
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(96));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r9,3,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm. r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x8243bc8c
	if (!ctx.cr0.gt) goto loc_8243BC8C;
loc_8243BC78:
	// lwz r7,72(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// dcbz r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~31;
	memset((void*)REX_RAW_ADDR(ea), 0, 32);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8243bc78
	if (ctx.cr6.lt) goto loc_8243BC78;
loc_8243BC8C:
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8243bca4
	if (ctx.cr6.eq) goto loc_8243BCA4;
	// stw r8,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_8243BCA4:
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8243bcb8
	if (ctx.cr6.eq) goto loc_8243BCB8;
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_8243BCB8:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r7,r9,20
	ctx.r7.u64 = ctx.r9.u32 & 0xFFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8243bcd0
	if (ctx.cr0.eq) goto loc_8243BCD0;
	// rlwinm r9,r9,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF000;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8243BCD0:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r7,r9,20
	ctx.r7.u64 = ctx.r9.u32 & 0xFFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8243bce8
	if (ctx.cr0.eq) goto loc_8243BCE8;
	// rlwinm r9,r9,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF000;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_8243BCE8:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r7,r9,0,10,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x300000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8243bd00
	if (ctx.cr0.eq) goto loc_8243BD00;
	// rlwinm r9,r9,0,12,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8243BD00:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi. r7,r9,6
	ctx.r7.u64 = ctx.r9.u32 & 0x3FFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8243bd18
	if (ctx.cr0.eq) goto loc_8243BD18;
	// rlwinm r9,r9,0,0,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFC000000;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_8243BD18:
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r7,r9,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8243bd30
	if (ctx.cr0.eq) goto loc_8243BD30;
	// clrlwi r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
loc_8243BD30:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r8.u32);
	// rlwinm. r7,r9,0,0,4
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF8000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r8,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r8.u32);
	// stw r8,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r8.u32);
	// beq 0x8243bd54
	if (ctx.cr0.eq) goto loc_8243BD54;
	// clrlwi r9,r9,5
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFF;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8243BD54:
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r7,r9,27
	ctx.r7.u64 = ctx.r9.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8243bd6c
	if (ctx.cr0.eq) goto loc_8243BD6C;
	// rlwinm r9,r9,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
loc_8243BD6C:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// rlwinm r6,r9,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8243bd8c
	if (ctx.cr6.eq) goto loc_8243BD8C;
	// oris r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 2147483648;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_8243BD8C:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r8,82(r11)
	REX_STORE_U16(ctx.r11.u32 + 82, ctx.r8.u16);
	// rlwinm. r8,r9,0,1,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7C000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8243bda8
	if (ctx.cr0.eq) goto loc_8243BDA8;
	// rlwinm r9,r9,0,6,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFF83FFFFFF;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_8243BDA8:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r8,r9,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8243bdc0
	if (ctx.cr0.eq) goto loc_8243BDC0;
	// clrlwi r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_8243BDC0:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r8,r9,0,1,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7C000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8243bdd8
	if (ctx.cr0.eq) goto loc_8243BDD8;
	// rlwinm r9,r9,0,6,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFF83FFFFFF;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_8243BDD8:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r8,r9,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8243bdf0
	if (ctx.cr0.eq) goto loc_8243BDF0;
	// clrlwi r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_8243BDF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82442BB8) {
	REX_FUNC_PROLOGUE();
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r10,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r9,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82443DF8) {
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
	ctx.lr = 0x82443E00;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82443E34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82443348
	ctx.lr = 0x82443E40;
	sub_82443348(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82443898
	ctx.lr = 0x82443E58;
	sub_82443898(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82443E6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82449980) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e6c
	ctx.lr = 0x82449988;
	// stfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f29.u64);
	// stfd f30,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82449d00
	if (ctx.cr6.eq) goto loc_82449D00;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82449d00
	if (ctx.cr6.eq) goto loc_82449D00;
	// lwz r11,372(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 372);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82449a24
	if (ctx.cr6.eq) goto loc_82449A24;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82449a10
	if (!ctx.cr6.gt) goto loc_82449A10;
	// mr r30,r23
	r30.u64 = r23.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
loc_824499E4:
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82449a04
	if (ctx.cr6.eq) goto loc_82449A04;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82460ee8
	ctx.lr = 0x824499FC;
	sub_82460EE8(ctx, base);
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// stwx r23,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r23.u32);
loc_82449A04:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x824499e4
	if (!ctx.cr0.eq) goto loc_824499E4;
loc_82449A10:
	// lwz r3,372(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 372);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82449a24
	if (ctx.cr6.eq) goto loc_82449A24;
	// bl 0x82460ee8
	ctx.lr = 0x82449A20;
	sub_82460EE8(ctx, base);
	// stw r23,372(r31)
	REX_STORE_U32(r31.u32 + 372, r23.u32);
loc_82449A24:
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82449a80
	if (ctx.cr6.eq) goto loc_82449A80;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x82449a6c
	if (!ctx.cr6.gt) goto loc_82449A6C;
	// mr r30,r23
	r30.u64 = r23.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_82449A40:
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82449a60
	if (ctx.cr6.eq) goto loc_82449A60;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82460ee8
	ctx.lr = 0x82449A58;
	sub_82460EE8(ctx, base);
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// stwx r23,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r23.u32);
loc_82449A60:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82449a40
	if (!ctx.cr0.eq) goto loc_82449A40;
loc_82449A6C:
	// lwz r3,376(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 376);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82449a80
	if (ctx.cr6.eq) goto loc_82449A80;
	// bl 0x82460ee8
	ctx.lr = 0x82449A7C;
	sub_82460EE8(ctx, base);
	// stw r23,376(r31)
	REX_STORE_U32(r31.u32 + 376, r23.u32);
loc_82449A80:
	// rlwinm r24,r27,2,0,29
	r24.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82460ed8
	ctx.lr = 0x82449A8C;
	sub_82460ED8(ctx, base);
	// stw r3,372(r31)
	REX_STORE_U32(r31.u32 + 372, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82449aa4
	if (!ctx.cr6.eq) goto loc_82449AA4;
loc_82449A98:
	// lis r23,-32761
	r23.s64 = -2147024896;
	// ori r23,r23,14
	r23.u64 = r23.u64 | 14;
	// b 0x82449d08
	goto loc_82449D08;
loc_82449AA4:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82449AB0;
	sub_822D5870(ctx, base);
	// mr r29,r23
	r29.u64 = r23.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x82449b04
	if (!ctx.cr6.gt) goto loc_82449B04;
	// rlwinm r28,r22,2,0,29
	r28.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r23
	r30.u64 = r23.u64;
loc_82449AC4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82460ed8
	ctx.lr = 0x82449ACC;
	sub_82460ED8(ctx, base);
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// stwx r3,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82449a98
	if (ctx.cr6.eq) goto loc_82449A98;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82449AF4;
	sub_822D5870(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// blt cr6,0x82449ac4
	if (ctx.cr6.lt) goto loc_82449AC4;
loc_82449B04:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82460ed8
	ctx.lr = 0x82449B0C;
	sub_82460ED8(ctx, base);
	// stw r3,376(r31)
	REX_STORE_U32(r31.u32 + 376, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82449a98
	if (ctx.cr6.eq) goto loc_82449A98;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82449B24;
	sub_822D5870(ctx, base);
	// mr r29,r23
	r29.u64 = r23.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x82449b78
	if (!ctx.cr6.gt) goto loc_82449B78;
	// rlwinm r28,r22,2,0,29
	r28.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r23
	r30.u64 = r23.u64;
loc_82449B38:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82460ed8
	ctx.lr = 0x82449B40;
	sub_82460ED8(ctx, base);
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// stwx r3,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82449a98
	if (ctx.cr6.eq) goto loc_82449A98;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82449B68;
	sub_822D5870(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// blt cr6,0x82449b38
	if (ctx.cr6.lt) goto loc_82449B38;
loc_82449B78:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82449c28
	if (ctx.cr6.eq) goto loc_82449C28;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x82449d08
	if (!ctx.cr6.gt) goto loc_82449D08;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r28,r23
	r28.u64 = r23.u64;
	// mr r25,r27
	r25.u64 = r27.u64;
	// lfd f30,-6032(r11)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r11.u32 + -6032);
	// lis r26,-32768
	r26.s64 = -2147483648;
	// lfd f31,-24992(r10)
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + -24992);
	// lfs f29,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f29.f64 = double(temp.f32);
loc_82449BAC:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82449c18
	if (!ctx.cr6.gt) goto loc_82449C18;
	// mr r30,r23
	r30.u64 = r23.u64;
	// add r29,r28,r21
	r29.u64 = r28.u64 + r21.u64;
	// mr r27,r22
	r27.u64 = r22.u64;
loc_82449BC0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// bne cr6,0x82449bdc
	if (!ctx.cr6.eq) goto loc_82449BDC;
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lwzx r10,r28,r11
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// stfsx f29,r10,r30
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r10.u32 + r30.u32, temp.u32);
	// b 0x82449c08
	goto loc_82449C08;
loc_82449BDC:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fmul f2,f13,f31
	ctx.f2.f64 = ctx.f13.f64 * f31.f64;
	// bl 0x822d5b48
	ctx.lr = 0x82449BF8;
	sub_822D5B48(ctx, base);
	// lwz r10,372(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 372);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lwzx r9,r28,r10
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + ctx.r10.u32);
	// stfsx f12,r9,r30
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + r30.u32, temp.u32);
loc_82449C08:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// add r29,r29,r24
	r29.u64 = r29.u64 + r24.u64;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82449bc0
	if (!ctx.cr0.eq) goto loc_82449BC0;
loc_82449C18:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x82449bac
	if (!ctx.cr0.eq) goto loc_82449BAC;
	// b 0x82449d08
	goto loc_82449D08;
loc_82449C28:
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82449c58
	if (ctx.cr6.eq) goto loc_82449C58;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r8,376(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 376);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r7,372(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 372);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824490f0
	ctx.lr = 0x82449C50;
	sub_824490F0(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// b 0x82449d08
	goto loc_82449D08;
loc_82449C58:
	// cmpw cr6,r27,r22
	ctx.cr6.compare<int32_t>(r27.s32, r22.s32, ctx.xer);
	// beq cr6,0x82449c68
	if (ctx.cr6.eq) goto loc_82449C68;
	// lis r23,-32764
	r23.s64 = -2147221504;
	// b 0x82449d08
	goto loc_82449D08;
loc_82449C68:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(r27.s32, 4, ctx.xer);
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x82449cd4
	if (ctx.cr6.lt) goto loc_82449CD4;
	// addi r6,r27,-3
	ctx.r6.s64 = r27.s64 + -3;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82449C84:
	// lwz r7,372(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 372);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// lwzx r5,r11,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// stfsx f0,r5,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// lwz r7,372(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 372);
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r7,4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// add r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r7,372(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lwzx r5,r8,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stfsx f0,r5,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
	// lwz r4,372(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lwzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stfsx f0,r3,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + ctx.r10.u32, temp.u32);
	// blt cr6,0x82449c84
	if (ctx.cr6.lt) goto loc_82449C84;
loc_82449CD4:
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r27.s32, ctx.xer);
	// bge cr6,0x82449d08
	if (!ctx.cr6.lt) goto loc_82449D08;
	// subf r10,r9,r27
	ctx.r10.u64 = r27.u64 - ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82449CE8:
	// lwz r10,372(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82449ce8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82449CE8;
	// b 0x82449d08
	goto loc_82449D08;
loc_82449D00:
	// lis r23,-32761
	r23.s64 = -2147024896;
	// ori r23,r23,87
	r23.u64 = r23.u64 | 87;
loc_82449D08:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_8245D118) {
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
	ctx.lr = 0x8245D120;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,24
	r26.s64 = ctx.r3.s64 + 24;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824d438c
	ctx.lr = 0x8245D134;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245d1ec
	if (ctx.cr6.eq) goto loc_8245D1EC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245d190
	if (ctx.cr6.eq) goto loc_8245D190;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824d445c
	ctx.lr = 0x8245D160;
	__imp__KeSetEvent(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8220aa00
	ctx.lr = 0x8245D170;
	sub_8220AA00(ctx, base);
	// lwz r30,52(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8245d190
	if (ctx.cr6.eq) goto loc_8245D190;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8245d190
	if (ctx.cr6.eq) goto loc_8245D190;
	// bl 0x82208848
	ctx.lr = 0x8245D18C;
	sub_82208848(ctx, base);
	// stw r27,0(r30)
	REX_STORE_U32(r30.u32 + 0, r27.u32);
loc_8245D190:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// li r28,1
	r28.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8245d1d8
	if (!ctx.cr6.gt) goto loc_8245D1D8;
	// li r30,4
	r30.s64 = 4;
loc_8245D1A4:
	// lwz r29,52(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwzx r3,r30,r29
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8245d1c4
	if (ctx.cr6.eq) goto loc_8245D1C4;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8245d1c4
	if (ctx.cr6.eq) goto loc_8245D1C4;
	// bl 0x82208848
	ctx.lr = 0x8245D1C0;
	sub_82208848(ctx, base);
	// stwx r27,r30,r29
	REX_STORE_U32(r30.u32 + r29.u32, r27.u32);
loc_8245D1C4:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8245d1a4
	if (ctx.cr6.lt) goto loc_8245D1A4;
loc_8245D1D8:
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8245d1ec
	if (ctx.cr6.eq) goto loc_8245D1EC;
	// bl 0x82473600
	ctx.lr = 0x8245D1E8;
	sub_82473600(ctx, base);
	// stw r27,52(r31)
	REX_STORE_U32(r31.u32 + 52, r27.u32);
loc_8245D1EC:
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8245d200
	if (ctx.cr6.eq) goto loc_8245D200;
	// bl 0x82473600
	ctx.lr = 0x8245D1FC;
	sub_82473600(ctx, base);
	// stw r27,56(r31)
	REX_STORE_U32(r31.u32 + 56, r27.u32);
loc_8245D200:
	// stw r27,60(r31)
	REX_STORE_U32(r31.u32 + 60, r27.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824d437c
	ctx.lr = 0x8245D20C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8245F100) {
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
	ctx.lr = 0x8245F108;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,152
	ctx.r4.s64 = 152;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// bl 0x8242c3b0
	ctx.lr = 0x8245F144;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8245f168
	if (ctx.cr0.eq) goto loc_8245F168;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8245e970
	ctx.lr = 0x8245F160;
	sub_8245E970(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8245f16c
	goto loc_8245F16C;
loc_8245F168:
	// li r29,0
	r29.s64 = 0;
loc_8245F16C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8245f180
	if (!ctx.cr6.eq) goto loc_8245F180;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8245f1d0
	goto loc_8245F1D0;
loc_8245F180:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245F1A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8245f1b4
	if (ctx.cr0.lt) goto loc_8245F1B4;
	// stw r29,0(r25)
	REX_STORE_U32(r25.u32 + 0, r29.u32);
	// b 0x8245f1d0
	goto loc_8245F1D0;
loc_8245F1B4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245F1CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82473600
	ctx.lr = 0x8245F1D0;
	sub_82473600(ctx, base);
loc_8245F1D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82460380) {
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
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x8242c3b0
	ctx.lr = 0x824603B8;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824603ec
	if (ctx.cr0.eq) goto loc_824603EC;
	// cntlzw r11,r31
	ctx.r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r8,r30,24
	ctx.r8.u64 = r30.u32 & 0xFF;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stb r9,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// b 0x824603f0
	goto loc_824603F0;
loc_824603EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824603F0:
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

DEFINE_REX_FUNC(sub_82463298) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// bl 0x824631f8
	ctx.lr = 0x824632AC;
	sub_824631F8(ctx, base);
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lhz r7,110(r6)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r6.u32 + 110);
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// addi r9,r11,31152
	ctx.r9.s64 = ctx.r11.s64 + 31152;
	// addi r8,r10,29960
	ctx.r8.s64 = ctx.r10.s64 + 29960;
	// stw r9,496(r6)
	REX_STORE_U32(ctx.r6.u32 + 496, ctx.r9.u32);
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// stw r8,516(r6)
	REX_STORE_U32(ctx.r6.u32 + 516, ctx.r8.u32);
	// bgt cr6,0x824632f4
	if (ctx.cr6.gt) goto loc_824632F4;
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// lis r8,-32214
	ctx.r8.s64 = -2111176704;
	// addi r7,r11,-22768
	ctx.r7.s64 = ctx.r11.s64 + -22768;
	// addi r5,r10,-22768
	ctx.r5.s64 = ctx.r10.s64 + -22768;
	// addi r4,r9,27816
	ctx.r4.s64 = ctx.r9.s64 + 27816;
	// addi r3,r8,-22768
	ctx.r3.s64 = ctx.r8.s64 + -22768;
	// b 0x82463314
	goto loc_82463314;
loc_824632F4:
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// lis r8,-32214
	ctx.r8.s64 = -2111176704;
	// addi r7,r11,-22768
	ctx.r7.s64 = ctx.r11.s64 + -22768;
	// addi r5,r10,-22768
	ctx.r5.s64 = ctx.r10.s64 + -22768;
	// addi r4,r9,27816
	ctx.r4.s64 = ctx.r9.s64 + 27816;
	// addi r3,r8,-22768
	ctx.r3.s64 = ctx.r8.s64 + -22768;
loc_82463314:
	// lwz r11,280(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 280);
	// stw r3,512(r6)
	REX_STORE_U32(ctx.r6.u32 + 512, ctx.r3.u32);
	// stw r4,508(r6)
	REX_STORE_U32(ctx.r6.u32 + 508, ctx.r4.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r5,504(r6)
	REX_STORE_U32(ctx.r6.u32 + 504, ctx.r5.u32);
	// stw r7,500(r6)
	REX_STORE_U32(ctx.r6.u32 + 500, ctx.r7.u32);
	// bne cr6,0x82463350
	if (!ctx.cr6.eq) goto loc_82463350;
	// lwz r11,40(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82463344
	if (!ctx.cr6.eq) goto loc_82463344;
	// stw r11,476(r6)
	REX_STORE_U32(ctx.r6.u32 + 476, ctx.r11.u32);
	// b 0x8246335c
	goto loc_8246335C;
loc_82463344:
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// addi r10,r11,26080
	ctx.r10.s64 = ctx.r11.s64 + 26080;
	// b 0x82463358
	goto loc_82463358;
loc_82463350:
	// lis r11,-32184
	ctx.r11.s64 = -2109210624;
	// addi r10,r11,-27936
	ctx.r10.s64 = ctx.r11.s64 + -27936;
loc_82463358:
	// stw r10,476(r6)
	REX_STORE_U32(ctx.r6.u32 + 476, ctx.r10.u32);
loc_8246335C:
	// lis r11,-32184
	ctx.r11.s64 = -2109210624;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r9,r11,-30480
	ctx.r9.s64 = ctx.r11.s64 + -30480;
	// addi r8,r10,-29016
	ctx.r8.s64 = ctx.r10.s64 + -29016;
	// stw r9,516(r6)
	REX_STORE_U32(ctx.r6.u32 + 516, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,496(r6)
	REX_STORE_U32(ctx.r6.u32 + 496, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82466908) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82466924
	if (ctx.cr6.lt) goto loc_82466924;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r7,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r7.u16);
	// b 0x82466948
	goto loc_82466948;
loc_82466924:
	// subf r6,r10,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 1;
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// sth r6,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r6.u16);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_82466948:
	// sth r11,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r11.u16);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// bne cr6,0x82466998
	if (!ctx.cr6.eq) goto loc_82466998;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,156(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lhz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// lhz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// sth r3,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r3.u16);
	// sth r3,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r3.u16);
	// blr 
	return;
loc_82466998:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lhz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// lhz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sth r4,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r4.u16);
	// sth r4,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r4.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8246C240) {
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
	ctx.lr = 0x8246C248;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,116(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// li r26,0
	r26.s64 = 0;
	// lwz r10,120(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mulli r9,r9,152
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(152));
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// lwz r25,0(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r28,r9,r10
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r31,r9,r10
	r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// stw r26,12(r31)
	REX_STORE_U32(r31.u32 + 12, r26.u32);
	// lwz r8,96(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bne cr6,0x8246c2b0
	if (!ctx.cr6.eq) goto loc_8246C2B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 148);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r8,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ebc
	return;
loc_8246C2B0:
	// addi r30,r11,224
	r30.s64 = ctx.r11.s64 + 224;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x8246c398
	if (!ctx.cr6.eq) goto loc_8246C398;
	// bl 0x824658f8
	ctx.lr = 0x8246C2D0;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246c5a4
	if (ctx.cr6.lt) goto loc_8246C5A4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8246c328
	if (!ctx.cr6.eq) goto loc_8246C328;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lfs f0,23456(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 23456);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r7,148(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lfs f13,23452(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 23452);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r6,148(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 148);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwz r5,148(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 148);
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ebc
	return;
loc_8246C328:
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824658f8
	ctx.lr = 0x8246C33C;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246c5a4
	if (ctx.cr6.lt) goto loc_8246C5A4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8246c5a4
	if (!ctx.cr6.eq) goto loc_8246C5A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r8,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r6,148(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lfs f13,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lwz r5,148(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 148);
	// stfs f13,8(r5)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lwz r4,148(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 148);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ebc
	return;
loc_8246C398:
	// bl 0x824658f8
	ctx.lr = 0x8246C39C;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246c5a4
	if (ctx.cr6.lt) goto loc_8246C5A4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8246c460
	if (!ctx.cr6.eq) goto loc_8246C460;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r8,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(r28.s32, 4, ctx.xer);
	// lfs f0,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x8246c42c
	if (ctx.cr6.lt) goto loc_8246C42C;
	// addi r9,r28,1
	ctx.r9.s64 = r28.s64 + 1;
	// addi r7,r28,-3
	ctx.r7.s64 = r28.s64 + -3;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r8,r9,r26
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r26.s32);
loc_8246C3E4:
	// lwz r6,148(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 148);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// mullw r5,r5,r9
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stfsx f0,r8,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r6.u32, temp.u32);
	// mullw r6,r10,r9
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// lwz r8,148(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 148);
	// stfsx f0,r5,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r5,148(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 148);
	// stfsx f0,r6,r5
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r5.u32, temp.u32);
	// lwz r6,148(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 148);
	// stfsx f0,r4,r6
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r6.u32, temp.u32);
	// blt cr6,0x8246c3e4
	if (ctx.cr6.lt) goto loc_8246C3E4;
loc_8246C42C:
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// bge cr6,0x8246c5a4
	if (!ctx.cr6.lt) goto loc_8246C5A4;
	// subf r9,r11,r28
	ctx.r9.u64 = r28.u64 - ctx.r11.u64;
	// addi r8,r28,1
	ctx.r8.s64 = r28.s64 + 1;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8246C444:
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stfsx f0,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8246c444
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8246C444;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ebc
	return;
loc_8246C460:
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824658f8
	ctx.lr = 0x8246C474;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246c5a4
	if (ctx.cr6.lt) goto loc_8246C5A4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8246c59c
	if (!ctx.cr6.eq) goto loc_8246C59C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// ble cr6,0x8246c5a4
	if (!ctx.cr6.gt) goto loc_8246C5A4;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r27,r26
	r27.u64 = r26.u64;
	// mr r24,r28
	r24.u64 = r28.u64;
loc_8246C4AC:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(r28.s32, 4, ctx.xer);
	// blt cr6,0x8246c540
	if (ctx.cr6.lt) goto loc_8246C540;
	// lwz r9,548(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 548);
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r6,3
	r30.s64 = ctx.r6.s64 + 3;
	// addi r29,r28,-3
	r29.s64 = r28.s64 + -3;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lwzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r9,r7,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + r27.u32);
loc_8246C4D4:
	// add r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r23,148(r31)
	r23.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r22,r4,2
	r22.s64 = ctx.r4.s64 + 2;
	// add r21,r30,r11
	r21.u64 = r30.u64 + ctx.r11.u64;
	// stfsx f0,r7,r23
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + r23.u32, temp.u32);
	// lwz r4,148(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 148);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r4,r22,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// rlwinm r7,r21,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfs f12,-4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r5,148(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 148);
	// stfsx f12,r4,r5
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, temp.u32);
	// lwz r4,148(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lfsx f11,r9,r8
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// stfsx f11,r7,r4
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, temp.u32);
	// blt cr6,0x8246c4d4
	if (ctx.cr6.lt) goto loc_8246C4D4;
loc_8246C540:
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// bge cr6,0x8246c584
	if (!ctx.cr6.lt) goto loc_8246C584;
	// lwz r9,548(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 548);
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r11,r28
	ctx.r7.u64 = r28.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lwzx r9,r5,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r27.u32);
loc_8246C564:
	// add r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r7,148(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfsx f0,r5,r7
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r7.u32, temp.u32);
	// bdnz 0x8246c564
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8246C564;
loc_8246C584:
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + r28.u64;
	// bne 0x8246c4ac
	if (!ctx.cr0.eq) goto loc_8246C4AC;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ebc
	return;
loc_8246C59C:
	// stw r26,12(r31)
	REX_STORE_U32(r31.u32 + 12, r26.u32);
	// stw r26,16(r31)
	REX_STORE_U32(r31.u32 + 16, r26.u32);
loc_8246C5A4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_8247A968) {
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
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8247aa00
	if (!ctx.cr6.gt) goto loc_8247AA00;
	// li r31,128
	r31.s64 = 128;
	// cmplwi cr6,r5,64
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 64, ctx.xer);
	// bgt cr6,0x8247a9ac
	if (ctx.cr6.gt) goto loc_8247A9AC;
	// li r11,64
	ctx.r11.s64 = 64;
loc_8247A99C:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8247a99c
	if (!ctx.cr6.gt) goto loc_8247A99C;
loc_8247A9AC:
	// li r11,8
	ctx.r11.s64 = 8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247a9bc
	if (ctx.cr6.eq) goto loc_8247A9BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_8247A9BC:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8247a9c8
	if (ctx.cr6.gt) goto loc_8247A9C8;
	// li r31,1
	r31.s64 = 1;
loc_8247A9C8:
	// add r11,r31,r10
	ctx.r11.u64 = r31.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8247aa00
	if (!ctx.cr6.gt) goto loc_8247AA00;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x8247aa00
	if (!ctx.cr6.gt) goto loc_8247AA00;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x8247a7e8
	ctx.lr = 0x8247A9E8;
	sub_8247A7E8(ctx, base);
	// subf r10,r3,r31
	ctx.r10.u64 = r31.u64 - ctx.r3.u64;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x8247aa0c
	goto loc_8247AA0C;
loc_8247AA00:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_8247AA0C:
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

DEFINE_REX_FUNC(sub_8247D480) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8247D488;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// andi. r10,r11,131
	ctx.r10.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8247d4c0
	if (!ctx.cr0.eq) goto loc_8247D4C0;
	// bl 0x822db6c0
	ctx.lr = 0x8247D4AC;
	sub_822DB6C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8247d540
	goto loc_8247D540;
loc_8247D4C0:
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// bne cr6,0x8247d4e0
	if (!ctx.cr6.eq) goto loc_8247D4E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8247f2c8
	ctx.lr = 0x8247D4D8;
	sub_8247F2C8(ctx, base);
	// add r29,r3,r29
	r29.u64 = ctx.r3.u64 + r29.u64;
	// li r30,0
	r30.s64 = 0;
loc_8247D4E0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e1da0
	ctx.lr = 0x8247D4E8;
	sub_822E1DA0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247d500
	if (ctx.cr0.eq) goto loc_8247D500;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// b 0x8247d520
	goto loc_8247D520;
loc_8247D500:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247d520
	if (ctx.cr0.eq) goto loc_8247D520;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247d520
	if (ctx.cr0.eq) goto loc_8247D520;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8247d520
	if (!ctx.cr0.eq) goto loc_8247D520;
	// li r11,512
	ctx.r11.s64 = 512;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_8247D520:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e15a8
	ctx.lr = 0x8247D528;
	sub_822E15A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8247f148
	ctx.lr = 0x8247D534;
	sub_8247F148(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8247D540:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82482EB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lhz r10,52(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 52);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lhz r9,50(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 50);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r10,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r9,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r11,1316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1316);
	// beq cr6,0x82482f6c
	if (ctx.cr6.eq) goto loc_82482F6C;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,5560
	ctx.r7.s64 = ctx.r10.s64 + 5560;
loc_82482EE4:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82482f60
	if (ctx.cr6.eq) goto loc_82482F60;
	// cntlzw r9,r5
	ctx.r9.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// rlwinm r8,r9,28,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x2;
loc_82482EFC:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r12,3855
	ctx.r12.s64 = 3855;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// oris r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 252641280;
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ldx r3,r9,r7
	ctx.r3.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r7.u32);
	// and r9,r3,r12
	ctx.r9.u64 = ctx.r3.u64 & ctx.r12.u64;
	// rldicl r3,r9,56,8
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r9,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// rldicl r31,r3,56,8
	r31.u64 = __builtin_rotateleft64(ctx.r3.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r3,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r3.u8);
	// rldicl r9,r31,56,8
	ctx.r9.u64 = __builtin_rotateleft64(r31.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r31,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, r31.u8);
	// rldicl r3,r9,56,8
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r9,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// rldicl r31,r3,56,8
	r31.u64 = __builtin_rotateleft64(ctx.r3.u64, 56) & 0xFFFFFFFFFFFFFF;
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r9,r31,24
	ctx.r9.u64 = r31.u32 & 0xFF;
	// stb r3,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r3.u8);
	// stbu r9,6(r11)
	ea = 6 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82482efc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82482EFC;
loc_82482F60:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82482ee4
	if (ctx.cr6.lt) goto loc_82482EE4;
loc_82482F6C:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82490428) {
	REX_FUNC_PROLOGUE();
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// lwz r10,1464(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1464);
	// lwz r8,1368(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 1368);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// rlwinm r7,r11,0,0,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// rlwinm r3,r8,17,0,14
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0xFFFE0000;
	// mullw r5,r7,r10
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw r11,r6,r10
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// rlwinm r4,r5,0,0,14
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFE0000;
	// srawi r8,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 8;
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// addis r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 65536;
	// or r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 | ctx.r6.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824912C8) {
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
	ctx.lr = 0x824912D0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x824912f4
	if (!ctx.cr6.eq) goto loc_824912F4;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x82491428
	goto loc_82491428;
loc_824912F4:
	// lbz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + r28.u32);
	// extsh r30,r5
	r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x824913e0
	if (ctx.cr6.lt) goto loc_824913E0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = r30.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x824913d8
	if (!ctx.cr6.lt) goto loc_824913D8;
loc_82491340:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8249136c
	if (ctx.cr6.lt) goto loc_8249136C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x8249135C;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82491340
	if (ctx.cr6.eq) goto loc_82491340;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82491420
	goto loc_82491420;
loc_8249136C:
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
loc_824913D8:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82491420
	goto loc_82491420;
loc_824913E0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x824913E8;
	sub_82337F50(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	r29.u64 = ctx.r11.u64 | 32768;
loc_824913F0:
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
	ctx.lr = 0x82491408;
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
	// blt cr6,0x824913f0
	if (ctx.cr6.lt) goto loc_824913F0;
loc_82491420:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x824915bc
	if (!ctx.cr6.eq) goto loc_824915BC;
loc_82491428:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x82491508
	if (ctx.cr6.eq) goto loc_82491508;
	// li r30,2
	r30.s64 = 2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x824914a8
	if (!ctx.cr6.lt) goto loc_824914A8;
loc_82491450:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824914a8
	if (ctx.cr6.eq) goto loc_824914A8;
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
	// bge 0x82491498
	if (!ctx.cr0.lt) goto loc_82491498;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82491498;
	sub_823380C8(ctx, base);
loc_82491498:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82491450
	if (ctx.cr6.gt) goto loc_82491450;
loc_824914A8:
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
	// bge 0x824914e0
	if (!ctx.cr0.lt) goto loc_824914E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x824914E0;
	sub_823380C8(ctx, base);
loc_824914E0:
	// srawi r11,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r11.s64 = r30.s32 >> 1;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// xor r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// subf r3,r9,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r9.u64;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_82491508:
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8249156c
	if (!ctx.cr6.lt) goto loc_8249156C;
loc_82491514:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249156c
	if (ctx.cr6.eq) goto loc_8249156C;
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
	// bge 0x8249155c
	if (!ctx.cr0.lt) goto loc_8249155C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8249155C;
	sub_823380C8(ctx, base);
loc_8249155C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82491514
	if (ctx.cr6.gt) goto loc_82491514;
loc_8249156C:
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
	// bge 0x824915a4
	if (!ctx.cr0.lt) goto loc_824915A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x824915A4;
	sub_823380C8(ctx, base);
loc_824915A4:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r3,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r3.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_824915BC:
	// cmpwi cr6,r30,125
	ctx.cr6.compare<int32_t>(r30.s32, 125, ctx.xer);
	// bne cr6,0x824916b4
	if (!ctx.cr6.eq) goto loc_824916B4;
	// lhz r11,72(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 72);
	// li r29,0
	r29.s64 = 0;
	// lhz r9,70(r27)
	ctx.r9.u64 = REX_LOAD_U16(r27.u32 + 70);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r30,r9,r11
	r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// ble cr6,0x824915ec
	if (!ctx.cr6.gt) goto loc_824915EC;
loc_824915E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82491690
	goto loc_82491690;
loc_824915EC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824915e4
	if (ctx.cr6.eq) goto loc_824915E4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82491654
	if (!ctx.cr6.gt) goto loc_82491654;
loc_824915FC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82491654
	if (ctx.cr6.eq) goto loc_82491654;
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
	// bge 0x82491644
	if (!ctx.cr0.lt) goto loc_82491644;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82491644;
	sub_823380C8(ctx, base);
loc_82491644:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x824915fc
	if (ctx.cr6.gt) goto loc_824915FC;
loc_82491654:
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
	// bge 0x8249168c
	if (!ctx.cr0.lt) goto loc_8249168C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8249168C;
	sub_823380C8(ctx, base);
loc_8249168C:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82491690:
	// lhz r9,72(r27)
	ctx.r9.u64 = REX_LOAD_U16(r27.u32 + 72);
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r10,r8,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// sraw r3,r11,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r3.s64 = ctx.r11.s32 >> temp.u32;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_824916B4:
	// cmpwi cr6,r30,251
	ctx.cr6.compare<int32_t>(r30.s32, 251, ctx.xer);
	// ble cr6,0x824916d8
	if (!ctx.cr6.gt) goto loc_824916D8;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_824916D8:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// clrlwi r11,r8,28
	ctx.r11.u64 = ctx.r8.u32 & 0xF;
	// clrlwi r28,r7,28
	r28.u64 = ctx.r7.u32 & 0xF;
	// srawi r6,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 8;
	// srawi r5,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 16;
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// srawi r4,r8,24
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 24;
	// clrlwi r27,r6,24
	r27.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r26,r5,24
	r26.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r25,r4,24
	r25.u64 = ctx.r4.u32 & 0xFF;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// ble cr6,0x82491728
	if (!ctx.cr6.gt) goto loc_82491728;
loc_82491720:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x824917cc
	goto loc_824917CC;
loc_82491728:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82491720
	if (ctx.cr6.eq) goto loc_82491720;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82491790
	if (!ctx.cr6.gt) goto loc_82491790;
loc_82491738:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82491790
	if (ctx.cr6.eq) goto loc_82491790;
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
	// bge 0x82491780
	if (!ctx.cr0.lt) goto loc_82491780;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82491780;
	sub_823380C8(ctx, base);
loc_82491780:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82491738
	if (ctx.cr6.gt) goto loc_82491738;
loc_82491790:
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
	// bge 0x824917c8
	if (!ctx.cr0.lt) goto loc_824917C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x824917C8;
	sub_823380C8(ctx, base);
loc_824917C8:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_824917CC:
	// li r9,1
	ctx.r9.s64 = 1;
	// sraw r11,r10,r28
	temp.u32 = r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// slw r9,r9,r28
	ctx.r9.u64 = r28.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r28.u8 & 0x3F));
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// clrlwi r5,r7,31
	ctx.r5.u64 = ctx.r7.u32 & 0x1;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + r26.u64;
	// neg r3,r5
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// neg r11,r6
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// xor r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// subf r8,r3,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r3.u64;
	// xor r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r11,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r11,r25,r6
	ctx.r11.u64 = ctx.r6.u64 - r25.u64;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_824ACB58) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// vspltisb v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// vspltish v4,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_set1_epi16(short(0x1)));
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// vspltish v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x2)));
	// li r5,1
	ctx.r5.s64 = 1;
	// vspltish v10,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x4)));
	// and r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 & ctx.r8.u64;
	// vspltish v3,5
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_set1_epi16(short(0x5)));
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// li r8,16
	ctx.r8.s64 = 16;
	// slw r7,r5,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// bne cr6,0x824acc80
	if (!ctx.cr6.eq) goto loc_824ACC80;
	// lvx128 v60,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvx128 v61,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v11,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v59,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v9,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vperm128 v31,v58,v59,v5
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v11,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v12,v13,v31
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// ble cr6,0x824acdb4
	if (!ctx.cr6.gt) goto loc_824ACDB4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
loc_824ACBE8:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vslh v8,v12,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v7,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vslh v31,v11,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v5,v11,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// vslh v6,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v30,v7,v8
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// lvx128 v57,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v5,v31,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v29,v6,v12
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// vperm128 v31,v56,v57,v7
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v6,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v30,v29,v30
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vmrghb v8,v13,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vsubshs v29,v9,v6
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vor v9,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor v11,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vadduhm v28,v30,v5
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vslh v27,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v12,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vadduhm v26,v28,v2
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsubshs v25,v13,v27
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vadduhm v24,v29,v25
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v8,v26,v24
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vsrah v23,v8,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v55,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// stvewx128 v55,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v55,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// blt cr6,0x824acbe8
	if (ctx.cr6.lt) goto loc_824ACBE8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_824ACC80:
	// lvx128 v51,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v54,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvx128 v53,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v53,v51,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v50,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v11,v54,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v49,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v9,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vperm128 v5,v49,v50,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v7,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v6,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v8,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v12,v13,v5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v11,v13,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// ble cr6,0x824acdb4
	if (!ctx.cr6.gt) goto loc_824ACDB4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_824ACCD0:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vslh v5,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v12,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vslh v26,v11,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor128 v46,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// vslh v31,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v48,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v24,v7,v5
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// lvx128 v47,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v29,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// vperm128 v5,v47,v48,v3
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vslh v25,v11,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v6,v31
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// vslh v22,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v9,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v8,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v7,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v6,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vadduhm v17,v29,v11
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v18,v30,v12
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vor v9,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vmrghb v12,v13,v5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vor v8,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vmrglb v11,v13,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vadduhm v16,v27,v28
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v15,v25,v26
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v31,v21,v22
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v29,v19,v20
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v30,v18,v16
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vslh v5,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v28,v17,v15
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vslh v14,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v30,v31
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vsubshs v25,v13,v5
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vadduhm v22,v28,v29
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vsubshs v27,v13,v14
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vadduhm v20,v26,v2
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v19,v23,v25
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v18,v22,v2
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v21,v24,v27
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vor128 v3,v46,v46
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v46.u8));
	// vadduhm v31,v18,v19
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v5,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vsrah v16,v31,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v5,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v45,v17,v16
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// stvx128 v45,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// blt cr6,0x824accd0
	if (ctx.cr6.lt) goto loc_824ACCD0;
loc_824ACDB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824B6EA8) {
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
	ctx.lr = 0x824B6EB0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1152(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 1152);
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// vspltish v0,6
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x6)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r31,1164(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 1164);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r28,260(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v12,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xD0C))));
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stvx128 v12,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// bl 0x824a6648
	ctx.lr = 0x824B6F04;
	sub_824A6648(ctx, base);
	// cntlzw r7,r28
	ctx.r7.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// vspltish v11,8
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x8)));
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// vspltish v10,-1
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// vspltisb v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// and r9,r5,r27
	ctx.r9.u64 = ctx.r5.u64 & r27.u64;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// addi r4,r9,3
	ctx.r4.s64 = ctx.r9.s64 + 3;
	// vslh v2,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v11,4
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x4)));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// slw r9,r6,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r4.u8 & 0x3F));
	// vspltish v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x0)));
	// bne cr6,0x824b7000
	if (!ctx.cr6.eq) goto loc_824B7000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824b70f8
	if (!ctx.cr6.gt) goto loc_824B70F8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_824B6F64:
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
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
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
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
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// bdnz 0x824b6f64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B6F64;
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed4
	return;
loc_824B7000:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824b70f8
	if (!ctx.cr6.gt) goto loc_824B70F8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_824B7018:
	// lvx128 v0,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
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
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
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
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// bdnz 0x824b7018
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B7018;
loc_824B70F8:
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed4
	return;
}

